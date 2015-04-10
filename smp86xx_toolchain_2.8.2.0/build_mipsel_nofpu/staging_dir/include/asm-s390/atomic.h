#ifndef __ARCH_S390_ATOMIC__
#define __ARCH_S390_ATOMIC__

/*
 *  include/asm-s390/atomic.h
 *
 *  S390 version
 *    Copyright (C) 1999-2003 IBM Deutschland Entwicklung GmbH, IBM Corporation
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com),
 *               Denis Joseph Barrow,
 *		 Arnd Bergmann (arndb@de.ibm.com)
 *
 *  Derived from "include/asm-i386/bitops.h"
 *    Copyright (C) 1992, Linus Torvalds
 *
 */

/*
 * Atomic operations that C can't guarantee us.  Useful for
 * resource counting etc..
 * S390 uses 'Compare And Swap' for atomicity in SMP enviroment
 */

typedef struct {
	volatile int counter;
} __attribute__ ((aligned (4))) atomic_t;
#define ATOMIC_INIT(i)  { (i) }

#endif /* __ARCH_S390_ATOMIC__  */
