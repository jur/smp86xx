/*
 * include/asm-v850/page.h -- VM ops
 *
 *  Copyright (C) 2001,02,03  NEC Electronics Corporation
 *  Copyright (C) 2001,02,03  Miles Bader <miles@gnu.org>
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License.  See the file COPYING in the main directory of this
 * archive for more details.
 *
 * Written by Miles Bader <miles@gnu.org>
 */

#ifndef __V850_PAGE_H__
#define __V850_PAGE_H__

#include <unistd.h>

#define PAGE_SIZE ((unsigned long)getpagesize())
#define PAGE_SHIFT ((PAGE_SIZE > 65536) ? -1 : ((unsigned long[]){12,13,14,-1,15,-1,-1,-1,16}[PAGE_SIZE>>13]))
#define PAGE_MASK    (~(PAGE_SIZE-1))

/*
 * PAGE_OFFSET -- the first address of the first page of memory. For archs with
 * no MMU this corresponds to the first free page in physical memory (aligned
 * on a page boundary).
 */
#ifndef PAGE_OFFSET
#define PAGE_OFFSET  0x0000000
#endif

#endif /* __V850_PAGE_H__ */
