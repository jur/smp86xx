#ifndef _SPARC_TYPES_H
#define _SPARC_TYPES_H

/*
 * _xx is ok: it doesn't pollute the POSIX namespace. Use these in the
 * header files exported to user space.
 */

/*
 * This file is never included by application software unless
 * explicitly requested (e.g., via linux/types.h) in which case the
 * application is Linux specific so (user-) name space pollution is
 * not a major issue.  However, for interoperability, libraries still
 * need to be careful to avoid a name clashes.
 */

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

typedef __signed__ long long __s64;
typedef unsigned long long __u64;

#endif /* __ASSEMBLY__ */

#endif /* defined(_SPARC_TYPES_H) */
