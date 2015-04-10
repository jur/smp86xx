#ifndef _M68KNOMMU_BITOPS_H
#define _M68KNOMMU_BITOPS_H

/*
 * Copyright 1992, Linus Torvalds.
 */

#include <asm/byteorder.h>	/* swab32 */
#include <asm/system.h>		/* save_flags */

/*
 * fls: find last bit set.
 */
#define fls(x) generic_fls(x)

#endif /* _M68KNOMMU_BITOPS_H */
