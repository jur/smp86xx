/* 
 * sgieisa.h: Defines for the (E)ISA bus on the SGI Indigo2
 *
 * Copyright (C) 1999 Andrew R. Baker (andrewb@uab.edu) 
 *
 */
#ifndef _MIPS_SGIEISA_H
#define _MIPS_SGIEISA_H

#define SGI_EISA_BASE 0x00080000

/* EIU registers */
#define SGI_EIU_BASE 0x0009ffc0

struct sgi_eiu_regs {
	volatile unsigned long mode;
	volatile unsigned long status;
	volatile unsigned long prempt;
	volatile unsigned long quiet;
};


#define SGI_EISA_NMI_BASE 0x00080461

struct sgi_eisa_nmi_regs { 
	volatile unsigned char reset;
	volatile unsigned char port;
};

extern void sgi_eisa_init(void);

#endif /* !(_MIPS_SGIEISA_H) */
