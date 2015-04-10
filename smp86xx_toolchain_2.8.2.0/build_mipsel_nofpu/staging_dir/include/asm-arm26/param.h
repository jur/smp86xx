/*
 *  linux/include/asm-arm/param.h
 *
 *  Copyright (C) 1995-1999 Russell King
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_PARAM_H
#define __ASM_PARAM_H

#ifndef __KERNEL_HZ
#define __KERNEL_HZ	100
#endif

#define HZ		100

#ifndef NOGROUP
#define NOGROUP         (-1)
#endif

/* max length of hostname */
#define MAXHOSTNAMELEN  64

#endif

