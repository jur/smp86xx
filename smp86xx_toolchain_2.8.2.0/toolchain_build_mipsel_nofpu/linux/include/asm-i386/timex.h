/*
 * linux/include/asm-i386/timex.h
 *
 * i386 architecture timex specifications
 */
#ifndef _ASMi386_TIMEX_H
#define _ASMi386_TIMEX_H

#ifdef CONFIG_X86_ELAN
#  define CLOCK_TICK_RATE 1189200 /* AMD Elan has different frequency! */
#else
#  define CLOCK_TICK_RATE 1193182 /* Underlying HZ */
#endif


/*
 * Standard way to access the cycle counter on i586+ CPUs.
 * Currently only used on SMP.
 *
 * If you really have a SMP machine with i486 chips or older,
 * compile for that, and this will just always return zero.
 * That's ok, it just means that the nicer scheduling heuristics
 * won't work for you.
 *
 * We only use the low 32 bits, and we'd simply better make sure
 * that we reschedule before that wraps. Scheduling at least every
 * four billion cycles just basically sounds like a good idea,
 * regardless of how fast the machine is. 
 */
typedef unsigned long long cycles_t;

#endif
