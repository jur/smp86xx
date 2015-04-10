/*
 * bitops.h: Bit string operations on the V9.
 *
 * Copyright 1996, 1997 David S. Miller (davem@caip.rutgers.edu)
 */

#ifndef _SPARC64_BITOPS_H
#define _SPARC64_BITOPS_H

#include <asm/byteorder.h>

extern int test_and_set_bit(unsigned long nr, volatile unsigned long *addr);
extern int test_and_clear_bit(unsigned long nr, volatile unsigned long *addr);
extern int test_and_change_bit(unsigned long nr, volatile unsigned long *addr);
extern void set_bit(unsigned long nr, volatile unsigned long *addr);
extern void clear_bit(unsigned long nr, volatile unsigned long *addr);
extern void change_bit(unsigned long nr, volatile unsigned long *addr);

/* "non-atomic" versions... */

static __inline__ void __set_bit(int nr, volatile unsigned long *addr)
{
	volatile unsigned long *m = addr + (nr >> 6);

	*m |= (1UL << (nr & 63));
}

static __inline__ void __clear_bit(int nr, volatile unsigned long *addr)
{
	volatile unsigned long *m = addr + (nr >> 6);

	*m &= ~(1UL << (nr & 63));
}

static __inline__ void __change_bit(int nr, volatile unsigned long *addr)
{
	volatile unsigned long *m = addr + (nr >> 6);

	*m ^= (1UL << (nr & 63));
}

static __inline__ int __test_and_set_bit(int nr, volatile unsigned long *addr)
{
	volatile unsigned long *m = addr + (nr >> 6);
	long old = *m;
	long mask = (1UL << (nr & 63));

	*m = (old | mask);
	return ((old & mask) != 0);
}

static __inline__ int __test_and_clear_bit(int nr, volatile unsigned long *addr)
{
	volatile unsigned long *m = addr + (nr >> 6);
	long old = *m;
	long mask = (1UL << (nr & 63));

	*m = (old & ~mask);
	return ((old & mask) != 0);
}

static __inline__ int __test_and_change_bit(int nr, volatile unsigned long *addr)
{
	volatile unsigned long *m = addr + (nr >> 6);
	long old = *m;
	long mask = (1UL << (nr & 63));

	*m = (old ^ mask);
	return ((old & mask) != 0);
}

#ifdef CONFIG_SMP
#define smp_mb__before_clear_bit()	membar("#StoreLoad | #LoadLoad")
#define smp_mb__after_clear_bit()	membar("#StoreLoad | #StoreStore")
#else
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
#endif

static __inline__ int test_bit(int nr, __const__ volatile unsigned long *addr)
{
	return (1UL & ((addr)[nr >> 6] >> (nr & 63))) != 0UL;
}

/* The easy/cheese version for now. */
static __inline__ unsigned long ffz(unsigned long word)
{
	unsigned long result;

	result = 0;
	while(word & 1) {
		result++;
		word >>= 1;
	}
	return result;
}

/**
 * __ffs - find first bit in word.
 * @word: The word to search
 *
 * Undefined if no bit exists, so code should check against 0 first.
 */
static __inline__ unsigned long __ffs(unsigned long word)
{
	unsigned long result = 0;

	while (!(word & 1UL)) {
		result++;
		word >>= 1;
	}
	return result;
}

/*
 * fls: find last bit set.
 */

#define fls(x) generic_fls(x)

/**
 * find_next_bit - find the next set bit in a memory region
 * @addr: The address to base the search on
 * @offset: The bitnumber to start searching at
 * @size: The maximum size to search
 */
extern unsigned long find_next_bit(const unsigned long *, unsigned long,
					unsigned long);

/**
 * find_first_bit - find the first set bit in a memory region
 * @addr: The address to start the search at
 * @size: The maximum size to search
 *
 * Returns the bit-number of the first set bit, not the number of the byte
 * containing a bit.
 */
#define find_first_bit(addr, size) \
	find_next_bit((addr), (size), 0)

/* find_next_zero_bit() finds the first zero bit in a bit string of length
 * 'size' bits, starting the search at bit 'offset'. This is largely based
 * on Linus's ALPHA routines, which are pretty portable BTW.
 */

extern unsigned long find_next_zero_bit(const unsigned long *,
					unsigned long, unsigned long);

#define find_first_zero_bit(addr, size) \
        find_next_zero_bit((addr), (size), 0)

#define test_and_set_le_bit(nr,addr)	\
	test_and_set_bit((nr) ^ 0x38, (addr))
#define test_and_clear_le_bit(nr,addr)	\
	test_and_clear_bit((nr) ^ 0x38, (addr))

static __inline__ int test_le_bit(int nr, __const__ unsigned long * addr)
{
	int			mask;
	__const__ unsigned char	*ADDR = (__const__ unsigned char *) addr;

	ADDR += nr >> 3;
	mask = 1 << (nr & 0x07);
	return ((mask & *ADDR) != 0);
}

#define find_first_zero_le_bit(addr, size) \
        find_next_zero_le_bit((addr), (size), 0)

extern unsigned long find_next_zero_le_bit(unsigned long *, unsigned long, unsigned long);

#endif /* defined(_SPARC64_BITOPS_H) */
