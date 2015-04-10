#ifndef __ASM_SH64_IO_H
#define __ASM_SH64_IO_H

/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * include/asm-sh64/io.h
 *
 * Copyright (C) 2000, 2001  Paolo Alberelli
 * Copyright (C) 2003  Paul Mundt
 *
 */

/*
 * Convention:
 *    read{b,w,l}/write{b,w,l} are for PCI,
 *    while in{b,w,l}/out{b,w,l} are for ISA
 * These may (will) be platform specific function.
 *
 * In addition, we have
 *   ctrl_in{b,w,l}/ctrl_out{b,w,l} for SuperH specific I/O.
 * which are processor specific. Address should be the result of
 * onchip_remap();
 */

#include <asm/cache.h>
#include <asm/system.h>
#include <asm/page.h>

#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
#define page_to_bus page_to_phys

/*
 * Nothing overly special here.. instead of doing the same thing
 * over and over again, we just define a set of sh64_in/out functions
 * with an implicit size. The traditional read{b,w,l}/write{b,w,l}
 * mess is wrapped to this, as are the SH-specific ctrl_in/out routines.
 */
static inline unsigned char sh64_in8(unsigned long addr)
{
	return *(volatile unsigned char *)addr;
}

static inline unsigned short sh64_in16(unsigned long addr)
{
	return *(volatile unsigned short *)addr;
}

static inline unsigned long sh64_in32(unsigned long addr)
{
	return *(volatile unsigned long *)addr;
}

static inline unsigned long long sh64_in64(unsigned long addr)
{
	return *(volatile unsigned long long *)addr;
}

static inline void sh64_out8(unsigned char b, unsigned long addr)
{
	*(volatile unsigned char *)addr = b;
	wmb();
}

static inline void sh64_out16(unsigned short b, unsigned long addr)
{
	*(volatile unsigned short *)addr = b;
	wmb();
}

static inline void sh64_out32(unsigned long b, unsigned long addr)
{
	*(volatile unsigned long *)addr = b;
	wmb();
}

static inline void sh64_out64(unsigned long long b, unsigned long addr)
{
	*(volatile unsigned long long *)addr = b;
	wmb();
}

#define readb(addr)		sh64_in8(addr)
#define readw(addr)		sh64_in16(addr)
#define readl(addr)		sh64_in32(addr)
#define readb_relaxed(addr)		sh64_in8(addr)
#define readw_relaxed(addr)		sh64_in16(addr)
#define readl_relaxed(addr)		sh64_in32(addr)

#define writeb(b, addr)		sh64_out8(b, addr)
#define writew(b, addr)		sh64_out16(b, addr)
#define writel(b, addr)		sh64_out32(b, addr)

#define ctrl_inb(addr)		sh64_in8(addr)
#define ctrl_inw(addr)		sh64_in16(addr)
#define ctrl_inl(addr)		sh64_in32(addr)

#define ctrl_outb(b, addr)	sh64_out8(b, addr)
#define ctrl_outw(b, addr)	sh64_out16(b, addr)
#define ctrl_outl(b, addr)	sh64_out32(b, addr)

unsigned long inb(unsigned long port);
unsigned long inw(unsigned long port);
unsigned long inl(unsigned long port);
void outb(unsigned long value, unsigned long port);
void outw(unsigned long value, unsigned long port);
void outl(unsigned long value, unsigned long port);

#define mmiowb()

#endif /* __ASM_SH64_IO_H */
