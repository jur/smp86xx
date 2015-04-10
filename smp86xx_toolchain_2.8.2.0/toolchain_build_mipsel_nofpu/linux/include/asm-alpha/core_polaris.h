#ifndef __ALPHA_POLARIS__H__
#define __ALPHA_POLARIS__H__

#include <linux/types.h>
#include <asm/compiler.h>

/*
 * POLARIS is the internal name for a core logic chipset which provides
 * memory controller and PCI access for the 21164PC chip based systems.
 *
 * This file is based on:
 *
 * Polaris System Controller
 * Device Functional Specification
 * 22-Jan-98
 * Rev. 4.2
 *
 */

/* Polaris memory regions */
#define POLARIS_SPARSE_MEM_BASE		(IDENT_ADDR + 0xf800000000UL)
#define POLARIS_DENSE_MEM_BASE		(IDENT_ADDR + 0xf900000000UL)
#define POLARIS_SPARSE_IO_BASE		(IDENT_ADDR + 0xf980000000UL)
#define POLARIS_SPARSE_CONFIG_BASE	(IDENT_ADDR + 0xf9c0000000UL)
#define POLARIS_IACK_BASE		(IDENT_ADDR + 0xf9f8000000UL)
#define POLARIS_DENSE_IO_BASE		(IDENT_ADDR + 0xf9fc000000UL)
#define POLARIS_DENSE_CONFIG_BASE	(IDENT_ADDR + 0xf9fe000000UL)

#define POLARIS_IACK_SC			POLARIS_IACK_BASE

/* The Polaris command/status registers live in PCI Config space for
 * bus 0/device 0.  As such, they may be bytes, words, or doublewords.
 */
#define POLARIS_W_VENID		(POLARIS_DENSE_CONFIG_BASE)
#define POLARIS_W_DEVID		(POLARIS_DENSE_CONFIG_BASE+2)
#define POLARIS_W_CMD		(POLARIS_DENSE_CONFIG_BASE+4)
#define POLARIS_W_STATUS	(POLARIS_DENSE_CONFIG_BASE+6)

/*
 * Data structure for handling POLARIS machine checks:
 */
struct el_POLARIS_sysdata_mcheck {
    u_long      psc_status;
    u_long	psc_pcictl0;
    u_long	psc_pcictl1;
    u_long	psc_pcictl2;
};

#endif /* __ALPHA_POLARIS__H__ */
