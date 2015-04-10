/*
 * linux/kernel/dyntick.c
 *
 * Generic dynamic tick timer support
 *
 * Copyright (C) 2004 Nokia Corporation
 * Written by Tony Lindgen <tony@atomide.com> and
 * Tuukka Tikkanen <tuukka.tikkanen@elektrobit.com>
 * Rewritten by Con Kolivas <kernel@kolivas.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/version.h>
#include <linux/config.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/sysdev.h>
#include <linux/interrupt.h>
#include <linux/cpumask.h>
#include <linux/pm.h>
#include <linux/dyntick.h>
#include <linux/rcupdate.h>
#include <asm/dyntick.h>

#define dyntick_VERSION	"060227"

DEFINE_PER_CPU(dyntick_data, dyn_cpu);

inline int dyntick_enabled(void)
{
	return !!(dyntick->state & dyntick_ENABLED);
}

EXPORT_SYMBOL(dyntick_enabled);


/*
 * Returns if we are currently skipping ticks. Cheaper to check the per_cpu
 * data than to lock dyn_tick->lock and then check dyn_tick->state.
 */
static int __dyntick_skipping(void)
{
	return time_after(__get_cpu_var(dyn_cpu).next_tick, jiffies);
}

int dyntick_skipping(void)
{
	int ret;

	preempt_disable();
	ret = __dyntick_skipping();
	preempt_enable_no_resched();
	return ret;
}

EXPORT_SYMBOL(dyntick_skipping);

inline int dyntick_allcpus_skipping(void)
{
	return !!(dyntick->state & dyntick_SKIPPING);
}

EXPORT_SYMBOL(dyntick_allcpus_skipping);

/*
 * Returns the number of ticks we are currently skipping if we are skipping
 */
int dyntick_current_skip(void)
{
	int ret = 0;

	preempt_disable();
	if (__dyntick_skipping())
		ret = __get_cpu_var(dyn_cpu).skip;
	preempt_enable_no_resched();
	return ret;
}

EXPORT_SYMBOL(dyntick_current_skip);

/*
 * Returns the next scheduled dyntick if we are skipping ticks.
 */
unsigned long dyntick_next_tick(void)
{
	unsigned long next = 0;

	preempt_disable();
	if (__dyntick_skipping())
		next = __get_cpu_var(dyn_cpu).next_tick;
	preempt_enable_no_resched();
	return next;
}

EXPORT_SYMBOL(dyntick_next_tick);

static inline int dyntick_suitable(void)
{
	return !!(dyntick->state & dyntick_SUITABLE);
}

/*
 * do_dyn_reprogram does the actual reprogramming. We should have already
 * checked that the tick chosen is suitable, xtime_lock and dyntick->lock
 * must be held, and interrupts disabled. We should already have checked
 * that jiffies + delta does not overflow.
 */
static void do_dyn_reprogram(long delta)
{
	unsigned long next = jiffies + delta;

	__get_cpu_var(dyn_cpu).next_tick = next;
	__get_cpu_var(dyn_cpu).skip = delta;
	dyntick->arch_reprogram(next);
	/* We have to update the idle_timestamp */
	set_irq_idle_timestamp(next);
}

/*
 * Arch independent code needed to reprogram next timer interrupt.
 * Gets called, with IRQs disabled, from cpu_idle() before entering idle loop
 * If we are to acquire the xtime_lock we must acquire it before
 * dyntick->lock
 */
void timer_dyn_reprogram(void)
{
	int cpu;
	long delta;

	if (!dyntick_enabled())
		return;

	cpu = smp_processor_id();
	if (rcu_pending(cpu) || local_softirq_pending()) {
		spin_lock(&dyntick->lock);
		clear_nohz_cpu(cpu);
		spin_unlock(&dyntick->lock);
		return;
	}

	write_seqlock(&xtime_lock);
	delta = next_timer_interrupt() - jiffies;
	/*
	 * If delta < 0 we have jiffy wrap so it would be a bad time to
	 * reprogram without overflowing variables elsewhere. The check for
	 * > min_skip also effectively prevents this.
	 */
	if (delta > dyntick->min_skip) {
		if (delta > dyntick->max_skip)
			delta = dyntick->max_skip;
		spin_lock(&dyntick->lock);
		do_dyn_reprogram(delta);
		set_nohz_cpu(cpu);
		spin_unlock(&dyntick->lock);
	}
	write_sequnlock(&xtime_lock);
}

/*
 * dyn_early_reprogram allows other code such as the acpi idle code to
 * program an earlier tick than the one already chosen by timer_dyn_reprogram.
 * It only reprograms it if the tick is earlier than the next one planned.
 * Other code ensures we won't be skipping over jiffy wrap so it doesn't
 * matter if jiffies + delta overflows as it will never be within the skipping
 * period.
 */
void dyn_early_reprogram(unsigned int delta)
{
	unsigned long flags, tick = jiffies + delta;

	preempt_disable();
	if (!__dyntick_skipping() || !time_after(tick, jiffies) ||
		time_after_eq(tick, __get_cpu_var(dyn_cpu).next_tick))
			goto put_out;

	write_seqlock_irqsave(&xtime_lock, flags);
	spin_lock(&dyntick->lock);
	do_dyn_reprogram(delta);
	spin_unlock(&dyntick->lock);
	write_sequnlock_irqrestore(&xtime_lock, flags);
put_out:
	preempt_enable_no_resched();
}

EXPORT_SYMBOL(dyn_early_reprogram);

/*
 * Set limits on minimum and maximum number of ticks to skip. The minimum
 * may want to be set by other code but is at least one tick.
 */
void set_dyntick_limits(unsigned int max_skip, unsigned int min_skip)
{
	if (max_skip > dyntick_MAX_SKIP)
		max_skip = dyntick_MAX_SKIP;
	if (!dyntick->max_skip || max_skip < dyntick->max_skip)
		dyntick->max_skip = max_skip;
	if (min_skip < 1)
		min_skip = 1;
	if (min_skip > dyntick->min_skip)
		dyntick->min_skip = min_skip;
}

void __init dyntick_register(struct dyntick_timer *arch_timer)
{
	dyntick = arch_timer;
}

/* Default to enabled */
static int __initdata dyntick_autoenable = 1;

/*
 * Command line options.
 *
 *  dyntick=[enable|disable]
 */
static int __init dyntick_setup(char *options)
{
	if (!options)
		return 0;

	if (!strncmp(options, "enable", 5))
		dyntick_autoenable = 1;
	if (!strncmp(options, "disable", 6))
		dyntick_autoenable = 0;

	return 0;
}

__setup("dyntick=", dyntick_setup);

/*
 * Sysfs interface.
 *
 * Usually situated at:
 *  /sys/devices/system/timer/timer0/dyntick
 */
extern struct sys_device device_timer;

static ssize_t timer_show_dyntick(struct sys_device *dev, char *buf)
{
	return sprintf(buf, "%i\n", dyntick_enabled());
}

static ssize_t timer_set_dyntick(struct sys_device *dev, const char *buf,
				  size_t count)
{
	unsigned long flags;
	unsigned int enable = simple_strtoul(buf, NULL, 2);
	int ret = -ENODEV;

	write_seqlock_irqsave(&xtime_lock, flags);
	if (enable) {
		ret = dyntick->arch_enable();
		if (ret == 0) {
			spin_lock(&dyntick->lock);
			dyntick->state |= dyntick_ENABLED;
			spin_unlock(&dyntick->lock);
			printk(KERN_INFO
				"dyntick: Enabling dynamic tick timer \n");
		}
	} else {
		ret = dyntick->arch_disable();
		if (ret == 0) {
			spin_lock(&dyntick->lock);
			dyntick->state &= ~dyntick_ENABLED;
			spin_unlock(&dyntick->lock);
			printk(KERN_INFO
				"dyntick: Disabling dynamic tick timer \n");
		}
	}
	write_sequnlock_irqrestore(&xtime_lock, flags);

	return count;
}

static SYSDEV_ATTR(dyntick, 0644, timer_show_dyntick, timer_set_dyntick);

static int __init init_dyntick_sysfs(void)
{
	int ret = sysdev_create_file(&device_timer, &attr_dyntick);

	return ret;
}

device_initcall(init_dyntick_sysfs);

/*
 * Init functions
 *
 * We need to initialise dynamic tick after calibrate delay
 */
static int __init dyntick_late_init(void)
{
	int ret;

	if (dyntick == NULL || dyntick->arch_init == NULL ||
	    !dyntick_suitable()) {
		printk(KERN_ERR "dyntick: No suitable timer found\n");
		return -ENODEV;
	}

	if ((ret = dyntick->arch_init())) {
		printk(KERN_ERR "dyntick: Init failed\n");
		return -ENODEV;
	}

	if (!ret && dyntick_autoenable) {
		dyntick->state |= dyntick_ENABLED;
		printk(KERN_INFO "dyntick: Enabling dynamic tick timer v%s\n",
			dyntick_VERSION);
	} else
		printk(KERN_INFO "dyntick: Dynamic tick timer v%s disabled\n",
			dyntick_VERSION);

	return ret;
}

late_initcall(dyntick_late_init);
