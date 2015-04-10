/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/
/*
 * simple  uart support for  tango2/tango3 board,  register an  early console
 * that make boot problem easier to debug.
 *
 * this uart init code comes from zboot
 */

#include <linux/init.h>
#include <linux/config.h>
#include <linux/console.h>



#include "setup.h"

extern int tangox_uart_console_port(void);

/*
 * helpers to access uart0/uart1 register
 */
#define RD_UART_REG32(r)	\
	(tangox_uart_console_port() ? \
		gbus_readl(REG_BASE_cpu_block + CPU_UART1_base + (r)) : \
		gbus_readl(REG_BASE_cpu_block + CPU_UART0_base + (r)))

#define WR_UART_REG32(r, v)	\
	(tangox_uart_console_port() ? \
		gbus_writel(REG_BASE_cpu_block + CPU_UART1_base + (r), (v)) : \
		gbus_writel(REG_BASE_cpu_block + CPU_UART0_base + (r), (v)))

/*
 * print given char to uart0/uart1
 */
static void __init prom_putc(char c)
{
	/* if '\n', then print '\r' also */
	if (c == '\n') {
		prom_putc('\r');
	}

	while ((RD_UART_REG32(CPU_UART_LSR) & 0x20) == 0);
	WR_UART_REG32(CPU_UART_THR, (unsigned long)c);
	while ((RD_UART_REG32(CPU_UART_LSR) & 0x20) == 0);
}

/*
 * print given string to uart0/uart1
 */
void __init prom_puts(const char *s)
{
	while (*s)
		prom_putc(*s++);
}

/*
 * initialize uart0/uart1 with given parameters
 */
static void __init uart_init(int baud, int fifo)
{
	WR_UART_REG32(CPU_UART_IER, 0x0);
	WR_UART_REG32(CPU_UART_FCR, (fifo ? 0x1f : 0x0));
	WR_UART_REG32(CPU_UART_LCR, 0x3);

#ifdef CONFIG_TANGOX_UART_USE_SYSCLK
	WR_UART_REG32(CPU_UART_CLKSEL, 0x0);
	if (is_tango3_es2()) {
		/* for hwbug#291 */
		unsigned int tmp = RD_UART_REG32(CPU_UART_CLKSEL);
		WR_UART_REG32(CPU_UART_CLKSEL, tmp);
	}
	WR_UART_REG32(CPU_UART_CLKDIV, ((tangox_get_sysclock() / baud) >> 4) + 1);
#else
	WR_UART_REG32(CPU_UART_CLKSEL, 0x1);
	if (is_tango3_es2()) {
		/* for hwbug#291 */
		unsigned int tmp = RD_UART_REG32(CPU_UART_CLKSEL);
		WR_UART_REG32(CPU_UART_CLKSEL, tmp);
	}
	WR_UART_REG32(CPU_UART_CLKDIV, ((TANGOX_BASE_FREQUENCY / baud) >> 4) + 1);
#endif
}

/*
 * kernel console write callback
 */
static void __init prom_console_write(struct console *con, const char *s,
				      unsigned int c)
{
	prom_puts(s);
}

static struct console promcons __initdata = {
	.name   = "prom",
	.write  = prom_console_write,
	.flags  = CON_PRINTBUFFER | CON_BOOT,
	.index  = -1,
};

/*
 * init uart0/uart1 and register a console that will use our prom console
 * callbacks
 */
void __init prom_console_register(void)
{
	uart_init(tangox_uart_baudrate(tangox_uart_console_port()), 0);
	register_console(&promcons);

	/* hello world ! */
	printk(KERN_INFO "prom console registered\n");
}

