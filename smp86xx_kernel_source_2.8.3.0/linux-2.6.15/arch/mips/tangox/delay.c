/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/
/*
 * arch/mips/tangox/delay.c
 *
 * Copyright (C) 2003-2007 Sigma Designs, Inc.
 *
 */

#include <linux/config.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/io.h>
#include <linux/irq.h>
#include <linux/sched.h>

#include "setup.h"

static inline unsigned long tangox_getxtal(void)
{
	return(gbus_readl(REG_BASE_system_block + SYS_xtal_in_cnt));
}

/* This is the replacement of Linux's udelay. */
void tangox_udelay(unsigned usec)
{
	/* SYS_xtal_in_cnt is a counter running off 27MHz, so 1 usec
           is roughly equivalent to 27 increase of count */
	unsigned long start = tangox_getxtal();
	unsigned long end = start + (usec * 27);

	if (end <= start) 
		/* Handle overflow condition */
		while (tangox_getxtal() > start);
	while (tangox_getxtal() < end);
}

void tangox_syncwith_xtal(unsigned long *mark, unsigned usec)
{
	unsigned long end = *mark + (usec * 27);
	if (end > *mark)
		/* Handle overflow condition */
		while (tangox_getxtal() > *mark);
	while (tangox_getxtal() < end);
	*mark = end;
}

EXPORT_SYMBOL(tangox_udelay);

