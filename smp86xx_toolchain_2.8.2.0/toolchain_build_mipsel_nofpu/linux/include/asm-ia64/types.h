#ifndef _ASM_IA64_TYPES_H
#define _ASM_IA64_TYPES_H

/*
 * This file is never included by application software unless explicitly requested (e.g.,
 * via linux/types.h) in which case the application is Linux specific so (user-) name
 * space pollution is not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 *
 * Based on <asm-alpha/types.h>.
 *
 * Modified 1998-2000, 2002
 *	David Mosberger-Tang <davidm@hpl.hp.com>, Hewlett-Packard Co
 */

#ifdef __ASSEMBLY__
# define __IA64_UL(x)		(x)
# define __IA64_UL_CONST(x)	x


#else
# define __IA64_UL(x)		((unsigned long)(x))
# define __IA64_UL_CONST(x)	x##UL

typedef unsigned int umode_t;

/*
 * __xx is ok: it doesn't pollute the POSIX namespace. Use these in the
 * header files exported to user space
 */

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#ifndef __LLH_TYPE_LONG_IS_64BIT__
#define __LLH_TYPE_LONG_IS_64BIT__
#endif
typedef __signed__ long __s64;
typedef unsigned long __u64;

#endif /* !__ASSEMBLY__ */

#endif /* _ASM_IA64_TYPES_H */
