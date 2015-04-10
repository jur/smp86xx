# 1 "init/initramfs.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "./include/linux/autoconf.h" 1
# 1 "<command line>" 2
# 1 "init/initramfs.c"
# 1 "include/linux/init.h" 1



# 1 "include/linux/config.h" 1





# 1 "include/linux/autoconf.h" 1
# 7 "include/linux/config.h" 2
# 5 "include/linux/init.h" 2
# 1 "include/linux/compiler.h" 1
# 42 "include/linux/compiler.h"
# 1 "include/linux/compiler-gcc4.h" 1



# 1 "include/linux/compiler-gcc.h" 1
# 5 "include/linux/compiler-gcc4.h" 2
# 43 "include/linux/compiler.h" 2
# 6 "include/linux/init.h" 2
# 64 "include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


extern char saved_command_line[];
# 110 "include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 145 "include/linux/init.h"
void __attribute__ ((__section__ (".init.text"))) parse_early_param(void);
# 2 "init/initramfs.c" 2
# 1 "include/linux/fs.h" 1
# 10 "include/linux/fs.h"
# 1 "include/linux/limits.h" 1
# 11 "include/linux/fs.h" 2
# 1 "include/linux/ioctl.h" 1



# 1 "include/asm/ioctl.h" 1
# 69 "include/asm/ioctl.h"
extern unsigned int __invalid_size_argument_for_IOC;
# 5 "include/linux/ioctl.h" 2
# 12 "include/linux/fs.h" 2
# 1 "include/linux/rcuref.h" 1
# 35 "include/linux/rcuref.h"
# 1 "include/linux/types.h" 1
# 13 "include/linux/types.h"
# 1 "include/linux/posix_types.h" 1



# 1 "include/linux/stddef.h" 1
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
# 36 "include/linux/rcuref.h" 2
# 1 "include/linux/interrupt.h" 1





# 1 "include/linux/kernel.h" 1
# 10 "include/linux/kernel.h"
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 1 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 105 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "include/linux/kernel.h" 2
# 1 "include/linux/linkage.h" 1




# 1 "include/asm/linkage.h" 1
# 6 "include/linux/linkage.h" 2
# 12 "include/linux/kernel.h" 2



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
# 16 "include/linux/kernel.h" 2



extern const char linux_banner[];
# 42 "include/linux/kernel.h"
extern int console_printk[];






struct completion;
# 88 "include/linux/kernel.h"
extern struct notifier_block *panic_notifier_list;
extern long (*panic_blink)(long time);
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2)));
 void do_exit(long error_code)
 __attribute__((noreturn));
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0)));
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3)));
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0)));

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int session_of_pgrp(int pgrp);


 int vprintk(const char *fmt, va_list args)
 __attribute__ ((format (printf, 1, 0)));
 int printk(const char * fmt, ...)
 __attribute__ ((format (printf, 1, 2)));
# 140 "include/linux/kernel.h"
unsigned long int_sqrt(unsigned long);

static inline __attribute__((always_inline)) int __attribute__((pure)) long_log2(unsigned long x)
{
 int r = 0;
 for (x >>= 1; x > 0; x >>= 1)
  r++;
 return r;
}

static inline __attribute__((always_inline)) unsigned long __attribute__((__const__)) roundup_pow_of_two(unsigned long x)
{
 return (1UL << fls(x - 1));
}

extern int printk_ratelimit(void);
extern int __printk_ratelimit(int ratelimit_jiffies, int ratelimit_burst);

static inline __attribute__((always_inline)) void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline __attribute__((always_inline)) void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int tainted;
extern const char *print_tainted(void);
extern void add_taint(unsigned);


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
} system_state;
# 193 "include/linux/kernel.h"
extern void dump_stack(void);
# 292 "include/linux/kernel.h"
struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};





extern int randomize_va_space;
# 7 "include/linux/interrupt.h" 2


# 1 "include/linux/preempt.h" 1
# 10 "include/linux/preempt.h"
# 1 "include/linux/thread_info.h" 1
# 13 "include/linux/thread_info.h"
struct restart_block {
 long (*fn)(struct restart_block *);
 unsigned long arg0, arg1, arg2, arg3;
};

extern long do_no_restart_syscall(struct restart_block *parm);


# 1 "include/asm/thread_info.h" 1
# 16 "include/asm/thread_info.h"
# 1 "include/asm/processor.h" 1
# 15 "include/asm/processor.h"
# 1 "include/linux/threads.h" 1
# 16 "include/asm/processor.h" 2

# 1 "include/asm/cachectl.h" 1
# 18 "include/asm/processor.h" 2


# 1 "include/asm/mipsregs.h" 1
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
  return __cmpxchg_u64_unsupported_on_32bit_kernels(ptr, old, new);
 }
 __cmpxchg_called_with_bad_pointer();
 return old;
}



extern void set_handler (unsigned long offset, void *addr, unsigned long len);
extern void set_uncached_handler (unsigned long offset, void *addr, unsigned long len);
extern void *set_vi_handler (int n, void *addr);
extern void *set_vi_srs_handler (int n, void *addr, int regset);
extern void *set_except_vector(int n, void *addr);
extern void per_cpu_trap_init(void);

extern void die(const char *, struct pt_regs *);

static inline __attribute__((always_inline)) void die_if_kernel(const char *str, struct pt_regs *regs)
{
 if (__builtin_expect(!!(!(((regs)->cp0_status & 0x18) == 0x10)), 0))
  die(str, regs);
}

extern int stop_a_enabled;
# 23 "include/asm/processor.h" 2
# 32 "include/asm/processor.h"
extern void (*cpu_wait)(void);

extern unsigned int vced_count, vcei_count;
# 71 "include/asm/processor.h"
typedef __u64 fpureg_t;

struct mips_fpu_hard_struct {
 fpureg_t fpr[32];
 unsigned int fcr31;
};
# 85 "include/asm/processor.h"
struct mips_fpu_soft_struct {
 fpureg_t fpr[32];
 unsigned int fcr31;
};

union mips_fpu_union {
        struct mips_fpu_hard_struct hard;
        struct mips_fpu_soft_struct soft;
};







typedef __u32 dspreg_t;

struct mips_dsp_state {
 dspreg_t dspr[6];
 unsigned int dspcontrol;
};



typedef struct {
 unsigned long seg;
} mm_segment_t;



struct mips_abi;




struct thread_struct {

 unsigned long reg16;
 unsigned long reg17, reg18, reg19, reg20, reg21, reg22, reg23;
 unsigned long reg29, reg30, reg31;


 unsigned long cp0_status;


 union mips_fpu_union fpu;


 struct mips_dsp_state dsp;


 unsigned long cp0_badvaddr;
 unsigned long cp0_baduaddr;
 unsigned long error_code;
 unsigned long trap_no;




 unsigned long mflags;
 unsigned long irix_trampoline;
 unsigned long irix_oldctx;
 struct mips_abi *abi;
};
# 184 "include/asm/processor.h"
struct task_struct;







extern long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);

extern unsigned long thread_saved_pc(struct task_struct *tsk);




extern void start_thread(struct pt_regs * regs, unsigned long pc, unsigned long sp);

unsigned long get_wchan(struct task_struct *p);
# 229 "include/asm/processor.h"
extern inline __attribute__((always_inline)) void prefetch(const void *addr)
{
 __asm__ __volatile__(
 "	.set	mips4		\n"
 "	pref	%0, (%1)	\n"
 "	.set	mips0		\n"
 :
 : "i" (0), "r" (addr));
}
# 17 "include/asm/thread_info.h" 2
# 25 "include/asm/thread_info.h"
struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 unsigned long flags;
 unsigned long tp_value;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;



 struct restart_block restart_block;
};
# 62 "include/asm/thread_info.h"
register struct thread_info *__current_thread_info __asm__("$28");
# 22 "include/linux/thread_info.h" 2
# 30 "include/linux/thread_info.h"
static inline __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag,&ti->flags);
}

static inline __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_bit(flag,&ti->flags);
}
# 11 "include/linux/preempt.h" 2
# 28 "include/linux/preempt.h"
 void preempt_schedule(void);
# 10 "include/linux/interrupt.h" 2
# 1 "include/linux/cpumask.h" 1
# 86 "include/linux/cpumask.h"
# 1 "include/linux/bitmap.h" 1







# 1 "include/linux/string.h" 1
# 16 "include/linux/string.h"
extern char * strpbrk(const char *,const char *);
extern char * strsep(char **,const char *);
extern __kernel_size_t strspn(const char *,const char *);
extern __kernel_size_t strcspn(const char *,const char *);




# 1 "include/asm/string.h" 1
# 24 "include/asm/string.h"
static __inline__ __attribute__((always_inline)) char *strcpy(char *__dest, __const__ char *__src)
{
  char *__xdest = __dest;

  __asm__ __volatile__(
 ".set\tnoreorder\n\t"
 ".set\tnoat\n"
 "1:\tlbu\t$1,(%1)\n\t"
 "addiu\t%1,1\n\t"
 "sb\t$1,(%0)\n\t"
 "bnez\t$1,1b\n\t"
 "addiu\t%0,1\n\t"
 ".set\tat\n\t"
 ".set\treorder"
 : "=r" (__dest), "=r" (__src)
        : "0" (__dest), "1" (__src)
 : "memory");

  return __xdest;
}


static __inline__ __attribute__((always_inline)) char *strncpy(char *__dest, __const__ char *__src, size_t __n)
{
  char *__xdest = __dest;

  if (__n == 0)
    return __xdest;

  __asm__ __volatile__(
 ".set\tnoreorder\n\t"
 ".set\tnoat\n"
 "1:\tlbu\t$1,(%1)\n\t"
 "subu\t%2,1\n\t"
 "sb\t$1,(%0)\n\t"
 "beqz\t$1,2f\n\t"
 "addiu\t%0,1\n\t"
 "bnez\t%2,1b\n\t"
 "addiu\t%1,1\n"
 "2:\n\t"
 ".set\tat\n\t"
 ".set\treorder"
        : "=r" (__dest), "=r" (__src), "=r" (__n)
        : "0" (__dest), "1" (__src), "2" (__n)
        : "memory");

  return __xdest;
}


static __inline__ __attribute__((always_inline)) int strcmp(__const__ char *__cs, __const__ char *__ct)
{
  int __res;

  __asm__ __volatile__(
 ".set\tnoreorder\n\t"
 ".set\tnoat\n\t"
 "lbu\t%2,(%0)\n"
 "1:\tlbu\t$1,(%1)\n\t"
 "addiu\t%0,1\n\t"
 "bne\t$1,%2,2f\n\t"
 "addiu\t%1,1\n\t"
 "bnez\t%2,1b\n\t"
 "lbu\t%2,(%0)\n\t"



 "move\t%2,$1\n"
 "2:\tsubu\t%2,$1\n"
 "3:\t.set\tat\n\t"
 ".set\treorder"
 : "=r" (__cs), "=r" (__ct), "=r" (__res)
 : "0" (__cs), "1" (__ct));

  return __res;
}




static __inline__ __attribute__((always_inline)) int
strncmp(__const__ char *__cs, __const__ char *__ct, size_t __count)
{
 int __res;

 __asm__ __volatile__(
 ".set\tnoreorder\n\t"
 ".set\tnoat\n"
 "1:\tlbu\t%3,(%0)\n\t"
 "beqz\t%2,2f\n\t"
 "lbu\t$1,(%1)\n\t"
 "subu\t%2,1\n\t"
 "bne\t$1,%3,3f\n\t"
 "addiu\t%0,1\n\t"
 "bnez\t%3,1b\n\t"
 "addiu\t%1,1\n"
 "2:\n\t"



 "move\t%3,$1\n"
 "3:\tsubu\t%3,$1\n\t"
 ".set\tat\n\t"
 ".set\treorder"
 : "=r" (__cs), "=r" (__ct), "=r" (__count), "=r" (__res)
 : "0" (__cs), "1" (__ct), "2" (__count));

 return __res;
}



extern void *memset(void *__s, int __c, size_t __count);


extern void *memcpy(void *__to, __const__ void *__from, size_t __n);


extern void *memmove(void *__dest, __const__ void *__src, size_t __n);



static __inline__ __attribute__((always_inline)) void *memscan(void *__addr, int __c, size_t __size)
{
 char *__end = (char *)__addr + __size;
 unsigned char __uc = (unsigned char) __c;

 __asm__(".set\tpush\n\t"
  ".set\tnoat\n\t"
  ".set\treorder\n\t"
  "1:\tbeq\t%0,%1,2f\n\t"
  "addiu\t%0,1\n\t"
  "lbu\t$1,-1(%0)\n\t"
  "bne\t$1,%z4,1b\n"
  "2:\t.set\tpop"
  : "=r" (__addr), "=r" (__end)
  : "0" (__addr), "1" (__end), "Jr" (__uc));

 return __addr;
}
# 25 "include/linux/string.h" 2
# 33 "include/linux/string.h"
size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);
# 51 "include/linux/string.h"
extern int strnicmp(const char *, const char *, __kernel_size_t);


extern char * strchr(const char *,int);


extern char * strnchr(const char *, size_t, int);


extern char * strrchr(const char *,int);


extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);
# 85 "include/linux/string.h"
extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);


extern char *kstrdup(const char *s, gfp_t gfp);
# 9 "include/linux/bitmap.h" 2
# 77 "include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parse(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);







static inline __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 32)
  *dst = 0UL;
 else {
  int len = (((nbits)+32 -1)/32) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits)+32 -1)/32);
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
}

static inline __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 32)
  *dst = *src;
 else {
  int len = (((nbits)+32 -1)/32) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if (nbits <= 32)
  *dst = ~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ((*src1 & *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if (nbits <= 32)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return ! (*src & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if (nbits <= 32)
  return ! (~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 return __bitmap_weight(src, nbits);
}

static inline __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 32)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if (nbits <= 32)
  *dst = (*src << n) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}
# 87 "include/linux/cpumask.h" 2


typedef struct { unsigned long bits[(((1)+32 -1)/32)]; } cpumask_t;
extern cpumask_t _unused_cpumask_arg_;


static inline __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}


static inline __attribute__((always_inline)) int __first_cpu(const cpumask_t *srcp, int nbits)
{
 return ({ int __x = (nbits); int __y = (find_next_bit((srcp->bits), (nbits), 0)); __x < __y ? __x: __y; });
}


static inline __attribute__((always_inline)) int __next_cpu(int n, const cpumask_t *srcp, int nbits)
{
 return ({ int __x = (nbits); int __y = (find_next_bit(srcp->bits, nbits, n+1)); __x < __y ? __x: __y; });
}
# 273 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int __cpumask_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __cpumask_parse(const char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __cpulist_scnprintf(char *buf, int len,
     const cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpulist_parse(const char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 382 "include/linux/cpumask.h"
extern cpumask_t cpu_possible_map;
extern cpumask_t cpu_online_map;
extern cpumask_t cpu_present_map;
# 11 "include/linux/interrupt.h" 2
# 1 "include/linux/hardirq.h" 1





# 1 "include/linux/smp_lock.h" 1





# 1 "include/linux/sched.h" 1



# 1 "include/asm/param.h" 1
# 14 "include/asm/param.h"
# 1 "include/asm-mips/mach-tango2/param.h" 1
# 15 "include/asm/param.h" 2
# 5 "include/linux/sched.h" 2


# 1 "include/linux/capability.h" 1
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
# 55 "include/linux/spinlock.h"
# 1 "include/linux/stringify.h" 1
# 56 "include/linux/spinlock.h" 2
# 80 "include/linux/spinlock.h"
# 1 "include/linux/spinlock_types.h" 1
# 15 "include/linux/spinlock_types.h"
# 1 "include/linux/spinlock_types_up.h" 1
# 30 "include/linux/spinlock_types_up.h"
typedef struct { } raw_spinlock_t;
# 41 "include/linux/spinlock_types_up.h"
typedef struct {

} raw_rwlock_t;
# 16 "include/linux/spinlock_types.h" 2


typedef struct {
 raw_spinlock_t raw_lock;







} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;







} rwlock_t;
# 81 "include/linux/spinlock.h" 2

extern int __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "include/linux/spinlock_up.h" 1
# 91 "include/linux/spinlock.h" 2
# 110 "include/linux/spinlock.h"
# 1 "include/linux/spinlock_api_up.h" 1
# 111 "include/linux/spinlock.h" 2
# 232 "include/linux/spinlock.h"
# 1 "include/asm/atomic.h" 1
# 21 "include/asm/atomic.h"
# 1 "include/linux/spinlock.h" 1
# 22 "include/asm/atomic.h" 2
# 30 "include/asm/atomic.h"
typedef struct { volatile int counter; } atomic_t;
# 58 "include/asm/atomic.h"
static __inline__ __attribute__((always_inline)) void atomic_add(int i, atomic_t * v)
{
 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%0, %1		# atomic_add		\n"
  "	addu	%0, %2					\n"
  "	sc	%0, %1					\n"
  "	beqzl	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter));
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%0, %1		# atomic_add		\n"
  "	addu	%0, %2					\n"
  "	sc	%0, %1					\n"
  "	beqz	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter));
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  v->counter += i;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}
# 100 "include/asm/atomic.h"
static __inline__ __attribute__((always_inline)) void atomic_sub(int i, atomic_t * v)
{
 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%0, %1		# atomic_sub		\n"
  "	subu	%0, %2					\n"
  "	sc	%0, %1					\n"
  "	beqzl	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter));
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%0, %1		# atomic_sub		\n"
  "	subu	%0, %2					\n"
  "	sc	%0, %1					\n"
  "	beqz	%0, 1b					\n"
  "	.set	mips0					\n"
  : "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter));
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  v->counter -= i;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}




static __inline__ __attribute__((always_inline)) int atomic_add_return(int i, atomic_t * v)
{
 unsigned long result;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%1, %2		# atomic_add_return	\n"
  "	addu	%0, %1, %3				\n"
  "	sc	%0, %2					\n"
  "	beqzl	%0, 1b					\n"
  "	addu	%0, %1, %3				\n"
  "	sync						\n"
  "	.set	mips0					\n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%1, %2		# atomic_add_return	\n"
  "	addu	%0, %1, %3				\n"
  "	sc	%0, %2					\n"
  "	beqz	%0, 1b					\n"
  "	addu	%0, %1, %3				\n"
  "	sync						\n"
  "	.set	mips0					\n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  result = v->counter;
  result += i;
  v->counter = result;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }

 return result;
}

static __inline__ __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t * v)
{
 unsigned long result;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%1, %2		# atomic_sub_return	\n"
  "	subu	%0, %1, %3				\n"
  "	sc	%0, %2					\n"
  "	beqzl	%0, 1b					\n"
  "	subu	%0, %1, %3				\n"
  "	sync						\n"
  "	.set	mips0					\n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%1, %2		# atomic_sub_return	\n"
  "	subu	%0, %1, %3				\n"
  "	sc	%0, %2					\n"
  "	beqz	%0, 1b					\n"
  "	subu	%0, %1, %3				\n"
  "	sync						\n"
  "	.set	mips0					\n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  result = v->counter;
  result -= i;
  v->counter = result;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }

 return result;
}
# 240 "include/asm/atomic.h"
static __inline__ __attribute__((always_inline)) int atomic_sub_if_positive(int i, atomic_t * v)
{
 unsigned long result;

 if ((cpu_data[0].options & 0x00020000) && 0) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%1, %2		# atomic_sub_if_positive\n"
  "	subu	%0, %1, %3				\n"
  "	bltz	%0, 1f					\n"
  "	sc	%0, %2					\n"
  "	beqzl	%0, 1b					\n"
  "	sync						\n"
  "1:							\n"
  "	.set	mips0					\n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");
 } else if ((cpu_data[0].options & 0x00020000)) {
  unsigned long temp;

  __asm__ __volatile__(
  "	.set	mips3					\n"
  "1:	ll	%1, %2		# atomic_sub_if_positive\n"
  "	subu	%0, %1, %3				\n"
  "	bltz	%0, 1f					\n"
  "	sc	%0, %2					\n"
  "	beqz	%0, 1b					\n"
  "	sync						\n"
  "1:							\n"
  "	.set	mips0					\n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");
 } else {
  unsigned long flags;

  __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory");
  result = v->counter;
  result -= i;
  if (result >= 0)
   v->counter = result;
  do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }

 return result;
}
# 233 "include/linux/spinlock.h" 2





extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 46 "include/linux/capability.h" 2
# 57 "include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 294 "include/linux/capability.h"
extern kernel_cap_t cap_bset;
# 322 "include/linux/capability.h"
static inline __attribute__((always_inline)) kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 8 "include/linux/sched.h" 2



# 1 "include/linux/timex.h" 1
# 58 "include/linux/timex.h"
# 1 "include/linux/time.h" 1






# 1 "include/linux/seqlock.h" 1
# 33 "include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 50 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) void write_seqlock(seqlock_t *sl)
{
 do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&sl->lock); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&sl->lock); } while (0);
}

static inline __attribute__((always_inline)) int write_tryseqlock(seqlock_t *sl)
{
 int ret = (({ do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&sl->lock); } while (0); 1; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline __attribute__((always_inline)) unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 91 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) int read_seqretry(const seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (sl->sequence ^ iv);
}
# 105 "include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 return ret;
}






static inline __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (iv & 1) | (s->sequence ^ iv);
}






static inline __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 8 "include/linux/time.h" 2




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 36 "include/linux/time.h"
static __inline__ __attribute__((always_inline)) int timespec_equal(struct timespec *a, struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}
# 56 "include/linux/time.h"
static inline __attribute__((always_inline)) unsigned long
mktime (unsigned int year, unsigned int mon,
 unsigned int day, unsigned int hour,
 unsigned int min, unsigned int sec)
{
 if (0 >= (int) (mon -= 2)) {
  mon += 12;
  year -= 1;
 }

 return (((
  (unsigned long) (year/4 - year/100 + year/400 + 367*mon/12 + day) +
   year*365 - 719499
     )*24 + hour
   )*60 + min
 )*60 + sec;
}

extern struct timespec xtime;
extern struct timespec wall_to_monotonic;
extern seqlock_t xtime_lock;

static inline __attribute__((always_inline)) unsigned long get_seconds(void)
{
 return xtime.tv_sec;
}

struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);
extern void clock_was_set(void);
extern int do_posix_clock_monotonic_gettime(struct timespec *tp);
extern long do_utimes(char * filename, struct timeval * times);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value, struct itimerval *ovalue);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday (struct timespec *tv);
extern void getnstimestamp(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);

static inline __attribute__((always_inline)) void
set_normalized_timespec (struct timespec *ts, time_t sec, long nsec)
{
 while (nsec >= (1000000000L)) {
  nsec -= (1000000000L);
  ++sec;
 }
 while (nsec < 0) {
  nsec += (1000000000L);
  --sec;
 }
 ts->tv_sec = sec;
 ts->tv_nsec = nsec;
}
# 135 "include/linux/time.h"
struct itimerspec {
        struct timespec it_interval;
        struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 59 "include/linux/timex.h" 2


# 1 "include/asm/timex.h" 1
# 34 "include/asm/timex.h"
# 1 "include/asm-mips/mach-generic/timex.h" 1
# 35 "include/asm/timex.h" 2
# 47 "include/asm/timex.h"
typedef unsigned int cycles_t;

static inline __attribute__((always_inline)) cycles_t get_cycles (void)
{
 return ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$9" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$9" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; });
}
# 62 "include/linux/timex.h" 2
# 135 "include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
};
# 227 "include/linux/timex.h"
extern unsigned long tick_usec;
extern unsigned long tick_nsec;
extern int tickadj;




extern int time_state;
extern int time_status;
extern long time_offset;
extern long time_constant;
extern long time_tolerance;
extern long time_precision;
extern long time_maxerror;
extern long time_esterror;

extern long time_freq;
extern long time_reftime;

extern long time_adjust;
extern long time_next_adjust;


extern long pps_offset;
extern long pps_jitter;
extern long pps_freq;
extern long pps_stabil;
extern long pps_valid;


extern int pps_shift;
extern long pps_jitcnt;
extern long pps_calcnt;
extern long pps_errcnt;
extern long pps_stbcnt;






static inline __attribute__((always_inline)) void ntp_clear(void)
{
 time_adjust = 0;
 time_status |= 0x0040;
 time_maxerror = (512000L << 5);
 time_esterror = (512000L << 5);
}





static inline __attribute__((always_inline)) int ntp_synced(void)
{
 return !(time_status & 0x0040);
}
# 341 "include/linux/timex.h"
static inline __attribute__((always_inline)) void
time_interpolator_reset(void)
{
}
# 12 "include/linux/sched.h" 2
# 1 "include/linux/jiffies.h" 1
# 9 "include/linux/jiffies.h"
# 1 "include/asm/div64.h" 1
# 14 "include/asm/div64.h"
# 1 "include/asm/compiler.h" 1
# 15 "include/asm/div64.h" 2
# 10 "include/linux/jiffies.h" 2
# 84 "include/linux/jiffies.h"
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long volatile __attribute__((section(".data"))) jiffies;


u64 get_jiffies_64(void);
# 259 "include/linux/jiffies.h"
static inline __attribute__((always_inline)) unsigned int jiffies_to_msecs(const unsigned long j)
{

 return ((1000L) / 1000) * j;





}

static inline __attribute__((always_inline)) unsigned int jiffies_to_usecs(const unsigned long j)
{

 return ((1000000L) / 1000) * j;





}

static inline __attribute__((always_inline)) unsigned long msecs_to_jiffies(const unsigned int m)
{
 if (m > jiffies_to_msecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (m + ((1000L) / 1000) - 1) / ((1000L) / 1000);





}

static inline __attribute__((always_inline)) unsigned long usecs_to_jiffies(const unsigned int u)
{
 if (u > jiffies_to_usecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (u + ((1000000L) / 1000) - 1) / ((1000000L) / 1000);





}
# 318 "include/linux/jiffies.h"
static __inline__ __attribute__((always_inline)) unsigned long
timespec_to_jiffies(const struct timespec *value)
{
 unsigned long sec = value->tv_sec;
 long nsec = value->tv_nsec + (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))))) - 1;

 if (sec >= (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))) / (1000000000L))){
  sec = (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))) / (1000000000L));
  nsec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)(1000000000L) << (32 - 10)) + (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))))) +
  (((u64)nsec * ((unsigned long)((((u64)1 << ((32 - 10) + 29)) + (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))))) >>
   (((32 - 10) + 29) - (32 - 10)))) >> (32 - 10);

}

static __inline__ __attribute__((always_inline)) void
jiffies_to_timespec(const unsigned long jiffies, struct timespec *value)
{




 u64 nsec = (u64)jiffies * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))));
 value->tv_sec = ({ u64 result = nsec; *&value->tv_nsec = ({ unsigned long long __quot; unsigned long __mod; unsigned long long __div; unsigned long __upper, __low, __high, __base; __div = (result); __base = ((1000000000L)); __high = __div >> 32; __low = __div; __upper = __high; if (__high) __asm__("divu	$0, %z2, %z3" : "=h" (__upper), "=l" (__high) : "Jr" (__high), "Jr" (__base) : "$0"); __mod = ({ unsigned long __quot, __mod; unsigned long __cf, __tmp, __tmp2, __i; __asm__(".set	push\n\t" ".set	noat\n\t" ".set	noreorder\n\t" "move	%2, $0\n\t" "move	%3, $0\n\t" "b	1f\n\t" " li	%4, 0x21\n" "0:\n\t" "sll	$1, %0, 0x1\n\t" "srl	%3, %0, 0x1f\n\t" "or	%0, $1, %5\n\t" "sll	%1, %1, 0x1\n\t" "sll	%2, %2, 0x1\n" "1:\n\t" "bnez	%3, 2f\n\t" " sltu	%5, %0, %z6\n\t" "bnez	%5, 3f\n" "2:\n\t" " addiu	%4, %4, -1\n\t" "subu	%0, %0, %z6\n\t" "addiu	%2, %2, 1\n" "3:\n\t" "bnez	%4, 0b\n\t" " srl	%5, %1, 0x1f\n\t" ".set	pop" : "=&r" (__mod), "=&r" (__tmp), "=&r" (__quot), "=&r" (__cf), "=&r" (__i), "=&r" (__tmp2) : "Jr" (__base), "0" (__upper), "1" (__low)); (__low) = __quot; __mod; }); __quot = __high; __quot = __quot << 32 | __low; (result) = __quot; __mod; }); result; });
}
# 357 "include/linux/jiffies.h"
static __inline__ __attribute__((always_inline)) unsigned long
timeval_to_jiffies(const struct timeval *value)
{
 unsigned long sec = value->tv_sec;
 long usec = value->tv_usec;

 if (sec >= (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))) / (1000000000L))){
  sec = (long)((u64)((u64)((~0UL >> 1)-1) * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))) / (1000000000L));
  usec = 0;
 }
 return (((u64)sec * ((unsigned long)((((u64)(1000000000L) << (32 - 10)) + (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))))))) +
  (((u64)usec * ((unsigned long)((((u64)(1000L) << ((32 - 10) + 19)) + (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))))) -1) / (u64)(( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))))))) + (u64)(((u64)1 << ((32 - 10) + 19)) - 1)) >>
   (((32 - 10) + 19) - (32 - 10)))) >> (32 - 10);
}

static __inline__ __attribute__((always_inline)) void
jiffies_to_timeval(const unsigned long jiffies, struct timeval *value)
{




 u64 nsec = (u64)jiffies * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))));
 value->tv_sec = ({ u64 result = nsec; *&value->tv_usec = ({ unsigned long long __quot; unsigned long __mod; unsigned long long __div; unsigned long __upper, __low, __high, __base; __div = (result); __base = ((1000000000L)); __high = __div >> 32; __low = __div; __upper = __high; if (__high) __asm__("divu	$0, %z2, %z3" : "=h" (__upper), "=l" (__high) : "Jr" (__high), "Jr" (__base) : "$0"); __mod = ({ unsigned long __quot, __mod; unsigned long __cf, __tmp, __tmp2, __i; __asm__(".set	push\n\t" ".set	noat\n\t" ".set	noreorder\n\t" "move	%2, $0\n\t" "move	%3, $0\n\t" "b	1f\n\t" " li	%4, 0x21\n" "0:\n\t" "sll	$1, %0, 0x1\n\t" "srl	%3, %0, 0x1f\n\t" "or	%0, $1, %5\n\t" "sll	%1, %1, 0x1\n\t" "sll	%2, %2, 0x1\n" "1:\n\t" "bnez	%3, 2f\n\t" " sltu	%5, %0, %z6\n\t" "bnez	%5, 3f\n" "2:\n\t" " addiu	%4, %4, -1\n\t" "subu	%0, %0, %z6\n\t" "addiu	%2, %2, 1\n" "3:\n\t" "bnez	%4, 0b\n\t" " srl	%5, %1, 0x1f\n\t" ".set	pop" : "=&r" (__mod), "=&r" (__tmp), "=&r" (__quot), "=&r" (__cf), "=&r" (__i), "=&r" (__tmp2) : "Jr" (__base), "0" (__upper), "1" (__low)); (__low) = __quot; __mod; }); __quot = __high; __quot = __quot << 32 | __low; (result) = __quot; __mod; }); result; });
 value->tv_usec /= (1000L);
}




static inline __attribute__((always_inline)) clock_t jiffies_to_clock_t(long x)
{



 u64 tmp = (u64)x * (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))));
 ({ unsigned long long __quot; unsigned long __mod; unsigned long long __div; unsigned long __upper, __low, __high, __base; __div = (tmp); __base = (((1000000000L) / 100)); __high = __div >> 32; __low = __div; __upper = __high; if (__high) __asm__("divu	$0, %z2, %z3" : "=h" (__upper), "=l" (__high) : "Jr" (__high), "Jr" (__base) : "$0"); __mod = ({ unsigned long __quot, __mod; unsigned long __cf, __tmp, __tmp2, __i; __asm__(".set	push\n\t" ".set	noat\n\t" ".set	noreorder\n\t" "move	%2, $0\n\t" "move	%3, $0\n\t" "b	1f\n\t" " li	%4, 0x21\n" "0:\n\t" "sll	$1, %0, 0x1\n\t" "srl	%3, %0, 0x1f\n\t" "or	%0, $1, %5\n\t" "sll	%1, %1, 0x1\n\t" "sll	%2, %2, 0x1\n" "1:\n\t" "bnez	%3, 2f\n\t" " sltu	%5, %0, %z6\n\t" "bnez	%5, 3f\n" "2:\n\t" " addiu	%4, %4, -1\n\t" "subu	%0, %0, %z6\n\t" "addiu	%2, %2, 1\n" "3:\n\t" "bnez	%4, 0b\n\t" " srl	%5, %1, 0x1f\n\t" ".set	pop" : "=&r" (__mod), "=&r" (__tmp), "=&r" (__quot), "=&r" (__cf), "=&r" (__i), "=&r" (__tmp2) : "Jr" (__base), "0" (__upper), "1" (__low)); (__low) = __quot; __mod; }); __quot = __high; __quot = __quot << 32 | __low; (tmp) = __quot; __mod; });
 return (long)tmp;

}

static inline __attribute__((always_inline)) unsigned long clock_t_to_jiffies(unsigned long x)
{

 if (x >= ~0UL / (1000 / 100))
  return ~0UL;
 return x * (1000 / 100);
# 416 "include/linux/jiffies.h"
}

static inline __attribute__((always_inline)) u64 jiffies_64_to_clock_t(u64 x)
{
# 428 "include/linux/jiffies.h"
 x *= (( ((1000000UL * 1000 / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (((1000000UL * 1000 % (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))) << 8) + (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000))) / 2) / (( ((500000 / ((500000 + 1000/2) / 1000)) << 8) + (((500000 % ((500000 + 1000/2) / 1000)) << 8) + ((500000 + 1000/2) / 1000) / 2) / ((500000 + 1000/2) / 1000)))));
 ({ unsigned long long __quot; unsigned long __mod; unsigned long long __div; unsigned long __upper, __low, __high, __base; __div = (x); __base = (((1000000000L) / 100)); __high = __div >> 32; __low = __div; __upper = __high; if (__high) __asm__("divu	$0, %z2, %z3" : "=h" (__upper), "=l" (__high) : "Jr" (__high), "Jr" (__base) : "$0"); __mod = ({ unsigned long __quot, __mod; unsigned long __cf, __tmp, __tmp2, __i; __asm__(".set	push\n\t" ".set	noat\n\t" ".set	noreorder\n\t" "move	%2, $0\n\t" "move	%3, $0\n\t" "b	1f\n\t" " li	%4, 0x21\n" "0:\n\t" "sll	$1, %0, 0x1\n\t" "srl	%3, %0, 0x1f\n\t" "or	%0, $1, %5\n\t" "sll	%1, %1, 0x1\n\t" "sll	%2, %2, 0x1\n" "1:\n\t" "bnez	%3, 2f\n\t" " sltu	%5, %0, %z6\n\t" "bnez	%5, 3f\n" "2:\n\t" " addiu	%4, %4, -1\n\t" "subu	%0, %0, %z6\n\t" "addiu	%2, %2, 1\n" "3:\n\t" "bnez	%4, 0b\n\t" " srl	%5, %1, 0x1f\n\t" ".set	pop" : "=&r" (__mod), "=&r" (__tmp), "=&r" (__quot), "=&r" (__cf), "=&r" (__i), "=&r" (__tmp2) : "Jr" (__base), "0" (__upper), "1" (__low)); (__low) = __quot; __mod; }); __quot = __high; __quot = __quot << 32 | __low; (x) = __quot; __mod; });

 return x;
}

static inline __attribute__((always_inline)) u64 nsec_to_clock_t(u64 x)
{

 ({ unsigned long long __quot; unsigned long __mod; unsigned long long __div; unsigned long __upper, __low, __high, __base; __div = (x); __base = (((1000000000L) / 100)); __high = __div >> 32; __low = __div; __upper = __high; if (__high) __asm__("divu	$0, %z2, %z3" : "=h" (__upper), "=l" (__high) : "Jr" (__high), "Jr" (__base) : "$0"); __mod = ({ unsigned long __quot, __mod; unsigned long __cf, __tmp, __tmp2, __i; __asm__(".set	push\n\t" ".set	noat\n\t" ".set	noreorder\n\t" "move	%2, $0\n\t" "move	%3, $0\n\t" "b	1f\n\t" " li	%4, 0x21\n" "0:\n\t" "sll	$1, %0, 0x1\n\t" "srl	%3, %0, 0x1f\n\t" "or	%0, $1, %5\n\t" "sll	%1, %1, 0x1\n\t" "sll	%2, %2, 0x1\n" "1:\n\t" "bnez	%3, 2f\n\t" " sltu	%5, %0, %z6\n\t" "bnez	%5, 3f\n" "2:\n\t" " addiu	%4, %4, -1\n\t" "subu	%0, %0, %z6\n\t" "addiu	%2, %2, 1\n" "3:\n\t" "bnez	%4, 0b\n\t" " srl	%5, %1, 0x1f\n\t" ".set	pop" : "=&r" (__mod), "=&r" (__tmp), "=&r" (__quot), "=&r" (__cf), "=&r" (__i), "=&r" (__tmp2) : "Jr" (__base), "0" (__upper), "1" (__low)); (__low) = __quot; __mod; }); __quot = __high; __quot = __quot << 32 | __low; (x) = __quot; __mod; });
# 451 "include/linux/jiffies.h"
 return x;
}
# 13 "include/linux/sched.h" 2
# 1 "include/linux/rbtree.h" 1
# 100 "include/linux/rbtree.h"
struct rb_node
{
 struct rb_node *rb_parent;
 int rb_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
};

struct rb_root
{
 struct rb_node *rb_node;
};




extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent = parent;
 node->rb_color = 0;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 14 "include/linux/sched.h" 2


# 1 "include/linux/errno.h" 1



# 1 "include/asm/errno.h" 1
# 15 "include/asm/errno.h"
# 1 "include/asm-generic/errno-base.h" 1
# 16 "include/asm/errno.h" 2
# 5 "include/linux/errno.h" 2
# 17 "include/linux/sched.h" 2
# 1 "include/linux/nodemask.h" 1
# 86 "include/linux/nodemask.h"
# 1 "include/linux/numa.h" 1
# 87 "include/linux/nodemask.h" 2


typedef struct { unsigned long bits[((((1 << 0))+32 -1)/32)]; } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (find_next_bit((srcp->bits), ((1 << 0)), 0)); __x < __y ? __x: __y; });
}


static inline __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __x = ((1 << 0)); int __y = (find_next_bit(srcp->bits, (1 << 0), n+1)); __x < __y ? __x: __y; });
}
# 252 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __x = ((1 << 0)); int __y = (find_next_zero_bit((maskp->bits), ((1 << 0)), 0)); __x < __y ? __x: __y; });

}
# 286 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodemask_parse(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse(buf, len, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}
# 346 "include/linux/nodemask.h"
extern nodemask_t node_online_map;
extern nodemask_t node_possible_map;
# 18 "include/linux/sched.h" 2


# 1 "include/asm/semaphore.h" 1
# 27 "include/asm/semaphore.h"
# 1 "include/asm/atomic.h" 1
# 28 "include/asm/semaphore.h" 2

# 1 "include/linux/wait.h" 1
# 23 "include/linux/wait.h"
# 1 "include/linux/list.h" 1






# 1 "include/linux/prefetch.h" 1
# 47 "include/linux/prefetch.h"
static inline __attribute__((always_inline)) void prefetchw(const void *x) {;}
# 58 "include/linux/prefetch.h"
static inline __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{

 char *cp;
 char *end = addr + len;

 for (cp = addr; cp < end; cp += (4*(1 << 4)))
  prefetch(cp);

}
# 8 "include/linux/list.h" 2
# 28 "include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};
# 47 "include/linux/list.h"
static inline __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 65 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 78 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}







static inline __attribute__((always_inline)) void __list_add_rcu(struct list_head * new,
  struct list_head * prev, struct list_head * next)
{
 new->next = next;
 new->prev = prev;
 __asm__ __volatile__("": : :"memory");
 next->prev = new;
 prev->next = new;
}
# 115 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 136 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 149 "include/linux/list.h"
static inline __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}







static inline __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100);
 entry->prev = ((void *) 0x00200200);
}
# 192 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
}
# 205 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 __asm__ __volatile__("": : :"memory");
 new->next->prev = new;
 new->prev->next = new;
 old->prev = ((void *) 0x00200200);
}





static inline __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 do { (entry)->next = (entry); (entry)->prev = (entry); } while (0);
}






static inline __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}






static inline __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}





static inline __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 270 "include/linux/list.h"
static inline __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}

static inline __attribute__((always_inline)) void __list_splice(struct list_head *list,
     struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline __attribute__((always_inline)) void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 308 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  do { (list)->next = (list); (list)->prev = (list); } while (0);
 }
}
# 512 "include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};






static inline __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
}
# 570 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}

static inline __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (n->pprev) {
  __hlist_del(n);
  ((n)->next = ((void *)0), (n)->pprev = ((void *)0));
 }
}
# 591 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 __asm__ __volatile__("": : :"memory");
 if (next)
  new->next->pprev = &new->next;
 *new->pprev = new;
 old->pprev = ((void *) 0x00200200);
}

static inline __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}
# 632 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 n->pprev = &h->first;
 __asm__ __volatile__("": : :"memory");
 if (first)
  first->pprev = &n->next;
 h->first = n;
}


static inline __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}
# 680 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 __asm__ __volatile__("": : :"memory");
 next->pprev = &n->next;
 *(n->pprev) = n;
}
# 705 "include/linux/list.h"
static inline __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 __asm__ __volatile__("": : :"memory");
 prev->next = n;
 if (n->next)
  n->next->pprev = &n->next;
}
# 24 "include/linux/wait.h" 2



# 1 "include/asm/current.h" 1
# 14 "include/asm/current.h"
struct task_struct;

static inline __attribute__((always_inline)) struct task_struct * get_current(void)
{
 return __current_thread_info->task;
}
# 28 "include/linux/wait.h" 2

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 81 "include/linux/wait.h"
static inline __attribute__((always_inline)) void init_waitqueue_head(wait_queue_head_t *q)
{
 do { *(&q->lock) = (spinlock_t) { .raw_lock = { } }; } while (0);
 do { (&q->task_list)->next = (&q->task_list); (&q->task_list)->prev = (&q->task_list); } while (0);
}

static inline __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}
# 116 "include/linux/wait.h"
extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);

static inline __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 347 "include/linux/wait.h"
static inline __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout);

extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout);





void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);

void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);

void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 425 "include/linux/wait.h"
static inline __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 449 "include/linux/wait.h"
static inline __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 30 "include/asm/semaphore.h" 2
# 1 "include/linux/rwsem.h" 1
# 20 "include/linux/rwsem.h"
# 1 "include/asm/atomic.h" 1
# 21 "include/linux/rwsem.h" 2

struct rw_semaphore;


# 1 "include/linux/rwsem-spinlock.h" 1
# 22 "include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 55 "include/linux/rwsem-spinlock.h"
extern void init_rwsem(struct rw_semaphore *sem);
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
extern void __downgrade_write(struct rw_semaphore *sem);

static inline __attribute__((always_inline)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 26 "include/linux/rwsem.h" 2
# 41 "include/linux/rwsem.h"
static inline __attribute__((always_inline)) void down_read(struct rw_semaphore *sem)
{
 do { do { } while (0); } while (0);
 ;
 __down_read(sem);
 ;
}




static inline __attribute__((always_inline)) int down_read_trylock(struct rw_semaphore *sem)
{
 int ret;
 ;
 ret = __down_read_trylock(sem);
 ;
 return ret;
}




static inline __attribute__((always_inline)) void down_write(struct rw_semaphore *sem)
{
 do { do { } while (0); } while (0);
 ;
 __down_write(sem);
 ;
}




static inline __attribute__((always_inline)) int down_write_trylock(struct rw_semaphore *sem)
{
 int ret;
 ;
 ret = __down_write_trylock(sem);
 ;
 return ret;
}




static inline __attribute__((always_inline)) void up_read(struct rw_semaphore *sem)
{
 ;
 __up_read(sem);
 ;
}




static inline __attribute__((always_inline)) void up_write(struct rw_semaphore *sem)
{
 ;
 __up_write(sem);
 ;
}




static inline __attribute__((always_inline)) void downgrade_write(struct rw_semaphore *sem)
{
 ;
 __downgrade_write(sem);
 ;
}
# 31 "include/asm/semaphore.h" 2

struct semaphore {





 atomic_t count;
 wait_queue_head_t wait;
};
# 54 "include/asm/semaphore.h"
static inline __attribute__((always_inline)) void sema_init (struct semaphore *sem, int val)
{
 ((&sem->count)->counter = (val));
 init_waitqueue_head(&sem->wait);
}

static inline __attribute__((always_inline)) void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline __attribute__((always_inline)) void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}

extern void __down(struct semaphore * sem);
extern int __down_interruptible(struct semaphore * sem);
extern void __up(struct semaphore * sem);

static inline __attribute__((always_inline)) void down(struct semaphore * sem)
{
 do { do { } while (0); } while (0);




 if (__builtin_expect(!!(atomic_sub_return(1,(&sem->count)) < 0), 0))
  __down(sem);
}

static inline __attribute__((always_inline)) int down_interruptible(struct semaphore * sem)
{
 int ret = 0;

 do { do { } while (0); } while (0);

 if (__builtin_expect(!!(atomic_sub_return(1,(&sem->count)) < 0), 0))
  ret = __down_interruptible(sem);
 return ret;
}

static inline __attribute__((always_inline)) int down_trylock(struct semaphore * sem)
{
 return atomic_sub_if_positive(1, &sem->count) < 0;
}

static inline __attribute__((always_inline)) void up(struct semaphore * sem)
{
 if (__builtin_expect(!!(atomic_add_return(1,(&sem->count)) <= 0), 0))
  __up(sem);
}
# 21 "include/linux/sched.h" 2
# 1 "include/asm/page.h" 1
# 16 "include/asm/page.h"
# 1 "include/asm-mips/mach-tango2/spaces.h" 1
# 17 "include/asm/page.h" 2
# 42 "include/asm/page.h"
extern void clear_page(void * page);
extern void copy_page(void * to, void * from);

extern unsigned long shm_align_mask;

static inline __attribute__((always_inline)) unsigned long pages_do_alias(unsigned long addr1,
 unsigned long addr2)
{
 return (addr1 ^ addr2) & shm_align_mask;
}

struct page;

static inline __attribute__((always_inline)) void clear_user_page(void *addr, unsigned long vaddr,
 struct page *page)
{
 extern void (*flush_data_cache_page)(unsigned long addr);

 clear_page(addr);
 if (pages_do_alias((unsigned long) addr, vaddr))
  flush_data_cache_page((unsigned long)addr);
}

static inline __attribute__((always_inline)) void copy_user_page(void *vto, void *vfrom, unsigned long vaddr,
 struct page *to)
{
 extern void (*flush_data_cache_page)(unsigned long addr);

 copy_page(vto, vfrom);
 if (pages_do_alias((unsigned long)vto, vaddr))
  flush_data_cache_page((unsigned long)vto);
}
# 87 "include/asm/page.h"
typedef struct { unsigned long pte; } pte_t;
# 112 "include/asm/page.h"
typedef struct { unsigned long pgd; } pgd_t;






typedef struct { unsigned long pgprot; } pgprot_t;
# 163 "include/asm/page.h"
# 1 "include/asm-generic/page.h" 1
# 10 "include/asm-generic/page.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 164 "include/asm/page.h" 2
# 22 "include/linux/sched.h" 2

# 1 "include/asm/mmu.h" 1



typedef unsigned long mm_context_t[1];
# 24 "include/linux/sched.h" 2
# 1 "include/asm/cputime.h" 1



# 1 "include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 23 "include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 5 "include/asm/cputime.h" 2
# 25 "include/linux/sched.h" 2

# 1 "include/linux/smp.h" 1
# 11 "include/linux/smp.h"
extern void cpu_idle(void);
# 99 "include/linux/smp.h"
static inline __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
# 27 "include/linux/sched.h" 2
# 1 "include/linux/sem.h" 1



# 1 "include/linux/ipc.h" 1
# 9 "include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "include/asm/ipcbuf.h" 1
# 14 "include/asm/ipcbuf.h"
struct ipc64_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
 unsigned short __pad1;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "include/linux/ipc.h" 2
# 57 "include/linux/ipc.h"
struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "include/linux/sem.h" 2
# 1 "include/asm/atomic.h" 1
# 6 "include/linux/sem.h" 2
# 24 "include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "include/asm/sembuf.h" 1
# 13 "include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 unsigned long sem_nsems;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 37 "include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 82 "include/linux/sem.h"
struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 int sem_id;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct sem_queue * next;
 struct sem_queue ** prev;
 struct task_struct* sleeper;
 struct sem_undo * undo;
 int pid;
 int status;
 struct sem_array * sma;
 int id;
 struct sembuf * sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct sem_undo * proc_next;
 struct sem_undo * id_next;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct sem_undo *proc_list;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 28 "include/linux/sched.h" 2
# 1 "include/linux/signal.h" 1





# 1 "include/asm/signal.h" 1
# 19 "include/asm/signal.h"
typedef struct {
 unsigned long sig[(128 / (sizeof(unsigned long) * 8))];
} sigset_t;

typedef unsigned long old_sigset_t;
# 127 "include/asm/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;






struct sigaction {
 unsigned int sa_flags;
 __sighandler_t sa_handler;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;



};


typedef struct sigaltstack {
 void *ss_sp;
 size_t ss_size;
 int ss_flags;
} stack_t;


# 1 "include/asm/sigcontext.h" 1
# 20 "include/asm/sigcontext.h"
struct sigcontext {
 unsigned int sc_regmask;
 unsigned int sc_status;
 unsigned long long sc_pc;
 unsigned long long sc_regs[32];
 unsigned long long sc_fpregs[32];
 unsigned int sc_ownedfp;
 unsigned int sc_fpc_csr;
 unsigned int sc_fpc_eir;
 unsigned int sc_used_math;
 unsigned int sc_dsp;
 unsigned long long sc_mdhi;
 unsigned long long sc_mdlo;
 unsigned long sc_hi1;
 unsigned long sc_lo1;
 unsigned long sc_hi2;
 unsigned long sc_lo2;
 unsigned long sc_hi3;
 unsigned long sc_lo3;
};
# 157 "include/asm/signal.h" 2
# 7 "include/linux/signal.h" 2
# 1 "include/asm/siginfo.h" 1
# 24 "include/asm/siginfo.h"
struct siginfo;
# 36 "include/asm/siginfo.h"
# 1 "include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 251 "include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(long) + 2*sizeof(int))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);
# 290 "include/asm-generic/siginfo.h"
extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 37 "include/asm/siginfo.h" 2

typedef struct siginfo {
 int si_signo;
 int si_code;
 int si_errno;
 int __pad0[128 / sizeof(int) - ((128 - (3 * sizeof(int))) / sizeof(int)) - 3];

 union {
  int _pad[((128 - (3 * sizeof(int))) / sizeof(int))];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


  struct {
   timer_t _tid;
   int _overrun;
   char _pad[sizeof( uid_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   pid_t _pid;
   uid_t _uid;
   int _status;
   clock_t _utime;
   clock_t _stime;
  } _sigchld;


  struct {
   pid_t _pid;
   clock_t _utime;
   int _status;
   clock_t _stime;
  } _irix_sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 120 "include/asm/siginfo.h"
static inline __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, 3*sizeof(int) + sizeof(from->_sifields._sigchld));
}
# 8 "include/linux/signal.h" 2
# 26 "include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 50 "include/linux/signal.h"
static inline __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((128 / (sizeof(unsigned long) * 8)) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / (sizeof(unsigned long) * 8)] |= 1UL << (sig % (sizeof(unsigned long) * 8));
}

static inline __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((128 / (sizeof(unsigned long) * 8)) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / (sizeof(unsigned long) * 8)] &= ~(1UL << (sig % (sizeof(unsigned long) * 8)));
}

static inline __attribute__((always_inline)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((128 / (sizeof(unsigned long) * 8)) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / (sizeof(unsigned long) * 8)] >> (sig % (sizeof(unsigned long) * 8)));
}

static inline __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 return ffz(~word);
}
# 114 "include/linux/signal.h"
static inline __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((128 / (sizeof(unsigned long) * 8))) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((128 / (sizeof(unsigned long) * 8))) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((128 / (sizeof(unsigned long) * 8))) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 144 "include/linux/signal.h"
static inline __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((128 / (sizeof(unsigned long) * 8))) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((128 / (sizeof(unsigned long) * 8))) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((128 / (sizeof(unsigned long) * 8))) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((128 / (sizeof(unsigned long) * 8))) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((128 / (sizeof(unsigned long) * 8))-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((128 / (sizeof(unsigned long) * 8))) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((128 / (sizeof(unsigned long) * 8))-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 do { (&sig->list)->next = (&sig->list); (&sig->list)->prev = (&sig->list); } while (0);
}


static inline __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 128 ? 1 : 0;
}

extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
# 29 "include/linux/sched.h" 2
# 1 "include/linux/securebits.h" 1





extern unsigned securebits;
# 30 "include/linux/sched.h" 2
# 1 "include/linux/fs_struct.h" 1



struct dentry;
struct vfsmount;

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};







extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);
extern void set_fs_root(struct fs_struct *, struct vfsmount *, struct dentry *);
extern void set_fs_pwd(struct fs_struct *, struct vfsmount *, struct dentry *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 31 "include/linux/sched.h" 2

# 1 "include/linux/completion.h" 1
# 13 "include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};







static inline __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x, unsigned long timeout);

extern unsigned long wait_for_completion_interruptible_timeout( struct completion *x, unsigned long timeout);


extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 33 "include/linux/sched.h" 2
# 1 "include/linux/pid.h" 1



enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_TGID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};

struct pid
{

 int nr;
 struct hlist_node pid_chain;

 struct list_head pid_list;
};
# 29 "include/linux/pid.h"
extern int attach_pid(struct task_struct *task, enum pid_type type, int nr);

extern void detach_pid(struct task_struct *task, enum pid_type);





extern struct pid *find_pid(enum pid_type, int);

extern int alloc_pidmap(void);
extern void free_pidmap(int);
extern void switch_exec_pids(struct task_struct *leader, struct task_struct *thread);
# 34 "include/linux/sched.h" 2
# 1 "include/linux/percpu.h" 1



# 1 "include/linux/slab.h" 1
# 12 "include/linux/slab.h"
typedef struct kmem_cache kmem_cache_t;


# 1 "include/linux/gfp.h" 1



# 1 "include/linux/mmzone.h" 1
# 11 "include/linux/mmzone.h"
# 1 "include/linux/cache.h" 1
# 12 "include/linux/mmzone.h" 2




# 1 "include/asm/atomic.h" 1
# 17 "include/linux/mmzone.h" 2
# 25 "include/linux/mmzone.h"
struct free_area {
 struct list_head free_list;
 unsigned long nr_free;
};

struct pglist_data;
# 47 "include/linux/mmzone.h"
struct per_cpu_pages {
 int count;
 int low;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp[2];
# 65 "include/linux/mmzone.h"
} ;
# 110 "include/linux/mmzone.h"
struct zone {

 unsigned long free_pages;
 unsigned long pages_min, pages_low, pages_high;
# 122 "include/linux/mmzone.h"
 unsigned long lowmem_reserve[4];




 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];





 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long nr_active;
 unsigned long nr_inactive;
 unsigned long pages_scanned;
 int all_unreclaimable;





 int reclaim_pages;

 atomic_t reclaim_in_progress;
# 177 "include/linux/mmzone.h"
 int temp_priority;
 int prev_priority;



# 208 "include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_size;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;
 struct page *zone_mem_map;

 unsigned long zone_start_pfn;
# 230 "include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 char *name;
} ;
# 258 "include/linux/mmzone.h"
struct zonelist {
 struct zone *zones[(1 << 0) * 4 + 1];
};
# 274 "include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[5];
 int nr_zones;

 struct page *node_mem_map;

 struct bootmem_data *bdata;
# 293 "include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 struct pglist_data *pgdat_next;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 313 "include/linux/mmzone.h"
# 1 "include/linux/memory_hotplug.h" 1



# 1 "include/linux/mmzone.h" 1
# 5 "include/linux/memory_hotplug.h" 2


# 1 "include/linux/notifier.h" 1
# 14 "include/linux/notifier.h"
struct notifier_block
{
 int (*notifier_call)(struct notifier_block *self, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};




extern int notifier_chain_register(struct notifier_block **list, struct notifier_block *n);
extern int notifier_chain_unregister(struct notifier_block **nl, struct notifier_block *n);
extern int notifier_call_chain(struct notifier_block **n, unsigned long val, void *v);
# 8 "include/linux/memory_hotplug.h" 2
# 68 "include/linux/memory_hotplug.h"
static inline __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -89;
}

static inline __attribute__((always_inline)) int __add_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages)
{
 return mhp_notimplemented((__func__));
}

static inline __attribute__((always_inline)) int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages)
{
 printk("<4>" "%s() called, not yet supported\n", (__func__));
 dump_stack();
 return -89;
}
# 314 "include/linux/mmzone.h" 2

extern struct pglist_data *pgdat_list;

void __get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free, struct pglist_data *pgdat);
void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);




static inline __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 359 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) struct zone *next_zone(struct zone *zone)
{
 pg_data_t *pgdat = zone->zone_pgdat;

 if (zone < pgdat->node_zones + 4 - 1)
  zone++;
 else if (pgdat->pgdat_next) {
  pgdat = pgdat->pgdat_next;
  zone = pgdat->node_zones;
 } else
  zone = ((void *)0);

 return zone;
}
# 392 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) int is_highmem_idx(int idx)
{
 return (idx == 3);
}

static inline __attribute__((always_inline)) int is_normal_idx(int idx)
{
 return (idx == 2);
}






static inline __attribute__((always_inline)) int is_highmem(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 3;
}

static inline __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + 2;
}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[4 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);

# 1 "include/linux/topology.h" 1
# 34 "include/linux/topology.h"
# 1 "include/asm/topology.h" 1
# 1 "include/asm-mips/mach-generic/topology.h" 1
# 1 "include/asm-generic/topology.h" 1
# 1 "include/asm-mips/mach-generic/topology.h" 2
# 1 "include/asm/topology.h" 2
# 35 "include/linux/topology.h" 2
# 427 "include/linux/mmzone.h" 2







extern struct pglist_data contig_page_data;
# 626 "include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__ (".init.text"))) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "include/linux/gfp.h" 2




struct vm_area_struct;
# 77 "include/linux/gfp.h"
static inline __attribute__((always_inline)) int gfp_zone(gfp_t gfp)
{
 int zone = 0x07 & ( int) gfp;
 do { if (__builtin_expect(!!((zone >= 5)!=0), 0)) do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/gfp.h", 80, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); } while(0);
 return zone;
}
# 100 "include/linux/gfp.h"
static inline __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


extern struct page *
__alloc_pages(gfp_t, unsigned int, struct zonelist *);

static inline __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);

 return __alloc_pages(gfp_mask, order,
  (&contig_page_data)->node_zonelists + gfp_zone(gfp_mask));
}
# 136 "include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);



static inline __attribute__((always_inline)) void drain_remote_pages(void) { };
# 16 "include/linux/slab.h" 2
# 57 "include/linux/slab.h"
extern void __attribute__ ((__section__ (".init.text"))) kmem_cache_init(void);

extern kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned long,
           void (*)(void *, kmem_cache_t *, unsigned long),
           void (*)(void *, kmem_cache_t *, unsigned long));
extern int kmem_cache_destroy(kmem_cache_t *);
extern int kmem_cache_shrink(kmem_cache_t *);
extern void *kmem_cache_alloc(kmem_cache_t *, gfp_t);
extern void kmem_cache_free(kmem_cache_t *, void *);
extern unsigned int kmem_cache_size(kmem_cache_t *);
extern const char *kmem_cache_name(kmem_cache_t *);
extern kmem_cache_t *kmem_find_general_cachep(size_t size, gfp_t gfpflags);


struct cache_sizes {
 size_t cs_size;
 kmem_cache_t *cs_cachep;
 kmem_cache_t *cs_dmacachep;
};
extern struct cache_sizes malloc_sizes[];
extern void *__kmalloc(size_t, gfp_t);



static inline __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  int i = 0;





# 1 "include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;

 if (size <= 96) goto found; else i++;

 if (size <= 128) goto found; else i++;

 if (size <= 192) goto found; else i++;

 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;
 if (size <= 262144) goto found; else i++;
 if (size <= 524288) goto found; else i++;
 if (size <= 1048576) goto found; else i++;
# 36 "include/linux/kmalloc_sizes.h"
 if (size <= 2097152) goto found; else i++;


 if (size <= 4194304) goto found; else i++;
# 91 "include/linux/slab.h" 2

  {
   extern void __you_cannot_kmalloc_that_much(void);
   __you_cannot_kmalloc_that_much();
  }
found:
  return kmem_cache_alloc((flags & (( gfp_t)0x01u)) ?
   malloc_sizes[i].cs_dmacachep :
   malloc_sizes[i].cs_cachep, flags);
 }
 return __kmalloc(size, flags);
}

extern void *kzalloc(size_t, gfp_t);







static inline __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (n != 0 && size > ((int)(~0U>>1)) / n)
  return ((void *)0);
 return kzalloc(n * size, flags);
}

extern void kfree(const void *);
extern unsigned int ksize(const void *);





static inline __attribute__((always_inline)) void *kmem_cache_alloc_node(kmem_cache_t *cachep, gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
static inline __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}


extern int kmem_cache_reap(int);
extern int kmem_ptr_validate(kmem_cache_t *cachep, void *ptr);


extern kmem_cache_t *vm_area_cachep;
extern kmem_cache_t *names_cachep;
extern kmem_cache_t *files_cachep;
extern kmem_cache_t *filp_cachep;
extern kmem_cache_t *fs_cachep;
extern kmem_cache_t *signal_cachep;
extern kmem_cache_t *sighand_cachep;
extern kmem_cache_t *bio_cachep;

extern atomic_t slab_reclaim_pages;
# 5 "include/linux/percpu.h" 2


# 1 "include/asm/percpu.h" 1



# 1 "include/asm-generic/percpu.h" 1
# 5 "include/asm/percpu.h" 2
# 8 "include/linux/percpu.h" 2
# 43 "include/linux/percpu.h"
static inline __attribute__((always_inline)) void *__alloc_percpu(size_t size, size_t align)
{
 void *ret = kmalloc(size, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
 if (ret)
  memset(ret, 0, size);
 return ret;
}
static inline __attribute__((always_inline)) void free_percpu(const void *ptr)
{
 kfree(ptr);
}
# 35 "include/linux/sched.h" 2

# 1 "include/linux/seccomp.h" 1
# 30 "include/linux/seccomp.h"
  typedef struct { } seccomp_t;






static inline __attribute__((always_inline)) int has_secure_computing(struct thread_info *ti)
{
 return 0;
}
# 37 "include/linux/sched.h" 2

# 1 "include/linux/auxvec.h" 1



# 1 "include/asm/auxvec.h" 1
# 5 "include/linux/auxvec.h" 2
# 39 "include/linux/sched.h" 2

struct exec_domain;
# 80 "include/linux/sched.h"
extern unsigned long avenrun[];
# 94 "include/linux/sched.h"
extern unsigned long total_forks;
extern int nr_threads;
extern int last_pid;
extern __typeof__(unsigned long) per_cpu__process_counts;
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_iowait(void);


# 1 "include/linux/param.h" 1
# 105 "include/linux/sched.h" 2
# 1 "include/linux/resource.h" 1
# 21 "include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 68 "include/linux/resource.h"
# 1 "include/asm/resource.h" 1
# 34 "include/asm/resource.h"
# 1 "include/asm-generic/resource.h" 1
# 35 "include/asm/resource.h" 2
# 69 "include/linux/resource.h" 2
# 106 "include/linux/sched.h" 2
# 1 "include/linux/timer.h" 1
# 9 "include/linux/timer.h"
struct timer_base_s;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct timer_base_s *base;
};

extern struct timer_base_s __init_timer_base;
# 34 "include/linux/timer.h"
void init_timer(struct timer_list * timer);

static inline __attribute__((always_inline)) void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}
# 55 "include/linux/timer.h"
static inline __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);

extern unsigned long next_timer_interrupt(void);
# 81 "include/linux/timer.h"
static inline __attribute__((always_inline)) void add_timer(struct timer_list *timer)
{
 do { if (__builtin_expect(!!((timer_pending(timer))!=0), 0)) do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/timer.h", 83, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); } while(0);
 __mod_timer(timer, timer->expires);
}
# 97 "include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
extern void it_real_fn(unsigned long);
# 107 "include/linux/sched.h" 2
# 162 "include/linux/sched.h"
struct sched_param {
 int sched_priority;
};
# 176 "include/linux/sched.h"
extern rwlock_t tasklist_lock;
extern spinlock_t mmlist_lock;

typedef struct task_struct task_t;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void init_idle(task_t *idle, int cpu);

extern cpumask_t nohz_cpu_mask;

extern void show_state(void);
extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);






static inline __attribute__((always_inline)) void softlockup_tick(struct pt_regs *regs)
{
}
static inline __attribute__((always_inline)) void spawn_softlockup_task(void)
{
}
static inline __attribute__((always_inline)) void touch_softlockup_watchdog(void)
{
}






extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);

struct namespace;




extern int sysctl_max_map_count;

# 1 "include/linux/aio.h" 1




# 1 "include/linux/workqueue.h" 1
# 12 "include/linux/workqueue.h"
struct workqueue_struct;

struct work_struct {
 unsigned long pending;
 struct list_head entry;
 void (*func)(void *);
 void *data;
 void *wq_data;
 struct timer_list timer;
};
# 53 "include/linux/workqueue.h"
extern struct workqueue_struct *__create_workqueue(const char *name,
          int singlethread);



extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq, struct work_struct *work, unsigned long delay);
extern void flush_workqueue(struct workqueue_struct *wq);

extern int schedule_work(struct work_struct *work);
extern int schedule_delayed_work(struct work_struct *work, unsigned long delay);

extern int schedule_delayed_work_on(int cpu, struct work_struct *work, unsigned long delay);
extern void flush_scheduled_work(void);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
void cancel_rearming_delayed_work(struct work_struct *work);
void cancel_rearming_delayed_workqueue(struct workqueue_struct *,
           struct work_struct *);






static inline __attribute__((always_inline)) int cancel_delayed_work(struct work_struct *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, &work->pending);
 return ret;
}
# 6 "include/linux/aio.h" 2
# 1 "include/linux/aio_abi.h" 1
# 32 "include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
};


struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 68 "include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;
 __u64 aio_reserved3;
};
# 7 "include/linux/aio.h" 2

# 1 "include/asm/atomic.h" 1
# 9 "include/linux/aio.h" 2




struct kioctx;
# 85 "include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 struct list_head ki_list;


 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;
 __u64 ki_user_data;
 loff_t ki_pos;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 wait_queue_t ki_wait;
 long ki_retried;
 long ki_kicked;
 long ki_queued;

 void *private;
};
# 138 "include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct kioctx *next;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct work_struct wq;
};


extern unsigned aio_max_size;

extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
extern void __put_ioctx(struct kioctx *ctx);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);
extern struct kioctx *lookup_ioctx(unsigned long ctx_id);
extern int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb);



struct kioctx *lookup_ioctx(unsigned long ctx_id);
int io_submit_one(struct kioctx *ctx, struct iocb *user_iocb, struct iocb *iocb);
# 239 "include/linux/aio.h"
static inline __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


extern unsigned long aio_nr;
extern unsigned long aio_max_nr;
# 241 "include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 287 "include/linux/sched.h"
typedef unsigned long mm_counter_t;
# 303 "include/linux/sched.h"
struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
        unsigned long mmap_base;
        unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[42];

 unsigned dumpable:2;
 cpumask_t cpu_vm_mask;


 mm_context_t context;


 unsigned long swap_token_time;
 char recent_pagein;


 int core_waiters;
 struct completion *core_startup_done, core_done;


 rwlock_t ioctx_list_lock;
 struct kioctx *ioctx_list;
};

struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[128];
 spinlock_t siglock;
};
# 375 "include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 task_t *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 struct task_struct *group_exit_task;
 int notify_count;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct timer_list real_timer;
 unsigned long it_real_value, it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;


 pid_t pgrp;
 pid_t tty_old_pgrp;
 pid_t session;

 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;







 unsigned long long sched_time;
# 448 "include/linux/sched.h"
 struct rlimit rlim[15];

 struct list_head cpu_timers[3];







};
# 497 "include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;





 unsigned long mq_bytes;
 unsigned long locked_shm;







 struct list_head uidhash_list;
 uid_t uid;
};

extern struct user_struct *find_user(uid_t);

extern struct user_struct root_user;


typedef struct prio_array prio_array_t;
struct backing_dev_info;
struct reclaim_state;
# 544 "include/linux/sched.h"
enum idle_type
{
 SCHED_IDLE,
 NOT_IDLE,
 NEWLY_IDLE,
 MAX_IDLE_TYPES
};
# 640 "include/linux/sched.h"
struct io_context;
void exit_io_context(void);
struct cpuset;



struct group_info {
 int ngroups;
 atomic_t usage;
 gid_t small_block[32];
 int nblocks;
 gid_t *blocks[0];
};
# 669 "include/linux/sched.h"
extern struct group_info *groups_alloc(int gidsetsize);
extern void groups_free(struct group_info *group_info);
extern int set_current_groups(struct group_info *group_info);
extern int groups_search(struct group_info *group_info, gid_t grp);







static inline __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;

struct task_struct {
 volatile long state;
 struct thread_info *thread_info;
 atomic_t usage;
 unsigned long flags;
 unsigned long ptrace;

 int lock_depth;




 int prio, static_prio;
 struct list_head run_list;
 prio_array_t *array;

 unsigned short ioprio;

 unsigned long sleep_avg;
 unsigned long long timestamp, last_ran;
 unsigned long long sched_time;
 int activated;

 unsigned long policy;
 cpumask_t cpus_allowed;
 unsigned int time_slice, first_time_slice;





 struct list_head tasks;




 struct list_head ptrace_children;
 struct list_head ptrace_list;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 long exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned long personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;





 struct task_struct *real_parent;
 struct task_struct *parent;




 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;


 struct pid pids[PIDTYPE_MAX];

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 unsigned long rt_priority;
 cputime_t utime, stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;

 unsigned long min_flt, maj_flt;

   cputime_t it_prof_expires, it_virt_expires;
 unsigned long long it_sched_expires;
 struct list_head cpu_timers[3];


 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 struct group_info *group_info;
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 unsigned keep_capabilities:1;
 struct user_struct *user;




 int oomkilladj;
 char comm[16];




 int link_count, total_link_count;

 struct sysv_sem sysvsem;

 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct namespace *namespace;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;

 void *security;
 struct audit_context *audit_context;
 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;

 spinlock_t proc_lock;


 void *journal_info;


 struct reclaim_state *reclaim_state;

 struct dentry *proc_dentry;
 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;






 wait_queue_t *io_wait;

 u64 rchar, wchar, syscr, syscw;
# 859 "include/linux/sched.h"
 atomic_t fs_excl;
};

static inline __attribute__((always_inline)) pid_t process_group(struct task_struct *tsk)
{
 return tsk->signal->pgrp;
}
# 875 "include/linux/sched.h"
static inline __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].nr != 0;
}

extern void free_task(struct task_struct *tsk);
extern void __put_task_struct(struct task_struct *tsk);
# 940 "include/linux/sched.h"
static inline __attribute__((always_inline)) int set_cpus_allowed(task_t *p, cpumask_t new_mask)
{
 if (!test_bit((0), (new_mask).bits))
  return -22;
 return 0;
}


extern unsigned long long sched_clock(void);
extern unsigned long long current_sched_time(const task_t *current_task);
# 961 "include/linux/sched.h"
static inline __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);
extern void set_user_nice(task_t *p, long nice);
extern int task_prio(const task_t *p);
extern int task_nice(const task_t *p);
extern int can_nice(const task_t *p, const int nice);
extern int task_curr(const task_t *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern task_t *idle_task(int cpu);
extern task_t *curr_task(int cpu);
extern void set_curr_task(int cpu, task_t *p);

void yield(void);




extern struct exec_domain default_exec_domain;

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[((1UL << 12) << (1))/sizeof(long)];
};


static inline __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & (((1UL << 12) << (1))-sizeof(void*)));
}


extern union thread_union init_thread_union;
extern struct task_struct init_task;

extern struct mm_struct init_mm;


extern struct task_struct *find_task_by_pid_type(int type, int pid);
extern void set_special_pids(pid_t session, pid_t pgrp);
extern void __set_special_pids(pid_t session, pid_t pgrp);


extern struct user_struct * alloc_uid(uid_t);
static inline __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_add(1,(&u->__count));
 return u;
}
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);



extern void do_timer(struct pt_regs *);

extern int wake_up_state(struct task_struct * tsk, unsigned int state);
extern int wake_up_process(struct task_struct * tsk);
extern void wake_up_new_task(struct task_struct * tsk, unsigned long clone_flags);




 static inline __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(task_t * p, int clone_flags);
extern void sched_exit(task_t * p);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { __asm__ __volatile__( "local_irq_save\t%0" : "=r" (flags) : : "memory"); do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&tsk->sighand->siglock); } while (0); } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int send_group_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pg_info(int sig, struct siginfo *info, pid_t pgrp);
extern int kill_pg_info(int, struct siginfo *, pid_t);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern int kill_proc_info_as_uid(int, struct siginfo *, pid_t, uid_t, uid_t);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern int kill_pg(pid_t, int, int);
extern int kill_sl(pid_t, int, int);
extern int kill_proc(pid_t, int, int);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int send_group_sigqueue(int, struct sigqueue *, struct task_struct *);
extern int do_sigaction(int, const struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);






static inline __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - get_current()->sas_ss_sp < get_current()->sas_ss_size);
}

static inline __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return (get_current()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}






static inline __attribute__((always_inline)) int capable(int cap)
{
 if (((get_current()->cap_effective) & (1 << (cap)))) {
  get_current()->flags |= 0x00000100;
  return 1;
 }
 return 0;
}





extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if ((atomic_sub_return(1, (&mm->mm_count)) == 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void exit_signal(struct task_struct *);
extern void __exit_signal(struct task_struct *);
extern void exit_sighand(struct task_struct *);
extern void __exit_sighand(struct task_struct *);
extern void exit_itimers(struct signal_struct *);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);
extern task_t *child_reaper;

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
task_t *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);
# 1201 "include/linux/sched.h"
extern task_t * next_thread(const task_t *p);



static inline __attribute__((always_inline)) int thread_group_empty(task_t *p)
{
 return list_empty(&p->pids[PIDTYPE_TGID].pid_list);
}




extern void unhash_process(struct task_struct *p);
# 1224 "include/linux/sched.h"
static inline __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}

static inline __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&p->alloc_lock); } while (0);
}





static inline __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *(p)->thread_info = *(org)->thread_info;
 (p)->thread_info->task = p;
}

static inline __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(p->thread_info + 1);
}






static inline __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag((tsk)->thread_info, flag);
}

static inline __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag((tsk)->thread_info, flag);
}

static inline __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag((tsk)->thread_info, flag);
}

static inline __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0);
}
# 1306 "include/linux/sched.h"
extern int cond_resched(void);
extern int cond_resched_lock(spinlock_t * lock);
extern int cond_resched_softirq(void);
# 1324 "include/linux/sched.h"
static inline __attribute__((always_inline)) int lock_need_resched(spinlock_t *lock)
{
 if (0 || need_resched())
  return 1;
 return 0;
}





extern void recalc_sigpending_tsk(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 1357 "include/linux/sched.h"
static inline __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}






static inline __attribute__((always_inline)) void arch_pick_mmap_layout(struct mm_struct *mm)
{
 mm->mmap_base = ((((0x7fff8000UL / 3) + (1UL << 12) - 1) & (~((1 << 12) - 1))));
 mm->get_unmapped_area = arch_get_unmapped_area;
 mm->unmap_area = arch_unmap_area;
}


extern long sched_setaffinity(pid_t pid, cpumask_t new_mask);
extern long sched_getaffinity(pid_t pid, cpumask_t *mask);
# 1448 "include/linux/sched.h"
static inline __attribute__((always_inline)) int frozen(struct task_struct *p) { return 0; }
static inline __attribute__((always_inline)) int freezing(struct task_struct *p) { return 0; }
static inline __attribute__((always_inline)) void freeze(struct task_struct *p) { do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/sched.h", 1450, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); }
static inline __attribute__((always_inline)) int thaw_process(struct task_struct *p) { return 1; }
static inline __attribute__((always_inline)) void frozen_process(struct task_struct *p) { do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/sched.h", 1452, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); }

static inline __attribute__((always_inline)) void refrigerator(void) {}
static inline __attribute__((always_inline)) int freeze_processes(void) { do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/sched.h", 1455, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); return 0; }
static inline __attribute__((always_inline)) void thaw_processes(void) {}

static inline __attribute__((always_inline)) int try_to_freeze(void) { return 0; }
# 7 "include/linux/smp_lock.h" 2




extern int __attribute__((section(".spinlock.text"))) __reacquire_kernel_lock(void);
extern void __attribute__((section(".spinlock.text"))) __release_kernel_lock(void);
# 34 "include/linux/smp_lock.h"
static inline __attribute__((always_inline)) int reacquire_kernel_lock(struct task_struct *task)
{
 if (__builtin_expect(!!(task->lock_depth >= 0), 0))
  __reacquire_kernel_lock();
 return 0;
}

extern void __attribute__((section(".spinlock.text"))) lock_kernel(void) ;
extern void __attribute__((section(".spinlock.text"))) unlock_kernel(void) ;
# 7 "include/linux/hardirq.h" 2
# 1 "include/asm/hardirq.h" 1
# 14 "include/asm/hardirq.h"
# 1 "include/linux/irq.h" 1
# 22 "include/linux/irq.h"
# 1 "include/asm/irq.h" 1
# 14 "include/asm/irq.h"
# 1 "include/asm-mips/mach-tango2/irq.h" 1
# 15 "include/asm/irq.h" 2
# 25 "include/asm/irq.h"
struct pt_regs;

extern unsigned int do_IRQ(unsigned int irq, struct pt_regs *regs);
# 48 "include/asm/irq.h"
extern void arch_init_irq(void);
# 23 "include/linux/irq.h" 2
# 47 "include/linux/irq.h"
struct hw_interrupt_type {
 const char * typename;
 unsigned int (*startup)(unsigned int irq);
 void (*shutdown)(unsigned int irq);
 void (*enable)(unsigned int irq);
 void (*disable)(unsigned int irq);
 void (*ack)(unsigned int irq);
 void (*end)(unsigned int irq);
 void (*set_affinity)(unsigned int irq, cpumask_t dest);




};

typedef struct hw_interrupt_type hw_irq_controller;
# 71 "include/linux/irq.h"
typedef struct irq_desc {
 hw_irq_controller *handler;
 void *handler_data;
 struct irqaction *action;
 unsigned int status;
 unsigned int depth;
 unsigned int irq_count;
 unsigned int irqs_unhandled;
 spinlock_t lock;



} __attribute__((__aligned__((1 << 4)))) irq_desc_t;

extern irq_desc_t irq_desc [256];


static inline __attribute__((always_inline)) irq_desc_t *
irq_descp (int irq)
{
 return irq_desc + irq;
}

# 1 "include/asm/hw_irq.h" 1
# 11 "include/asm/hw_irq.h"
# 1 "include/linux/profile.h" 1
# 15 "include/linux/profile.h"
struct proc_dir_entry;
struct pt_regs;


void __attribute__ ((__section__ (".init.text"))) profile_init(void);
void profile_tick(int, struct pt_regs *);
void profile_hit(int, void *);

void create_prof_cpu_mask(struct proc_dir_entry *);




enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};
# 66 "include/linux/profile.h"
static inline __attribute__((always_inline)) int task_handoff_register(struct notifier_block * n)
{
 return -89;
}

static inline __attribute__((always_inline)) int task_handoff_unregister(struct notifier_block * n)
{
 return -89;
}

static inline __attribute__((always_inline)) int profile_event_register(enum profile_type t, struct notifier_block * n)
{
 return -89;
}

static inline __attribute__((always_inline)) int profile_event_unregister(enum profile_type t, struct notifier_block * n)
{
 return -89;
}





static inline __attribute__((always_inline)) int register_timer_hook(int (*hook)(struct pt_regs *))
{
 return -89;
}

static inline __attribute__((always_inline)) void unregister_timer_hook(int (*hook)(struct pt_regs *))
{
 return;
}
# 12 "include/asm/hw_irq.h" 2
# 1 "include/asm/atomic.h" 1
# 13 "include/asm/hw_irq.h" 2

extern void disable_8259A_irq(unsigned int irq);
extern void enable_8259A_irq(unsigned int irq);
extern int i8259A_irq_pending(unsigned int irq);
extern void make_8259A_irq(unsigned int irq);
extern void init_8259A(int aeoi);

extern atomic_t irq_err_count;


static inline __attribute__((always_inline)) void hw_resend_irq(struct hw_interrupt_type *h, unsigned int i)
{
}
# 95 "include/linux/irq.h" 2

extern int setup_irq(unsigned int irq, struct irqaction * new);


extern cpumask_t irq_affinity[256];







static inline __attribute__((always_inline)) void set_native_irq_info(int irq, cpumask_t mask)
{
}
# 213 "include/linux/irq.h"
extern int no_irq_affinity;
extern int noirqdebug_setup(char *str);

extern int handle_IRQ_event(unsigned int irq, struct pt_regs *regs,
     struct irqaction *action);
extern unsigned int __do_IRQ(unsigned int irq, struct pt_regs *regs);
extern void note_interrupt(unsigned int irq, irq_desc_t *desc,
     int action_ret, struct pt_regs *regs);
extern int can_request_irq(unsigned int irq, unsigned long irqflags);

extern void init_irq_proc(void);


extern hw_irq_controller no_irq_type;
# 15 "include/asm/hardirq.h" 2

typedef struct {
 unsigned int __softirq_pending;
} __attribute__((__aligned__((1 << 4)))) irq_cpustat_t;

# 1 "include/linux/irq_cpustat.h" 1
# 21 "include/linux/irq_cpustat.h"
extern irq_cpustat_t irq_stat[];
# 21 "include/asm/hardirq.h" 2

extern void ack_bad_irq(unsigned int irq);
# 8 "include/linux/hardirq.h" 2
# 93 "include/linux/hardirq.h"
struct task_struct;


static inline __attribute__((always_inline)) void account_user_vtime(struct task_struct *tsk)
{
}

static inline __attribute__((always_inline)) void account_system_vtime(struct task_struct *tsk)
{
}
# 111 "include/linux/hardirq.h"
extern void irq_exit(void);
# 12 "include/linux/interrupt.h" 2

# 1 "include/asm/atomic.h" 1
# 14 "include/linux/interrupt.h" 2
# 31 "include/linux/interrupt.h"
typedef int irqreturn_t;





struct irqaction {
 irqreturn_t (*handler)(int, void *, struct pt_regs *);
 unsigned long flags;
 cpumask_t mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir;
};

extern irqreturn_t no_action(int cpl, void *dev_id, struct pt_regs *regs);
extern int request_irq(unsigned int,
         irqreturn_t (*handler)(int, void *, struct pt_regs *),
         unsigned long, const char *, void *);
extern void free_irq(unsigned int, void *);



extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);
# 70 "include/linux/interrupt.h"
static inline __attribute__((always_inline)) void __attribute__((deprecated)) cli(void)
{
 local_irq_disable();
}
static inline __attribute__((always_inline)) void __attribute__((deprecated)) sti(void)
{
 local_irq_enable();
}
static inline __attribute__((always_inline)) void __attribute__((deprecated)) save_flags(unsigned long *x)
{
 __asm__ __volatile__( "local_save_flags %0" : "=r" (*x));
}

static inline __attribute__((always_inline)) void __attribute__((deprecated)) restore_flags(unsigned long x)
{
 do { unsigned long __tmp1; __asm__ __volatile__( "local_irq_restore\t%0" : "=r" (__tmp1) : "0" (x) : "memory"); } while(0);
}

static inline __attribute__((always_inline)) void __attribute__((deprecated)) save_and_cli(unsigned long *x)
{
 __asm__ __volatile__( "local_irq_save\t%0" : "=r" (*x) : : "memory");
}
# 101 "include/linux/interrupt.h"
extern void local_bh_enable(void);







enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 SCSI_SOFTIRQ,
 TASKLET_SOFTIRQ
};





struct softirq_action
{
 void (*action)(struct softirq_action *);
 void *data;
};

 void do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action*), void *data);
extern void softirq_init(void);

extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
# 157 "include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 173 "include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};
# 201 "include/linux/interrupt.h"
extern void __tasklet_schedule(struct tasklet_struct *t);

static inline __attribute__((always_inline)) void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline __attribute__((always_inline)) void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}


static inline __attribute__((always_inline)) void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_add(1,(&t->count));
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 do { } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void tasklet_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_sub(1,(&t->count));
}

static inline __attribute__((always_inline)) void tasklet_hi_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_sub(1,(&t->count));
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);
# 290 "include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);
# 37 "include/linux/rcuref.h" 2

# 1 "include/asm/atomic.h" 1
# 39 "include/linux/rcuref.h" 2
# 57 "include/linux/rcuref.h"
static inline __attribute__((always_inline)) void rcuref_inc(atomic_t *rcuref)
{
 atomic_add(1,(rcuref));
}
# 70 "include/linux/rcuref.h"
static inline __attribute__((always_inline)) void rcuref_dec(atomic_t *rcuref)
{
 atomic_sub(1,(rcuref));
}
# 88 "include/linux/rcuref.h"
static inline __attribute__((always_inline)) int rcuref_dec_and_test(atomic_t *rcuref)
{
 return (atomic_sub_return(1, (rcuref)) == 0);
}
# 108 "include/linux/rcuref.h"
static inline __attribute__((always_inline)) int rcuref_inc_lf(atomic_t *rcuref)
{
 int c, old;
 c = ((rcuref)->counter);
 while (c && (old = ((__typeof__(*(&rcuref->counter)))__cmpxchg((&rcuref->counter), (unsigned long)(c), (unsigned long)(c + 1),sizeof(*(&rcuref->counter))))) != c)
  c = old;
 return c;
}
# 13 "include/linux/fs.h" 2
# 33 "include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
extern struct files_stat_struct files_stat;

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
extern struct inodes_stat_t inodes_stat;

extern int leases_enable, lease_break_time;
# 213 "include/linux/fs.h"
# 1 "include/linux/kdev_t.h" 1
# 21 "include/linux/kdev_t.h"
static inline __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 214 "include/linux/fs.h" 2
# 1 "include/linux/dcache.h" 1





# 1 "include/asm/atomic.h" 1
# 7 "include/linux/dcache.h" 2



# 1 "include/linux/rcupdate.h" 1
# 50 "include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};
# 64 "include/linux/rcupdate.h"
struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;
} ;


static inline __attribute__((always_inline)) int rcu_batch_before(long a, long b)
{
        return (a - b) < 0;
}


static inline __attribute__((always_inline)) int rcu_batch_after(long a, long b)
{
        return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long count;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 int cpu;
 struct rcu_head barrier;
};

extern __typeof__(struct rcu_data) per_cpu__rcu_data;
extern __typeof__(struct rcu_data) per_cpu__rcu_bh_data;
extern struct rcu_ctrlblk rcu_ctrlblk;
extern struct rcu_ctrlblk rcu_bh_ctrlblk;







static inline __attribute__((always_inline)) void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &per_cpu__rcu_data));
 rdp->passed_quiesc = 1;
}
static inline __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*((void)(cpu), &per_cpu__rcu_bh_data));
 rdp->passed_quiesc = 1;
}

static inline __attribute__((always_inline)) int __rcu_pending(struct rcu_ctrlblk *rcp,
      struct rcu_data *rdp)
{



 if (rdp->curlist && !rcu_batch_before(rcp->completed, rdp->batch))
  return 1;


 if (!rdp->curlist && rdp->nxtlist)
  return 1;


 if (rdp->donelist)
  return 1;


 if (rdp->quiescbatch != rcp->cur || rdp->qs_pending)
  return 1;


 return 0;
}

static inline __attribute__((always_inline)) int rcu_pending(int cpu)
{
 return __rcu_pending(&rcu_ctrlblk, &(*((void)(cpu), &per_cpu__rcu_data))) ||
  __rcu_pending(&rcu_bh_ctrlblk, &(*((void)(cpu), &per_cpu__rcu_bh_data)));
}
# 276 "include/linux/rcupdate.h"
extern void rcu_init(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);
extern long rcu_batches_completed(void);


extern void call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *head));

extern void call_rcu_bh(struct rcu_head *head, void (*func)(struct rcu_head *head));

extern void synchronize_kernel(void);
extern void synchronize_rcu(void);
void synchronize_idle(void);
extern void rcu_barrier(void);
# 11 "include/linux/dcache.h" 2


struct nameidata;
struct vfsmount;
# 34 "include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
extern struct dentry_stat_t dentry_stat;






static inline __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;
 struct list_head d_child;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;
  struct rcu_head d_rcu;
 struct dcookie_struct *d_cookie;
 int d_mounted;
 unsigned char d_iname[36];
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
};
# 159 "include/linux/dcache.h"
extern spinlock_t dcache_lock;
# 177 "include/linux/dcache.h"
static inline __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&dcache_lock); } while (0);
 do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
  __d_drop(dentry);
 do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&dcache_lock); } while (0);
}

static inline __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_anon(struct hlist_head *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 241 "include/linux/dcache.h"
static inline __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 255 "include/linux/dcache.h"
static inline __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);

extern char * d_path(struct dentry *, struct vfsmount *, char *, int);
# 291 "include/linux/dcache.h"
static inline __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (__builtin_expect(!!((!((&dentry->d_count)->counter))!=0), 0)) do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/dcache.h", 294, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); } while(0);
  atomic_add(1,(&dentry->d_count));
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 309 "include/linux/dcache.h"
static inline __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 ret = dget(dentry->d_parent);
 do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct vfsmount *__lookup_mnt(struct vfsmount *, struct dentry *, int);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

extern int sysctl_vfs_cache_pressure;
# 215 "include/linux/fs.h" 2
# 1 "include/linux/stat.h" 1





# 1 "include/asm/stat.h" 1
# 18 "include/asm/stat.h"
struct stat {
 unsigned st_dev;
 long st_pad1[3];
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 unsigned st_rdev;
 long st_pad2[2];
 off_t st_size;
 long st_pad3;




 time_t st_atime;
 long st_atime_nsec;
 time_t st_mtime;
 long st_mtime_nsec;
 time_t st_ctime;
 long st_ctime_nsec;
 long st_blksize;
 long st_blocks;
 long st_pad4[14];
};







struct stat64 {
 unsigned long st_dev;
 unsigned long st_pad0[3];

 unsigned long long st_ino;

 mode_t st_mode;
 nlink_t st_nlink;

 uid_t st_uid;
 gid_t st_gid;

 unsigned long st_rdev;
 unsigned long st_pad1[3];

 long long st_size;





 time_t st_atime;
 unsigned long st_atime_nsec;

 time_t st_mtime;
 unsigned long st_mtime_nsec;

 time_t st_ctime;
 unsigned long st_ctime_nsec;

 unsigned long st_blksize;
 unsigned long st_pad2;

 long long st_blocks;
};
# 7 "include/linux/stat.h" 2
# 59 "include/linux/stat.h"
struct kstat {
 unsigned long ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long blocks;
};
# 216 "include/linux/fs.h" 2

# 1 "include/linux/kobject.h" 1
# 22 "include/linux/kobject.h"
# 1 "include/linux/sysfs.h" 1
# 13 "include/linux/sysfs.h"
# 1 "include/asm/atomic.h" 1
# 14 "include/linux/sysfs.h" 2

struct kobject;
struct module;

struct attribute {
 const char * name;
 struct module * owner;
 mode_t mode;
};

struct attribute_group {
 const char * name;
 struct attribute ** attrs;
};
# 51 "include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent {
 atomic_t s_count;
 struct list_head s_sibling;
 struct list_head s_children;
 void * s_element;
 int s_type;
 umode_t s_mode;
 struct dentry * s_dentry;
 struct iattr * s_iattr;
};
# 88 "include/linux/sysfs.h"
extern int
sysfs_create_dir(struct kobject *);

extern void
sysfs_remove_dir(struct kobject *);

extern int
sysfs_rename_dir(struct kobject *, const char *new_name);

extern int
sysfs_create_file(struct kobject *, const struct attribute *);

extern int
sysfs_update_file(struct kobject *, const struct attribute *);

extern int
sysfs_chmod_file(struct kobject *kobj, struct attribute *attr, mode_t mode);

extern void
sysfs_remove_file(struct kobject *, const struct attribute *);

extern int
sysfs_create_link(struct kobject * kobj, struct kobject * target, const char * name);

extern void
sysfs_remove_link(struct kobject *, const char * name);

int sysfs_create_bin_file(struct kobject * kobj, struct bin_attribute * attr);
int sysfs_remove_bin_file(struct kobject * kobj, struct bin_attribute * attr);

int sysfs_create_group(struct kobject *, const struct attribute_group *);
void sysfs_remove_group(struct kobject *, const struct attribute_group *);
# 23 "include/linux/kobject.h" 2


# 1 "include/linux/kref.h" 1
# 21 "include/linux/kref.h"
# 1 "include/asm/atomic.h" 1
# 22 "include/linux/kref.h" 2

struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 26 "include/linux/kobject.h" 2
# 1 "include/linux/kobject_uevent.h" 1
# 17 "include/linux/kobject_uevent.h"
extern char hotplug_path[];





typedef int kobject_action_t;
enum kobject_action {
 KOBJ_ADD = ( kobject_action_t) 0x01,
 KOBJ_REMOVE = ( kobject_action_t) 0x02,
 KOBJ_CHANGE = ( kobject_action_t) 0x03,
 KOBJ_MOUNT = ( kobject_action_t) 0x04,
 KOBJ_UMOUNT = ( kobject_action_t) 0x05,
 KOBJ_OFFLINE = ( kobject_action_t) 0x06,
 KOBJ_ONLINE = ( kobject_action_t) 0x07,
};



int kobject_uevent(struct kobject *kobj,
     enum kobject_action action,
     struct attribute *attr);
int kobject_uevent_atomic(struct kobject *kobj,
     enum kobject_action action,
     struct attribute *attr);
# 27 "include/linux/kobject.h" 2

# 1 "include/asm/atomic.h" 1
# 29 "include/linux/kobject.h" 2




extern u64 hotplug_seqnum;

struct kobject {
 const char * k_name;
 char name[20];
 struct kref kref;
 struct list_head entry;
 struct kobject * parent;
 struct kset * kset;
 struct kobj_type * ktype;
 struct dentry * dentry;
};

extern int kobject_set_name(struct kobject *, const char *, ...)
 __attribute__((format(printf,2,3)));

static inline __attribute__((always_inline)) const char * kobject_name(const struct kobject * kobj)
{
 return kobj->k_name;
}

extern void kobject_init(struct kobject *);
extern void kobject_cleanup(struct kobject *);

extern int kobject_add(struct kobject *);
extern void kobject_del(struct kobject *);

extern int kobject_rename(struct kobject *, const char *new_name);

extern int kobject_register(struct kobject *);
extern void kobject_unregister(struct kobject *);

extern struct kobject * kobject_get(struct kobject *);
extern void kobject_put(struct kobject *);

extern char * kobject_get_path(struct kobject *, gfp_t);

struct kobj_type {
 void (*release)(struct kobject *);
 struct sysfs_ops * sysfs_ops;
 struct attribute ** default_attrs;
};
# 95 "include/linux/kobject.h"
struct kset_hotplug_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*hotplug)(struct kset *kset, struct kobject *kobj, char **envp,
   int num_envp, char *buffer, int buffer_size);
};

struct kset {
 struct subsystem * subsys;
 struct kobj_type * ktype;
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_hotplug_ops * hotplug_ops;
};


extern void kset_init(struct kset * k);
extern int kset_add(struct kset * k);
extern int kset_register(struct kset * k);
extern void kset_unregister(struct kset * k);

static inline __attribute__((always_inline)) struct kset * to_kset(struct kobject * kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline __attribute__((always_inline)) struct kset * kset_get(struct kset * k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline __attribute__((always_inline)) void kset_put(struct kset * k)
{
 kobject_put(&k->kobj);
}

static inline __attribute__((always_inline)) struct kobj_type * get_ktype(struct kobject * k)
{
 if (k->kset && k->kset->ktype)
  return k->kset->ktype;
 else
  return k->ktype;
}

extern struct kobject * kset_find_obj(struct kset *, const char *);
# 151 "include/linux/kobject.h"
struct subsystem {
 struct kset kset;
 struct rw_semaphore rwsem;
};
# 174 "include/linux/kobject.h"
extern struct subsystem kernel_subsys;
# 221 "include/linux/kobject.h"
extern void subsystem_init(struct subsystem *);
extern int subsystem_register(struct subsystem *);
extern void subsystem_unregister(struct subsystem *);

static inline __attribute__((always_inline)) struct subsystem * subsys_get(struct subsystem * s)
{
 return s ? ({ const typeof( ((struct subsystem *)0)->kset ) *__mptr = (kset_get(&s->kset)); (struct subsystem *)( (char *)__mptr - __builtin_offsetof(struct subsystem,kset) );}) : ((void *)0);
}

static inline __attribute__((always_inline)) void subsys_put(struct subsystem * s)
{
 kset_put(&s->kset);
}

struct subsys_attribute {
 struct attribute attr;
 ssize_t (*show)(struct subsystem *, char *);
 ssize_t (*store)(struct subsystem *, const char *, size_t);
};

extern int subsys_create_file(struct subsystem * , struct subsys_attribute *);
extern void subsys_remove_file(struct subsystem * , struct subsys_attribute *);


void kobject_hotplug(struct kobject *kobj, enum kobject_action action);
int add_hotplug_env_var(char **envp, int num_envp, int *cur_index,
   char *buffer, int buffer_size, int *cur_len,
   const char *format, ...)
 __attribute__((format (printf, 7, 8)));
# 218 "include/linux/fs.h" 2

# 1 "include/linux/radix-tree.h" 1
# 25 "include/linux/radix-tree.h"
struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 47 "include/linux/radix-tree.h"
int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items, int tag);
int radix_tree_tagged(struct radix_tree_root *root, int tag);

static inline __attribute__((always_inline)) void radix_tree_preload_end(void)
{
 do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0);
}
# 220 "include/linux/fs.h" 2
# 1 "include/linux/prio_tree.h" 1
# 14 "include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "include/linux/prio_tree.h"
static inline __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 221 "include/linux/fs.h" 2



# 1 "include/asm/atomic.h" 1
# 225 "include/linux/fs.h" 2



struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;


extern void update_atime (struct inode *);

extern void __attribute__ ((__section__ (".init.text"))) inode_init(unsigned long);
extern void __attribute__ ((__section__ (".init.text"))) inode_init_early(void);
extern void __attribute__ ((__section__ (".init.text"))) mnt_init(unsigned long);
extern void __attribute__ ((__section__ (".init.text"))) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef int (get_blocks_t)(struct inode *inode, sector_t iblock,
   unsigned long max_blocks,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 282 "include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "include/linux/quota.h" 1
# 45 "include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;

extern spinlock_t dq_data_lock;
# 106 "include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 127 "include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};



# 1 "include/linux/dqblk_xfs.h" 1
# 50 "include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 137 "include/linux/quota.h" 2
# 1 "include/linux/dqblk_v1.h" 1
# 21 "include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 138 "include/linux/quota.h" 2
# 1 "include/linux/dqblk_v2.h" 1
# 20 "include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 139 "include/linux/quota.h" 2
# 150 "include/linux/quota.h"
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);







struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

extern struct dqstats dqstats;
# 213 "include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct semaphore dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};




struct quota_info {
 unsigned int flags;
 struct semaphore dqio_sem;
 struct semaphore dqonoff_sem;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};


int mark_dquot_dirty(struct dquot *dquot);
# 307 "include/linux/quota.h"
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 304 "include/linux/fs.h" 2




struct page;
struct address_space;
struct writeback_control;

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 int (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 sector_t (*bmap)(struct address_space *, sector_t);
 int (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 struct page* (*get_xip_page)(struct address_space *, sector_t,
   int);
};

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 rwlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long))));






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct semaphore bd_sem;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;
 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
# 401 "include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 434 "include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 umode_t i_mode;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 unsigned long i_blksize;
 unsigned long i_version;
 unsigned long i_blocks;
 unsigned short i_bytes;
 spinlock_t i_lock;
 struct semaphore i_sem;
 struct rw_semaphore i_alloc_sem;
 struct inode_operations *i_op;
 struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;




 struct list_head i_devices;
 struct pipe_inode_info *i_pipe;
 struct block_device *i_bdev;
 struct cdev *i_cdev;
 int i_cindex;

 __u32 i_generation;
# 486 "include/linux/fs.h"
 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;
 void *i_security;
 union {
  void *generic_ip;
 } u;



};
# 511 "include/linux/fs.h"
static inline __attribute__((always_inline)) loff_t i_size_read(struct inode *inode)
{
# 523 "include/linux/fs.h"
 loff_t i_size;

 do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 i_size = inode->i_size;
 do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0);
 return i_size;



}


static inline __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{





 do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0);
 inode->i_size = i_size;
 do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0);



}

static inline __attribute__((always_inline)) unsigned iminor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline __attribute__((always_inline)) unsigned imajor(struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 int pid;
 uid_t uid, euid;
 void *security;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned long size;
 unsigned long flags;
 unsigned long cache_hit;
 unsigned long prev_page;
 unsigned long ahead_start;
 unsigned long ahead_size;
 unsigned long ra_pages;
 unsigned long mmap_hit;
 unsigned long mmap_miss;
};



struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct dentry *f_dentry;
 struct vfsmount *f_vfsmnt;
 struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 unsigned long f_version;
 void *f_security;


 void *private_data;






 struct address_space *f_mapping;
};
extern spinlock_t files_lock;
# 652 "include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};


# 1 "include/linux/nfs_fs_i.h" 1





# 1 "include/linux/nfs.h" 1
# 10 "include/linux/nfs.h"
# 1 "include/linux/sunrpc/msg_prot.h" 1
# 15 "include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};

enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 98 "include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_fraghdr;
# 11 "include/linux/nfs.h" 2
# 42 "include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 memcpy(target->data, source->data, source->size);
}
# 165 "include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 u32 flags;
 struct nlm_lockowner *owner;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 673 "include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_pid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 unsigned char fl_flags;
 unsigned char fl_type;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
 } fl_u;
};
# 705 "include/linux/fs.h"
extern struct list_head file_lock_list;

# 1 "include/linux/fcntl.h" 1



# 1 "include/asm/fcntl.h" 1
# 47 "include/asm/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 long l_sysid;
 __kernel_pid_t l_pid;
 long pad[4];
};





# 1 "include/asm-generic/fcntl.h" 1
# 138 "include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;

};
# 62 "include/asm/fcntl.h" 2
# 5 "include/linux/fcntl.h" 2
# 708 "include/linux/fs.h" 2

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);


extern int fcntl_getlk64(struct file *, struct flock64 *);
extern int fcntl_setlk64(unsigned int, struct file *, unsigned int,
   struct flock64 *);


extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern struct file_lock *posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern void posix_block_lock(struct file_lock *, struct file_lock *);
extern void posix_unblock_lock(struct file *, struct file_lock *);
extern int posix_locks_deadlock(struct file_lock *, struct file_lock *);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern void steal_locks(fl_owner_t from);

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 771 "include/linux/fs.h"
extern struct list_head super_blocks;
extern spinlock_t sb_lock;



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned long s_old_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct semaphore s_lock;
 int s_count;
 int s_syncing;
 int s_need_sync_fs;
 atomic_t s_active;
 void *s_security;
 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct semaphore s_vfs_rename_sem;



 u32 s_time_gran;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};




static inline __attribute__((always_inline)) void get_fs_excl(void)
{
 atomic_add(1,(&get_current()->fs_excl));
}

static inline __attribute__((always_inline)) void put_fs_excl(void)
{
 atomic_sub(1,(&get_current()->fs_excl));
}

static inline __attribute__((always_inline)) int has_fs_excl(void)
{
 return ((&get_current()->fs_excl)->counter);
}





static inline __attribute__((always_inline)) void lock_super(struct super_block * sb)
{
 get_fs_excl();
 down(&sb->s_lock);
}

static inline __attribute__((always_inline)) void unlock_super(struct super_block * sb)
{
 put_fs_excl();
 up(&sb->s_lock);
}




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *, int);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
# 916 "include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, ino_t, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 struct module *owner;
};
# 947 "include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char * buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);
# 970 "include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, char *, size_t, loff_t);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_write) (struct kiocb *, const char *, size_t, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*readv) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*writev) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*sendfile) (struct file *, loff_t *, size_t, read_actor_t, void *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int, struct nameidata *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
};

struct seq_file;

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct super_block *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct vfsmount *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, const char *, size_t, loff_t);
};
# 1077 "include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}

static inline __attribute__((always_inline)) void touch_atime(struct vfsmount *mnt, struct dentry *dentry)
{

 update_atime(dentry->d_inode);
}

static inline __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_vfsmnt, file->f_dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
# 1188 "include/linux/fs.h"
struct export_operations {
 struct dentry *(*decode_fh)(struct super_block *sb, __u32 *fh, int fh_len, int fh_type,
    int (*acceptable)(void *context, struct dentry *de),
    void *context);
 int (*encode_fh)(struct dentry *de, __u32 *fh, int *max_len,
    int connectable);


 int (*get_name)(struct dentry *parent, char *name,
   struct dentry *child);
 struct dentry * (*get_parent)(struct dentry *child);
 struct dentry * (*get_dentry)(struct super_block *sb, void *inump);


 struct dentry * (*find_exported_dentry)(
  struct super_block *sb, void *obj, void *parent,
  int (*acceptable)(void *context, struct dentry *de),
  void *context);


};

extern struct dentry *
find_exported_dentry(struct super_block *sb, void *obj, void *parent,
       int (*acceptable)(void *context, struct dentry *de),
       void *context);

struct file_system_type {
 const char *name;
 int fs_flags;
 struct super_block *(*get_sb) (struct file_system_type *, int,
           const char *, void *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;
};

struct super_block *get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int));
struct super_block *get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
struct super_block *get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
struct super_block *get_sb_pseudo(struct file_system_type *, char *,
   struct super_operations *ops, unsigned long);
int __put_super(struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount(struct file_system_type *);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern void umount_tree(struct vfsmount *, int, struct list_head *);
extern void release_mounts(struct list_head *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *copy_tree(struct vfsmount *, struct dentry *, int);
extern void mnt_set_mountpoint(struct vfsmount *, struct dentry *,
      struct vfsmount *);

extern int vfs_statfs(struct super_block *, struct kstatfs *);




extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
# 1284 "include/linux/fs.h"
static inline __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if ((((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && (((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, struct file *filp);
extern long do_sys_open(const char *filename, int flags, int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void __attribute__ ((__section__ (".init.text"))) vfs_caches_init_early(void);
extern void __attribute__ ((__section__ (".init.text"))) vfs_caches_init(unsigned long);
# 1335 "include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern int unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);
extern struct file_operations def_blk_fops;
extern struct address_space_operations def_blk_aops;
extern struct file_operations def_chr_fops;
extern struct file_operations bad_sock_fops;
extern struct file_operations def_fifo_fops;
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);


extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      struct file_operations *);
extern int unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern int chrdev_open(struct inode *, struct file *);



extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_excl(const char *, int, void *);
extern void close_bdev_excl(struct block_device *);

extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

extern struct file_operations read_fifo_fops;
extern struct file_operations write_fifo_fops;
extern struct file_operations rdwr_fifo_fops;
extern struct file_operations read_pipe_fops;
extern struct file_operations write_pipe_fops;
extern struct file_operations rdwr_pipe_fops;

extern int fs_may_remount_ro(struct super_block *);
# 1397 "include/linux/fs.h"
extern int check_disk_change(struct block_device *);
extern int invalidate_inodes(struct super_block *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);
unsigned long invalidate_inode_pages(struct address_space *mapping);
static inline __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_inode_pages(inode->i_mapping);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);
extern sector_t bmap(struct inode *, sector_t);
extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int, struct nameidata *);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 atomic_sub(1,(&inode->i_writecount));
}
static inline __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_add(1,(&file->f_dentry->d_inode->i_writecount));
}
extern int do_pipe(int *);

extern int open_namei(const char *, int, int, struct nameidata *);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "include/linux/err.h" 1
# 18 "include/linux/err.h"
static inline __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) > (unsigned long)-1000L), 0);
}
# 1456 "include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

static inline __attribute__((always_inline)) struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget_locked(sb, ino);

 if (inode && (inode->i_state & 64)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

extern void __iget(struct inode * inode);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int remove_suid(struct dentry *);
extern void remove_dquot_ref(struct super_block *, int, struct list_head *);
extern struct semaphore iprune_sem;

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);
struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);
extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern int file_send_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern ssize_t generic_file_read(struct file *, char *, size_t, loff_t *);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t generic_file_aio_read(struct kiocb *, char *, size_t, loff_t);
extern ssize_t __generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const char *, size_t, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
ssize_t generic_file_write_nolock(struct file *file, const struct iovec *iov,
    unsigned long nr_segs, loff_t *ppos);
extern ssize_t generic_file_sendfile(struct file *, loff_t *, size_t, read_actor_t, void *);
extern void do_generic_mapping_read(struct address_space *mapping,
        struct file_ra_state *, struct file *,
        loff_t *, read_descriptor_t *, read_actor_t);
extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern ssize_t generic_file_readv(struct file *filp, const struct iovec *iov,
 unsigned long nr_segs, loff_t *ppos);
ssize_t generic_file_writev(struct file *filp, const struct iovec *iov,
   unsigned long nr_segs, loff_t *ppos);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t remote_llseek(struct file *file, loff_t offset, int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 1564 "include/linux/fs.h"
static inline __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}


static inline __attribute__((always_inline)) void do_generic_file_read(struct file * filp, loff_t *ppos,
     read_descriptor_t * desc,
     read_actor_t actor)
{
 do_generic_mapping_read(filp->f_mapping,
    &filp->f_ra,
    filp,
    ppos,
    desc,
    actor);
}

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_blocks_t get_blocks, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_blocks_t get_blocks,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_blocks, end_io, DIO_LOCKING);
}

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_blocks_t get_blocks,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_blocks, end_io, DIO_NO_LOCKING);
}

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_blocks_t get_blocks,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_blocks, end_io, DIO_OWN_LOCKING);
}

extern struct file_operations generic_ro_fops;



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int page_symlink(struct inode *inode, const char *symname, int len);
extern struct inode_operations page_symlink_inode_operations;
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int vfs_ioctl(struct file *, unsigned int, unsigned int, unsigned long);

extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct super_block *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_commit_write(struct file *file, struct page *page,
    unsigned offset, unsigned to);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern struct file_operations simple_dir_operations;
extern struct inode_operations simple_dir_inode_operations;
struct tree_descr { char *name; struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(char *name, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *, size_t, loff_t *, const void *, size_t);

extern int inode_change_ok(struct inode *, struct iattr *);
extern int __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void inode_update_time(struct inode *inode, int ctime_too);

static inline __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { do { do { (__current_thread_info->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { do { do { __asm__ __volatile__("": : :"memory"); do { (__current_thread_info->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(__current_thread_info, 3)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)(&dentry->d_lock); } while (0);
 return res;
}


extern int unshare_files(void);







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

static inline __attribute__((always_inline)) void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 do { if (__builtin_expect(!!((n > ((1UL << 12) - sizeof(struct simple_transaction_argresp)))!=0), 0)) do { printk("<0> BUG on %s:%d (%s).\n", "include/linux/fs.h", 1723, (__func__)); __asm__ __volatile__("break %0" : : "i" (512)); } while (0); } while(0);





 __asm__ __volatile__("": : :"memory");
 ar->size = n;
}
# 1763 "include/linux/fs.h"
static inline __attribute__((always_inline)) void __attribute__((format(printf, 1, 2)))
__simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       u64 (*get)(void *), void (*set)(void *, u64),
       const char *fmt);
int simple_attr_close(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);
# 1790 "include/linux/fs.h"
static inline __attribute__((always_inline)) char *alloc_secdata(void)
{
 return (char *)1;
}

static inline __attribute__((always_inline)) void free_secdata(void *secdata)
{ }
# 3 "init/initramfs.c" 2



# 1 "include/linux/delay.h" 1
# 10 "include/linux/delay.h"
extern unsigned long loops_per_jiffy;

# 1 "include/asm/delay.h" 1
# 18 "include/asm/delay.h"
static inline __attribute__((always_inline)) void __delay(unsigned long loops)
{
 if (sizeof(long) == 4)
  __asm__ __volatile__ (
  ".set\tnoreorder\n"
  "1:\tbnez\t%0,1b\n\t"
  "subu\t%0,1\n\t"
  ".set\treorder"
  : "=r" (loops)
  : "0" (loops));
 else if (sizeof(long) == 8)
  __asm__ __volatile__ (
  ".set\tnoreorder\n"
  "1:\tbnez\t%0,1b\n\t"
  "dsubu\t%0,1\n\t"
  ".set\treorder"
  :"=r" (loops)
  :"0" (loops));
}
# 50 "include/asm/delay.h"
static inline __attribute__((always_inline)) void __udelay(unsigned long usecs, unsigned long lpj)
{
 unsigned long lo;
# 63 "include/asm/delay.h"
 usecs *= (unsigned long) (((0x8000000000000000ULL / (500000 / 1000)) +
                            0x80000000ULL) >> 32);


 if (sizeof(long) == 4)
  __asm__("multu\t%2, %3"
  : "=h" (usecs), "=l" (lo)
  : "r" (usecs), "r" (lpj)
  : "$0");
 else if (sizeof(long) == 8)
  __asm__("dmultu\t%2, %3"
  : "=h" (usecs), "=l" (lo)
  : "r" (usecs), "r" (lpj)
  : "$0");

 __delay(usecs);
}




void tangox_udelay(unsigned usec);
# 13 "include/linux/delay.h" 2
# 41 "include/linux/delay.h"
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);

static inline __attribute__((always_inline)) void ssleep(unsigned int seconds)
{
 msleep(seconds * 1000);
}
# 7 "init/initramfs.c" 2

# 1 "include/linux/syscalls.h" 1
# 14 "include/linux/syscalls.h"
struct epoll_event;
struct iattr;
struct inode;
struct iocb;
struct io_event;
struct iovec;
struct itimerspec;
struct itimerval;
struct kexec_segment;
struct linux_dirent;
struct linux_dirent64;
struct list_head;
struct msgbuf;
struct msghdr;
struct msqid_ds;
struct new_utsname;
struct nfsctl_arg;
struct __old_kernel_stat;
struct pollfd;
struct rlimit;
struct rusage;
struct sched_param;
struct semaphore;
struct sembuf;
struct shmid_ds;
struct sockaddr;
struct stat;
struct stat64;
struct statfs;
struct statfs64;
struct __sysctl_args;
struct sysinfo;
struct timespec;
struct timeval;
struct timex;
struct timezone;
struct tms;
struct utimbuf;
struct mq_attr;
# 64 "include/linux/syscalls.h"
# 1 "include/linux/key.h" 1
# 22 "include/linux/key.h"
# 1 "include/asm/atomic.h" 1
# 23 "include/linux/key.h" 2




typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 65 "include/linux/syscalls.h" 2

 long sys_time(time_t *tloc);
 long sys_stime(time_t *tptr);
 long sys_gettimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_settimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_adjtimex(struct timex *txc_p);

 long sys_times(struct tms *tbuf);

 long sys_gettid(void);
 long sys_nanosleep(struct timespec *rqtp, struct timespec *rmtp);
 unsigned long sys_alarm(unsigned int seconds);
 long sys_getpid(void);
 long sys_getppid(void);
 long sys_getuid(void);
 long sys_geteuid(void);
 long sys_getgid(void);
 long sys_getegid(void);
 long sys_getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
 long sys_getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);
 long sys_getpgid(pid_t pid);
 long sys_getpgrp(void);
 long sys_getsid(pid_t pid);
 long sys_getgroups(int gidsetsize, gid_t *grouplist);

 long sys_setregid(gid_t rgid, gid_t egid);
 long sys_setgid(gid_t gid);
 long sys_setreuid(uid_t ruid, uid_t euid);
 long sys_setuid(uid_t uid);
 long sys_setresuid(uid_t ruid, uid_t euid, uid_t suid);
 long sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid);
 long sys_setfsuid(uid_t uid);
 long sys_setfsgid(gid_t gid);
 long sys_setpgid(pid_t pid, pid_t pgid);
 long sys_setsid(void);
 long sys_setgroups(int gidsetsize, gid_t *grouplist);

 long sys_acct(const char *name);
 long sys_capget(cap_user_header_t header,
    cap_user_data_t dataptr);
 long sys_capset(cap_user_header_t header,
    const cap_user_data_t data);
 long sys_personality(u_long personality);

 long sys_sigpending(old_sigset_t *set);
 long sys_sigprocmask(int how, old_sigset_t *set,
    old_sigset_t *oset);
 long sys_getitimer(int which, struct itimerval *value);
 long sys_setitimer(int which,
    struct itimerval *value,
    struct itimerval *ovalue);
 long sys_timer_create(clockid_t which_clock,
     struct sigevent *timer_event_spec,
     timer_t * created_timer_id);
 long sys_timer_gettime(timer_t timer_id,
    struct itimerspec *setting);
 long sys_timer_getoverrun(timer_t timer_id);
 long sys_timer_settime(timer_t timer_id, int flags,
    const struct itimerspec *new_setting,
    struct itimerspec *old_setting);
 long sys_timer_delete(timer_t timer_id);
 long sys_clock_settime(clockid_t which_clock,
    const struct timespec *tp);
 long sys_clock_gettime(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_getres(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_nanosleep(clockid_t which_clock, int flags,
    const struct timespec *rqtp,
    struct timespec *rmtp);

 long sys_nice(int increment);
 long sys_sched_setscheduler(pid_t pid, int policy,
     struct sched_param *param);
 long sys_sched_setparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_getscheduler(pid_t pid);
 long sys_sched_getparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_setaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_getaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_yield(void);
 long sys_sched_get_priority_max(int policy);
 long sys_sched_get_priority_min(int policy);
 long sys_sched_rr_get_interval(pid_t pid,
     struct timespec *interval);
 long sys_setpriority(int which, int who, int niceval);
 long sys_getpriority(int which, int who);

 long sys_shutdown(int, int);
 long sys_reboot(int magic1, int magic2, unsigned int cmd,
    void *arg);
 long sys_restart_syscall(void);
 long sys_kexec_load(unsigned long entry, unsigned long nr_segments,
    struct kexec_segment *segments,
    unsigned long flags);

 long sys_exit(int error_code);
 void sys_exit_group(int error_code);
 long sys_wait4(pid_t pid, int *stat_addr,
    int options, struct rusage *ru);
 long sys_waitid(int which, pid_t pid,
      struct siginfo *infop,
      int options, struct rusage *ru);
 long sys_waitpid(pid_t pid, int *stat_addr, int options);
 long sys_set_tid_address(int *tidptr);
 long sys_futex(u32 *uaddr, int op, int val,
   struct timespec *utime, u32 *uaddr2,
   int val3);

 long sys_init_module(void *umod, unsigned long len,
    const char *uargs);
 long sys_delete_module(const char *name_user,
    unsigned int flags);

 long sys_rt_sigprocmask(int how, sigset_t *set,
    sigset_t *oset, size_t sigsetsize);
 long sys_rt_sigpending(sigset_t *set, size_t sigsetsize);
 long sys_rt_sigtimedwait(const sigset_t *uthese,
    siginfo_t *uinfo,
    const struct timespec *uts,
    size_t sigsetsize);
 long sys_kill(int pid, int sig);
 long sys_tgkill(int tgid, int pid, int sig);
 long sys_tkill(int pid, int sig);
 long sys_rt_sigqueueinfo(int pid, int sig, siginfo_t *uinfo);
 long sys_sgetmask(void);
 long sys_ssetmask(int newmask);
 unsigned long sys_signal(int sig, __sighandler_t handler);
 long sys_pause(void);

 long sys_sync(void);
 long sys_fsync(unsigned int fd);
 long sys_fdatasync(unsigned int fd);
 long sys_bdflush(int func, long data);
 long sys_mount(char *dev_name, char *dir_name,
    char *type, unsigned long flags,
    void *data);
 long sys_umount(char *name, int flags);
 long sys_oldumount(char *name);
 long sys_truncate(const char *path,
    unsigned long length);
 long sys_ftruncate(unsigned int fd, unsigned long length);
 long sys_stat(char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_statfs(const char * path,
    struct statfs *buf);
 long sys_statfs64(const char *path, size_t sz,
    struct statfs64 *buf);
 long sys_fstatfs(unsigned int fd, struct statfs *buf);
 long sys_fstatfs64(unsigned int fd, size_t sz,
    struct statfs64 *buf);
 long sys_lstat(char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_fstat(unsigned int fd,
   struct __old_kernel_stat *statbuf);
 long sys_newstat(char *filename,
    struct stat *statbuf);
 long sys_newlstat(char *filename,
    struct stat *statbuf);
 long sys_newfstat(unsigned int fd, struct stat *statbuf);
 long sys_ustat(unsigned dev, struct ustat *ubuf);

 long sys_stat64(char *filename,
    struct stat64 *statbuf);
 long sys_fstat64(unsigned long fd, struct stat64 *statbuf);
 long sys_lstat64(char *filename,
    struct stat64 *statbuf);
 long sys_truncate64(const char *path, loff_t length);
 long sys_ftruncate64(unsigned int fd, loff_t length);


 long sys_setxattr(char *path, char *name,
    void *value, size_t size, int flags);
 long sys_lsetxattr(char *path, char *name,
    void *value, size_t size, int flags);
 long sys_fsetxattr(int fd, char *name, void *value,
    size_t size, int flags);
 ssize_t sys_getxattr(char *path, char *name,
    void *value, size_t size);
 ssize_t sys_lgetxattr(char *path, char *name,
    void *value, size_t size);
 ssize_t sys_fgetxattr(int fd, char *name,
    void *value, size_t size);
 ssize_t sys_listxattr(char *path, char *list,
    size_t size);
 ssize_t sys_llistxattr(char *path, char *list,
    size_t size);
 ssize_t sys_flistxattr(int fd, char *list, size_t size);
 long sys_removexattr(char *path, char *name);
 long sys_lremovexattr(char *path, char *name);
 long sys_fremovexattr(int fd, char *name);

 unsigned long sys_brk(unsigned long brk);
 long sys_mprotect(unsigned long start, size_t len,
    unsigned long prot);
 unsigned long sys_mremap(unsigned long addr,
    unsigned long old_len, unsigned long new_len,
    unsigned long flags, unsigned long new_addr);
 long sys_remap_file_pages(unsigned long start, unsigned long size,
   unsigned long prot, unsigned long pgoff,
   unsigned long flags);
 long sys_msync(unsigned long start, size_t len, int flags);
 long sys_fadvise64(int fd, loff_t offset, size_t len, int advice);
 long sys_fadvise64_64(int fd, loff_t offset, loff_t len, int advice);
 long sys_munmap(unsigned long addr, size_t len);
 long sys_mlock(unsigned long start, size_t len);
 long sys_munlock(unsigned long start, size_t len);
 long sys_mlockall(int flags);
 long sys_munlockall(void);
 long sys_madvise(unsigned long start, size_t len, int behavior);
 long sys_mincore(unsigned long start, size_t len,
    unsigned char * vec);

 long sys_pivot_root(const char *new_root,
    const char *put_old);
 long sys_chroot(const char *filename);
 long sys_mknod(const char *filename, int mode,
    unsigned dev);
 long sys_link(const char *oldname,
    const char *newname);
 long sys_symlink(const char *old, const char *new);
 long sys_unlink(const char *pathname);
 long sys_rename(const char *oldname,
    const char *newname);
 long sys_chmod(const char *filename, mode_t mode);
 long sys_fchmod(unsigned int fd, mode_t mode);

 long sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg);

 long sys_fcntl64(unsigned int fd,
    unsigned int cmd, unsigned long arg);

 long sys_dup(unsigned int fildes);
 long sys_dup2(unsigned int oldfd, unsigned int newfd);
 long sys_ioperm(unsigned long from, unsigned long num, int on);
 long sys_ioctl(unsigned int fd, unsigned int cmd,
    unsigned long arg);
 long sys_flock(unsigned int fd, unsigned int cmd);
 long sys_io_setup(unsigned nr_reqs, aio_context_t *ctx);
 long sys_io_destroy(aio_context_t ctx);
 long sys_io_getevents(aio_context_t ctx_id,
    long min_nr,
    long nr,
    struct io_event *events,
    struct timespec *timeout);
 long sys_io_submit(aio_context_t, long,
    struct iocb * *);
 long sys_io_cancel(aio_context_t ctx_id, struct iocb *iocb,
         struct io_event *result);
 ssize_t sys_sendfile(int out_fd, int in_fd,
    off_t *offset, size_t count);
 ssize_t sys_sendfile64(int out_fd, int in_fd,
    loff_t *offset, size_t count);
 long sys_readlink(const char *path,
    char *buf, int bufsiz);
 long sys_creat(const char *pathname, int mode);
 long sys_open(const char *filename,
    int flags, int mode);
 long sys_close(unsigned int fd);
 long sys_access(const char *filename, int mode);
 long sys_vhangup(void);
 long sys_chown(const char *filename,
    uid_t user, gid_t group);
 long sys_lchown(const char *filename,
    uid_t user, gid_t group);
 long sys_fchown(unsigned int fd, uid_t user, gid_t group);
# 362 "include/linux/syscalls.h"
 long sys_utime(char *filename,
    struct utimbuf *times);
 long sys_utimes(char *filename,
    struct timeval *utimes);
 off_t sys_lseek(unsigned int fd, off_t offset,
    unsigned int origin);
 long sys_llseek(unsigned int fd, unsigned long offset_high,
   unsigned long offset_low, loff_t *result,
   unsigned int origin);
 ssize_t sys_read(unsigned int fd, char *buf,
    size_t count);
 ssize_t sys_readahead(int fd, loff_t offset, size_t count);
 ssize_t sys_readv(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
 ssize_t sys_write(unsigned int fd, const char *buf,
    size_t count);
 ssize_t sys_writev(unsigned long fd,
    const struct iovec *vec,
    unsigned long vlen);
 ssize_t sys_pread64(unsigned int fd, char *buf,
    size_t count, loff_t pos);
 ssize_t sys_pwrite64(unsigned int fd, const char *buf,
    size_t count, loff_t pos);
 long sys_getcwd(char *buf, unsigned long size);
 long sys_mkdir(const char *pathname, int mode);
 long sys_chdir(const char *filename);
 long sys_fchdir(unsigned int fd);
 long sys_rmdir(const char *pathname);
 long sys_lookup_dcookie(u64 cookie64, char *buf, size_t len);
 long sys_quotactl(unsigned int cmd, const char *special,
    qid_t id, void *addr);
 long sys_getdents(unsigned int fd,
    struct linux_dirent *dirent,
    unsigned int count);
 long sys_getdents64(unsigned int fd,
    struct linux_dirent64 *dirent,
    unsigned int count);

 long sys_setsockopt(int fd, int level, int optname,
    char *optval, int optlen);
 long sys_getsockopt(int fd, int level, int optname,
    char *optval, int *optlen);
 long sys_bind(int, struct sockaddr *, int);
 long sys_connect(int, struct sockaddr *, int);
 long sys_accept(int, struct sockaddr *, int *);
 long sys_getsockname(int, struct sockaddr *, int *);
 long sys_getpeername(int, struct sockaddr *, int *);
 long sys_send(int, void *, size_t, unsigned);
 long sys_sendto(int, void *, size_t, unsigned,
    struct sockaddr *, int);
 long sys_sendmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_recv(int, void *, size_t, unsigned);
 long sys_recvfrom(int, void *, size_t, unsigned,
    struct sockaddr *, int *);
 long sys_recvmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_socket(int, int, int);
 long sys_socketpair(int, int, int, int *);
 long sys_socketcall(int call, unsigned long *args);
 long sys_listen(int, int);
 long sys_poll(struct pollfd *ufds, unsigned int nfds,
    long timeout);
 long sys_select(int n, fd_set *inp, fd_set *outp,
   fd_set *exp, struct timeval *tvp);
 long sys_epoll_create(int size);
 long sys_epoll_ctl(int epfd, int op, int fd,
    struct epoll_event *event);
 long sys_epoll_wait(int epfd, struct epoll_event *events,
    int maxevents, int timeout);
 long sys_gethostname(char *name, int len);
 long sys_sethostname(char *name, int len);
 long sys_setdomainname(char *name, int len);
 long sys_newuname(struct new_utsname *name);

 long sys_getrlimit(unsigned int resource,
    struct rlimit *rlim);

 long sys_old_getrlimit(unsigned int resource, struct rlimit *rlim);

 long sys_setrlimit(unsigned int resource,
    struct rlimit *rlim);
 long sys_getrusage(int who, struct rusage *ru);
 long sys_umask(int mask);

 long sys_msgget(key_t key, int msgflg);
 long sys_msgsnd(int msqid, struct msgbuf *msgp,
    size_t msgsz, int msgflg);
 long sys_msgrcv(int msqid, struct msgbuf *msgp,
    size_t msgsz, long msgtyp, int msgflg);
 long sys_msgctl(int msqid, int cmd, struct msqid_ds *buf);

 long sys_semget(key_t key, int nsems, int semflg);
 long sys_semop(int semid, struct sembuf *sops,
    unsigned nsops);
 long sys_semctl(int semid, int semnum, int cmd, union semun arg);
 long sys_semtimedop(int semid, struct sembuf *sops,
    unsigned nsops,
    const struct timespec *timeout);
 long sys_shmat(int shmid, char *shmaddr, int shmflg);
 long sys_shmget(key_t key, size_t size, int flag);
 long sys_shmdt(char *shmaddr);
 long sys_shmctl(int shmid, int cmd, struct shmid_ds *buf);

 long sys_mq_open(const char *name, int oflag, mode_t mode, struct mq_attr *attr);
 long sys_mq_unlink(const char *name);
 long sys_mq_timedsend(mqd_t mqdes, const char *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec *abs_timeout);
 ssize_t sys_mq_timedreceive(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int *msg_prio, const struct timespec *abs_timeout);
 long sys_mq_notify(mqd_t mqdes, const struct sigevent *notification);
 long sys_mq_getsetattr(mqd_t mqdes, const struct mq_attr *mqstat, struct mq_attr *omqstat);

 long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn);
 long sys_pciconfig_read(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);
 long sys_pciconfig_write(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);

 long sys_prctl(int option, unsigned long arg2, unsigned long arg3,
   unsigned long arg4, unsigned long arg5);
 long sys_swapon(const char *specialfile, int swap_flags);
 long sys_swapoff(const char *specialfile);
 long sys_sysctl(struct __sysctl_args *args);
 long sys_sysinfo(struct sysinfo *info);
 long sys_sysfs(int option,
    unsigned long arg1, unsigned long arg2);
 long sys_nfsservctl(int cmd,
    struct nfsctl_arg *arg,
    void *res);
 long sys_syslog(int type, char *buf, int len);
 long sys_uselib(const char *library);
 long sys_ni_syscall(void);
 long sys_ptrace(long request, long pid, long addr, long data);

 long sys_add_key(const char *_type,
       const char *_description,
       const void *_payload,
       size_t plen,
       key_serial_t destringid);

 long sys_request_key(const char *_type,
    const char *_description,
    const char *_callout_info,
    key_serial_t destringid);

 long sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3,
      unsigned long arg4, unsigned long arg5);

 long sys_ioprio_set(int which, int who, int ioprio);
 long sys_ioprio_get(int which, int who);
 long sys_set_mempolicy(int mode, unsigned long *nmask,
     unsigned long maxnode);
# 9 "init/initramfs.c" 2

static __attribute__ ((__section__ (".init.data"))) char *message;
static void __attribute__ ((__section__ (".init.text"))) error(char *x)
{
 if (!message)
  message = x;
}

static void __attribute__ ((__section__ (".init.text"))) *malloc(size_t size)
{
 return kmalloc(size, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static void __attribute__ ((__section__ (".init.text"))) free(void *where)
{
 kfree(where);
}



static __attribute__ ((__section__ (".init.data"))) struct hash {
 int ino, minor, major;
 struct hash *next;
 char *name;
} *head[32];

static inline __attribute__((always_inline)) int hash(int major, int minor, int ino)
{
 unsigned long tmp = ino + minor + (major << 3);
 tmp += tmp >> 5;
 return tmp & 31;
}

static char __attribute__ ((__section__ (".init.text"))) *find_link(int major, int minor, int ino, char *name)
{
 struct hash **p, *q;
 for (p = head + hash(major, minor, ino); *p; p = &(*p)->next) {
  if ((*p)->ino != ino)
   continue;
  if ((*p)->minor != minor)
   continue;
  if ((*p)->major != major)
   continue;
  return (*p)->name;
 }
 q = (struct hash *)malloc(sizeof(struct hash));
 if (!q)
  panic("can't allocate link hash entry");
 q->ino = ino;
 q->minor = minor;
 q->major = major;
 q->name = name;
 q->next = ((void *)0);
 *p = q;
 return ((void *)0);
}

static void __attribute__ ((__section__ (".init.text"))) free_hash(void)
{
 struct hash **p, *q;
 for (p = head; p < head + 32; p++) {
  while (*p) {
   q = *p;
   *p = q->next;
   free(q);
  }
 }
}



static __attribute__ ((__section__ (".init.data"))) unsigned long ino, major, minor, nlink;
static __attribute__ ((__section__ (".init.data"))) mode_t mode;
static __attribute__ ((__section__ (".init.data"))) unsigned long body_len, name_len;
static __attribute__ ((__section__ (".init.data"))) uid_t uid;
static __attribute__ ((__section__ (".init.data"))) gid_t gid;
static __attribute__ ((__section__ (".init.data"))) unsigned rdev;

static void __attribute__ ((__section__ (".init.text"))) parse_header(char *s)
{
 unsigned long parsed[12];
 char buf[9];
 int i;

 buf[8] = '\0';
 for (i = 0, s += 6; i < 12; i++, s += 8) {
  memcpy(buf, s, 8);
  parsed[i] = simple_strtoul(buf, ((void *)0), 16);
 }
 ino = parsed[0];
 mode = parsed[1];
 uid = parsed[2];
 gid = parsed[3];
 nlink = parsed[4];
 body_len = parsed[6];
 major = parsed[7];
 minor = parsed[8];
 rdev = new_encode_dev((((parsed[9]) << 20) | (parsed[10])));
 name_len = parsed[11];
}



static __attribute__ ((__section__ (".init.data"))) enum state {
 Start,
 Collect,
 GotHeader,
 SkipIt,
 GotName,
 CopyFile,
 GotSymlink,
 Reset
} state, next_state;

static __attribute__ ((__section__ (".init.data"))) char *victim;
static __attribute__ ((__section__ (".init.data"))) unsigned count;
static __attribute__ ((__section__ (".init.data"))) loff_t this_header, next_header;

static __attribute__ ((__section__ (".init.data"))) int dry_run;

static inline __attribute__((always_inline)) void eat(unsigned n)
{
 victim += n;
 this_header += n;
 count -= n;
}



static __attribute__ ((__section__ (".init.data"))) char *collected;
static __attribute__ ((__section__ (".init.data"))) int remains;
static __attribute__ ((__section__ (".init.data"))) char *collect;

static void __attribute__ ((__section__ (".init.text"))) read_into(char *buf, unsigned size, enum state next)
{
 if (count >= size) {
  collected = victim;
  eat(size);
  state = next;
 } else {
  collect = collected = buf;
  remains = size;
  next_state = next;
  state = Collect;
 }
}

static __attribute__ ((__section__ (".init.data"))) char *header_buf, *symlink_buf, *name_buf;

static int __attribute__ ((__section__ (".init.text"))) do_start(void)
{
 read_into(header_buf, 110, GotHeader);
 return 0;
}

static int __attribute__ ((__section__ (".init.text"))) do_collect(void)
{
 unsigned n = remains;
 if (count < n)
  n = count;
 memcpy(collect, victim, n);
 eat(n);
 collect += n;
 if ((remains -= n) != 0)
  return 1;
 state = next_state;
 return 0;
}

static int __attribute__ ((__section__ (".init.text"))) do_header(void)
{
 if (memcmp(collected, "070701", 6)) {
  error("no cpio magic");
  return 1;
 }
 parse_header(collected);
 next_header = this_header + ((((name_len) + 1) & ~3) + 2) + body_len;
 next_header = (next_header + 3) & ~3;
 if (dry_run) {
  read_into(name_buf, ((((name_len) + 1) & ~3) + 2), GotName);
  return 0;
 }
 state = SkipIt;
 if (name_len <= 0 || name_len > 4096)
  return 0;
 if ((((mode) & 00170000) == 0120000)) {
  if (body_len > 4096)
   return 0;
  collect = collected = symlink_buf;
  remains = ((((name_len) + 1) & ~3) + 2) + body_len;
  next_state = GotSymlink;
  state = Collect;
  return 0;
 }
 if ((((mode) & 00170000) == 0100000) || !body_len)
  read_into(name_buf, ((((name_len) + 1) & ~3) + 2), GotName);
 return 0;
}

static int __attribute__ ((__section__ (".init.text"))) do_skip(void)
{
 if (this_header + count < next_header) {
  eat(count);
  return 1;
 } else {
  eat(next_header - this_header);
  state = next_state;
  return 0;
 }
}

static int __attribute__ ((__section__ (".init.text"))) do_reset(void)
{
 while(count && *victim == '\0')
  eat(1);
 if (count && (this_header & 3))
  error("broken padding");
 return 1;
}

static int __attribute__ ((__section__ (".init.text"))) maybe_link(void)
{
 if (nlink >= 2) {
  char *old = find_link(major, minor, ino, collected);
  if (old)
   return (sys_link(old, collected) < 0) ? -1 : 1;
 }
 return 0;
}

static __attribute__ ((__section__ (".init.data"))) int wfd;

static int __attribute__ ((__section__ (".init.text"))) do_name(void)
{
 state = SkipIt;
 next_state = Reset;
 if (strcmp(collected, "TRAILER!!!") == 0) {
  free_hash();
  return 0;
 }
 if (dry_run)
  return 0;
 if ((((mode) & 00170000) == 0100000)) {
  if (maybe_link() >= 0) {
   wfd = sys_open(collected, 00000001|0x0100, mode);
   if (wfd >= 0) {
    sys_fchown(wfd, uid, gid);
    sys_fchmod(wfd, mode);
    state = CopyFile;
   }
  }
 } else if ((((mode) & 00170000) == 0040000)) {
  sys_mkdir(collected, mode);
  sys_chown(collected, uid, gid);
  sys_chmod(collected, mode);
 } else if ((((mode) & 00170000) == 0060000) || (((mode) & 00170000) == 0020000) ||
     (((mode) & 00170000) == 0010000) || (((mode) & 00170000) == 0140000)) {
  if (maybe_link() == 0) {
   sys_mknod(collected, mode, rdev);
   sys_chown(collected, uid, gid);
   sys_chmod(collected, mode);
  }
 }
 return 0;
}

static int __attribute__ ((__section__ (".init.text"))) do_copy(void)
{
 if (count >= body_len) {
  sys_write(wfd, victim, body_len);
  sys_close(wfd);
  eat(body_len);
  state = SkipIt;
  return 0;
 } else {
  sys_write(wfd, victim, count);
  body_len -= count;
  eat(count);
  return 1;
 }
}

static int __attribute__ ((__section__ (".init.text"))) do_symlink(void)
{
 collected[((((name_len) + 1) & ~3) + 2) + body_len] = '\0';
 sys_symlink(collected + ((((name_len) + 1) & ~3) + 2), collected);
 sys_lchown(collected, uid, gid);
 state = SkipIt;
 next_state = Reset;
 return 0;
}

static __attribute__ ((__section__ (".init.data"))) int (*actions[])(void) = {
 [Start] = do_start,
 [Collect] = do_collect,
 [GotHeader] = do_header,
 [SkipIt] = do_skip,
 [GotName] = do_name,
 [CopyFile] = do_copy,
 [GotSymlink] = do_symlink,
 [Reset] = do_reset,
};

static int __attribute__ ((__section__ (".init.text"))) write_buffer(char *buf, unsigned len)
{
 count = len;
 victim = buf;

 while (!actions[state]())
  ;
 return len - count;
}

static void __attribute__ ((__section__ (".init.text"))) flush_buffer(char *buf, unsigned len)
{
 int written;
 if (message)
  return;
 while ((written = write_buffer(buf, len)) < len && !message) {
  char c = buf[written];
  if (c == '0') {
   buf += written;
   len -= written;
   state = Start;
  } else if (c == 0) {
   buf += written;
   len -= written;
   state = Reset;
  } else
   error("junk in compressed archive");
 }
}
# 352 "init/initramfs.c"
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;




static uch *inbuf;
static uch *window;

static unsigned insize;
static unsigned inptr;
static unsigned outcnt;
static long bytes_out;
# 380 "init/initramfs.c"
static void __attribute__ ((__section__ (".init.text"))) flush_window(void);
static void __attribute__ ((__section__ (".init.text"))) error(char *m);
static void __attribute__ ((__section__ (".init.text"))) gzip_mark(void **);
static void __attribute__ ((__section__ (".init.text"))) gzip_release(void **);

# 1 "init/../lib/inflate.c" 1
# 135 "init/../lib/inflate.c"
struct huft {
  uch e;
  uch b;
  union {
    ush n;
    struct huft *t;
  } v;
};



static int __attribute__ ((__section__ (".init.text"))) huft_build (unsigned *, unsigned, unsigned, const ush *, const ush *, struct huft **, int *);

static int __attribute__ ((__section__ (".init.text"))) huft_free (struct huft *);
static int __attribute__ ((__section__ (".init.text"))) inflate_codes (struct huft *, struct huft *, int, int);
static int __attribute__ ((__section__ (".init.text"))) inflate_stored (void);
static int __attribute__ ((__section__ (".init.text"))) inflate_fixed (void);
static int __attribute__ ((__section__ (".init.text"))) inflate_dynamic (void);
static int __attribute__ ((__section__ (".init.text"))) inflate_block (int *);
static int __attribute__ ((__section__ (".init.text"))) inflate (void);
# 170 "init/../lib/inflate.c"
static const unsigned border[] = {
        16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};
static const ush cplens[] = {
        3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31,
        35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0};

static const ush cplext[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
        3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 99, 99};
static const ush cpdist[] = {
        1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193,
        257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145,
        8193, 12289, 16385, 24577};
static const ush cpdext[] = {
        0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6,
        7, 7, 8, 8, 9, 9, 10, 10, 11, 11,
        12, 12, 13, 13};
# 220 "init/../lib/inflate.c"
static ulg bb;
static unsigned bk;

static const ush mask_bits[] = {
    0x0000,
    0x0001, 0x0003, 0x0007, 0x000f, 0x001f, 0x003f, 0x007f, 0x00ff,
    0x01ff, 0x03ff, 0x07ff, 0x0fff, 0x1fff, 0x3fff, 0x7fff, 0xffff
};
# 267 "init/../lib/inflate.c"
static const int lbits = 9;
static const int dbits = 6;







static unsigned hufts;


static int __attribute__ ((__section__ (".init.text"))) huft_build(
 unsigned *b,
 unsigned n,
 unsigned s,
 const ush *d,
 const ush *e,
 struct huft **t,
 int *m
 )





{
  unsigned a;
  unsigned c[16 +1];
  unsigned f;
  int g;
  int h;
  register unsigned i;
  register unsigned j;
  register int k;
  int l;
  register unsigned *p;
  register struct huft *q;
  struct huft r;
  struct huft *u[16];
  unsigned v[288];
  register int w;
  unsigned x[16 +1];
  unsigned *xp;
  int y;
  unsigned z;

;


  memset ((c), 0, (sizeof(c)));
  p = b; i = n;
  do {
    ;

    c[*p]++;
    p++;
  } while (--i);
  if (c[0] == n)
  {
    *t = (struct huft *)((void *)0);
    *m = 0;
    return 2;
  }

;


  l = *m;
  for (j = 1; j <= 16; j++)
    if (c[j])
      break;
  k = j;
  if ((unsigned)l < j)
    l = j;
  for (i = 16; i; i--)
    if (c[i])
      break;
  g = i;
  if ((unsigned)l > i)
    l = i;
  *m = l;

;


  for (y = 1 << j; j < i; j++, y <<= 1)
    if ((y -= c[j]) < 0)
      return 2;
  if ((y -= c[i]) < 0)
    return 2;
  c[i] += y;

;


  x[1] = j = 0;
  p = c + 1; xp = x + 2;
  while (--i) {
    *xp++ = (j += *p++);
  }

;


  p = b; i = 0;
  do {
    if ((j = *p++) != 0)
      v[x[j]++] = i;
  } while (++i < n);
  n = x[g];

;


  x[0] = i = 0;
  p = v;
  h = -1;
  w = -l;
  u[0] = (struct huft *)((void *)0);
  q = (struct huft *)((void *)0);
  z = 0;
;


  for (; k <= g; k++)
  {
;
    a = c[k];
    while (a--)
    {
;


      while (k > w + l)
      {
;
        h++;
        w += l;


        z = (z = g - w) > (unsigned)l ? l : z;
        if ((f = 1 << (j = k - w)) > a + 1)
        {
;
          f -= a + 1;
          xp = c + k;
          if (j < z)
            while (++j < z)
            {
              if ((f <<= 1) <= *++xp)
                break;
              f -= *xp;
            }
        }
;
        z = 1 << j;


        if ((q = (struct huft *)malloc((z + 1)*sizeof(struct huft))) ==
            (struct huft *)((void *)0))
        {
          if (h)
            huft_free(u[0]);
          return 3;
        }
;
        hufts += z + 1;
        *t = q + 1;
        *(t = &(q->v.t)) = (struct huft *)((void *)0);
        u[h] = ++q;

;

        if (h)
        {
          x[h] = i;
          r.b = (uch)l;
          r.e = (uch)(16 + j);
          r.v.t = q;
          j = i >> (w - l);
          u[h-1][j] = r;
        }
;
      }
;


      r.b = (uch)(k - w);
      if (p >= v + n)
        r.e = 99;
      else if (*p < s)
      {
        r.e = (uch)(*p < 256 ? 16 : 15);
        r.v.n = (ush)(*p);
 p++;
      }
      else
      {
        r.e = (uch)e[*p - s];
        r.v.n = d[*p++ - s];
      }
;


      f = 1 << (k - w);
      for (j = i >> w; j < z; j += f)
        q[j] = r;


      for (j = 1 << (k - 1); i & j; j >>= 1)
        i ^= j;
      i ^= j;


      while ((i & ((1 << w) - 1)) != x[h])
      {
        h--;
        w -= l;
      }
;
    }
;
  }

;


  return y != 0 && g != 1;
}



static int __attribute__ ((__section__ (".init.text"))) huft_free(
 struct huft *t
 )



{
  register struct huft *p, *q;



  p = t;
  while (p != (struct huft *)((void *)0))
  {
    q = (--p)->v.t;
    free((char*)p);
    p = q;
  }
  return 0;
}


static int __attribute__ ((__section__ (".init.text"))) inflate_codes(
 struct huft *tl,
 struct huft *td,
 int bl,
 int bd
 )


{
  register unsigned e;
  unsigned n, d;
  unsigned w;
  struct huft *t;
  unsigned ml, md;
  register ulg b;
  register unsigned k;



  b = bb;
  k = bk;
  w = outcnt;


  ml = mask_bits[bl];
  md = mask_bits[bd];
  for (;;)
  {
    {while(k<((unsigned)bl)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
    if ((e = (t = tl + ((unsigned)b & ml))->e) > 16)
      do {
        if (e == 99)
          return 1;
        {b>>=(t->b);k-=(t->b);}
        e -= 16;
        {while(k<(e)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      } while ((e = (t = t->v.t + ((unsigned)b & mask_bits[e]))->e) > 16);
    {b>>=(t->b);k-=(t->b);}
    if (e == 16)
    {
      window[w++] = (uch)t->v.n;
      ;
      if (w == 0x8000)
      {
        (outcnt=(w),flush_window());
        w = 0;
      }
    }
    else
    {

      if (e == 15)
        break;


      {while(k<(e)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      n = t->v.n + ((unsigned)b & mask_bits[e]);
      {b>>=(e);k-=(e);};


      {while(k<((unsigned)bd)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      if ((e = (t = td + ((unsigned)b & md))->e) > 16)
        do {
          if (e == 99)
            return 1;
          {b>>=(t->b);k-=(t->b);}
          e -= 16;
          {while(k<(e)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
        } while ((e = (t = t->v.t + ((unsigned)b & mask_bits[e]))->e) > 16);
      {b>>=(t->b);k-=(t->b);}
      {while(k<(e)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      d = w - t->v.n - ((unsigned)b & mask_bits[e]);
      {b>>=(e);k-=(e);}
      ;


      do {
        n -= (e = (e = 0x8000 - ((d &= 0x8000 -1) > w ? d : w)) > n ? n : e);

        if (w - d >= e)
        {
          memcpy(window + w, window + d, e);
          w += e;
          d += e;
        }
        else

          do {
            window[w++] = window[d++];
     ;
          } while (--e);
        if (w == 0x8000)
        {
          (outcnt=(w),flush_window());
          w = 0;
        }
      } while (n);
    }
  }



  outcnt = w;
  bb = b;
  bk = k;


  return 0;

 underrun:
  return 4;
}



static int __attribute__ ((__section__ (".init.text"))) inflate_stored(void)

{
  unsigned n;
  unsigned w;
  register ulg b;
  register unsigned k;

;


  b = bb;
  k = bk;
  w = outcnt;



  n = k & 7;
  {b>>=(n);k-=(n);};



  {while(k<(16)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  n = ((unsigned)b & 0xffff);
  {b>>=(16);k-=(16);}
  {while(k<(16)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  if (n != (unsigned)((~b) & 0xffff))
    return 1;
  {b>>=(16);k-=(16);}



  while (n--)
  {
    {while(k<(8)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
    window[w++] = (uch)b;
    if (w == 0x8000)
    {
      (outcnt=(w),flush_window());
      w = 0;
    }
    {b>>=(8);k-=(8);}
  }



  outcnt = w;
  bb = b;
  bk = k;

  ;
  return 0;

 underrun:
  return 4;
}





static int __attribute__((noinline)) __attribute__ ((__section__ (".init.text"))) inflate_fixed(void)



{
  int i;
  struct huft *tl;
  struct huft *td;
  int bl;
  int bd;
  unsigned l[288];

;


  for (i = 0; i < 144; i++)
    l[i] = 8;
  for (; i < 256; i++)
    l[i] = 9;
  for (; i < 280; i++)
    l[i] = 7;
  for (; i < 288; i++)
    l[i] = 8;
  bl = 7;
  if ((i = huft_build(l, 288, 257, cplens, cplext, &tl, &bl)) != 0)
    return i;



  for (i = 0; i < 30; i++)
    l[i] = 5;
  bd = 5;
  if ((i = huft_build(l, 30, 0, cpdist, cpdext, &td, &bd)) > 1)
  {
    huft_free(tl);

    ;
    return i;
  }



  if (inflate_codes(tl, td, bl, bd))
    return 1;



  huft_free(tl);
  huft_free(td);
  return 0;
}





static int __attribute__((noinline)) __attribute__ ((__section__ (".init.text"))) inflate_dynamic(void)

{
  int i;
  unsigned j;
  unsigned l;
  unsigned m;
  unsigned n;
  struct huft *tl;
  struct huft *td;
  int bl;
  int bd;
  unsigned nb;
  unsigned nl;
  unsigned nd;



  unsigned ll[286+30];

  register ulg b;
  register unsigned k;

;


  b = bb;
  k = bk;



  {while(k<(5)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  nl = 257 + ((unsigned)b & 0x1f);
  {b>>=(5);k-=(5);}
  {while(k<(5)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  nd = 1 + ((unsigned)b & 0x1f);
  {b>>=(5);k-=(5);}
  {while(k<(4)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  nb = 4 + ((unsigned)b & 0xf);
  {b>>=(4);k-=(4);}



  if (nl > 286 || nd > 30)

    return 1;

;


  for (j = 0; j < nb; j++)
  {
    {while(k<(3)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
    ll[border[j]] = (unsigned)b & 7;
    {b>>=(3);k-=(3);}
  }
  for (; j < 19; j++)
    ll[border[j]] = 0;

;


  bl = 7;
  if ((i = huft_build(ll, 19, 19, ((void *)0), ((void *)0), &tl, &bl)) != 0)
  {
    if (i == 1)
      huft_free(tl);
    return i;
  }

;


  n = nl + nd;
  m = mask_bits[bl];
  i = l = 0;
  while ((unsigned)i < n)
  {
    {while(k<((unsigned)bl)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
    j = (td = tl + ((unsigned)b & m))->b;
    {b>>=(j);k-=(j);}
    j = td->v.n;
    if (j < 16)
      ll[i++] = l = j;
    else if (j == 16)
    {
      {while(k<(2)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      j = 3 + ((unsigned)b & 3);
      {b>>=(2);k-=(2);}
      if ((unsigned)i + j > n)
        return 1;
      while (j--)
        ll[i++] = l;
    }
    else if (j == 17)
    {
      {while(k<(3)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      j = 3 + ((unsigned)b & 7);
      {b>>=(3);k-=(3);}
      if ((unsigned)i + j > n)
        return 1;
      while (j--)
        ll[i++] = 0;
      l = 0;
    }
    else
    {
      {while(k<(7)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
      j = 11 + ((unsigned)b & 0x7f);
      {b>>=(7);k-=(7);}
      if ((unsigned)i + j > n)
        return 1;
      while (j--)
        ll[i++] = 0;
      l = 0;
    }
  }

;


  huft_free(tl);

;


  bb = b;
  bk = k;

;


  bl = lbits;
  if ((i = huft_build(ll, nl, 257, cplens, cplext, &tl, &bl)) != 0)
  {
;
    if (i == 1) {
      error("incomplete literal tree");
      huft_free(tl);
    }
    return i;
  }
;
  bd = dbits;
  if ((i = huft_build(ll + nl, nd, 0, cpdist, cpdext, &td, &bd)) != 0)
  {
;
    if (i == 1) {
      error("incomplete distance tree");




      huft_free(td);
    }
    huft_free(tl);
    return i;

  }

;


  if (inflate_codes(tl, td, bl, bd))
    return 1;

;


  huft_free(tl);
  huft_free(td);

  ;
  return 0;

 underrun:
  return 4;
}



static int __attribute__ ((__section__ (".init.text"))) inflate_block(
 int *e
 )

{
  unsigned t;
  register ulg b;
  register unsigned k;

  ;


  b = bb;
  k = bk;



  {while(k<(1)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  *e = (int)b & 1;
  {b>>=(1);k-=(1);}



  {while(k<(2)){b|=((ulg)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<k;k+=8;}}
  t = (unsigned)b & 3;
  {b>>=(2);k-=(2);}



  bb = b;
  bk = k;


  if (t == 2)
    return inflate_dynamic();
  if (t == 0)
    return inflate_stored();
  if (t == 1)
    return inflate_fixed();

  ;


  return 2;

 underrun:
  return 4;
}



static int __attribute__ ((__section__ (".init.text"))) inflate(void)

{
  int e;
  int r;
  unsigned h;
  void *ptr;


  outcnt = 0;
  bk = 0;
  bb = 0;



  h = 0;
  do {
    hufts = 0;
    gzip_mark(&ptr);
    if ((r = inflate_block(&e)) != 0) {
      gzip_release(&ptr);
      return r;
    }
    gzip_release(&ptr);
    if (hufts > h)
      h = hufts;
  } while (!e);




  while (bk >= 8) {
    bk -= 8;
    inptr--;
  }


  (outcnt=(outcnt),flush_window());






  return 0;
}







static ulg crc_32_tab[256];
static ulg crc;







static void __attribute__ ((__section__ (".init.text")))
makecrc(void)
{


  unsigned long c;
  unsigned long e;
  int i;
  int k;


  static const int p[] = {0,1,2,4,5,7,8,10,11,12,16,22,23,26};


  e = 0;
  for (i = 0; i < sizeof(p)/sizeof(int); i++)
    e |= 1L << (31 - p[i]);

  crc_32_tab[0] = 0;

  for (i = 1; i < 256; i++)
  {
    c = 0;
    for (k = i | 256; k != 1; k >>= 1)
    {
      c = c & 1 ? (c >> 1) ^ e : c >> 1;
      if (k & 1)
        c ^= e;
    }
    crc_32_tab[i] = c;
  }


  crc = (ulg)0xffffffffUL;
}
# 1096 "init/../lib/inflate.c"
static int __attribute__ ((__section__ (".init.text"))) gunzip(void)
{
    uch flags;
    unsigned char magic[2];
    char method;
    ulg orig_crc = 0;
    ulg orig_len = 0;
    int res;

    magic[0] = ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    magic[1] = ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    method = ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });

    if (magic[0] != 037 ||
 ((magic[1] != 0213) && (magic[1] != 0236))) {
     error("bad gzip magic numbers");
     return -1;
    }


    if (method != 8) {
     error("internal error, invalid method");
     return -1;
    }

    flags = (uch)(inptr < insize ? inbuf[inptr++] : -1);
    if ((flags & 0x20) != 0) {
     error("Input is encrypted");
     return -1;
    }
    if ((flags & 0x02) != 0) {
     error("Multi part input");
     return -1;
    }
    if ((flags & 0xC0) != 0) {
     error("Input has invalid flags");
     return -1;
    }
    ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });

    (void)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    (void)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });

    if ((flags & 0x04) != 0) {
     unsigned len = (unsigned)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
     len |= ((unsigned)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }))<<8;
     while (len--) (void)({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    }


    if ((flags & 0x08) != 0) {

     while (({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) != 0) ;
    }


    if ((flags & 0x10) != 0) {
     while (({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) != 0) ;
    }


    if ((res = inflate())) {
     switch (res) {
     case 0:
      break;
     case 1:
      error("invalid compressed format (err=1)");
      break;
     case 2:
      error("invalid compressed format (err=2)");
      break;
     case 3:
      error("out of memory");
      break;
     case 4:
      error("out of input data");
      break;
     default:
      error("invalid compressed format (other)");
     }
     return -1;
    }





    orig_crc = (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    orig_crc |= (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) << 8;
    orig_crc |= (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) << 16;
    orig_crc |= (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) << 24;

    orig_len = (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; });
    orig_len |= (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) << 8;
    orig_len |= (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) << 16;
    orig_len |= (ulg) ({ int v = (inptr < insize ? inbuf[inptr++] : -1); if (v < 0) goto underrun; (uch)v; }) << 24;


    if (orig_crc != (crc ^ 0xffffffffUL)) {
     error("crc error");
     return -1;
    }
    if (orig_len != bytes_out) {
     error("length error");
     return -1;
    }
    return 0;

 underrun:
    error("out of input data");
    return -1;
}
# 386 "init/initramfs.c" 2

static void __attribute__ ((__section__ (".init.text"))) gzip_mark(void **ptr)
{
}

static void __attribute__ ((__section__ (".init.text"))) gzip_release(void **ptr)
{
}





static void __attribute__ ((__section__ (".init.text"))) flush_window(void)
{
 ulg c = crc;
 unsigned n;
 uch *in, ch;

 flush_buffer(window, outcnt);
 in = window;
 for (n = 0; n < outcnt; n++) {
  ch = *in++;
  c = crc_32_tab[((int)c ^ ch) & 0xff] ^ (c >> 8);
 }
 crc = c;
 bytes_out += (ulg)outcnt;
 outcnt = 0;
}

static char * __attribute__ ((__section__ (".init.text"))) unpack_to_rootfs(char *buf, unsigned len, int check_only)
{
 int written;
 dry_run = check_only;
 header_buf = malloc(110);
 symlink_buf = malloc(4096 + ((((4096) + 1) & ~3) + 2) + 1);
 name_buf = malloc(((((4096) + 1) & ~3) + 2));
 window = malloc(0x8000);
 if (!window || !header_buf || !symlink_buf || !name_buf)
  panic("can't allocate buffers");
 state = Start;
 this_header = 0;
 message = ((void *)0);
 while (!message && len) {
  loff_t saved_offset = this_header;
  if (*buf == '0' && !(this_header & 3)) {
   state = Start;
   written = write_buffer(buf, len);
   buf += written;
   len -= written;
   continue;
  }
  if (!*buf) {
   buf++;
   len--;
   this_header++;
   continue;
  }
  this_header = 0;
  insize = len;
  inbuf = buf;
  inptr = 0;
  outcnt = 0;
  bytes_out = 0;
  crc = (ulg)0xffffffffL;
  makecrc();
  gunzip();
  if (state != Reset)
   error("junk in gzipped archive");
  this_header = saved_offset + inptr;
  buf += inptr;
  len -= inptr;
 }
 free(window);
 free(name_buf);
 free(symlink_buf);
 free(header_buf);
 return message;
}

extern char __initramfs_start[], __initramfs_end[];
# 479 "init/initramfs.c"
void __attribute__ ((__section__ (".init.text"))) populate_rootfs(void)
{
 char *err = unpack_to_rootfs(__initramfs_start,
    __initramfs_end - __initramfs_start, 0);
 if (err)
  panic(err);
# 508 "init/initramfs.c"
}
