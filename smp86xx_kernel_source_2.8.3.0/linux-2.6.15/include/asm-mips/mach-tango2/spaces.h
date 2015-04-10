/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007 Sigma Designs, Inc.
 * Copyright (C) 1994 - 1999, 2000, 03, 04 Ralf Baechle
 * Copyright (C) 2000, 2002  Maciej W. Rozycki
 * Copyright (C) 1990, 1999, 2000 Silicon Graphics, Inc.
 */
#ifndef _ASM_MACH_TANGO2_SPACES_H
#define _ASM_MACH_TANGO2_SPACES_H

#include <linux/config.h>

#define CAC_BASE		0x90000000
#define IO_BASE			0xa0000000
#define UNCAC_BASE		0xa0000000
#define MAP_BASE		0xc0000000

/*
 * This handles the memory map.
 * We handle pages at KSEG0 for kernels with 32 bit address space.
 */
#define PAGE_OFFSET		0x80000000UL

/*
 * Memory above this physical address will be considered highmem.
 */
#ifndef HIGHMEM_START
#define HIGHMEM_START		0x20000000UL
#endif

#endif /* __ASM_MACH_TANGO2_SPACES_H */
