#ifndef _ASM_M32R_SYSTEM_H
#define _ASM_M32R_SYSTEM_H

/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001  by Hiroyuki Kondo, Hirokazu Takata, and Hitoshi Yamamoto
 * Copyright (C) 2004  Hirokazu Takata <takata at linux-m32r.org>
 */

#define nop()	__asm__ __volatile__ ("nop" : : )

#define xchg(ptr,x) \
	((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))

#define tas(ptr)	(xchg((ptr),1))

#ifdef CONFIG_SMP
extern void  __xchg_called_with_bad_pointer(void);
#endif

#ifdef CONFIG_CHIP_M32700_TS1
#define DCACHE_CLEAR(reg0, reg1, addr)				\
	"seth	"reg1", #high(dcache_dummy);		\n\t"	\
	"or3	"reg1", "reg1", #low(dcache_dummy);	\n\t"	\
	"lock	"reg0", @"reg1";			\n\t"	\
	"add3	"reg0", "addr", #0x1000;		\n\t"	\
	"ld	"reg0", @"reg0";			\n\t"	\
	"add3	"reg0", "addr", #0x2000;		\n\t"	\
	"ld	"reg0", @"reg0";			\n\t"	\
	"unlock	"reg0", @"reg1";			\n\t"
	/* FIXME: This workaround code cannot handle kenrel modules
	 * correctly under SMP environment.
	 */
#else	/* CONFIG_CHIP_M32700_TS1 */
#define DCACHE_CLEAR(reg0, reg1, addr)
#endif	/* CONFIG_CHIP_M32700_TS1 */

static __inline__ unsigned long __xchg(unsigned long x, volatile void * ptr,
	int size)
{
	unsigned long flags;
	unsigned long tmp = 0;

	local_irq_save(flags);

	switch (size) {
#ifndef CONFIG_SMP
	case 1:
		__asm__ __volatile__ (
			"ldb	%0, @%2 \n\t"
			"stb	%1, @%2 \n\t"
			: "=&r" (tmp) : "r" (x), "r" (ptr) : "memory");
		break;
	case 2:
		__asm__ __volatile__ (
			"ldh	%0, @%2 \n\t"
			"sth	%1, @%2 \n\t"
			: "=&r" (tmp) : "r" (x), "r" (ptr) : "memory");
		break;
	case 4:
		__asm__ __volatile__ (
			"ld	%0, @%2 \n\t"
			"st	%1, @%2 \n\t"
			: "=&r" (tmp) : "r" (x), "r" (ptr) : "memory");
		break;
#else  /* CONFIG_SMP */
	case 4:
		__asm__ __volatile__ (
			DCACHE_CLEAR("%0", "r4", "%2")
			"lock	%0, @%2;	\n\t"
			"unlock	%1, @%2;	\n\t"
			: "=&r" (tmp) : "r" (x), "r" (ptr)
			: "memory"
#ifdef CONFIG_CHIP_M32700_TS1
			, "r4"
#endif	/* CONFIG_CHIP_M32700_TS1 */
		);
		break;
	default:
		__xchg_called_with_bad_pointer();
#endif  /* CONFIG_SMP */
	}

	local_irq_restore(flags);

	return (tmp);
}

/*
 * Memory barrier.
 *
 * mb() prevents loads and stores being reordered across this point.
 * rmb() prevents loads being reordered across this point.
 * wmb() prevents stores being reordered across this point.
 */
#define mb()   barrier()
#define rmb()  mb()
#define wmb()  mb()

/**
 * read_barrier_depends - Flush all pending reads that subsequents reads
 * depend on.
 *
 * No data-dependent reads from memory-like regions are ever reordered
 * over this barrier.  All reads preceding this primitive are guaranteed
 * to access memory (but not necessarily other CPUs' caches) before any
 * reads following this primitive that depend on the data return by
 * any of the preceding reads.  This primitive is much lighter weight than
 * rmb() on most CPUs, and is never heavier weight than is
 * rmb().
 *
 * These ordering constraints are respected by both the local CPU
 * and the compiler.
 *
 * Ordering is not guaranteed by anything other than these primitives,
 * not even by data dependencies.  See the documentation for
 * memory_barrier() for examples and URLs to more information.
 *
 * For example, the following code would force ordering (the initial
 * value of "a" is zero, "b" is one, and "p" is "&a"):
 *
 * <programlisting>
 *      CPU 0                           CPU 1
 *
 *      b = 2;
 *      memory_barrier();
 *      p = &b;                         q = p;
 *                                      read_barrier_depends();
 *                                      d = *q;
 * </programlisting>
 *
 *
 * because the read of "*q" depends on the read of "p" and these
 * two reads are separated by a read_barrier_depends().  However,
 * the following code, with the same initial values for "a" and "b":
 *
 * <programlisting>
 *      CPU 0                           CPU 1
 *
 *      a = 2;
 *      memory_barrier();
 *      b = 3;                          y = b;
 *                                      read_barrier_depends();
 *                                      x = a;
 * </programlisting>
 *
 * does not enforce ordering, since there is no data dependency between
 * the read of "a" and the read of "b".  Therefore, on some CPUs, such
 * as Alpha, "y" could be set to 3 and "x" to 0.  Use rmb()
 * in cases like thiswhere there are no data dependencies.
 **/

#define read_barrier_depends()	do { } while (0)

#ifdef CONFIG_SMP
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#else
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do { } while (0)
#endif

#define set_mb(var, value) do { xchg(&var, value); } while (0)
#define set_wmb(var, value) do { var = value; wmb(); } while (0)

#endif  /* _ASM_M32R_SYSTEM_H */
