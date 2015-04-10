#ifndef _M68K_BITOPS_H
#define _M68K_BITOPS_H
/*
 * Copyright 1992, Linus Torvalds.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file COPYING in the main directory of this archive
 * for more details.
 */


/*
 * Require 68020 or better.
 *
 * They use the standard big-endian m680x0 bit ordering.
 */

#define test_and_set_bit(nr,vaddr) \
  (__builtin_constant_p(nr) ? \
   __constant_test_and_set_bit(nr, vaddr) : \
   __generic_test_and_set_bit(nr, vaddr))

#define __test_and_set_bit(nr,vaddr) test_and_set_bit(nr,vaddr)

static inline int __constant_test_and_set_bit(int nr, unsigned long *vaddr)
{
	char *p = (char *)vaddr + (nr ^ 31) / 8;
	char retval;

	__asm__ __volatile__ ("bset %2,%1; sne %0"
			: "=d" (retval), "+m" (*p)
			: "di" (nr & 7));

	return retval;
}

static inline int __generic_test_and_set_bit(int nr, unsigned long *vaddr)
{
	char retval;

	__asm__ __volatile__ ("bfset %2{%1:#1}; sne %0"
			: "=d" (retval) : "d" (nr^31), "o" (*vaddr) : "memory");

	return retval;
}

#define set_bit(nr,vaddr) \
  (__builtin_constant_p(nr) ? \
   __constant_set_bit(nr, vaddr) : \
   __generic_set_bit(nr, vaddr))

#define __set_bit(nr,vaddr) set_bit(nr,vaddr)

static inline void __constant_set_bit(int nr, volatile unsigned long *vaddr)
{
	char *p = (char *)vaddr + (nr ^ 31) / 8;
	__asm__ __volatile__ ("bset %1,%0"
			: "+m" (*p) : "di" (nr & 7));
}

static inline void __generic_set_bit(int nr, volatile unsigned long *vaddr)
{
	__asm__ __volatile__ ("bfset %1{%0:#1}"
			: : "d" (nr^31), "o" (*vaddr) : "memory");
}

#define test_and_clear_bit(nr,vaddr) \
  (__builtin_constant_p(nr) ? \
   __constant_test_and_clear_bit(nr, vaddr) : \
   __generic_test_and_clear_bit(nr, vaddr))

#define __test_and_clear_bit(nr,vaddr) test_and_clear_bit(nr,vaddr)

static inline int __constant_test_and_clear_bit(int nr, unsigned long *vaddr)
{
	char *p = (char *)vaddr + (nr ^ 31) / 8;
	char retval;

	__asm__ __volatile__ ("bclr %2,%1; sne %0"
			: "=d" (retval), "+m" (*p)
			: "di" (nr & 7));

	return retval;
}

static inline int __generic_test_and_clear_bit(int nr, unsigned long *vaddr)
{
	char retval;

	__asm__ __volatile__ ("bfclr %2{%1:#1}; sne %0"
			: "=d" (retval) : "d" (nr^31), "o" (*vaddr) : "memory");

	return retval;
}

#define clear_bit(nr,vaddr) \
  (__builtin_constant_p(nr) ? \
   __constant_clear_bit(nr, vaddr) : \
   __generic_clear_bit(nr, vaddr))
#define __clear_bit(nr,vaddr) clear_bit(nr,vaddr)

static inline void __constant_clear_bit(int nr, volatile unsigned long *vaddr)
{
	char *p = (char *)vaddr + (nr ^ 31) / 8;
	__asm__ __volatile__ ("bclr %1,%0"
			: "+m" (*p) : "di" (nr & 7));
}

static inline void __generic_clear_bit(int nr, volatile unsigned long *vaddr)
{
	__asm__ __volatile__ ("bfclr %1{%0:#1}"
			: : "d" (nr^31), "o" (*vaddr) : "memory");
}

#define test_and_change_bit(nr,vaddr) \
  (__builtin_constant_p(nr) ? \
   __constant_test_and_change_bit(nr, vaddr) : \
   __generic_test_and_change_bit(nr, vaddr))

#define __test_and_change_bit(nr,vaddr) test_and_change_bit(nr,vaddr)
#define __change_bit(nr,vaddr) change_bit(nr,vaddr)

static inline int __constant_test_and_change_bit(int nr, unsigned long *vaddr)
{
	char *p = (char *)vaddr + (nr ^ 31) / 8;
	char retval;

	__asm__ __volatile__ ("bchg %2,%1; sne %0"
			: "=d" (retval), "+m" (*p)
			: "di" (nr & 7));

	return retval;
}

static inline int __generic_test_and_change_bit(int nr, unsigned long *vaddr)
{
	char retval;

	__asm__ __volatile__ ("bfchg %2{%1:#1}; sne %0"
			: "=d" (retval) : "d" (nr^31), "o" (*vaddr) : "memory");

	return retval;
}

#define change_bit(nr,vaddr) \
  (__builtin_constant_p(nr) ? \
   __constant_change_bit(nr, vaddr) : \
   __generic_change_bit(nr, vaddr))

static inline void __constant_change_bit(int nr, unsigned long *vaddr)
{
	char *p = (char *)vaddr + (nr ^ 31) / 8;
	__asm__ __volatile__ ("bchg %1,%0"
			: "+m" (*p) : "di" (nr & 7));
}

static inline void __generic_change_bit(int nr, unsigned long *vaddr)
{
	__asm__ __volatile__ ("bfchg %1{%0:#1}"
			: : "d" (nr^31), "o" (*vaddr) : "memory");
}

static inline int test_bit(int nr, const unsigned long *vaddr)
{
	return (vaddr[nr >> 5] & (1UL << (nr & 31))) != 0;
}

static inline int find_first_zero_bit(const unsigned long *vaddr,
				      unsigned size)
{
	const unsigned long *p = vaddr;
	int res = 32;
	unsigned long num;

	if (!size)
		return 0;

	size = (size + 31) >> 5;
	while (!(num = ~*p++)) {
		if (!--size)
			goto out;
	}

	__asm__ __volatile__ ("bfffo %1{#0,#0},%0"
			      : "=d" (res) : "d" (num & -num));
	res ^= 31;
out:
	return ((long)p - (long)vaddr - 4) * 8 + res;
}

static inline int find_next_zero_bit(const unsigned long *vaddr, int size,
				     int offset)
{
	const unsigned long *p = vaddr + (offset >> 5);
	int bit = offset & 31UL, res;

	if (offset >= size)
		return size;

	if (bit) {
		unsigned long num = ~*p++ & (~0UL << bit);
		offset -= bit;

		/* Look for zero in first longword */
		__asm__ __volatile__ ("bfffo %1{#0,#0},%0"
				      : "=d" (res) : "d" (num & -num));
		if (res < 32)
			return offset + (res ^ 31);
		offset += 32;
	}
	/* No zero yet, search remaining full bytes for a zero */
	res = find_first_zero_bit(p, size - ((long)p - (long)vaddr) * 8);
	return offset + res;
}

static inline int find_first_bit(const unsigned long *vaddr, unsigned size)
{
	const unsigned long *p = vaddr;
	int res = 32;
	unsigned long num;

	if (!size)
		return 0;

	size = (size + 31) >> 5;
	while (!(num = *p++)) {
		if (!--size)
			goto out;
	}

	__asm__ __volatile__ ("bfffo %1{#0,#0},%0"
			      : "=d" (res) : "d" (num & -num));
	res ^= 31;
out:
	return ((long)p - (long)vaddr - 4) * 8 + res;
}

static inline int find_next_bit(const unsigned long *vaddr, int size,
				int offset)
{
	const unsigned long *p = vaddr + (offset >> 5);
	int bit = offset & 31UL, res;

	if (offset >= size)
		return size;

	if (bit) {
		unsigned long num = *p++ & (~0UL << bit);
		offset -= bit;

		/* Look for one in first longword */
		__asm__ __volatile__ ("bfffo %1{#0,#0},%0"
				      : "=d" (res) : "d" (num & -num));
		if (res < 32)
			return offset + (res ^ 31);
		offset += 32;
	}
	/* No one yet, search remaining full bytes for a one */
	res = find_first_bit(p, size - ((long)p - (long)vaddr) * 8);
	return offset + res;
}

/*
 * ffz = Find First Zero in word. Undefined if no zero exists,
 * so code should check against ~0UL first..
 */
static inline unsigned long ffz(unsigned long word)
{
	int res;

	__asm__ __volatile__ ("bfffo %1{#0,#0},%0"
			      : "=d" (res) : "d" (~word & -~word));
	return res ^ 31;
}

#endif /* _M68K_BITOPS_H */
