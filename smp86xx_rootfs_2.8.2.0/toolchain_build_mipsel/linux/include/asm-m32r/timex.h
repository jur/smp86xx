#ifndef _ASM_M32R_TIMEX_H
#define _ASM_M32R_TIMEX_H

/* $Id: timex.h 5237 2004-10-22 16:58:50Z mmazur $ */

/*
 * linux/include/asm-m32r/timex.h
 *
 * m32r architecture timex specifications
 */


#define CLOCK_TICK_RATE	(CONFIG_BUS_CLOCK / CONFIG_TIMER_DIVIDE)
#define CLOCK_TICK_FACTOR	20	/* Factor of both 1000000 and CLOCK_TICK_RATE */
#define FINETUNE ((((((long)LATCH * HZ - CLOCK_TICK_RATE) << SHIFT_HZ) * \
	(1000000/CLOCK_TICK_FACTOR) / (CLOCK_TICK_RATE/CLOCK_TICK_FACTOR)) \
		<< (SHIFT_SCALE-SHIFT_HZ)) / HZ)

#endif  /* _ASM_M32R_TIMEX_H */
