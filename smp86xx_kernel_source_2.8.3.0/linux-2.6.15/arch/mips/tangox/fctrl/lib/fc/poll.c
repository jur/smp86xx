/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

#include <linux/config.h>

#ifdef CONFIG_TANGO2
#define EM86XX_CHIP EM86XX_CHIPID_TANGO2
#define EM86XX_REVISION 6
#include <asm/mach-tango2/param.h>
#include <asm/tango2/tango2.h>
#include <asm/tango2/emhwlib_registers_tango2.h>
#include <asm/tango2/emhwlib_dram_tango2.h>
#include <asm/tango2/emhwlib_lram.h>
#elif defined(CONFIG_TANGO3)
#define EM86XX_CHIP EM86XX_CHIPID_TANGO3
#define EM86XX_REVISION 1
#include <asm/mach-tango3/param.h>
#include <asm/tango3/tango3.h>
#include <asm/tango3/emhwlib_registers_tango3.h>
#include <asm/tango3/emhwlib_dram_tango3.h>
#include <asm/tango2/emhwlib_lram.h>
#endif

#ifndef KSEG1ADDR
#define KSEG1ADDR(x)    (0xa0000000|(x))
#endif

#define UPDATE_XTAL

#ifdef WITH_IR
int ir_open(void);
int ir_close(void);
unsigned long ir_poll_key(unsigned long *table, unsigned long size);
#endif

#ifdef WITH_FIP
int fip_open(void);
int fip_close(void);
unsigned long fip_poll_key(unsigned long *table, unsigned long size);
#endif

#ifdef WITH_ETH
int eth_open(void);
int eth_close(void);
unsigned long eth_poll_key(void);
#endif

#define XTAL_IN       ((volatile unsigned long *)KSEG1ADDR(REG_BASE_system_block+SYS_xtal_in_cnt))

unsigned long polling_input(unsigned long *ir_table, unsigned long *fip_table, 
	unsigned long *input_ctrl, unsigned long *elapse)
{
	unsigned long key = 0;
	unsigned long table_size = INPUT_TABLE_SIZE / 4;
#ifdef UPDATE_XTAL
	const unsigned long inc = TANGOX_BASE_FREQUENCY / 1000; /* elapse in turns of msec */
	unsigned long old_xtal, new_xtal, diff_xtal;

	*elapse = diff_xtal = 0;
	old_xtal = new_xtal = (*XTAL_IN);
#endif

#ifdef WITH_IR
	if (*input_ctrl & 1)
		ir_open();
#endif
#ifdef WITH_FIP
	if (*input_ctrl & 2)
		fip_open();
#endif
#ifdef WITH_ETH
	if (*input_ctrl & 4)
		eth_open();
#endif

	while (key == 0) {
#ifdef WITH_IR
		if ((key == 0) && (*input_ctrl & 1))
			key = ir_poll_key(ir_table, table_size);
#endif
#ifdef WITH_FIP
		if ((key == 0) && (*input_ctrl & 2))
			key = fip_poll_key(fip_table, table_size);
#endif
#ifdef WITH_ETH
		if ((key == 0) && (*input_ctrl & 4))
			key = eth_poll_key();
#endif
#ifdef UPDATE_XTAL
		new_xtal = (*XTAL_IN);
		if (new_xtal >= old_xtal) 
			diff_xtal += (new_xtal-old_xtal);
		else 
			diff_xtal += ((0xffffffff-old_xtal)+new_xtal);
		if (diff_xtal >= inc) {
			*elapse += (diff_xtal / inc);
			diff_xtal %= inc;
		}
		old_xtal = new_xtal;
#endif
	}

#ifdef WITH_ETH
	if (*input_ctrl & 4)
		eth_close();
#endif
#ifdef WITH_FIP
	if (*input_ctrl & 2)
		fip_close();
#endif
#ifdef WITH_IR
	if (*input_ctrl & 1)
		ir_close();
#endif

#ifdef UPDATE_XTAL
	new_xtal = (*XTAL_IN);
	if (new_xtal >= old_xtal) 
		diff_xtal += (new_xtal-old_xtal);
	else 
		diff_xtal += ((0xffffffff-old_xtal)+new_xtal);
	if (diff_xtal >= inc) {
		*elapse += (diff_xtal / inc);
		diff_xtal %= inc;
	}
#endif

	return(key);
}

#ifdef FC_DEBUG

static const unsigned long cpu_uart_base = REG_BASE_cpu_block + CPU_UART0_base;

void uart_putc(const char c)
{
	if (c != '\n') {
		while (((*(volatile unsigned long *)KSEG1ADDR(cpu_uart_base+CPU_UART_LSR))& 0x20) == 0);
		*(volatile unsigned long *)KSEG1ADDR(cpu_uart_base+CPU_UART_THR) = (unsigned long)c;
	} else {
		while (((*(volatile unsigned long *)KSEG1ADDR(cpu_uart_base+CPU_UART_LSR))& 0x20) == 0);
		*(volatile unsigned long *)KSEG1ADDR(cpu_uart_base+CPU_UART_THR) = 0x0d;
		while (((*(volatile unsigned long *)KSEG1ADDR(cpu_uart_base+CPU_UART_LSR))& 0x20) == 0);
		*(volatile unsigned long *)KSEG1ADDR(cpu_uart_base+CPU_UART_THR) = 0x0a;
	}
}

void uart_puts(const char *s)
{
	for (; s && (*s != '\0'); s++)
		uart_putc(*s);
}
#endif

static inline unsigned long __getxtal(void)
{
	return *((volatile unsigned long *)KSEG1ADDR(REG_BASE_system_block + SYS_xtal_in_cnt));
}

void udelay(unsigned usec)
{
	/* SYS_xtal_in_cnt is a counter running off 27MHz, so 1 usec
           is roughly equivalent to 27 increase of count */
	unsigned long start = __getxtal();
	unsigned long end = start + (usec * 27);

	if (end <= start) 
		/* Handle overflow condition */
		while (__getxtal() > start);
	while (__getxtal() < end);
}

