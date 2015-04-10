/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * include/asm-sh64/param.h
 *
 * Copyright (C) 2000, 2001  Paolo Alberelli
 * Copyright (C) 2003  Paul Mundt
 *
 */
#ifndef __ASM_SH64_PARAM_H
#define __ASM_SH64_PARAM_H


#ifndef HZ
#define HZ 100
#endif

#define EXEC_PAGESIZE	4096

#ifndef NGROUPS
#define NGROUPS		32
#endif

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */

#endif /* __ASM_SH64_PARAM_H */
