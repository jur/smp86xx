/*
 * Copyright (C) 2007 Sigma Designs, inc.
 * Copyright 2001 MontaVista Software Inc.
 * Author: Jun Sun, jsun@mvista.com or jsun@junsun.net
 *
 * arch_init_irq for tango2/tango3.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 */

#include <linux/init.h>
#include <linux/interrupt.h>
#include <asm/irq_cpu.h>

#include "setup.h"

/*
 * helpers to access cpu block registers
 */
#define RD_CPU_REG32(r)	\
		gbus_readl(REG_BASE_cpu_block + (r))

#define WR_CPU_REG32(r, v)	\
		gbus_writel(REG_BASE_cpu_block + (r), (v))

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
static inline u64 get_irq_status(void)
{
	return((((u64)RD_CPU_REG32(CPU_irq_status_hi))<<32) | ((u64)RD_CPU_REG32(CPU_irq_status)));
}
static inline u64 get_fiq_status(void)
{
	return((((u64)RD_CPU_REG32(CPU_fiq_status_hi))<<32) | ((u64)RD_CPU_REG32(CPU_fiq_status)));
}
static inline u64 get_iiq_status(void)
{
	return((((u64)RD_CPU_REG32(CPU_iiq_status_hi))<<32) | ((u64)RD_CPU_REG32(CPU_iiq_status)));
}
#else
static inline u32 get_irq_status(void)
{
	return((u32)RD_CPU_REG32(CPU_irq_status));
}
static inline u32 get_fiq_status(void)
{
	return((u32)RD_CPU_REG32(CPU_fiq_status));
}
static inline u32 get_iiq_status(void)
{
	return((u32)RD_CPU_REG32(CPU_iiq_status));
}
#endif

/*
 * dispatch routine called from tangoxIRQ.S
 */
extern void spurious_interrupt(void);
void tangox_dispatch(int ipline, struct pt_regs *regs)
{
	int x;
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	u64 status;
#else
	u32 status;
#endif

	switch (ipline) {
	case 2:
		if ((status = get_irq_status()) == 0) {
			spurious_interrupt();
			return;
		} else {
			do {
				for (x = 0; status != 0; x++, status >>= 1) {
					if ((status & 0x1) != 0) {
						do_IRQ(IRQ_CONTROLLER_IRQ_BASE + x, regs);
						break;
					}
				}
			} while ((status = get_irq_status()) != 0);
		}
		break;

	case 3:
		if ((status = get_fiq_status()) == 0) {
			spurious_interrupt();
			return;
		} else {
			/* We need to mask out irq, fiq > irq */
			u32 sr_old = read_c0_status();
			u32 sr_new = sr_old & (~STATUSF_IP2);

			write_c0_status(sr_new);
			do {
				for (x = 0; status != 0; x++, status >>= 1) {
					if ((status & 0x1) != 0) {
						do_IRQ(FIQ_CONTROLLER_IRQ_BASE + x, regs);
						break;
					}
				}
			} while ((status = get_fiq_status()) != 0);
			write_c0_status(sr_old);
		}
		break;

	case 4:
		if ((status = get_iiq_status()) == 0) {
			spurious_interrupt();
			return;
		} else {
			/* We need to mask out fiq/irq, iiq > fiq > irq */
			u32 sr_old = read_c0_status();
			u32 sr_new = sr_old & (~(STATUSF_IP2|STATUSF_IP3));

			write_c0_status(sr_new);
			do {
				for (x = 0; status != 0; x++, status >>= 1) {
					if ((status & 0x1) != 0) {
						do_IRQ(IIQ_CONTROLLER_IRQ_BASE + x, regs);
						break;
					}
				}
			} while ((status = get_iiq_status()) != 0);
			write_c0_status(sr_old);
		}
		break;

	case 7:
		do_IRQ(7,regs);
		return;

	default:
		printk("spurious irq: ipline: %d\n", ipline);
		spurious_interrupt();
		return;
	}
}

/*
 * our hw_irq_controller cb
 */
static inline void tangox_irq_enable(unsigned int x)
{
	int bit = x - IRQ_CONTROLLER_IRQ_BASE;
	unsigned long flags;

	local_irq_save(flags);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_irq_enableset_hi, 1 << (bit - 32));
		local_irq_restore(flags);
		return;
	}
#endif
	WR_CPU_REG32(CPU_irq_enableset, 1 << bit);
	local_irq_restore(flags);
}

static inline void tangox_fiq_enable(unsigned int x)
{
	int bit = x - FIQ_CONTROLLER_IRQ_BASE;
	unsigned long flags;

	local_irq_save(flags);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_fiq_enableset_hi, 1 << (bit - 32));
		local_irq_restore(flags);
		return;
	}
#endif
	WR_CPU_REG32(CPU_fiq_enableset, 1 << bit);
	local_irq_restore(flags);
}

static inline void tangox_iiq_enable(unsigned int x)
{
	int bit = x - IIQ_CONTROLLER_IRQ_BASE;
	unsigned long flags;

	local_irq_save(flags);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_iiq_enableset_hi, 1 << (bit - 32));
		local_irq_restore(flags);
		return;
	}
#endif
	WR_CPU_REG32(CPU_iiq_enableset, 1 << bit);
	local_irq_restore(flags);
}

static inline void tangox_irq_disable(unsigned int x)
{
	int bit = x - IRQ_CONTROLLER_IRQ_BASE;
	unsigned long flags;

	local_irq_save(flags);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_irq_enableclr_hi, 1 << (bit - 32));
		local_irq_restore(flags);
		return;
	}
#endif
	WR_CPU_REG32(CPU_irq_enableclr, 1 << bit);
	local_irq_restore(flags);
}

static inline void tangox_fiq_disable(unsigned int x)
{
	int bit = x - FIQ_CONTROLLER_IRQ_BASE;
	unsigned long flags;

	local_irq_save(flags);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_fiq_enableclr_hi, 1 << (bit - 32));
		local_irq_restore(flags);
		return;
	}
#endif
	WR_CPU_REG32(CPU_fiq_enableclr, 1 << bit);
	local_irq_restore(flags);
}

static inline void tangox_iiq_disable(unsigned int x)
{
	int bit = x - IIQ_CONTROLLER_IRQ_BASE;
	unsigned long flags;

	local_irq_save(flags);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_iiq_enableclr_hi, 1 << (bit - 32));
		local_irq_restore(flags);
		return;
	}
#endif
	WR_CPU_REG32(CPU_iiq_enableclr, 1 << bit);
	local_irq_restore(flags);
}

static unsigned int tangox_irq_startup(unsigned int x)
{
	int bit = x - IRQ_CONTROLLER_IRQ_BASE;

	/* clear any pending interrupt before enabling it */

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_edge_rawstat_hi, 1 << (bit - 32));
		tangox_irq_enable(x);
		return 0;
	}
#endif

	WR_CPU_REG32(CPU_edge_rawstat, 1 << bit);

	tangox_irq_enable(x);

	return 0;
}

static unsigned int tangox_fiq_startup(unsigned int x)
{
	int bit = x - FIQ_CONTROLLER_IRQ_BASE;

	/* clear any pending interrupt before enabling it */

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_edge_rawstat_hi, 1 << (bit - 32));
		tangox_fiq_enable(x);
		return 0;
	}
#endif

	WR_CPU_REG32(CPU_edge_rawstat, 1 << bit);

	tangox_fiq_enable(x);

	return 0;
}

static unsigned int tangox_iiq_startup(unsigned int x)
{
	int bit = x - IIQ_CONTROLLER_IRQ_BASE;

	/* clear any pending interrupt before enabling it */

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_edge_rawstat_hi, 1 << (bit - 32));
		tangox_iiq_enable(x);
		return 0;
	}
#endif

	WR_CPU_REG32(CPU_edge_rawstat, 1 << bit);

	tangox_iiq_enable(x);

	return 0;
}

#define	tangox_irq_shutdown tangox_irq_disable
#define	tangox_fiq_shutdown tangox_fiq_disable
#define	tangox_iiq_shutdown tangox_iiq_disable

static void tangox_irq_ack(unsigned int x)
{
	int bit = x - IRQ_CONTROLLER_IRQ_BASE;

	tangox_irq_disable(x);

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_edge_rawstat_hi, 1 << (bit - 32));
		return;
	}
#endif
	WR_CPU_REG32(CPU_edge_rawstat, 1 << bit);
}

static void tangox_fiq_ack(unsigned int x)
{
	int bit = x - FIQ_CONTROLLER_IRQ_BASE;

	tangox_fiq_disable(x);

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_edge_rawstat_hi, 1 << (bit - 32));
		return;
	}
#endif
	WR_CPU_REG32(CPU_edge_rawstat, 1 << bit);
}

static void tangox_iiq_ack(unsigned int x)
{
	int bit = x - IIQ_CONTROLLER_IRQ_BASE;

	tangox_iiq_disable(x);

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if (bit >= 32) {
		WR_CPU_REG32(CPU_edge_rawstat_hi, 1 << (bit - 32));
		return;
	}
#endif
	WR_CPU_REG32(CPU_edge_rawstat, 1 << bit);
}

static void tangox_irq_end(unsigned int x)
{
	if (!(irq_desc[x].status & (IRQ_DISABLED | IRQ_INPROGRESS)))
		tangox_irq_enable(x);
}

static void tangox_fiq_end(unsigned int x)
{
	if (!(irq_desc[x].status & (IRQ_DISABLED | IRQ_INPROGRESS)))
		tangox_fiq_enable(x);
}

static void tangox_iiq_end(unsigned int x)
{
	if (!(irq_desc[x].status & (IRQ_DISABLED | IRQ_INPROGRESS)))
		tangox_iiq_enable(x);
}

/*
 * our hw_irq_controller
 */
static hw_irq_controller tangox_irq_controller = {
	.typename = "tangox_irq",
	.startup = tangox_irq_startup,
	.shutdown = tangox_irq_shutdown,
	.enable = tangox_irq_enable,
	.disable = tangox_irq_disable,
	.ack = tangox_irq_ack,
	.end = tangox_irq_end,
};

static hw_irq_controller tangox_fiq_controller = {
	.typename = "tangox_fiq",
	.startup = tangox_fiq_startup,
	.shutdown = tangox_fiq_shutdown,
	.enable = tangox_fiq_enable,
	.disable = tangox_fiq_disable,
	.ack = tangox_fiq_ack,
	.end = tangox_fiq_end,
};

static hw_irq_controller tangox_iiq_controller = {
	.typename = "tangox_iiq",
	.startup = tangox_iiq_startup,
	.shutdown = tangox_iiq_shutdown,
	.enable = tangox_iiq_enable,
	.disable = tangox_iiq_disable,
	.ack = tangox_iiq_ack,
	.end = tangox_iiq_end,
};

static struct irqaction irq_cascade = {
	no_action, SA_SHIRQ, { { 0, } }, "cascade", NULL, NULL
};

void __init arch_init_irq(void)
{
	unsigned long x;
	unsigned long rise = 0;
	unsigned long fall = 0;
	unsigned long edge_trig = 0;
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	unsigned long rise_hi = 0;
	unsigned long fall_hi = 0;
	unsigned long edge_trig_hi = 0;
#endif

	/* this hooks except_vec0 to tangox assembly routine */
	set_except_vector(0, tangoxIRQ);

	/* irq_desc entries 0..7 */
	mips_cpu_irq_init(MIPS_CPU_IRQ_BASE);

	for (x = IRQ_CONTROLLER_IRQ_BASE; x < IRQ_CONTROLLER_IRQ_BASE + IRQ_COUNT; x++) {
		irq_desc[x].status = IRQ_DISABLED;
		irq_desc[x].action = NULL;
		irq_desc[x].depth = 1;
		irq_desc[x].handler = &tangox_irq_controller;
	}

	for (x = FIQ_CONTROLLER_IRQ_BASE; x < FIQ_CONTROLLER_IRQ_BASE + IRQ_COUNT; x++) {
		irq_desc[x].status = IRQ_DISABLED;
		irq_desc[x].action = NULL;
		irq_desc[x].depth = 1;
		irq_desc[x].handler = &tangox_fiq_controller;
	}

	for (x = IIQ_CONTROLLER_IRQ_BASE; x < IIQ_CONTROLLER_IRQ_BASE + IRQ_COUNT; x++) {
		irq_desc[x].status = IRQ_DISABLED;
		irq_desc[x].action = NULL;
		irq_desc[x].depth = 1;
		irq_desc[x].handler = &tangox_iiq_controller;
	}

	setup_irq(MIPS_CPU_IRQ_BASE + 2, &irq_cascade);
	setup_irq(MIPS_CPU_IRQ_BASE + 3, &irq_cascade);
	setup_irq(MIPS_CPU_IRQ_BASE + 4, &irq_cascade);

	WR_CPU_REG32(CPU_irq_enableclr, 0xffffffff);
	WR_CPU_REG32(CPU_fiq_enableclr, 0xffffffff);
	WR_CPU_REG32(CPU_iiq_enableclr, 0xffffffff);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	WR_CPU_REG32(CPU_irq_enableclr_hi, 0xffffffff);
	WR_CPU_REG32(CPU_fiq_enableclr_hi, 0xffffffff);
	WR_CPU_REG32(CPU_iiq_enableclr_hi, 0xffffffff);
#endif

	rise = RD_CPU_REG32(CPU_edge_config_rise);
	fall = RD_CPU_REG32(CPU_edge_config_fall);
	edge_trig = rise ^ fall;
	WR_CPU_REG32(CPU_edge_rawstat, edge_trig);
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	rise_hi = RD_CPU_REG32(CPU_edge_config_rise_hi);
	fall_hi = RD_CPU_REG32(CPU_edge_config_fall_hi);
	edge_trig_hi = rise_hi ^ fall_hi;
	WR_CPU_REG32(CPU_edge_rawstat_hi, edge_trig_hi);
#endif

	return;
}

