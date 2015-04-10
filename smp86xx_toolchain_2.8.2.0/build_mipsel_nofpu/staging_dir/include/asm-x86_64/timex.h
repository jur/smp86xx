/*
 * linux/include/asm-x86_64/timex.h
 *
 * x86-64 architecture timex specifications
 */
#ifndef _ASMx8664_TIMEX_H
#define _ASMx8664_TIMEX_H

#include <asm/8253pit.h>

#define CLOCK_TICK_RATE	PIT_TICK_RATE /* Underlying HZ */

typedef unsigned long long cycles_t;


#endif
