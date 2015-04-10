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

/* For Tango2, it's always there */
#define WITH_RC5_CONTROL
#define WITH_RC6_CONTROL

#define SYS_gpio_base           SYS_gpio_dir
#define KSEG1ADDR(x)            (0xa0000000|(x))

/* NEC Control */
#define IR_NEC_CTRL             (REG_BASE_system_block + SYS_gpio_base + 0x18)
#define IR_NEC_CAPTURE_DATA    	(REG_BASE_system_block + SYS_gpio_base + 0x1c)
#define IR_NEC_CTRL_REGISTER 	((volatile unsigned long *)KSEG1ADDR(IR_NEC_CTRL))
#define IR_NEC_DATA_REGISTER 	((volatile unsigned long *)KSEG1ADDR(IR_NEC_CAPTURE_DATA))

#ifdef WITH_RC5_CONTROL
/* RC5 Control */
#define IR_RC5_CTRL             (REG_BASE_system_block + SYS_gpio_base + 0x20)
#define IR_RC5_DECODE_CLK_DIV  	(REG_BASE_system_block + SYS_gpio_base + 0x24)
#define IR_RC5_DECODER_DATA    	(REG_BASE_system_block + SYS_gpio_base + 0x28)
#define IR_RC5_INT_STATUS    	(REG_BASE_system_block + SYS_gpio_base + 0x2c)
#define IR_RC5_CTRL_REGISTER 	((volatile unsigned long *)KSEG1ADDR(IR_RC5_CTRL))
#define IR_RC5_CLK_DIV_REGISTER	((volatile unsigned long *)KSEG1ADDR(IR_RC5_DECODE_CLK_DIV))
#define IR_RC5_DATA_REGISTER 	((volatile unsigned long *)KSEG1ADDR(IR_RC5_DECODER_DATA))
#define IR_RC5_INT_STAT_REGISTER ((volatile unsigned long *)KSEG1ADDR(IR_RC5_INT_STATUS))
#endif /* WITH_RC5_CONTROL */

#ifdef WITH_RC6_CONTROL
/* RC6 Control */
#define RC6_DWORDS		5	/* 5 dwords = 20 bytes */
#define IR_RC6_CTRL             (REG_BASE_system_block + SYS_gpio_base + 0xe0)
#define IR_RC6_T_CTRL           (REG_BASE_system_block + SYS_gpio_base + 0xe4)
#define IR_RC6_DATA_OUT0        (REG_BASE_system_block + SYS_gpio_base + 0xe8)
#define IR_RC6_DATA_OUT1        (REG_BASE_system_block + SYS_gpio_base + 0xec)
#define IR_RC6_DATA_OUT2        (REG_BASE_system_block + SYS_gpio_base + 0xf0)
#define IR_RC6_DATA_OUT3        (REG_BASE_system_block + SYS_gpio_base + 0xf4)
#define IR_RC6_DATA_OUT4        (REG_BASE_system_block + SYS_gpio_base + 0xf8)
#define IR_RC6_CTRL_REGISTER    ((volatile unsigned long *)KSEG1ADDR(IR_RC6_CTRL))
#define IR_RC6_T_CTRL_REGISTER  ((volatile unsigned long *)KSEG1ADDR(IR_RC6_T_CTRL))
#define IR_RC6_DATA0_REGISTER   ((volatile unsigned long *)KSEG1ADDR(IR_RC6_DATA_OUT0))
#endif

static unsigned long ir_nec_ctrl = 0;

#ifdef WITH_RC5_CONTROL
static const int rc5_clk_div = 48006;	/* 48006 = 1.778ms, 36018 = 1.334ms, 59994 = 2.222ms */
static unsigned long ir_rc5_ctrl = 0, old_rc5_clk = 0;
#endif /* WITH_RC5_CONTROL */
#ifdef WITH_RC6_CONTROL
static unsigned long ir_rc6_ctrl = 0, ir_rc6_t_ctrl = 0;
#endif /* WITH_RC6_CONTROL */

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

extern void uart_putc(const char c);
extern void uart_puts(const char *s);
extern void udelay(unsigned usec);

/* Produce data */
unsigned long ir_poll_key(unsigned long *table, unsigned long size)
{
	unsigned long status;
	unsigned long data = 0;

#ifdef WITH_RC6_CONTROL 
	status = *IR_RC6_CTRL_REGISTER;

	if ((status & 0xc0000000) != 0) {
		*IR_RC6_CTRL_REGISTER = status;
#ifdef FC_DEBUG
		if ((status & 0x40000000) != 0) {
			uart_puts("RC6 error\n");
		} 
#endif
		if (((status & 0x80000000) != 0) && ((status & 0x40000000) == 0)) {
			data = *IR_RC6_DATA0_REGISTER | 0x80000000;
#ifdef WITH_RC5_CONTROL
			status = *IR_RC5_INT_STAT_REGISTER;
			if (status & 0x3)
				*IR_RC5_INT_STAT_REGISTER = status;
#endif
			goto got_data;
		}
	}
#endif

#ifdef WITH_RC5_CONTROL
	status = *IR_RC5_INT_STAT_REGISTER;
	*IR_RC5_INT_STAT_REGISTER = status;
	__sync();

	if ((status & 2) != 0) {
		data = *IR_NEC_DATA_REGISTER;	/* Read from NEC decoder */
#ifdef FC_DEBUG
		if (data == 0)
			uart_puts("NEC error\n");
#endif
		if (data != 0)
			goto got_data;
	} 
	if ((status & 1) != 0) {
		data = *IR_RC5_DATA_REGISTER;
		if ((data & 0x80000000) != 0) {   /* Invalid RC5 decoder data */
#ifdef FC_DEBUG
			uart_puts("RC5 error\n");
#endif
			data = 0;
		}
		goto got_data;
	} 
#else
	data = *IR_NEC_DATA_REGISTER;
	__sync();
	goto got_data;
#endif

	return(0);

got_data:

	if ((data == 0) || (table == 0) || (*table == 0)) {
#ifdef FC_DEBUG
		if (data != 0) 
			uart_puts("Got IR key\n");
#endif
		return(data);
	} else {
		unsigned int i;
		for (i = 0; i < size; i++, table++) {
			if (*table == 0)
				break;
			else if (data == *table) {
#ifdef FC_DEBUG
				uart_puts("Got IR key\n");
#endif
				return(data);
			}
		}
		return(0);
	}
}

/* Open the device */
int ir_open(void)
{
#ifdef FC_DEBUG
	uart_puts("Polling for IR key.\n");
#endif
	ir_nec_ctrl = *IR_NEC_CTRL_REGISTER;
	*IR_NEC_CTRL_REGISTER = 0;
#ifdef WITH_RC5_CONTROL
	ir_rc5_ctrl = *IR_RC5_CTRL_REGISTER;
	*IR_RC5_CTRL_REGISTER = 0;
#endif
#ifdef WITH_RC5_CONTROL
	ir_rc6_ctrl = *IR_RC6_CTRL_REGISTER;
	ir_rc6_t_ctrl = *IR_RC6_T_CTRL_REGISTER;
	*IR_RC6_CTRL_REGISTER = 0xc0000000;
#endif
	__sync();

	/* Enable the NEC device (CTRL register) */
	/*	31:30 - reserved */
	/*	29:24 	IR_CAPTURE_NBITS [5:0] -> set to 0x1f */
	/*	23:22 - reserved */
	/*	21:16 	GPIO_INFREARED_SEL [5:0] -> set to 0x0c */
	/*	15:14 - reserved */
	/*	13:0	IR_PREDIV_DEVIDER [13:0] -> set to 0x3b10 */
	*((volatile unsigned long *)KSEG1ADDR(REG_BASE_system_block + SYS_gpio_dir)) |= ((1 << (16 + 12)));
	*IR_NEC_CTRL_REGISTER = 0x1f0c3b10;

#ifdef WITH_RC5_CONTROL
	/* Enable the RC5 device (CTRL register) */
	/*	31:10 - reserved */
	/*	9	IR_RC5_INT_ENABLE -> set */
	/*	8	IR_NEC_INT_DISABLE */
	/*	7	IR_DEBOUNCE_SEL1 -> set */
	/*	6	IR_DEBOUNCE_SEL0 -> set */
	/*	5	IR_DEBOUNCE_ENABLE -> set */
	/*	4	IR_NEC_DISABLE */
	/*	3	IR_RSYNC_1/4 -> set */
	/*	2	IR_RSYNC_1/8 */
	/*	1	IR_SIGNAL_INVERT */
	/*	0	IR_DECODE_ENABLE -> set */
	old_rc5_clk = *IR_RC5_CLK_DIV_REGISTER; 
	*IR_RC5_CLK_DIV_REGISTER = rc5_clk_div; 
	*IR_RC5_CTRL_REGISTER = 0x000002e9;
#endif /* WITH_RC5_CONTROL */

#ifdef WITH_RC6_CONTROL
	/* Enable the RC6 device (CTRL register) */
	/*	7	IR_RC6_DATA_IN_INT_ENABLE -> set */
	/*	6	IR_RC6_ERROR_INT_ENABLE -> set */
	/*	5:2	reserved */
	/*	1	IR_SIGNAL_INVERT */
	/*	0	IR_RC6_DECODE_ENABLE -> set */
	*IR_RC6_CTRL_REGISTER = 0xc1;

	/* Tolerance and Duration */
	/*	31:18	Tolerance (typ. 0xbb8) */
	/*	17:0	Duration (typ. 0x2ee0) */
	*IR_RC6_T_CTRL_REGISTER = ((0xbb8 << 18) | 0x2ee0);
#endif

	__sync();
	return(0);
}

int ir_close(void)
{
#ifdef FC_DEBUG
	uart_puts("Stop polling for IR key.\n");
#endif
	*IR_NEC_CTRL_REGISTER = 0;
#ifdef WITH_RC5_CONTROL
	*IR_RC5_CTRL_REGISTER = 0;
#endif
#ifdef WITH_RC6_CONTROL
	*IR_RC6_CTRL_REGISTER = 0xc0000000;
#endif
	__sync();

	*IR_NEC_CTRL_REGISTER = ir_nec_ctrl;
#ifdef WITH_RC5_CONTROL
	*IR_RC5_CLK_DIV_REGISTER = old_rc5_clk;
	*IR_RC5_CTRL_REGISTER = ir_rc5_ctrl;
#endif
#ifdef WITH_RC6_CONTROL
	*IR_RC6_CTRL_REGISTER = ir_rc6_ctrl;
	*IR_RC6_T_CTRL_REGISTER = ir_rc6_t_ctrl;
#endif /* WITH_RC6_CONTROL */

	__sync();
	udelay(1000);
	return(0);
}

