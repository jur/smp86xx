/*
 * linux/arch/i386/kernel/dyntick.c
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
#include <linux/dyntick.h>
#include <linux/timer.h>
#include <linux/irq.h>
#include <linux/kernel_stat.h>
#include <linux/delay.h>
#include <asm/apic.h>
#include <asm/dyntick.h>
#include <asm/io.h>
#include <asm/arch_hooks.h>
#include "do_timer.h"

/*
 * These handlers deal with all cpus idle on either UP or SMP.
 */
static void reprogram_pit_handler(unsigned int skip)
{
	reprogram_pit_timer(skip);
}

static void smp_idle_handler(unsigned int skip)
{
	if (skip > PIT_MAX_SKIP) {
		/*
		 * The PIT timer skips significantly less duration than the
		 * APIC timer, so we limit it to PIT_MAX_SKIP. As this is the
		 * last cpu to fall idle we also reprogram its APIC timer to
		 * wake at the same time.
		 */
		unsigned long next;

		skip = PIT_MAX_SKIP;
		next = jiffies + skip;
		dyntick->tick = next;
		__get_cpu_var(dyn_cpu).next_tick = next;
	}
	reprogram_pit_timer(skip);
}

/*
 * These reset functions start timers at maximum frequency when the cpus are
 * busy again or when dynticks are disabled
 */
static inline void reset_pit_timer(void)
{
	reprogram_pit_timer(1);
}

static void reset_apic_timer(void)
{
	reprogram_apic_timer(1);
}

/*
 * Null handlers are used initially while APIC timers are set up as ticks
 * start before the APIC timer is enabled and do_timer_interrupt_hook
 * changes its behaviour after they are started
 */
static void null_reprogram(unsigned long __unused)
{
}

static void null_idle_handler(unsigned int __unused)
{
}

static void null_wake(void)
{
}

/*
 * Labels for the different skip mechanisms used
 */
enum skip_handler {
	SKIP_PIT,
	SKIP_APIC,
	SKIP_SMP_APIC,
};

struct dyn_handler {
	enum skip_handler skip_handler;
	void (*cpu_wake)(void);
} dyn_handler = {
	.skip_handler = SKIP_PIT,
	.cpu_wake = &null_wake,
};

/*
 * The per cpu APIC timer skip function
 */
static void apic_reprogram(unsigned long jif_next)
{
	reprogram_apic_timer(jif_next - jiffies);
}

static int arch_enable(void)
{
	switch (dyn_handler.skip_handler) {
		case SKIP_APIC:
			stop_local_apic();
		default:
			break;
	}
	return 0;
}

static int arch_disable(void)
{
	reset_pit_timer();
	switch (dyn_handler.skip_handler) {
		case SKIP_PIT:
			break;
		case SKIP_APIC:
			start_local_apic();
			break;
		case SKIP_SMP_APIC:
			reset_apic_timer();
			break;
	}
	return 0;
}

static struct dyntick_timer arch_dyntick = {
	.lock			= SPIN_LOCK_UNLOCKED,
	.arch_reprogram		= &null_reprogram,
	.arch_all_cpus_idle	= &null_idle_handler,
	.arch_enable		= &arch_enable,
	.arch_disable		= &arch_disable,
};

struct dyntick_timer *dyntick = &arch_dyntick;

/*
 * Only PIT timer skipping is reliable so this is used on all configurations.
 * All PIT skipping is done from arch_all_cpus_idle in either UP or SMP.
 * When local APIC support on UP is enabled, the local APIC timer is disabled
 * when dynticks is enabled and the PIT timer is used. On SMP each cpu also
 * skips APIC ticks according to its own next timer interrupt from
 * arch_reprogram.
 */
int __init dyntick_arch_init(void)
{
	if (dyn_handler.skip_handler == SKIP_APIC && num_present_cpus()> 1)
		dyn_handler.skip_handler = SKIP_SMP_APIC;

	switch (dyn_handler.skip_handler) {
		case SKIP_PIT:
			printk(KERN_INFO "dyntick: Using PIT "
				"reprogramming\n");
			dyntick->arch_all_cpus_idle = &reprogram_pit_handler;
			set_dyntick_limits(PIT_MAX_SKIP, 1);
			break;
		case SKIP_APIC:
			printk(KERN_INFO "dyntick: Disabling APIC timer, "
				"using PIT reprogramming\n");
			dyntick->arch_all_cpus_idle = &reprogram_pit_handler;
			set_dyntick_limits(PIT_MAX_SKIP, 1);
			stop_local_apic();
			break;
		case SKIP_SMP_APIC:
			printk(KERN_INFO "dyntick: Using per cpu APIC "
				"reprogramming, skipping PIT when all cpus "
				"idle\n");
			dyntick->arch_reprogram = &apic_reprogram;
			dyntick->arch_all_cpus_idle = &smp_idle_handler;
			dyn_handler.cpu_wake = &reset_apic_timer;
			break;
	}
	cpus_clear(nohz_cpu_mask);
	printk(KERN_INFO "dyntick: Maximum ticks to skip limited to %i\n",
		dyntick->max_skip);

	return 0;
}

static int __init dyntick_init(void)
{
	dyntick->arch_init = dyntick_arch_init;
	dyntick_register(&arch_dyntick);

	return 0;
}

arch_initcall(dyntick_init);

void __init setup_dyntick_use_apic(void)
{
	dyn_handler.skip_handler = SKIP_APIC;
}

/*
 * When an interrupt occurs on a cpu that is already skipping, that cpu's
 * timer is restarted at maximum frequency with cpu_wake if needed on SMP.
 * The nohz_cpu_mask is checked at this point to see if all cpus are idle.
 * When all cpus are detected as being idle (which is always true on UP when
 * one is idle), the PIT timer is restarted at maximum frequency, and lost
 * ticks are accounted for.
 */
static void do_dyntick_interrupt(struct pt_regs *regs)
{
	int cpu = smp_processor_id();

	dyn_handler.cpu_wake();

	spin_lock(&dyntick->lock);
	if (clear_nohz_cpu(cpu)) {
		int lost;

		spin_unlock(&dyntick->lock);

		reset_pit_timer();

		write_seqlock(&xtime_lock);
		lost = cur_timer->mark_offset();
		if (lost && in_irq())
			do_timer(regs);
		write_sequnlock(&xtime_lock);

		kstat_cpu(0).cpustat.idle += (lost - 1);
		conditional_run_local_timers();
	} else
		spin_unlock(&dyntick->lock);
}

/*
 * This is called from all interrupt handlers. It checks per_cpu data first
 * to see that this cpu is not currently skipping ticks. If it is skipping
 * ticks it calls do_dyntick_interrupt.
 */
inline void __dyntick_interrupt(struct pt_regs *regs)
{
	if (test_nohz_cpu())
		do_dyntick_interrupt(regs);
}

void dyntick_interrupt(struct pt_regs *regs)
{
	preempt_disable();
	__dyntick_interrupt(regs);
	preempt_enable_no_resched();
}

/* Updates the irq idle timestamp when we reprogram it */
void set_irq_idle_timestamp(const unsigned long next)
{
	__get_cpu_var(irq_stat).idle_timestamp = next;
}

/*
 * Called from every idle tick.
 */
inline void idle_reprogram_timer(void)
{
	local_irq_disable();
	if (!need_resched())
		timer_dyn_reprogram();
	local_irq_enable();
}

void __init dyntick_time_init(struct timer_opts *cur_timer)
{
	if (strncmp(cur_timer->name, "pmtmr", 3) == 0) {
		dyntick->state |= dyntick_SUITABLE;
		printk(KERN_INFO "dyntick: Found suitable timer: %s\n",
			cur_timer->name);
	} else
		printk(KERN_ERR "dyntick: Cannot use timer %s - pmtmr "
			"failed: ACPI disabled?\n", cur_timer->name);
}
