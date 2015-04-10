#ifndef _BITS_SYSCALLS_H
#define _BITS_SYSCALLS_H

#ifndef _SYSCALL_H
# error "Never use <bits/syscalls.h> directly; include <sys/syscall.h> instead."
#endif

#include <errno.h>

/* This includes the `__NR_<name>' syscall numbers taken from the Linux kernel
 * header files.  It also defines the traditional `SYS_<name>' macros for older
 * programs.  */
#include <bits/sysnum.h>

/* Define a macro which expands inline into the wrapper code for a system
   call. This use is for internal calls that do not need to handle errors
   normally. It will never touch errno.
   On powerpc a system call basically clobbers the same registers like a
   function call, with the exception of LR (which is needed for the
   "sc; bnslr+" sequence) and CR (where only CR0.SO is clobbered to signal
   an error return status).  */

# undef INLINE_SYSCALL
#if 1
# define INLINE_SYSCALL(name, nr, args...)				\
  ({									\
    INTERNAL_SYSCALL_DECL (sc_err);					\
    long int sc_ret = INTERNAL_SYSCALL (name, sc_err, nr, args);	\
    if (INTERNAL_SYSCALL_ERROR_P (sc_ret, sc_err))			\
      {									\
	__set_errno (INTERNAL_SYSCALL_ERRNO (sc_ret, sc_err));		\
	sc_ret = -1L;							\
      }									\
    sc_ret;								\
  })
#else
# define INLINE_SYSCALL(name, nr, args...)				\
  ({									\
    INTERNAL_SYSCALL_DECL (sc_err);					\
    long int sc_ret = INTERNAL_SYSCALL (name, sc_err, nr, args);	\
    if (INTERNAL_SYSCALL_ERROR_P (sc_ret, sc_err))			\
      {									\
	sc_ret = __syscall_error(INTERNAL_SYSCALL_ERRNO (sc_ret, sc_err));\
      }									\
    sc_ret;								\
  })
#endif

/* Define a macro which expands inline into the wrapper code for a system
   call. This use is for internal calls that do not need to handle errors
   normally. It will never touch errno.
   On powerpc a system call basically clobbers the same registers like a
   function call, with the exception of LR (which is needed for the
   "sc; bnslr+" sequence) and CR (where only CR0.SO is clobbered to signal
   an error return status).  */

# undef INTERNAL_SYSCALL_DECL
# define INTERNAL_SYSCALL_DECL(err) long int err

# undef INTERNAL_SYSCALL
# define INTERNAL_SYSCALL_NCS(name, err, nr, args...)			\
  ({									\
    register long int r0  __asm__ ("r0");				\
    register long int r3  __asm__ ("r3");				\
    register long int r4  __asm__ ("r4");				\
    register long int r5  __asm__ ("r5");				\
    register long int r6  __asm__ ("r6");				\
    register long int r7  __asm__ ("r7");				\
    register long int r8  __asm__ ("r8");				\
    register long int r9  __asm__ ("r9");				\
    register long int r10 __asm__ ("r10");				\
    register long int r11 __asm__ ("r11");				\
    register long int r12 __asm__ ("r12");				\
    LOADARGS_##nr(name, args);						\
    __asm__ __volatile__						\
      ("sc   \n\t"							\
       "mfcr %0"							\
       : "=&r" (r0),							\
	 "=&r" (r3), "=&r" (r4), "=&r" (r5),  "=&r" (r6),  "=&r" (r7),	\
	 "=&r" (r8), "=&r" (r9), "=&r" (r10), "=&r" (r11), "=&r" (r12)	\
       : ASM_INPUT_##nr							\
       : "cr0", "ctr", "memory");					\
    err = r0;								\
    (int) r3;								\
  })
# define INTERNAL_SYSCALL(name, err, nr, args...) \
  INTERNAL_SYSCALL_NCS (__NR_##name, err, nr, ##args)

# undef INTERNAL_SYSCALL_ERROR_P
# define INTERNAL_SYSCALL_ERROR_P(val, err) \
  ((void) (val), __builtin_expect ((err) & (1 << 28), 0))

# undef INTERNAL_SYSCALL_ERRNO
# define INTERNAL_SYSCALL_ERRNO(val, err)     (val)

# define LOADARGS_0(name, dummy) \
	r0 = (long int)name
# define LOADARGS_1(name, __arg1) \
	LOADARGS_0(name, 0); \
	r3 = (long int)__arg1
# define LOADARGS_2(name, __arg1, __arg2) \
	LOADARGS_1(name, __arg1); \
	r4 = (long int)__arg2
# define LOADARGS_3(name, __arg1, __arg2, __arg3) \
	LOADARGS_2(name, __arg1, __arg2); \
	r5 = (long int)__arg3
# define LOADARGS_4(name, __arg1, __arg2, __arg3, __arg4) \
	LOADARGS_3(name, __arg1, __arg2, __arg3); \
	r6 = (long int)__arg4
# define LOADARGS_5(name, __arg1, __arg2, __arg3, __arg4, __arg5) \
	LOADARGS_4(name, __arg1, __arg2, __arg3, __arg4); \
	r7 = (long int)__arg5
# define LOADARGS_6(name, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6) \
	LOADARGS_5(name, __arg1, __arg2, __arg3, __arg4, __arg5); \
	r8 = (long int)__arg6

# define ASM_INPUT_0 "0" (r0)
# define ASM_INPUT_1 ASM_INPUT_0, "1" (r3)
# define ASM_INPUT_2 ASM_INPUT_1, "2" (r4)
# define ASM_INPUT_3 ASM_INPUT_2, "3" (r5)
# define ASM_INPUT_4 ASM_INPUT_3, "4" (r6)
# define ASM_INPUT_5 ASM_INPUT_4, "5" (r7)
# define ASM_INPUT_6 ASM_INPUT_5, "6" (r8)

#undef _syscall0
#define _syscall0(type,name) \
type name(void){ \
  return (type) INLINE_SYSCALL(name, 0); \
}

#undef _syscall1
#define _syscall1(type,name,type1,arg1) \
type name(type1 arg1){  \
  return (type) INLINE_SYSCALL(name, 1, arg1); \
}

#undef _syscall2
#define _syscall2(type,name,type1,arg1,type2,arg2) \
type name(type1 arg1, type2 arg2){      \
  return (type) INLINE_SYSCALL(name, 2, arg1, arg2); \
}

#undef _syscall3
#define _syscall3(type,name,type1,arg1,type2,arg2,type3,arg3) \
type name(type1 arg1, type2 arg2, type3 arg3){  \
  return (type) INLINE_SYSCALL(name, 3, arg1, arg2, arg3); \
}

#undef _syscall4
#define _syscall4(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4) \
type name(type1 arg1, type2 arg2, type3 arg3, type4 arg4){      \
  return (type) INLINE_SYSCALL(name, 4, arg1, arg2, arg3, arg4); \
}

#undef _syscall5
#define _syscall5(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4,type5,arg5) \
type name(type1 arg1, type2 arg2, type3 arg3, type4 arg4, type5 arg5){  \
  return (type) INLINE_SYSCALL(name, 5, arg1, arg2, arg3, arg4, arg5); \
}

#undef _syscall6
#define _syscall6(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4,type5,arg5,type6,arg6) \
type name(type1 arg1, type2 arg2, type3 arg3, type4 arg4, type5 arg5, type6 arg6){      \
  return (type) INLINE_SYSCALL(name, 6, arg1, arg2, arg3, arg4, arg5, arg6); \
}

#endif /* _BITS_SYSCALLS_H */

