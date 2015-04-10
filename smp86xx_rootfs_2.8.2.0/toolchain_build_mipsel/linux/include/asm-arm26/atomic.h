/*
 *  linux/include/asm-arm26/atomic.h
 *
 *  Copyright (c) 1996 Russell King.
 *  Modified for arm26 by Ian Molton
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  Changelog:
 *   25-11-2004 IM	Updated for 2.6.9
 *   27-06-1996	RMK	Created
 *   13-04-1997	RMK	Made functions atomic!
 *   07-12-1997	RMK	Upgraded for v2.1.
 *   26-08-1998	PJB	Added #ifdef __KERNEL__
 *
 *  FIXME - its probably worth seeing what these compile into...
 */
#ifndef __ASM_ARM_ATOMIC_H
#define __ASM_ARM_ATOMIC_H


#ifdef CONFIG_SMP
#error SMP is NOT supported
#endif

typedef struct { volatile int counter; } atomic_t;

#define ATOMIC_INIT(i)	{ (i) }

#endif
