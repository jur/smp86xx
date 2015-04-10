/*
 *
 * eisa.c:  Support for the (E)ISA bus found on the Indigo2
 *
 * Copyright (C) 1999 Andrew R. Baker (andrewb@uab.edu)
 *
 */

#include <linux/errno.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kernel_stat.h>
#include <linux/sched.h>
#include <linux/interrupt.h>
#include <linux/malloc.h>
#include <linux/random.h>

#include <asm/io.h>
#include <asm/ptrace.h>
#include <asm/sgint23.h>
#include <asm/sgieisa.h>
#include <asm/i8259.h>

struct sgi_eiu_regs *sgi_eiu;
int sgi_eisa_bus = 0;

static void eisa_int(int irq, void *dev_id, struct pt_regs *regs)
{
	/* which (E)ISA interrupt did we get? */
	int eisa_irq = inb(0x10004);
	/* find out which EISA irq we got and call i8259_do_irq */
	i8259_do_irq(eisa_irq, regs);
}

void eisa_reset(void)
{
	int i;
	outb(0x1, 0x461);
	/* wait */
	for (i = 0 ; i < 1000 ; i++)
		;
	outb(0x0, 0x461);
}


__initfunc(void sgi_eisa_init(void))
{
	if(sgi_eisa_bus) 
	{
		printk("Initializing the (E)ISA subsystem.\n");

		/* setup the EIU */
		sgi_eiu = (struct sgi_eiu_regs *) (KSEG1 + SGI_EIU_BASE);
		sgi_eiu->prempt = 0xffff;
		sgi_eiu->quiet = 0x1;
		sgi_eiu->mode = 0x40f3c07f;

		/* set the I/O base */
		mips_io_port_base = KSEG1 | SGI_EISA_BASE;

		/* reset the bus */
		eisa_reset();
	
		/* setup the i8259 interrupt controllers */
		i8259_init();
		
		/* register the EISA bus interrupt handler */
		request_irq(SGI_EISA_IRQ, eisa_int, 0, "EISA Bus", NULL);
	}
}
