/*
 * linux/include/asm-i386/dyntick.h
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

#ifndef _ASM_I386_dyntick_H_
#define _ASM_I386_dyntick_H_

#include <asm/apic.h>
#include <asm/timer.h>

#ifdef CONFIG_NO_IDLE_HZ
extern void idle_reprogram_timer(void);
extern void __dyntick_interrupt(struct pt_regs *regs);
extern void dyntick_interrupt(struct pt_regs *regs);
extern void __init setup_dyntick_use_apic(void);
extern void __init dyntick_time_init(struct timer_opts *cur_timer);
extern void set_irq_idle_timestamp(const unsigned long next);

#define PIT_MAX_SKIP	(0xffff / (LATCH))

#if (defined(CONFIG_SMP) || defined(CONFIG_X86_UP_APIC))
extern int using_apic_timer;

static inline void start_local_apic(void)
{
	using_apic_timer = 1;
	enable_APIC_timer();
}

static inline void stop_local_apic(void)
{
	disable_APIC_timer();
	using_apic_timer = 0;
}
#else /* (defined(CONFIG_SMP) || defined(CONFIG_X86_UP_APIC)) */
static inline void start_local_apic(void)
{
}

static inline void stop_local_apic(void)
{
}
#endif /* (defined(CONFIG_SMP) || defined(CONFIG_X86_UP_APIC)) */
#else	/* CONFIG_NO_IDLE_HZ */
static inline void idle_reprogram_timer(void)
{
}

static inline void __dyntick_interrupt(struct pt_regs *__unused)
{
}

static inline void dyntick_interrupt(struct pt_regs *__unused)
{
}

static inline void setup_dyntick_use_apic(void)
{
}

static inline void dyntick_time_init(struct timer_opts *__unused)
{
}
#endif	/* CONFIG_NO_IDLE_HZ */

#endif /* _ASM_I386_dyntick_H_ */
