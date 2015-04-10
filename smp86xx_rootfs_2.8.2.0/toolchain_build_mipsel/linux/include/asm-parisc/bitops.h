#ifndef _PARISC_BITOPS_H
#define _PARISC_BITOPS_H

/* non-atomic version which could be used in userspace (but shouldn't anyway) */

#include <asm/byteorder.h>

/*
 * HP-PARISC specific bit operations
 * for a detailed description of the functions please refer
 * to include/asm-i386/bitops.h or kerneldoc
 */

#ifdef __LP64__
#   define SHIFT_PER_LONG 6
#ifndef BITS_PER_LONG
#   define BITS_PER_LONG 64
#endif
#else
#   define SHIFT_PER_LONG 5
#ifndef BITS_PER_LONG
#   define BITS_PER_LONG 32
#endif
#endif

#define CHOP_SHIFTCOUNT(x) ((x) & (BITS_PER_LONG - 1))


static __inline__ void set_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	*addr |= mask;
}

static __inline__ void __set_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	*addr |= mask;
}

static __inline__ void clear_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	*addr &= ~mask;
}

static __inline__ void __clear_bit(unsigned long nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	*addr &= ~mask;
}

static __inline__ void change_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	*addr ^= mask;
}

static __inline__ void __change_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	*addr ^= mask;
}

static __inline__ int test_and_set_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;
	int oldbit;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	oldbit = (*addr & mask) ? 1 : 0;
	*addr |= mask;

	return oldbit;
}

static __inline__ int __test_and_set_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;
	int oldbit;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	oldbit = (*addr & mask) ? 1 : 0;
	*addr |= mask;

	return oldbit;
}

static __inline__ int test_and_clear_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;
	int oldbit;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	oldbit = (*addr & mask) ? 1 : 0;
	*addr &= ~mask;

	return oldbit;
}

static __inline__ int __test_and_clear_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;
	int oldbit;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	oldbit = (*addr & mask) ? 1 : 0;
	*addr &= ~mask;

	return oldbit;
}

static __inline__ int test_and_change_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;
	int oldbit;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	oldbit = (*addr & mask) ? 1 : 0;
	*addr ^= mask;

	return oldbit;
}

static __inline__ int __test_and_change_bit(int nr, volatile unsigned long * address)
{
	unsigned long mask;
	unsigned long *addr = (unsigned long *) address;
	int oldbit;

	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	oldbit = (*addr & mask) ? 1 : 0;
	*addr ^= mask;

	return oldbit;
}

static __inline__ int test_bit(int nr, const volatile unsigned long *address)
{
	unsigned long mask;
	const unsigned long *addr = (const unsigned long *)address;
	
	addr += (nr >> SHIFT_PER_LONG);
	mask = 1L << CHOP_SHIFTCOUNT(nr);
	
	return !!(*addr & mask);
}

/*
 * This implementation of find_{first,next}_zero_bit was stolen from
 * Linus' asm-alpha/bitops.h.
 */
#define find_first_zero_bit(addr, size) \
	find_next_zero_bit((addr), (size), 0)

static __inline__ unsigned long find_next_zero_bit(const void * addr, unsigned long size, unsigned long offset)
{
	const unsigned long * p = ((unsigned long *) addr) + (offset >> SHIFT_PER_LONG);
	unsigned long result = offset & ~(BITS_PER_LONG-1);
	unsigned long tmp;

	if (offset >= size)
		return size;
	size -= result;
	offset &= (BITS_PER_LONG-1);
	if (offset) {
		tmp = *(p++);
		tmp |= ~0UL >> (BITS_PER_LONG-offset);
		if (size < BITS_PER_LONG)
			goto found_first;
		if (~tmp)
			goto found_middle;
		size -= BITS_PER_LONG;
		result += BITS_PER_LONG;
	}
	while (size & ~(BITS_PER_LONG -1)) {
		if (~(tmp = *(p++)))
			goto found_middle;
		result += BITS_PER_LONG;
		size -= BITS_PER_LONG;
	}
	if (!size)
		return result;
	tmp = *p;
found_first:
	tmp |= ~0UL << size;
found_middle:
	return result + ffz(tmp);
}

static __inline__ unsigned long find_next_bit(const unsigned long *addr, unsigned long size, unsigned long offset)
{
	const unsigned long *p = addr + (offset >> 6);
	unsigned long result = offset & ~(BITS_PER_LONG-1);
	unsigned long tmp;

	if (offset >= size)
		return size;
	size -= result;
	offset &= (BITS_PER_LONG-1);
	if (offset) {
		tmp = *(p++);
		tmp &= (~0UL << offset);
		if (size < BITS_PER_LONG)
			goto found_first;
		if (tmp)
			goto found_middle;
		size -= BITS_PER_LONG;
		result += BITS_PER_LONG;
	}
	while (size & ~(BITS_PER_LONG-1)) {
		if ((tmp = *(p++)))
			goto found_middle;
		result += BITS_PER_LONG;
		size -= BITS_PER_LONG;
	}
	if (!size)
		return result;
	tmp = *p;

found_first:
	tmp &= (~0UL >> (BITS_PER_LONG - size));
	if (tmp == 0UL)        /* Are any bits set? */
		return result + size; /* Nope. */
found_middle:
	return result + __ffs(tmp);
}

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

static __inline__ int ext2_test_bit(int nr, __const__ void * addr)
{
	__const__ unsigned char	*ADDR = (__const__ unsigned char *) addr;

	return (ADDR[nr >> 3] >> (nr & 7)) & 1;
}

/*
 * This implementation of ext2_find_{first,next}_zero_bit was stolen from
 * Linus' asm-alpha/bitops.h and modified for a big-endian machine.
 */

#define ext2_find_first_zero_bit(addr, size) \
        ext2_find_next_zero_bit((addr), (size), 0)

extern __inline__ unsigned long ext2_find_next_zero_bit(void *addr,
	unsigned long size, unsigned long offset)
{
	unsigned int *p = ((unsigned int *) addr) + (offset >> 5);
	unsigned int result = offset & ~31UL;
	unsigned int tmp;

	if (offset >= size)
		return size;
	size -= result;
	offset &= 31UL;
	if (offset) {
		tmp = cpu_to_le32p(p++);
		tmp |= ~0UL >> (32-offset);
		if (size < 32)
			goto found_first;
		if (tmp != ~0U)
			goto found_middle;
		size -= 32;
		result += 32;
	}
	while (size >= 32) {
		if ((tmp = cpu_to_le32p(p++)) != ~0U)
			goto found_middle;
		result += 32;
		size -= 32;
	}
	if (!size)
		return result;
	tmp = cpu_to_le32p(p);
found_first:
	tmp |= ~0U << size;
found_middle:
	return result + ffz(tmp);
}

/* Bitmap functions for the minix filesystem.  */
#define minix_test_and_set_bit(nr,addr) ext2_set_bit(nr,addr)
#define minix_set_bit(nr,addr) ((void)ext2_set_bit(nr,addr))
#define minix_test_and_clear_bit(nr,addr) ext2_clear_bit(nr,addr)
#define minix_test_bit(nr,addr) ext2_test_bit(nr,addr)
#define minix_find_first_zero_bit(addr,size) ext2_find_first_zero_bit(addr,size)

#endif /* _PARISC_BITOPS_H */
