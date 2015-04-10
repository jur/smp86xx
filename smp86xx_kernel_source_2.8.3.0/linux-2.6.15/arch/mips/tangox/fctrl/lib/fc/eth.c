/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

#include <linux/config.h>

#ifdef CONFIG_TANGO2
#include <asm/tango2/emhwlib_registers_tango2.h>
#include <asm/tango2/emhwlib_dram_tango2.h>
#include <asm/tango2/emhwlib_lram.h>
#elif defined(CONFIG_TANGO3)
#include <asm/tango3/emhwlib_registers_tango3.h>
#include <asm/tango3/emhwlib_dram_tango3.h>
#include <asm/tango2/emhwlib_lram.h>
#endif

#define KSEG1ADDR(x)            (0xa0000000|(x))

#define __sync()				\
	__asm__ __volatile__(			\
		".set	push\n\t"		\
		".set	noreorder\n\t"		\
		".set	mips2\n\t"		\
		"sync\n\t"			\
		".set	pop"			\
		: /* no output */		\
		: /* no input */		\
		: "memory")

#define __fast_iob()				\
	__asm__ __volatile__(			\
		".set	push\n\t"		\
		".set	noreorder\n\t"		\
		"lw	$0,%0\n\t"		\
		"nop\n\t"			\
		".set	pop"			\
		: /* no output */		\
		: "m" (*(int *)0xa0000000)	\
		: "memory")

#define fast_iob()				\
	do {					\
		__sync();			\
		__fast_iob();			\
	} while (0)

#define WOL_CTRL   0x602c

extern void uart_putc(const char c);
extern void uart_puts(const char *s);
extern void udelay(unsigned usec);

static unsigned long wol_ctrl = 0;

int eth_open(void)
{
#ifdef FC_DEBUG
	uart_puts("Listening for WOL packet.\n");
#endif
	wol_ctrl = *((volatile unsigned long *)KSEG1ADDR(REG_BASE_host_interface + WOL_CTRL));
	*((volatile unsigned long *)KSEG1ADDR(REG_BASE_host_interface + WOL_CTRL)) = 6;
	fast_iob();
	return(0);
}

int eth_close(void)
{
	*((volatile unsigned long *)KSEG1ADDR(REG_BASE_host_interface + WOL_CTRL)) = 0x60;
	fast_iob();
	*((volatile unsigned long *)KSEG1ADDR(REG_BASE_host_interface + WOL_CTRL)) = wol_ctrl;
	fast_iob();
#ifdef FC_DEBUG
	uart_puts("Stop listening to WOL packet.\n");
#endif
	udelay(1000);

	return(0);
}

unsigned long eth_poll_key(void)
{
	unsigned long wol_stat = *((volatile unsigned long *)KSEG1ADDR(REG_BASE_host_interface + WOL_CTRL));
	if ((wol_stat & 0x60) != 0) {
		/* clear the status */
		*((volatile unsigned long *)KSEG1ADDR(REG_BASE_host_interface + WOL_CTRL)) = 0x60;
		fast_iob();
#ifdef FC_DEBUG
		uart_puts("Got WOL packet\n");
#endif
		return(1);
	} else
		return(0);
}

