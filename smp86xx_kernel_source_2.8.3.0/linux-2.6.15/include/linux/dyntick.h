/*
 * linux/include/linux/dyntick.h
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

#ifndef _dyntick_TIMER_H
#define _dyntick_TIMER_H

#include <linux/interrupt.h>

#define dyntick_SKIPPING	(1 << 2)
#define dyntick_ENABLED		(1 << 1)
#define dyntick_SUITABLE	(1 << 0)

/* Don't skip longer than NMI  */
#define dyntick_MAX_SKIP	(HZ * 5)

struct dyntick_timer {
	spinlock_t lock;

	/* dyntick init */
	int (*arch_init)(void);
	/* Enables dynamic tick */
	int (*arch_enable)(void);
	/* Disables dynamic tick */
	int (*arch_disable)(void);
	/* Reprograms the timer */
	void (*arch_reprogram)(unsigned long);
	/* Function called when all cpus are idle, passing the idle duration */
	void (*arch_all_cpus_idle)(unsigned int);

	unsigned short state;		/* Current state */
	unsigned short min_skip;	/* Min number of ticks to skip */
	unsigned int max_skip;		/* Max number of ticks to skip */
	unsigned long tick;		/* The next earliest tick */
};

typedef struct {
	unsigned long next_tick;	/* Next tick we're skipping to */
	unsigned long skip;		/* Ticks we're currently skipping */
	unsigned int nohz_cpu;		/* This cpu is idle */
} dyntick_data;

extern struct dyntick_timer *dyntick;
extern spinlock_t *dyntick_lock;

extern void dyntick_register(struct dyntick_timer *new_timer);

#ifdef CONFIG_NO_IDLE_HZ
DECLARE_PER_CPU(dyntick_data, dyn_cpu);
extern dyntick_data dyn_cpu;
extern int dyntick_enabled(void);
extern int dyntick_skipping(void);
extern int dyntick_allcpus_skipping(void);
extern int dyntick_current_skip(void);
extern unsigned long dyntick_next_tick(void);
extern void timer_dyn_reprogram(void);
extern void dyn_early_reprogram(unsigned int delta);
extern void set_dyntick_limits(unsigned int max_skip, unsigned int min_skip);

/*
 * The apparently redundant per_cpu nohz_cpu value is tested in this
 * function and this is where we can avoid the cache thrashing of testing
 * nohz_cpu_mask when possible. Preempt must be disabled already.
 */
static inline int test_nohz_cpu(void)
{
	return __get_cpu_var(dyn_cpu).nohz_cpu;
}

/*
 * This cpu is busy, clear the nohz_cpu value, test to see if all were idle
 * till now. Returns whether all cpus were idle or not. Preempt should be
 * disabled.
 */
static inline int clear_nohz_cpu(int cpu)
{
	int ret = 0;

	if (!test_nohz_cpu())
		return ret;
	dyntick->tick = 0;
	if (cpus_equal(nohz_cpu_mask, cpu_online_map)) {
		dyntick->state &= ~dyntick_SKIPPING;
		ret = 1;
	}
	__get_cpu_var(dyn_cpu).next_tick = 0;
	__get_cpu_var(dyn_cpu).nohz_cpu = 0;
	cpu_clear(cpu, nohz_cpu_mask);
	return ret;
}

/*
 * This cpu has fallen idle, set the nohz_cpu value, test to see if all are
 * idle, and if so do dyntick->arch_all_cpus_idle(). Preempt should be
 * disabled.
 */
static inline void set_nohz_cpu(int cpu)
{
	if (dyntick->tick <= jiffies ||
		__get_cpu_var(dyn_cpu).next_tick < dyntick->tick)
			dyntick->tick = __get_cpu_var(dyn_cpu).next_tick;

	if (!test_nohz_cpu()) {
		__get_cpu_var(dyn_cpu).nohz_cpu = 1;
		cpu_set(cpu, nohz_cpu_mask);
	}
	if (cpus_equal(nohz_cpu_mask, cpu_online_map)) {
		dyntick->state |= dyntick_SKIPPING;
		dyntick->arch_all_cpus_idle(dyntick->tick - jiffies);
	}
}

#ifdef CONFIG_TIMER_INFO
extern int account_timer(unsigned long function, unsigned long data);
#else
static inline int account_timer(unsigned long function, unsigned long data)
{
	return 0;
}
#endif

#else	/* CONFIG_NO_IDLE_HZ */
static inline int dyntick_enabled(void)
{
	return 0;
}

static inline int dyntick_skipping(void)
{
	return 0;
}

static inline int dyntick_allcpus_skipping(void)
{
	return 0;
}

static inline int dyntick_current_skip(void)
{
	return 0;
}

static inline unsigned long dyntick_next_tick(void)
{
	return 0;
}

static inline void set_dyntick_limits(unsigned int max_skip,
	unsigned int min_skip)
{
}

static inline void dyn_early_reprogram(unsigned int delta)
{
}

static inline int account_timer(unsigned long function, unsigned long data)
{
	return 0;
}
#endif	/* CONFIG_NO_IDLE_HZ */

#endif	/* _dyntick_TIMER_H */
