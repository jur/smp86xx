#ifndef __ASM_SPINLOCK_H
#define __ASM_SPINLOCK_H

/*
 * Simple spin lock operations.  
 *
 * Copyright (C) 2001-2004 Paul Mackerras <paulus@au.ibm.com>, IBM
 * Copyright (C) 2001 Anton Blanchard <anton@au.ibm.com>, IBM
 * Copyright (C) 2002 Dave Engebretsen <engebret@us.ibm.com>, IBM
 *	Rework to support virtual processors
 *
 * Type of int is used as a full 64b word is not necessary.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */
typedef struct {
	volatile unsigned int lock;
#ifdef CONFIG_PREEMPT
	unsigned int break_lock;
#endif
} spinlock_t;

typedef struct {
	volatile signed int lock;
#ifdef CONFIG_PREEMPT
	unsigned int break_lock;
#endif
} rwlock_t;

#endif /* __ASM_SPINLOCK_H */
