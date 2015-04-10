# 1 "/home/davidhu/svn.32M/HW/ralink/RT61/v1.1.2.0/rtmp_main.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "./include/linux/autoconf.h" 1
# 1 "<command line>" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT61/v1.1.2.0/rtmp_main.c"
# 30 "/home/davidhu/svn.32M/HW/ralink/RT61/v1.1.2.0/rtmp_main.c"
# 1 "/home/davidhu/svn.32M/HW/ralink/RT61/v1.1.2.0/rt_config.h" 1
# 59 "/home/davidhu/svn.32M/HW/ralink/RT61/v1.1.2.0/rt_config.h"
# 1 "include/linux/module.h" 1
# 9 "include/linux/module.h"
# 1 "include/linux/config.h" 1





# 1 "include/linux/autoconf.h" 1
# 7 "include/linux/config.h" 2
# 10 "include/linux/module.h" 2
# 1 "include/linux/sched.h" 1



# 1 "include/asm/param.h" 1
# 14 "include/asm/param.h"
# 1 "include/asm-mips/mach-tango2/param.h" 1
# 15 "include/asm/param.h" 2
# 5 "include/linux/sched.h" 2


# 1 "include/linux/capability.h" 1
# 16 "include/linux/capability.h"
# 1 "include/linux/types.h" 1
# 13 "include/linux/types.h"
# 1 "include/linux/posix_types.h" 1



# 1 "include/linux/stddef.h" 1



# 1 "include/linux/compiler.h" 1
# 42 "include/linux/compiler.h"
# 1 "include/linux/compiler-gcc4.h" 1



# 1 "include/linux/compiler-gcc.h" 1
# 5 "include/linux/compiler-gcc4.h" 2
# 43 "include/linux/compiler.h" 2
# 5 "include/linux/stddef.h" 2
# 5 "include/linux/posix_types.h" 2
# 36 "include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "include/asm/posix_types.h" 1
# 12 "include/asm/posix_types.h"
# 1 "include/asm/sgidefs.h" 1
# 13 "include/asm/posix_types.h" 2







typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;

typedef unsigned long __kernel_nlink_t;




typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;

typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;






typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef long __kernel_daddr_t;
typedef char * __kernel_caddr_t;

typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef __kernel_uid_t __kernel_old_uid_t;
typedef __kernel_gid_t __kernel_old_gid_t;
typedef unsigned int __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {

 long val[2];




} __kernel_fsid_t;




static __inline__ __attribute__((always_inline)) void __FD_SET(unsigned long __fd, __kernel_fd_set *__fdsetp)
{
 unsigned long __tmp = __fd / (8 * sizeof(unsigned long));
 unsigned long __rem = __fd % (8 * sizeof(unsigned long));
 __fdsetp->fds_bits[__tmp] |= (1UL<<__rem);
}


static __inline__ __attribute__((always_inline)) void __FD_CLR(unsigned long __fd, __kernel_fd_set *__fdsetp)
{
 unsigned long __tmp = __fd / (8 * sizeof(unsigned long));
 unsigned long __rem = __fd % (8 * sizeof(unsigned long));
 __fdsetp->fds_bits[__tmp] &= ~(1UL<<__rem);
}


static __inline__ __attribute__((always_inline)) int __FD_ISSET(unsigned long __fd, const __kernel_fd_set *__p)
{
 unsigned long __tmp = __fd / (8 * sizeof(unsigned long));
 unsigned long __rem = __fd % (8 * sizeof(unsigned long));
 return (__p->fds_bits[__tmp] & (1UL<<__rem)) != 0;
}






static __inline__ __attribute__((always_inline)) void __FD_ZERO(__kernel_fd_set *__p)
{
 unsigned long *__tmp = __p->fds_bits;
 int __i;

 if (__builtin_constant_p((1024/(8 * sizeof(unsigned long))))) {
  switch ((1024/(8 * sizeof(unsigned long)))) {
  case 16:
   __tmp[ 0] = 0; __tmp[ 1] = 0;
   __tmp[ 2] = 0; __tmp[ 3] = 0;
   __tmp[ 4] = 0; __tmp[ 5] = 0;
   __tmp[ 6] = 0; __tmp[ 7] = 0;
   __tmp[ 8] = 0; __tmp[ 9] = 0;
   __tmp[10] = 0; __tmp[11] = 0;
   __tmp[12] = 0; __tmp[13] = 0;
   __tmp[14] = 0; __tmp[15] = 0;
   return;

  case 8:
   __tmp[ 0] = 0; __tmp[ 1] = 0;
   __tmp[ 2] = 0; __tmp[ 3] = 0;
   __tmp[ 4] = 0; __tmp[ 5] = 0;
   __tmp[ 6] = 0; __tmp[ 7] = 0;
   return;

  case 4:
   __tmp[ 0] = 0; __tmp[ 1] = 0;
   __tmp[ 2] = 0; __tmp[ 3] = 0;
   return;
  }
 }
 __i = (1024/(8 * sizeof(unsigned long)));
 while (__i) {
  __i--;
  *__tmp = 0;
  __tmp++;
 }
}
# 48 "include/linux/posix_types.h" 2
# 14 "include/linux/types.h" 2
# 1 "include/asm/types.h" 1
# 14 "include/asm/types.h"
typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;
# 38 "include/asm/types.h"
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 57 "include/asm/types.h"
typedef __signed char s8;
typedef unsigned char u8;

typedef __signed short s16;
typedef unsigned short u16;

typedef __signed int s32;
typedef unsigned int u32;
# 74 "include/asm/types.h"
typedef __signed__ long long s64;
typedef unsigned long long u64;
# 84 "include/asm/types.h"
typedef u32 dma_addr_t;

typedef u64 dma64_addr_t;







typedef unsigned long phys_t;
# 15 "include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;


typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;
# 55 "include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 64 "include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 135 "include/linux/types.h"
typedef unsigned long sector_t;
# 164 "include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;



typedef unsigned gfp_t;


struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 17 "include/linux/capability.h" 2
# 32 "include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;



# 1 "include/linux/spinlock.h" 1
# 50 "include/linux/spinlock.h"
# 1 "include/linux/preempt.h" 1
# 10 "include/linux/preempt.h"
# 1 "include/linux/thread_info.h" 1
# 13 "include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 unsigned long arg0, arg1, arg2, arg3;
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "include/linux/bitops.h" 1
# 11 "include/linux/bitops.h"
static inline __attribute__((always_inline)) int generic_ffs(int x)
{
 int r = 1;

 if (!x)
  return 0;
 if (!(x & 0xffff)) {
  x >>= 16;
  r += 16;
 }
 if (!(x & 0xff)) {
  x >>= 8;
  r += 8;
 }
 if (!(x & 0xf)) {
  x >>= 4;
  r += 4;
 }
 if (!(x & 3)) {
  x >>= 2;
  r += 2;
 }
 if (!(x & 1)) {
  x >>= 1;
  r += 1;
 }
 return r;
}





static __inline__ __attribute__((always_inline)) int generic_fls(int x)
{
 int r = 32;

 if (!x)
  return 0;
 if (!(x & 0xffff0000u)) {
  x <<= 16;
  r -= 16;
 }
 if (!(x & 0xff000000u)) {
  x <<= 8;
  r -= 8;
 }
 if (!(x & 0xf0000000u)) {
  x <<= 4;
  r -= 4;
 }
 if (!(x & 0xc0000000u)) {
  x <<= 2;
  r -= 2;
 }
 if (!(x & 0x80000000u)) {
  x <<= 1;
  r -= 1;
 }
 return r;
}





# 1 "include/asm/bitops.h" 1
# 15 "include/asm/bitops.h"
# 1 "include/asm/bug.h" 1







# 1 "include/asm/break.h" 1
# 9 "include/asm/bug.h" 2


int printk(const char * fmt, ...) __attribute__ ((format (printf, 1, 2)));
# 26 "include/asm/bug.h"
# 1 "include/asm-generic/bug.h" 1
# 27 "include/asm/bug.h" 2
# 16 "include/asm/bitops.h" 2
# 1 "include/asm/byteorder.h" 1
# 25 "include/asm/byteorder.h"
# 1 "include/linux/byteorder/little_endian.h" 1
# 12 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/byteorder/swab.h" 1
# 133 "include/linux/byteorder/swab.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ({ __u16 __tmp = (x) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__ __attribute__((always_inline)) __u16 __swab16p(const __u16 *x)
{
 return ({ __u16 __tmp = (*(x)) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__ __attribute__((always_inline)) void __swab16s(__u16 *addr)
{
 do { *(addr) = ({ __u16 __tmp = (*((addr))) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); }); } while (0);
}

static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ({ __u32 __tmp = (x) ; ({ __u32 __x = (__tmp); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }); });
}
static __inline__ __attribute__((always_inline)) __u32 __swab32p(const __u32 *x)
{
 return ({ __u32 __tmp = (*(x)) ; ({ __u32 __x = (__tmp); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }); });
}
static __inline__ __attribute__((always_inline)) void __swab32s(__u32 *addr)
{
 do { *(addr) = ({ __u32 __tmp = (*((addr))) ; ({ __u32 __x = (__tmp); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }); }); } while (0);
}


static __inline__ __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 x)
{

 __u32 h = x >> 32;
        __u32 l = x & ((1ULL<<32)-1);
        return (((__u64)(__builtin_constant_p((__u32)(l)) ? ({ __u32 __x = ((l)); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }) : __fswab32((l)))) << 32) | ((__u64)((__builtin_constant_p((__u32)(h)) ? ({ __u32 __x = ((h)); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }) : __fswab32((h)))));



}
static __inline__ __attribute__((always_inline)) __u64 __swab64p(const __u64 *x)
{
 return ({ __u64 __tmp = (*(x)) ; ({ __u64 __x = (__tmp); ((__u64)( (__u64)(((__u64)(__x) & (__u64)0x00000000000000ffULL) << 56) | (__u64)(((__u64)(__x) & (__u64)0x000000000000ff00ULL) << 40) | (__u64)(((__u64)(__x) & (__u64)0x0000000000ff0000ULL) << 24) | (__u64)(((__u64)(__x) & (__u64)0x00000000ff000000ULL) << 8) | (__u64)(((__u64)(__x) & (__u64)0x000000ff00000000ULL) >> 8) | (__u64)(((__u64)(__x) & (__u64)0x0000ff0000000000ULL) >> 24) | (__u64)(((__u64)(__x) & (__u64)0x00ff000000000000ULL) >> 40) | (__u64)(((__u64)(__x) & (__u64)0xff00000000000000ULL) >> 56) )); }); });
}
static __inline__ __attribute__((always_inline)) void __swab64s(__u64 *addr)
{
 do { *(addr) = ({ __u64 __tmp = (*((addr))) ; ({ __u64 __x = (__tmp); ((__u64)( (__u64)(((__u64)(__x) & (__u64)0x00000000000000ffULL) << 56) | (__u64)(((__u64)(__x) & (__u64)0x000000000000ff00ULL) << 40) | (__u64)(((__u64)(__x) & (__u64)0x0000000000ff0000ULL) << 24) | (__u64)(((__u64)(__x) & (__u64)0x00000000ff000000ULL) << 8) | (__u64)(((__u64)(__x) & (__u64)0x000000ff00000000ULL) >> 8) | (__u64)(((__u64)(__x) & (__u64)0x0000ff0000000000ULL) >> 24) | (__u64)(((__u64)(__x) & (__u64)0x00ff000000000000ULL) >> 40) | (__u64)(((__u64)(__x) & (__u64)0xff00000000000000ULL) >> 56) )); }); }); } while (0);
}
# 13 "include/linux/byteorder/little_endian.h" 2
# 43 "include/linux/byteorder/little_endian.h"
static inline __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 104 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/byteorder/generic.h" 1
# 154 "include/linux/byteorder/generic.h"
extern __u32 ntohl(__be32);
extern __be32 htonl(__u32);
extern __u16 ntohs(__be16);
extern __be16 htons(__u16);
# 105 "include/linux/byteorder/little_endian.h" 2
# 26 "include/asm/byteorder.h" 2
# 17 "include/asm/bitops.h" 2
# 1 "include/asm/cpu-features.h" 1
# 14 "include/asm/cpu-features.h"
# 1 "include/asm/cpu.h" 1
# 15 "include/asm/cpu-features.h" 2
# 1 "include/asm/cpu-info.h" 1
# 16 "include/asm/cpu-info.h"
# 1 "include/asm/cache.h" 1
# 13 "include/asm/cache.h"
# 1 "include/asm-mips/mach-generic/kmalloc.h" 1
# 14 "include/asm/cache.h" 2
# 17 "include/asm/cpu-info.h" 2
# 25 "include/asm/cpu-info.h"
struct cache_desc {
 unsigned short linesz;
 unsigned short ways;
 unsigned short sets;
 unsigned int waysize;
 unsigned int waybit;
 unsigned int flags;
};
# 43 "include/asm/cpu-info.h"
struct cpuinfo_mips {
 unsigned long udelay_val;
 unsigned long asid_cache;
# 64 "include/asm/cpu-info.h"
 unsigned long options;
 unsigned long ases;
 unsigned int processor_id;
 unsigned int fpu_id;
 unsigned int cputype;
 int isa_level;
 int tlbsize;
 struct cache_desc icache;
 struct cache_desc dcache;
 struct cache_desc scache;
 struct cache_desc tcache;
 void *data;
} __attribute__((aligned((1 << 4))));

extern struct cpuinfo_mips cpu_data[];


extern void cpu_probe(void);
extern void cpu_report(void);
# 16 "include/asm/cpu-features.h" 2
# 1 "include/asm-mips/mach-generic/cpu-feature-overrides.h" 1
# 17 "include/asm/cpu-features.h" 2
# 18 "include/asm/bitops.h" 2
# 35 "include/asm/bitops.h"
# 1 "include/asm/interrupt.h" 1
# 15 "include/asm/interrupt.h"
# 1 "include/asm/hazards.h" 1
# 101 "include/asm/hazards.h"
__asm__(
 "	.macro	_ssnop					\n\t"
 "	sll	$0, $2, 1				\n\t"
 "	.endm						\n\t"
 "							\n\t"
 "	.macro	_ehb					\n\t"
 "	sll	$0, $0, 3				\n\t"
 "	.endm						\n\t");
# 159 "include/asm/hazards.h"
__asm__(
 "	.macro\tirq_enable_hazard			\n\t"
 "	_ehb						\n\t"
 "	.endm						\n\t"
 "							\n\t"
 "	.macro\tirq_disable_hazard			\n\t"
 "	_ehb						\n\t"
 "	.endm						\n\t"
 "							\n\t"
 "	.macro\tback_to_back_c0_hazard			\n\t"
 "	_ehb						\n\t"
 "	.endm");
# 16 "include/asm/interrupt.h" 2

__asm__ (
 "	.macro	local_irq_enable				\n"
 "	.set	push						\n"
 "	.set	reorder						\n"
 "	.set	noat						\n"

 "	ei							\n"






 "	irq_enable_hazard					\n"
 "	.set	pop						\n"
 "	.endm");

static inline __attribute__((always_inline)) void local_irq_enable(void)
{
 __asm__ __volatile__(
  "local_irq_enable"
  :
  :
  : "memory");
}
# 50 "include/asm/interrupt.h"
__asm__ (
 "	.macro	local_irq_disable\n"
 "	.set	push						\n"
 "	.set	noat						\n"

 "	di							\n"







 "	irq_disable_hazard					\n"
 "	.set	pop						\n"
 "	.endm							\n");

static inline __attribute__((always_inline)) void local_irq_disable(void)
{
 __asm__ __volatile__(
  "local_irq_disable"
  :
  :
  : "memory");
}

__asm__ (
 "	.macro	local_save_flags flags				\n"
 "	.set	push						\n"
 "	.set	reorder						\n"
 "	mfc0	\\flags, $12					\n"
 "	.set	pop						\n"
 "	.endm							\n");






__asm__ (
 "	.macro	local_irq_save result				\n"
 "	.set	push						\n"
 "	.set	reorder						\n"
 "	.set	noat						\n"

 "	di	\\result					\n"
 "	andi	\\result, 1					\n"







 "	irq_disable_hazard					\n"
 "	.set	pop						\n"
 "	.endm							\n");
# 115 "include/asm/interrupt.h"
__asm__ (
 "	.macro	local_irq_restore flags				\n"
 "	.set	noreorder					\n"
 "	.set	noat						\n"





 "	beqz	\\flags, 1f					\n"
 "	 di							\n"
 "	ei							\n"
 "1:								\n"
# 143 "include/asm/interrupt.h"
 "	irq_disable_hazard					\n"
 "	.set	at						\n"
 "	.set	reorder						\n"
 "	.endm							\n");
# 36 "include/asm/bitops.h" 2

# 1 "include/asm/war.h" 1
# 38 "include/asm/bitops.h" 2
# 69 "include/asm/bitops.h"
static inline __attribute__((always_inline)) void set_bit(unsigned long nr, volatile unsigned long *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1			# set_bit	\n"
  "	or	%0, %2					\n"
  "	" "sc	" "%0, %1					\n"
  "	beqzl	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m)
  : "ir" (1UL << (nr & 31UL)), "m" (*m));
 } else if ((cpu_data[0].options & 0x00020000)) {
  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1			# set_bit	\n"
  "	or	%0, %2					\n"
  "	" "sc	" "%0, %1					\n"
  "	beqz	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m)
  : "ir" (1UL << (nr & 31UL)), "m" (*m));
 } else {
  volatile unsigned long *a = addr;
  unsigned long mask;
  unsigned long flags;

  a += nr >> 5;
  mask = 1UL << (nr & 31UL);
  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  *a |= mask;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}
# 116 "include/asm/bitops.h"
static inline __attribute__((always_inline)) void __set_bit(unsigned long nr, volatile unsigned long * addr)
{
 unsigned long * m = ((unsigned long *) addr) + (nr >> 5);

 *m |= 1UL << (nr & 31UL);
}
# 133 "include/asm/bitops.h"
static inline __attribute__((always_inline)) void clear_bit(unsigned long nr, volatile unsigned long *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1			# clear_bit	\n"
  "	and	%0, %2					\n"
  "	" "sc	" "%0, %1					\n"
  "	beqzl	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m)
  : "ir" (~(1UL << (nr & 31UL))), "m" (*m));
 } else if ((cpu_data[0].options & 0x00020000)) {
  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1			# clear_bit	\n"
  "	and	%0, %2					\n"
  "	" "sc	" "%0, %1					\n"
  "	beqz	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m)
  : "ir" (~(1UL << (nr & 31UL))), "m" (*m));
 } else {
  volatile unsigned long *a = addr;
  unsigned long mask;
  unsigned long flags;

  a += nr >> 5;
  mask = 1UL << (nr & 31UL);
  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  *a &= ~mask;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}
# 180 "include/asm/bitops.h"
static inline __attribute__((always_inline)) void __clear_bit(unsigned long nr, volatile unsigned long * addr)
{
 unsigned long * m = ((unsigned long *) addr) + (nr >> 5);

 *m &= ~(1UL << (nr & 31UL));
}
# 196 "include/asm/bitops.h"
static inline __attribute__((always_inline)) void change_bit(unsigned long nr, volatile unsigned long *addr)
{
 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3				\n"
  "1:	" "ll	" "%0, %1		# change_bit	\n"
  "	xor	%0, %2				\n"
  "	" "sc	" "%0, %1				\n"
  "	beqzl	%0, 1b				\n"
  "	.set	mips0				\n"
  : "=&r" (temp), "=m" (*m)
  : "ir" (1UL << (nr & 31UL)), "m" (*m));
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3				\n"
  "1:	" "ll	" "%0, %1		# change_bit	\n"
  "	xor	%0, %2				\n"
  "	" "sc	" "%0, %1				\n"
  "	beqz	%0, 1b				\n"
  "	.set	mips0				\n"
  : "=&r" (temp), "=m" (*m)
  : "ir" (1UL << (nr & 31UL)), "m" (*m));
 } else {
  volatile unsigned long *a = addr;
  unsigned long mask;
  unsigned long flags;

  a += nr >> 5;
  mask = 1UL << (nr & 31UL);
  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  *a ^= mask;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}
# 246 "include/asm/bitops.h"
static inline __attribute__((always_inline)) void __change_bit(unsigned long nr, volatile unsigned long * addr)
{
 unsigned long * m = ((unsigned long *) addr) + (nr >> 5);

 *m ^= 1UL << (nr & 31UL);
}
# 261 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int test_and_set_bit(unsigned long nr,
 volatile unsigned long *addr)
{
 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp, res;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1		# test_and_set_bit	\n"
  "	or	%2, %0, %3				\n"
  "	" "sc	" "%2, %1					\n"
  "	beqzl	%2, 1b					\n"
  "	and	%2, %0, %3				\n"



  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 31UL)), "m" (*m)
  : "memory");

  return res != 0;
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp, res;

  __asm__ __volatile__(
  "	.set	push					\n"
  "	.set	noreorder				\n"
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1		# test_and_set_bit	\n"
  "	or	%2, %0, %3				\n"
  "	" "sc	" "%2, %1					\n"
  "	beqz	%2, 1b					\n"
  "	 and	%2, %0, %3				\n"



  "	.set	pop					\n"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 31UL)), "m" (*m)
  : "memory");

  return res != 0;
 } else {
  volatile unsigned long *a = addr;
  unsigned long mask;
  int retval;
  unsigned long flags;

  a += nr >> 5;
  mask = 1UL << (nr & 31UL);
  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  retval = (mask & *a) != 0;
  *a |= mask;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);

  return retval;
 }
}
# 332 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int __test_and_set_bit(unsigned long nr,
 volatile unsigned long *addr)
{
 volatile unsigned long *a = addr;
 unsigned long mask;
 int retval;

 a += nr >> 5;
 mask = 1UL << (nr & 31UL);
 retval = (mask & *a) != 0;
 *a |= mask;

 return retval;
}
# 355 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int test_and_clear_bit(unsigned long nr,
 volatile unsigned long *addr)
{
 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp, res;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1		# test_and_clear_bit	\n"
  "	or	%2, %0, %3				\n"
  "	xor	%2, %3					\n"
  "	" "sc	" "%2, %1					\n"
  "	beqzl	%2, 1b					\n"
  "	and	%2, %0, %3				\n"



  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 31UL)), "m" (*m)
  : "memory");

  return res != 0;
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp, res;

  __asm__ __volatile__(
  "	.set	push					\n"
  "	.set	noreorder				\n"
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1		# test_and_clear_bit	\n"
  "	or	%2, %0, %3				\n"
  "	xor	%2, %3					\n"
  "	" "sc	" "%2, %1					\n"
  "	beqz	%2, 1b					\n"
  "	 and	%2, %0, %3				\n"



  "	.set	pop					\n"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 31UL)), "m" (*m)
  : "memory");

  return res != 0;
 } else {
  volatile unsigned long *a = addr;
  unsigned long mask;
  int retval;
  unsigned long flags;

  a += nr >> 5;
  mask = 1UL << (nr & 31UL);
  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  retval = (mask & *a) != 0;
  *a &= ~mask;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);

  return retval;
 }
}
# 428 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int __test_and_clear_bit(unsigned long nr,
 volatile unsigned long * addr)
{
 volatile unsigned long *a = addr;
 unsigned long mask;
 int retval;

 a += (nr >> 5);
 mask = 1UL << (nr & 31UL);
 retval = ((mask & *a) != 0);
 *a &= ~mask;

 return retval;
}
# 451 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int test_and_change_bit(unsigned long nr,
 volatile unsigned long *addr)
{
 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp, res;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1		# test_and_change_bit	\n"
  "	xor	%2, %0, %3				\n"
  "	" "sc	" "%2, %1					\n"
  "	beqzl	%2, 1b					\n"
  "	and	%2, %0, %3				\n"



  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 31UL)), "m" (*m)
  : "memory");

  return res != 0;
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
  unsigned long temp, res;

  __asm__ __volatile__(
  "	.set	push					\n"
  "	.set	noreorder				\n"
  "	.set	mips3					\n"
  "1:	" "ll	" "%0, %1		# test_and_change_bit	\n"
  "	xor	%2, %0, %3				\n"
  "	" "sc	" "\t%2, %1				\n"
  "	beqz	%2, 1b					\n"
  "	 and	%2, %0, %3				\n"



  "	.set	pop					\n"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 31UL)), "m" (*m)
  : "memory");

  return res != 0;
 } else {
  volatile unsigned long *a = addr;
  unsigned long mask, retval;
  unsigned long flags;

  a += nr >> 5;
  mask = 1UL << (nr & 31UL);
  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  retval = (mask & *a) != 0;
  *a ^= mask;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);

  return retval;
 }
}
# 521 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int __test_and_change_bit(unsigned long nr,
 volatile unsigned long *addr)
{
 volatile unsigned long *a = addr;
 unsigned long mask;
 int retval;

 a += (nr >> 5);
 mask = 1UL << (nr & 31UL);
 retval = ((mask & *a) != 0);
 *a ^= mask;

 return retval;
}
# 545 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int test_bit(unsigned long nr, const volatile unsigned long *addr)
{
 return 1UL & (addr[nr >> 5] >> (nr & 31UL));
}





static inline __attribute__((always_inline)) int __ilog2(unsigned long x)
{
 int lz;

 if (sizeof(x) == 4) {
  __asm__ (
  "	.set	push					\n"
  "	.set	mips32					\n"
  "	clz	%0, %1					\n"
  "	.set	pop					\n"
  : "=r" (lz)
  : "r" (x));

  return 31 - lz;
 }

 do { if (__builtin_expect(!!((sizeof(x) != 8)!=0), 0)) do { printk("<0> BUG on %s:%d (%s).\n", "include/asm/bitops.h", 570, __FUNCTION__); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); } while(0);

 __asm__ (
 "	.set	push						\n"
 "	.set	mips64						\n"
 "	dclz	%0, %1						\n"
 "	.set	pop						\n"
 : "=r" (lz)
 : "r" (x));

 return 63 - lz;
}
# 590 "include/asm/bitops.h"
static inline __attribute__((always_inline)) unsigned long __ffs(unsigned long word)
{

 return __ilog2(word & -word);
# 617 "include/asm/bitops.h"
}
# 627 "include/asm/bitops.h"
static inline __attribute__((always_inline)) unsigned long ffs(unsigned long word)
{
 if (!word)
  return 0;

 return __ffs(word) + 1;
}







static inline __attribute__((always_inline)) unsigned long ffz(unsigned long word)
{
 return __ffs (~word);
}
# 653 "include/asm/bitops.h"
static inline __attribute__((always_inline)) unsigned long flz(unsigned long word)
{

 return __ilog2(~word);
# 682 "include/asm/bitops.h"
}
# 691 "include/asm/bitops.h"
static inline __attribute__((always_inline)) unsigned long fls(unsigned long word)
{
 if (word == 0)
  return 0;

 return flz(~word) + 1;
}
# 706 "include/asm/bitops.h"
static inline __attribute__((always_inline)) unsigned long find_next_zero_bit(const unsigned long *addr,
 unsigned long size, unsigned long offset)
{
 const unsigned long *p = addr + (offset >> 5);
 unsigned long result = offset & ~31UL;
 unsigned long tmp;

 if (offset >= size)
  return size;
 size -= result;
 offset &= 31UL;
 if (offset) {
  tmp = *(p++);
  tmp |= ~0UL >> (32 -offset);
  if (size < 32)
   goto found_first;
  if (~tmp)
   goto found_middle;
  size -= 32;
  result += 32;
 }
 while (size & ~31UL) {
  if (~(tmp = *(p++)))
   goto found_middle;
  result += 32;
  size -= 32;
 }
 if (!size)
  return result;
 tmp = *p;

found_first:
 tmp |= ~0UL << size;
 if (tmp == ~0UL)
  return result + size;
found_middle:
 return result + ffz(tmp);
}
# 754 "include/asm/bitops.h"
static inline __attribute__((always_inline)) unsigned long find_next_bit(const unsigned long *addr,
 unsigned long size, unsigned long offset)
{
 const unsigned long *p = addr + (offset >> 5);
 unsigned long result = offset & ~31UL;
 unsigned long tmp;

 if (offset >= size)
  return size;
 size -= result;
 offset &= 31UL;
 if (offset) {
  tmp = *(p++);
  tmp &= ~0UL << offset;
  if (size < 32)
   goto found_first;
  if (tmp)
   goto found_middle;
  size -= 32;
  result += 32;
 }
 while (size & ~31UL) {
  if ((tmp = *(p++)))
   goto found_middle;
  result += 32;
  size -= 32;
 }
 if (!size)
  return result;
 tmp = *p;

found_first:
 tmp &= ~0UL >> (32 - size);
 if (tmp == 0UL)
  return result + size;
found_middle:
 return result + __ffs(tmp);
}
# 812 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{

 if (__builtin_expect(!!(b[0]), 0))
  return __ffs(b[0]);
 if (__builtin_expect(!!(b[1]), 0))
  return __ffs(b[1]) + 32;
 if (__builtin_expect(!!(b[2]), 0))
  return __ffs(b[2]) + 64;
 if (b[3])
  return __ffs(b[3]) + 96;
 return __ffs(b[4]) + 128;
# 832 "include/asm/bitops.h"
}
# 846 "include/asm/bitops.h"
static inline __attribute__((always_inline)) int __test_and_set_le_bit(unsigned long nr, unsigned long *addr)
{
 unsigned char *ADDR = (unsigned char *) addr;
 int mask, retval;

 ADDR += nr >> 3;
 mask = 1 << (nr & 0x07);
 retval = (mask & *ADDR) != 0;
 *ADDR |= mask;

 return retval;
}

static inline __attribute__((always_inline)) int __test_and_clear_le_bit(unsigned long nr, unsigned long *addr)
{
 unsigned char *ADDR = (unsigned char *) addr;
 int mask, retval;

 ADDR += nr >> 3;
 mask = 1 << (nr & 0x07);
 retval = (mask & *ADDR) != 0;
 *ADDR &= ~mask;

 return retval;
}

static inline __attribute__((always_inline)) int test_le_bit(unsigned long nr, const unsigned long * addr)
{
 const unsigned char *ADDR = (const unsigned char *) addr;
 int mask;

 ADDR += nr >> 3;
 mask = 1 << (nr & 0x07);

 return ((mask & *ADDR) != 0);
}

static inline __attribute__((always_inline)) unsigned long find_next_zero_le_bit(unsigned long *addr,
 unsigned long size, unsigned long offset)
{
 unsigned long *p = ((unsigned long *) addr) + (offset >> 5);
 unsigned long result = offset & ~31UL;
 unsigned long tmp;

 if (offset >= size)
  return size;
 size -= result;
 offset &= 31UL;
 if (offset) {
  tmp = __cpu_to_le32p((__u32 *) (p++));
  tmp |= ~0UL >> (32 -offset);
  if (size < 32)
   goto found_first;
  if (~tmp)
   goto found_middle;
  size -= 32;
  result += 32;
 }
 while (size & ~31UL) {
  if (~(tmp = __cpu_to_le32p((__u32 *) (p++))))
   goto found_middle;
  result += 32;
  size -= 32;
 }
 if (!size)
  return result;
 tmp = __cpu_to_le32p((__u32 *) (p));

found_first:
 tmp |= ~0UL << size;
 if (tmp == ~0UL)
  return result + size;

found_middle:
 return result + ffz(tmp);
}
# 78 "include/linux/bitops.h" 2

static __inline__ __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}






static inline __attribute__((always_inline)) unsigned int generic_hweight32(unsigned int w)
{
        unsigned int res = (w & 0x55555555) + ((w >> 1) & 0x55555555);
        res = (res & 0x33333333) + ((res >> 2) & 0x33333333);
        res = (res & 0x0F0F0F0F) + ((res >> 4) & 0x0F0F0F0F);
        res = (res & 0x00FF00FF) + ((res >> 8) & 0x00FF00FF);
        return (res & 0x0000FFFF) + ((res >> 16) & 0x0000FFFF);
}

static inline __attribute__((always_inline)) unsigned int generic_hweight16(unsigned int w)
{
        unsigned int res = (w & 0x5555) + ((w >> 1) & 0x5555);
        res = (res & 0x3333) + ((res >> 2) & 0x3333);
        res = (res & 0x0F0F) + ((res >> 4) & 0x0F0F);
        return (res & 0x00FF) + ((res >> 8) & 0x00FF);
}

static inline __attribute__((always_inline)) unsigned int generic_hweight8(unsigned int w)
{
        unsigned int res = (w & 0x55) + ((w >> 1) & 0x55);
        res = (res & 0x33) + ((res >> 2) & 0x33);
        return (res & 0x0F) + ((res >> 4) & 0x0F);
}

static inline __attribute__((always_inline)) unsigned long generic_hweight64(__u64 w)
{

 return generic_hweight32((unsigned int)(w >> 32)) +
    generic_hweight32((unsigned int)w);
# 140 "include/linux/bitops.h"
}

static inline __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? generic_hweight32(w) : generic_hweight64(w);
}







static inline __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}







static inline __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}
# 21 "include/linux/thread_info.h" 2
# 1 "include/asm/thread_info.h" 1
# 16 "include/asm/thread_info.h"
# 1 "include/asm/processor.h" 1
# 15 "include/asm/processor.h"
# 1 "include/linux/threads.h" 1
# 16 "include/asm/processor.h" 2

# 1 "include/asm/cachectl.h" 1
# 18 "include/asm/processor.h" 2


# 1 "include/asm/mipsregs.h" 1
# 17 "include/asm/mipsregs.h"
# 1 "include/linux/linkage.h" 1




# 1 "include/asm/linkage.h" 1
# 6 "include/linux/linkage.h" 2
# 18 "include/asm/mipsregs.h" 2
# 1322 "include/asm/mipsregs.h"
static inline __attribute__((always_inline)) void tlb_probe(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbp\n\t"
  ".set reorder");
}

static inline __attribute__((always_inline)) void tlb_read(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbr\n\t"
  ".set reorder");
}

static inline __attribute__((always_inline)) void tlb_write_indexed(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbwi\n\t"
  ".set reorder");
}

static inline __attribute__((always_inline)) void tlb_write_random(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbwr\n\t"
  ".set reorder");
}
# 1395 "include/asm/mipsregs.h"
static inline __attribute__((always_inline)) unsigned int set_c0_status(unsigned int set) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int clear_c0_status(unsigned int clear) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int change_c0_status(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; }
static inline __attribute__((always_inline)) unsigned int set_c0_cause(unsigned int set) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$13" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$13" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$13" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$13" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int clear_c0_cause(unsigned int clear) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$13" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$13" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$13" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$13" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int change_c0_cause(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$13" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$13" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$13" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$13" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; }
static inline __attribute__((always_inline)) unsigned int set_c0_config(unsigned int set) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$16" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$16" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$16" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$16" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int clear_c0_config(unsigned int clear) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$16" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$16" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$16" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$16" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int change_c0_config(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$16" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$16" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$16" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$16" ", " "0" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; }
static inline __attribute__((always_inline)) unsigned int set_c0_intcontrol(unsigned int set) { unsigned int res; res = ({ int __res; __asm__ __volatile__( "cfc0\t%0, " "$20" "\n\t" : "=r" (__res)); __res; }); res |= set; do { __asm__ __volatile__( "ctc0\t%z0, " "$20" "\n\t" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int clear_c0_intcontrol(unsigned int clear) { unsigned int res; res = ({ int __res; __asm__ __volatile__( "cfc0\t%0, " "$20" "\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { __asm__ __volatile__( "ctc0\t%z0, " "$20" "\n\t" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int change_c0_intcontrol(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; __asm__ __volatile__( "cfc0\t%0, " "$20" "\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { __asm__ __volatile__( "ctc0\t%z0, " "$20" "\n\t" : : "Jr" ((unsigned int)(res))); } while (0); return res; }
static inline __attribute__((always_inline)) unsigned int set_c0_intctl(unsigned int set) { unsigned int res; res = ({ int __res; if (1 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "1" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (1 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "1" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int clear_c0_intctl(unsigned int clear) { unsigned int res; res = ({ int __res; if (1 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "1" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (1 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "1" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int change_c0_intctl(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (1 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "1" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (1 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "1" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; }
static inline __attribute__((always_inline)) unsigned int set_c0_srsmap(unsigned int set) { unsigned int res; res = ({ int __res; if (3 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "3" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (3 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "3" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int clear_c0_srsmap(unsigned int clear) { unsigned int res; res = ({ int __res; if (3 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "3" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (3 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "3" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; } static inline __attribute__((always_inline)) unsigned int change_c0_srsmap(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (3 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "3" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (3 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" ((unsigned int)(res))); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "3" "\n\t" ".set\tmips0" : : "Jr" ((unsigned int)(res))); } while (0); return res; }
# 21 "include/asm/processor.h" 2
# 1 "include/asm/prefetch.h" 1
# 22 "include/asm/processor.h" 2
# 1 "include/asm/system.h" 1
# 18 "include/asm/system.h"
# 1 "include/asm/addrspace.h" 1
# 19 "include/asm/system.h" 2

# 1 "include/asm/dsp.h" 1
# 26 "include/asm/dsp.h"
static inline __attribute__((always_inline)) void __init_dsp(void)
{
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# mthi	$1, $ac1				\n" "	.word	0x00200811				\n" "	.set	pop					\n" : : "r" (0)); } while (0);
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# mtlo	$1, $ac1				\n" "	.word	0x00200813				\n" "	.set	pop					\n" : : "r" (0)); } while (0);
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# mthi	$1, $ac2				\n" "	.word	0x00201011				\n" "	.set	pop					\n" : : "r" (0)); } while (0);
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# mtlo	$1, $ac2				\n" "	.word	0x00201013				\n" "	.set	pop					\n" : : "r" (0)); } while (0);
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# mthi	$1, $ac3				\n" "	.word	0x00201811				\n" "	.set	pop					\n" : : "r" (0)); } while (0);
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# mtlo	$1, $ac3				\n" "	.word	0x00201813				\n" "	.set	pop					\n" : : "r" (0)); } while (0);
 do { __asm__ __volatile__( "	.set	push					\n" "	.set	noat					\n" "	move	$1, %0					\n" "	# wrdsp $1, %x1					\n" "	.word	0x7c2004f8 | (%x1 << 11)		\n" "	.set	pop					\n" : : "r" (0x00000000), "i" (0x3ff)); } while (0);
}

static inline __attribute__((always_inline)) void init_dsp(void)
{
 if ((cpu_data[0].ases & 0x00000010))
  __init_dsp();
}
# 21 "include/asm/system.h" 2
# 1 "include/asm/ptrace.h" 1
# 14 "include/asm/ptrace.h"
# 1 "include/asm/isadep.h" 1
# 15 "include/asm/ptrace.h" 2
# 32 "include/asm/ptrace.h"
struct pt_regs {


 unsigned long pad0[6];



 unsigned long regs[32];


 unsigned long cp0_status;
 unsigned long hi;
 unsigned long lo;
 unsigned long cp0_badvaddr;
 unsigned long cp0_cause;
 unsigned long cp0_epc;
};
# 82 "include/asm/ptrace.h"
extern void show_regs(struct pt_regs *);

extern void do_syscall_trace(struct pt_regs *regs, int entryexit);
# 22 "include/asm/system.h" 2
# 154 "include/asm/system.h"
extern void *resume(void *last, void *next, void *next_ti);

struct task_struct;
# 167 "include/asm/system.h"
static inline __attribute__((always_inline)) unsigned long __xchg_u32(volatile int * m, unsigned int val)
{
 __u32 retval;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long dummy;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%0, %3			# xchg_u32	\n"
  "	.set	mips0					\n"
  "	move	%2, %z4					\n"
  "	.set	mips3					\n"
  "	sc	%2, %1					\n"
  "	beqzl	%2, 1b					\n"



  "	.set	mips0					\n"
  : "=&r" (retval), "=m" (*m), "=&r" (dummy)
  : "R" (*m), "Jr" (val)
  : "memory");
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long dummy;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%0, %3			# xchg_u32	\n"
  "	.set	mips0					\n"
  "	move	%2, %z4					\n"
  "	.set	mips3					\n"
  "	sc	%2, %1					\n"
  "	beqz	%2, 1b					\n"



  "	.set	mips0					\n"
  : "=&r" (retval), "=m" (*m), "=&r" (dummy)
  : "R" (*m), "Jr" (val)
  : "memory");
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  retval = *m;
  *m = val;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }

 return retval;
}
# 268 "include/asm/system.h"
extern __u64 __xchg_u64_unsupported_on_32bit_kernels(volatile __u64 * m, __u64 val);





extern void __xchg_called_with_bad_pointer(void);

static inline __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 4:
   return __xchg_u32(ptr, x);
  case 8:
   return __xchg_u64_unsupported_on_32bit_kernels(ptr, x);
 }
 __xchg_called_with_bad_pointer();
 return x;
}






static inline __attribute__((always_inline)) unsigned long __cmpxchg_u32(volatile int * m, unsigned long old,
 unsigned long new)
{
 __u32 retval;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  __asm__ __volatile__(
  "	.set	push					\n"
  "	.set	noat					\n"
  "	.set	mips3					\n"
  "1:	ll	%0, %2			# __cmpxchg_u32	\n"
  "	bne	%0, %z3, 2f				\n"
  "	.set	mips0					\n"
  "	move	$1, %z4					\n"
  "	.set	mips3					\n"
  "	sc	$1, %1					\n"
  "	beqzl	$1, 1b					\n"



  "2:							\n"
  "	.set	pop					\n"
  : "=&r" (retval), "=m" (*m)
  : "R" (*m), "Jr" (old), "Jr" (new)
  : "memory");
 } else if ((cpu_data[0].options & 0x00020000)) {
  __asm__ __volatile__(
  "	.set	push					\n"
  "	.set	noat					\n"
  "	.set	mips3					\n"
  "1:	ll	%0, %2			# __cmpxchg_u32	\n"
  "	bne	%0, %z3, 2f				\n"
  "	.set	mips0					\n"
  "	move	$1, %z4					\n"
  "	.set	mips3					\n"
  "	sc	$1, %1					\n"
  "	beqz	$1, 1b					\n"



  "2:							\n"
  "	.set	pop					\n"
  : "=&r" (retval), "=m" (*m)
  : "R" (*m), "Jr" (old), "Jr" (new)
  : "memory");
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  retval = *m;
  if (retval == old)
   *m = new;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }

 return retval;
}
# 406 "include/asm/system.h"
extern unsigned long __cmpxchg_u64_unsupported_on_32bit_kernels(
 volatile int * m, unsigned long old, unsigned long new);





extern void __cmpxchg_called_with_bad_pointer(void);

static inline __attribute__((always_inline)) unsigned long __cmpxchg(volatile void * ptr, unsigned long old,
 unsigned long new, int size)
{
 switch (size) {
 case 4:
  return __cmpxchg_u32(ptr, old, new);
 case 8:
  return __cmpxchg_u64_unsupported_on_32b