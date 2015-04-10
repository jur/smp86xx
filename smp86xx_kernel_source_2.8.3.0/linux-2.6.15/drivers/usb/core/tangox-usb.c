/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/
#include <linux/config.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/init.h>
#include <linux/spinlock.h>
#include <linux/usb.h>

#include "tangox-usb.h"

#undef DEBUG

#ifdef DEBUG
#define DBG(x...) printk(x)
#else
#define DBG(x...)
#endif

void tangox_usb_init(void)
{
        int  i;
        unsigned long temp;
#ifdef CONFIG_TANGOX_XENV_READ
	if (!tangox_usb_enabled())
		return;
#endif
	/*check see if it's inited*/
        temp = gbus_read_uint32(pGBus, TANGOX_USB_CTL_STATUS_REG_BASE + 0x0);
	if(temp && (1<<19)){
		printk("TangoX USB was initialized.\n");
		return;
	}
	else
		printk("TangoX USB initializing...\n");

	/*
	1. Program the clean divider and clock multiplexer to provide 
	   a 48 MHz reference to the USB block.
	   This is done in bootloader.
	*/


#if 0   /* If you want to use external crystal at 24MHZ*/
	printk("TangoX USB using 24MHz external crystal.\n");
        gbus_write_uint32(pGBus , REG_BASE_system_block + SYS_hostclk_mux, 0x300);
        gbus_write_uint32(pGBus , TANGOX_USB_CTL_STATUS_REG_BASE + 0x0, 0x70);
	wait_ms(5);
        gbus_write_uint32(pGBus , TANGOX_USB_CTL_STATUS_REG_BASE + 0xc, 0xf9931);
	wait_ms(30);
#endif

        /*2. PHY software reset*/
        DBG("Performing PHY Reseting...\n");
        temp = gbus_read_uint32(pGBus, TANGOX_USB_CTL_STATUS_REG_BASE + 0x0);
        gbus_write_uint32(pGBus, TANGOX_USB_CTL_STATUS_REG_BASE + 0x0, temp | 0x01);
        udelay (30);
        gbus_write_uint32(pGBus, TANGOX_USB_CTL_STATUS_REG_BASE + 0x0, temp);
        wait_ms(5);

	/*3. Reset Bit 1 of USB register 0x21700 to enable the USB Host controller.
	     This is done in bootloader 
	*/

        /*4. OHCI Software reset*/
        DBG("Performing USB OHCI Reseting...\n");
        temp = gbus_read_uint32(pGBus, TANGOX_OHCI_BASE_ADDR + 0x08);
        gbus_write_uint32(pGBus, TANGOX_OHCI_BASE_ADDR + 0x08,  temp | 0x01);
        wait_ms(5);

        /*5. OHCI DPLL Software reset, it says the bit is for simulation*/
        DBG("Performing USB OHCI DPLL Reseting...\n");
        temp = gbus_read_uint32(pGBus, TANGOX_USB_CTL_STATUS_REG_BASE + 0x0);
        gbus_write_uint32(pGBus,  TANGOX_USB_CTL_STATUS_REG_BASE + 0x0, temp | (1<<19));
        wait_ms(5);
	
	/*6. EHCI Host Software Reset*/
        DBG("Performing USB EHCI Reseting...\n");
        temp = gbus_read_uint32(pGBus, TANGOX_EHCI_BASE_ADDR + 0x10);
        gbus_write_uint32(pGBus, TANGOX_EHCI_BASE_ADDR + 0x10,  temp | 0x02);
        wait_ms(5);

        for(i = 0; i < 4; i++){
                temp = gbus_read_uint32(pGBus, TANGOX_USB_CTL_STATUS_REG_BASE + i*4);
                DBG("TangoX USB register %d = 0x%x\n", i, temp);
        }

        return;
}

EXPORT_SYMBOL(tangox_usb_init);

