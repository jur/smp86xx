/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */
#ifndef __ARCH_PPC64_CACHE_H
#define __ARCH_PPC64_CACHE_H

#include <asm/types.h>

/* bytes per L1 cache line */
#define L1_CACHE_SHIFT	7
#define L1_CACHE_BYTES	(1 << L1_CACHE_SHIFT)

#define SMP_CACHE_BYTES L1_CACHE_BYTES
#define L1_CACHE_SHIFT_MAX 7	/* largest L1 which this arch supports */

#ifndef __ASSEMBLY__

struct ppc64_caches {
	__u32	dsize;			/* L1 d-cache size */
	__u32	dline_size;		/* L1 d-cache line size	*/
	__u32	log_dline_size;
	__u32	dlines_per_page;
	__u32	isize;			/* L1 i-cache size */
	__u32	iline_size;		/* L1 i-cache line size	*/
	__u32	log_iline_size;
	__u32	ilines_per_page;
};

extern struct ppc64_caches ppc64_caches;

#endif

#endif
