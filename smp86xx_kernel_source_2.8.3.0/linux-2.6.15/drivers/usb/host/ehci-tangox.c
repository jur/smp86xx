/*
 * Modified for SMP86XX.
 *
 * Copyright (c) 2004-2007 Sigma Designs, Inc.
 *
 * EHCI HCD (Host Controller Driver) PCI Bus Glue.
 *
 * Copyright (c) 2000-2004 by David Brownell
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <linux/platform_device.h>
#ifndef CONFIG_TANGOX
#error "This file is TANGOX EHCI bus glue.  CONFIG_TANGOX must be defined."
#endif

#ifdef	CONFIG_PM
static int tangox_suspend(struct device *dev, pm_message_t state, u32 phase);
static int tangox_resume(struct device *dev, u32 phase);
#endif

/* called during probe() after chip reset completes */
static int ehci_tangox_setup(struct usb_hcd *hcd)
{
        struct ehci_hcd         *ehci = hcd_to_ehci(hcd);
        u32                     temp;
        int                     retval;

        ehci->caps = hcd->regs;
        ehci->regs = hcd->regs + HC_LENGTH(readl(&ehci->caps->hc_capbase));
        dbg_hcs_params(ehci, "reset");
        dbg_hcc_params(ehci, "reset");

        /* cache this readonly data; minimize chip reads */
        ehci->hcs_params = readl(&ehci->caps->hcs_params);

        retval = ehci_halt(ehci);
        if (retval)
                return retval;

        /* data structure init */
        retval = ehci_init(hcd);
        if (retval)
                return retval;

        if (ehci_is_TDI(ehci))
                ehci_reset(ehci);

        /* at least the Genesys GL880S needs fixup here */
        temp = HCS_N_CC(ehci->hcs_params) * HCS_N_PCC(ehci->hcs_params);
        temp &= 0x0f;
        if (temp && HCS_N_PORTS(ehci->hcs_params) > temp) {
                ehci_dbg(ehci, "bogus port configuration: "
                        "cc=%d x pcc=%d < ports=%d\n",
                        HCS_N_CC(ehci->hcs_params),
                        HCS_N_PCC(ehci->hcs_params),
                        HCS_N_PORTS(ehci->hcs_params));
        }

        return retval;
}



static const struct hc_driver ehci_tangox_hc_driver = {
	.description =		hcd_name,
	.product_desc =		"SMP863x/SMP865x EHCI Host Controller",
	.hcd_priv_size =	sizeof(struct ehci_hcd),

	/*
	 * generic hardware linkage
	 */
	.irq =			ehci_irq,
	.flags =		HCD_MEMORY | HCD_USB2,

	/*
	 * basic lifecycle operations
	 */
	.reset =		 ehci_tangox_setup,
	.start =		ehci_run,
#ifdef	CONFIG_PM
	.suspend =		tangox_suspend,
	.resume =		tangox_resume,
#endif
	.stop =			ehci_stop,

	/*
	 * managing i/o requests and associated device resources
	 */
	.urb_enqueue =		ehci_urb_enqueue,
	.urb_dequeue =		ehci_urb_dequeue,
	.endpoint_disable =	ehci_endpoint_disable,

	/*
	 * scheduling support
	 */
	.get_frame_number =	ehci_get_frame,

	/*
	 * root hub support
	 */
	.hub_status_data =	ehci_hub_status_data,
	.hub_control =		ehci_hub_control,
	.bus_suspend =		ehci_bus_suspend,
	.bus_resume =		ehci_bus_resume,
};

/*-------------------------------------------------------------------------*/


int tangox_hcd_probe (struct device *dev)
{
        struct usb_hcd          *hcd;
        struct ehci_hcd         *ehci;
        int                     retval;

        tangox_usb_init();

        if (usb_disabled())
                return -ENODEV;

        hcd = usb_create_hcd (&ehci_tangox_hc_driver, dev, dev->bus_id);
        if (!hcd) {
                retval = -ENOMEM;
                goto err1;
        }

        ehci = hcd_to_ehci(hcd);
        //dev_set_drvdata(dev, ehci);

        hcd->rsrc_start = NON_CACHED(TANGOX_OHCI_BASE_ADDR);
        hcd->regs =  (void *)NON_CACHED(TANGOX_EHCI_BASE_ADDR);
        hcd->irq = TANGOX_EHCI_IRQ;
        hcd->self.controller = dev;
        hcd->self.bus_name = dev->bus_id;
        hcd->product_desc ="TangoX USB 2.0";

        retval = usb_add_hcd (hcd, TANGOX_EHCI_IRQ, SA_SHIRQ);
        if (retval != 0)
                goto err2;
        return retval;
err2:
        usb_put_hcd (hcd);
err1:
        dev_err (dev, "init %s fail, %d\n", hcd_name, retval);
        return retval;
}

int tangox_hcd_remove (struct device *dev)
{
        struct usb_hcd *hcd = dev_get_drvdata(dev);
        if (!hcd)
                return -1;

        usb_remove_hcd (hcd);
        usb_put_hcd (hcd);
        return 0;
}

#ifdef	CONFIG_PM
static int tangox_suspend(struct device *dev, pm_message_t state, u32 phase)
{
        printk("TangoX EHCI suspend.\n");
        return 0;
}

static int tangox_resume(struct device *dev, u32 phase)
{
        printk("TangoX EHCI resume.\n");
        return 0;
}
#endif

static struct device_driver tangox_driver = {
        .name    =      (char *)hcd_name,
        .bus     =      &platform_bus_type,
        .probe   =      tangox_hcd_probe,
        .remove  =      tangox_hcd_remove,
#ifdef CONFIG_PM 
        .suspend =      tangox_suspend,
        .resume  =      tangox_resume,
#endif
};

#define DRIVER_INFO DRIVER_VERSION " " DRIVER_DESC

MODULE_DESCRIPTION (DRIVER_INFO);
MODULE_AUTHOR (DRIVER_AUTHOR);
MODULE_LICENSE ("GPL");

static u64 ehci_dmamask = ~(u32)0;
static void tangox_ehci_release_dev(struct device * dev)
{
        dev->parent = NULL;
}

static struct platform_device tangox_ehci_device = {
        .name           = (char *)hcd_name,
        .id             = -1,
        .dev = {
                .dma_mask               = &ehci_dmamask,
                .coherent_dma_mask      = 0xffffffff,
                .release                = tangox_ehci_release_dev,
        },
       .num_resources  = 0,
       .resource       = 0,

};

static struct platform_device *tangox_platform_devices[] __initdata = {
        &tangox_ehci_device,
};


static int __init tangox_init(void)
{
#ifdef CONFIG_TANGOX_XENV_READ
	if (!tangox_usb_enabled())
		return -ENODEV;
#endif
        if (usb_disabled())
                return -ENODEV;

        platform_add_devices(tangox_platform_devices,
                                    ARRAY_SIZE(tangox_platform_devices));

        printk("driver %s, %s\n", hcd_name, DRIVER_VERSION);
        return  driver_register(&tangox_driver);
}
module_init(tangox_init);

static void __exit tangox_cleanup(void)
{
        driver_unregister(&tangox_driver);
        platform_device_unregister(&tangox_ehci_device);

}
module_exit(tangox_cleanup);

