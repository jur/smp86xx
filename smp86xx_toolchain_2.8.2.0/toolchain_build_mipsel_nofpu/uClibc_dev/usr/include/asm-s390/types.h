/*
 *  include/asm-s390/types.h
 *
 *  S390 version
 *
 *  Derived from "include/asm-i386/types.h"
 */

#ifndef _S390_TYPES_H
#define _S390_TYPES_H

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

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

#ifndef __s390x__
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#endif
#else /* __s390x__ */
#ifndef __LLH_TYPE_LONG_IS_64BIT__
#define __LLH_TYPE_LONG_IS_64BIT__
#endif
typedef __signed__ long __s64;
typedef unsigned long __u64;
#endif

/* A address type so that arithmetic can be done on it & it can be upgraded to
   64 bit when necessary 
*/
typedef unsigned long addr_t; 
typedef __signed__ long saddr_t;

#endif /* __ASSEMBLY__ */

#endif /* _S390_TYPES_H */
