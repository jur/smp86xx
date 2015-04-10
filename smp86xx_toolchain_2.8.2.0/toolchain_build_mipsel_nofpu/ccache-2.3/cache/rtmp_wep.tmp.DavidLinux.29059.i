# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
# 38 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 1
# 50 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h"
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 1
# 43 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h" 1
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/autoconf.h" 1
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 2



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/tango2/rmem86xxid.h" 1
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/tango2/emhwlib_registers_tango2.h" 1
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/linkage.h" 1
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hazards.h" 1
# 172 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hazards.h"
__asm__(
 "	.macro	_ssnop					\n\t"
 "	sll	$0, $2, 1				\n\t"
 "	.endm						\n\t"
 "							\n\t"
 "	#						\n\t"
 "	# There is a hazard but we do not care		\n\t"
 "	#						\n\t"
 "	.macro\tirq_enable_hazard			\n\t"
 "	.endm						\n\t"
 "							\n\t"
 "	.macro\tirq_disable_hazard			\n\t"
 "	_ssnop; _ssnop; _ssnop				\n\t"
 "	.endm");
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h" 2
# 886 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h"
static inline void tlb_probe(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbp\n\t"
  ".set reorder");
}

static inline void tlb_read(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbr\n\t"
  ".set reorder");
}

static inline void tlb_write_indexed(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbwi\n\t"
  ".set reorder");
}

static inline void tlb_write_random(void)
{
 __asm__ __volatile__(
  ".set noreorder\n\t"
  "tlbwr\n\t"
  ".set reorder");
}
# 959 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mipsregs.h"
static inline unsigned int set_c0_status(unsigned int set) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; } static inline unsigned int clear_c0_status(unsigned int clear) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; } static inline unsigned int change_c0_status(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$12" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$12" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$12" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$12" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; }
static inline unsigned int set_c0_cause(unsigned int set) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$13" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$13" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$13" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$13" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; } static inline unsigned int clear_c0_cause(unsigned int clear) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$13" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$13" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$13" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$13" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; } static inline unsigned int change_c0_cause(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$13" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$13" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$13" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$13" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; }
static inline unsigned int set_c0_config(unsigned int set) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$16" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$16" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res |= set; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$16" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$16" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; } static inline unsigned int clear_c0_config(unsigned int clear) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$16" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$16" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$16" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$16" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; } static inline unsigned int change_c0_config(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$16" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$16" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { if (0 == 0) __asm__ __volatile__( "mtc0\t%z0, " "$16" "\n\t" : : "Jr" (res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mtc0\t%z0, " "$16" ", " "0" "\n\t" ".set\tmips0" : : "Jr" (res)); } while (0); return res; }
static inline unsigned int set_c0_intcontrol(unsigned int set) { unsigned int res; res = ({ int __res; __asm__ __volatile__( "cfc0\t%0, " "$20" "\n\t" : "=r" (__res)); __res; }); res |= set; do { __asm__ __volatile__( "ctc0\t%z0, " "$20" "\n\t" : : "Jr" ((unsigned int)res)); } while (0); return res; } static inline unsigned int clear_c0_intcontrol(unsigned int clear) { unsigned int res; res = ({ int __res; __asm__ __volatile__( "cfc0\t%0, " "$20" "\n\t" : "=r" (__res)); __res; }); res &= ~clear; do { __asm__ __volatile__( "ctc0\t%z0, " "$20" "\n\t" : : "Jr" ((unsigned int)res)); } while (0); return res; } static inline unsigned int change_c0_intcontrol(unsigned int change, unsigned int new) { unsigned int res; res = ({ int __res; __asm__ __volatile__( "cfc0\t%0, " "$20" "\n\t" : "=r" (__res)); __res; }); res &= ~change; res |= (new & change); do { __asm__ __volatile__( "ctc0\t%z0, " "$20" "\n\t" : : "Jr" ((unsigned int)res)); } while (0); return res; }
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/addrspace.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/config.h" 2
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/compiler.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h" 1






# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sgidefs.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h" 1
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h"
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 1 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 105 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/stddef.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/posix_types.h" 1
# 36 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/posix_types.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/posix_types.h"
typedef unsigned int __kernel_dev_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef int __kernel_uid_t;
typedef int __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef long __kernel_daddr_t;
typedef char * __kernel_caddr_t;

typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef int __kernel_uid32_t;
typedef int __kernel_gid32_t;
typedef __kernel_uid_t __kernel_old_uid_t;
typedef __kernel_gid_t __kernel_old_gid_t;


typedef long long __kernel_loff_t;


typedef struct {
        long val[2];
} __kernel_fsid_t;




static __inline__ void __FD_SET(unsigned long __fd, __kernel_fd_set *__fdsetp)
{
 unsigned long __tmp = __fd / (8 * sizeof(unsigned long));
 unsigned long __rem = __fd % (8 * sizeof(unsigned long));
 __fdsetp->fds_bits[__tmp] |= (1UL<<__rem);
}


static __inline__ void __FD_CLR(unsigned long __fd, __kernel_fd_set *__fdsetp)
{
 unsigned long __tmp = __fd / (8 * sizeof(unsigned long));
 unsigned long __rem = __fd % (8 * sizeof(unsigned long));
 __fdsetp->fds_bits[__tmp] &= ~(1UL<<__rem);
}


static __inline__ int __FD_ISSET(unsigned long __fd, const __kernel_fd_set *__p)
{
 unsigned long __tmp = __fd / (8 * sizeof(unsigned long));
 unsigned long __rem = __fd % (8 * sizeof(unsigned long));
 return (__p->fds_bits[__tmp] & (1UL<<__rem)) != 0;
}






static __inline__ void __FD_ZERO(__kernel_fd_set *__p)
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
# 47 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/posix_types.h" 2
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/types.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/types.h"
typedef unsigned short umode_t;






typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;
# 38 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/types.h"
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
# 49 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/types.h"
typedef __signed char s8;
typedef unsigned char u8;

typedef __signed short s16;
typedef unsigned short u16;

typedef __signed int s32;
typedef unsigned int u32;
# 66 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/types.h"
typedef __signed__ long long s64;
typedef unsigned long long u64;
# 77 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/types.h"
typedef u32 dma_addr_t;

typedef u64 dma64_addr_t;




typedef unsigned long phys_t;
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h" 2



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


typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;
# 52 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h"
typedef __kernel_loff_t loff_t;
# 61 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h"
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
# 130 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/types.h"
struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/byteorder.h" 1
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/byteorder.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/little_endian.h" 1
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/little_endian.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/swab.h" 1
# 160 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/swab.h"
static __inline__ __u16 __fswab16(__u16 x)
{
 return ({ __u16 __tmp = (x) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__ __u16 __swab16p(__u16 *x)
{
 return ({ __u16 __tmp = (*(x)) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); });
}
static __inline__ void __swab16s(__u16 *addr)
{
 do { *(addr) = ({ __u16 __tmp = (*((addr))) ; ({ __u16 __x = (__tmp); ((__u16)( (((__u16)(__x) & (__u16)0x00ffU) << 8) | (((__u16)(__x) & (__u16)0xff00U) >> 8) )); }); }); } while (0);
}


static __inline__ __u32 __fswab24(__u32 x)
{
 return ({ __u32 __tmp = (x) ; ({ __u32 __x = (__tmp); ((__u32)( ((__x & (__u32)0x000000ffUL) << 16) | (__x & (__u32)0x0000ff00UL) | ((__x & (__u32)0x00ff0000UL) >> 16) )); }); });
}
static __inline__ __u32 __swab24p(__u32 *x)
{
 return ({ __u32 __tmp = (*(x)) ; ({ __u32 __x = (__tmp); ((__u32)( ((__x & (__u32)0x000000ffUL) << 16) | (__x & (__u32)0x0000ff00UL) | ((__x & (__u32)0x00ff0000UL) >> 16) )); }); });
}
static __inline__ void __swab24s(__u32 *addr)
{
 do { *(addr) = ({ __u32 __tmp = (*((addr))) ; ({ __u32 __x = (__tmp); ((__u32)( ((__x & (__u32)0x000000ffUL) << 16) | (__x & (__u32)0x0000ff00UL) | ((__x & (__u32)0x00ff0000UL) >> 16) )); }); }); } while (0);
}


static __inline__ __u32 __fswab32(__u32 x)
{
 return ({ __u32 __tmp = (x) ; ({ __u32 __x = (__tmp); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }); });
}
static __inline__ __u32 __swab32p(__u32 *x)
{
 return ({ __u32 __tmp = (*(x)) ; ({ __u32 __x = (__tmp); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }); });
}
static __inline__ void __swab32s(__u32 *addr)
{
 do { *(addr) = ({ __u32 __tmp = (*((addr))) ; ({ __u32 __x = (__tmp); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }); }); } while (0);
}



static __inline__ __u64 __fswab64(__u64 x)
{

 __u32 h = x >> 32;
        __u32 l = x & ((1ULL<<32)-1);
        return (((__u64)(__builtin_constant_p((__u32)(l)) ? ({ __u32 __x = ((l)); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }) : __fswab32((l)))) << 32) | ((__u64)((__builtin_constant_p((__u32)(h)) ? ({ __u32 __x = ((h)); ((__u32)( (((__u32)(__x) & (__u32)0x000000ffUL) << 24) | (((__u32)(__x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(__x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(__x) & (__u32)0xff000000UL) >> 24) )); }) : __fswab32((h)))));



}
static __inline__ __u64 __swab64p(__u64 *x)
{
 return ({ __u64 __tmp = (*(x)) ; ({ __u64 __x = (__tmp); ((__u64)( (__u64)(((__u64)(__x) & (__u64)0x00000000000000ffULL) << 56) | (__u64)(((__u64)(__x) & (__u64)0x000000000000ff00ULL) << 40) | (__u64)(((__u64)(__x) & (__u64)0x0000000000ff0000ULL) << 24) | (__u64)(((__u64)(__x) & (__u64)0x00000000ff000000ULL) << 8) | (__u64)(((__u64)(__x) & (__u64)0x000000ff00000000ULL) >> 8) | (__u64)(((__u64)(__x) & (__u64)0x0000ff0000000000ULL) >> 24) | (__u64)(((__u64)(__x) & (__u64)0x00ff000000000000ULL) >> 40) | (__u64)(((__u64)(__x) & (__u64)0xff00000000000000ULL) >> 56) )); }); });
}
static __inline__ void __swab64s(__u64 *addr)
{
 do { *(addr) = ({ __u64 __tmp = (*((addr))) ; ({ __u64 __x = (__tmp); ((__u64)( (__u64)(((__u64)(__x) & (__u64)0x00000000000000ffULL) << 56) | (__u64)(((__u64)(__x) & (__u64)0x000000000000ff00ULL) << 40) | (__u64)(((__u64)(__x) & (__u64)0x0000000000ff0000ULL) << 24) | (__u64)(((__u64)(__x) & (__u64)0x00000000ff000000ULL) << 8) | (__u64)(((__u64)(__x) & (__u64)0x000000ff00000000ULL) >> 8) | (__u64)(((__u64)(__x) & (__u64)0x0000ff0000000000ULL) >> 24) | (__u64)(((__u64)(__x) & (__u64)0x00ff000000000000ULL) >> 40) | (__u64)(((__u64)(__x) & (__u64)0xff00000000000000ULL) >> 56) )); }); }); } while (0);
}
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/little_endian.h" 2
# 82 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/little_endian.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/generic.h" 1
# 149 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/generic.h"
extern __u32 ntohl(__u32);
extern __u32 htonl(__u32);
extern unsigned short int ntohs(unsigned short int);
extern unsigned short int htons(unsigned short int);
# 83 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/byteorder/little_endian.h" 2
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/byteorder.h" 2
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h" 2
# 41 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h"
extern int console_printk[];
# 60 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h"
struct completion;

extern struct notifier_block *panic_notifier_list;
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2)));
 void do_exit(long error_code)
 __attribute__((noreturn));
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));
extern int abs(int);
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

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3)));
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0)));

extern int get_option(char **str, int *pint);
extern char *get_options(char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);
extern void dev_probe_lock(void);
extern void dev_probe_unlock(void);

extern int session_of_pgrp(int pgrp);

int the_REAL_printk(const char * fmt, ...);

static inline void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern int oops_in_progress;

extern int tainted;
extern const char *print_tainted(void);

extern void dump_stack(void);
# 178 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kernel.h"
extern void __out_of_line_bug(int line) __attribute__((noreturn));





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
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h" 2


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ptrace.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ptrace.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/isadep.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ptrace.h" 2
# 32 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ptrace.h"
struct pt_regs {

 unsigned long pad0[6];


 unsigned long regs[32];


 unsigned long cp0_status;
 unsigned long lo;
 unsigned long hi;
 unsigned long cp0_badvaddr;
 unsigned long cp0_cause;
 unsigned long cp0_epc;
};
# 101 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ptrace.h"
extern void show_regs(struct pt_regs *);
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h" 2

__asm__ (
 ".macro\t__sti\n\t"
 ".set\tpush\n\t"
 ".set\treorder\n\t"
 ".set\tnoat\n\t"
 "mfc0\t$1,$12\n\t"
 "ori\t$1,0x1f\n\t"
 "xori\t$1,0x1e\n\t"
 "mtc0\t$1,$12\n\t"
 ".set\tpop\n\t"
 ".endm");

static __inline__ void
__sti(void)
{
 __asm__ __volatile__(
  "__sti"
  :
  :
  : "memory");
}
# 52 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
__asm__ (
 ".macro\t__cli\n\t"
 ".set\tpush\n\t"
 ".set\tnoat\n\t"
 "mfc0\t$1,$12\n\t"
 "ori\t$1,1\n\t"
 "xori\t$1,1\n\t"
 ".set\tnoreorder\n\t"
 "mtc0\t$1,$12\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 ".set\tpop\n\t"
 ".endm");

static __inline__ void
__cli(void)
{
 __asm__ __volatile__(
  "__cli"
  :
  :
  : "memory");
}

__asm__ (
 ".macro\t__save_flags flags\n\t"
 ".set\tpush\n\t"
 ".set\treorder\n\t"
 "mfc0\t\\flags, $12\n\t"
 ".set\tpop\n\t"
 ".endm");






__asm__ (
 ".macro\t__save_and_cli result\n\t"
 ".set\tpush\n\t"
 ".set\treorder\n\t"
 ".set\tnoat\n\t"
 "mfc0\t\\result, $12\n\t"
 "ori\t$1, \\result, 1\n\t"
 "xori\t$1, 1\n\t"
 ".set\tnoreorder\n\t"
 "mtc0\t$1, $12\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 ".set\tpop\n\t"
 ".endm");
# 113 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
__asm__ (
 ".macro\t__save_and_sti result\n\t"
 ".set\tpush\n\t"
 ".set\treorder\n\t"
 ".set\tnoat\n\t"
 "mfc0\t\\result, $12\n\t"
 "ori\t$1, \\result, 1\n\t"
 ".set\tnoreorder\n\t"
 "mtc0\t$1, $12\n\t"
 ".set\tpop\n\t"
 ".endm");
# 132 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
__asm__(".macro\t__restore_flags flags\n\t"
 ".set\tnoreorder\n\t"
 ".set\tnoat\n\t"
 "mfc0\t$1, $12\n\t"
 "andi\t\\flags, 1\n\t"
 "ori\t$1, 1\n\t"
 "xori\t$1, 1\n\t"
 "or\t\\flags, $1\n\t"
 "mtc0\t\\flags, $12\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 "sll\t$0, $0, 1\t\t\t# nop\n\t"
 ".set\tat\n\t"
 ".set\treorder\n\t"
 ".endm");
# 263 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
extern void *resume(void *last, void *next);



struct task_struct;
# 278 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
static __inline__ unsigned long xchg_u32(volatile int * m, unsigned long val)
{

 unsigned long dummy;

 __asm__ __volatile__(
  ".set\tpush\t\t\t\t# xchg_u32\n\t"
  ".set\tnoreorder\n\t"
  ".set\tnomacro\n\t"
  "ll\t%0, %3\n"
  "1:\tmove\t%2, %z4\n\t"
  "sc\t%2, %1\n\t"
  "beqzl\t%2, 1b\n\t"
  " ll\t%0, %3\n\t"
  "sync\n\t"
  ".set\tpop"
  : "=&r" (val), "=m" (*m), "=&r" (dummy)
  : "R" (*m), "Jr" (val)
  : "memory");

 return val;
# 308 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/system.h"
}




static __inline__ unsigned long
__xchg(unsigned long x, volatile void * ptr, int size)
{
 switch (size) {
  case 4:
   return xchg_u32(ptr, x);
 }
 return x;
}

extern void *set_except_vector(int n, void *addr);
extern void per_cpu_trap_init(void);

extern void __die(const char *, struct pt_regs *, const char *file,
 const char *func, unsigned long line) __attribute__((noreturn));
extern void __die_if_kernel(const char *, struct pt_regs *, const char *file,
 const char *func, unsigned long line);






extern __inline__ int intr_on(void)
{
 unsigned long flags;
 __asm__ __volatile__( "__save_flags %0" : "=r" (flags));
 return flags & 1;
}

extern __inline__ int intr_off(void)
{
 return ! intr_on();
}
# 8 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/current.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/current.h"
register struct task_struct *current asm("$28");
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h" 2
# 44 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/stringify.h" 1
# 45 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h" 2
# 81 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h"
  typedef struct { } spinlock_t;
# 145 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h"
  typedef struct { } rwlock_t;
# 162 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h"
int preempt_get_count(void);
int preempt_get_resched(void);
void inc_preempt_count(struct task_struct *task);
void dec_preempt_count(struct task_struct *task);
# 231 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/atomic.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/atomic.h"
typedef struct { volatile int counter; } atomic_t;
# 127 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/atomic.h"
static __inline__ void atomic_add(int i, atomic_t * v)
{
 unsigned long temp;

 __asm__ __volatile__(
  "1:   ll      %0, %1      # atomic_add\n"
  "     addu    %0, %2                  \n"
  "     sc      %0, %1                  \n"
  "     beqz    %0, 1b                  \n"
  : "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter));
}
# 148 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/atomic.h"
static __inline__ void atomic_sub(int i, atomic_t * v)
{
 unsigned long temp;

 __asm__ __volatile__(
  "1:   ll      %0, %1      # atomic_sub\n"
  "     subu    %0, %2                  \n"
  "     sc      %0, %1                  \n"
  "     beqz    %0, 1b                  \n"
  : "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter));
}




static __inline__ int atomic_add_return(int i, atomic_t * v)
{
 unsigned long temp, result;

 __asm__ __volatile__(
  ".set push               # atomic_add_return\n"
  ".set noreorder                             \n"
  "1:   ll      %1, %2                        \n"
  "     addu    %0, %1, %3                    \n"
  "     sc      %0, %2                        \n"
  "     beqz    %0, 1b                        \n"
  "     addu    %0, %1, %3                    \n"
  "     sync                                  \n"
  ".set pop                                   \n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");

 return result;
}

static __inline__ int atomic_sub_return(int i, atomic_t * v)
{
 unsigned long temp, result;

 __asm__ __volatile__(
  ".set push                                   \n"
  ".set noreorder           # atomic_sub_return\n"
  "1:   ll    %1, %2                           \n"
  "     subu  %0, %1, %3                       \n"
  "     sc    %0, %2                           \n"
  "     beqz  %0, 1b                           \n"
  "     subu  %0, %1, %3                       \n"
  "     sync                                   \n"
  ".set pop                                    \n"
  : "=&r" (result), "=&r" (temp), "=m" (v->counter)
  : "Ir" (i), "m" (v->counter)
  : "memory");

 return result;
}
# 232 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h" 2
extern int atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 245 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/spinlock.h"
typedef struct {
    spinlock_t lock;
} spinlock_cacheline_t;
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h" 1





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/prefetch.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/prefetch.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/cache.h" 1




# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/cache.h" 1
# 6 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/cache.h" 2
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/isadep.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2







# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smp.h" 1
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/threads.h" 1
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/cachectl.h" 1
# 28 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/cpu.h" 1
# 29 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/reg.h" 1
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h" 2





struct cache_desc {
 unsigned short linesz;
 unsigned short ways;
 unsigned short sets;
 unsigned int waysize;
 unsigned int waybit;
 unsigned int flags;
};
# 53 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h"
struct cpuinfo_mips {
 unsigned long udelay_val;
 unsigned long *pgd_quick;
 unsigned long *pte_quick;
 unsigned long pgtable_cache_sz;
 unsigned long asid_cache;



 unsigned long options;
 unsigned int processor_id;
 unsigned int fpu_id;
 unsigned int cputype;
 int isa_level;
 int tlbsize;
 struct cache_desc icache;
 struct cache_desc dcache;
 struct cache_desc scache;
 struct cache_desc tcache;
} __attribute__((aligned(16)));
# 108 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h"
extern struct cpuinfo_mips cpu_data[];


extern void cpu_probe(void);
extern void cpu_report(void);




extern void (*cpu_wait)(void);

extern unsigned int vced_count, vcei_count;
# 153 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h"
struct mips_fpu_hard_struct {
 double fp_regs[32];
 unsigned int control;
};







typedef u64 fpureg_t;
struct mips_fpu_soft_struct {
 fpureg_t regs[32];
 unsigned int sr;
};

union mips_fpu_union {
        struct mips_fpu_hard_struct hard;
        struct mips_fpu_soft_struct soft;
};





typedef struct {
 unsigned long seg;
} mm_segment_t;




struct thread_struct {

 unsigned long reg16;
 unsigned long reg17, reg18, reg19, reg20, reg21, reg22, reg23;
 unsigned long reg29, reg30, reg31;


 unsigned long cp0_status;


 union mips_fpu_union fpu;


 unsigned long cp0_badvaddr;
 unsigned long cp0_baduaddr;
 unsigned long error_code;
 unsigned long trap_no;


 unsigned long mflags;
 mm_segment_t current_ds;
 unsigned long irix_trampoline;
 unsigned long irix_oldctx;
};
# 246 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/processor.h"
extern int arch_kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);





struct mips_frame_info {
 int frame_offset;
 int pc_offset;
};
extern struct mips_frame_info schedule_frame;



static inline unsigned long thread_saved_pc(struct thread_struct *t)
{
 extern void ret_from_fork(void);


 if (t->reg31 == (unsigned long) ret_from_fork)
  return t->reg31;

 if (schedule_frame.pc_offset < 0)
  return 0;
 return ((unsigned long *)t->reg29)[schedule_frame.pc_offset];
}




extern void start_thread(struct pt_regs * regs, unsigned long pc, unsigned long sp);

struct task_struct;
unsigned long get_wchan(struct task_struct *p);
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/prefetch.h" 2
# 43 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/prefetch.h"
static inline void prefetch(const void *x) {;}




static inline void prefetchw(const void *x) {;}
# 7 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h" 2
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};
# 37 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h"
static inline void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 55 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h"
static inline void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 68 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h"
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 80 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h"
static inline void __list_del(struct list_head *prev, struct list_head *next)
{
 next->prev = prev;
 prev->next = next;
}






static inline void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = (void *) 0;
 entry->prev = (void *) 0;
}





static inline void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 do { (entry)->next = (entry); (entry)->prev = (entry); } while (0);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
      struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}





static inline int list_empty(struct list_head *head)
{
 return head->next == head;
}

static inline void __list_splice(struct list_head *list,
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






static inline void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 172 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/list.h"
static inline void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  do { (list)->next = (list); (list)->prev = (list); } while (0);
 }
}
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h" 2
# 29 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h"
struct exception_table_entry;


struct kernel_sym
{
 unsigned long value;
 char name[60];
};

struct module_symbol
{
 unsigned long value;
 const char *name;
};

struct module_ref
{
 struct module *dep;
 struct module *ref;
 struct module_ref *next_ref;
};


struct module_persist;

struct module
{
 unsigned long size_of_struct;
 struct module *next;
 const char *name;
 unsigned long size;

 union
 {
  atomic_t usecount;
  long pad;
 } uc;

 unsigned long flags;

 unsigned nsyms;
 unsigned ndeps;

 struct module_symbol *syms;
 struct module_ref *deps;
 struct module_ref *refs;
 int (*init)(void);
 void (*cleanup)(void);
 const struct exception_table_entry *ex_table_start;
 const struct exception_table_entry *ex_table_end;






 const struct module_persist *persist_start;
 const struct module_persist *persist_end;
 int (*can_unload)(void);
 int runsize;
 const char *kallsyms_start;
 const char *kallsyms_end;
 const char *archdata_start;
 const char *archdata_end;
 const char *kernel_data;
};

struct module_info
{
 unsigned long addr;
 unsigned long size;
 unsigned long flags;
 long usecount;
};
# 184 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h"
extern void inter_module_register(const char *, struct module *, const void *);
extern void inter_module_unregister(const char *);
extern const void *inter_module_get(const char *);
extern const void *inter_module_get_request(const char *, const char *);
extern void inter_module_put(const char *);

struct inter_module_entry {
 struct list_head list;
 const char *im_name;
 struct module *owner;
 const void *userdata;
};

extern int try_inc_mod_count(struct module *mod);
# 292 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h"
extern struct module __this_module;






# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/version.h" 1
# 300 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/module.h" 2
static const char __module_kernel_version[] __attribute__((__used__)) __attribute__((section(".modinfo"))) =
"kernel_version=" "2.4.30-tango2-2.8.0.1";
# 44 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/version.h" 1
# 45 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/init.h" 1
# 132 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/init.h"
typedef int (*__init_module_func_t)(void);
typedef void (*__cleanup_module_func_t)(void);
# 49 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/string.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/string.h"
extern char * ___strtok;
extern char * strpbrk(const char *,const char *);
extern char * strtok(char *,const char *);
extern char * strsep(char **,const char *);
extern __kernel_size_t strspn(const char *,const char *);





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/string.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/string.h"
static __inline__ char *strcpy(char *__dest, __const__ char *__src)
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


static __inline__ char *strncpy(char *__dest, __const__ char *__src, size_t __n)
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


static __inline__ int strcmp(__const__ char *__cs, __const__ char *__ct)
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


static __inline__ int
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





static __inline__ void *memscan(void *__addr, int __c, size_t __size)
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
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/string.h" 2
# 35 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/string.h"
extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);
# 47 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/string.h"
extern int strnicmp(const char *, const char *, __kernel_size_t);


extern char * strchr(const char *,int);


extern char * strrchr(const char *,int);


extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);
# 78 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/string.h"
extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);
# 50 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timer.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timer.h"
struct timer_list {
 struct list_head list;
 unsigned long expires;
 unsigned long data;
 void (*function)(unsigned long);
};

extern void add_timer(struct timer_list * timer);
extern int del_timer(struct timer_list * timer);
# 41 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timer.h"
int mod_timer(struct timer_list *timer, unsigned long expires);

extern void it_real_fn(unsigned long);

static inline void init_timer(struct timer_list * timer)
{
 timer->list.next = timer->list.prev = ((void *)0);
}

static inline int timer_pending (const struct timer_list * timer)
{
 return timer->list.next != ((void *)0);
}
# 51 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/errno.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/errno.h" 1
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/errno.h" 2
# 52 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/slab.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/slab.h"
typedef struct kmem_cache_s kmem_cache_t;

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/param.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/param.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/compiler.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/param.h" 2
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2

extern unsigned long event;


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/binfmts.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ptrace.h" 1
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/binfmts.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 1
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/limits.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/break.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h" 2
# 35 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/cacheflush.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/cacheflush.h"
struct mm_struct;
struct vm_area_struct;
struct page;
# 33 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/cacheflush.h"
extern void (*_flush_cache_all)(void);
extern void (*___flush_cache_all)(void);
extern void (*_flush_cache_mm)(struct mm_struct *mm);
extern void (*_flush_cache_range)(struct mm_struct *mm, unsigned long start,
 unsigned long end);
extern void (*_flush_cache_page)(struct vm_area_struct *vma,
 unsigned long page);
extern void flush_dcache_page(struct page * page);
extern void (*_flush_icache_range)(unsigned long start, unsigned long end);
extern void (*_flush_icache_page)(struct vm_area_struct *vma,
 struct page *page);

extern void (*_flush_cache_sigtramp)(unsigned long addr);
extern void (*_flush_icache_all)(void);
extern void (*_flush_data_cache_page)(unsigned long addr);
# 36 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h" 2
# 45 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h"
extern void clear_page(void * page);
extern void copy_page(void * to, void * from);

extern unsigned long shm_align_mask;

static inline unsigned long pages_do_alias(unsigned long addr1,
 unsigned long addr2)
{
 return (addr1 ^ addr2) & shm_align_mask;
}

static inline void clear_user_page(void *page, unsigned long vaddr)
{
 unsigned long kaddr = (unsigned long) page;

 clear_page(page);
 if (pages_do_alias(kaddr, vaddr))
  _flush_data_cache_page(kaddr);
}

static inline void copy_user_page(void * to, void * from, unsigned long vaddr)
{
 unsigned long kto = (unsigned long) to;

 copy_page(to, from);
 if (pages_do_alias(kto, vaddr))
  _flush_data_cache_page(kto);
}
# 86 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h"
typedef struct { unsigned long pte_low; } pte_t;



typedef struct { unsigned long pmd; } pmd_t;
typedef struct { unsigned long pgd; } pgd_t;
typedef struct { unsigned long pgprot; } pgprot_t;
# 106 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/page.h"
static __inline__ int get_order(unsigned long size)
{
 int order;

 size = (size-1) >> (12 -1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 20 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h" 2
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h"
struct __wait_queue {
 unsigned int flags;

 struct task_struct * task;
 struct list_head task_list;




};
typedef struct __wait_queue wait_queue_t;
# 77 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h"
struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;




};
typedef struct __wait_queue_head wait_queue_head_t;
# 155 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h"
static inline void init_waitqueue_head(wait_queue_head_t *q)
{




 q->lock = (spinlock_t) { };
 do { (&q->task_list)->next = (&q->task_list); (&q->task_list)->prev = (&q->task_list); } while (0);




}

static inline void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{




 q->flags = 0;
 q->task = p;



}

static inline int waitqueue_active(wait_queue_head_t *q)
{






 return !list_empty(&q->task_list);
}

static inline void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
# 203 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h"
 list_add(&new->task_list, &head->task_list);
}




static inline void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
# 220 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wait.h"
 list_add_tail(&new->task_list, &head->task_list);
}

static inline void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{





 list_del(&old->task_list);
}
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/vfs.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/statfs.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/statfs.h"
typedef __kernel_fsid_t fsid_t;



struct statfs {
 long f_type;

 long f_bsize;
 long f_frsize;
 long f_blocks;
 long f_bfree;
 long f_files;
 long f_ffree;


 long f_bavail;
 __kernel_fsid_t f_fsid;
 long f_namelen;
 long f_spare[6];
};
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/vfs.h" 2
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/net.h" 1
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/net.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h" 1
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h"
struct __kernel_sockaddr_storage {
 unsigned short ss_family;

 char __data[128 - sizeof(unsigned short)];


} __attribute__ ((aligned((__alignof__ (struct sockaddr *)))));



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/socket.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sockios.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sockios.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ioctl.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sockios.h" 2
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/socket.h" 2
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sockios.h" 1
# 23 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/uio.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};
# 24 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h" 2


typedef unsigned short sa_family_t;





struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

struct linger {
 int l_onoff;
 int l_linger;
};
# 50 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h"
struct msghdr {
 void * msg_name;
 int msg_namelen;
 struct iovec * msg_iov;
 __kernel_size_t msg_iovlen;
 void * msg_control;
 __kernel_size_t msg_controllen;
 unsigned msg_flags;
};







struct cmsghdr {
 __kernel_size_t cmsg_len;
        int cmsg_level;
        int cmsg_type;
};
# 123 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h"
static inline struct cmsghdr * __cmsg_nxthdr(void *__ctl, __kernel_size_t __size,
            struct cmsghdr *__cmsg)
{
 struct cmsghdr * __ptr;

 __ptr = (struct cmsghdr*)(((unsigned char *) __cmsg) + ( ((__cmsg->cmsg_len)+sizeof(long)-1) & ~(sizeof(long)-1) ));
 if ((unsigned long)((char*)(__ptr+1) - (char *) __ctl) > __size)
  return (struct cmsghdr *)0;

 return __ptr;
}

static inline struct cmsghdr * cmsg_nxthdr (struct msghdr *__msg, struct cmsghdr *__cmsg)
{
 return __cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
}






struct ucred {
 __u32 pid;
 __u32 uid;
 __u32 gid;
};
# 270 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/socket.h"
extern int memcpy_fromiovec(unsigned char *kdata, struct iovec *iov, int len);
extern int memcpy_fromiovecend(unsigned char *kdata, struct iovec *iov,
    int offset, int len);
extern int csum_partial_copy_fromiovecend(unsigned char *kdata,
       struct iovec *iov,
       int offset,
       unsigned int len, int *csump);

extern int verify_iovec(struct msghdr *m, struct iovec *iov, char *address, int mode);
extern int memcpy_toiovec(struct iovec *v, unsigned char *kdata, int len);
extern void memcpy_tokerneliovec(struct iovec *iov, unsigned char *kdata, int len);
extern int move_addr_to_user(void *kaddr, int klen, void *uaddr, int *ulen);
extern int move_addr_to_kernel(void *uaddr, int ulen, void *kaddr);
extern int put_cmsg(struct msghdr*, int level, int type, int len, void *data);
# 23 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/net.h" 2


struct poll_table_struct;
# 49 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/net.h"
typedef enum {
  SS_FREE = 0,
  SS_UNCONNECTED,
  SS_CONNECTING,
  SS_CONNECTED,
  SS_DISCONNECTING
} socket_state;
# 65 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/net.h"
struct socket
{
 socket_state state;

 unsigned long flags;
 struct proto_ops *ops;
 struct inode *inode;
 struct fasync_struct *fasync_list;
 struct file *file;
 struct sock *sk;
 wait_queue_head_t wait;

 short type;
 unsigned char passcred;
};



struct scm_cookie;
struct vm_area_struct;
struct page;

struct proto_ops {
  int family;

  int (*release) (struct socket *sock);
  int (*bind) (struct socket *sock, struct sockaddr *umyaddr,
    int sockaddr_len);
  int (*connect) (struct socket *sock, struct sockaddr *uservaddr,
    int sockaddr_len, int flags);
  int (*socketpair) (struct socket *sock1, struct socket *sock2);
  int (*accept) (struct socket *sock, struct socket *newsock,
    int flags);
  int (*getname) (struct socket *sock, struct sockaddr *uaddr,
    int *usockaddr_len, int peer);
  unsigned int (*poll) (struct file *file, struct socket *sock, struct poll_table_struct *wait);
  int (*ioctl) (struct socket *sock, unsigned int cmd,
    unsigned long arg);
  int (*listen) (struct socket *sock, int len);
  int (*shutdown) (struct socket *sock, int flags);
  int (*setsockopt) (struct socket *sock, int level, int optname,
    char *optval, int optlen);
  int (*getsockopt) (struct socket *sock, int level, int optname,
    char *optval, int *optlen);
  int (*sendmsg) (struct socket *sock, struct msghdr *m, int total_len, struct scm_cookie *scm);
  int (*recvmsg) (struct socket *sock, struct msghdr *m, int total_len, int flags, struct scm_cookie *scm);
  int (*mmap) (struct file *file, struct socket *sock, struct vm_area_struct * vma);
  ssize_t (*sendpage) (struct socket *sock, struct page *page, int offset, size_t size, int flags);
};

struct net_proto_family
{
 int family;
 int (*create)(struct socket *sock, int protocol);


 short authentication;
 short encryption;
 short encrypt_net;
};

struct net_proto
{
 const char *name;
 void (*init_func)(struct net_proto *);
};

extern int sock_wake_async(struct socket *sk, int how, int band);
extern int sock_register(struct net_proto_family *fam);
extern int sock_unregister(int family);
extern struct socket *sock_alloc(void);
extern int sock_create(int family, int type, int proto, struct socket **);
extern void sock_release(struct socket *);
extern int sock_sendmsg(struct socket *, struct msghdr *m, int len);
extern int sock_recvmsg(struct socket *, struct msghdr *m, int len, int flags);
extern int sock_readv_writev(int type, struct inode * inode, struct file * file,
      const struct iovec * iov, long count, long size);
extern struct socket *sockfd_lookup(int fd, int *err);

extern int sock_map_fd(struct socket *sock);
extern int net_ratelimit(void);
extern unsigned long net_random(void);
extern void net_srandom(unsigned long);
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kdev_t.h" 1
# 67 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kdev_t.h"
typedef unsigned short kdev_t;
# 76 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kdev_t.h"
extern const char * kdevname(kdev_t);
# 92 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kdev_t.h"
static inline unsigned int kdev_t_to_nr(kdev_t dev) {
 return (((unsigned int) ((dev) >> 8))<<8) | ((unsigned int) ((dev) & ((1U << 8) - 1)));
}

static inline kdev_t to_kdev_t(int dev)
{
 int major, minor;
# 107 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/kdev_t.h"
 major = (dev >> 8);
 minor = (dev & 0xff);

 return (((major) << 8) | (minor));
}
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ioctl.h" 1
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h" 1






# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mount.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mount.h"
struct vfsmount
{
 struct list_head mnt_hash;
 struct vfsmount *mnt_parent;
 struct dentry *mnt_mountpoint;
 struct dentry *mnt_root;
 struct super_block *mnt_sb;
 struct list_head mnt_mounts;
 struct list_head mnt_child;
 atomic_t mnt_count;
 int mnt_flags;
 char *mnt_devname;
 struct list_head mnt_list;
};

static inline struct vfsmount *mntget(struct vfsmount *mnt)
{
 if (mnt)
  atomic_add(1,(&mnt->mnt_count));
 return mnt;
}

extern void __mntput(struct vfsmount *mnt);

static inline void mntput(struct vfsmount *mnt)
{
 if (mnt) {
  if ((atomic_sub_return(1, (&mnt->mnt_count)) == 0))
   __mntput(mnt);
 }
}
# 8 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h" 2
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h"
struct qstr {
 const unsigned char * name;
 unsigned int len;
 unsigned int hash;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
extern struct dentry_stat_t dentry_stat;






static __inline__ unsigned long partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}


static __inline__ unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static __inline__ unsigned int full_name_hash(const unsigned char * name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 struct inode * d_inode;
 struct dentry * d_parent;
 struct list_head d_hash;
 struct list_head d_lru;
 struct list_head d_child;
 struct list_head d_subdirs;
 struct list_head d_alias;
 int d_mounted;
 struct qstr d_name;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block * d_sb;
 unsigned long d_vfs_flags;
 void * d_fsdata;
 unsigned char d_iname[16];
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, int);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
};
# 128 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h"
extern spinlock_t dcache_lock;

static __inline__ int dname_external(struct dentry *d)
{
 return d->d_name.name != d->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern int d_invalidate(struct dentry *);


struct zone_struct;

extern int shrink_dcache_memory(int, unsigned int);
extern void prune_dcache(int);


extern int shrink_icache_memory(int, int);
extern void prune_icache(int);


extern int shrink_dqcache_memory(int, unsigned int);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 186 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h"
static __inline__ void d_add(struct dentry * entry, struct inode * inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);

extern char * __d_path(struct dentry *, struct vfsmount *, struct dentry *,
 struct vfsmount *, char *, int);
# 219 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h"
static __inline__ struct dentry * dget(struct dentry *dentry)
{
 if (dentry) {
  if (!((&dentry->d_count)->counter))
   __out_of_line_bug(223);
  atomic_add(1,(&dentry->d_count));
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 238 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h"
static __inline__ int d_unhashed(struct dentry *dentry)
{
 return list_empty(&dentry->d_hash);
}

extern void dput(struct dentry *);

static __inline__ int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
# 20 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/stat.h" 1





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/stat.h" 1





struct stat {
 dev_t st_dev;
 long st_pad1[3];
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 uid_t st_uid;
 gid_t st_gid;
 dev_t st_rdev;
 long st_pad2[2];
 off_t st_size;
 long st_pad3;




 time_t st_atime;
 long reserved0;
 time_t st_mtime;
 long reserved1;
 time_t st_ctime;
 long reserved2;
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
 unsigned long reserved0;

 time_t st_mtime;
 unsigned long reserved1;

 time_t st_ctime;
 unsigned long reserved2;

 unsigned long st_blksize;
 unsigned long st_pad2;

 long long st_blocks;
};
# 7 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/stat.h" 2
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h" 1
# 69 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ void set_bit(int nr, volatile void *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp;

 __asm__ __volatile__(
  "1:\tll\t%0, %1\t\t# set_bit\n\t"
  "or\t%0, %2\n\t"
  "sc\t%0, %1\n\t"
  "beqz\t%0, 1b"
  : "=&r" (temp), "=m" (*m)
  : "ir" (1UL << (nr & 0x1f)), "m" (*m));
}
# 92 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ void __set_bit(int nr, volatile void * addr)
{
 unsigned long * m = ((unsigned long *) addr) + (nr >> 5);

 *m |= 1UL << (nr & 31);
}
# 109 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ void clear_bit(int nr, volatile void *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp;

 __asm__ __volatile__(
  "1:\tll\t%0, %1\t\t# clear_bit\n\t"
  "and\t%0, %2\n\t"
  "sc\t%0, %1\n\t"
  "beqz\t%0, 1b\n\t"
  : "=&r" (temp), "=m" (*m)
  : "ir" (~(1UL << (nr & 0x1f))), "m" (*m));
}
# 132 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ void change_bit(int nr, volatile void *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp;

 __asm__ __volatile__(
  "1:\tll\t%0, %1\t\t# change_bit\n\t"
  "xor\t%0, %2\n\t"
  "sc\t%0, %1\n\t"
  "beqz\t%0, 1b"
  : "=&r" (temp), "=m" (*m)
  : "ir" (1UL << (nr & 0x1f)), "m" (*m));
}
# 155 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ void __change_bit(int nr, volatile void * addr)
{
 unsigned long * m = ((unsigned long *) addr) + (nr >> 5);

 *m ^= 1UL << (nr & 31);
}
# 170 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int test_and_set_bit(int nr, volatile void *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp;
 int res;

 __asm__ __volatile__(
  ".set\tnoreorder\t\t# test_and_set_bit\n"
  "1:\tll\t%0, %1\n\t"
  "or\t%2, %0, %3\n\t"
  "sc\t%2, %1\n\t"
  "beqz\t%2, 1b\n\t"
  " and\t%2, %0, %3\n\t"



  ".set\treorder"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 0x1f)), "m" (*m)
  : "memory");

 return res != 0;
}
# 203 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int __test_and_set_bit(int nr, volatile void * addr)
{
 volatile unsigned long *a = addr;
 unsigned long mask;
 int retval;

 a += nr >> 5;
 mask = 1 << (nr & 0x1f);
 retval = (mask & *a) != 0;
 *a |= mask;

 return retval;
}
# 225 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int test_and_clear_bit(int nr, volatile void *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp, res;

 __asm__ __volatile__(
  ".set\tnoreorder\t\t# test_and_clear_bit\n"
  "1:\tll\t%0, %1\n\t"
  "or\t%2, %0, %3\n\t"
  "xor\t%2, %3\n\t"
  "sc\t%2, %1\n\t"
  "beqz\t%2, 1b\n\t"
  " and\t%2, %0, %3\n\t"



  ".set\treorder"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 0x1f)), "m" (*m)
  : "memory");

 return res != 0;
}
# 258 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int __test_and_clear_bit(int nr, volatile void * addr)
{
 volatile unsigned long *a = addr;
 unsigned long mask, retval;

 a += nr >> 5;
 mask = 1 << (nr & 0x1f);
 retval = (mask & *a) != 0;
 *a &= ~mask;

 return retval;
}
# 279 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int test_and_change_bit(int nr, volatile void *addr)
{
 unsigned long *m = ((unsigned long *) addr) + (nr >> 5);
 unsigned long temp, res;

 __asm__ __volatile__(
  ".set\tnoreorder\t\t# test_and_change_bit\n"
  "1:\tll\t%0, %1\n\t"
  "xor\t%2, %0, %3\n\t"
  "sc\t%2, %1\n\t"
  "beqz\t%2, 1b\n\t"
  " and\t%2, %0, %3\n\t"



  ".set\treorder"
  : "=&r" (temp), "=m" (*m), "=&r" (res)
  : "r" (1UL << (nr & 0x1f)), "m" (*m)
  : "memory");

 return res != 0;
}
# 311 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int __test_and_change_bit(int nr, volatile void * addr)
{
 volatile unsigned long *a = addr;
 unsigned long mask;
 int retval;

 a += nr >> 5;
 mask = 1 << (nr & 0x1f);
 retval = (mask & *a) != 0;
 *a ^= mask;

 return retval;
}
# 585 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static inline int test_bit(int nr, volatile void *addr)
{
 return 1UL & (((const volatile unsigned long *) addr)[nr >> 5] >> (nr & 31UL));
}







static __inline__ unsigned long ffz(unsigned long word)
{
 int b = 0, s;

 word = ~word;
 s = 16; if (word << 16 != 0) s = 0; b += s; word >>= s;
 s = 8; if (word << 24 != 0) s = 0; b += s; word >>= s;
 s = 4; if (word << 28 != 0) s = 0; b += s; word >>= s;
 s = 2; if (word << 30 != 0) s = 0; b += s; word >>= s;
 s = 1; if (word << 31 != 0) s = 0; b += s;

 return b;
}
# 628 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static inline long find_next_zero_bit(void *addr, unsigned long size,
 unsigned long offset)
{
 unsigned long *p = ((unsigned long *) addr) + (offset >> 5);
 unsigned long result = offset & ~31UL;
 unsigned long tmp;

 if (offset >= size)
  return size;
 size -= result;
 offset &= 31UL;
 if (offset) {
  tmp = *(p++);
  tmp |= ~0UL >> (32-offset);
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
# 698 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/bitops.h"
static __inline__ int __test_and_set_le_bit(int nr, void * addr)
{
 unsigned char *ADDR = (unsigned char *) addr;
 int mask, retval;

 ADDR += nr >> 3;
 mask = 1 << (nr & 0x07);
 retval = (mask & *ADDR) != 0;
 *ADDR |= mask;

 return retval;
}

static __inline__ int __test_and_clear_le_bit(int nr, void * addr)
{
 unsigned char *ADDR = (unsigned char *) addr;
 int mask, retval;

 ADDR += nr >> 3;
 mask = 1 << (nr & 0x07);
 retval = (mask & *ADDR) != 0;
 *ADDR &= ~mask;

 return retval;
}

static __inline__ int test_le_bit(int nr, const void * addr)
{
 const unsigned char *ADDR = (const unsigned char *) addr;
 int mask;

 ADDR += nr >> 3;
 mask = 1 << (nr & 0x07);

 return ((mask & *ADDR) != 0);
}

static inline unsigned long ext2_ffz(unsigned int word)
{
 int b = 0, s;

 word = ~word;
 s = 16; if (word << 16 != 0) s = 0; b += s; word >>= s;
 s = 8; if (word << 24 != 0) s = 0; b += s; word >>= s;
 s = 4; if (word << 28 != 0) s = 0; b += s; word >>= s;
 s = 2; if (word << 30 != 0) s = 0; b += s; word >>= s;
 s = 1; if (word << 31 != 0) s = 0; b += s;

 return b;
}

static inline unsigned long find_next_zero_le_bit(void *addr,
 unsigned long size, unsigned long offset)
{
 unsigned int *p = ((unsigned int *) addr) + (offset >> 5);
 unsigned int result = offset & ~31;
 unsigned int tmp;

 if (offset >= size)
  return size;

 size -= result;
 offset &= 31;
 if (offset) {
  tmp = (*(__u32*)(p++));
  tmp |= ~0U >> (32-offset);
  if (size < 32)
   goto found_first;
  if (tmp != ~0U)
   goto found_middle;
  size -= 32;
  result += 32;
 }
 while (size >= 32) {
  if ((tmp = (*(__u32*)(p++))) != ~0U)
   goto found_middle;
  result += 32;
  size -= 32;
 }
 if (!size)
  return result;

 tmp = (*(__u32*)(p));
found_first:
 tmp |= ~0 << size;
 if (tmp == ~0U)
  return result + size;

found_middle:
 return result + ext2_ffz(tmp);
}
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2

struct poll_table_struct;
# 50 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
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

extern int leases_enable, dir_notify_enable, lease_break_time;
# 200 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/semaphore.h" 1
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/semaphore.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem.h" 1
# 24 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem.h"
struct rw_semaphore;


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem-spinlock.h" 1
# 24 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 33 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem-spinlock.h"
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 57 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem-spinlock.h"
extern void init_rwsem(struct rw_semaphore *sem);
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
# 28 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem.h" 2
# 43 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rwsem.h"
static inline void down_read(struct rw_semaphore *sem)
{
 ;
 __down_read(sem);
 ;
}




static inline int down_read_trylock(struct rw_semaphore *sem)
{
 int ret;
 ;
 ret = __down_read_trylock(sem);
 ;
 return ret;
}




static inline void down_write(struct rw_semaphore *sem)
{
 ;
 __down_write(sem);
 ;
}




static inline int down_write_trylock(struct rw_semaphore *sem)
{
 int ret;
 ;
 ret = __down_write_trylock(sem);
 ;
 return ret;
}




static inline void up_read(struct rw_semaphore *sem)
{
 ;
 __up_read(sem);
 ;
}




static inline void up_write(struct rw_semaphore *sem)
{
 ;
 __up_write(sem);
 ;
}
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/semaphore.h" 2


struct semaphore {




 atomic_t waking;
 atomic_t count;

 wait_queue_head_t wait;



} __attribute__((aligned(8)));
# 56 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/semaphore.h"
static inline void sema_init (struct semaphore *sem, int val)
{
 ((&sem->count)->counter = (val));
 ((&sem->waking)->counter = (0));
 init_waitqueue_head(&sem->wait);



}

static inline void init_MUTEX (struct semaphore *sem)
{
 sema_init(sem, 1);
}

static inline void init_MUTEX_LOCKED (struct semaphore *sem)
{
 sema_init(sem, 0);
}






extern spinlock_t semaphore_lock;



 int preempt_schedule(void);


extern void __down_failed(struct semaphore * sem);
extern int __down_failed_interruptible(struct semaphore * sem);
extern void __up_wakeup(struct semaphore * sem);

static inline void down(struct semaphore * sem)
{
 int count;




 count = atomic_sub_return(1,(&sem->count));
 if (__builtin_expect((count < 0),0))
  __down_failed(sem);
}





static inline int down_interruptible(struct semaphore * sem)
{
 int count;




 count = atomic_sub_return(1,(&sem->count));
 if (__builtin_expect((count < 0),0))
  return __down_failed_interruptible(sem);

 return 0;
}
# 224 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/semaphore.h"
static inline int down_trylock(struct semaphore * sem)
{
 unsigned long flags;
 int count, waking;
 int ret = 0;





 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&semaphore_lock); } while(0); } while (0);
 count = ((&sem->count)->counter) - 1;
 ((&sem->count)->counter = (count));
 if (__builtin_expect((count < 0),0)) {
  waking = ((&sem->waking)->counter);
  if (waking <= 0) {
   ((&sem->count)->counter = (count + 1));
   ret = 1;
  } else {
   ((&sem->waking)->counter = (waking - 1));
   ret = 0;
  }
 }
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);

 return ret;
}





static inline void up(struct semaphore * sem)
{
 unsigned long flags;
 int count, waking;
# 270 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/semaphore.h"
 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&semaphore_lock); } while(0); } while (0);
 count = ((&sem->count)->counter) + 1;
 waking = ((&sem->waking)->counter);
 if (count <= 0)
  waking++;
 ((&sem->count)->counter = (count));
 ((&sem->waking)->counter = (waking));
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);

 if (__builtin_expect((count <= 0),0))
  __up_wakeup(sem);
}



static inline int sem_getcount(struct semaphore *sem)
{
 return ((&sem->count)->counter);
}
# 201 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2


extern void update_atime (struct inode *);
extern void update_mctime (struct inode *);


extern void buffer_init(unsigned long);
extern void inode_init(unsigned long);
extern void mnt_init(unsigned long);
extern void files_init(unsigned long mempages);


enum bh_state_bits {
 BH_Uptodate,
 BH_Dirty,
 BH_Lock,
 BH_Req,
 BH_Mapped,
 BH_New,
 BH_Async,
 BH_Wait_IO,
 BH_Launder,
 BH_Attached,
 BH_JBD,
 BH_Sync,
 BH_Delay,

 BH_PrivateStart,


};
# 246 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
struct buffer_head {

 struct buffer_head *b_next;
 unsigned long b_blocknr;
 unsigned long b_size;
 unsigned long b_list;
 kdev_t b_dev;

 atomic_t b_count;
 kdev_t b_rdev;
 unsigned long b_state;
 unsigned long b_flushtime;

 struct buffer_head *b_next_free;
 struct buffer_head *b_prev_free;
 struct buffer_head *b_this_page;
 struct buffer_head *b_reqnext;

 struct buffer_head **b_pprev;
 char * b_data;
 struct page *b_page;
 void (*b_end_io)(struct buffer_head *bh, int uptodate);
  void *b_private;

 unsigned long b_rsector;
 wait_queue_head_t b_wait;

 struct list_head b_inode_buffers;
};

typedef void (bh_end_io_t)(struct buffer_head *bh, int uptodate);
void init_buffer(struct buffer_head *, bh_end_io_t *, void *);
# 293 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
extern void set_bh_page(struct buffer_head *bh, struct page *page, unsigned long offset);




# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pipe_fs_i.h" 1




struct pipe_inode_info {
 wait_queue_head_t wait;
 char *base;
 unsigned int len;
 unsigned int start;
 unsigned int readers;
 unsigned int writers;
 unsigned int waiting_readers;
 unsigned int waiting_writers;
 unsigned int r_counter;
 unsigned int w_counter;
};
# 42 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pipe_fs_i.h"
void pipe_wait(struct inode * inode);

struct inode* pipe_new(struct inode* inode);
# 299 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/minix_fs_i.h" 1






struct minix_inode_info {
 union {
  __u16 i1_data[16];
  __u32 i2_data[16];
 } u;
};
# 300 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext2_fs_i.h" 1
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext2_fs_i.h"
struct ext2_inode_info {
 __u32 i_data[15];
 __u32 i_flags;
 __u32 i_faddr;
 __u8 i_frag_no;
 __u8 i_frag_size;
 __u16 i_state;
 __u32 i_file_acl;
 __u32 i_dir_acl;
 __u32 i_dtime;
 __u32 i_block_group;
 __u32 i_next_alloc_block;
 __u32 i_next_alloc_goal;
 __u32 i_prealloc_block;
 __u32 i_prealloc_count;
 __u32 i_dir_start_lookup;
};
# 301 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext3_fs_i.h" 1
# 24 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext3_fs_i.h"
struct ext3_inode_info {
 __u32 i_data[15];
 __u32 i_flags;






 __u32 i_file_acl;
 __u32 i_dir_acl;
 __u32 i_dtime;
 __u32 i_block_group;
 __u32 i_state;
 __u32 i_next_alloc_block;
 __u32 i_next_alloc_goal;




 __u32 i_dir_start_lookup;

 struct list_head i_orphan;
# 63 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext3_fs_i.h"
 loff_t i_disksize;
# 75 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext3_fs_i.h"
 struct rw_semaphore truncate_sem;
};
# 302 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hpfs_fs_i.h" 1



struct hpfs_inode_info {
 unsigned long mmu_private;
 ino_t i_parent_dir;
 unsigned i_dno;
 unsigned i_dpos;
 unsigned i_dsubdno;
 unsigned i_file_sec;
 unsigned i_disk_sec;
 unsigned i_n_secs;
 unsigned i_ea_size;
 unsigned i_conv : 2;
 unsigned i_ea_mode : 1;
 unsigned i_ea_uid : 1;
 unsigned i_ea_gid : 1;
 unsigned i_dirty : 1;
 struct semaphore i_sem;
 loff_t **i_rddir_off;
};
# 303 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ntfs_fs_i.h" 1






struct ntfs_attribute;
struct ntfs_sb_info;




typedef u8 ntfs_u8;
typedef u16 ntfs_u16;
typedef u32 ntfs_u32;
typedef u64 ntfs_u64;
typedef s8 ntfs_s8;
typedef s16 ntfs_s16;
typedef s32 ntfs_s32;
typedef s64 ntfs_s64;




typedef __kernel_mode_t ntmode_t;



typedef uid_t ntfs_uid_t;



typedef gid_t ntfs_gid_t;



typedef __kernel_size_t ntfs_size_t;



typedef __kernel_time_t ntfs_time_t;





typedef u16 ntfs_wchar_t;




typedef s64 ntfs_offset_t;




typedef u64 ntfs_time64_t;
# 69 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ntfs_fs_i.h"
typedef s32 ntfs_cluster_t;



struct ntfs_inode_info {
 struct ntfs_sb_info *vol;
 unsigned long i_number;
 __u16 sequence_number;
 unsigned char *attr;
 int attr_count;
 struct ntfs_attribute *attrs;
 int record_count;
 int *records;

 union {
  struct {
   int recordsize;
   int clusters_per_record;
  } index;
 } u;
};
# 304 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/msdos_fs_i.h" 1







struct msdos_inode_info {
 unsigned long mmu_private;
 int i_start;
 int i_logstart;
 int i_attrs;
 int i_ctime_ms;
 loff_t i_pos;
 struct inode *i_fat_inode;
 struct list_head i_fat_hash;
};
# 305 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/umsdos_fs_i.h" 1
# 39 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/umsdos_fs_i.h"
struct dir_locking_info {
 wait_queue_head_t p;
 short int looking;
 short int creating;



 long pid;

};

struct umsdos_inode_info {
 struct msdos_inode_info msdos_info;
 struct dir_locking_info dir_info;
 int i_patched;
 int i_is_hlink;
 off_t pos;
};
# 306 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/iso_fs_i.h" 1



enum isofs_file_format {
 isofs_file_normal = 0,
 isofs_file_sparse = 1,
 isofs_file_compressed = 2,
};




struct iso_inode_info {
 unsigned int i_first_extent;
 unsigned char i_file_format;
 unsigned char i_format_parm[3];
 unsigned long i_next_section_ino;
 off_t i_section_size;
};
# 307 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs_fs_i.h" 1





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs.h" 1
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sunrpc/msg_prot.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sunrpc/msg_prot.h"
enum rpc_auth_flavor {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
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
 RPC_AUTH_TOOWEAK = 5
};
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs.h" 2
# 44 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs.h"
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
 NFSERR_JUKEBOX = 10008
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
 unsigned char data[64];
};
# 110 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs_fs_i.h" 2




struct nfs_inode_info {



 __u64 fileid;




 struct nfs_fh fh;




 unsigned short flags;
# 44 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs_fs_i.h"
 unsigned long read_cache_jiffies;
 __u64 read_cache_ctime;
 __u64 read_cache_mtime;
 __u64 read_cache_isize;
 unsigned long attrtimeo;
 unsigned long attrtimeo_timestamp;





 unsigned long cache_mtime_jiffies;





 __u32 cookieverf[2];




 struct list_head read;
 struct list_head dirty;
 struct list_head commit;
 struct list_head writeback;

 unsigned int nread,
    ndirty,
    ncommit,
    npages;


 struct rpc_cred *mm_cred;
};
# 92 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs_fs_i.h"
struct nfs_lock_info {
 u32 state;
 u32 flags;
 struct nlm_host *host;
};
# 308 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sysv_fs_i.h" 1






struct sysv_inode_info {
 u32 i_data[10+1+1+1];




 u32 i_dir_start_lookup;
};
# 309 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_i.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/a.out.h" 1







# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/a.out.h" 1



struct exec
{
  unsigned long a_info;
  unsigned a_text;
  unsigned a_data;
  unsigned a_bss;
  unsigned a_syms;
  unsigned a_entry;
  unsigned a_trsize;
  unsigned a_drsize;
};
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/a.out.h" 2




enum machine_type {



  M_OLDSUN2 = 0,




  M_68010 = 1,




  M_68020 = 2,




  M_SPARC = 3,


  M_386 = 100,
  M_MIPS1 = 151,
  M_MIPS2 = 152
};
# 157 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/a.out.h"
struct nlist {
  union {
    char *n_name;
    struct nlist *n_next;
    long n_strx;
  } n_un;
  unsigned char n_type;
  char n_other;
  short n_desc;
  unsigned long n_value;
};
# 235 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/a.out.h"
struct relocation_info
{

  int r_address;

  unsigned int r_symbolnum:24;



  unsigned int r_pcrel:1;


  unsigned int r_length:2;






  unsigned int r_extern:1;







  unsigned int r_pad:4;

};
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_i.h" 2


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/time.h" 1
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/time.h"
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/time.h"
static __inline__ unsigned long
timespec_to_jiffies(struct timespec *value)
{
 unsigned long sec = value->tv_sec;
 long nsec = value->tv_nsec;

 if (sec >= (((~0UL >> 1)-1) / (1000)))
  return ((~0UL >> 1)-1);
 nsec += 1000000000L / (1000) - 1;
 nsec /= 1000000000L / (1000);
 return (1000) * sec + nsec;
}

static __inline__ void
jiffies_to_timespec(unsigned long jiffies, struct timespec *value)
{
 value->tv_nsec = (jiffies % (1000)) * (1000000000L / (1000));
 value->tv_sec = jiffies / (1000);
}
# 67 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/time.h"
static inline unsigned long
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




struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};




extern void do_gettimeofday(struct timeval *tv);
extern void do_settimeofday(struct timeval *tv);
# 119 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/time.h"
struct itimerspec {
        struct timespec it_interval;
        struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 8 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_i.h" 2
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_i.h"
struct affs_ext_key {
 u32 ext;
 u32 key;
};




struct affs_inode_info {
 u32 i_opencnt;
 struct semaphore i_link_lock;
 struct semaphore i_ext_lock;

 u32 i_blkcnt;
 u32 i_extcnt;
 u32 *i_lc;
 u32 i_lc_size;
 u32 i_lc_shift;
 u32 i_lc_mask;
 struct affs_ext_key *i_ac;
 u32 i_ext_last;
 struct buffer_head *i_ext_bh;
 unsigned long mmu_private;
 u32 i_protect;
 u32 i_lastalloc;
 int i_pa_cnt;
# 51 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_i.h"
};
# 310 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs_i.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs_i.h"
struct ufs_inode_info {
 union {
  __u32 i_data[15];
  __u8 i_symlink[4*15];
 } i_u1;
 __u32 i_flags;
 __u32 i_gen;
 __u32 i_shadow;
 __u32 i_unused1;
 __u32 i_unused2;
 __u32 i_oeftflag;
 __u16 i_osync;
 __u32 i_lastfrag;
};
# 311 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/efs_fs_i.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/efs_fs_i.h"
typedef int32_t efs_block_t;
typedef uint32_t efs_ino_t;






typedef union extent_u {
 unsigned char raw[8];
 struct extent_s {
  unsigned int ex_magic:8;
  unsigned int ex_bn:24;
  unsigned int ex_length:8;
  unsigned int ex_offset:24;
 } cooked;
} efs_extent;

typedef struct edevs {
 short odev;
 unsigned int ndev;
} efs_devs;





struct efs_dinode {
 u_short di_mode;
 short di_nlink;
 u_short di_uid;
 u_short di_gid;
 int32_t di_size;
 int32_t di_atime;
 int32_t di_mtime;
 int32_t di_ctime;
 uint32_t di_gen;
 short di_numextents;
 u_char di_version;
 u_char di_spare;
 union di_addr {
  efs_extent di_extents[12];
  efs_devs di_dev;
 } di_u;
};


struct efs_inode_info {
 int numextents;
 int lastextent;

 efs_extent extents[12];
};
# 312 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda_fs_i.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda_fs_i.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h" 1
# 109 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
typedef unsigned long long u_quad_t;
# 164 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
struct venus_dirent {
        unsigned long d_fileno;
        unsigned short d_reclen;
        unsigned char d_type;
        unsigned char d_namlen;
        char d_name[255 + 1];
};
# 198 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
typedef u_long VolumeId;
typedef u_long VnodeId;
typedef u_long Unique_t;
typedef u_long FileVersion;




typedef struct ViceFid {
    VolumeId Volume;
    VnodeId Vnode;
    Unique_t Unique;
} ViceFid;




static __inline__ ino_t coda_f2i(struct ViceFid *fid)
{
 if ( ! fid )
  return 0;
 if (fid->Vnode == 0xfffffffe || fid->Vnode == 0xffffffff)
  return ((fid->Volume << 20) | (fid->Unique & 0xfffff));
 else
  return (fid->Unique + (fid->Vnode<<10) + (fid->Volume<<20));
}
# 233 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
typedef u_int32_t vuid_t;
typedef u_int32_t vgid_t;




struct coda_cred {
    vuid_t cr_uid, cr_euid, cr_suid, cr_fsuid;
    vgid_t cr_groupid, cr_egid, cr_sgid, cr_fsgid;
};







enum coda_vtype { C_VNON, C_VREG, C_VDIR, C_VBLK, C_VCHR, C_VLNK, C_VSOCK, C_VFIFO, C_VBAD };

struct coda_vattr {
 long va_type;
 u_short va_mode;
 short va_nlink;
 vuid_t va_uid;
 vgid_t va_gid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 u_long va_gen;
 u_long va_flags;
 u_quad_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
};




struct coda_statfs {
    int32_t f_blocks;
    int32_t f_bfree;
    int32_t f_bavail;
    int32_t f_files;
    int32_t f_ffree;
};
# 337 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
struct coda_in_hdr {
    unsigned long opcode;
    unsigned long unique;
    u_short pid;
    u_short pgid;
    u_short sid;
    struct coda_cred cred;
};


struct coda_out_hdr {
    unsigned long opcode;
    unsigned long unique;
    unsigned long result;
};


struct coda_root_out {
    struct coda_out_hdr oh;
    ViceFid VFid;
};

struct coda_root_in {
    struct coda_in_hdr in;
};


struct coda_open_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_open_out {
    struct coda_out_hdr oh;
    u_quad_t dev;
    ino_t inode;
};



struct coda_store_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_store_out {
    struct coda_out_hdr out;
};


struct coda_release_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_release_out {
    struct coda_out_hdr out;
};


struct coda_close_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_close_out {
    struct coda_out_hdr out;
};


struct coda_ioctl_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int cmd;
    int len;
    int rwflag;
    char *data;
};

struct coda_ioctl_out {
    struct coda_out_hdr oh;
    int len;
    caddr_t data;
};



struct coda_getattr_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
};

struct coda_getattr_out {
    struct coda_out_hdr oh;
    struct coda_vattr attr;
};



struct coda_setattr_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    struct coda_vattr attr;
};

struct coda_setattr_out {
    struct coda_out_hdr out;
};


struct coda_access_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_access_out {
    struct coda_out_hdr out;
};







struct coda_lookup_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int name;
    int flags;
};

struct coda_lookup_out {
    struct coda_out_hdr oh;
    ViceFid VFid;
    int vtype;
};



struct coda_create_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    struct coda_vattr attr;
    int excl;
    int mode;
    int name;
};

struct coda_create_out {
    struct coda_out_hdr oh;
    ViceFid VFid;
    struct coda_vattr attr;
};



struct coda_remove_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int name;
};

struct coda_remove_out {
    struct coda_out_hdr out;
};


struct coda_link_in {
    struct coda_in_hdr ih;
    ViceFid sourceFid;
    ViceFid destFid;
    int tname;
};

struct coda_link_out {
    struct coda_out_hdr out;
};



struct coda_rename_in {
    struct coda_in_hdr ih;
    ViceFid sourceFid;
    int srcname;
    ViceFid destFid;
    int destname;
};

struct coda_rename_out {
    struct coda_out_hdr out;
};


struct coda_mkdir_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    struct coda_vattr attr;
    int name;
};

struct coda_mkdir_out {
    struct coda_out_hdr oh;
    ViceFid VFid;
    struct coda_vattr attr;
};



struct coda_rmdir_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int name;
};

struct coda_rmdir_out {
    struct coda_out_hdr out;
};


struct coda_symlink_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int srcname;
    struct coda_vattr attr;
    int tname;
};

struct coda_symlink_out {
    struct coda_out_hdr out;
};


struct coda_readlink_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
};

struct coda_readlink_out {
    struct coda_out_hdr oh;
    int count;
    caddr_t data;
};



struct coda_fsync_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
};

struct coda_fsync_out {
    struct coda_out_hdr out;
};


struct coda_vget_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
};

struct coda_vget_out {
    struct coda_out_hdr oh;
    ViceFid VFid;
    int vtype;
};
# 616 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
struct coda_purgeuser_out {
    struct coda_out_hdr oh;
    struct coda_cred cred;
};



struct coda_zapfile_out {
    struct coda_out_hdr oh;
    ViceFid CodaFid;
};



struct coda_zapdir_out {
    struct coda_out_hdr oh;
    ViceFid CodaFid;
};



struct coda_zapvnode_out {
    struct coda_out_hdr oh;
    struct coda_cred cred;
    ViceFid VFid;
};



struct coda_purgefid_out {
    struct coda_out_hdr oh;
    ViceFid CodaFid;
};



struct coda_replace_out {
    struct coda_out_hdr oh;
    ViceFid NewFid;
    ViceFid OldFid;
};


struct coda_open_by_fd_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_open_by_fd_out {
    struct coda_out_hdr oh;
    int fd;


    struct file *fh;

};


struct coda_open_by_path_in {
    struct coda_in_hdr ih;
    ViceFid VFid;
    int flags;
};

struct coda_open_by_path_out {
    struct coda_out_hdr oh;
 int path;
};


struct coda_statfs_in {
    struct coda_in_hdr in;
};

struct coda_statfs_out {
    struct coda_out_hdr oh;
    struct coda_statfs stat;
};
# 703 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
union inputArgs {
    struct coda_in_hdr ih;
    struct coda_open_in coda_open;
    struct coda_store_in coda_store;
    struct coda_release_in coda_release;
    struct coda_close_in coda_close;
    struct coda_ioctl_in coda_ioctl;
    struct coda_getattr_in coda_getattr;
    struct coda_setattr_in coda_setattr;
    struct coda_access_in coda_access;
    struct coda_lookup_in coda_lookup;
    struct coda_create_in coda_create;
    struct coda_remove_in coda_remove;
    struct coda_link_in coda_link;
    struct coda_rename_in coda_rename;
    struct coda_mkdir_in coda_mkdir;
    struct coda_rmdir_in coda_rmdir;
    struct coda_symlink_in coda_symlink;
    struct coda_readlink_in coda_readlink;
    struct coda_fsync_in coda_fsync;
    struct coda_vget_in coda_vget;
    struct coda_open_by_fd_in coda_open_by_fd;
    struct coda_open_by_path_in coda_open_by_path;
    struct coda_statfs_in coda_statfs;
};

union outputArgs {
    struct coda_out_hdr oh;
    struct coda_root_out coda_root;
    struct coda_open_out coda_open;
    struct coda_ioctl_out coda_ioctl;
    struct coda_getattr_out coda_getattr;
    struct coda_lookup_out coda_lookup;
    struct coda_create_out coda_create;
    struct coda_mkdir_out coda_mkdir;
    struct coda_readlink_out coda_readlink;
    struct coda_vget_out coda_vget;
    struct coda_purgeuser_out coda_purgeuser;
    struct coda_zapfile_out coda_zapfile;
    struct coda_zapdir_out coda_zapdir;
    struct coda_zapvnode_out coda_zapvnode;
    struct coda_purgefid_out coda_purgefid;
    struct coda_replace_out coda_replace;
    struct coda_open_by_fd_out coda_open_by_fd;
    struct coda_open_by_path_out coda_open_by_path;
    struct coda_statfs_out coda_statfs;
};

union coda_downcalls {


    struct coda_purgeuser_out purgeuser;
    struct coda_zapfile_out zapfile;
    struct coda_zapdir_out zapdir;
    struct coda_zapvnode_out zapvnode;
    struct coda_purgefid_out purgefid;
    struct coda_replace_out replace;
};







struct ViceIoctl {
        caddr_t in, out;
        u_short in_size;
        u_short out_size;
};

struct PioctlData {
        const char *path;
        int follow;
        struct ViceIoctl vi;
};
# 797 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda.h"
struct coda_mount_data {
 int version;
 int fd;
};
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda_fs_i.h" 2




struct coda_inode_info {
        struct ViceFid c_fid;
        u_short c_flags;
 struct list_head c_cilist;
 int c_mapcount;
        struct coda_cred c_cached_cred;
        unsigned int c_cached_perm;
};





struct coda_file_info {
 int cfi_magic;
 int cfi_mapcount;
 struct file *cfi_container;
 struct coda_cred cfi_cred;
};
# 47 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/coda_fs_i.h"
int coda_cnode_make(struct inode **, struct ViceFid *, struct super_block *);
struct inode *coda_iget(struct super_block *sb, struct ViceFid *fid, struct coda_vattr *attr);
int coda_cnode_makectl(struct inode **inode, struct super_block *sb);
struct inode *coda_fid_to_inode(ViceFid *fid, struct super_block *sb);
void coda_replace_fid(struct inode *, ViceFid *, ViceFid *);
# 313 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/romfs_fs_i.h" 1





struct romfs_inode_info {
 unsigned long i_metasize;
 unsigned long i_dataoffset;
};
# 314 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/shmem_fs.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/shmem_fs.h"
typedef struct {
 unsigned long val;
} swp_entry_t;

struct shmem_inode_info {
 spinlock_t lock;
 unsigned long next_index;
 swp_entry_t i_direct[16];
 void **i_indirect;
 unsigned long swapped;
 unsigned long flags;
 struct list_head list;
 struct inode *inode;
};

struct shmem_sb_info {
 unsigned long max_blocks;
 unsigned long free_blocks;
 unsigned long max_inodes;
 unsigned long free_inodes;
 spinlock_t stat_lock;
};
# 315 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb_fs_i.h" 1
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb_fs_i.h"
struct smb_inode_info {





        unsigned int open;
 __u16 fileid;
 __u16 attr;

 __u16 access;
 __u16 flags;
 unsigned long oldmtime;
 unsigned long closed;
 unsigned openers;
};
# 316 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hfs_fs_i.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hfs_fs_i.h"
struct hfs_inode_info {
 int magic;

 unsigned long mmu_private;
 struct hfs_cat_entry *entry;


 struct hfs_fork *fork;
 int convert;


 ino_t file_type;
 char dir_size;


 const struct hfs_hdr_layout *default_layout;
 struct hfs_hdr_layout *layout;


 int tz_secondswest;


        void (*d_drop_op)(struct dentry *, const ino_t);
};
# 317 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/adfs_fs_i.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/adfs_fs_i.h"
struct adfs_inode_info {
 unsigned long mmu_private;
 unsigned long parent_id;
 __u32 loadaddr;
 __u32 execaddr;
 unsigned int filetype;
 unsigned int attr;
 int stamped:1;
};
# 318 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs_i.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs_i.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnxtypes.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnxtypes.h"
typedef __u16 qnx4_nxtnt_t;
typedef __u8 qnx4_ftype_t;

typedef struct {
 __u32 xtnt_blk;
 __u32 xtnt_size;
} qnx4_xtnt_t;

typedef __u16 qnx4_mode_t;
typedef __u16 qnx4_muid_t;
typedef __u16 qnx4_mgid_t;
typedef __u32 qnx4_off_t;
typedef __u16 qnx4_nlink_t;
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs_i.h" 2




struct qnx4_inode_info {
 char i_reserved[16];
 qnx4_off_t i_size;
 qnx4_xtnt_t i_first_xtnt;
 __u32 i_xblk;
 __s32 i_ftime;
 __s32 i_mtime;
 __s32 i_atime;
 __s32 i_ctime;
 qnx4_nxtnt_t i_num_xtnts;
 qnx4_mode_t i_mode;
 qnx4_muid_t i_uid;
 qnx4_mgid_t i_gid;
 qnx4_nlink_t i_nlink;
 __u8 i_zero[4];
 qnx4_ftype_t i_type;
 __u8 i_status;
 unsigned long mmu_private;
};
# 319 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_i.h" 1
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_i.h"
typedef enum {



    i_item_key_version_mask = 0x0001,


    i_stat_data_version_mask = 0x0002,

    i_pack_on_close_mask = 0x0004,

    i_nopack_mask = 0x0008,



    i_link_saved_unlink_mask = 0x0010,
    i_link_saved_truncate_mask = 0x0020
} reiserfs_inode_flags;


struct reiserfs_inode_info {
    __u32 i_key [4];



    __u32 i_flags;

    __u32 i_first_direct_byte;


    __u32 i_attrs;

    int i_prealloc_block;
    int i_prealloc_count;
    struct list_head i_prealloc_list;


    int new_packing_locality:1;






    unsigned long i_trans_id ;
    unsigned long i_trans_index ;





    unsigned long i_tail_trans_id;
    unsigned long i_tail_trans_index;
};
# 320 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/bfs_fs_i.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/bfs_fs_i.h"
struct bfs_inode_info {
 unsigned long i_dsk_ino;
 unsigned long i_sblock;
 unsigned long i_eblock;
};
# 321 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/udf_fs_i.h" 1
# 23 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/udf_fs_i.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/version.h" 1
# 24 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/udf_fs_i.h" 2


typedef struct
{
 __u32 logicalBlockNum;
 __u16 partitionReferenceNum;
} __attribute__ ((packed)) lb_addr;

typedef struct
{
 __u32 extLength;
 __u32 extPosition;
} __attribute__ ((packed)) short_ad;

typedef struct
{
 __u32 extLength;
 lb_addr extLocation;
 __u8 impUse[6];
} __attribute__ ((packed)) long_ad;


struct udf_inode_info
{



 long i_umtime;
 long i_uctime;
 long i_crtime;
 long i_ucrtime;


 lb_addr i_location;
 __u64 i_unique;
 __u32 i_lenEAttr;
 __u32 i_lenAlloc;
 __u64 i_lenExtents;
 __u32 i_next_alloc_block;
 __u32 i_next_alloc_goal;
 unsigned i_alloc_type : 3;
 unsigned i_efe : 1;
 unsigned i_use : 1;
 unsigned i_strat4096 : 1;
 unsigned reserved : 26;
 union
 {
  short_ad *i_sad;
  long_ad *i_lad;
  __u8 *i_data;
 } i_ext;



};
# 322 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_fs_i.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_fs_i.h"
struct ncp_inode_info {
 __u32 dirEntNum __attribute__((packed));
 __u32 DosDirNum __attribute__((packed));
 __u32 volNumber __attribute__((packed));
 __u32 nwattr;
 struct semaphore open_sem;
 atomic_t opened;
 int access;
 __u32 server_file_handle __attribute__((packed));
 __u8 open_create_action __attribute__((packed));
 __u8 file_handle[6] __attribute__((packed));
};
# 323 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/proc_fs_i.h" 1
struct proc_inode_info {
 struct task_struct *task;
 int type;
 union {
  int (*proc_get_link)(struct inode *, struct dentry **, struct vfsmount **);
  int (*proc_read)(struct task_struct *task, char *page);
 } op;
 struct file *file;
};
# 324 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/usbdev_fs_i.h" 1
struct usb_device;
struct usb_bus;

struct usbdev_inode_info {
 struct list_head dlist;
 struct list_head slist;
 union {
  struct usb_device *dev;
  struct usb_bus *bus;
 } p;
};
# 325 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/jffs2_fs_i.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/jffs2_fs_i.h"
struct jffs2_inode_info {
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/jffs2_fs_i.h"
 struct semaphore sem;


 __u32 highest_version;


 struct jffs2_node_frag *fraglist;






 struct jffs2_full_dnode *metadata;


 struct jffs2_full_dirent *dents;


 struct jffs2_inode_cache *inocache;





 __u16 flags;
 __u8 usercompr;
};
# 326 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/cramfs_fs_sb.h" 1






struct cramfs_sb_info {
   unsigned long magic;
   unsigned long size;
   unsigned long blocks;
   unsigned long files;
   unsigned long flags;
};
# 327 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 353 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 time_t ia_atime;
 time_t ia_mtime;
 time_t ia_ctime;
 unsigned int ia_attr_flags;
};
# 377 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h" 1
# 48 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h"
typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;
# 107 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h"
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
# 128 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_xfs.h" 1
# 46 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_xfs.h"
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
# 133 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_xfs.h"
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
# 138 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_v1.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_v1.h"
struct v1_mem_dqinfo {
};
# 139 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_v2.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dqblk_v2.h"
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};
# 140 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h" 2




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
 int dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};





extern inline void mark_info_dirty(struct mem_dqinfo *info)
{
 info->dqi_flags |= 0x10000;
}
# 187 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h"
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
# 209 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h"
struct dquot {
 struct list_head dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 wait_queue_head_t dq_wait_lock;
 wait_queue_head_t dq_wait_free;
 int dq_count;
 int dq_dup_ref;


 struct super_block *dq_sb;
 unsigned int dq_id;
 kdev_t dq_dev;
 loff_t dq_off;
 short dq_type;
 short dq_flags;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 void (*initialize) (struct inode *, int);
 void (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, unsigned long);
 void (*free_space) (struct inode *, qsize_t);
 void (*free_inode) (const struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
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
 struct semaphore dqoff_sem;
 struct file *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};
# 297 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/quota.h"
static inline int is_enabled(struct quota_info *dqopt, int type)
{
 switch (type) {
  case 0:
   return dqopt->flags & 0x01;
  case 1:
   return dqopt->flags & 0x02;
 }
 return 0;
}





int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);
void init_dquot_operations(struct dquot_operations *fsdqops);
# 378 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2





struct page;
struct address_space;
struct kiobuf;

struct address_space_operations {
 int (*writepage)(struct page *);
 int (*readpage)(struct file *, struct page *);
 int (*sync_page)(struct page *);




 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 int (*bmap)(struct address_space *, long);
 int (*flushpage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, int);

 int (*direct_IO)(int, struct inode *, struct kiobuf *, unsigned long, int);

 int (*direct_fileIO)(int, struct file *, struct kiobuf *, unsigned long, int);
 void (*removepage)(struct page *);
};

struct address_space {
 struct list_head clean_pages;
 struct list_head dirty_pages;
 struct list_head locked_pages;
 unsigned long nrpages;
 struct address_space_operations *a_ops;
 struct inode *host;
 struct vm_area_struct *i_mmap;
 struct vm_area_struct *i_mmap_shared;
 spinlock_t i_shared_lock;
 int gfp_mask;
};

struct char_device {
 struct list_head hash;
 atomic_t count;
 dev_t dev;
 atomic_t openers;
 struct semaphore sem;
};

struct block_device {
 struct list_head bd_hash;
 atomic_t bd_count;
 struct inode * bd_inode;
 dev_t bd_dev;
 int bd_openers;
 const struct block_device_operations *bd_op;
 struct semaphore bd_sem;
 struct list_head bd_inodes;
};

struct inode {
 struct list_head i_hash;
 struct list_head i_list;
 struct list_head i_dentry;

 struct list_head i_dirty_buffers;
 struct list_head i_dirty_data_buffers;

 unsigned long i_ino;
 atomic_t i_count;
 kdev_t i_dev;
 umode_t i_mode;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 kdev_t i_rdev;
 loff_t i_size;
 time_t i_atime;
 time_t i_mtime;
 time_t i_ctime;
 unsigned int i_blkbits;
 unsigned long i_blksize;
 unsigned long i_blocks;
 unsigned long i_version;
 unsigned short i_bytes;
 struct semaphore i_sem;
 struct rw_semaphore i_alloc_sem;
 struct semaphore i_zombie;
 struct inode_operations *i_op;
 struct file_operations *i_fop;
 struct super_block *i_sb;
 wait_queue_head_t i_wait;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;
 struct dquot *i_dquot[2];

 struct list_head i_devices;
 struct pipe_inode_info *i_pipe;
 struct block_device *i_bdev;
 struct char_device *i_cdev;

 unsigned long i_dnotify_mask;
 struct dnotify_struct *i_dnotify;

 unsigned long i_state;

 unsigned int i_flags;
 unsigned char i_sock;

 atomic_t i_writecount;
 unsigned int i_attr_flags;
 __u32 i_generation;
 union {
  struct minix_inode_info minix_i;
  struct ext2_inode_info ext2_i;
  struct ext3_inode_info ext3_i;
  struct hpfs_inode_info hpfs_i;
  struct ntfs_inode_info ntfs_i;
  struct msdos_inode_info msdos_i;
  struct umsdos_inode_info umsdos_i;
  struct iso_inode_info isofs_i;
  struct nfs_inode_info nfs_i;
  struct sysv_inode_info sysv_i;
  struct affs_inode_info affs_i;
  struct ufs_inode_info ufs_i;
  struct efs_inode_info efs_i;
  struct romfs_inode_info romfs_i;
  struct shmem_inode_info shmem_i;
  struct coda_inode_info coda_i;
  struct smb_inode_info smbfs_i;
  struct hfs_inode_info hfs_i;
  struct adfs_inode_info adfs_i;
  struct qnx4_inode_info qnx4_i;
  struct reiserfs_inode_info reiserfs_i;
  struct bfs_inode_info bfs_i;
  struct udf_inode_info udf_i;
  struct ncp_inode_info ncpfs_i;
  struct proc_inode_info proc_i;
  struct socket socket_i;
  struct usbdev_inode_info usbdev_i;
  struct jffs2_inode_info jffs2_i;
  void *generic_ip;
 } u;
};

static inline void inode_add_bytes(struct inode *inode, loff_t bytes)
{
 inode->i_blocks += bytes >> 9;
 bytes &= 511;
 inode->i_bytes += bytes;
 if (inode->i_bytes >= 512) {
  inode->i_blocks++;
  inode->i_bytes -= 512;
 }
}

static inline void inode_sub_bytes(struct inode *inode, loff_t bytes)
{
 inode->i_blocks -= bytes >> 9;
 bytes &= 511;
 if (inode->i_bytes < bytes) {
  inode->i_blocks--;
  inode->i_bytes += 512;
 }
 inode->i_bytes -= bytes;
}

static inline loff_t inode_get_bytes(struct inode *inode)
{
 return (((loff_t)inode->i_blocks) << 9) + inode->i_bytes;
}

static inline void inode_set_bytes(struct inode *inode, loff_t bytes)
{
 inode->i_blocks = bytes >> 9;
 inode->i_bytes = bytes & 511;
}

struct fown_struct {
 int pid;
 uid_t uid, euid;
 int signum;
};

struct file {
 struct list_head f_list;
 struct dentry *f_dentry;
 struct vfsmount *f_vfsmnt;
 struct file_operations *f_op;
 atomic_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 unsigned long f_reada, f_ramax, f_raend, f_ralen, f_rawin;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 int f_error;

 size_t f_maxcount;
 unsigned long f_version;


 void *private_data;


 struct kiobuf *f_iobuf;
 long f_iobuf_lock;
};
extern spinlock_t files_lock;






extern int init_private_file(struct file *, struct dentry *, int);
# 622 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

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

 void (*fl_notify)(struct file_lock *);
 void (*fl_insert)(struct file_lock *);
 void (*fl_remove)(struct file_lock *);

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 union {
  struct nfs_lock_info nfs_fl;
 } fl_u;
};
# 656 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
extern struct list_head file_lock_list;

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fcntl.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/fcntl.h" 1
# 84 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/fcntl.h"
typedef struct flock {
 short l_type;
 short l_whence;
 __kernel_off_t l_start;
 __kernel_off_t l_len;
 long l_sysid;
 __kernel_pid_t l_pid;
 long pad[4];
} flock_t;

typedef struct flock64 {
 short l_type;
 short l_whence;
 loff_t l_start;
 loff_t l_len;
 pid_t l_pid;
} flock64_t;
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fcntl.h" 2
# 659 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2

extern int fcntl_getlk(unsigned int, struct flock *);
extern int fcntl_setlk(unsigned int, unsigned int, struct flock *);

extern int fcntl_getlk64(unsigned int, struct flock64 *);
extern int fcntl_setlk64(unsigned int, unsigned int, struct flock64 *);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern struct file_lock *posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, unsigned int);
extern void posix_block_lock(struct file_lock *, struct file_lock *);
extern void posix_unblock_lock(struct file_lock *);
extern int posix_locks_deadlock(struct file_lock *, struct file_lock *);
extern int __get_lease(struct inode *inode, unsigned int flags);
extern time_t lease_get_mtime(struct inode *);
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

struct nameidata {
 struct dentry *dentry;
 struct vfsmount *mnt;
 struct qstr last;
 unsigned int flags;
 int last_type;
};
# 713 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/minix_fs_sb.h" 1






struct minix_sb_info {
   unsigned long s_ninodes;
   unsigned long s_nzones;
   unsigned long s_imap_blocks;
   unsigned long s_zmap_blocks;
   unsigned long s_firstdatazone;
   unsigned long s_log_zone_size;
   unsigned long s_max_size;
   int s_dirsize;
   int s_namelen;
   int s_link_max;
   struct buffer_head ** s_imap;
   struct buffer_head ** s_zmap;
   struct buffer_head * s_sbh;
   struct minix_super_block * s_ms;
   unsigned short s_mount_state;
   unsigned short s_version;
};
# 714 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext2_fs_sb.h" 1
# 30 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext2_fs_sb.h"
struct ext2_sb_info {
 unsigned long s_frag_size;
 unsigned long s_frags_per_block;
 unsigned long s_inodes_per_block;
 unsigned long s_frags_per_group;
 unsigned long s_blocks_per_group;
 unsigned long s_inodes_per_group;
 unsigned long s_itb_per_group;
 unsigned long s_gdb_count;
 unsigned long s_desc_per_block;
 unsigned long s_groups_count;
 struct buffer_head * s_sbh;
 struct ext2_super_block * s_es;
 struct buffer_head ** s_group_desc;
 unsigned short s_loaded_inode_bitmaps;
 unsigned short s_loaded_block_bitmaps;
 unsigned long s_inode_bitmap_number[8];
 struct buffer_head * s_inode_bitmap[8];
 unsigned long s_block_bitmap_number[8];
 struct buffer_head * s_block_bitmap[8];
 unsigned long s_mount_opt;
 uid_t s_resuid;
 gid_t s_resgid;
 unsigned short s_mount_state;
 unsigned short s_pad;
 int s_addr_per_block_bits;
 int s_desc_per_block_bits;
 int s_inode_size;
 int s_first_ino;
};
# 715 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext3_fs_sb.h" 1
# 35 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ext3_fs_sb.h"
struct ext3_sb_info {
 unsigned long s_frag_size;
 unsigned long s_frags_per_block;
 unsigned long s_inodes_per_block;
 unsigned long s_frags_per_group;
 unsigned long s_blocks_per_group;
 unsigned long s_inodes_per_group;
 unsigned long s_itb_per_group;
 unsigned long s_gdb_count;
 unsigned long s_desc_per_block;
 unsigned long s_groups_count;
 struct buffer_head * s_sbh;
 struct ext3_super_block * s_es;
 struct buffer_head ** s_group_desc;
 unsigned short s_loaded_inode_bitmaps;
 unsigned short s_loaded_block_bitmaps;
 unsigned long s_inode_bitmap_number[8];
 struct buffer_head * s_inode_bitmap[8];
 unsigned long s_block_bitmap_number[8];
 struct buffer_head * s_block_bitmap[8];
 unsigned long s_mount_opt;
 uid_t s_resuid;
 gid_t s_resgid;
 unsigned short s_mount_state;
 unsigned short s_pad;
 int s_addr_per_block_bits;
 int s_desc_per_block_bits;
 int s_inode_size;
 int s_first_ino;
 u32 s_next_generation;


 struct inode * s_journal_inode;
 struct journal_s * s_journal;
 struct list_head s_orphan;
 unsigned long s_commit_interval;
 struct block_device *journal_bdev;

 struct timer_list turn_ro_timer;
 wait_queue_head_t ro_wait_queue;

};
# 716 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hpfs_fs_sb.h" 1



struct hpfs_sb_info {
 ino_t sb_root;
 unsigned sb_fs_size;
 unsigned sb_bitmaps;
 unsigned sb_dirband_start;
 unsigned sb_dirband_size;
 unsigned sb_dmap;
 unsigned sb_n_free;
 unsigned sb_n_free_dnodes;
 uid_t sb_uid;
 gid_t sb_gid;
 umode_t sb_mode;
 unsigned sb_conv : 2;
 unsigned sb_eas : 2;
 unsigned sb_err : 2;
 unsigned sb_chk : 2;
 unsigned sb_lowercase : 1;
 unsigned sb_was_error : 1;
 unsigned sb_chkdsk : 2;
 unsigned sb_rd_fnode : 2;
 unsigned sb_rd_inode : 2;


 wait_queue_head_t sb_iget_q;
 unsigned char *sb_cp_table;


 unsigned *sb_bmp_dir;
 unsigned sb_c_bitmap;
 unsigned sb_max_fwd_alloc;
 wait_queue_head_t sb_creation_de;

 unsigned sb_creation_de_lock : 1;

 int sb_timeshift;
};
# 717 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ntfs_fs_sb.h" 1





struct ntfs_sb_info{

 ntfs_uid_t uid;
 ntfs_gid_t gid;
 ntmode_t umask;
 void *nls_map;
 unsigned int ngt;
 char mft_zone_multiplier;
 unsigned long mft_data_pos;
 ntfs_cluster_t mft_zone_pos;
 ntfs_cluster_t mft_zone_start;
 ntfs_cluster_t mft_zone_end;
 ntfs_cluster_t data1_zone_pos;
 ntfs_cluster_t data2_zone_pos;


 ntfs_size_t partition_bias;

 ntfs_u32 at_standard_information;
 ntfs_u32 at_attribute_list;
 ntfs_u32 at_file_name;
 ntfs_u32 at_volume_version;
 ntfs_u32 at_security_descriptor;
 ntfs_u32 at_volume_name;
 ntfs_u32 at_volume_information;
 ntfs_u32 at_data;
 ntfs_u32 at_index_root;
 ntfs_u32 at_index_allocation;
 ntfs_u32 at_bitmap;
 ntfs_u32 at_symlink;

 int sector_size;
 int cluster_size;
 int cluster_size_bits;
 int mft_clusters_per_record;
 int mft_record_size;
 int mft_record_size_bits;
 int index_clusters_per_record;
 int index_record_size;
 int index_record_size_bits;
 ntfs_cluster_t nr_clusters;
 ntfs_cluster_t mft_lcn;
 ntfs_cluster_t mft_mirr_lcn;

 unsigned char *mft;
 unsigned short *upcase;
 unsigned int upcase_length;

 struct ntfs_inode_info *mft_ino;
 struct ntfs_inode_info *mftmirr;
 struct ntfs_inode_info *bitmap;
 struct super_block *sb;
 unsigned char ino_flags;
};
# 718 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/msdos_fs_sb.h" 1


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fat_cvf.h" 1





struct cvf_format
{ int cvf_version;
  char* cvf_version_text;
  unsigned long flags;
  int (*detect_cvf) (struct super_block*sb);
  int (*mount_cvf) (struct super_block*sb,char*options);
  int (*unmount_cvf) (struct super_block*sb);
  struct buffer_head* (*cvf_bread) (struct super_block*sb,int block);
  struct buffer_head* (*cvf_getblk) (struct super_block*sb,int block);
  void (*cvf_brelse) (struct super_block *sb,struct buffer_head *bh);
  void (*cvf_mark_buffer_dirty) (struct super_block *sb,
                              struct buffer_head *bh);
  void (*cvf_set_uptodate) (struct super_block *sb,
                         struct buffer_head *bh,
                         int val);
  int (*cvf_is_uptodate) (struct super_block *sb,struct buffer_head *bh);
  void (*cvf_ll_rw_block) (struct super_block *sb,
                        int opr,
                        int nbreq,
                        struct buffer_head *bh[32]);
  int (*fat_access) (struct super_block *sb,int nr,int new_value);
  int (*cvf_statfs) (struct super_block *sb,struct statfs *buf, int bufsiz);
  int (*cvf_bmap) (struct inode *inode,int block);
  ssize_t (*cvf_file_read) ( struct file *, char *, size_t, loff_t *);
  ssize_t (*cvf_file_write) ( struct file *, const char *, size_t, loff_t *);
  int (*cvf_mmap) (struct file *, struct vm_area_struct *);
  int (*cvf_readpage) (struct inode *, struct page *);
  int (*cvf_writepage) (struct inode *, struct page *);
  int (*cvf_dir_ioctl) (struct inode * inode, struct file * filp,
                        unsigned int cmd, unsigned long arg);
  void (*zero_out_cluster) (struct inode*, int clusternr);
};

int register_cvf_format(struct cvf_format*cvf_format);
int unregister_cvf_format(struct cvf_format*cvf_format);
void dec_cvf_format_use_count_by_version(int version);
int detect_cvf(struct super_block*sb,char*force);

extern struct cvf_format *cvf_formats[];
extern int cvf_format_use_count[];
# 4 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/msdos_fs_sb.h" 2





struct fat_mount_options {
 uid_t fs_uid;
 gid_t fs_gid;
 unsigned short fs_umask;
 unsigned short codepage;
 char *iocharset;
 unsigned short shortname;
 unsigned char name_check;
 unsigned char conversion;
 unsigned quiet:1,
   showexec:1,
   sys_immutable:1,
   dotsOK:1,
   isvfat:1,
   utf8:1,
   unicode_xlate:1,
   posixfs:1,
   numtail:1,
   atari:1,
   fat32:1,
   nocase:1;
};

struct msdos_sb_info {
 unsigned short cluster_size;
 unsigned short cluster_bits;
 unsigned char fats,fat_bits;
 unsigned short fat_start;
 unsigned long fat_length;
 unsigned long dir_start;
 unsigned short dir_entries;
 unsigned long data_start;
 unsigned long clusters;
 unsigned long root_cluster;
 unsigned long fsinfo_sector;
 struct semaphore fat_lock;
 int prev_free;
 int free_clusters;
 struct fat_mount_options options;
 struct nls_table *nls_disk;
 struct nls_table *nls_io;
 struct cvf_format* cvf_format;
 void *dir_ops;
 void *private_data;
 int dir_per_block;
 int dir_per_block_bits;
};
# 719 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/iso_fs_sb.h" 1






struct isofs_sb_info {
 unsigned long s_ninodes;
 unsigned long s_nzones;
 unsigned long s_firstdatazone;
 unsigned long s_log_zone_size;
 unsigned long s_max_size;

 unsigned char s_high_sierra;
 unsigned char s_mapping;
 int s_rock_offset;
 unsigned char s_rock;
 unsigned char s_joliet_level;
 unsigned char s_utf8;
 unsigned char s_cruft;


 unsigned char s_unhide;
 unsigned char s_nosuid;
 unsigned char s_nodev;
 unsigned char s_nocompress;

 mode_t s_mode;
 gid_t s_gid;
 uid_t s_uid;
 struct nls_table *s_nls_iocharset;
};
# 720 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs_fs_sb.h" 1
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/nfs_fs_sb.h"
struct nfs_server {
 struct rpc_clnt * client;
 struct nfs_rpc_ops * rpc_ops;
 int flags;
 unsigned int rsize;
 unsigned int rpages;
 unsigned int wsize;
 unsigned int wpages;
 unsigned int dtsize;
 unsigned int bsize;
 unsigned int acregmin;
 unsigned int acregmax;
 unsigned int acdirmin;
 unsigned int acdirmax;
 unsigned int namelen;
 char * hostname;
 struct nfs_reqlist * rw_requests;
 struct list_head lru_read,
    lru_dirty,
    lru_commit,
    lru_busy;
};




struct nfs_sb_info {
 struct nfs_server s_server;
};
# 721 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sysv_fs_sb.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sysv_fs_sb.h"
struct sysv_sb_info {
 int s_type;
 char s_bytesex;
 char s_truncate;

 nlink_t s_link_max;
 unsigned int s_inodes_per_block;
 unsigned int s_inodes_per_block_1;
 unsigned int s_inodes_per_block_bits;
 unsigned int s_ind_per_block;
 unsigned int s_ind_per_block_bits;
 unsigned int s_ind_per_block_2;
 unsigned int s_toobig_block;
 unsigned int s_block_base;
 unsigned short s_fic_size;
 unsigned short s_flc_size;

 struct buffer_head *s_bh1;
 struct buffer_head *s_bh2;


 char * s_sbd1;
 char * s_sbd2;
 u16 *s_sb_fic_count;
        u16 *s_sb_fic_inodes;
 u16 *s_sb_total_free_inodes;
 u16 *s_bcache_count;
 u32 *s_bcache;
 u32 *s_free_blocks;
 u32 *s_sb_time;
 u32 *s_sb_state;


 u32 s_firstinodezone;
 u32 s_firstdatazone;
 u32 s_ninodes;
 u32 s_ndatazones;
 u32 s_nzones;
 u16 s_namelen;
};
# 722 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_sb.h" 1
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/affs_fs_sb.h"
struct affs_bm_info {
 u32 bm_key;
 u32 bm_free;
};

struct affs_sb_info {
 int s_partition_size;
 int s_reserved;

 u32 s_data_blksize;
 u32 s_root_block;
 int s_hashsize;
 unsigned long s_flags;
 uid_t s_uid;
 gid_t s_gid;
 umode_t s_mode;
 struct buffer_head *s_root_bh;
 struct semaphore s_bmlock;
 struct affs_bm_info *s_bitmap;
 u32 s_bmap_count;
 u32 s_bmap_bits;
 u32 s_last_bmap;
 struct buffer_head *s_bmap_bh;
 char *s_prefix;
 int s_prefix_len;
 char s_volume[32];
};
# 723 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs_sb.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs_sb.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs.h" 1
# 237 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs.h"
struct ufs_timeval {
 __s32 tv_sec;
 __s32 tv_usec;
};

struct ufs_dir_entry {
 __u32 d_ino;
 __u16 d_reclen;
 union {
  __u16 d_namlen;
  struct {
   __u8 d_type;
   __u8 d_namlen;
  } d_44;
 } d_u;
 __u8 d_name[255 + 1];
};

struct ufs_csum {
 __u32 cs_ndir;
 __u32 cs_nbfree;
 __u32 cs_nifree;
 __u32 cs_nffree;
};




struct ufs_super_block {
 __u32 fs_link;
 __u32 fs_rlink;
 __u32 fs_sblkno;
 __u32 fs_cblkno;
 __u32 fs_iblkno;
 __u32 fs_dblkno;
 __u32 fs_cgoffset;
 __u32 fs_cgmask;
 __u32 fs_time;
 __u32 fs_size;
 __u32 fs_dsize;
 __u32 fs_ncg;
 __u32 fs_bsize;
 __u32 fs_fsize;
 __u32 fs_frag;

 __u32 fs_minfree;
 __u32 fs_rotdelay;
 __u32 fs_rps;

 __u32 fs_bmask;
 __u32 fs_fmask;
 __u32 fs_bshift;
 __u32 fs_fshift;

 __u32 fs_maxcontig;
 __u32 fs_maxbpg;

 __u32 fs_fragshift;
 __u32 fs_fsbtodb;
 __u32 fs_sbsize;
 __u32 fs_csmask;
 __u32 fs_csshift;
 __u32 fs_nindir;
 __u32 fs_inopb;
 __u32 fs_nspf;

 __u32 fs_optim;

 union {
  struct {
   __u32 fs_npsect;
  } fs_sun;
  struct {
   __s32 fs_state;
  } fs_sunx86;
 } fs_u1;
 __u32 fs_interleave;
 __u32 fs_trackskew;




 __u32 fs_id[2];

 __u32 fs_csaddr;
 __u32 fs_cssize;
 __u32 fs_cgsize;

 __u32 fs_ntrak;
 __u32 fs_nsect;
 __u32 fs_spc;

 __u32 fs_ncyl;

 __u32 fs_cpg;
 __u32 fs_ipg;
 __u32 fs_fpg;

 struct ufs_csum fs_cstotal;

 __s8 fs_fmod;
 __s8 fs_clean;
 __s8 fs_ronly;
 __s8 fs_flags;
 __s8 fs_fsmnt[512];

 __u32 fs_cgrotor;
 __u32 fs_csp[31];
 __u32 fs_maxcluster;
 __u32 fs_cpc;
 __u16 fs_opostbl[16][8];
 union {
  struct {
   __s32 fs_sparecon[53];
   __s32 fs_reclaim;
   __s32 fs_sparecon2[1];
   __s32 fs_state;
   __u32 fs_qbmask[2];
   __u32 fs_qfmask[2];
  } fs_sun;
  struct {
   __s32 fs_sparecon[53];
   __s32 fs_reclaim;
   __s32 fs_sparecon2[1];
   __u32 fs_npsect;
   __u32 fs_qbmask[2];
   __u32 fs_qfmask[2];
  } fs_sunx86;
  struct {
   __s32 fs_sparecon[50];
   __s32 fs_contigsumsize;
   __s32 fs_maxsymlinklen;
   __s32 fs_inodefmt;
   __u32 fs_maxfilesize[2];
   __u32 fs_qbmask[2];
   __u32 fs_qfmask[2];
   __s32 fs_state;
  } fs_44;
 } fs_u2;
 __s32 fs_postblformat;
 __s32 fs_nrpos;
 __s32 fs_postbloff;
 __s32 fs_rotbloff;
 __s32 fs_magic;
 __u8 fs_space[1];
};
# 415 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs.h"
struct ufs_cylinder_group {
 __u32 cg_link;
 __u32 cg_magic;
 __u32 cg_time;
 __u32 cg_cgx;
 __u16 cg_ncyl;
 __u16 cg_niblk;
 __u32 cg_ndblk;
 struct ufs_csum cg_cs;
 __u32 cg_rotor;
 __u32 cg_frotor;
 __u32 cg_irotor;
 __u32 cg_frsum[(8192 / 1024)];
 __u32 cg_btotoff;
 __u32 cg_boff;
 __u32 cg_iusedoff;
 __u32 cg_freeoff;
 __u32 cg_nextfreeoff;
 union {
  struct {
   __u32 cg_clustersumoff;
   __u32 cg_clusteroff;
   __u32 cg_nclusterblks;
   __u32 cg_sparecon[13];
  } cg_44;
  __u32 cg_sparecon[16];
 } cg_u;
 __u8 cg_space[1];

};




struct ufs_inode {
 __u16 ui_mode;
 __u16 ui_nlink;
 union {
  struct {
   __u16 ui_suid;
   __u16 ui_sgid;
  } oldids;
  __u32 ui_inumber;
  __u32 ui_author;
 } ui_u1;
 __u64 ui_size;
 struct ufs_timeval ui_atime;
 struct ufs_timeval ui_mtime;
 struct ufs_timeval ui_ctime;
 union {
  struct {
   __u32 ui_db[12];
   __u32 ui_ib[3];
  } ui_addr;
  __u8 ui_symlink[4*(12 +3)];
 } ui_u2;
 __u32 ui_flags;
 __u32 ui_blocks;
 __u32 ui_gen;
 union {
  struct {
   __u32 ui_shadow;
   __u32 ui_uid;
   __u32 ui_gid;
   __u32 ui_oeftflag;
  } ui_sun;
  struct {
   __u32 ui_uid;
   __u32 ui_gid;
   __s32 ui_spare[2];
  } ui_44;
  struct {
   __u32 ui_uid;
   __u32 ui_gid;
   __u16 ui_modeh;
   __u16 ui_spare;
   __u32 ui_trans;
  } ui_hurd;
 } ui_u3;
};
# 514 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs.h"
extern void ufs_free_fragments (struct inode *, unsigned, unsigned);
extern void ufs_free_blocks (struct inode *, unsigned, unsigned);
extern unsigned ufs_new_fragments (struct inode *, u32 *, unsigned, unsigned, unsigned, int *);


extern struct ufs_cg_private_info * ufs_load_cylinder (struct super_block *, unsigned);
extern void ufs_put_cylinder (struct super_block *, unsigned);


extern struct inode_operations ufs_dir_inode_operations;
extern int ufs_check_dir_entry (const char *, struct inode *, struct ufs_dir_entry *, struct buffer_head *, unsigned long);
extern int ufs_add_link (struct dentry *, struct inode *);
extern ino_t ufs_inode_by_name(struct inode *, struct dentry *);
extern int ufs_make_empty(struct inode *, struct inode *);
extern struct ufs_dir_entry * ufs_find_entry (struct dentry *, struct buffer_head **);
extern int ufs_delete_entry (struct inode *, struct ufs_dir_entry *, struct buffer_head *);
extern int ufs_empty_dir (struct inode *);
extern struct ufs_dir_entry * ufs_dotdot (struct inode *, struct buffer_head **);
extern void ufs_set_link(struct inode *, struct ufs_dir_entry *, struct buffer_head *, struct inode *);


extern struct inode_operations ufs_file_inode_operations;
extern struct file_operations ufs_file_operations;

extern struct address_space_operations ufs_aops;


extern void ufs_free_inode (struct inode *inode);
extern struct inode * ufs_new_inode (const struct inode *, int);


extern int ufs_frag_map (struct inode *, int);
extern void ufs_read_inode (struct inode *);
extern void ufs_put_inode (struct inode *);
extern void ufs_write_inode (struct inode *, int);
extern int ufs_sync_inode (struct inode *);
extern void ufs_delete_inode (struct inode *);
extern struct buffer_head * ufs_getfrag (struct inode *, unsigned, int, int *);
extern struct buffer_head * ufs_bread (struct inode *, unsigned, int, int *);


extern struct file_operations ufs_dir_operations;


extern struct file_system_type ufs_fs_type;
extern void ufs_warning (struct super_block *, const char *, const char *, ...) __attribute__ ((format (printf, 3, 4)));
extern void ufs_error (struct super_block *, const char *, const char *, ...) __attribute__ ((format (printf, 3, 4)));
extern void ufs_panic (struct super_block *, const char *, const char *, ...) __attribute__ ((format (printf, 3, 4)));
extern void ufs_write_super (struct super_block *);


extern struct inode_operations ufs_fast_symlink_inode_operations;


extern void ufs_truncate (struct inode *);
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ufs_fs_sb.h" 2





struct ufs_buffer_head {
 unsigned fragment;
 unsigned count;
 struct buffer_head * bh[(8192 / 1024)];
};

struct ufs_cg_private_info {
 struct ufs_cylinder_group ucg;
 __u32 c_cgx;
 __u16 c_ncyl;
 __u16 c_niblk;
 __u32 c_ndblk;
 __u32 c_rotor;
 __u32 c_frotor;
 __u32 c_irotor;
 __u32 c_btotoff;
 __u32 c_boff;
 __u32 c_iusedoff;
 __u32 c_freeoff;
 __u32 c_nextfreeoff;
 __u32 c_clustersumoff;
 __u32 c_clusteroff;
 __u32 c_nclusterblks;
};

struct ufs_sb_private_info {
 struct ufs_buffer_head s_ubh;
 __u32 s_sblkno;
 __u32 s_cblkno;
 __u32 s_iblkno;
 __u32 s_dblkno;
 __u32 s_cgoffset;
 __u32 s_cgmask;
 __u32 s_size;
 __u32 s_dsize;
 __u32 s_ncg;
 __u32 s_bsize;
 __u32 s_fsize;
 __u32 s_fpb;
 __u32 s_minfree;
 __u32 s_bmask;
 __u32 s_fmask;
 __u32 s_bshift;
 __u32 s_fshift;
 __u32 s_fpbshift;
 __u32 s_fsbtodb;
 __u32 s_sbsize;
 __u32 s_csmask;
 __u32 s_csshift;
 __u32 s_nindir;
 __u32 s_inopb;
 __u32 s_nspf;
 __u32 s_npsect;
 __u32 s_interleave;
 __u32 s_trackskew;
 __u32 s_csaddr;
 __u32 s_cssize;
 __u32 s_cgsize;
 __u32 s_ntrak;
 __u32 s_nsect;
 __u32 s_spc;
 __u32 s_ipg;
 __u32 s_fpg;
 __u32 s_cpc;
 __s32 s_contigsumsize;
 __s64 s_qbmask;
 __s64 s_qfmask;
 __s32 s_postblformat;
 __s32 s_nrpos;
        __s32 s_postbloff;
 __s32 s_rotbloff;

 __u32 s_fpbmask;
 __u32 s_apb;
 __u32 s_2apb;
 __u32 s_3apb;
 __u32 s_apbmask;
 __u32 s_apbshift;
 __u32 s_2apbshift;
 __u32 s_3apbshift;
 __u32 s_nspfshift;
 __u32 s_nspb;
 __u32 s_inopf;
 __u32 s_sbbase;
 __u32 s_bpf;
 __u32 s_bpfshift;
 __u32 s_bpfmask;

 __u32 s_maxsymlinklen;
};





struct ufs_sb_info {
 struct ufs_sb_private_info * s_uspi;
 struct ufs_csum * s_csp[31];
 unsigned s_bytesex;
 unsigned s_flags;
 struct buffer_head ** s_ucg;
 struct ufs_cg_private_info * s_ucpi[8];
 unsigned s_cgno[8];
 unsigned short s_cg_loaded;
 unsigned s_mount_opt;
};







struct ufs_super_block_first {
 __u32 fs_link;
 __u32 fs_rlink;
 __u32 fs_sblkno;
 __u32 fs_cblkno;
 __u32 fs_iblkno;
 __u32 fs_dblkno;
 __u32 fs_cgoffset;
 __u32 fs_cgmask;
 __u32 fs_time;
 __u32 fs_size;
 __u32 fs_dsize;
 __u32 fs_ncg;
 __u32 fs_bsize;
 __u32 fs_fsize;
 __u32 fs_frag;
 __u32 fs_minfree;
 __u32 fs_rotdelay;
 __u32 fs_rps;
 __u32 fs_bmask;
 __u32 fs_fmask;
 __u32 fs_bshift;
 __u32 fs_fshift;
 __u32 fs_maxcontig;
 __u32 fs_maxbpg;
 __u32 fs_fragshift;
 __u32 fs_fsbtodb;
 __u32 fs_sbsize;
 __u32 fs_csmask;
 __u32 fs_csshift;
 __u32 fs_nindir;
 __u32 fs_inopb;
 __u32 fs_nspf;
 __u32 fs_optim;
 union {
  struct {
   __u32 fs_npsect;
  } fs_sun;
  struct {
   __s32 fs_state;
  } fs_sunx86;
 } fs_u1;
 __u32 fs_interleave;
 __u32 fs_trackskew;
 __u32 fs_id[2];
 __u32 fs_csaddr;
 __u32 fs_cssize;
 __u32 fs_cgsize;
 __u32 fs_ntrak;
 __u32 fs_nsect;
 __u32 fs_spc;
 __u32 fs_ncyl;
 __u32 fs_cpg;
 __u32 fs_ipg;
 __u32 fs_fpg;
 struct ufs_csum fs_cstotal;
 __s8 fs_fmod;
 __s8 fs_clean;
 __s8 fs_ronly;
 __s8 fs_flags;
 __s8 fs_fsmnt[512 - 212];

};

struct ufs_super_block_second {
 __s8 fs_fsmnt[212];
 __u32 fs_cgrotor;
 __u32 fs_csp[31];
 __u32 fs_maxcluster;
 __u32 fs_cpc;
 __u16 fs_opostbl[82];
};

struct ufs_super_block_third {
 __u16 fs_opostbl[46];
 union {
  struct {
   __s32 fs_sparecon[53];
   __s32 fs_reclaim;
   __s32 fs_sparecon2[1];
   __s32 fs_state;
   __u32 fs_qbmask[2];
   __u32 fs_qfmask[2];
  } fs_sun;
  struct {
   __s32 fs_sparecon[53];
   __s32 fs_reclaim;
   __s32 fs_sparecon2[1];
   __u32 fs_npsect;
   __u32 fs_qbmask[2];
   __u32 fs_qfmask[2];
  } fs_sunx86;
  struct {
   __s32 fs_sparecon[50];
   __s32 fs_contigsumsize;
   __s32 fs_maxsymlinklen;
   __s32 fs_inodefmt;
   __u32 fs_maxfilesize[2];
   __u32 fs_qbmask[2];
   __u32 fs_qfmask[2];
   __s32 fs_state;
  } fs_44;
 } fs_u2;
 __s32 fs_postblformat;
 __s32 fs_nrpos;
 __s32 fs_postbloff;
 __s32 fs_rotbloff;
 __s32 fs_magic;
 __u8 fs_space[1];
};
# 724 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/efs_fs_sb.h" 1
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/efs_fs_sb.h"
struct efs_super {
 int32_t fs_size;
 int32_t fs_firstcg;
 int32_t fs_cgfsize;
 short fs_cgisize;
 short fs_sectors;
 short fs_heads;
 short fs_ncg;
 short fs_dirty;
 int32_t fs_time;
 int32_t fs_magic;
 char fs_fname[6];
 char fs_fpack[6];
 int32_t fs_bmsize;
 int32_t fs_tfree;
 int32_t fs_tinode;
 int32_t fs_bmblock;
 int32_t fs_replsb;
 int32_t fs_lastialloc;
 char fs_spare[20];
 int32_t fs_checksum;
};


struct efs_sb_info {
 int32_t fs_magic;
 int32_t fs_start;
 int32_t first_block;
 int32_t total_blocks;
 int32_t group_size;
 int32_t data_free;
 int32_t inode_free;
 short inode_blocks;
 short total_groups;
};
# 725 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/romfs_fs_sb.h" 1





struct romfs_sb_info {
 unsigned long s_maxsize;
};
# 726 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb_fs_sb.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb_fs_sb.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb.h"
enum smb_protocol {
 SMB_PROTOCOL_NONE,
 SMB_PROTOCOL_CORE,
 SMB_PROTOCOL_COREPLUS,
 SMB_PROTOCOL_LANMAN1,
 SMB_PROTOCOL_LANMAN2,
 SMB_PROTOCOL_NT1
};

enum smb_case_hndl {
 SMB_CASE_DEFAULT,
 SMB_CASE_LOWER,
 SMB_CASE_UPPER
};

struct smb_dskattr {
        __u16 total;
        __u16 allocblocks;
        __u16 blocksize;
        __u16 free;
};

struct smb_conn_opt {


 unsigned int fd;

 enum smb_protocol protocol;
 enum smb_case_hndl case_handling;



 __u32 max_xmit;
 __u16 server_uid;
 __u16 tid;


        __u16 secmode;
        __u16 maxmux;
        __u16 maxvcs;
        __u16 rawmode;
        __u32 sesskey;


 __u32 maxraw;
 __u32 capabilities;
 __s16 serverzone;
};




struct smb_nls_codepage {
 char local_name[20];
 char remote_name[20];
};
# 78 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb.h"
struct smb_fattr {

 __u16 attr;

 unsigned long f_ino;
 umode_t f_mode;
 nlink_t f_nlink;
 uid_t f_uid;
 gid_t f_gid;
 kdev_t f_rdev;
 loff_t f_size;
 time_t f_atime;
 time_t f_mtime;
 time_t f_ctime;
 unsigned long f_blksize;
 unsigned long f_blocks;
 int f_unix;
};

enum smb_conn_state {
 CONN_VALID,
 CONN_INVALID,

 CONN_RETRIED,
 CONN_RETRYING
};
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/smb_fs_sb.h" 2







struct smb_sb_info {
        enum smb_conn_state state;
 struct file * sock_file;

        struct smb_mount_data_kernel *mnt;
        unsigned char *temp_buf;




 unsigned int generation;
 pid_t conn_pid;
 struct smb_conn_opt opt;

 struct semaphore sem;
 wait_queue_head_t wait;

 __u32 packet_size;
 unsigned char * packet;
        unsigned short rcls;
        unsigned short err;


        void *data_ready;


 struct nls_table *remote_nls;
 struct nls_table *local_nls;




 char *name_buf;

 struct smb_ops *ops;
};


static inline void
smb_lock_server(struct smb_sb_info *server)
{
 down(&(server->sem));
}

static inline void
smb_unlock_server(struct smb_sb_info *server)
{
 up(&(server->sem));
}
# 727 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hfs_fs_sb.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hfs_fs_sb.h"
struct hfs_name;

typedef int (*hfs_namein_fn) (char *, const struct hfs_name *);
typedef void (*hfs_nameout_fn) (struct hfs_name *, const char *, int);
typedef void (*hfs_ifill_fn) (struct inode *, ino_t, const int);






struct hfs_sb_info {
 int magic;
 struct hfs_mdb *s_mdb;
 int s_quiet;

 int s_lowercase;
 int s_afpd;
 int s_version;
 hfs_namein_fn s_namein;


 hfs_nameout_fn s_nameout;


 hfs_ifill_fn s_ifill;

 const struct hfs_name *s_reserved1;
 const struct hfs_name *s_reserved2;
 __u32 s_type;
 __u32 s_creator;
 umode_t s_umask;

 uid_t s_uid;
 gid_t s_gid;
 char s_conv;
};
# 728 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/adfs_fs_sb.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/adfs_fs_sb.h"
struct adfs_discmap;
struct adfs_dir_ops;




struct adfs_sb_info {
 struct adfs_discmap *s_map;
 struct adfs_dir_ops *s_dir;

 uid_t s_uid;
 gid_t s_gid;
 umode_t s_owner_mask;
 umode_t s_other_mask;

 __u32 s_ids_per_zone;
 __u32 s_idlen;
 __u32 s_map_size;
 unsigned long s_size;
 signed int s_map2blk;
 unsigned int s_log2sharesize;
 unsigned int s_version;
 unsigned int s_namelen;
};
# 729 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs_sb.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs_sb.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs.h" 1
# 45 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs.h"
struct qnx4_inode_entry {
 char di_fname[16];
 qnx4_off_t di_size;
 qnx4_xtnt_t di_first_xtnt;
 __u32 di_xblk;
 __s32 di_ftime;
 __s32 di_mtime;
 __s32 di_atime;
 __s32 di_ctime;
 qnx4_nxtnt_t di_num_xtnts;
 qnx4_mode_t di_mode;
 qnx4_muid_t di_uid;
 qnx4_mgid_t di_gid;
 qnx4_nlink_t di_nlink;
 __u8 di_zero[4];
 qnx4_ftype_t di_type;
 __u8 di_status;
};

struct qnx4_link_info {
 char dl_fname[48];
 __u32 dl_inode_blk;
 __u8 dl_inode_ndx;
 __u8 dl_spare[10];
 __u8 dl_status;
};

struct qnx4_xblk {
 __u32 xblk_next_xblk;
 __u32 xblk_prev_xblk;
 __u8 xblk_num_xtnts;
 __u8 xblk_spare[3];
 __s32 xblk_num_blocks;
 qnx4_xtnt_t xblk_xtnts[60];
 char xblk_signature[8];
 qnx4_xtnt_t xblk_first_xtnt;
};

struct qnx4_super_block {
 struct qnx4_inode_entry RootDir;
 struct qnx4_inode_entry Inode;
 struct qnx4_inode_entry Boot;
 struct qnx4_inode_entry AltBoot;
};
# 100 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs.h"
extern struct dentry *qnx4_lookup(struct inode *dir, struct dentry *dentry);
extern unsigned long qnx4_count_free_blocks(struct super_block *sb);
extern unsigned long qnx4_block_map(struct inode *inode, long iblock);

extern struct buffer_head *qnx4_getblk(struct inode *, int, int);
extern struct buffer_head *qnx4_bread(struct inode *, int, int);

extern int qnx4_create(struct inode *dir, struct dentry *dentry, int mode);
extern struct inode_operations qnx4_file_inode_operations;
extern struct inode_operations qnx4_dir_inode_operations;
extern struct file_operations qnx4_file_operations;
extern struct file_operations qnx4_dir_operations;
extern int qnx4_is_free(struct super_block *sb, long block);
extern int qnx4_set_bitmap(struct super_block *sb, long block, int busy);
extern int qnx4_create(struct inode *inode, struct dentry *dentry, int mode);
extern void qnx4_truncate(struct inode *inode);
extern void qnx4_free_inode(struct inode *inode);
extern int qnx4_unlink(struct inode *dir, struct dentry *dentry);
extern int qnx4_rmdir(struct inode *dir, struct dentry *dentry);
extern int qnx4_sync_file(struct file *file, struct dentry *dentry, int);
extern int qnx4_sync_inode(struct inode *inode);
extern int qnx4_get_block(struct inode *inode, long iblock, struct buffer_head *bh, int create);
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/qnx4_fs_sb.h" 2





struct qnx4_sb_info {
 struct buffer_head *sb_buf;
 struct qnx4_super_block *sb;
 unsigned int Version;
 struct qnx4_inode_entry *BitMap;
};
# 730 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_sb.h" 1







# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h" 1
# 38 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h"
struct tq_struct {
 struct list_head list;
 unsigned long sync;
 void (*routine)(void *);
 void *data;
};
# 64 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h"
typedef struct list_head task_queue;




extern task_queue tq_timer, tq_immediate, tq_disk;
# 94 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h"
extern spinlock_t tqueue_lock;





extern void __run_task_queue(task_queue *list);

static inline void run_task_queue(task_queue *list)
{
 if ((!list_empty(&*list)))
  __run_task_queue(list);
}
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_sb.h" 2
# 28 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_sb.h"
typedef enum {
  reiserfs_attrs_cleared = 0x00000001,
} reiserfs_super_block_flags;
# 147 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_sb.h"
struct reiserfs_journal_cnode {
  struct buffer_head *bh ;
  kdev_t dev ;
  unsigned long blocknr ;
  long state ;
  struct reiserfs_journal_list *jlist ;
  struct reiserfs_journal_cnode *next ;
  struct reiserfs_journal_cnode *prev ;
  struct reiserfs_journal_cnode *hprev ;
  struct reiserfs_journal_cnode *hnext ;
};

struct reiserfs_bitmap_node {
  int id ;
  char *data ;
  struct list_head list ;
} ;

struct reiserfs_list_bitmap {
  struct reiserfs_journal_list *journal_list ;
  struct reiserfs_bitmap_node **bitmaps ;
} ;




struct reiserfs_transaction_handle {

  char *t_caller ;
  int t_blocks_logged ;
  int t_blocks_allocated ;
  unsigned long t_trans_id ;
  struct super_block *t_super ;

  int displace_new_blocks:1;

} ;







struct reiserfs_journal_list {
  unsigned long j_start ;
  unsigned long j_len ;
  atomic_t j_nonzerolen ;
  atomic_t j_commit_left ;
  atomic_t j_flushing ;
  atomic_t j_commit_flushing ;
  atomic_t j_older_commits_done ;
  unsigned long j_trans_id ;
  time_t j_timestamp ;
  struct reiserfs_list_bitmap *j_list_bitmap ;
  struct buffer_head *j_commit_bh ;
  struct reiserfs_journal_cnode *j_realblock ;
  struct reiserfs_journal_cnode *j_freedlist ;
  wait_queue_head_t j_commit_wait ;
  wait_queue_head_t j_flush_wait ;
} ;

struct reiserfs_page_list ;

struct reiserfs_journal {
  struct buffer_head ** j_ap_blocks ;
  struct reiserfs_journal_cnode *j_last ;
  struct reiserfs_journal_cnode *j_first ;

  kdev_t j_dev;
  struct file *j_dev_file;
  struct block_device *j_dev_bd;
 int j_1st_reserved_block;

  long j_state ;
  unsigned long j_trans_id ;
  unsigned long j_mount_id ;
  unsigned long j_start ;
  unsigned long j_len ;
  unsigned long j_len_alloc ;
  atomic_t j_wcount ;
  unsigned long j_bcount ;
  unsigned long j_first_unflushed_offset ;
  unsigned long j_last_flush_trans_id ;
  struct buffer_head *j_header_bh ;




  struct reiserfs_page_list *j_flush_pages ;
  time_t j_trans_start_time ;
  wait_queue_head_t j_wait ;
  atomic_t j_wlock ;
  wait_queue_head_t j_join_wait ;
  atomic_t j_jlock ;
  int j_journal_list_index ;
  int j_list_bitmap_index ;
  int j_must_wait ;
  int j_next_full_flush ;
  int j_next_async_flush ;

  int j_cnode_used ;
  int j_cnode_free ;

  unsigned int s_journal_trans_max ;
  unsigned int s_journal_max_batch ;
  unsigned int s_journal_max_commit_age ;
  unsigned int s_journal_max_trans_age ;

  struct reiserfs_journal_cnode *j_cnode_free_list ;
  struct reiserfs_journal_cnode *j_cnode_free_orig ;

  int j_free_bitmap_nodes ;
  int j_used_bitmap_nodes ;
  struct list_head j_bitmap_nodes ;
  struct list_head j_dirty_buffers ;
  struct reiserfs_list_bitmap j_list_bitmap[5] ;
  struct reiserfs_journal_list j_journal_list[64] ;
  struct reiserfs_journal_cnode *j_hash_table[8192] ;
  struct reiserfs_journal_cnode *j_list_hash_table[8192] ;

  struct list_head j_prealloc_list;
};




typedef __u32 (*hashf_t) (const signed char *, int);

struct reiserfs_bitmap_info
{

    __u16 first_zero_hint;
    __u16 free_count;
    struct buffer_head *bh;
};

struct proc_dir_entry;
# 355 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_sb.h"
typedef struct reiserfs_proc_info_data
{} reiserfs_proc_info_data_t;



struct reiserfs_sb_info
{
    struct buffer_head * s_sbh;


    struct reiserfs_super_block * s_rs;
    struct reiserfs_bitmap_info * s_ap_bitmap;
    struct reiserfs_journal *s_journal ;
    unsigned short s_mount_state;


    void (*end_io_handler)(struct buffer_head *, int);
    hashf_t s_hash_function;


    unsigned long s_mount_opt;



    struct {
 unsigned long bits;
 unsigned long large_file_size;
 int border;
 int preallocmin;
 int preallocsize;


    } s_alloc_options;


    wait_queue_head_t s_wait;

    atomic_t s_generation_counter;

    unsigned long s_properties;



    int s_kmallocs;
    int s_disk_reads;
    int s_disk_writes;
    int s_fix_nodes;
    int s_do_balance;
    int s_unneeded_left_neighbor;
    int s_good_search_by_key_reada;
    int s_bmaps;
    int s_bmaps_without_search;
    int s_direct2indirect;
    int s_indirect2direct;



    int s_is_unlinked_ok;
    reiserfs_proc_info_data_t s_proc_info_data;
    struct proc_dir_entry *procdir;
    int reserved_blocks;
};
# 481 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/reiserfs_fs_sb.h"
void reiserfs_file_buffer (struct buffer_head * bh, int list);
int reiserfs_is_super(struct super_block *s) ;
int journal_mark_dirty(struct reiserfs_transaction_handle *, struct super_block *, struct buffer_head *bh) ;
int flush_old_commits(struct super_block *s, int) ;
int show_reiserfs_locks(void) ;
int reiserfs_resize(struct super_block *, unsigned long) ;
# 731 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/bfs_fs_sb.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/bfs_fs_sb.h"
struct bfs_sb_info {
 unsigned long si_blocks;
 unsigned long si_freeb;
 unsigned long si_freei;
 unsigned long si_lf_ioff;
 unsigned long si_lf_sblk;
 unsigned long si_lf_eblk;
 unsigned long si_lasti;
 char * si_imap;
 struct buffer_head * si_sbh;
 struct bfs_super_block * si_bfs_sb;
};
# 732 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/udf_fs_sb.h" 1
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/udf_fs_sb.h"
#pragma pack(1)
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/udf_fs_sb.h"
struct udf_meta_data
{
 __u32 s_meta_file_loc;
 __u32 s_mirror_file_loc;
 __u32 s_bitmap_file_loc;
 __u32 s_alloc_unit_size;
 __u16 s_align_unit_size;
 __u8 s_dup_md_flag;
 struct inode *s_metadata_fe;
 struct inode *s_mirror_fe;
 struct inode *s_bitmap_fe;
};

struct udf_sparing_data
{
 __u16 s_packet_len;
 struct buffer_head *s_spar_map[4];
};

struct udf_virtual_data
{
 __u32 s_num_entries;
 __u16 s_start_offset;
};

struct udf_bitmap
{
 __u32 s_extLength;
 __u32 s_extPosition;
 __u16 s_nr_groups;
 struct buffer_head **s_block_bitmap;
};

struct udf_part_map
{
 union
 {
  struct udf_bitmap *s_bitmap;
  struct inode *s_table;
 } s_uspace;
 union
 {
  struct udf_bitmap *s_bitmap;
  struct inode *s_table;
 } s_fspace;
 __u32 s_partition_root;
 __u32 s_partition_len;
 __u16 s_partition_type;
 __u16 s_partition_num;
 union
 {
  struct udf_sparing_data s_sparing;
  struct udf_virtual_data s_virtual;
  struct udf_meta_data s_metadata;
 } s_type_specific;
 __u32 (*s_partition_func)(struct super_block *, __u32, __u16, __u32);
 __u16 s_volumeseqnum;
 __u16 s_partition_flags;
};

#pragma pack()

struct udf_sb_info
{
 struct udf_part_map *s_partmaps;
 __u8 s_volident[32];


 __u16 s_partitions;
 __u16 s_partition;


 __s32 s_session;
 __u32 s_anchor[4];
 __u32 s_lastblock;

 struct buffer_head *s_lvidbh;


 mode_t s_umask;
 gid_t s_gid;
 uid_t s_uid;





 time_t s_recordtime;



 __u16 s_serialnum;


 __u16 s_udfrev;


 __u32 s_flags;


 struct nls_table *s_nls_map;


 struct inode *s_vat;





};
# 733 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_fs_sb.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_fs_sb.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_mount.h" 1
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_mount.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp.h" 1
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp.h"
struct ncp_request_header {
 __u16 type __attribute__((packed));
 __u8 sequence __attribute__((packed));
 __u8 conn_low __attribute__((packed));
 __u8 task __attribute__((packed));
 __u8 conn_high __attribute__((packed));
 __u8 function __attribute__((packed));
 __u8 data[0] __attribute__((packed));
};




struct ncp_reply_header {
 __u16 type __attribute__((packed));
 __u8 sequence __attribute__((packed));
 __u8 conn_low __attribute__((packed));
 __u8 task __attribute__((packed));
 __u8 conn_high __attribute__((packed));
 __u8 completion_code __attribute__((packed));
 __u8 connection_state __attribute__((packed));
 __u8 data[0] __attribute__((packed));
};



struct ncp_volume_info {
 __u32 total_blocks;
 __u32 free_blocks;
 __u32 purgeable_blocks;
 __u32 not_yet_purgeable_blocks;
 __u32 total_dir_entries;
 __u32 available_dir_entries;
 __u8 sectors_per_block;
 char volume_name[(16) + 1];
};
# 112 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp.h"
struct nw_info_struct {
 __u32 spaceAlloc __attribute__((packed));
 __u32 attributes __attribute__((packed));
 __u16 flags __attribute__((packed));
 __u32 dataStreamSize __attribute__((packed));
 __u32 totalStreamSize __attribute__((packed));
 __u16 numberOfStreams __attribute__((packed));
 __u16 creationTime __attribute__((packed));
 __u16 creationDate __attribute__((packed));
 __u32 creatorID __attribute__((packed));
 __u16 modifyTime __attribute__((packed));
 __u16 modifyDate __attribute__((packed));
 __u32 modifierID __attribute__((packed));
 __u16 lastAccessDate __attribute__((packed));
 __u16 archiveTime __attribute__((packed));
 __u16 archiveDate __attribute__((packed));
 __u32 archiverID __attribute__((packed));
 __u16 inheritedRightsMask __attribute__((packed));
 __u32 dirEntNum __attribute__((packed));
 __u32 DosDirNum __attribute__((packed));
 __u32 volNumber __attribute__((packed));
 __u32 EADataSize __attribute__((packed));
 __u32 EAKeyCount __attribute__((packed));
 __u32 EAKeySize __attribute__((packed));
 __u32 NSCreator __attribute__((packed));
 __u8 nameLen __attribute__((packed));
 __u8 entryName[256] __attribute__((packed));
};
# 156 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp.h"
struct nw_modify_dos_info {
 __u32 attributes __attribute__((packed));
 __u16 creationDate __attribute__((packed));
 __u16 creationTime __attribute__((packed));
 __u32 creatorID __attribute__((packed));
 __u16 modifyDate __attribute__((packed));
 __u16 modifyTime __attribute__((packed));
 __u32 modifierID __attribute__((packed));
 __u16 archiveDate __attribute__((packed));
 __u16 archiveTime __attribute__((packed));
 __u32 archiverID __attribute__((packed));
 __u16 lastAccessDate __attribute__((packed));
 __u16 inheritanceGrantMask __attribute__((packed));
 __u16 inheritanceRevokeMask __attribute__((packed));
 __u32 maximumSpace __attribute__((packed));
};

struct nw_search_sequence {
 __u8 volNumber __attribute__((packed));
 __u32 dirBase __attribute__((packed));
 __u32 sequence __attribute__((packed));
};
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_mount.h" 2
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_mount.h"
struct ncp_mount_data {
 int version;
 unsigned int ncp_fd;
 __kernel_uid_t mounted_uid;
 __kernel_pid_t wdog_pid;

 unsigned char mounted_vol[(16) + 1];
 unsigned int time_out;

 unsigned int retry_count;
 unsigned int flags;

 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_mode_t file_mode;
 __kernel_mode_t dir_mode;
};



struct ncp_mount_data_v4 {
 int version;
 unsigned long flags;


 unsigned long mounted_uid;

 long wdog_pid;

 unsigned int ncp_fd;
 unsigned int time_out;

 unsigned int retry_count;



 unsigned long uid;
 unsigned long gid;

 unsigned long file_mode;
 unsigned long dir_mode;
};



struct ncp_mount_data_kernel {
 unsigned long flags;
 unsigned int int_flags;

 __kernel_uid32_t mounted_uid;
 __kernel_pid_t wdog_pid;
 unsigned int ncp_fd;
 unsigned int time_out;

 unsigned int retry_count;
 unsigned char mounted_vol[(16) + 1];
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_mode_t file_mode;
 __kernel_mode_t dir_mode;
};
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_fs_sb.h" 2





struct ncp_server {

 struct ncp_mount_data_kernel m;



 __u8 name_space[(256) + 2];

 struct file *ncp_filp;

 u8 sequence;
 u8 task;
 u16 connection;

 u8 completion;
 u8 conn_status;



 int buffer_size;

 int reply_size;

 int packet_size;
 unsigned char *packet;


 int lock;
 struct semaphore sem;

 int current_size;
 int has_subfunction;
 int ncp_reply_size;

 int root_setuped;


 int sign_wanted;
 int sign_active;
 char sign_root[8];
 char sign_last[16];


 struct {
  int auth_type;
  size_t object_name_len;
  void* object_name;
  int object_type;
 } auth;

 struct {
  size_t len;
  void* data;
 } priv;


 struct nls_table *nls_vol;
 struct nls_table *nls_io;


 int dentry_ttl;


 unsigned int flags;
};
# 92 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ncp_fs_sb.h"
static inline int ncp_conn_valid(struct ncp_server *server)
{
 return ((server->conn_status & 0x11) == 0);
}

static inline void ncp_invalidate_conn(struct ncp_server *server)
{
 server->conn_status |= 0x01;
}
# 734 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/usbdev_fs_sb.h" 1
struct usbdev_sb_info {
 struct list_head slist;
 struct list_head ilist;
 uid_t devuid;
 gid_t devgid;
 umode_t devmode;
 uid_t busuid;
 gid_t busgid;
 umode_t busmode;
 uid_t listuid;
 gid_t listgid;
 umode_t listmode;
};
# 735 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/jffs2_fs_sb.h" 1







# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/completion.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};







static inline void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern void complete(struct completion *);
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/jffs2_fs_sb.h" 2
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/jffs2_fs_sb.h"
struct jffs2_sb_info {
 struct mtd_info *mtd;

 __u32 highest_ino;
 unsigned int flags;
 spinlock_t nodelist_lock;


 struct task_struct *gc_task;
 struct semaphore gc_thread_start;
 struct completion gc_thread_exit;



 struct semaphore alloc_sem;




 __u32 flash_size;
 __u32 used_size;
 __u32 dirty_size;
 __u32 free_size;
 __u32 erasing_size;
 __u32 bad_size;
 __u32 sector_size;



 __u32 nr_free_blocks;
 __u32 nr_erasing_blocks;

 __u32 nr_blocks;
 struct jffs2_eraseblock *blocks;

 struct jffs2_eraseblock *nextblock;

 struct jffs2_eraseblock *gcblock;

 struct list_head clean_list;
 struct list_head dirty_list;
 struct list_head erasing_list;
 struct list_head erase_pending_list;
 struct list_head erase_complete_list;
 struct list_head free_list;
 struct list_head bad_list;
 struct list_head bad_used_list;

 spinlock_t erase_completion_lock;

 wait_queue_head_t erase_wait;
 struct jffs2_inode_cache *inocache_list[1];
 spinlock_t inocache_lock;
};
# 737 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h" 2

extern struct list_head super_blocks;
extern spinlock_t sb_lock;



struct super_block {
 struct list_head s_list;
 kdev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
 struct quotactl_ops *s_qcop;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct semaphore s_lock;
 int s_count;
 atomic_t s_active;

 struct list_head s_dirty;
 struct list_head s_locked_inodes;
 struct list_head s_files;

 struct block_device *s_bdev;
 struct list_head s_instances;
 struct quota_info s_dquot;

 union {
  struct minix_sb_info minix_sb;
  struct ext2_sb_info ext2_sb;
  struct ext3_sb_info ext3_sb;
  struct hpfs_sb_info hpfs_sb;
  struct ntfs_sb_info ntfs_sb;
  struct msdos_sb_info msdos_sb;
  struct isofs_sb_info isofs_sb;
  struct nfs_sb_info nfs_sb;
  struct sysv_sb_info sysv_sb;
  struct affs_sb_info affs_sb;
  struct ufs_sb_info ufs_sb;
  struct efs_sb_info efs_sb;
  struct shmem_sb_info shmem_sb;
  struct romfs_sb_info romfs_sb;
  struct smb_sb_info smbfs_sb;
  struct hfs_sb_info hfs_sb;
  struct adfs_sb_info adfs_sb;
  struct qnx4_sb_info qnx4_sb;
  struct reiserfs_sb_info reiserfs_sb;
  struct bfs_sb_info bfs_sb;
  struct udf_sb_info udf_sb;
  struct ncp_server ncpfs_sb;
  struct usbdev_sb_info usbdevfs_sb;
  struct jffs2_sb_info jffs2_sb;
  struct cramfs_sb_info cramfs_sb;
  void *generic_sbp;
 } u;




 struct semaphore s_vfs_rename_sem;
# 811 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
 struct semaphore s_nfsd_free_path_sem;
};




extern int vfs_create(struct inode *, struct dentry *, int);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
# 845 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
typedef int (*filldir_t)(void *, const char *, int, loff_t, ino_t, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 int (*check_media_change) (kdev_t);
 int (*revalidate) (kdev_t);
 struct module *owner;
};






struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*readv) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*writev) (struct file *, const struct iovec *, unsigned long, loff_t *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int);
 struct dentry * (*lookup) (struct inode *,struct dentry *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,int);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 int (*follow_link) (struct dentry *, struct nameidata *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int);
 int (*revalidate) (struct dentry *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct dentry *, struct iattr *);
 int (*setxattr) (struct dentry *, const char *, void *, size_t, int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
};

struct seq_file;





struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

 void (*read_inode) (struct inode *);







     void (*read_inode2) (struct inode *, void *) ;
    void (*dirty_inode) (struct inode *);
 void (*write_inode) (struct inode *, int);
 void (*put_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs) (struct super_block *);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct super_block *, struct statfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);
# 961 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
 struct dentry * (*fh_to_dentry)(struct super_block *sb, __u32 *fh, int len, int fhtype, int parent);
 int (*dentry_to_fh)(struct dentry *, __u32 *fh, int *lenp, int need_parent);
 int (*show_options)(struct seq_file *, struct vfsmount *);
};
# 977 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}

static inline void mark_inode_dirty_pages(struct inode *inode)
{
 __mark_inode_dirty(inode, 4);
}

struct file_system_type {
 const char *name;
 int fs_flags;
 struct super_block *(*read_super) (struct super_block *, void *, int);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;
};
# 1025 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount(struct file_system_type *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);



extern int vfs_statfs(struct super_block *, struct statfs *);
# 1043 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);
# 1053 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
static inline int locks_verify_locked(struct inode *inode)
{
 if ((((inode)->i_sb->s_flags & (64)) && ((inode)->i_mode & (0002000 | 00010)) == 0002000))
  return locks_mandatory_locked(inode);
 return 0;
}

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

static inline int locks_verify_truncate(struct inode *inode,
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

static inline int get_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __get_lease(inode, mode);
 return 0;
}



 long sys_open(const char *, int, int);
 long sys_close(unsigned int);
extern int do_truncate(struct dentry *, loff_t start);

extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void vfs_caches_init(unsigned long);




enum {BDEV_FILE, BDEV_SWAP, BDEV_FS, BDEV_RAW};
extern int register_blkdev(unsigned int, const char *, struct block_device_operations *);
extern int unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern int bd_acquire(struct inode *inode);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct char_device *cdget(dev_t);
extern void cdput(struct char_device *);
extern int blkdev_open(struct inode *, struct file *);
extern int blkdev_close(struct inode *, struct file *);
extern struct file_operations def_blk_fops;
extern struct address_space_operations def_blk_aops;
extern struct file_operations def_fifo_fops;
extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned, int);
extern int blkdev_put(struct block_device *, int);


extern const struct block_device_operations *get_blkfops(unsigned int);
extern int register_chrdev(unsigned int, const char *, struct file_operations *);
extern int unregister_chrdev(unsigned int, const char *);
extern int chrdev_open(struct inode *, struct file *);
extern const char * bdevname(kdev_t);
extern const char * cdevname(kdev_t);
extern const char * kdevname(kdev_t);
extern void init_special_inode(struct inode *, umode_t, int);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

extern struct file_operations read_fifo_fops;
extern struct file_operations write_fifo_fops;
extern struct file_operations rdwr_fifo_fops;
extern struct file_operations read_pipe_fops;
extern struct file_operations write_pipe_fops;
extern struct file_operations rdwr_pipe_fops;

extern int fs_may_remount_ro(struct super_block *);

extern int try_to_free_buffers(struct page *, unsigned int);
extern void refile_buffer(struct buffer_head * buf);
extern void create_empty_buffers(struct page *, kdev_t, unsigned long);
extern void end_buffer_io_sync(struct buffer_head *bh, int uptodate);
extern void end_buffer_io_async(struct buffer_head *bh, int uptodate);


extern void set_buffer_async_io(struct buffer_head *bh) ;






static inline void get_bh(struct buffer_head * bh)
{
        atomic_add(1,(&(bh)->b_count));
}

static inline void put_bh(struct buffer_head *bh)
{
        __asm__ __volatile__("": : :"memory");
        atomic_sub(1,(&bh->b_count));
}




static inline void mark_buffer_uptodate(struct buffer_head * bh, int on)
{
 if (on)
  set_bit(BH_Uptodate, &bh->b_state);
 else
  clear_bit(BH_Uptodate, &bh->b_state);
}



static inline void __mark_buffer_clean(struct buffer_head *bh)
{
 refile_buffer(bh);
}

static inline void mark_buffer_clean(struct buffer_head * bh)
{
 if (test_and_clear_bit(BH_Dirty, &(bh)->b_state))
  __mark_buffer_clean(bh);
}

extern void __mark_dirty(struct buffer_head *bh);
extern void __mark_buffer_dirty(struct buffer_head *bh);
extern void mark_buffer_dirty(struct buffer_head *bh);

extern void buffer_insert_list(struct buffer_head *, struct list_head *);

static inline void buffer_insert_inode_queue(struct buffer_head *bh, struct inode *inode)
{
 buffer_insert_list(bh, &inode->i_dirty_buffers);
}

static inline void buffer_insert_inode_data_queue(struct buffer_head *bh, struct inode *inode)
{
 buffer_insert_list(bh, &inode->i_dirty_data_buffers);
}

static inline int atomic_set_buffer_dirty(struct buffer_head *bh)
{
 return test_and_set_bit(BH_Dirty, &bh->b_state);
}

static inline void mark_buffer_async(struct buffer_head * bh, int on)
{
 if (on)
  set_bit(BH_Async, &bh->b_state);
 else
  clear_bit(BH_Async, &bh->b_state);
}

static inline void set_buffer_attached(struct buffer_head *bh)
{
 set_bit(BH_Attached, &bh->b_state);
}

static inline void clear_buffer_attached(struct buffer_head *bh)
{
 clear_bit(BH_Attached, &bh->b_state);
}

static inline int buffer_attached(struct buffer_head *bh)
{
 return test_bit(BH_Attached, &bh->b_state);
}







static inline void buffer_IO_error(struct buffer_head * bh)
{
 mark_buffer_clean(bh);



 bh->b_end_io(bh, 0);
}

static inline void mark_buffer_dirty_inode(struct buffer_head *bh, struct inode *inode)
{
 mark_buffer_dirty(bh);
 buffer_insert_inode_queue(bh, inode);
}

extern void set_buffer_flushtime(struct buffer_head *);
extern int get_buffer_flushtime(void);
extern void balance_dirty(void);
extern int check_disk_change(kdev_t);
extern int invalidate_inodes(struct super_block *);
extern int invalidate_device(kdev_t, int);
extern void invalidate_inode_pages(struct inode *);
extern void invalidate_inode_pages2(struct address_space *);
extern void invalidate_inode_buffers(struct inode *);


extern void invalidate_bdev(struct block_device *, int);
extern void __invalidate_buffers(kdev_t dev, int);
extern void sync_inodes(kdev_t);
extern void sync_unlocked_inodes(void);
extern void write_inode_now(struct inode *, int);
extern int sync_buffers(kdev_t, int);
extern void sync_dev(kdev_t);
extern int fsync_dev(kdev_t);
extern int fsync_super(struct super_block *);
extern int fsync_no_super(kdev_t);
extern void sync_inodes_sb(struct super_block *);
extern int fsync_buffers_list(struct list_head *);
static inline int fsync_inode_buffers(struct inode *inode)
{
 return fsync_buffers_list(&inode->i_dirty_buffers);
}
static inline int fsync_inode_data_buffers(struct inode *inode)
{
 return fsync_buffers_list(&inode->i_dirty_data_buffers);
}
extern int inode_has_buffers(struct inode *);
extern int do_fdatasync(struct file *);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_fdatasync(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern void sync_supers(kdev_t dev, int wait);
extern int bmap(struct inode *, int);
extern int notify_change(struct dentry *, struct iattr *);
extern int permission(struct inode *, int);
extern int vfs_permission(struct inode *, int);
extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline void put_write_access(struct inode * inode)
{
 atomic_sub(1,(&inode->i_writecount));
}
static inline void allow_write_access(struct file *file)
{
 if (file)
  atomic_add(1,(&file->f_dentry->d_inode->i_writecount));
}
extern int do_pipe(int *);

extern int open_namei(const char *, int, int, struct nameidata *);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);
# 1326 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
static inline void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline long IS_ERR(const void *ptr)
{
 return (unsigned long)ptr > (unsigned long)-1000L;
}
# 1357 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
enum {LAST_NORM, LAST_ROOT, LAST_DOT, LAST_DOTDOT, LAST_BIND};
# 1368 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 char * buf;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *, unsigned long, unsigned long);


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern int __user_walk(const char *, unsigned, struct nameidata *);
extern int path_init(const char *, unsigned, struct nameidata *);
extern int path_walk(const char *, struct nameidata *);
extern int path_lookup(const char *, unsigned, struct nameidata *);
extern int link_path_walk(const char *, struct nameidata *);
extern void path_release(struct nameidata *);
extern int follow_down(struct vfsmount **, struct dentry **);
extern int follow_up(struct vfsmount **, struct dentry **);
extern struct dentry * lookup_one_len(const char *, struct dentry *, int);
extern struct dentry * lookup_hash(struct qstr *, struct dentry *);



extern void inode_init_once(struct inode *);
extern void __inode_init_once(struct inode *);
extern void iput(struct inode *);
extern void refile_inode(struct inode *inode);
extern void force_delete(struct inode *);
extern struct inode * igrab(struct inode *);
extern struct inode * ilookup(struct super_block *, unsigned long);
extern ino_t iunique(struct super_block *, ino_t);
extern void unlock_new_inode(struct inode *);

typedef int (*find_inode_t)(struct inode *, unsigned long, void *);

extern struct inode * iget4_locked(struct super_block *, unsigned long,
       find_inode_t, void *);

static inline struct inode *iget4(struct super_block *sb, unsigned long ino,
      find_inode_t find_actor, void *opaque)
{
 struct inode *inode = iget4_locked(sb, ino, find_actor, opaque);

 if (inode && (inode->i_state & 64)) {



  if (sb->s_op->read_inode2)
   sb->s_op->read_inode2(inode, opaque);
  else
   sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

static inline struct inode *iget(struct super_block *sb, unsigned long ino)
{
 struct inode *inode = iget4_locked(sb, ino, ((void *)0), ((void *)0));

 if (inode && (inode->i_state & 64)) {
  sb->s_op->read_inode(inode);
  unlock_new_inode(inode);
 }

 return inode;
}

static inline struct inode *iget_locked(struct super_block *sb, unsigned long ino)
{
 return iget4_locked(sb, ino, ((void *)0), ((void *)0));
}

extern void clear_inode(struct inode *);
extern struct inode *new_inode(struct super_block *sb);
extern void remove_suid(struct inode *inode);

extern void insert_inode_hash(struct inode *);
extern void remove_inode_hash(struct inode *);
extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern struct buffer_head * get_hash_table(kdev_t, int, int);
extern struct buffer_head * getblk(kdev_t, int, int);
extern void ll_rw_block(int, int, struct buffer_head * bh[]);
extern void submit_bh(int, struct buffer_head *);
extern int is_read_only(kdev_t);
extern void __brelse(struct buffer_head *);
static inline void brelse(struct buffer_head *buf)
{
 if (buf)
  __brelse(buf);
}
extern void __bforget(struct buffer_head *);
static inline void bforget(struct buffer_head *buf)
{
 if (buf)
  __bforget(buf);
}
extern int set_blocksize(kdev_t, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern struct buffer_head * bread(kdev_t, int, int);
static inline struct buffer_head * sb_bread(struct super_block *sb, int block)
{
 return bread(sb->s_dev, block, sb->s_blocksize);
}
static inline struct buffer_head * sb_getblk(struct super_block *sb, int block)
{
 return getblk(sb->s_dev, block, sb->s_blocksize);
}
static inline struct buffer_head * sb_get_hash_table(struct super_block *sb, int block)
{
 return get_hash_table(sb->s_dev, block, sb->s_blocksize);
}
extern void wakeup_bdflush(void);
extern void wakeup_kupdate(void);
extern void put_unused_buffer_head(struct buffer_head * bh);
extern struct buffer_head * get_unused_buffer_head(int async);
extern int block_dump;

extern int brw_page(int, struct page *, kdev_t, int [], int);

typedef int (get_block_t)(struct inode*,long,struct buffer_head*,int);


extern int try_to_release_page(struct page * page, int gfp_mask);
extern int discard_bh_page(struct page *, unsigned long, int);


extern int block_symlink(struct inode *, const char *, int);
extern int block_write_full_page(struct page*, get_block_t*);
extern int block_read_full_page(struct page*, get_block_t*);
extern int block_prepare_write(struct page*, unsigned, unsigned, get_block_t*);
extern int cont_prepare_write(struct page*, unsigned, unsigned, get_block_t*,
    unsigned long *);
extern int generic_cont_expand(struct inode *inode, loff_t size) ;
extern int block_commit_write(struct page *page, unsigned from, unsigned to);
extern int block_sync_page(struct page *);

int generic_block_bmap(struct address_space *, long, get_block_t *);
int generic_commit_write(struct file *, struct page *, unsigned, unsigned);
int block_truncate_page(struct address_space *, loff_t, get_block_t *);
extern int generic_direct_IO(int, struct inode *, struct kiobuf *, unsigned long, int, get_block_t *);
extern int waitfor_one_page(struct page *);
extern int writeout_one_page(struct page *);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
extern ssize_t generic_file_read(struct file *, char *, size_t, loff_t *);
extern ssize_t do_generic_direct_read(struct file *, char *, size_t, loff_t *);
extern int precheck_file_write(struct file *, struct inode *, size_t *, loff_t *);
extern ssize_t generic_file_write(struct file *, const char *, size_t, loff_t *);
extern void do_generic_file_read(struct file *, loff_t *, read_descriptor_t *, read_actor_t);
extern ssize_t do_generic_file_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t do_generic_direct_write(struct file *, const char *, size_t, loff_t *);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern int generic_file_open(struct inode * inode, struct file * filp);

extern struct file_operations generic_ro_fops;

extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern int page_follow_link(struct dentry *, struct nameidata *);
extern struct inode_operations page_symlink_inode_operations;

extern int vfs_readdir(struct file *, filldir_t, void *);
extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_dir_fsync(struct file *, struct dentry *, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern struct file_operations dcache_dir_ops;

extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(kdev_t);
extern void drop_super(struct super_block *sb);
static inline int is_mounted(kdev_t dev)
{
 struct super_block *sb = get_super(dev);
 if (sb) {
  drop_super(sb);
  return 1;
 }
 return 0;
}
unsigned long generate_cluster(kdev_t, int b[], int);
unsigned long generate_cluster_swab32(kdev_t, int b[], int);
extern kdev_t ROOT_DEV;
extern char root_device_name[];


extern void show_buffers(void);


extern unsigned int real_root_dev;


extern ssize_t char_read(struct file *, char *, size_t, loff_t *);
extern ssize_t block_read(struct file *, char *, size_t, loff_t *);
extern int read_ahead[];

extern ssize_t char_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t block_write(struct file *, const char *, size_t, loff_t *);

extern int file_fsync(struct file *, struct dentry *, int);
extern int generic_buffer_fdatasync(struct inode *inode, unsigned long start_idx, unsigned long end_idx);
extern int generic_osync_inode(struct inode *, int);




extern int inode_change_ok(struct inode *, struct iattr *);
extern int inode_setattr(struct inode *, struct iattr *);


extern int unshare_files(void);
# 1610 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
static inline struct dentry *lock_parent(struct dentry *dentry)
{
 struct dentry *dir = dget(dentry->d_parent);

 down(&dir->d_inode->i_sem);
 return dir;
}

static inline struct dentry *get_parent(struct dentry *dentry)
{
 return dget(dentry->d_parent);
}

static inline void unlock_dir(struct dentry *dir)
{
 up(&dir->d_inode->i_sem);
 dput(dir);
}





static inline void double_down(struct semaphore *s1, struct semaphore *s2)
{
 if (s1 != s2) {
  if ((unsigned long) s1 < (unsigned long) s2) {
   struct semaphore *tmp = s2;
   s2 = s1; s1 = tmp;
  }
  down(s1);
 }
 down(s2);
}
# 1654 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs.h"
static inline void triple_down(struct semaphore *s1,
          struct semaphore *s2,
          struct semaphore *s3)
{
 if (s1 != s2) {
  if ((unsigned long) s1 < (unsigned long) s2) {
   if ((unsigned long) s1 < (unsigned long) s3) {
    struct semaphore *tmp = s3;
    s3 = s1; s1 = tmp;
   }
   if ((unsigned long) s1 < (unsigned long) s2) {
    struct semaphore *tmp = s2;
    s2 = s1; s1 = tmp;
   }
  } else {
   if ((unsigned long) s1 < (unsigned long) s3) {
    struct semaphore *tmp = s3;
    s3 = s1; s1 = tmp;
   }
   if ((unsigned long) s2 < (unsigned long) s3) {
    struct semaphore *tmp = s3;
    s3 = s2; s2 = tmp;
   }
  }
  down(s1);
 } else if ((unsigned long) s2 < (unsigned long) s3) {
  struct semaphore *tmp = s3;
  s3 = s2; s2 = tmp;
 }
 down(s2);
 down(s3);
}

static inline void double_up(struct semaphore *s1, struct semaphore *s2)
{
 up(s1);
 if (s1 != s2)
  up(s2);
}

static inline void triple_up(struct semaphore *s1,
        struct semaphore *s2,
        struct semaphore *s3)
{
 up(s1);
 if (s1 != s2)
  up(s2);
 up(s3);
}

static inline void double_lock(struct dentry *d1, struct dentry *d2)
{
 double_down(&d1->d_inode->i_sem, &d2->d_inode->i_sem);
}

static inline void double_unlock(struct dentry *d1, struct dentry *d2)
{
 double_up(&d1->d_inode->i_sem,&d2->d_inode->i_sem);
 dput(d1);
 dput(d2);
}
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h" 2
# 32 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
# 55 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h"
typedef __u32 kernel_cap_t;
# 286 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h"
extern kernel_cap_t cap_bset;
# 314 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/capability.h"
static inline kernel_cap_t cap_combine(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) | (b);
     return dest;
}

static inline kernel_cap_t cap_intersect(kernel_cap_t a, kernel_cap_t b)
{
     kernel_cap_t dest;
     (dest) = (a) & (b);
     return dest;
}

static inline kernel_cap_t cap_drop(kernel_cap_t a, kernel_cap_t drop)
{
     kernel_cap_t dest;
     (dest) = (a) & ~(drop);
     return dest;
}

static inline kernel_cap_t cap_invert(kernel_cap_t c)
{
     kernel_cap_t dest;
     (dest) = ~(c);
     return dest;
}
# 6 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/binfmts.h" 2
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/binfmts.h"
struct linux_binprm{
 char buf[128];
 struct page *page[32];
 unsigned long p;
 int sh_bang;
 struct file * file;
 int e_uid, e_gid;
 kernel_cap_t cap_inheritable, cap_permitted, cap_effective;
 int argc, envc;
 char * filename;
 unsigned long loader, exec;
};





struct linux_binfmt {
 struct linux_binfmt * next;
 struct module *module;
 int (*load_binary)(struct linux_binprm *, struct pt_regs * regs);
 int (*load_shlib)(struct file *);
 int (*core_dump)(long signr, struct pt_regs * regs, struct file * file);
 unsigned long min_coredump;
};

extern int register_binfmt(struct linux_binfmt *);
extern int unregister_binfmt(struct linux_binfmt *);

extern int prepare_binprm(struct linux_binprm *);
extern void remove_arg_zero(struct linux_binprm *);
extern int search_binary_handler(struct linux_binprm *,struct pt_regs *);
extern int flush_old_exec(struct linux_binprm * bprm);
extern int setup_arg_pages(struct linux_binprm * bprm);
extern int copy_strings(int argc,char ** argv,struct linux_binprm *bprm);
extern int copy_strings_kernel(int argc,char ** argv,struct linux_binprm *bprm);
extern void compute_creds(struct linux_binprm *binprm);
extern int do_coredump(long signr, struct pt_regs * regs);
extern void set_binfmt(struct linux_binfmt *new);
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/times.h" 1



struct tms {
 clock_t tms_utime;
 clock_t tms_stime;
 clock_t tms_cutime;
 clock_t tms_cstime;
};
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timex.h" 1
# 152 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timex.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/timex.h" 1
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/timex.h"
typedef unsigned int cycles_t;
extern cycles_t cacheflush_time;

static inline cycles_t get_cycles (void)
{
 return ({ int __res; if (0 == 0) __asm__ __volatile__( "mfc0\t%0, " "$9" "\n\t" : "=r" (__res)); else __asm__ __volatile__( ".set\tmips32\n\t" "mfc0\t%0, " "$9" ", " "0" "\n\t" ".set\tmips0\n\t" : "=r" (__res)); __res; });
}
# 153 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timex.h" 2
# 161 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timex.h"
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
# 253 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/timex.h"
extern long tick;
extern int tickadj;




extern int time_state;
extern int time_status;
extern long time_offset;
extern long time_constant;
extern long time_tolerance;
extern long time_precision;
extern long time_maxerror;
extern long time_esterror;

extern long time_phase;
extern long time_freq;
extern long time_adj;
extern long time_reftime;

extern long time_adjust;


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
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rbtree.h" 1
# 100 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/rbtree.h"
typedef struct rb_node_s
{
 struct rb_node_s * rb_parent;
 int rb_color;


 struct rb_node_s * rb_right;
 struct rb_node_s * rb_left;
}
rb_node_t;

typedef struct rb_root_s
{
 struct rb_node_s * rb_node;
}
rb_root_t;





extern void rb_insert_color(rb_node_t *, rb_root_t *);
extern void rb_erase(rb_node_t *, rb_root_t *);


extern rb_node_t *rb_next(rb_node_t *);
extern rb_node_t *rb_prev(rb_node_t *);
extern rb_node_t *rb_first(rb_root_t *);
extern rb_node_t *rb_last(rb_root_t *);

static inline void rb_link_node(rb_node_t * node, rb_node_t * parent, rb_node_t ** rb_link)
{
 node->rb_parent = parent;
 node->rb_color = 0;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/mmu.h" 1



typedef unsigned long mm_context_t[1];
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h" 1
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/major.h" 1
# 180 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/major.h"
static __inline__ int scsi_blk_major(int m) {
 return (((m) == 8 || ((m) >= 65 && (m) <= 71)) || (m) == 11);
}
# 193 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/major.h"
static __inline__ int ide_blk_major(int m)
{
 return ((m) == 3 || (m) == 22 || (m) == 33 || (m) == 34 || (m) == 56 || (m) == 57 || (m) == 88 || (m) == 89 || (m) == 90 || (m) == 91);
}
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/termios.h" 1




# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/termios.h" 1
# 11 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/termios.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/termbits.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/termbits.h"
typedef unsigned char cc_t;
typedef unsigned long speed_t;
typedef unsigned long tcflag_t;






struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;



 cc_t c_line;
 cc_t c_cc[23];
};
# 12 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/termios.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ioctls.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/termios.h" 2

struct sgttyb {
 char sg_ispeed;
 char sg_ospeed;
 char sg_erase;
 char sg_kill;
 int sg_flags;
};

struct tchars {
 char t_intrc;
 char t_quitc;
 char t_startc;
 char t_stopc;
 char t_eofc;
 char t_brkc;
};

struct ltchars {
        char t_suspc;
        char t_dsuspc;
        char t_rprntc;
        char t_flushc;
        char t_werasc;
        char t_lnextc;
};




struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};


struct termio {
 unsigned short c_iflag;
 unsigned short c_oflag;
 unsigned short c_cflag;
 unsigned short c_lflag;
 char c_line;
 unsigned char c_cc[23];
};
# 6 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/termios.h" 2
# 23 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h" 1
# 24 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty_driver.h" 1
# 120 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty_driver.h"
struct tty_driver {
 int magic;
 const char *driver_name;
 const char *name;
 int name_base;
 short major;
 short minor_start;
 short num;
 short type;
 short subtype;
 struct termios init_termios;
 int flags;
 int *refcount;
 struct proc_dir_entry *proc_entry;
 struct tty_driver *other;




 struct tty_struct **table;
 struct termios **termios;
 struct termios **termios_locked;
 void *driver_state;





 int (*open)(struct tty_struct * tty, struct file * filp);
 void (*close)(struct tty_struct * tty, struct file * filp);
 int (*write)(struct tty_struct * tty, int from_user,
        const unsigned char *buf, int count);
 void (*put_char)(struct tty_struct *tty, unsigned char ch);
 void (*flush_chars)(struct tty_struct *tty);
 int (*write_room)(struct tty_struct *tty);
 int (*chars_in_buffer)(struct tty_struct *tty);
 int (*ioctl)(struct tty_struct *tty, struct file * file,
      unsigned int cmd, unsigned long arg);
 void (*set_termios)(struct tty_struct *tty, struct termios * old);
 void (*throttle)(struct tty_struct * tty);
 void (*unthrottle)(struct tty_struct * tty);
 void (*stop)(struct tty_struct *tty);
 void (*start)(struct tty_struct *tty);
 void (*hangup)(struct tty_struct *tty);
 void (*break_ctl)(struct tty_struct *tty, int state);
 void (*flush_buffer)(struct tty_struct *tty);
 void (*set_ldisc)(struct tty_struct *tty);
 void (*wait_until_sent)(struct tty_struct *tty, int timeout);
 void (*send_xchar)(struct tty_struct *tty, char ch);
 int (*read_proc)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
 int (*write_proc)(struct file *file, const char *buffer,
     unsigned long count, void *data);




 struct tty_driver *next;
 struct tty_driver *prev;
};
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty_ldisc.h" 1
# 110 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty_ldisc.h"
struct tty_ldisc {
 int magic;
 char *name;
 int num;
 int flags;



 int (*open)(struct tty_struct *);
 void (*close)(struct tty_struct *);
 void (*flush_buffer)(struct tty_struct *tty);
 ssize_t (*chars_in_buffer)(struct tty_struct *tty);
 ssize_t (*read)(struct tty_struct * tty, struct file * file,
   unsigned char * buf, size_t nr);
 ssize_t (*write)(struct tty_struct * tty, struct file * file,
    const unsigned char * buf, size_t nr);
 int (*ioctl)(struct tty_struct * tty, struct file * file,
    unsigned int cmd, unsigned long arg);
 void (*set_termios)(struct tty_struct *tty, struct termios * old);
 unsigned int (*poll)(struct tty_struct *, struct file *,
        struct poll_table_struct *);
 int (*hangup)(struct tty_struct *tty);




 void (*receive_buf)(struct tty_struct *, const unsigned char *cp,
          char *fp, int count);
 int (*receive_room)(struct tty_struct *);
 void (*write_wakeup)(struct tty_struct *);
 int refcount;
};
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h" 2
# 59 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h"
struct screen_info {
 u8 orig_x;
 u8 orig_y;
 u16 dontuse1;
 u16 orig_video_page;
 u8 orig_video_mode;
 u8 orig_video_cols;
 u16 unused2;
 u16 orig_video_ega_bx;
 u16 unused3;
 u8 orig_video_lines;
 u8 orig_video_isVGA;
 u16 orig_video_points;


 u16 lfb_width;
 u16 lfb_height;
 u16 lfb_depth;
 u32 lfb_base;
 u32 lfb_size;
 u16 dontuse2, dontuse3;
 u16 lfb_linelength;
 u8 red_size;
 u8 red_pos;
 u8 green_size;
 u8 green_pos;
 u8 blue_size;
 u8 blue_pos;
 u8 rsvd_size;
 u8 rsvd_pos;
 u16 vesapm_seg;
 u16 vesapm_off;
 u16 pages;

};

extern struct screen_info screen_info;
# 139 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h"
struct tty_flip_buffer {
 struct tq_struct tqueue;
 struct semaphore pty_sem;
 char *char_buf_ptr;
 unsigned char *flag_buf_ptr;
 int count;
 int buf_num;
 unsigned char char_buf[2*512];
 char flag_buf[2*512];
 unsigned char slop[4];
};
# 259 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h"
struct tty_struct {
 int magic;
 struct tty_driver driver;
 struct tty_ldisc ldisc;
 struct semaphore termios_sem;
 struct termios *termios, *termios_locked;
 int pgrp;
 int session;
 kdev_t device;
 unsigned long flags;
 int count;
 struct winsize winsize;
 unsigned char stopped:1, hw_stopped:1, flow_stopped:1, packet:1;
 unsigned char low_latency:1, warned:1;
 unsigned char ctrl_status;

 struct tty_struct *link;
 struct fasync_struct *fasync;
 struct tty_flip_buffer flip;
 int max_flip_cnt;
 int alt_speed;
 wait_queue_head_t write_wait;
 wait_queue_head_t read_wait;
 struct tq_struct tq_hangup;
 void *disc_data;
 void *driver_data;
 struct list_head tty_files;







 unsigned int column;
 unsigned char lnext:1, erasing:1, raw:1, real_raw:1, icanon:1;
 unsigned char closing:1;
 unsigned short minimum_to_wake;
 unsigned long overrun_time;
 int num_overrun;
 unsigned long process_char_map[256/(8*sizeof(unsigned long))];
 char *read_buf;
 int read_head;
 int read_tail;
 int read_cnt;
 unsigned long read_flags[4096/(8*sizeof(unsigned long))];
 int canon_data;
 unsigned long canon_head;
 unsigned int canon_column;
 struct semaphore atomic_read;
 struct semaphore atomic_write;
 spinlock_t read_lock;

 struct tq_struct SAK_tq;
};
# 344 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tty.h"
extern void tty_write_flush(struct tty_struct *);

extern struct termios tty_std_termios;
extern struct tty_ldisc tty_ldiscs[];
extern int fg_console, last_console, want_console;

extern int kmsg_redirect;

extern void con_init(void);
extern void console_init(void);

extern int lp_init(void);
extern int pty_init(void);
extern void tty_init(void);
extern int mxser_init(void);
extern int moxa_init(void);
extern int ip2_init(void);
extern int pcxe_init(void);
extern int pc_init(void);
extern int vcs_init(void);
extern int rp_init(void);
extern int cy_init(void);
extern int stl_init(void);
extern int stli_init(void);
extern int specialix_init(void);
extern int espserial_init(void);
extern int macserial_init(void);
extern int a2232board_init(void);

extern int tty_paranoia_check(struct tty_struct *tty, kdev_t device,
         const char *routine);
extern char *tty_name(struct tty_struct *tty, char *buf);
extern void tty_wait_until_sent(struct tty_struct * tty, long timeout);
extern int tty_check_change(struct tty_struct * tty);
extern void stop_tty(struct tty_struct * tty);
extern void start_tty(struct tty_struct * tty);
extern int tty_register_ldisc(int disc, struct tty_ldisc *new_ldisc);
extern int tty_register_driver(struct tty_driver *driver);
extern int tty_unregister_driver(struct tty_driver *driver);
extern void tty_register_devfs (struct tty_driver *driver, unsigned int flags,
    unsigned minor);
extern void tty_unregister_devfs (struct tty_driver *driver, unsigned minor);
extern int tty_read_raw_data(struct tty_struct *tty, unsigned char *bufp,
        int buflen);
extern void tty_write_message(struct tty_struct *tty, char *msg);

extern int is_orphaned_pgrp(int pgrp);
extern int is_ignored(int sig);
extern int tty_signal(int sig, struct tty_struct *tty);
extern void tty_hangup(struct tty_struct * tty);
extern void tty_vhangup(struct tty_struct * tty);
extern void tty_unhangup(struct file *filp);
extern int tty_hung_up_p(struct file * filp);
extern void do_SAK(struct tty_struct *tty);
extern void disassociate_ctty(int priv);
extern void tty_flip_buffer_push(struct tty_struct *tty);
extern int tty_get_baud_rate(struct tty_struct *tty);

extern struct tty_ldisc *tty_ldisc_ref(struct tty_struct *);
extern void tty_ldisc_deref(struct tty_ldisc *);
extern struct tty_ldisc *tty_ldisc_ref_wait(struct tty_struct *);

extern struct tty_ldisc *tty_ldisc_get(int);
extern void tty_ldisc_put(int);

extern void tty_wakeup(struct tty_struct *tty);
extern void tty_ldisc_flush(struct tty_struct *tty);



extern struct tty_ldisc tty_ldisc_N_TTY;


extern int n_tty_ioctl(struct tty_struct * tty, struct file * file,
         unsigned int cmd, unsigned long arg);



extern void serial_console_init(void);



extern int pcxe_open(struct tty_struct *tty, struct file *filp);



extern void console_print(const char *);



extern int vt_ioctl(struct tty_struct *tty, struct file * file,
      unsigned int cmd, unsigned long arg);
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sem.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ipc.h" 1
# 9 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ipc.h"
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


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ipcbuf.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/ipcbuf.h"
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
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ipc.h" 2
# 57 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ipc.h"
struct kern_ipc_perm
{
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
};
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sem.h" 2
# 23 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sem.h"
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


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sembuf.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 unsigned long sem_nsems;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 36 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sem.h" 2


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
# 82 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sem.h"
struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
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

 long sys_semget (key_t key, int nsems, int semflg);
 long sys_semop (int semid, struct sembuf *sops, unsigned nsops);
 long sys_semctl (int semid, int semnum, int cmd, union semun arg);
 long sys_semtimedop (int semid, struct sembuf *sops,
   unsigned nsops, const struct timespec *timeout);
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/signal.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/signal.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/signal.h"
typedef struct {
 unsigned long sig[(128 / 32)];
} sigset_t;

typedef unsigned long old_sigset_t;
# 123 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/signal.h"
typedef void (*__sighandler_t)(int);






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


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sigcontext.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/sigcontext.h"
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
 unsigned int sc_ssflags;
 unsigned long long sc_mdhi;
 unsigned long long sc_mdlo;

 unsigned int sc_cause;
 unsigned int sc_badvaddr;

 unsigned long sc_sigset[4];
};
# 152 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/signal.h" 2
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/signal.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/siginfo.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/siginfo.h"
typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 33 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_code;
 int si_errno;
 int __pad0[128 / sizeof(int) - ((128/sizeof(int)) - 3) - 3];

 union {
  int _pad[((128/sizeof(int)) - 3)];


  struct {
   pid_t _pid;
   uid_t _uid;
  } _kill;


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


  struct {
   unsigned int _timer1;
   unsigned int _timer2;
  } _timer;


  struct {
   pid_t _pid;
   uid_t _uid;
   sigval_t _sigval;
  } _rt;

 } _sifields;
} siginfo_t;
# 228 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 -(sizeof(long) + 2*sizeof(int))) / sizeof(int))];

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







static inline void copy_siginfo(siginfo_t *to, siginfo_t *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(siginfo_t));
 else

  memcpy(to, from, 3*sizeof(int) + sizeof(from->_sifields._sigchld));
}

extern int copy_siginfo_to_user(siginfo_t *to, siginfo_t *from);
# 6 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/signal.h" 2






struct sigqueue {
 struct sigqueue *next;
 siginfo_t info;
};

struct sigpending {
 struct sigqueue *head, **tail;
 sigset_t signal;
};
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/signal.h"
static inline void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((128 / 32) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 32] |= 1UL << (sig % 32);
}

static inline void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((128 / 32) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 32] &= ~(1UL << (sig % 32));
}

static inline int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((128 / 32) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 32] >> (sig % 32));
}

static inline int sigfindinword(unsigned long word)
{
 return ffz(~word);
}
# 108 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/signal.h"
static inline void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { unsigned long a0, a1, a2, a3, b0, b1, b2, b3; unsigned long i; for (i = 0; i < (128 / 32)/4; ++i) { a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; a2 = a->sig[4*i+2]; a3 = a->sig[4*i+3]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; b2 = b->sig[4*i+2]; b3 = b->sig[4*i+3]; r->sig[4*i+0] = ((a0) | (b0)); r->sig[4*i+1] = ((a1) | (b1)); r->sig[4*i+2] = ((a2) | (b2)); r->sig[4*i+3] = ((a3) | (b3)); } switch ((128 / 32) % 4) { case 3: a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; a2 = a->sig[4*i+2]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; b2 = b->sig[4*i+2]; r->sig[4*i+0] = ((a0) | (b0)); r->sig[4*i+1] = ((a1) | (b1)); r->sig[4*i+2] = ((a2) | (b2)); break; case 2: a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; r->sig[4*i+0] = ((a0) | (b0)); r->sig[4*i+1] = ((a1) | (b1)); break; case 1: a0 = a->sig[4*i+0]; b0 = b->sig[4*i+0]; r->sig[4*i+0] = ((a0) | (b0)); break; } }


static inline void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { unsigned long a0, a1, a2, a3, b0, b1, b2, b3; unsigned long i; for (i = 0; i < (128 / 32)/4; ++i) { a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; a2 = a->sig[4*i+2]; a3 = a->sig[4*i+3]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; b2 = b->sig[4*i+2]; b3 = b->sig[4*i+3]; r->sig[4*i+0] = ((a0) & (b0)); r->sig[4*i+1] = ((a1) & (b1)); r->sig[4*i+2] = ((a2) & (b2)); r->sig[4*i+3] = ((a3) & (b3)); } switch ((128 / 32) % 4) { case 3: a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; a2 = a->sig[4*i+2]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; b2 = b->sig[4*i+2]; r->sig[4*i+0] = ((a0) & (b0)); r->sig[4*i+1] = ((a1) & (b1)); r->sig[4*i+2] = ((a2) & (b2)); break; case 2: a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; r->sig[4*i+0] = ((a0) & (b0)); r->sig[4*i+1] = ((a1) & (b1)); break; case 1: a0 = a->sig[4*i+0]; b0 = b->sig[4*i+0]; r->sig[4*i+0] = ((a0) & (b0)); break; } }


static inline void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { unsigned long a0, a1, a2, a3, b0, b1, b2, b3; unsigned long i; for (i = 0; i < (128 / 32)/4; ++i) { a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; a2 = a->sig[4*i+2]; a3 = a->sig[4*i+3]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; b2 = b->sig[4*i+2]; b3 = b->sig[4*i+3]; r->sig[4*i+0] = ((a0) & ~(b0)); r->sig[4*i+1] = ((a1) & ~(b1)); r->sig[4*i+2] = ((a2) & ~(b2)); r->sig[4*i+3] = ((a3) & ~(b3)); } switch ((128 / 32) % 4) { case 3: a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; a2 = a->sig[4*i+2]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; b2 = b->sig[4*i+2]; r->sig[4*i+0] = ((a0) & ~(b0)); r->sig[4*i+1] = ((a1) & ~(b1)); r->sig[4*i+2] = ((a2) & ~(b2)); break; case 2: a0 = a->sig[4*i+0]; a1 = a->sig[4*i+1]; b0 = b->sig[4*i+0]; b1 = b->sig[4*i+1]; r->sig[4*i+0] = ((a0) & ~(b0)); r->sig[4*i+1] = ((a1) & ~(b1)); break; case 1: a0 = a->sig[4*i+0]; b0 = b->sig[4*i+0]; r->sig[4*i+0] = ((a0) & ~(b0)); break; } }
# 140 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/signal.h"
static inline void signotset(sigset_t *set) { unsigned long i; for (i = 0; i < (128 / 32)/4; ++i) { set->sig[4*i+0] = (~(set->sig[4*i+0])); set->sig[4*i+1] = (~(set->sig[4*i+1])); set->sig[4*i+2] = (~(set->sig[4*i+2])); set->sig[4*i+3] = (~(set->sig[4*i+3])); } switch ((128 / 32) % 4) { case 3: set->sig[4*i+2] = (~(set->sig[4*i+2])); case 2: set->sig[4*i+1] = (~(set->sig[4*i+1])); case 1: set->sig[4*i+0] = (~(set->sig[4*i+0])); } }




static inline void sigemptyset(sigset_t *set)
{
 switch ((128 / 32)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline void sigfillset(sigset_t *set)
{
 switch ((128 / 32)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}

extern char * render_sigset_t(sigset_t *set, char *buffer);



static inline void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((128 / 32)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((128 / 32)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((128 / 32)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((128 / 32)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 sig->head = ((void *)0);
 sig->tail = &sig->head;
}

extern long do_sigpending(void *, unsigned long);
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/securebits.h" 1





extern unsigned securebits;
# 28 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs_struct.h" 1




struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct dentry * root, * pwd, * altroot;
 struct vfsmount * rootmnt, * pwdmnt, * altrootmnt;
};
# 20 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs_struct.h"
extern void exit_fs(struct task_struct *);
extern void set_fs_altroot(void);

struct fs_struct *copy_fs_struct(struct fs_struct *old);
void put_fs_struct(struct fs_struct *fs);
# 29 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/low-latency.h" 1
# 77 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/low-latency.h"
void set_running_and_schedule(void);
# 91 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/low-latency.h"
extern int ll_copy_to_user(void *to_user, const void *from, unsigned long len);
extern int ll_copy_from_user(void *to, const void *from_user, unsigned long len);
# 30 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2

struct exec_domain;
# 60 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
extern unsigned long avenrun[];
# 77 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
extern int nr_running, nr_threads;
extern int last_pid;



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/param.h" 1
# 83 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/resource.h" 1
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/resource.h"
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
# 56 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/resource.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/resource.h" 1
# 57 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/resource.h" 2
# 84 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 120 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
struct sched_param {
 int sched_priority;
};

struct completion;
# 136 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
extern rwlock_t tasklist_lock;
extern spinlock_t runqueue_lock;
extern spinlock_t mmlist_lock;

extern void sched_init(void);
extern void init_idle(void);
extern void show_state(void);
extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void update_one_process(struct task_struct *p, unsigned long user,
          unsigned long system, int cpu);


extern signed long schedule_timeout(signed long timeout);
 void schedule(void);

 int preempt_schedule(void);


extern int schedule_task(struct tq_struct *task);
extern void flush_scheduled_tasks(void);
extern int start_context_thread(void);
extern int current_is_keventd(void);
# 173 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
struct namespace;



struct files_struct {
 atomic_t count;
 rwlock_t file_lock;
 int max_fds;
 int max_fdset;
 int next_fd;
 struct file ** fd;
 fd_set *close_on_exec;
 fd_set *open_fds;
 fd_set close_on_exec_init;
 fd_set open_fds_init;
 struct file * fd_array[32];
};
# 209 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
extern int max_map_count;

struct mm_struct {
 struct vm_area_struct * mmap;
 rb_root_t mm_rb;
 struct vm_area_struct * mmap_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;




 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;
 unsigned long rss, total_vm, locked_vm;
 unsigned long def_flags;
 unsigned long cpu_vm_mask;
 unsigned long swap_address;

 unsigned dumpable:1;


 mm_context_t context;
};

extern int mmlist_nr;
# 254 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 struct k_sigaction action[128];
 spinlock_t siglock;
};
# 270 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;


 struct user_struct *next, **pprev;
 uid_t uid;
};






extern struct user_struct root_user;


struct task_struct {



 volatile long state;
 int preempt_count;
 int sigpending;
 mm_segment_t addr_limit;



 struct exec_domain *exec_domain;
 volatile long need_resched;
 unsigned long ptrace;

 int lock_depth;






 long counter;
 long nice;
 unsigned long policy;
 struct mm_struct *mm;
 int processor;
# 323 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
 unsigned long cpus_runnable, cpus_allowed;




 struct list_head run_list;
 unsigned long sleep_time;

 struct task_struct *next_task, *prev_task;
 struct mm_struct *active_mm;
 struct list_head local_pages;
 unsigned int allocation_order, nr_local_pages;
 unsigned long flags;


 struct linux_binfmt *binfmt;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned long personality;
 int did_exec:1;
 unsigned task_dumpable:1;
 pid_t pid;
 pid_t pgrp;
 pid_t tty_old_pgrp;
 pid_t session;
 pid_t tgid;

 int leader;





 struct task_struct *p_opptr, *p_pptr, *p_cptr, *p_ysptr, *p_osptr;
 struct list_head thread_group;


 struct task_struct *pidhash_next;
 struct task_struct **pidhash_pprev;

 wait_queue_head_t wait_chldexit;
 struct completion *vfork_done;
 unsigned long rt_priority;
 unsigned long it_real_value, it_prof_value, it_virt_value;
 unsigned long it_real_incr, it_prof_incr, it_virt_incr;
 struct timer_list real_timer;
 struct tms times;
 unsigned long start_time;
 long per_cpu_utime[1], per_cpu_stime[1];

 unsigned long min_flt, maj_flt, nswap, cmin_flt, cmaj_flt, cnswap;
 int swappable:1;

 uid_t uid,euid,suid,fsuid;
 gid_t gid,egid,sgid,fsgid;
 int ngroups;
 gid_t groups[32];
 kernel_cap_t cap_effective, cap_inheritable, cap_permitted;
 int keep_capabilities:1;
 struct user_struct *user;

 struct rlimit rlim[11];
 unsigned short used_math;
 char comm[16];

 int link_count, total_link_count;
 struct tty_struct *tty;
 unsigned int locks;

 struct sem_undo *semundo;
 struct sem_queue *semsleeping;

 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct namespace *namespace;

 spinlock_t sigmask_lock;
 struct signal_struct *sig;

 sigset_t blocked;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 void *journal_info;
};
# 467 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
extern void yield(void);




extern struct exec_domain default_exec_domain;
# 526 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
union task_union {
 struct task_struct task;
 unsigned long stack[2048*sizeof(long)/sizeof(long)];
};

extern union task_union init_task_union;

extern struct mm_struct init_mm;
extern struct task_struct *init_tasks[1];



extern struct task_struct *pidhash[(4096 >> 2)];



static inline void hash_pid(struct task_struct *p)
{
 struct task_struct **htable = &pidhash[((((p->pid) >> 8) ^ (p->pid)) & ((4096 >> 2) - 1))];

 if((p->pidhash_next = *htable) != ((void *)0))
  (*htable)->pidhash_pprev = &p->pidhash_next;
 *htable = p;
 p->pidhash_pprev = htable;
}

static inline void unhash_pid(struct task_struct *p)
{
 if(p->pidhash_next)
  p->pidhash_next->pidhash_pprev = p->pidhash_pprev;
 *p->pidhash_pprev = p->pidhash_next;
}

static inline struct task_struct *find_task_by_pid(int pid)
{
 struct task_struct *p, **htable = &pidhash[((((pid) >> 8) ^ (pid)) & ((4096 >> 2) - 1))];

 for(p = *htable; p && p->pid != pid; p = p->pidhash_next)
  ;

 return p;
}



static inline void task_set_cpu(struct task_struct *tsk, unsigned int cpu)
{
 tsk->processor = cpu;
 tsk->cpus_runnable = 1UL << cpu;
}

static inline void task_release_cpu(struct task_struct *tsk)
{
 tsk->cpus_runnable = ~0UL;
}


extern struct user_struct * alloc_uid(uid_t);
extern void free_uid(struct user_struct *);
extern void switch_uid(struct user_struct *);



extern unsigned long volatile jiffies;
extern unsigned long itimer_ticks;
extern unsigned long itimer_next;
extern struct timeval xtime;
extern void do_timer(struct pt_regs *);

extern unsigned int * prof_buffer;
extern unsigned long prof_len;
extern unsigned long prof_shift;



extern void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout);

extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout);

extern int wake_up_process(struct task_struct * tsk);
# 621 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
 long sys_wait4(pid_t pid,unsigned int * stat_addr, int options, struct rusage * ru);

extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);

extern __attribute__((noreturn)) void cpu_idle(void);

extern void release_task(struct task_struct * p);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *);
extern void sig_exit(int, int, struct siginfo *);
extern int dequeue_signal(sigset_t *, siginfo_t *);
extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int kill_pg_info(int, struct siginfo *, pid_t);
extern int kill_sl_info(int, struct siginfo *, pid_t);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern void notify_parent(struct task_struct *, int);
extern void do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern int kill_pg(pid_t, int, int);
extern int kill_sl(pid_t, int, int);
extern int kill_proc(pid_t, int, int);
extern int do_sigaction(int, const struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);

static inline int signal_pending(struct task_struct *p)
{
 return (p->sigpending != 0);
}





static inline int has_pending_signals(sigset_t *signal, sigset_t *blocked)
{
 unsigned long ready;
 long i;

 switch ((128 / 32)) {
 default:
  for (i = (128 / 32), ready = 0; --i >= 0 ;)
   ready |= signal->sig[i] &~ blocked->sig[i];
  break;

 case 4: ready = signal->sig[3] &~ blocked->sig[3];
  ready |= signal->sig[2] &~ blocked->sig[2];
  ready |= signal->sig[1] &~ blocked->sig[1];
  ready |= signal->sig[0] &~ blocked->sig[0];
  break;

 case 2: ready = signal->sig[1] &~ blocked->sig[1];
  ready |= signal->sig[0] &~ blocked->sig[0];
  break;

 case 1: ready = signal->sig[0] &~ blocked->sig[0];
 }
 return ready != 0;
}





static inline void recalc_sigpending(struct task_struct *t)
{
 t->sigpending = has_pending_signals(&t->pending.signal, &t->blocked);
}



static inline int on_sig_stack(unsigned long sp)
{
 return (sp - current->sas_ss_sp < current->sas_ss_size);
}

static inline int sas_ss_flags(unsigned long sp)
{
 return (current->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}

extern int request_irq(unsigned int,
         void (*handler)(int, void *, struct pt_regs *),
         unsigned long, const char *, void *);
extern void free_irq(unsigned int, void *);
# 729 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
static inline int suser(void)
{
 if (!( (1 << (0 +1)) & 0x00000000 ? (1 << (0)) & 0x00000000 : (1 << (0)) & securebits ) && current->euid == 0) {
  current->flags |= 0x00000100;
  return 1;
 }
 return 0;
}

static inline int fsuser(void)
{
 if (!( (1 << (0 +1)) & 0x00000000 ? (1 << (0)) & 0x00000000 : (1 << (0)) & securebits ) && current->fsuid == 0) {
  current->flags |= 0x00000100;
  return 1;
 }
 return 0;
}







static inline int capable(int cap)
{

 if (((current->cap_effective) & (1 << (cap))))



 {
  current->flags |= 0x00000100;
  return 1;
 }
 return 0;
}




extern struct mm_struct * mm_alloc(void);

extern struct mm_struct * start_lazy_tlb(void);
extern void end_lazy_tlb(struct mm_struct *mm);


extern void __mmdrop(struct mm_struct *);
static inline void mmdrop(struct mm_struct * mm)
{
 if ((atomic_sub_return(1, (&mm->mm_count)) == 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern void mm_release(void);




extern struct file ** alloc_fd_array(int);
extern int expand_fd_array(struct files_struct *, int nr);
extern void free_fd_array(struct file **, int);

extern fd_set *alloc_fdset(int);
extern int expand_fdset(struct files_struct *, int nr);
extern void free_fdset(fd_set *, int);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_mm(struct task_struct *);
extern void exit_files(struct task_struct *);
extern void exit_sighand(struct task_struct *);

extern void reparent_to_init(void);
extern void daemonize(void);

extern int do_execve(char *, char **, char **, struct pt_regs *);
extern int do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern void get_task_comm(char *to, struct task_struct *tsk);

extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t * wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t * wait);

extern long kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
# 907 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h"
static inline void del_from_runqueue(struct task_struct * p)
{
 nr_running--;
 p->sleep_time = jiffies;
 list_del(&p->run_list);
 p->run_list.next = ((void *)0);
}

static inline int task_on_runqueue(struct task_struct *p)
{
 return (p->run_list.next != ((void *)0));
}

static inline void unhash_process(struct task_struct *p)
{
 if (task_on_runqueue(p))
  __out_of_line_bug(923);
 do { __cli(); ({do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&tasklist_lock);}); } while (0);
 nr_threads--;
 unhash_pid(p);
 do { (p)->next_task->prev_task = (p)->prev_task; (p)->prev_task->next_task = (p)->next_task; if ((p)->p_osptr) (p)->p_osptr->p_ysptr = (p)->p_ysptr; if ((p)->p_ysptr) (p)->p_ysptr->p_osptr = (p)->p_osptr; else (p)->p_pptr->p_cptr = (p)->p_osptr; } while (0);
 list_del(&p->thread_group);
 do { ({do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0);}); __sti(); } while (0);
}


static inline void task_lock(struct task_struct *p)
{
 do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&p->alloc_lock); } while(0);
}

static inline void task_unlock(struct task_struct *p)
{
 do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
}


static inline char * d_path(struct dentry *dentry, struct vfsmount *vfsmnt,
    char *buf, int buflen)
{
 char *res;
 struct vfsmount *rootmnt;
 struct dentry *root;
 ({do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&current->fs->lock);});
 rootmnt = mntget(current->fs->rootmnt);
 root = dget(current->fs->root);
 ({(void)(&current->fs->lock); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0);});
 do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&dcache_lock); } while(0);
 res = __d_path(dentry, vfsmnt, root, rootmnt, buf, buflen);
 do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
 dput(root);
 mntput(rootmnt);
 return res;
}

static inline int need_resched(void)
{
 return (__builtin_expect((current->need_resched),0));
}

extern void __cond_resched(void);
static inline void cond_resched(void)
{
 if (need_resched())
  __cond_resched();
}


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h" 1
# 276 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/dcache.h"
static __inline__ void d_drop(struct dentry * dentry)
{
 do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&dcache_lock); } while(0);
 list_del(&dentry->d_hash);
 do { (&dentry->d_hash)->next = (&dentry->d_hash); (&dentry->d_hash)->prev = (&dentry->d_hash); } while (0);
 do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
}
# 976 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h" 1
# 116 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/tqueue.h"
static inline int queue_task(struct tq_struct *bh_pointer, task_queue *bh_list)
{
 int ret = 0;
 if (!test_and_set_bit(0,&bh_pointer->sync)) {
  unsigned long flags;
  do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&tqueue_lock); } while(0); } while (0);
  list_add_tail(&bh_pointer->list, bh_list);
  do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
  ret = 1;
 }
 return ret;
}
# 977 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs_struct.h" 1
# 37 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/fs_struct.h"
static inline void set_fs_root(struct fs_struct *fs,
 struct vfsmount *mnt,
 struct dentry *dentry)
{
 struct dentry *old_root;
 struct vfsmount *old_rootmnt;
 ({do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&fs->lock);});
 old_root = fs->root;
 old_rootmnt = fs->rootmnt;
 fs->rootmnt = mntget(mnt);
 fs->root = dget(dentry);
 ({do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0);});
 if (old_root) {
  dput(old_root);
  mntput(old_rootmnt);
 }
}






static inline void set_fs_pwd(struct fs_struct *fs,
 struct vfsmount *mnt,
 struct dentry *dentry)
{
 struct dentry *old_pwd;
 struct vfsmount *old_pwdmnt;
 ({do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&fs->lock);});
 old_pwd = fs->pwd;
 old_pwdmnt = fs->pwdmnt;
 fs->pwdmnt = mntget(mnt);
 fs->pwd = dget(dentry);
 ({do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0);});
 if (old_pwd) {
  dput(old_pwd);
  mntput(old_pwdmnt);
 }
}
# 978 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/sched.h" 2
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h" 2







# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h" 1
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
typedef struct free_area_struct {
 struct list_head free_list;
 unsigned long *map;
} free_area_t;

struct pglist_data;

typedef struct zone_watermarks_s {
 unsigned long min, low, high;
} zone_watermarks_t;
# 47 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
typedef struct zone_struct {



 spinlock_t lock;
 unsigned long free_pages;







 zone_watermarks_t watermarks[3];







 unsigned long need_balance;

 unsigned long nr_active_pages, nr_inactive_pages;

 unsigned long nr_cache_pages;





 free_area_t free_area[10];
# 105 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_size;
 unsigned long wait_table_shift;




 struct pglist_data *zone_pgdat;
 struct page *zone_mem_map;
 unsigned long zone_start_paddr;
 unsigned long zone_start_mapnr;




 char *name;
 unsigned long size;
 unsigned long realsize;
} zone_t;
# 136 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
typedef struct zonelist_struct {
 zone_t * zones [3 +1];
} zonelist_t;
# 153 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 zone_t node_zones[3];
 zonelist_t node_zonelists[0x0f +1];
 int nr_zones;
 struct page *node_mem_map;
 unsigned long *valid_addr_bitmap;
 struct bootmem_data *bdata;
 unsigned long node_start_paddr;
 unsigned long node_start_mapnr;
 unsigned long node_size;
 int node_id;
 struct pglist_data *node_next;
} pg_data_t;

extern int numnodes;
extern pg_data_t *pgdat_list;
# 178 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
struct page;
extern void show_free_areas_core(pg_data_t *pgdat);
extern void free_area_init_core(int nid, pg_data_t *pgdat, struct page **gmap,
  unsigned long *zones_size, unsigned long paddr, unsigned long *zholes_size,
  struct page *pmap);

extern pg_data_t contig_page_data;
# 205 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mmzone.h"
static inline zone_t *next_zone(zone_t *zone)
{
 pg_data_t *pgdat = zone->zone_pgdat;

 if (zone - pgdat->node_zones < 3 - 1)
  zone++;

 else if (pgdat->node_next) {
  pgdat = pgdat->node_next;
  zone = pgdat->node_zones;
 } else
  zone = ((void *)0);

 return zone;
}
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/swap.h" 1
# 29 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/swap.h"
union swap_header {
 struct
 {
  char reserved[(1L << 12) - 10];
  char magic[10];
 } magic;
 struct
 {
  char bootbits[1024];
  unsigned int version;
  unsigned int last_page;
  unsigned int nr_badpages;
  unsigned int padding[125];
  unsigned int badpages[1];
 } info;
};
# 66 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/swap.h"
struct swap_info_struct {
 unsigned int flags;
 kdev_t swap_device;
 spinlock_t sdev_lock;
 struct dentry * swap_file;
 struct vfsmount *swap_vfsmnt;
 unsigned short * swap_map;
 unsigned int lowest_bit;
 unsigned int highest_bit;
 unsigned int cluster_next;
 unsigned int cluster_nr;
 int prio;
 int pages;
 unsigned long max;
 int next;
};

extern int nr_swap_pages;




extern unsigned int nr_free_pages(void);
extern unsigned int nr_free_buffer_pages(void);
extern unsigned int freeable_lowmem(void);
extern int nr_active_pages;
extern int nr_inactive_pages;
extern unsigned long page_cache_size;
extern atomic_t buffermem_pages;

extern spinlock_cacheline_t pagecache_lock_cacheline;


extern void __remove_inode_page(struct page *);


struct task_struct;
struct vm_area_struct;
struct sysinfo;

struct zone_t;


extern void lru_cache_add(struct page *);
extern void __lru_cache_del(struct page *);
extern void lru_cache_del(struct page *);

extern void activate_page(struct page *);

extern void swap_setup(void);


extern wait_queue_head_t kswapd_wait;
extern int try_to_free_pages_zone(zone_t *, unsigned int);
extern int try_to_free_pages(unsigned int);
extern int vm_vfs_scan_ratio, vm_cache_scan_ratio, vm_lru_balance_ratio, vm_passes, vm_gfp_debug, vm_mapped_ratio, vm_anon_lru;


extern void rw_swap_page(int, struct page *);
extern void rw_swap_page_nolock(int, swp_entry_t, char *);






extern void show_swap_cache_info(void);

extern int add_to_swap_cache(struct page *, swp_entry_t);
extern void __delete_from_swap_cache(struct page *page);
extern void delete_from_swap_cache(struct page *page);
extern void free_page_and_swap_cache(struct page *page);
extern struct page * lookup_swap_cache(swp_entry_t);
extern struct page * read_swap_cache_async(swp_entry_t);


extern void out_of_memory(void);


extern int total_swap_pages;
extern unsigned int nr_swapfiles;
extern struct swap_info_struct swap_info[];
extern int is_swap_partition(kdev_t);
extern void si_swapinfo(struct sysinfo *);
extern swp_entry_t get_swap_page(void);
extern void get_swaphandle_info(swp_entry_t, unsigned long *, kdev_t *,
     struct inode **);
extern int swap_duplicate(swp_entry_t);
extern int valid_swaphandles(swp_entry_t, unsigned long *);
extern void swap_free(swp_entry_t);
extern void free_swap_and_cache(swp_entry_t);
struct swap_list_t {
 int head;
 int next;
};
extern struct swap_list_t swap_list;
 long sys_swapoff(const char *);
 long sys_swapon(const char *, int);

extern spinlock_cacheline_t pagemap_lru_lock_cacheline;


extern void mark_page_accessed(struct page *);
# 182 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/swap.h"
extern void delta_nr_active_pages(struct page *page, long delta);



extern void delta_nr_inactive_pages(struct page *page, long delta);
# 218 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/swap.h"
extern void delta_nr_cache_pages(struct page *page, long delta);



extern spinlock_t swaplock;






extern int shmem_unuse(swp_entry_t entry, struct page *page);
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h" 2


extern unsigned long max_mapnr;
extern unsigned long num_physpages;
extern unsigned long num_mappedpages;
extern void * high_memory;
extern int page_cluster;

extern struct list_head active_list;
extern struct list_head inactive_list;


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h" 1
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/fixmap.h" 1
# 49 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/fixmap.h"
enum fixed_addresses {




 __end_of_fixed_addresses
};

extern void __set_fixmap (enum fixed_addresses idx,
     unsigned long phys, pgprot_t flags);
# 80 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/fixmap.h"
extern void __this_fixmap_does_not_exist(void);






static inline unsigned long fix_to_virt(const unsigned int idx)
{
# 98 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/fixmap.h"
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

        return ((0xffffe000UL) - ((idx) << 12));
}
# 22 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h" 2
# 40 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
extern void add_wired_entry(unsigned long entrylo0, unsigned long entrylo1,
          unsigned long entryhi, unsigned long pagemask);
# 50 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
extern int add_temporary_entry(unsigned long entrylo0, unsigned long entrylo1,
          unsigned long entryhi, unsigned long pagemask);
# 88 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable-bits.h" 1
# 89 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h" 2
# 130 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable-32.h" 1
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable-32.h"
static inline int pte_none(pte_t pte) { return !(((pte).pte_low) & ~(1<<6)); }

static inline pte_t pte_wrprotect(pte_t pte)
{
 ((pte).pte_low) &= ~((1<<2) | (1<<8));
 return pte;
}

static inline pte_t pte_rdprotect(pte_t pte)
{
 ((pte).pte_low) &= ~((1<<1) | (1<<7));
 return pte;
}

static inline pte_t pte_mkclean(pte_t pte)
{
 ((pte).pte_low) &= ~((1<<4)|(1<<8));
 return pte;
}

static inline pte_t pte_mkold(pte_t pte)
{
 ((pte).pte_low) &= ~((1<<3)|(1<<7));
 return pte;
}

static inline pte_t pte_mkwrite(pte_t pte)
{
 ((pte).pte_low) |= (1<<2);
 if (((pte).pte_low) & (1<<4))
  ((pte).pte_low) |= (1<<8);
 return pte;
}

static inline pte_t pte_mkread(pte_t pte)
{
 ((pte).pte_low) |= (1<<1);
 if (((pte).pte_low) & (1<<3))
  ((pte).pte_low) |= (1<<7);
 return pte;
}

static inline pte_t pte_mkdirty(pte_t pte)
{
 ((pte).pte_low) |= (1<<4);
 if (((pte).pte_low) & (1<<2))
  ((pte).pte_low) |= (1<<8);
 return pte;
}
# 89 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable-32.h"
static inline pgprot_t pgprot_noncached(pgprot_t _prot)
{
 unsigned long prot = ((_prot).pgprot);

 prot = (prot & ~(7<<9)) | (2<<9);

 return ((pgprot_t) { (prot) } );
}

static inline pte_t pte_mkyoung(pte_t pte)
{
 ((pte).pte_low) |= (1<<3);
 if (((pte).pte_low) & (1<<1))
  ((pte).pte_low) |= (1<<7);
 return pte;
}
# 133 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable-32.h"
static inline pte_t mk_pte_phys(phys_t physpage, pgprot_t pgprot)
{



 return ((pte_t) { (physpage | ((pgprot).pgprot)) } );

}

static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 return ((pte_t) { ((((pte).pte_low) & ((~((1L << 12)-1)) | (1<<3) | (1<<4) | (7<<9))) | ((newprot).pgprot)) } );
}





static inline void set_pte(pte_t *ptep, pte_t pteval)
{
 *ptep = pteval;

 if (((pteval).pte_low) & (1<<6)) {
  pte_t *buddy = ((pte_t *)((unsigned long)(ptep) ^ sizeof(pte_t)));




  if (pte_none(*buddy))
   ((*buddy).pte_low) = ((*buddy).pte_low) | (1<<6);
 }

}

static inline void pte_clear(pte_t *ptep)
{


 if (((*((pte_t *)((unsigned long)(ptep) ^ sizeof(pte_t)))).pte_low) & (1<<6))
  set_pte(ptep, ((pte_t) { ((1<<6)) } ));
 else

  set_pte(ptep, ((pte_t) { (0) } ));
}
# 131 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h" 2




extern unsigned long empty_zero_page;
extern unsigned long zero_page_mask;




extern void load_pgd(unsigned long pg_dir);

extern pmd_t invalid_pte_table[(1L << 12)/sizeof(pmd_t)];





static inline unsigned long pmd_page(pmd_t pmd)
{
 return ((pmd).pmd);
}

static inline void pmd_set(pmd_t * pmdp, pte_t * ptep)
{
 ((*pmdp).pmd) = (((unsigned long) ptep) & (~((1L << 12)-1)));
}

static inline int pte_present(pte_t pte) { return ((pte).pte_low) & (1<<0); }
# 171 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
static inline int pmd_none(pmd_t pmd)
{
 return ((pmd).pmd) == (unsigned long) invalid_pte_table;
}

static inline int pmd_bad(pmd_t pmd)
{
 return ((pmd_page(pmd) > (unsigned long) high_memory) ||
         (pmd_page(pmd) < 0x80000000UL));
}

static inline int pmd_present(pmd_t pmd)
{
 return (((pmd).pmd) != (unsigned long) invalid_pte_table);
}

static inline void pmd_clear(pmd_t *pmdp)
{
 ((*pmdp).pmd) = ((unsigned long) invalid_pte_table);
}






static inline int pgd_none(pgd_t pgd) { return 0; }
static inline int pgd_bad(pgd_t pgd) { return 0; }
static inline int pgd_present(pgd_t pgd) { return 1; }
static inline void pgd_clear(pgd_t *pgdp) { }






static inline int pte_read(pte_t pte) { return (pte).pte_low & (1<<1); }
static inline int pte_write(pte_t pte) { return (pte).pte_low & (1<<2); }
static inline int pte_dirty(pte_t pte) { return (pte).pte_low & (1<<4); }
static inline int pte_young(pte_t pte) { return (pte).pte_low & (1<<3); }
# 239 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
static inline pgd_t *pgd_offset(struct mm_struct *mm, unsigned long address)
{
 return mm->pgd + ((address) >> (2 * 12 - ffz(~sizeof(pte_t))));
}


static inline pmd_t *pmd_offset(pgd_t *dir, unsigned long address)
{
 return (pmd_t *) dir;
}


static inline pte_t *pte_offset(pmd_t * dir, unsigned long address)
{
 return (pte_t *) (pmd_page(*dir)) +
        ((address >> 12) & ((((1L << 12) << 0) / sizeof(pte_t)) - 1));
}

extern int do_check_pgt_cache(int, int);

extern pgd_t swapper_pg_dir[(((1L << 12) << 0) / sizeof(pgd_t))];
extern void paging_init(void);

extern void __update_tlb(struct vm_area_struct *vma, unsigned long address,
 pte_t pte);
extern void __update_cache(struct vm_area_struct *vma, unsigned long address,
 pte_t pte);

static inline void update_mmu_cache(struct vm_area_struct *vma,
 unsigned long address, pte_t pte)
{
 __update_tlb(vma, address, pte);
 __update_cache(vma, address, pte);
}
# 295 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm-generic/pgtable.h" 1



static inline int ptep_test_and_clear_young(pte_t *ptep)
{
 pte_t pte = *ptep;
 if (!pte_young(pte))
  return 0;
 set_pte(ptep, pte_mkold(pte));
 return 1;
}

static inline int ptep_test_and_clear_dirty(pte_t *ptep)
{
 pte_t pte = *ptep;
 if (!pte_dirty(pte))
  return 0;
 set_pte(ptep, pte_mkclean(pte));
 return 1;
}

static inline pte_t ptep_get_and_clear(pte_t *ptep)
{
 pte_t pte = *ptep;
 pte_clear(ptep);
 return pte;
}

static inline void ptep_set_wrprotect(pte_t *ptep)
{
 pte_t old_pte = *ptep;
 set_pte(ptep, pte_wrprotect(old_pte));
}

static inline void ptep_mkdirty(pte_t *ptep)
{
 pte_t old_pte = *ptep;
 set_pte(ptep, pte_mkdirty(old_pte));
}
# 296 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgtable.h" 2
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h" 2
# 44 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 rb_node_t vm_rb;






 struct vm_area_struct *vm_next_share;
 struct vm_area_struct **vm_pprev_share;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 unsigned long vm_raend;
 void * vm_private_data;
};
# 118 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
extern int vm_min_readahead;
extern int vm_max_readahead;





extern pgprot_t protection_map[16];
# 135 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 struct page * (*nopage)(struct vm_area_struct * area, unsigned long address, int unused);
};
# 156 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
typedef struct page {
 struct list_head list;
 struct address_space *mapping;
 unsigned long index;
 struct page *next_hash;

 atomic_t count;
 unsigned long flags;

 struct list_head lru;

 struct page **pprev_hash;
 struct buffer_head * buffers;
# 184 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
} mem_map_t;
# 204 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
static inline struct page *nth_page(struct page *page, int n)
{
 return page + n;
}
# 343 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
struct zone_struct;
extern struct zone_struct *zone_table[];

static inline zone_t *page_zone(struct page *page)
{
 return zone_table[page->flags >> (32 - 8)];
}

static inline void set_page_zone(struct page *page, unsigned long zone_num)
{
 page->flags &= ~(~0UL << (32 - 8));
 page->flags |= zone_num << (32 - 8);
}
# 390 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
extern void set_page_dirty(struct page *);
# 434 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
extern mem_map_t * mem_map;







extern struct page * _alloc_pages(unsigned int gfp_mask, unsigned int order);
extern struct page * __alloc_pages(unsigned int gfp_mask, unsigned int order, zonelist_t *zonelist);
extern struct page * alloc_pages_node(int nid, unsigned int gfp_mask, unsigned int order);

static inline struct page * alloc_pages(unsigned int gfp_mask, unsigned int order)
{



 if (order >= 10)
  return ((void *)0);
 return _alloc_pages(gfp_mask, order);
}



extern unsigned long __get_free_pages(unsigned int gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(unsigned int gfp_mask);
# 475 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);




extern void show_free_areas(void);
extern void show_free_areas_node(pg_data_t *pgdat);

extern void clear_page_tables(struct mm_struct *, unsigned long, int);

extern int fail_writepage(struct page *);
struct page * shmem_nopage(struct vm_area_struct * vma, unsigned long address, int unused);
struct file *shmem_file_setup(char * name, loff_t size);
extern void shmem_lock(struct file * file, int lock);
extern int shmem_zero_setup(struct vm_area_struct *);

extern void zap_page_range(struct mm_struct *mm, unsigned long address, unsigned long size, int actions);
extern int copy_page_range(struct mm_struct *dst, struct mm_struct *src, struct vm_area_struct *vma);
extern int remap_page_range(unsigned long from, unsigned long to, unsigned long size, pgprot_t prot);
extern int zeromap_page_range(unsigned long from, unsigned long size, pgprot_t prot);

extern int vmtruncate(struct inode * inode, loff_t offset);
extern pmd_t *__pmd_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
extern pte_t *pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
extern int handle_mm_fault(struct mm_struct *mm,struct vm_area_struct *vma, unsigned long address, int write_access);
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
extern int ptrace_readdata(struct task_struct *tsk, unsigned long src, char *dst, int len);
extern int ptrace_writedata(struct task_struct *tsk, char * src, unsigned long dst, int len);
extern int ptrace_attach(struct task_struct *tsk);
extern int ptrace_detach(struct task_struct *, unsigned int);
extern void ptrace_disable(struct task_struct *);
extern int ptrace_check_attach(struct task_struct *task, int kill);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);






static inline pmd_t *pmd_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 if (pgd_none(*pgd))
  return __pmd_alloc(mm, pgd, address);
 return pmd_offset(pgd, address);
}

extern int pgt_cache_water[2];
extern int check_pgt_cache(void);

extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, pg_data_t *pgdat, struct page *pmap,
 unsigned long * zones_size, unsigned long zone_start_paddr,
 unsigned long *zholes_size);
extern void mem_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void swapin_readahead(swp_entry_t);

extern struct address_space swapper_space;


static inline int is_page_cache_freeable(struct page * page)
{
 return ((&(page)->count)->counter) - !!page->buffers == 1;
}

extern int can_share_swap_page(struct page *);
extern int remove_exclusive_swap_page(struct page *);

extern void __free_pte(pte_t);


extern void lock_vma_mappings(struct vm_area_struct *);
extern void unlock_vma_mappings(struct vm_area_struct *);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void build_mmap_rb(struct mm_struct *);
extern void exit_mmap(struct mm_struct *);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);

static inline unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len) + (1L << 12) - 1) & (~((1L << 12)-1)))) < offset)
  goto out;
 if (!(offset & ~(~((1L << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);

static inline void __vma_unlink(struct mm_struct * mm, struct vm_area_struct * vma, struct vm_area_struct * prev)
{
 prev->vm_next = vma->vm_next;
 rb_erase(&vma->vm_rb, &mm->mm_rb);
 if (mm->mmap_cache == vma)
  mm->mmap_cache = prev;
}

static inline int can_vma_merge(struct vm_area_struct * vma, unsigned long vm_flags)
{
 if (!vma->vm_file && vma->vm_flags == vm_flags)
  return 1;
 else
  return 0;
}

struct zone_t;

extern void remove_inode_page(struct page *);
extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);


extern int filemap_sync(struct vm_area_struct *, unsigned long, size_t, unsigned int);
extern struct page *filemap_nopage(struct vm_area_struct *, unsigned long, int);
# 636 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/mm.h"
static inline unsigned int pf_gfp_mask(unsigned int gfp_mask)
{

 if (current->flags & 0x00004000)
  gfp_mask &= ~(0x40 | 0x80 | 0x100);

 return gfp_mask;
}



static inline int expand_stack(struct vm_area_struct * vma, unsigned long address)
{
 unsigned long grow;






 address &= (~((1L << 12)-1));
  do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&vma->vm_mm->page_table_lock); } while(0);


 if (vma->vm_start <= address) {
  do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
  return 0;
 }

 grow = (vma->vm_start - address) >> 12;
 if (vma->vm_end - address > current->rlim[3].rlim_cur ||
     ((vma->vm_mm->total_vm + grow) << 12) > current->rlim[6].rlim_cur) {
  do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
  return -12;
 }

 if ((vma->vm_flags & 0x00002000) &&
           ((vma->vm_mm->locked_vm + grow) << 12) > current->rlim[9].rlim_cur) {
  do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
  return -12;
 }


 vma->vm_start = address;
 vma->vm_pgoff -= grow;
 vma->vm_mm->total_vm += grow;
 if (vma->vm_flags & 0x00002000)
  vma->vm_mm->locked_vm += grow;
 do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0);
 return 0;
}


extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

extern struct vm_area_struct *find_extend_vma(struct mm_struct *mm, unsigned long addr);

extern struct page * vmalloc_to_page(void *addr);
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/slab.h" 2
# 49 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/slab.h"
extern void kmem_cache_init(void);
extern void kmem_cache_sizes_init(void);

extern kmem_cache_t *kmem_find_general_cachep(size_t, int gfpflags);
extern kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned long,
           void (*)(void *, kmem_cache_t *, unsigned long),
           void (*)(void *, kmem_cache_t *, unsigned long));
extern int kmem_cache_destroy(kmem_cache_t *);
extern int kmem_cache_shrink(kmem_cache_t *);
extern void *kmem_cache_alloc(kmem_cache_t *, int);
extern void kmem_cache_free(kmem_cache_t *, void *);
extern unsigned int kmem_cache_size(kmem_cache_t *);



extern void *kmalloc(size_t, int);
extern void kfree(const void *);

extern int kmem_cache_reap(int);


extern kmem_cache_t *vm_area_cachep;
extern kmem_cache_t *mm_cachep;
extern kmem_cache_t *names_cachep;
extern kmem_cache_t *files_cachep;
extern kmem_cache_t *filp_cachep;
extern kmem_cache_t *dquot_cachep;
extern kmem_cache_t *bh_cachep;
extern kmem_cache_t *fs_cachep;
extern kmem_cache_t *sigact_cachep;
# 53 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
typedef void irqreturn_t;




struct irqaction {
 void (*handler)(int, void *, struct pt_regs *);
 unsigned long flags;
 unsigned long mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
};





enum {
 TIMER_BH = 0,
 TQUEUE_BH,
 DIGI_BH,
 SERIAL_BH,
 RISCOM8_BH,
 SPECIALIX_BH,
 AURORA_BH,
 ESP_BH,
 SCSI_BH,
 IMMEDIATE_BH,
 CYCLADES_BH,
 CM206_BH,
 JS_BH,
 MACSERIAL_BH,
 ISICOM_BH
};

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hardirq.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hardirq.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq.h" 1
# 19 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/irq.h" 1
# 38 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/irq.h"
extern void disable_irq(unsigned int);
extern void disable_irq_nosync(unsigned int);
extern void enable_irq(unsigned int);

struct pt_regs;
extern unsigned int do_IRQ(int irq, struct pt_regs *regs);


extern void (*irq_setup)(void);

extern void init_generic_irq(void);
# 20 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq.h" 2
# 39 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq.h"
struct hw_interrupt_type {
 const char * typename;
 unsigned int (*startup)(unsigned int irq);
 void (*shutdown)(unsigned int irq);
 void (*enable)(unsigned int irq);
 void (*disable)(unsigned int irq);
 void (*ack)(unsigned int irq);
 void (*end)(unsigned int irq);
 void (*set_affinity)(unsigned int irq, unsigned long mask);
};

typedef struct hw_interrupt_type hw_irq_controller;
# 59 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq.h"
typedef struct {
 unsigned int status;
 hw_irq_controller *handler;
 struct irqaction *action;
 unsigned int depth;
 spinlock_t lock;
} __attribute__((__aligned__(16))) irq_desc_t;

extern irq_desc_t irq_desc [256];

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hw_irq.h" 1
# 13 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hw_irq.h"
extern atomic_t irq_err_count;


static inline void hw_resend_irq(struct hw_interrupt_type *h, unsigned int i)
{
}
# 70 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq.h" 2

extern int handle_IRQ_event(unsigned int, struct pt_regs *, struct irqaction *);
extern int setup_irq(unsigned int , struct irqaction * );

extern hw_irq_controller no_irq_type;
extern void no_action(int cpl, void *dev_id, struct pt_regs *regs);
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hardirq.h" 2


typedef struct {
 unsigned int __softirq_pending;
 unsigned int __local_irq_count;
 unsigned int __local_bh_count;
 unsigned int __syscall_count;
 struct task_struct * __ksoftirqd_task;
} __attribute__((__aligned__(16))) irq_cpustat_t;

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq_cpustat.h" 1
# 20 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/irq_cpustat.h"
extern irq_cpustat_t irq_stat[];
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/hardirq.h" 2
# 53 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/softirq.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/softirq.h"
int preempt_schedule(void);

static inline void cpu_bh_disable(int cpu)
{
 do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0);
 (irq_stat[((void)((cpu)), 0)].__local_bh_count)++;
 __asm__ __volatile__("": : :"memory");
}

static inline void __cpu_bh_enable(int cpu)
{
 __asm__ __volatile__("": : :"memory");
 (irq_stat[((void)((cpu)), 0)].__local_bh_count)--;
 do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0);
}
# 54 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h" 2
# 63 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
enum
{
 HI_SOFTIRQ=0,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
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

extern void cpu_raise_softirq(unsigned int cpu, unsigned int nr);
extern void raise_softirq(unsigned int nr);
# 110 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 126 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};

struct tasklet_head
{
 struct tasklet_struct *list;
} __attribute__ ((__aligned__(16)));

extern struct tasklet_head tasklet_vec[1];
extern struct tasklet_head tasklet_hi_vec[1];
# 162 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
extern void __tasklet_schedule(struct tasklet_struct *t);

static inline void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}


static inline void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_add(1,(&t->count));
 __asm__ __volatile__("": : :"memory");
}

static inline void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 do { } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline void tasklet_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_sub(1,(&t->count));
}

static inline void tasklet_hi_enable(struct tasklet_struct *t)
{
 __asm__ __volatile__("": : :"memory");
 atomic_sub(1,(&t->count));
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);
# 229 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
extern struct tasklet_struct bh_task_vec[];


extern spinlock_t global_bh_lock;

static inline void mark_bh(int nr)
{
 tasklet_hi_schedule(bh_task_vec+nr);
}

extern void init_bh(int nr, void (*routine)(void));
extern void remove_bh(int nr);
# 270 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);
# 54 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h" 1
# 311 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci_ids.h" 1
# 312 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h" 2
# 336 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ioport.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ioport.h"
struct resource {
 const char *name;
 unsigned long start, end;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 83 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ioport.h"
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern int check_resource(struct resource *root, unsigned long, unsigned long);
extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        unsigned long size,
        unsigned long min, unsigned long max,
        unsigned long align,
        void (*alignf)(void *, struct resource *,
         unsigned long, unsigned long),
        void *alignf_data);





extern struct resource * __request_region(struct resource *, unsigned long start, unsigned long n, const char *name);







extern int __check_region(struct resource *, unsigned long, unsigned long);
extern void __release_region(struct resource *, unsigned long, unsigned long);


extern void autoirq_setup(int waittime);
extern int autoirq_report(int waittime);
# 337 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h" 2




enum pci_mmap_state {
 pci_mmap_io,
 pci_mmap_mem
};
# 371 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
struct pci_dev {
 struct list_head global_list;
 struct list_head bus_list;
 struct pci_bus *bus;
 struct pci_bus *subordinate;

 void *sysdata;
 struct proc_dir_entry *procent;

 unsigned int devfn;
 unsigned short vendor;
 unsigned short device;
 unsigned short subsystem_vendor;
 unsigned short subsystem_device;
 unsigned int class;
 u8 hdr_type;
 u8 rom_base_reg;

 struct pci_driver *driver;
 void *driver_data;
 u64 dma_mask;





 u32 current_state;




 unsigned short vendor_compatible[4];
 unsigned short device_compatible[4];





 unsigned int irq;
 struct resource resource[12];
 struct resource dma_resource[2];
 struct resource irq_resource[2];

 char name[90];
 char slot_name[8];
 int active;
 int ro;
 unsigned short regs;


 unsigned short transparent:1;

 int (*prepare)(struct pci_dev *dev);
 int (*activate)(struct pci_dev *dev);
 int (*deactivate)(struct pci_dev *dev);
};
# 445 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
struct pci_bus {
 struct list_head node;
 struct pci_bus *parent;
 struct list_head children;
 struct list_head devices;
 struct pci_dev *self;
 struct resource *resource[4];

 struct pci_ops *ops;
 void *sysdata;
 struct proc_dir_entry *procdir;

 unsigned char number;
 unsigned char primary;
 unsigned char secondary;
 unsigned char subordinate;

 char name[48];
 unsigned short vendor;
 unsigned short device;
 unsigned int serial;
 unsigned char pnpver;
 unsigned char productver;
 unsigned char checksum;
 unsigned char pad1;
};



extern struct list_head pci_root_buses;
extern struct list_head pci_devices;

extern struct proc_dir_entry *proc_bus_pci_dir;
# 491 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
struct pci_ops {
 int (*read_byte)(struct pci_dev *, int where, u8 *val);
 int (*read_word)(struct pci_dev *, int where, u16 *val);
 int (*read_dword)(struct pci_dev *, int where, u32 *val);
 int (*write_byte)(struct pci_dev *, int where, u8 val);
 int (*write_word)(struct pci_dev *, int where, u16 val);
 int (*write_dword)(struct pci_dev *, int where, u32 val);
};

struct pbus_set_ranges_data
{
 unsigned long io_start, io_end;
 unsigned long mem_start, mem_end;
 unsigned long prefetch_start, prefetch_end;
};

struct pci_device_id {
 unsigned int vendor, device;
 unsigned int subvendor, subdevice;
 unsigned int class, class_mask;
 unsigned long driver_data;
};

struct pci_driver {
 struct list_head node;
 char *name;
 const struct pci_device_id *id_table;
 int (*probe) (struct pci_dev *dev, const struct pci_device_id *id);
 void (*remove) (struct pci_dev *dev);
 int (*save_state) (struct pci_dev *dev, u32 state);
 int (*suspend) (struct pci_dev *dev, u32 state);
 int (*resume) (struct pci_dev *dev);
 int (*enable_wake) (struct pci_dev *dev, u32 state, int enable);
};
# 559 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
void pcibios_init(void);
void pcibios_fixup_bus(struct pci_bus *);
int pcibios_enable_device(struct pci_dev *, int mask);
char *pcibios_setup (char *str);


void pcibios_align_resource(void *, struct resource *,
       unsigned long, unsigned long);
void pcibios_update_resource(struct pci_dev *, struct resource *,
        struct resource *, int);
void pcibios_update_irq(struct pci_dev *, int irq);
void pcibios_fixup_pbus_ranges(struct pci_bus *, struct pbus_set_ranges_data *);



int pcibios_present(void);
int pcibios_read_config_byte (unsigned char bus, unsigned char dev_fn,
         unsigned char where, unsigned char *val);
int pcibios_read_config_word (unsigned char bus, unsigned char dev_fn,
         unsigned char where, unsigned short *val);
int pcibios_read_config_dword (unsigned char bus, unsigned char dev_fn,
          unsigned char where, unsigned int *val);
int pcibios_write_config_byte (unsigned char bus, unsigned char dev_fn,
          unsigned char where, unsigned char val);
int pcibios_write_config_word (unsigned char bus, unsigned char dev_fn,
          unsigned char where, unsigned short val);
int pcibios_write_config_dword (unsigned char bus, unsigned char dev_fn,
    unsigned char where, unsigned int val);
int pcibios_find_class (unsigned int class_code, unsigned short index, unsigned char *bus, unsigned char *dev_fn);
int pcibios_find_device (unsigned short vendor, unsigned short dev_id,
    unsigned short index, unsigned char *bus,
    unsigned char *dev_fn);



void pci_init(void);
int pci_bus_exists(const struct list_head *list, int nr);
struct pci_bus *pci_scan_bus(int bus, struct pci_ops *ops, void *sysdata);
struct pci_bus *pci_alloc_primary_bus(int bus);
struct pci_dev *pci_scan_device(struct pci_dev *temp);
struct pci_dev *pci_scan_slot(struct pci_dev *temp);
int pci_proc_attach_device(struct pci_dev *dev);
int pci_proc_detach_device(struct pci_dev *dev);
int pci_proc_attach_bus(struct pci_bus *bus);
int pci_proc_detach_bus(struct pci_bus *bus);
void pci_name_device(struct pci_dev *dev);
char *pci_class_name(u32 class);
void pci_read_bridge_bases(struct pci_bus *child);
struct resource *pci_find_parent_resource(const struct pci_dev *dev, struct resource *res);
int pci_setup_device(struct pci_dev *dev);
int pci_get_interrupt_pin(struct pci_dev *dev, struct pci_dev **bridge);



struct pci_dev *pci_find_device (unsigned int vendor, unsigned int device, const struct pci_dev *from);
struct pci_dev *pci_find_subsys (unsigned int vendor, unsigned int device,
     unsigned int ss_vendor, unsigned int ss_device,
     const struct pci_dev *from);
struct pci_dev *pci_find_class (unsigned int class, const struct pci_dev *from);
struct pci_dev *pci_find_slot (unsigned int bus, unsigned int devfn);
int pci_find_capability (struct pci_dev *dev, int cap);

int pci_read_config_byte(struct pci_dev *dev, int where, u8 *val);
int pci_read_config_word(struct pci_dev *dev, int where, u16 *val);
int pci_read_config_dword(struct pci_dev *dev, int where, u32 *val);
int pci_write_config_byte(struct pci_dev *dev, int where, u8 val);
int pci_write_config_word(struct pci_dev *dev, int where, u16 val);
int pci_write_config_dword(struct pci_dev *dev, int where, u32 val);

int pci_enable_device(struct pci_dev *dev);
int pci_enable_device_bars(struct pci_dev *dev, int mask);
void pci_disable_device(struct pci_dev *dev);
void pci_set_master(struct pci_dev *dev);

int pci_set_mwi(struct pci_dev *dev);
void pci_clear_mwi(struct pci_dev *dev);
int pci_set_dma_mask(struct pci_dev *dev, u64 mask);
int pci_dac_set_dma_mask(struct pci_dev *dev, u64 mask);
int pci_assign_resource(struct pci_dev *dev, int i);


int pci_save_state(struct pci_dev *dev, u32 *buffer);
int pci_restore_state(struct pci_dev *dev, u32 *buffer);
int pci_set_power_state(struct pci_dev *dev, int state);
int pci_enable_wake(struct pci_dev *dev, u32 state, int enable);



int pci_claim_resource(struct pci_dev *, int);
void pci_assign_unassigned_resources(void);
void pdev_enable_device(struct pci_dev *);
void pdev_sort_resources(struct pci_dev *, struct resource_list *);
unsigned long pci_bridge_check_io(struct pci_dev *);
void pci_fixup_irqs(u8 (*)(struct pci_dev *, u8 *),
      int (*)(struct pci_dev *, u8, u8));

int pci_request_regions(struct pci_dev *, char *);
void pci_release_regions(struct pci_dev *);
int pci_request_region(struct pci_dev *, int, char *);
void pci_release_region(struct pci_dev *, int);


int pci_register_driver(struct pci_driver *);
void pci_unregister_driver(struct pci_driver *);
void pci_insert_device(struct pci_dev *, struct pci_bus *);
void pci_remove_device(struct pci_dev *);
struct pci_driver *pci_dev_driver(const struct pci_dev *);
const struct pci_device_id *pci_match_device(const struct pci_device_id *ids, const struct pci_dev *dev);
void pci_announce_device_to_drivers(struct pci_dev *);
unsigned int pci_do_scan_bus(struct pci_bus *bus);
struct pci_bus * pci_add_new_bus(struct pci_bus *parent, struct pci_dev *dev, int busnr);


struct pci_pool *pci_pool_create (const char *name, struct pci_dev *dev,
  size_t size, size_t align, size_t allocation, int flags);
void pci_pool_destroy (struct pci_pool *pool);

void *pci_pool_alloc (struct pci_pool *pool, int flags, dma_addr_t *handle);
void pci_pool_free (struct pci_pool *pool, void *vaddr, dma_addr_t addr);





# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h" 1
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
extern unsigned int pcibios_assign_all_busses(void);
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
extern void pcibios_set_master(struct pci_dev *dev);

static inline void pcibios_penalize_isa_irq(int irq)
{

}
# 41 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/scatterlist.h" 1



struct scatterlist {
 char * address;

 struct page * page;
 unsigned int offset;
 dma_addr_t dma_address;
 unsigned int length;
};
# 42 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pagemap.h" 1
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pagemap.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/highmem.h" 1




# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgalloc.h" 1
# 25 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgalloc.h"
extern void local_flush_tlb_all(void);
extern void local_flush_tlb_mm(struct mm_struct *mm);
extern void local_flush_tlb_range(struct mm_struct *mm, unsigned long start,
          unsigned long end);
extern void local_flush_tlb_page(struct vm_area_struct *vma,
                                 unsigned long page);
extern void local_flush_tlb_one(unsigned long page);
# 49 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgalloc.h"
static inline void flush_tlb_pgtables(struct mm_struct *mm,
                                      unsigned long start, unsigned long end)
{

}
# 70 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgalloc.h"
extern void pgd_init(unsigned long page);

static __inline__ pgd_t *get_pgd_slow(void)
{
 pgd_t *ret = (pgd_t *)__get_free_pages((0x20 | 0x10 | 0x40 | 0x80 | 0x100), 0), *init;

 if (ret) {
  init = pgd_offset(&init_mm, 0);
  pgd_init((unsigned long)ret);
  memcpy (ret + (0x80000000UL/(1UL << (2 * 12 - ffz(~sizeof(pte_t))))), init + (0x80000000UL/(1UL << (2 * 12 - ffz(~sizeof(pte_t))))),
   ((((1L << 12) << 0) / sizeof(pgd_t)) - (0x80000000UL/(1UL << (2 * 12 - ffz(~sizeof(pte_t)))))) * sizeof(pgd_t));
 }
 return ret;
}

static __inline__ pgd_t *get_pgd_fast(void)
{
 unsigned long *ret;

 if((ret = (cpu_data[0].pgd_quick)) != ((void *)0)) {
  (cpu_data[0].pgd_quick) = (unsigned long *)(*ret);
  ret[0] = ret[1];
  (cpu_data[0].pgtable_cache_sz)--;
 } else
  ret = (unsigned long *)get_pgd_slow();
 return (pgd_t *)ret;
}

static __inline__ void free_pgd_fast(pgd_t *pgd)
{
 *(unsigned long *)pgd = (unsigned long) (cpu_data[0].pgd_quick);
 (cpu_data[0].pgd_quick) = (unsigned long *) pgd;
 (cpu_data[0].pgtable_cache_sz)++;
}

static __inline__ void free_pgd_slow(pgd_t *pgd)
{
 free_pages((unsigned long)pgd, 0);
}

static __inline__ pte_t *get_pte_fast(void)
{
 unsigned long *ret;

 if((ret = (unsigned long *)(cpu_data[0].pte_quick)) != ((void *)0)) {
  (cpu_data[0].pte_quick) = (unsigned long *)(*ret);
  ret[0] = ret[1];
  (cpu_data[0].pgtable_cache_sz)--;
 }
 return (pte_t *)ret;
}

static __inline__ void free_pte_fast(pte_t *pte)
{
 *(unsigned long *)pte = (unsigned long) (cpu_data[0].pte_quick);
 (cpu_data[0].pte_quick) = (unsigned long *) pte;
 (cpu_data[0].pgtable_cache_sz)++;
}

static __inline__ void free_pte_slow(pte_t *pte)
{
 free_pages(((unsigned long)pte),0);
}


static __inline__ pmd_t *get_pmd_fast(void)
{
 return (pmd_t *)0;
}

static __inline__ void free_pmd_fast(pmd_t *pmd)
{
}

static __inline__ void free_pmd_slow(pmd_t *pmd)
{
}

extern void __bad_pte(pmd_t *pmd);

static inline pte_t *pte_alloc_one(struct mm_struct *mm, unsigned long address)
{
 pte_t *pte;

 pte = (pte_t *) __get_free_pages(((0x20 | 0x10 | 0x40 | 0x80 | 0x100)),0);
 if (pte)
  clear_page(pte);
 return pte;
}

static inline pte_t *pte_alloc_one_fast(struct mm_struct *mm, unsigned long address)
{
 unsigned long *ret;

 if ((ret = (unsigned long *)(cpu_data[0].pte_quick)) != ((void *)0)) {
  (cpu_data[0].pte_quick) = (unsigned long *)(*ret);
  ret[0] = ret[1];
  (cpu_data[0].pgtable_cache_sz)--;
 }
 return (pte_t *)ret;
}

static __inline__ void pte_free_fast(pte_t *pte)
{
 *(unsigned long *)pte = (unsigned long) (cpu_data[0].pte_quick);
 (cpu_data[0].pte_quick) = (unsigned long *) pte;
 (cpu_data[0].pgtable_cache_sz)++;
}

static __inline__ void pte_free_slow(pte_t *pte)
{
 free_pages(((unsigned long)pte),0);
}
# 197 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pgalloc.h"
extern int do_check_pgt_cache(int, int);
# 6 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/highmem.h" 2
# 56 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/highmem.h"
static inline unsigned int nr_free_highpages(void) { return 0; }

static inline void *kmap(struct page *page) { return ((void *)((unsigned long) ((((page) - page_zone(page)->zone_mem_map) << 12) + page_zone(page)->zone_start_paddr) + 0x80000000UL)); }
# 74 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/highmem.h"
static inline void clear_user_highpage(struct page *page, unsigned long vaddr)
{
 void *addr = kmap(page);
 clear_user_page(addr, vaddr);
 do { } while (0);
}

static inline void clear_highpage(struct page *page)
{
 clear_page(kmap(page));
 do { } while (0);
}




static inline void memclear_highpage_flush(struct page *page, unsigned int offset, unsigned int size)
{
 char *kaddr;

 if (offset + size > (1L << 12))
  __out_of_line_bug(95);
 kaddr = kmap(page);
 memset(kaddr + offset, 0, size);
 flush_dcache_page(page);
 do { } while (0);
 do { } while (0);
}

static inline void copy_user_highpage(struct page *to, struct page *from, unsigned long vaddr)
{
 char *vfrom, *vto;

 vfrom = kmap(from);
 vto = kmap(to);
 copy_user_page(vto, vfrom, vaddr);
 do { } while (0);
 do { } while (0);
}

static inline void copy_highpage(struct page *to, struct page *from)
{
 char *vfrom, *vto;

 vfrom = kmap(from);
 vto = kmap(to);
 copy_page(vto, vfrom);
 do { } while (0);
 do { } while (0);
}
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pagemap.h" 2
# 34 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pagemap.h"
static inline struct page *page_cache_alloc(struct address_space *x)
{
 return alloc_pages(x->gfp_mask, 0);
}






extern unsigned int page_hash_bits;



extern unsigned long page_cache_size;
extern struct page **page_hash_table;

extern void page_cache_init(unsigned long);
# 62 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pagemap.h"
static inline unsigned long _page_hashfn(struct address_space * mapping, unsigned long index)
{


 return (((((unsigned long) mapping)/(sizeof(struct inode) & ~ (sizeof(struct inode) - 1)))+index)+(((((unsigned long) mapping)/(sizeof(struct inode) & ~ (sizeof(struct inode) - 1)))+index)>>(page_hash_bits))) & ((1 << (page_hash_bits))-1);


}



extern struct page * __find_get_page(struct address_space *mapping,
    unsigned long index, struct page **hash);


extern struct page * __find_lock_page (struct address_space * mapping,
    unsigned long index, struct page **hash);
extern struct page * find_or_create_page(struct address_space *mapping,
    unsigned long index, unsigned int gfp_mask);

extern void lock_page(struct page *page);
extern void unlock_page(struct page *page);


extern struct page *find_trylock_page(struct address_space *, unsigned long);

extern void add_to_page_cache(struct page * page, struct address_space *mapping, unsigned long index);
extern void add_to_page_cache_locked(struct page * page, struct address_space *mapping, unsigned long index);
extern int add_to_page_cache_unique(struct page * page, struct address_space *mapping, unsigned long index, struct page **hash);

extern void ___wait_on_page(struct page *);

static inline void wait_on_page(struct page * page)
{
 if (test_bit(0, &(page)->flags))
  ___wait_on_page(page);
}

extern void wakeup_page_waiters(struct page * page);




static inline struct page *grab_cache_page(struct address_space *mapping, unsigned long index)
{
 return find_or_create_page(mapping, index, mapping->gfp_mask);
}


extern struct page * grab_cache_page_nowait (struct address_space *, unsigned long);

typedef int filler_t(void *, struct page*);

extern struct page *read_cache_page(struct address_space *, unsigned long,
    filler_t *, void *);
# 16 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h" 2
# 28 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
unsigned long tango2_virt_to_bus(unsigned long virt_addr);
unsigned long tango2_bus_to_virt(unsigned long bus_addr);
# 77 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
extern void * __ioremap(phys_t offset, phys_t size, unsigned long flags);
# 120 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
extern void iounmap(void *addr);
# 155 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
extern unsigned long isa_slot_offset;
# 194 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
static inline int check_signature(unsigned long io_addr,
 const unsigned char *signature, int length)
{
 int retval = 0;
 do {
  if ((*(volatile unsigned char *)(io_addr)) != *signature)
   goto out;
  io_addr++;
  signature++;
  length--;
 } while (length);
 retval = 1;
out:
 return retval;
}
# 223 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
static inline int isa_check_signature(unsigned long io_addr,
 const unsigned char *signature, int length)
{
 int retval = 0;
 do {
  if ((*(volatile unsigned char *)(((char *)(isa_slot_offset)) + (io_addr))) != *signature)
   goto out;
  io_addr++;
  signature++;
  length--;
 } while (length);
 retval = 1;
out:
 return retval;
}
# 252 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
static inline unsigned long virt_to_phys(volatile void * address)
{
 return (unsigned long)address - 0x80000000UL;
}
# 270 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
static inline void * phys_to_virt(unsigned long address)
{
 return (void *)(address + 0x80000000UL);
}




static inline unsigned long virt_to_bus(volatile void * address)
{
 return (unsigned long)address - 0x80000000UL;
}

static inline void * bus_to_virt(unsigned long address)
{
 return (void *)(address + 0x80000000UL);
}
# 299 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
extern const unsigned long mips_io_port_base;
# 408 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
static inline unsigned char inb(unsigned long port)
{
 u32 p;
  if ((port >= 0x58000000UL) && (port < 0x60000000UL))
   p = port - 0x58000000UL;
  else {
   the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port));
   p = port;
  }
  return *(volatile u8 *)(mips_io_port_base + p);
}

static inline unsigned short inw(unsigned long port)
{
  u32 p;
 if ((port >= 0x58000000UL) && (port < 0x60000000UL))
   p = port - 0x58000000UL;
  else {
   the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port));
   p = port;
  }
  p = (p);

  return (*(volatile u16 *)(mips_io_port_base + p));
}

static inline unsigned int inl(unsigned long port)
{
  u32 p;
  if ((port >= 0x58000000UL) && (port < 0x60000000UL))
   p = port - 0x58000000UL;
  else {
   the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port));
   p = port;
  }
  return (*(volatile u32 *)(mips_io_port_base + p));
}

static inline unsigned char inb_p(unsigned long port)
{
  u8 __val;
  u32 p;
  if ((port >= 0x58000000UL) && (port < 0x60000000UL))
   p = port - 0x58000000UL;
  else {
   the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port));
   p = port;
  }
  __val = *(volatile u8 *)(mips_io_port_base + p);
  ;

  return __val;
}

static inline unsigned short inw_p(unsigned long port)
{
  u16 __val;
  u32 p;
  if ((port >= 0x58000000UL) && (port < 0x60000000UL))
   p = port - 0x58000000UL;
  else {
   the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port));
   p = port;
  }
  p = (p);
  __val = *(volatile u16 *)(mips_io_port_base + p);
  ;

  return (__val);
}

static inline unsigned int inl_p(unsigned long port)
{
  u32 __val;
  u32 p;
  if ((port >= 0x58000000UL) && (port < 0x60000000UL))
   p = port - 0x58000000UL;
  else {
   the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port));
   p = port;
  }
  __val = *(volatile u32 *)(mips_io_port_base + p);
  ;
  return (__val);
}
# 577 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
static inline void __outsb(unsigned long port, void *addr, unsigned int count)
{
 while (count--) {
  do { u32 p; if (((port) >= 0x58000000UL) && ((port) < 0x60000000UL)) p = (port) - 0x58000000UL; else { the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port)); p = (port); } *(volatile u8 *)(mips_io_port_base + (p)) = (*(u8 *)addr); __asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while(0);
  addr++;
 }
}

static inline void __insb(unsigned long port, void *addr, unsigned int count)
{
 while (count--) {
  *(u8 *)addr = inb(port);
  addr++;
 }
}

static inline void __outsw(unsigned long port, void *addr, unsigned int count)
{
 while (count--) {
  do { u32 p; if (((port) >= 0x58000000UL) && ((port) < 0x60000000UL)) p = (port) - 0x58000000UL; else { the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port)); p = (port); } *(volatile u16 *)(mips_io_port_base + (p)) = (*(u16 *)addr); __asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while(0);
  addr += 2;
 }
}

static inline void __insw(unsigned long port, void *addr, unsigned int count)
{
 while (count--) {
  *(u16 *)addr = inw(port);
  addr += 2;
 }
}

static inline void __outsl(unsigned long port, void *addr, unsigned int count)
{
 while (count--) {
  do { u32 p; if (((port) >= 0x58000000UL) && ((port) < 0x60000000UL)) p = (port) - 0x58000000UL; else { the_REAL_printk("Port operation exceed Tango2 PCI IO space 0x%08x\n", (port)); p = (port); } *(volatile u32 *)(mips_io_port_base + (p)) = (*(u32 *)addr); __asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while(0);
  addr += 4;
 }
}

static inline void __insl(unsigned long port, void *addr, unsigned int count)
{
 while (count--) {
  *(u32 *)addr = inl(port);
  addr += 4;
 }
}
# 652 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/io.h"
extern void (*_dma_cache_wback_inv)(unsigned long start, unsigned long size);
extern void (*_dma_cache_wback)(unsigned long start, unsigned long size);
extern void (*_dma_cache_inv)(unsigned long start, unsigned long size);
# 44 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h" 2
# 53 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/tango2/hardware.h" 1



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/version.h" 1
# 5 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/tango2/hardware.h" 2
# 54 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h" 2






struct pci_dev;
# 77 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
extern void *pci_alloc_consistent(struct pci_dev *hwdev, size_t size,
      dma_addr_t *dma_handle);
# 89 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
extern void pci_free_consistent(struct pci_dev *hwdev, size_t size,
    void *vaddr, dma_addr_t dma_handle);
# 99 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
static inline dma_addr_t pci_map_single(struct pci_dev *hwdev, void *ptr,
     size_t size, int direction)
{
 unsigned long addr = (unsigned long) ptr;

 if (direction == 3)
  __out_of_line_bug(105);

 _dma_cache_wback_inv(addr,size);

 return tango2_virt_to_bus(((unsigned long) (ptr) - 0x80000000UL));
}
# 120 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
static inline void pci_unmap_single(struct pci_dev *hwdev, dma_addr_t dma_addr,
        size_t size, int direction)
{
 if (direction == 3)
  __out_of_line_bug(124);

 if (direction != 1) {
  unsigned long addr;

  addr = tango2_bus_to_virt(dma_addr) + 0x80000000UL;
  _dma_cache_wback_inv(addr,size);
 }
}





static inline dma_addr_t pci_map_page(struct pci_dev *hwdev, struct page *page,
          unsigned long offset, size_t size,
                                      int direction)
{
 unsigned long addr;

 if (direction == 3)
  __out_of_line_bug(145);

 addr = (unsigned long) ((void *)((unsigned long) ((((page) - page_zone(page)->zone_mem_map) << 12) + page_zone(page)->zone_start_paddr) + 0x80000000UL)) + offset;
 _dma_cache_wback_inv(addr,size);

 return tango2_virt_to_bus(((page - mem_map) << 12) + offset);
}

static inline void pci_unmap_page(struct pci_dev *hwdev, dma_addr_t dma_address,
      size_t size, int direction)
{
 if (direction == 3)
  __out_of_line_bug(157);

 if (direction != 1) {
  unsigned long addr;

  addr = tango2_bus_to_virt(dma_address) + 0x80000000UL;
  _dma_cache_wback_inv(addr,size);
 }
}
# 191 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
static inline int pci_map_sg(struct pci_dev *hwdev, struct scatterlist *sg,
        int nents, int direction)
{
 int i;

 if (direction == 3)
  __out_of_line_bug(197);

 for (i = 0; i < nents; i++, sg++) {
  if (sg->address && sg->page)
   __out_of_line_bug(201);
  else if (!sg->address && !sg->page)
   __out_of_line_bug(203);

  if (sg->address) {
   _dma_cache_wback_inv((unsigned long)sg->address,sg->length);

   sg->dma_address = tango2_virt_to_bus(((unsigned long) (sg->address) - 0x80000000UL));
  } else {
   sg->dma_address = ((sg->page - mem_map) << 12) +
                     sg->offset;
   _dma_cache_wback_inv((unsigned long) (((void *)((unsigned long) ((((sg->page) - page_zone(sg->page)->zone_mem_map) << 12) + page_zone(sg->page)->zone_start_paddr) + 0x80000000UL)) + sg->offset),sg->length);


  }
 }

 return nents;
}






static inline void pci_unmap_sg(struct pci_dev *hwdev, struct scatterlist *sg,
    int nents, int direction)
{
 int i;

 if (direction == 3)
  __out_of_line_bug(232);

 if (direction == 1)
  return;

 for (i = 0; i < nents; i++, sg++) {
  if (sg->address && sg->page)
   __out_of_line_bug(239);
  else if (!sg->address && !sg->page)
   __out_of_line_bug(241);

  if (!sg->address)
   continue;
  _dma_cache_wback_inv((unsigned long)sg->address,sg->length);
 }
}
# 259 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
static inline void pci_dma_sync_single(struct pci_dev *hwdev,
           dma_addr_t dma_handle,
           size_t size, int direction)
{
 unsigned long addr;

 if (direction == 3)
  __out_of_line_bug(266);

 addr = tango2_bus_to_virt(dma_handle) + 0x80000000UL;
 _dma_cache_wback_inv(addr,size);
}
# 279 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
static inline void pci_dma_sync_sg(struct pci_dev *hwdev,
       struct scatterlist *sg,
       int nelems, int direction)
{

 int i;


 if (direction == 3)
  __out_of_line_bug(288);



 for (i = 0; i < nelems; i++, sg++)
  _dma_cache_wback_inv((unsigned long)sg->address,sg->length);

}







static inline int pci_dma_supported(struct pci_dev *hwdev, u64 mask)
{
# 315 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h"
 return 1;
}




static inline dma64_addr_t pci_dac_page_to_dma(struct pci_dev *pdev,
 struct page *page, unsigned long offset, int direction)
{
 dma64_addr_t addr = ((page - mem_map) << 12) + offset;

 return (dma64_addr_t) tango2_virt_to_bus(addr);
}

static inline struct page *pci_dac_dma_to_page(struct pci_dev *pdev,
 dma64_addr_t dma_addr)
{
 unsigned long poff = tango2_bus_to_virt(dma_addr) >> 12;

 return mem_map + poff;
}

static inline unsigned long pci_dac_dma_to_offset(struct pci_dev *pdev,
 dma64_addr_t dma_addr)
{
 return dma_addr & ~(~((1L << 12)-1));
}

static inline void pci_dac_dma_sync_single(struct pci_dev *pdev,
 dma64_addr_t dma_addr, size_t len, int direction)
{
 unsigned long addr;

 if (direction == 3)
  do { the_REAL_printk("BUG on %s (%s:%d)\n", __FUNCTION__, "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/pci.h", 349); __asm__ __volatile__("break %0" : : "i" (512)); } while (0);

 addr = tango2_bus_to_virt(dma_addr) + 0x80000000UL;
 _dma_cache_wback_inv(addr,len);
}
# 684 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h" 2
# 750 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
static inline int pci_module_init(struct pci_driver *drv)
{
 int rc = pci_register_driver (drv);

 if (rc > 0)
  return 0;
# 765 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
 if (rc == 0)
  rc = -19;




 pci_unregister_driver (drv);

 return rc;
}
# 795 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
static inline void *pci_get_drvdata (struct pci_dev *pdev)
{
 return pdev->driver_data;
}

static inline void pci_set_drvdata (struct pci_dev *pdev, void *data)
{
 pdev->driver_data = data;
}

static inline char *pci_name(struct pci_dev *pdev)
{
 return pdev->slot_name;
}
# 817 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/pci.h"
struct pci_fixup {
 int pass;
 u16 vendor, device;
 void (*hook)(struct pci_dev *dev);
};

extern struct pci_fixup pcibios_fixups[];




void pci_fixup_device(int pass, struct pci_dev *dev);

extern int pci_pci_problems;
# 55 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h" 1
# 28 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if.h" 1
# 26 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if.h"
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/hdlc/ioctl.h" 1



typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
} sync_serial_settings;

typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
 unsigned int slot_map;
} te1_settings;

typedef struct {
 unsigned short encoding;
 unsigned short parity;
} raw_hdlc_proto;

typedef struct {
 unsigned int t391;
 unsigned int t392;
 unsigned int n391;
 unsigned int n392;
 unsigned int n393;
 unsigned short lmi;
 unsigned short dce;
} fr_proto;

typedef struct {
 unsigned int dlci;
} fr_proto_pvc;

typedef struct {
 unsigned int dlci;
 char master[16];
}fr_proto_pvc_info;

typedef struct {
    unsigned int interval;
    unsigned int timeout;
} cisco_proto;
# 27 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if.h" 2
# 93 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if.h"
struct ifmap
{
 unsigned long mem_start;
 unsigned long mem_end;
 unsigned short base_addr;
 unsigned char irq;
 unsigned char dma;
 unsigned char port;

};

struct if_settings
{
 unsigned int type;
 unsigned int size;
 union {

  raw_hdlc_proto *raw_hdlc;
  cisco_proto *cisco;
  fr_proto *fr;
  fr_proto_pvc *fr_pvc;
  fr_proto_pvc_info *fr_pvc_info;


  sync_serial_settings *sync;
  te1_settings *te1;
 } ifs_ifsu;
};
# 129 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if.h"
struct ifreq
{

 union
 {
  char ifrn_name[16];
 } ifr_ifrn;

 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  struct sockaddr ifru_netmask;
  struct sockaddr ifru_hwaddr;
  short ifru_flags;
  int ifru_ivalue;
  int ifru_mtu;
  struct ifmap ifru_map;
  char ifru_slave[16];
  char ifru_newname[16];
  char * ifru_data;
  struct if_settings ifru_settings;
 } ifr_ifru;
};
# 179 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if.h"
struct ifconf
{
 int ifc_len;
 union
 {
  char * ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;
};
# 29 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_ether.h" 1
# 97 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_ether.h"
struct ethhdr
{
 unsigned char h_dest[6];
 unsigned char h_source[6];
 unsigned short h_proto;
} __attribute__((packed));
# 30 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_packet.h" 1



struct sockaddr_pkt
{
 unsigned short spkt_family;
 unsigned char spkt_device[14];
 unsigned short spkt_protocol;
};

struct sockaddr_ll
{
 unsigned short sll_family;
 unsigned short sll_protocol;
 int sll_ifindex;
 unsigned short sll_hatype;
 unsigned char sll_pkttype;
 unsigned char sll_halen;
 unsigned char sll_addr[8];
};
# 43 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_packet.h"
struct tpacket_stats
{
 unsigned int tp_packets;
 unsigned int tp_drops;
};

struct tpacket_hdr
{
 unsigned long tp_status;





 unsigned int tp_len;
 unsigned int tp_snaplen;
 unsigned short tp_mac;
 unsigned short tp_net;
 unsigned int tp_sec;
 unsigned int tp_usec;
};
# 82 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_packet.h"
struct tpacket_req
{
 unsigned int tp_block_size;
 unsigned int tp_block_nr;
 unsigned int tp_frame_size;
 unsigned int tp_frame_nr;
};

struct packet_mreq
{
 int mr_ifindex;
 unsigned short mr_type;
 unsigned short mr_alen;
 unsigned char mr_address[8];
};
# 31 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h" 2
# 42 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
struct divert_blk;
struct vlan_group;
struct ethtool_ops;
# 104 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
struct net_device_stats
{
 unsigned long rx_packets;
 unsigned long tx_packets;
 unsigned long rx_bytes;
 unsigned long tx_bytes;
 unsigned long rx_errors;
 unsigned long tx_errors;
 unsigned long rx_dropped;
 unsigned long tx_dropped;
 unsigned long multicast;
 unsigned long collisions;


 unsigned long rx_length_errors;
 unsigned long rx_over_errors;
 unsigned long rx_crc_errors;
 unsigned long rx_frame_errors;
 unsigned long rx_fifo_errors;
 unsigned long rx_missed_errors;


 unsigned long tx_aborted_errors;
 unsigned long tx_carrier_errors;
 unsigned long tx_fifo_errors;
 unsigned long tx_heartbeat_errors;
 unsigned long tx_window_errors;


 unsigned long rx_compressed;
 unsigned long tx_compressed;
};



enum {
        IF_PORT_UNKNOWN = 0,
        IF_PORT_10BASE2,
        IF_PORT_10BASET,
        IF_PORT_AUI,
        IF_PORT_100BASET,
        IF_PORT_100BASETX,
        IF_PORT_100BASEFX
};



extern const char *if_port_text[];


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h" 1
# 97 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
struct sk_buff_head {

 struct sk_buff * next;
 struct sk_buff * prev;

 __u32 qlen;
 spinlock_t lock;
};

struct sk_buff;



typedef struct skb_frag_struct skb_frag_t;

struct skb_frag_struct
{
 struct page *page;
 __u16 page_offset;
 __u16 size;
};




struct skb_shared_info {
 atomic_t dataref;
 unsigned int nr_frags;
 struct sk_buff *frag_list;
 skb_frag_t frags[6];
};

struct sk_buff {

 struct sk_buff * next;
 struct sk_buff * prev;

 struct sk_buff_head * list;
 struct sock *sk;
 struct timeval stamp;
 struct net_device *dev;
 struct net_device *real_dev;





 union
 {
  struct tcphdr *th;
  struct udphdr *uh;
  struct icmphdr *icmph;
  struct igmphdr *igmph;
  struct iphdr *ipiph;
  struct spxhdr *spxh;
  unsigned char *raw;
 } h;


 union
 {
  struct iphdr *iph;
  struct ipv6hdr *ipv6h;
  struct arphdr *arph;
  struct ipxhdr *ipxh;
  unsigned char *raw;
 } nh;


 union
 {
    struct ethhdr *ethernet;
    unsigned char *raw;
 } mac;

 struct dst_entry *dst;







 char cb[48];

 unsigned int len;
  unsigned int data_len;
 unsigned int csum;
 unsigned char __unused,
   cloned,
     pkt_type,
     ip_summed;
 __u32 priority;
 atomic_t users;
 unsigned short protocol;
 unsigned short security;
 unsigned int truesize;

 unsigned char *head;
 unsigned char *data;
 unsigned char *tail;
 unsigned char *end;

 void (*destructor)(struct sk_buff *);
# 222 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
};
# 232 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
extern void __kfree_skb(struct sk_buff *skb);
extern struct sk_buff * alloc_skb(unsigned int size, int priority);
extern void kfree_skbmem(struct sk_buff *skb);
extern struct sk_buff * skb_clone(struct sk_buff *skb, int priority);
extern struct sk_buff * skb_copy(const struct sk_buff *skb, int priority);
extern struct sk_buff * pskb_copy(struct sk_buff *skb, int gfp_mask);
extern int pskb_expand_head(struct sk_buff *skb, int nhead, int ntail, int gfp_mask);
extern struct sk_buff * skb_realloc_headroom(struct sk_buff *skb, unsigned int headroom);
extern struct sk_buff * skb_copy_expand(const struct sk_buff *skb,
      int newheadroom,
      int newtailroom,
      int priority);
extern struct sk_buff * skb_pad(struct sk_buff *skb, int pad);

extern void skb_over_panic(struct sk_buff *skb, int len, void *here);
extern void skb_under_panic(struct sk_buff *skb, int len, void *here);
# 259 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline int skb_queue_empty(struct sk_buff_head *list)
{
 return (list->next == (struct sk_buff *) list);
}
# 272 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_get(struct sk_buff *skb)
{
 atomic_add(1,(&skb->users));
 return skb;
}
# 291 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void kfree_skb(struct sk_buff *skb)
{
 if (__builtin_expect((((&skb->users)->counter) == 1),1))
  __asm__ __volatile__("": : :"memory");
 else if (__builtin_expect((!(atomic_sub_return(1, (&skb->users)) == 0)),1))
  return;
 __kfree_skb(skb);
}
# 309 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline int skb_cloned(struct sk_buff *skb)
{
 return skb->cloned && ((&((struct skb_shared_info *)((skb)->end))->dataref)->counter) != 1;
}
# 322 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline int skb_shared(struct sk_buff *skb)
{
 return (((&skb->users)->counter) != 1);
}
# 341 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_share_check(struct sk_buff *skb, int pri)
{
 if (skb_shared(skb)) {
  struct sk_buff *nskb;
  nskb = skb_clone(skb, pri);
  kfree_skb(skb);
  return nskb;
 }
 return skb;
}
# 374 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_unshare(struct sk_buff *skb, int pri)
{
 struct sk_buff *nskb;
 if(!skb_cloned(skb))
  return skb;
 nskb=skb_copy(skb, pri);
 kfree_skb(skb);
 return nskb;
}
# 398 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_peek(struct sk_buff_head *list_)
{
 struct sk_buff *list = ((struct sk_buff *)list_)->next;
 if (list == (struct sk_buff *)list_)
  list = ((void *)0);
 return list;
}
# 420 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_peek_tail(struct sk_buff_head *list_)
{
 struct sk_buff *list = ((struct sk_buff *)list_)->prev;
 if (list == (struct sk_buff *)list_)
  list = ((void *)0);
 return list;
}
# 435 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline __u32 skb_queue_len(struct sk_buff_head *list_)
{
 return(list_->qlen);
}

static inline void skb_queue_head_init(struct sk_buff_head *list)
{
 do { } while(0);
 list->prev = (struct sk_buff *)list;
 list->next = (struct sk_buff *)list;
 list->qlen = 0;
}
# 466 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void __skb_queue_head(struct sk_buff_head *list, struct sk_buff *newsk)
{
 struct sk_buff *prev, *next;

 newsk->list = list;
 list->qlen++;
 prev = (struct sk_buff *)list;
 next = prev->next;
 newsk->next = next;
 newsk->prev = prev;
 next->prev = newsk;
 prev->next = newsk;
}
# 493 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_queue_head(struct sk_buff_head *list, struct sk_buff *newsk)
{
 unsigned long flags;

 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&list->lock); } while(0); } while (0);
 __skb_queue_head(list, newsk);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
}
# 514 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void __skb_queue_tail(struct sk_buff_head *list, struct sk_buff *newsk)
{
 struct sk_buff *prev, *next;

 newsk->list = list;
 list->qlen++;
 next = (struct sk_buff *)list;
 prev = next->prev;
 newsk->next = next;
 newsk->prev = prev;
 next->prev = newsk;
 prev->next = newsk;
}
# 540 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_queue_tail(struct sk_buff_head *list, struct sk_buff *newsk)
{
 unsigned long flags;

 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&list->lock); } while(0); } while (0);
 __skb_queue_tail(list, newsk);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
}
# 558 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *__skb_dequeue(struct sk_buff_head *list)
{
 struct sk_buff *next, *prev, *result;

 prev = (struct sk_buff *) list;
 next = prev->next;
 result = ((void *)0);
 if (next != prev) {
  result = next;
  next = next->next;
  list->qlen--;
  next->prev = prev;
  prev->next = next;
  result->next = ((void *)0);
  result->prev = ((void *)0);
  result->list = ((void *)0);
 }
 return result;
}
# 587 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_dequeue(struct sk_buff_head *list)
{
 unsigned long flags;
 struct sk_buff *result;

 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&list->lock); } while(0); } while (0);
 result = __skb_dequeue(list);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
 return result;
}





static inline void __skb_insert(struct sk_buff *newsk,
 struct sk_buff * prev, struct sk_buff *next,
 struct sk_buff_head * list)
{
 newsk->next = next;
 newsk->prev = prev;
 next->prev = newsk;
 prev->next = newsk;
 newsk->list = list;
 list->qlen++;
}
# 624 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_insert(struct sk_buff *old, struct sk_buff *newsk)
{
 unsigned long flags;

 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&old->list->lock); } while(0); } while (0);
 __skb_insert(newsk, old->prev, old, old->list);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
}





static inline void __skb_append(struct sk_buff *old, struct sk_buff *newsk)
{
 __skb_insert(newsk, old, old->next, old->list);
}
# 653 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_append(struct sk_buff *old, struct sk_buff *newsk)
{
 unsigned long flags;

 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&old->list->lock); } while(0); } while (0);
 __skb_append(old, newsk);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
}






static inline void __skb_unlink(struct sk_buff *skb, struct sk_buff_head *list)
{
 struct sk_buff * next, * prev;

 list->qlen--;
 next = skb->next;
 prev = skb->prev;
 skb->next = ((void *)0);
 skb->prev = ((void *)0);
 skb->list = ((void *)0);
 next->prev = prev;
 prev->next = next;
}
# 694 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_unlink(struct sk_buff *skb)
{
 struct sk_buff_head *list = skb->list;

 if(list) {
  unsigned long flags;

  do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&list->lock); } while(0); } while (0);
  if(skb->list == list)
   __skb_unlink(skb, skb->list);
  do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
 }
}
# 719 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *__skb_dequeue_tail(struct sk_buff_head *list)
{
 struct sk_buff *skb = skb_peek_tail(list);
 if (skb)
  __skb_unlink(skb, list);
 return skb;
}
# 736 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_dequeue_tail(struct sk_buff_head *list)
{
 unsigned long flags;
 struct sk_buff *result;

 do { __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory"); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&list->lock); } while(0); } while (0);
 result = __skb_dequeue_tail(list);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0); } while (0);
 return result;
}

static inline int skb_is_nonlinear(const struct sk_buff *skb)
{
 return skb->data_len;
}

static inline unsigned int skb_headlen(const struct sk_buff *skb)
{
 return skb->len - skb->data_len;
}
# 765 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline unsigned char *__skb_put(struct sk_buff *skb, unsigned int len)
{
 unsigned char *tmp=skb->tail;
 do { if (skb_is_nonlinear(skb)) __out_of_line_bug(768); } while (0);
 skb->tail+=len;
 skb->len+=len;
 return tmp;
}
# 784 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline unsigned char *skb_put(struct sk_buff *skb, unsigned int len)
{
 unsigned char *tmp=skb->tail;
 do { if (skb_is_nonlinear(skb)) __out_of_line_bug(787); } while (0);
 skb->tail+=len;
 skb->len+=len;
 if(skb->tail>skb->end) {
  skb_over_panic(skb, len, ({ __label__ _l; _l: &&_l;}));
 }
 return tmp;
}

static inline unsigned char *__skb_push(struct sk_buff *skb, unsigned int len)
{
 skb->data-=len;
 skb->len+=len;
 return skb->data;
}
# 813 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline unsigned char *skb_push(struct sk_buff *skb, unsigned int len)
{
 skb->data-=len;
 skb->len+=len;
 if(skb->data<skb->head) {
  skb_under_panic(skb, len, ({ __label__ _l; _l: &&_l;}));
 }
 return skb->data;
}

static inline char *__skb_pull(struct sk_buff *skb, unsigned int len)
{
 skb->len-=len;
 if (skb->len < skb->data_len)
  __out_of_line_bug(827);
 skb->data+=len;
 return (char *)skb->data;
}
# 843 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline unsigned char * skb_pull(struct sk_buff *skb, unsigned int len)
{
 if (len > skb->len)
  return ((void *)0);
 return (unsigned char *)__skb_pull(skb,len);
}

extern unsigned char * __pskb_pull_tail(struct sk_buff *skb, int delta);

static inline char *__pskb_pull(struct sk_buff *skb, unsigned int len)
{
 if (len > skb_headlen(skb) &&
     __pskb_pull_tail(skb, len-skb_headlen(skb)) == ((void *)0))
  return ((void *)0);
 skb->len -= len;
 skb->data += len;
 return (char *)skb->data;
}

static inline unsigned char * pskb_pull(struct sk_buff *skb, unsigned int len)
{
 if (len > skb->len)
  return ((void *)0);
 return (unsigned char *)__pskb_pull(skb,len);
}

static inline int pskb_may_pull(struct sk_buff *skb, unsigned int len)
{
 if (len <= skb_headlen(skb))
  return 1;
 if (len > skb->len)
  return 0;
 return (__pskb_pull_tail(skb, len-skb_headlen(skb)) != ((void *)0));
}
# 885 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline int skb_headroom(const struct sk_buff *skb)
{
 return skb->data-skb->head;
}
# 897 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline int skb_tailroom(const struct sk_buff *skb)
{
 return skb_is_nonlinear(skb) ? 0 : skb->end-skb->tail;
}
# 911 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_reserve(struct sk_buff *skb, unsigned int len)
{
 skb->data+=len;
 skb->tail+=len;
}

extern int ___pskb_trim(struct sk_buff *skb, unsigned int len, int realloc);

static inline void __skb_trim(struct sk_buff *skb, unsigned int len)
{
 if (!skb->data_len) {
  skb->len = len;
  skb->tail = skb->data+len;
 } else {
  ___pskb_trim(skb, len, 0);
 }
}
# 938 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_trim(struct sk_buff *skb, unsigned int len)
{
 if (skb->len > len) {
  __skb_trim(skb, len);
 }
}


static inline int __pskb_trim(struct sk_buff *skb, unsigned int len)
{
 if (!skb->data_len) {
  skb->len = len;
  skb->tail = skb->data+len;
  return 0;
 } else {
  return ___pskb_trim(skb, len, 1);
 }
}

static inline int pskb_trim(struct sk_buff *skb, unsigned int len)
{
 if (len < skb->len)
  return __pskb_trim(skb, len);
 return 0;
}
# 974 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_orphan(struct sk_buff *skb)
{
 if (skb->destructor)
  skb->destructor(skb);
 skb->destructor = ((void *)0);
 skb->sk = ((void *)0);
}
# 992 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void skb_queue_purge(struct sk_buff_head *list)
{
 struct sk_buff *skb;
 while ((skb=skb_dequeue(list))!=((void *)0))
  kfree_skb(skb);
}
# 1009 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void __skb_queue_purge(struct sk_buff_head *list)
{
 struct sk_buff *skb;
 while ((skb=__skb_dequeue(list))!=((void *)0))
  kfree_skb(skb);
}
# 1029 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *__dev_alloc_skb(unsigned int length,
           int gfp_mask)
{
 struct sk_buff *skb;

 skb = alloc_skb(length+16, gfp_mask);
 if (skb)
  skb_reserve(skb,16);
 return skb;
}
# 1053 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *dev_alloc_skb(unsigned int length)
{
 return __dev_alloc_skb(length, (0x20));
}
# 1071 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline int
skb_cow(struct sk_buff *skb, unsigned int headroom)
{
 int delta = (headroom > 16 ? headroom : 16) - skb_headroom(skb);

 if (delta < 0)
  delta = 0;

 if (delta || skb_cloned(skb))
  return pskb_expand_head(skb, (delta+15)&~15, 0, (0x20));
 return 0;
}
# 1096 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline struct sk_buff *skb_padto(struct sk_buff *skb, unsigned int len)
{
 unsigned int size = skb->len;
 if(__builtin_expect((size >= len),1))
  return skb;
 return skb_pad(skb, len-size);
}
# 1111 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
int skb_linearize(struct sk_buff *skb, int gfp);

static inline void *kmap_skb_frag(const skb_frag_t *frag)
{






 return kmap(frag->page);
}

static inline void kunmap_skb_frag(void *vaddr)
{
 do { } while (0);



}







extern struct sk_buff * skb_recv_datagram(struct sock *sk,unsigned flags,int noblock, int *err);
extern unsigned int datagram_poll(struct file *file, struct socket *sock, struct poll_table_struct *wait);
extern int skb_copy_datagram(const struct sk_buff *from, int offset, char *to,int size);
extern int skb_copy_datagram_iovec(const struct sk_buff *from, int offset, struct iovec *to,int size);
extern int skb_copy_and_csum_datagram(const struct sk_buff *skb, int offset, u8 *to, int len, unsigned int *csump);
extern int skb_copy_and_csum_datagram_iovec(const struct sk_buff *skb, int hlen, struct iovec *iov);
extern void skb_free_datagram(struct sock * sk, struct sk_buff *skb);

extern unsigned int skb_checksum(const struct sk_buff *skb, int offset, int len, unsigned int csum);
extern int skb_copy_bits(const struct sk_buff *skb, int offset, void *to, int len);
extern unsigned int skb_copy_and_csum_bits(const struct sk_buff *skb, int offset, u8 *to, int len, unsigned int csum);
extern void skb_copy_and_csum_dev(const struct sk_buff *skb, u8 *to);

extern void skb_init(void);
extern void skb_add_mtu(int mtu);
# 1177 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/skbuff.h"
static inline void nf_reset(struct sk_buff *skb) {}
# 155 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h" 2

struct neighbour;
struct neigh_parms;
struct sk_buff;

struct netif_rx_stats
{
 unsigned total;
 unsigned dropped;
 unsigned time_squeeze;
 unsigned throttled;
 unsigned fastroute_hit;
 unsigned fastroute_success;
 unsigned fastroute_defer;
 unsigned fastroute_deferred_out;
 unsigned fastroute_latency_reduction;
 unsigned cpu_collision;
} __attribute__((__aligned__(16)));

extern struct netif_rx_stats netdev_rx_stat[];






struct dev_mc_list
{
 struct dev_mc_list *next;
 __u8 dmi_addr[8];
 unsigned char dmi_addrlen;
 int dmi_users;
 int dmi_gusers;
};

struct hh_cache
{
 struct hh_cache *hh_next;
 atomic_t hh_refcnt;
 unsigned short hh_type;



 int hh_len;
 int (*hh_output)(struct sk_buff *skb);
 rwlock_t hh_lock;







 unsigned long hh_data[(((32)+(16 -1))&~(16 - 1)) / sizeof(long)];
};






enum netdev_state_t
{
 __LINK_STATE_XOFF=0,
 __LINK_STATE_START,
 __LINK_STATE_PRESENT,
 __LINK_STATE_SCHED,
 __LINK_STATE_NOCARRIER,
 __LINK_STATE_RX_SCHED
};






struct netdev_boot_setup {
 char name[16];
 struct ifmap map;
};
# 248 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
struct net_device
{






 char name[16];





 unsigned long rmem_end;
 unsigned long rmem_start;
 unsigned long mem_end;
 unsigned long mem_start;
 unsigned long base_addr;
 unsigned int irq;






 unsigned char if_port;
 unsigned char dma;

 unsigned long state;

 struct net_device *next;


 int (*init)(struct net_device *dev);



 struct net_device *next_sched;


 int ifindex;
 int iflink;


 struct net_device_stats* (*get_stats)(struct net_device *dev);
 struct iw_statistics* (*get_wireless_stats)(struct net_device *dev);



 struct iw_handler_def * wireless_handlers;


    struct iw_public_data * wireless_data;

 struct ethtool_ops *ethtool_ops;
# 312 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
 unsigned long trans_start;
 unsigned long last_rx;

 unsigned short flags;
 unsigned short gflags;
        unsigned short priv_flags;
        unsigned short unused_alignment_fixer;



 unsigned mtu;
 unsigned short type;
 unsigned short hard_header_len;
 void *priv;

 struct net_device *master;




 unsigned char broadcast[8];
 unsigned char dev_addr[8];
 unsigned char addr_len;

 struct dev_mc_list *mc_list;
 int mc_count;
 int promiscuity;
 int allmulti;

 int watchdog_timeo;
 struct timer_list watchdog_timer;



 void *atalk_ptr;
 void *ip_ptr;
 void *dn_ptr;
 void *ip6_ptr;
 void *ec_ptr;

 struct list_head poll_list;
 int quota;
 int weight;

 struct Qdisc *qdisc;
 struct Qdisc *qdisc_sleeping;
 struct Qdisc *qdisc_ingress;
 struct list_head qdisc_list;
 unsigned long tx_queue_len;


 spinlock_t xmit_lock;



 int xmit_lock_owner;

 spinlock_t queue_lock;

 atomic_t refcnt;

 int deadbeaf;


 int features;
# 390 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
 void (*uninit)(struct net_device *dev);

 void (*destructor)(struct net_device *dev);


 int (*open)(struct net_device *dev);
 int (*stop)(struct net_device *dev);
 int (*hard_start_xmit) (struct sk_buff *skb,
          struct net_device *dev);

 int (*poll) (struct net_device *dev, int *quota);
 int (*hard_header) (struct sk_buff *skb,
      struct net_device *dev,
      unsigned short type,
      void *daddr,
      void *saddr,
      unsigned len);
 int (*rebuild_header)(struct sk_buff *skb);

 void (*set_multicast_list)(struct net_device *dev);

 int (*set_mac_address)(struct net_device *dev,
         void *addr);

 int (*do_ioctl)(struct net_device *dev,
         struct ifreq *ifr, int cmd);

 int (*set_config)(struct net_device *dev,
           struct ifmap *map);

 int (*hard_header_cache)(struct neighbour *neigh,
           struct hh_cache *hh);
 void (*header_cache_update)(struct hh_cache *hh,
             struct net_device *dev,
             unsigned char * haddr);

 int (*change_mtu)(struct net_device *dev, int new_mtu);


 void (*tx_timeout) (struct net_device *dev);

 void (*vlan_rx_register)(struct net_device *dev,
          struct vlan_group *grp);
 void (*vlan_rx_add_vid)(struct net_device *dev,
         unsigned short vid);
 void (*vlan_rx_kill_vid)(struct net_device *dev,
          unsigned short vid);

 int (*hard_header_parse)(struct sk_buff *skb,
           unsigned char *haddr);
 int (*neigh_setup)(struct net_device *dev, struct neigh_parms *);
 int (*accept_fastpath)(struct net_device *, struct dst_entry*);


 struct module *owner;


 struct net_bridge_port *br_port;
# 459 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
};




struct packet_type
{
 unsigned short type;
 struct net_device *dev;
 int (*func) (struct sk_buff *, struct net_device *,
      struct packet_type *);
 void *data;
 struct packet_type *next;
};

static inline void *netdev_priv(struct net_device *dev)
{
 return dev->priv;
}


# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/notifier.h" 1
# 14 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/notifier.h"
struct notifier_block
{
 int (*notifier_call)(struct notifier_block *self, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};




extern int notifier_chain_register(struct notifier_block **list, struct notifier_block *n);
extern int notifier_chain_unregister(struct notifier_block **nl, struct notifier_block *n);
extern int notifier_call_chain(struct notifier_block **n, unsigned long val, void *v);
# 481 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h" 2

extern struct net_device loopback_dev;
extern struct net_device *dev_base;
extern rwlock_t dev_base_lock;

extern int netdev_boot_setup_add(char *name, struct ifmap *map);
extern int netdev_boot_setup_check(struct net_device *dev);
extern struct net_device *dev_getbyhwaddr(unsigned short type, char *hwaddr);
extern void dev_add_pack(struct packet_type *pt);
extern void dev_remove_pack(struct packet_type *pt);
extern int dev_get(const char *name);
extern struct net_device *dev_get_by_flags(unsigned short flags,
     unsigned short mask);
extern struct net_device *__dev_get_by_flags(unsigned short flags,
     unsigned short mask);
extern struct net_device *dev_get_by_name(const char *name);
extern struct net_device *__dev_get_by_name(const char *name);
extern struct net_device *dev_alloc(const char *name, int *err);
extern int dev_alloc_name(struct net_device *dev, const char *name);
extern int dev_open(struct net_device *dev);
extern int dev_close(struct net_device *dev);
extern int dev_queue_xmit(struct sk_buff *skb);
extern int register_netdevice(struct net_device *dev);
extern int unregister_netdevice(struct net_device *dev);
extern int register_netdevice_notifier(struct notifier_block *nb);
extern int unregister_netdevice_notifier(struct notifier_block *nb);
extern int dev_new_index(void);
extern struct net_device *dev_get_by_index(int ifindex);
extern struct net_device *__dev_get_by_index(int ifindex);
extern int dev_restart(struct net_device *dev);

typedef int gifconf_func_t(struct net_device * dev, char * bufptr, int len);
extern int register_gifconf(unsigned int family, gifconf_func_t * gifconf);
static inline int unregister_gifconf(unsigned int family)
{
 return register_gifconf(family, 0);
}






struct softnet_data
{
 int throttle;
 int cng_level;
 int avg_blog;
 struct sk_buff_head input_pkt_queue;
 struct list_head poll_list;
 struct net_device *output_queue;
 struct sk_buff *completion_queue;

 struct net_device blog_dev;
} __attribute__((__aligned__(16)));


extern struct softnet_data softnet_data[1];



static inline void __netif_schedule(struct net_device *dev)
{
 if (!test_and_set_bit(__LINK_STATE_SCHED, &dev->state)) {
  unsigned long flags;
  int cpu = 0;

  __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory");
  dev->next_sched = softnet_data[cpu].output_queue;
  softnet_data[cpu].output_queue = dev;
  cpu_raise_softirq(cpu, NET_TX_SOFTIRQ);
  do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}

static inline void netif_schedule(struct net_device *dev)
{
 if (!test_bit(__LINK_STATE_XOFF, &dev->state))
  __netif_schedule(dev);
}

static inline void netif_start_queue(struct net_device *dev)
{
 clear_bit(__LINK_STATE_XOFF, &dev->state);
}

static inline void netif_wake_queue(struct net_device *dev)
{
 if (test_and_clear_bit(__LINK_STATE_XOFF, &dev->state))
  __netif_schedule(dev);
}

static inline void netif_stop_queue(struct net_device *dev)
{
 set_bit(__LINK_STATE_XOFF, &dev->state);
}

static inline int netif_queue_stopped(struct net_device *dev)
{
 return test_bit(__LINK_STATE_XOFF, &dev->state);
}

static inline int netif_running(struct net_device *dev)
{
 return test_bit(__LINK_STATE_START, &dev->state);
}





static inline void dev_kfree_skb_irq(struct sk_buff *skb)
{
 if ((atomic_sub_return(1, (&skb->users)) == 0)) {
  int cpu =0;
  unsigned long flags;

  __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory");
  skb->next = softnet_data[cpu].completion_queue;
  softnet_data[cpu].completion_queue = skb;
  cpu_raise_softirq(cpu, NET_TX_SOFTIRQ);
  do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
 }
}




static inline void dev_kfree_skb_any(struct sk_buff *skb)
{
 if (((irq_stat[((void)((0)), 0)].__local_irq_count) != 0))
  dev_kfree_skb_irq(skb);
 else
  kfree_skb(skb);
}


extern int netif_rx(struct sk_buff *skb);

extern int netif_receive_skb(struct sk_buff *skb);
extern int dev_ioctl(unsigned int cmd, void *);
extern int dev_ethtool(struct ifreq *);
extern int dev_change_flags(struct net_device *, unsigned);
extern void dev_queue_xmit_nit(struct sk_buff *skb, struct net_device *dev);

extern void dev_init(void);

extern int netdev_nit;




static inline int netif_rx_ni(struct sk_buff *skb)
{
       int err = netif_rx(skb);
       if ((irq_stat[((void)((0)), 0)].__softirq_pending))
               do_softirq();
       return err;
}

static inline void dev_init_buffers(struct net_device *dev)
{

}

extern int netdev_finish_unregister(struct net_device *dev);

static inline void dev_put(struct net_device *dev)
{
 if ((atomic_sub_return(1, (&dev->refcnt)) == 0))
  netdev_finish_unregister(dev);
}
# 662 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
static inline int netif_carrier_ok(struct net_device *dev)
{
 return !test_bit(__LINK_STATE_NOCARRIER, &dev->state);
}

extern void __netdev_watchdog_up(struct net_device *dev);

static inline void netif_carrier_on(struct net_device *dev)
{
 clear_bit(__LINK_STATE_NOCARRIER, &dev->state);
 if (netif_running(dev))
  __netdev_watchdog_up(dev);
}

static inline void netif_carrier_off(struct net_device *dev)
{
 set_bit(__LINK_STATE_NOCARRIER, &dev->state);
}


static inline int netif_device_present(struct net_device *dev)
{
 return test_bit(__LINK_STATE_PRESENT, &dev->state);
}

static inline void netif_device_detach(struct net_device *dev)
{
 if (test_and_clear_bit(__LINK_STATE_PRESENT, &dev->state) &&
     netif_running(dev)) {
  netif_stop_queue(dev);
 }
}

static inline void netif_device_attach(struct net_device *dev)
{
 if (!test_and_set_bit(__LINK_STATE_PRESENT, &dev->state) &&
     netif_running(dev)) {
  netif_wake_queue(dev);
   __netdev_watchdog_up(dev);
 }
}






enum {
 NETIF_MSG_DRV = 0x0001,
 NETIF_MSG_PROBE = 0x0002,
 NETIF_MSG_LINK = 0x0004,
 NETIF_MSG_TIMER = 0x0008,
 NETIF_MSG_IFDOWN = 0x0010,
 NETIF_MSG_IFUP = 0x0020,
 NETIF_MSG_RX_ERR = 0x0040,
 NETIF_MSG_TX_ERR = 0x0080,
 NETIF_MSG_TX_QUEUED = 0x0100,
 NETIF_MSG_INTR = 0x0200,
 NETIF_MSG_TX_DONE = 0x0400,
 NETIF_MSG_RX_STATUS = 0x0800,
 NETIF_MSG_PKTDATA = 0x1000,
 NETIF_MSG_HW = 0x2000,
 NETIF_MSG_WOL = 0x4000,
};
# 743 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h"
static inline u32 netif_msg_init(int debug_value, int default_msg_enable_bits)
{

 if (debug_value < 0 || debug_value >= (sizeof(u32) * 8))
  return default_msg_enable_bits;
 if (debug_value == 0)
  return 0;

 return (1 << debug_value) - 1;
}



static inline int netif_rx_schedule_prep(struct net_device *dev)
{
 return netif_running(dev) &&
  !test_and_set_bit(__LINK_STATE_RX_SCHED, &dev->state);
}





static inline void __netif_rx_schedule(struct net_device *dev)
{
 unsigned long flags;
 int cpu = 0;

 __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory");
 atomic_add(1,(&(dev)->refcnt));
 list_add_tail(&dev->poll_list, &softnet_data[cpu].poll_list);
 if (dev->quota < 0)
  dev->quota += dev->weight;
 else
  dev->quota = dev->weight;
 do { (irq_stat[((void)((cpu)), 0)].__softirq_pending) |= 1UL << (NET_RX_SOFTIRQ); } while (0);
 do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
}



static inline void netif_rx_schedule(struct net_device *dev)
{
 if (netif_rx_schedule_prep(dev))
  __netif_rx_schedule(dev);
}




static inline int netif_rx_reschedule(struct net_device *dev, int undo)
{
 if (netif_rx_schedule_prep(dev)) {
  unsigned long flags;
  int cpu = 0;

  dev->quota += undo;

  __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory");
  list_add_tail(&dev->poll_list, &softnet_data[cpu].poll_list);
  do { (irq_stat[((void)((cpu)), 0)].__softirq_pending) |= 1UL << (NET_RX_SOFTIRQ); } while (0);
  do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
  return 1;
 }
 return 0;
}






static inline void netif_rx_complete(struct net_device *dev)
{
 unsigned long flags;

 __asm__ __volatile__( "__save_and_cli\t%0" : "=r" (flags) : : "memory");
 if (!test_bit(__LINK_STATE_RX_SCHED, &dev->state)) do { the_REAL_printk("BUG on %s (%s:%d)\n", __FUNCTION__, "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h", 820); __asm__ __volatile__("break %0" : : "i" (512)); } while (0);
 list_del(&dev->poll_list);
 __asm__ __volatile__("": : :"memory");
 clear_bit(__LINK_STATE_RX_SCHED, &dev->state);
 do { unsigned long __tmp1; __asm__ __volatile__( "__restore_flags\t%0" : "=r" (__tmp1) : "0" (flags) : "memory"); } while(0);
}

static inline void netif_poll_disable(struct net_device *dev)
{
 while (test_and_set_bit(__LINK_STATE_RX_SCHED, &dev->state)) {

  current->state = 1;
  schedule_timeout(1);
 }
}

static inline void netif_poll_enable(struct net_device *dev)
{
 clear_bit(__LINK_STATE_RX_SCHED, &dev->state);
}




static inline void __netif_rx_complete(struct net_device *dev)
{
 if (!test_bit(__LINK_STATE_RX_SCHED, &dev->state)) do { the_REAL_printk("BUG on %s (%s:%d)\n", __FUNCTION__, "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/netdevice.h", 846); __asm__ __volatile__("break %0" : : "i" (512)); } while (0);
 list_del(&dev->poll_list);
 __asm__ __volatile__("": : :"memory");
 clear_bit(__LINK_STATE_RX_SCHED, &dev->state);
}

static inline void netif_tx_disable(struct net_device *dev)
{
 do { cpu_bh_disable(0); do { do { inc_preempt_count(current); __asm__ __volatile__("": : :"memory"); } while (0); (void)(&dev->xmit_lock); } while(0); } while (0);
 netif_stop_queue(dev);
 do { do { do { } while(0); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); do { int cpu; __asm__ __volatile__("": : :"memory"); cpu = 0; if (!--(irq_stat[((void)((cpu)), 0)].__local_bh_count) && (irq_stat[((void)((cpu)), 0)].__softirq_pending)) do_softirq(); do { dec_preempt_count(current); __asm__ __volatile__("": : :"memory"); if (__builtin_expect((preempt_get_count() < preempt_get_resched()),0)) preempt_schedule(); } while (0); } while (0); } while (0);
}



extern void ether_setup(struct net_device *dev);
extern void fddi_setup(struct net_device *dev);
extern void tr_setup(struct net_device *dev);
extern void fc_setup(struct net_device *dev);
extern void fc_freedev(struct net_device *dev);

extern struct net_device *alloc_netdev(int sizeof_priv, const char *name,
           void (*setup)(struct net_device *));
extern int register_netdev(struct net_device *dev);
extern void unregister_netdev(struct net_device *dev);

extern void dev_mc_upload(struct net_device *dev);
extern int dev_mc_delete(struct net_device *dev, void *addr, int alen, int all);
extern int dev_mc_add(struct net_device *dev, void *addr, int alen, int newonly);
extern void dev_mc_discard(struct net_device *dev);
extern void dev_set_promiscuity(struct net_device *dev, int inc);
extern void dev_set_allmulti(struct net_device *dev, int inc);
extern void netdev_state_change(struct net_device *dev);

extern void dev_load(const char *name);
extern void dev_mcast_init(void);
extern int netdev_register_fc(struct net_device *dev, void (*stimul)(struct net_device *dev));
extern void netdev_unregister_fc(int bit);
extern int netdev_max_backlog;
extern int weight_p;
extern unsigned long netdev_fc_xoff;
extern atomic_t netdev_dropping;
extern int netdev_set_master(struct net_device *dev, struct net_device *master);
extern struct sk_buff * skb_checksum_help(struct sk_buff *skb);






static inline void free_netdev(struct net_device *dev)
{
 kfree(dev);
}
# 56 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/etherdevice.h" 1
# 30 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/etherdevice.h"
extern int eth_header(struct sk_buff *skb, struct net_device *dev,
       unsigned short type, void *daddr,
       void *saddr, unsigned len);
extern int eth_rebuild_header(struct sk_buff *skb);
extern unsigned short eth_type_trans(struct sk_buff *skb, struct net_device *dev);
extern void eth_header_cache_update(struct hh_cache *hh, struct net_device *dev,
      unsigned char * haddr);
extern int eth_header_cache(struct neighbour *neigh,
      struct hh_cache *hh);
extern int eth_header_parse(struct sk_buff *skb,
      unsigned char *haddr);
extern struct net_device *init_etherdev(struct net_device *dev, int sizeof_priv);
extern struct net_device *alloc_etherdev(int sizeof_priv);

static inline void eth_copy_and_sum (struct sk_buff *dest, unsigned char *src, int len, int base)
{
 memcpy (dest->data, src, len);
}
# 59 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/etherdevice.h"
static inline int is_valid_ether_addr( u8 *addr )
{
 const char zaddr[6] = {0,};

 return !(addr[0]&1) && memcmp( addr, zaddr, 6);
}
# 57 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2

# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ethtool.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ethtool.h"
struct ethtool_cmd {
 u32 cmd;
 u32 supported;
 u32 advertising;
 u16 speed;
 u8 duplex;
 u8 port;
 u8 phy_address;
 u8 transceiver;
 u8 autoneg;
 u32 maxtxpkt;
 u32 maxrxpkt;
 u32 reserved[4];
};



struct ethtool_drvinfo {
 u32 cmd;
 char driver[32];
 char version[32];
 char fw_version[32];
 char bus_info[32];

 char reserved1[32];
 char reserved2[16];
 u32 n_stats;
 u32 testinfo_len;
 u32 eedump_len;
 u32 regdump_len;
};



struct ethtool_wolinfo {
 u32 cmd;
 u32 supported;
 u32 wolopts;
 u8 sopass[6];
};


struct ethtool_value {
 u32 cmd;
 u32 data;
};


struct ethtool_regs {
 u32 cmd;
 u32 version;
 u32 len;
 u8 data[0];
};


struct ethtool_eeprom {
 u32 cmd;
 u32 magic;
 u32 offset;
 u32 len;
 u8 data[0];
};


struct ethtool_coalesce {
 u32 cmd;





 u32 rx_coalesce_usecs;







 u32 rx_max_coalesced_frames;






 u32 rx_coalesce_usecs_irq;
 u32 rx_max_coalesced_frames_irq;





 u32 tx_coalesce_usecs;







 u32 tx_max_coalesced_frames;






 u32 tx_coalesce_usecs_irq;
 u32 tx_max_coalesced_frames_irq;






 u32 stats_block_coalesce_usecs;
# 143 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ethtool.h"
 u32 use_adaptive_rx_coalesce;
 u32 use_adaptive_tx_coalesce;





 u32 pkt_rate_low;
 u32 rx_coalesce_usecs_low;
 u32 rx_max_coalesced_frames_low;
 u32 tx_coalesce_usecs_low;
 u32 tx_max_coalesced_frames_low;
# 165 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ethtool.h"
 u32 pkt_rate_high;
 u32 rx_coalesce_usecs_high;
 u32 rx_max_coalesced_frames_high;
 u32 tx_coalesce_usecs_high;
 u32 tx_max_coalesced_frames_high;




 u32 rate_sample_interval;
};


struct ethtool_ringparam {
 u32 cmd;





 u32 rx_max_pending;
 u32 rx_mini_max_pending;
 u32 rx_jumbo_max_pending;
 u32 tx_max_pending;




 u32 rx_pending;
 u32 rx_mini_pending;
 u32 rx_jumbo_pending;
 u32 tx_pending;
};


struct ethtool_pauseparam {
 u32 cmd;
# 213 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ethtool.h"
 u32 autoneg;
 u32 rx_pause;
 u32 tx_pause;
};


enum ethtool_stringset {
 ETH_SS_TEST = 0,
 ETH_SS_STATS,
};


struct ethtool_gstrings {
 u32 cmd;
 u32 string_set;
 u32 len;
 u8 data[0];
};

enum ethtool_test_flags {
 ETH_TEST_FL_OFFLINE = (1 << 0),
 ETH_TEST_FL_FAILED = (1 << 1),
};


struct ethtool_test {
 u32 cmd;
 u32 flags;
 u32 reserved;
 u32 len;
 u64 data[0];
};


struct ethtool_stats {
 u32 cmd;
 u32 n_stats;
 u64 data[0];
};

struct net_device;


u32 ethtool_op_get_link(struct net_device *dev);
u32 ethtool_op_get_tx_csum(struct net_device *dev);
int ethtool_op_set_tx_csum(struct net_device *dev, u32 data);
u32 ethtool_op_get_sg(struct net_device *dev);
int ethtool_op_set_sg(struct net_device *dev, u32 data);
# 315 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ethtool.h"
struct ethtool_ops {
 int (*get_settings)(struct net_device *, struct ethtool_cmd *);
 int (*set_settings)(struct net_device *, struct ethtool_cmd *);
 void (*get_drvinfo)(struct net_device *, struct ethtool_drvinfo *);
 int (*get_regs_len)(struct net_device *);
 void (*get_regs)(struct net_device *, struct ethtool_regs *, void *);
 void (*get_wol)(struct net_device *, struct ethtool_wolinfo *);
 int (*set_wol)(struct net_device *, struct ethtool_wolinfo *);
 u32 (*get_msglevel)(struct net_device *);
 void (*set_msglevel)(struct net_device *, u32);
 int (*nway_reset)(struct net_device *);
 u32 (*get_link)(struct net_device *);
 int (*get_eeprom_len)(struct net_device *);
 int (*get_eeprom)(struct net_device *, struct ethtool_eeprom *, u8 *);
 int (*set_eeprom)(struct net_device *, struct ethtool_eeprom *, u8 *);
 int (*get_coalesce)(struct net_device *, struct ethtool_coalesce *);
 int (*set_coalesce)(struct net_device *, struct ethtool_coalesce *);
 void (*get_ringparam)(struct net_device *, struct ethtool_ringparam *);
 int (*set_ringparam)(struct net_device *, struct ethtool_ringparam *);
 void (*get_pauseparam)(struct net_device *, struct ethtool_pauseparam*);
 int (*set_pauseparam)(struct net_device *, struct ethtool_pauseparam*);
 u32 (*get_rx_csum)(struct net_device *);
 int (*set_rx_csum)(struct net_device *, u32);
 u32 (*get_tx_csum)(struct net_device *);
 int (*set_tx_csum)(struct net_device *, u32);
 u32 (*get_sg)(struct net_device *);
 int (*set_sg)(struct net_device *, u32);
 int (*self_test_count)(struct net_device *);
 void (*self_test)(struct net_device *, struct ethtool_test *, u64 *);
 void (*get_strings)(struct net_device *, u32 stringset, u8 *);
 int (*phys_id)(struct net_device *, u32);
 int (*get_stats_count)(struct net_device *);
 void (*get_ethtool_stats)(struct net_device *, struct ethtool_stats *, u64 *);
 int (*begin)(struct net_device *);
 void (*complete)(struct net_device *);
};
# 59 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h" 1
# 627 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_param
{
  __s32 value;
  __u8 fixed;
  __u8 disabled;
  __u16 flags;
};





struct iw_point
{
  void *pointer;
  __u16 length;
  __u16 flags;
};
# 654 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_freq
{
 __s32 m;
 __s16 e;
 __u8 i;
 __u8 flags;
};




struct iw_quality
{
 __u8 qual;

 __u8 level;
 __u8 noise;
 __u8 updated;
};
# 681 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_discarded
{
 __u32 nwid;
 __u32 code;
 __u32 fragment;
 __u32 retries;
 __u32 misc;
};





struct iw_missed
{
 __u32 beacon;
};




struct iw_thrspy
{
 struct sockaddr addr;
 struct iw_quality qual;
 struct iw_quality low;
 struct iw_quality high;
};
# 721 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_scan_req
{
 __u8 scan_type;
 __u8 essid_len;
 __u8 num_channels;

 __u8 flags;


 struct sockaddr bssid;
# 739 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
 __u8 essid[32];
# 751 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
 __u32 min_channel_time;
 __u32 max_channel_time;

 struct iw_freq channel_list[32];
};
# 783 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_encode_ext
{
 __u32 ext_flags;
 __u8 tx_seq[8];
 __u8 rx_seq[8];
 struct sockaddr addr;


 __u16 alg;
 __u16 key_len;
 __u8 key[0];
};


struct iw_mlme
{
 __u16 cmd;
 __u16 reason_code;
 struct sockaddr addr;
};
# 811 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_pmksa
{
 __u32 cmd;
 struct sockaddr bssid;
 __u8 pmkid[16];
};


struct iw_michaelmicfailure
{
 __u32 flags;
 struct sockaddr src_addr;
 __u8 tsc[8];
};



struct iw_pmkid_cand
{
 __u32 flags;
 __u32 index;

 struct sockaddr bssid;
};





struct iw_statistics
{
 __u16 status;


 struct iw_quality qual;

 struct iw_discarded discard;
 struct iw_missed miss;
};
# 862 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
union iwreq_data
{

 char name[16];



 struct iw_point essid;
 struct iw_param nwid;
 struct iw_freq freq;



 struct iw_param sens;
 struct iw_param bitrate;
 struct iw_param txpower;
 struct iw_param rts;
 struct iw_param frag;
 __u32 mode;
 struct iw_param retry;

 struct iw_point encoding;
 struct iw_param power;
 struct iw_quality qual;

 struct sockaddr ap_addr;
 struct sockaddr addr;

 struct iw_param param;
 struct iw_point data;
};







struct iwreq
{
 union
 {
  char ifrn_name[16];
 } ifr_ifrn;


 union iwreq_data u;
};
# 921 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_range
{

 __u32 throughput;
# 933 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
 __u32 min_nwid;
 __u32 max_nwid;


 __u16 old_num_channels;
 __u8 old_num_frequency;


 __u32 event_capa[6];


 __s32 sensitivity;






 struct iw_quality max_qual;
# 961 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
 struct iw_quality avg_qual;


 __u8 num_bitrates;
 __s32 bitrate[32];


 __s32 min_rts;
 __s32 max_rts;


 __s32 min_frag;
 __s32 max_frag;


 __s32 min_pmp;
 __s32 max_pmp;
 __s32 min_pmt;
 __s32 max_pmt;
 __u16 pmp_flags;
 __u16 pmt_flags;
 __u16 pm_capa;


 __u16 encoding_size[8];
 __u8 num_encoding_sizes;
 __u8 max_encoding_tokens;

 __u8 encoding_login_index;


 __u16 txpower_capa;
 __u8 num_txpower;
 __s32 txpower[8];


 __u8 we_version_compiled;
 __u8 we_version_source;


 __u16 retry_capa;
 __u16 retry_flags;
 __u16 r_time_flags;
 __s32 min_retry;
 __s32 max_retry;
 __s32 min_r_time;
 __s32 max_r_time;


 __u16 num_channels;
 __u8 num_frequency;
 struct iw_freq freq[32];



 __u32 enc_capa;
};





struct iw_priv_args
{
 __u32 cmd;
 __u16 set_args;
 __u16 get_args;
 char name[16];
};
# 1041 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/wireless.h"
struct iw_event
{
 __u16 len;
 __u16 cmd;
 union iwreq_data u;
};
# 60 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/proc_fs.h" 1
# 21 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/proc_fs.h"
enum {
 PROC_ROOT_INO = 1,
};
# 47 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/proc_fs.h"
typedef int (read_proc_t)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
typedef int (write_proc_t)(struct file *file, const char *buffer,
      unsigned long count, void *data);
typedef int (get_info_t)(char *, char **, off_t, int);

struct proc_dir_entry {
 unsigned short low_ino;
 unsigned short namelen;
 const char *name;
 mode_t mode;
 nlink_t nlink;
 uid_t uid;
 gid_t gid;
 unsigned long size;
 struct inode_operations * proc_iops;
 struct file_operations * proc_fops;
 get_info_t *get_info;
 struct module *owner;
 struct proc_dir_entry *next, *parent, *subdir;
 void *data;
 read_proc_t *read_proc;
 write_proc_t *write_proc;
 atomic_t count;
 int deleted;
 kdev_t rdev;
};





extern struct proc_dir_entry proc_root;
extern struct proc_dir_entry *proc_root_fs;
extern struct proc_dir_entry *proc_net;
extern struct proc_dir_entry *proc_net_stat;
extern struct proc_dir_entry *proc_bus;
extern struct proc_dir_entry *proc_root_driver;
extern struct proc_dir_entry *proc_root_kcore;

extern void proc_root_init(void);
extern void proc_misc_init(void);

struct dentry *proc_pid_lookup(struct inode *dir, struct dentry * dentry);
void proc_pid_delete_inode(struct inode *inode);
int proc_pid_readdir(struct file * filp, void * dirent, filldir_t filldir);

extern struct proc_dir_entry *create_proc_entry(const char *name, mode_t mode,
      struct proc_dir_entry *parent);
extern void remove_proc_entry(const char *name, struct proc_dir_entry *parent);

extern struct vfsmount *proc_mnt;
extern struct super_block *proc_read_super(struct super_block *,void *,int);
extern struct inode * proc_get_inode(struct super_block *, int, struct proc_dir_entry *);

extern int proc_match(int, const char *,struct proc_dir_entry *);
# 111 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/proc_fs.h"
extern int proc_readdir(struct file *, void *, filldir_t);
extern struct dentry *proc_lookup(struct inode *, struct dentry *);

extern struct file_operations proc_kcore_operations;
extern struct file_operations proc_kmsg_operations;
extern struct file_operations ppc_htab_operations;




struct tty_driver;
extern void proc_tty_init(void);
extern void proc_tty_register_driver(struct tty_driver *driver);
extern void proc_tty_unregister_driver(struct tty_driver *driver);




extern void proc_device_tree_init(void);




extern void proc_rtas_init(void);




extern void proc_ppc64_init(void);
extern void iSeries_proc_create(void);

extern struct proc_dir_entry *proc_symlink(const char *,
  struct proc_dir_entry *, const char *);
extern struct proc_dir_entry *proc_mknod(const char *,mode_t,
  struct proc_dir_entry *,kdev_t);
extern struct proc_dir_entry *proc_mkdir(const char *,struct proc_dir_entry *);
extern struct proc_dir_entry *proc_mkdir_mode(const char *name, mode_t mode,
   struct proc_dir_entry *parent);

static inline struct proc_dir_entry *create_proc_read_entry(const char *name,
 mode_t mode, struct proc_dir_entry *base,
 read_proc_t *read_proc, void * data)
{
 struct proc_dir_entry *res=create_proc_entry(name,mode,base);
 if (res) {
  res->read_proc=read_proc;
  res->data=data;
 }
 return res;
}

static inline struct proc_dir_entry *create_proc_info_entry(const char *name,
 mode_t mode, struct proc_dir_entry *base, get_info_t *get_info)
{
 struct proc_dir_entry *res=create_proc_entry(name,mode,base);
 if (res) res->get_info=get_info;
 return res;
}

static inline struct proc_dir_entry *proc_net_create(const char *name,
 mode_t mode, get_info_t *get_info)
{
 return create_proc_info_entry(name,mode,proc_net,get_info);
}

static inline struct proc_dir_entry *proc_net_fops_create(const char *name,
 mode_t mode, struct file_operations *fops)
{
 struct proc_dir_entry *res = create_proc_entry(name, mode, proc_net);

 if (res)
  res->proc_fops = fops;
 return res;
}

static inline void proc_net_remove(const char *name)
{
 remove_proc_entry(name,proc_net);
}
# 225 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/proc_fs.h"
static inline struct proc_dir_entry *PDE(const struct inode *inode)
{
 return (struct proc_dir_entry *)inode->u.generic_ip;
}
# 61 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/delay.h" 1
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/delay.h"
extern unsigned long loops_per_jiffy;



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/delay.h" 1
# 17 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/delay.h"
extern unsigned long loops_per_jiffy;

static __inline__ void __delay(unsigned long loops)
{
 __asm__ __volatile__ (
  ".set\tnoreorder\n"
  "1:\tbnez\t%0,1b\n\t"
  "subu\t%0,1\n\t"
  ".set\treorder"
  :"=r" (loops)
  :"0" (loops));
}
# 40 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/delay.h"
static __inline__ void __udelay(unsigned long usecs, unsigned long lpj)
{
 unsigned long lo;




 usecs *= (unsigned long) (((0x8000000000000000ULL / (500000 / (1000))) +
                            0x80000000ULL) >> 32);
 __asm__("multu\t%2,%3"
  : "=h" (usecs), "=l" (lo)
  : "r" (usecs), "r" (lpj)
  : "$0");
 __delay(usecs);
}

static __inline__ void __ndelay(unsigned long nsecs, unsigned long lpj)
{
 unsigned long lo;




 nsecs *= (unsigned long) (((0x8000000000000000ULL / (500000000 / (1000))) +
                            0x80000000ULL) >> 32);
 __asm__("multu\t%2,%3"
  : "=h" (nsecs), "=l" (lo)
  : "r" (nsecs), "r" (lpj)
  : "$0");
 __delay(nsecs);
}
# 79 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/delay.h"
void tango2_udelay(unsigned usec);
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/delay.h" 2







static inline unsigned int jiffies_to_msecs(const unsigned long j)
{

 return (1000 / (1000)) * j;





}

static inline unsigned int jiffies_to_usecs(const unsigned long j)
{

 return (1000000 / (1000)) * j;





}

static inline unsigned long msecs_to_jiffies(const unsigned int m)
{
 if (m > jiffies_to_msecs(((~0UL >> 1)-1)))
  return ((~0UL >> 1)-1);

 return (m + (1000 / (1000)) - 1) / (1000 / (1000));





}

static inline void msleep(unsigned long msecs)
{
        do { current->state = (2); __asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while (0);
        schedule_timeout(msecs_to_jiffies(msecs) + 1);
}

static inline void ssleep(unsigned long secs)
{
        do { current->state = (2); __asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while (0);
        schedule_timeout(((1000) * secs) + 1);
}
# 62 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_arp.h" 1
# 102 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_arp.h"
struct arpreq {
  struct sockaddr arp_pa;
  struct sockaddr arp_ha;
  int arp_flags;
  struct sockaddr arp_netmask;
  char arp_dev[16];
};

struct arpreq_old {
  struct sockaddr arp_pa;
  struct sockaddr arp_ha;
  int arp_flags;
  struct sockaddr arp_netmask;
};
# 130 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_arp.h"
struct arphdr
{
 unsigned short ar_hrd;
 unsigned short ar_pro;
 unsigned char ar_hln;
 unsigned char ar_pln;
 unsigned short ar_op;
# 148 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/if_arp.h"
};
# 63 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ctype.h" 1
# 18 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ctype.h"
extern unsigned char _ctype[];
# 37 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/ctype.h"
static inline unsigned char __tolower(unsigned char c)
{
 if ((((_ctype[(int)(unsigned char)(c)])&(0x01)) != 0))
  c -= 'A'-'a';
 return c;
}

static inline unsigned char __toupper(unsigned char c)
{
 if ((((_ctype[(int)(unsigned char)(c)])&(0x02)) != 0))
  c -= 'a'-'A';
 return c;
}
# 64 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/vmalloc.h" 1
# 15 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/vmalloc.h"
struct vm_struct {
 unsigned long flags;
 void * addr;
 unsigned long size;
 struct vm_struct * next;
};

extern struct vm_struct * get_vm_area (unsigned long size, unsigned long flags);
extern void vfree(void * addr);

extern void * vmap(struct page **pages, int count,
     unsigned long flags, pgprot_t prot);
extern void * __vmalloc (unsigned long size, int gfp_mask, pgprot_t prot);
extern long vread(char *buf, char *addr, unsigned long count);
extern void vmfree_area_pages(unsigned long address, unsigned long size);
extern int vmalloc_area_pages(unsigned long address, unsigned long size,
                              int gfp_mask, pgprot_t prot);





static inline void * vmalloc (unsigned long size)
{
 return __vmalloc(size, (0x20 | 0x10 | 0x40 | 0x80 | 0x100) | 0x02, ((pgprot_t) { ((1<<0) | ((1<<1) | (1<<7) | (1<<3)) | ((1<<2) | (1<<8) | (1<<4)) | (1<<6) | (3<<9)) } ));
}





static inline void * vmalloc_dma (unsigned long size)
{
 return __vmalloc(size, (0x20 | 0x10 | 0x40 | 0x80 | 0x100)|0x01, ((pgprot_t) { ((1<<0) | ((1<<1) | (1<<7) | (1<<3)) | ((1<<2) | (1<<8) | (1<<4)) | (1<<6) | (3<<9)) } ));
}





static inline void * vmalloc_32(unsigned long size)
{
 return __vmalloc(size, (0x20 | 0x10 | 0x40 | 0x80 | 0x100), ((pgprot_t) { ((1<<0) | ((1<<1) | (1<<7) | (1<<3)) | ((1<<2) | (1<<8) | (1<<4)) | (1<<6) | (3<<9)) } ));
}





extern rwlock_t vmlist_lock;

extern struct vm_struct * vmlist;
# 65 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h" 1
# 298 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
struct iw_request_info
{
 __u16 cmd;
 __u16 flags;
};





typedef int (*iw_handler)(struct net_device *dev, struct iw_request_info *info,
     union iwreq_data *wrqu, char *extra);







struct iw_handler_def
{


 __u16 num_standard;
 __u16 num_private;

 __u16 num_private_args;




 const iw_handler * standard;




 const iw_handler * private;




 const struct iw_priv_args * private_args;




 struct iw_statistics* (*get_wireless_stats)(struct net_device *dev);
};
# 366 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
struct iw_ioctl_description
{
 __u8 header_type;
 __u8 token_type;
 __u16 token_size;
 __u16 min_tokens;
 __u16 max_tokens;
 __u32 flags;
};
# 389 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
struct iw_spy_data
{

 int spy_number;
 u_char spy_address[8][6];
 struct iw_quality spy_stat[8];

 struct iw_quality spy_thr_low;
 struct iw_quality spy_thr_high;
 u_char spy_thr_under[8];
};
# 412 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
struct ieee80211_device;

struct iw_public_data {

 struct iw_spy_data * spy_data;

 struct ieee80211_device * ieee80211;
};
# 430 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
extern int dev_get_wireless_info(char * buffer, char **start, off_t offset,
     int length);


extern int wireless_process_ioctl(struct ifreq *ifr, unsigned int cmd);


extern int wireless_rtnetlink_set(struct net_device * dev,
      char * data,
      int len);
extern int wireless_rtnetlink_get(struct net_device * dev,
      char * data,
      int len,
      char ** p_buf,
      int * p_len);




extern void wireless_send_event(struct net_device * dev,
    unsigned int cmd,
    union iwreq_data * wrqu,
    char * extra);





extern int iw_handler_set_spy(struct net_device * dev,
         struct iw_request_info * info,
         union iwreq_data * wrqu,
         char * extra);

extern int iw_handler_get_spy(struct net_device * dev,
         struct iw_request_info * info,
         union iwreq_data * wrqu,
         char * extra);

extern int iw_handler_set_thrspy(struct net_device * dev,
     struct iw_request_info *info,
     union iwreq_data * wrqu,
     char * extra);

extern int iw_handler_get_thrspy(struct net_device * dev,
     struct iw_request_info *info,
     union iwreq_data * wrqu,
     char * extra);

extern void wireless_spy_update(struct net_device * dev,
    unsigned char * address,
    struct iw_quality * wstats);
# 491 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
static inline char *
iwe_stream_add_event(char * stream,
       char * ends,
       struct iw_event *iwe,
       int event_len)
{

 if(__builtin_expect(((stream + event_len) < ends),1)) {
  iwe->len = event_len;
  memcpy(stream, (char *) iwe, event_len);
  stream += event_len;
 }
 return stream;
}






static inline char *
iwe_stream_add_point(char * stream,
       char * ends,
       struct iw_event *iwe,
       char * extra)
{
 int event_len = ((sizeof(struct iw_event) - sizeof(union iwreq_data)) + sizeof(struct iw_point) - (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0))) + iwe->u.data.length;

 if(__builtin_expect(((stream + event_len) < ends),1)) {
  iwe->len = event_len;
  memcpy(stream, (char *) iwe, (sizeof(struct iw_event) - sizeof(union iwreq_data)));
  memcpy(stream + (sizeof(struct iw_event) - sizeof(union iwreq_data)),
         ((char *) iwe) + (sizeof(struct iw_event) - sizeof(union iwreq_data)) + (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0)),
         ((sizeof(struct iw_event) - sizeof(union iwreq_data)) + sizeof(struct iw_point) - (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0))) - (sizeof(struct iw_event) - sizeof(union iwreq_data)));
  memcpy(stream + ((sizeof(struct iw_event) - sizeof(union iwreq_data)) + sizeof(struct iw_point) - (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0))), extra, iwe->u.data.length);
  stream += event_len;
 }
 return stream;
}







static inline char *
iwe_stream_add_value(char * event,
       char * value,
       char * ends,
       struct iw_event *iwe,
       int event_len)
{

 event_len -= (sizeof(struct iw_event) - sizeof(union iwreq_data));


 if(__builtin_expect(((value + event_len) < ends),1)) {

  memcpy(value, (char *) iwe + (sizeof(struct iw_event) - sizeof(union iwreq_data)), event_len);
  value += event_len;

  iwe->len = value - event;
  memcpy(event, (char *) iwe, (sizeof(struct iw_event) - sizeof(union iwreq_data)));
 }
 return value;
}






static inline char *
iwe_stream_check_add_event(char * stream,
      char * ends,
      struct iw_event *iwe,
      int event_len,
      int * perr)
{

 if(__builtin_expect(((stream + event_len) < ends),1)) {
  iwe->len = event_len;
  memcpy(stream, (char *) iwe, event_len);
  stream += event_len;
 } else
  *perr = -7;
 return stream;
}







static inline char *
iwe_stream_check_add_point(char * stream,
      char * ends,
      struct iw_event *iwe,
      char * extra,
      int * perr)
{
 int event_len = ((sizeof(struct iw_event) - sizeof(union iwreq_data)) + sizeof(struct iw_point) - (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0))) + iwe->u.data.length;

 if(__builtin_expect(((stream + event_len) < ends),1)) {
  iwe->len = event_len;
  memcpy(stream, (char *) iwe, (sizeof(struct iw_event) - sizeof(union iwreq_data)));
  memcpy(stream + (sizeof(struct iw_event) - sizeof(union iwreq_data)),
         ((char *) iwe) + (sizeof(struct iw_event) - sizeof(union iwreq_data)) + (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0)),
         ((sizeof(struct iw_event) - sizeof(union iwreq_data)) + sizeof(struct iw_point) - (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0))) - (sizeof(struct iw_event) - sizeof(union iwreq_data)));
  memcpy(stream + ((sizeof(struct iw_event) - sizeof(union iwreq_data)) + sizeof(struct iw_point) - (((char *) &(((struct iw_point *) ((void *)0))->length)) - (char *) ((void *)0))), extra, iwe->u.data.length);
  stream += event_len;
 } else
  *perr = -7;
 return stream;
}
# 616 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/net/iw_handler.h"
static inline char *
iwe_stream_check_add_value(char * event,
      char * value,
      char * ends,
      struct iw_event *iwe,
      int event_len,
      int * perr)
{

 event_len -= (sizeof(struct iw_event) - sizeof(union iwreq_data));


 if(__builtin_expect(((value + event_len) < ends),1)) {

  memcpy(value, (char *) iwe + (sizeof(struct iw_event) - sizeof(union iwreq_data)), event_len);
  value += event_len;

  iwe->len = value - event;
  memcpy(event, (char *) iwe, (sizeof(struct iw_event) - sizeof(union iwreq_data)));
 } else
  *perr = -7;
 return value;
}
# 69 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2



# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/unistd.h" 1



extern int errno;




# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/unistd.h" 1
# 1018 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/unistd.h"
static inline int sync(void) { register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %2\t\t\t# " "sync" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "i" ((4000 + 36)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline pid_t setsid(void) { register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %2\t\t\t# " "setsid" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "i" ((4000 + 66)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (pid_t) __v0; errno = __v0; return (pid_t)-1; }
static inline int write(int fd, const char * buf, off_t count) { register unsigned long __a0 asm("$4") = (unsigned long) fd; register unsigned long __a1 asm("$5") = (unsigned long) buf; register unsigned long __a2 asm("$6") = (unsigned long) count; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %5\t\t\t# " "write" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "r" (__a1), "r" (__a2), "i" ((4000 + 4)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline int read(int fd, char * buf, off_t count) { register unsigned long __a0 asm("$4") = (unsigned long) fd; register unsigned long __a1 asm("$5") = (unsigned long) buf; register unsigned long __a2 asm("$6") = (unsigned long) count; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %5\t\t\t# " "read" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "r" (__a1), "r" (__a2), "i" ((4000 + 3)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline off_t lseek(int fd, off_t offset, int count) { register unsigned long __a0 asm("$4") = (unsigned long) fd; register unsigned long __a1 asm("$5") = (unsigned long) offset; register unsigned long __a2 asm("$6") = (unsigned long) count; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %5\t\t\t# " "lseek" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "r" (__a1), "r" (__a2), "i" ((4000 + 19)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (off_t) __v0; errno = __v0; return (off_t)-1; }
static inline int dup(int fd) { register unsigned long __a0 asm("$4") = (unsigned long) fd; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %3\t\t\t# " "dup" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "i" ((4000 + 41)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline int execve(const char * file, char ** argv, char ** envp) { register unsigned long __a0 asm("$4") = (unsigned long) file; register unsigned long __a1 asm("$5") = (unsigned long) argv; register unsigned long __a2 asm("$6") = (unsigned long) envp; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %5\t\t\t# " "execve" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "r" (__a1), "r" (__a2), "i" ((4000 + 11)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline int open(const char * file, int flag, int mode) { register unsigned long __a0 asm("$4") = (unsigned long) file; register unsigned long __a1 asm("$5") = (unsigned long) flag; register unsigned long __a2 asm("$6") = (unsigned long) mode; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %5\t\t\t# " "open" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "r" (__a1), "r" (__a2), "i" ((4000 + 5)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline int close(int fd) { register unsigned long __a0 asm("$4") = (unsigned long) fd; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %3\t\t\t# " "close" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "i" ((4000 + 6)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }
static inline void _exit(int exitcode) { register unsigned long __a0 asm("$4") = (unsigned long) exitcode; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %3\t\t\t# " "_exit" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "i" ((4000 + 1)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (void) __v0; errno = __v0; return (void)-1; }
static inline pid_t wait4(pid_t pid, int * stat_addr, int options, struct rusage * ru) { register unsigned long __a0 asm("$4") = (unsigned long) pid; register unsigned long __a1 asm("$5") = (unsigned long) stat_addr; register unsigned long __a2 asm("$6") = (unsigned long) options; register unsigned long __a3 asm("$7") = (unsigned long) ru; unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %5\t\t\t# " "wait4" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "+r" (__a3) : "r" (__a0), "r" (__a1), "r" (__a2), "i" ((4000 + 114)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (pid_t) __v0; errno = __v0; return (pid_t)-1; }
static inline int delete_module(const char * name) { register unsigned long __a0 asm("$4") = (unsigned long) name; register unsigned long __a3 asm("$7"); unsigned long __v0; __asm__ volatile ( ".set\tnoreorder\n\t" "li\t$2, %3\t\t\t# " "delete_module" "\n\t" "syscall\n\t" "move\t%0, $2\n\t" ".set\treorder" : "=&r" (__v0), "=r" (__a3) : "r" (__a0), "i" ((4000 + 129)) : "$2", "$8", "$9", "$10", "$11", "$12", "$13", "$14", "$15", "$24", "memory"); if (__a3 == 0) return (int) __v0; errno = __v0; return (int)-1; }

static inline pid_t waitpid(int pid, int * wait_stat, int flags)
{
 return wait4(pid, wait_stat, flags, ((void *)0));
}

static inline pid_t wait(int * wait_stat)
{
 return waitpid(-1, wait_stat, 0);
}
# 10 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/linux/unistd.h" 2
# 73 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 1 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h" 1
# 130 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
static inline int verify_area(int type, const void * addr, unsigned long size)
{
 return __builtin_expect(((((signed long)(((current->thread.current_ds).seg) & (((unsigned long)(addr)) | (((unsigned long)(addr)) + ((size))) | ((__builtin_constant_p((size)) && (signed long) ((size)) > 0) ? 0 : ((size)))))) == 0)),1) ? 0 : -14;
}
# 229 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
struct __large_struct { unsigned long buf[100]; };
# 320 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
extern void __get_user_unknown(void);
# 405 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
extern void __put_user_unknown(void);
# 422 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
extern size_t __copy_user(void *__to, const void *__from, size_t __n);
# 595 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
static inline __kernel_size_t
__clear_user(void *addr, __kernel_size_t size)
{
 __kernel_size_t res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  "move\t$5, $0\n\t"
  "move\t$6, %2\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__bzero" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $6"
  : "=r" (res)
  : "r" (addr), "r" (size)
  : "$4", "$5", "$6", "$8", "$9", "$31");

 return res;
}
# 643 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
static inline long
__strncpy_from_user(char *__to, const char *__from, long __len)
{
 long res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  "move\t$5, %2\n\t"
  "move\t$6, %3\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__strncpy_from_user_nocheck_asm" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $2"
  : "=r" (res)
  : "r" (__to), "r" (__from), "r" (__len)
  : "$2", "$3", "$4", "$5", "$6", "$8", "$31", "memory");

 return res;
}
# 679 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
static inline long
strncpy_from_user(char *__to, const char *__from, long __len)
{
 long res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  "move\t$5, %2\n\t"
  "move\t$6, %3\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__strncpy_from_user_asm" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $2"
  : "=r" (res)
  : "r" (__to), "r" (__from), "r" (__len)
  : "$2", "$3", "$4", "$5", "$6", "$8", "$31", "memory");

 return res;
}


static inline long __strlen_user(const char *s)
{
 long res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__strlen_user_nocheck_asm" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $2"
  : "=r" (res)
  : "r" (s)
  : "$2", "$4", "$8", "$31");

 return res;
}
# 727 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
static inline long strlen_user(const char *s)
{
 long res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__strlen_user_asm" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $2"
  : "=r" (res)
  : "r" (s)
  : "$2", "$4", "$8", "$31");

 return res;
}


static inline long __strnlen_user(const char *s, long n)
{
 long res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  "move\t$5, %2\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__strnlen_user_nocheck_asm" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $2"
  : "=r" (res)
  : "r" (s), "r" (n)
  : "$2", "$4", "$5", "$8", "$31");

 return res;
}
# 773 "/home/davidhu/work/HD301/smp86xx_kernel_source_2.8.0.1/linuxmips-2.4.30/include/asm/uaccess.h"
static inline long strnlen_user(const char *s, long n)
{
 long res;

 __asm__ __volatile__(
  "move\t$4, %1\n\t"
  "move\t$5, %2\n\t"
  ".set\tnoat\n\t" "la" "\t$1, " "__strnlen_user_asm" "\n\t" "jalr\t$1\n\t" ".set\tat\n\t"
  "move\t%0, $2"
  : "=r" (res)
  : "r" (s), "r" (n)
  : "$2", "$4", "$5", "$8", "$31");

 return res;
}

struct exception_table_entry
{
 unsigned long insn;
 unsigned long nextinsn;
};


extern unsigned long search_exception_table(unsigned long addr);
# 74 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h" 2
# 95 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
typedef int INT32;

typedef int (*HARD_START_XMIT_FUNC)(struct sk_buff *skb, struct net_device *net_dev);
# 144 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
typedef void *PVOID;
typedef signed char *PCHAR;
typedef unsigned char *PUCHAR;
typedef unsigned short *PUSHORT;
typedef long *PLONG;
typedef unsigned long *PULONG;
typedef unsigned int *PUINT;



typedef union _LARGE_INTEGER {
    struct {
        unsigned int LowPart;
        INT32 HighPart;
    } ;
    struct {
        unsigned int LowPart;
        INT32 HighPart;
    } u;
    s64 QuadPart;
} LARGE_INTEGER;
# 194 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
struct os_lock {
 spinlock_t lock;
 unsigned long flags;
};


struct os_cookie {

 struct pci_dev *pci_dev;
 struct pci_dev *parent_pci_dev;
 dma_addr_t pAd_pa;



 struct tasklet_struct rx_done_task;
 struct tasklet_struct mgmt_dma_done_task;
 struct tasklet_struct ac0_dma_done_task;
 struct tasklet_struct ac1_dma_done_task;
 struct tasklet_struct ac2_dma_done_task;
 struct tasklet_struct ac3_dma_done_task;
 struct tasklet_struct hcca_dma_done_task;
 struct tasklet_struct tbtt_task;

 struct tasklet_struct fifo_statistic_full_task;



 unsigned long apd_pid;
 signed int ioctl_if_type;
 signed int ioctl_if;
};

typedef struct _VIRTUAL_ADAPTER
{
 struct net_device *RtmpDev;
 struct net_device *VirtualDev;
} VIRTUAL_ADAPTER, PVIRTUAL_ADAPTER;
# 241 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
typedef struct os_cookie * POS_COOKIE;
typedef struct pci_dev * PPCI_DEV;
typedef struct net_device * PNET_DEV;
typedef void * PNDIS_PACKET;
typedef char NDIS_PACKET;
typedef PNDIS_PACKET * PPNDIS_PACKET;
typedef dma_addr_t NDIS_PHYSICAL_ADDRESS;
typedef dma_addr_t * PNDIS_PHYSICAL_ADDRESS;
typedef spinlock_t NDIS_SPIN_LOCK;
typedef struct timer_list NDIS_MINIPORT_TIMER;
typedef void * NDIS_HANDLE;
typedef char * PNDIS_BUFFER;



void hex_dump(char *str, unsigned char *pSrcBufVA, unsigned int SrcBufLen);

dma_addr_t linux_pci_map_single(void *handle, void *ptr, size_t size, int direction);
void linux_pci_unmap_single(void *handle, dma_addr_t dma_addr, size_t size, int direction);
# 301 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
typedef unsigned int NDIS_MEDIA_STATE;

typedef struct timer_list RTMP_OS_TIMER;

typedef struct _RALINK_TIMER_STRUCT {
    RTMP_OS_TIMER TimerObj;
 unsigned char Valid;
    unsigned char State;
    unsigned char PeriodicType;
    unsigned char Repeat;
    unsigned long TimerValue;
 unsigned long cookie;
} RALINK_TIMER_STRUCT, *PRALINK_TIMER_STRUCT;
# 539 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
typedef void (*TIMER_FUNCTION)(unsigned long);
# 568 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
void linux_MlmePeriodicExec(unsigned long data);
void linux_MlmeRssiReportExec(unsigned long data);
void linux_AsicRxAntEvalTimeout(unsigned long data);
void linux_APSDPeriodicExec(unsigned long data);
void linux_AsicRfTuningExec(unsigned long data);



void linux_BeaconTimeout(unsigned long data);
void linux_ScanTimeout(unsigned long data);
void linux_AuthTimeout(unsigned long data);
void linux_AssocTimeout(unsigned long data);
void linux_ReassocTimeout(unsigned long data);
void linux_DisassocTimeout(unsigned long data);
void linux_LinkDownExec(unsigned long data);



void linux_StaQuickResponeForRateUpExec(unsigned long data);
void linux_WpaDisassocApAndBlockAssoc(unsigned long data);
void linux_PsPollWakeExec(unsigned long data);
void linux_RadioOnExec(unsigned long data);


void RTMP_GetCurrentSystemTime(LARGE_INTEGER *time);
# 874 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_linux.h"
static inline void NdisGetSystemUpTime(unsigned long *time)
{
 *time = jiffies;
}





int rt28xx_packet_xmit(struct sk_buff *skb);



void rtmp_os_thread_init(PUCHAR pThreadName, PVOID pNotify);
# 51 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2

# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp_type.h" 1
# 47 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp_type.h"
typedef unsigned char UINT8;
typedef unsigned short UINT16;

typedef unsigned int UINT32;
typedef unsigned long long UINT64;
typedef unsigned int * PUINT32;
typedef long long INT64;
# 112 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp_type.h"
typedef struct __attribute__ ((packed)) _RSN_IE_HEADER_STRUCT {
 unsigned char Eid;
 unsigned char Length;
 unsigned short Version;
} RSN_IE_HEADER_STRUCT, *PRSN_IE_HEADER_STRUCT;


typedef struct __attribute__ ((packed)) _CIPHER_SUITE_STRUCT {
 unsigned char Oui[3];
 unsigned char Type;
} CIPHER_SUITE_STRUCT, *PCIPHER_SUITE_STRUCT;


typedef struct __attribute__ ((packed)) _AKM_SUITE_STRUCT {
 unsigned char Oui[3];
 unsigned char Type;
} AKM_SUITE_STRUCT, *PAKM_SUITE_STRUCT;


typedef struct __attribute__ ((packed)) _RSN_CAPABILITY {
 unsigned short Rsv:10;
 unsigned short GTKSAReplayCnt:2;
 unsigned short PTKSAReplayCnt:2;
 unsigned short NoPairwise:1;
 unsigned short PreAuth:1;
} RSN_CAPABILITY, *PRSN_CAPABILITY;
# 53 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp_def.h" 1
# 54 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h" 1
# 83 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _INT_SOURCE_CSR_STRUC {
 struct {
  UINT32 RxDelayINT:1;
  UINT32 TxDelayINT:1;
  UINT32 RxDone:1;
  UINT32 Ac0DmaDone:1;
  UINT32 Ac1DmaDone:1;
  UINT32 Ac2DmaDone:1;
  UINT32 Ac3DmaDone:1;
  UINT32 HccaDmaDone:1;
  UINT32 MgmtDmaDone:1;
  UINT32 MCUCommandINT:1;
  UINT32 RxTxCoherent:1;
  UINT32 TBTTInt:1;
  UINT32 PreTBTT:1;
  UINT32 TXFifoStatusInt:1;
  UINT32 AutoWakeup:1;
  UINT32 GPTimer:1;
  UINT32 RxCoherent:1;
  UINT32 TxCoherent:1;
  UINT32 :14;
 } field;
 UINT32 word;
} INT_SOURCE_CSR_STRUC, *PINT_SOURCE_CSR_STRUC;
# 133 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _INT_MASK_CSR_STRUC {
 struct {
  UINT32 RXDelay_INT_MSK:1;
  UINT32 TxDelay:1;
  UINT32 RxDone:1;
  UINT32 Ac0DmaDone:1;
  UINT32 Ac1DmaDone:1;
  UINT32 Ac2DmaDone:1;
  UINT32 Ac3DmaDone:1;
  UINT32 HccaDmaDone:1;
  UINT32 MgmtDmaDone:1;
  UINT32 MCUCommandINT:1;
  UINT32 :20;
  UINT32 RxCoherent:1;
  UINT32 TxCoherent:1;
 } field;
 UINT32 word;
} INT_MASK_CSR_STRUC, *PINT_MASK_CSR_STRUC;
# 169 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _WPDMA_GLO_CFG_STRUC {
 struct {
  UINT32 EnableTxDMA:1;
  UINT32 TxDMABusy:1;
  UINT32 EnableRxDMA:1;
  UINT32 RxDMABusy:1;
  UINT32 WPDMABurstSIZE:2;
  UINT32 EnTXWriteBackDDONE:1;
  UINT32 BigEndian:1;
  UINT32 RXHdrScater:8;
  UINT32 HDR_SEG_LEN:16;
 } field;
 UINT32 word;
} WPDMA_GLO_CFG_STRUC, *PWPDMA_GLO_CFG_STRUC;
# 201 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _WPDMA_RST_IDX_STRUC {
 struct {
  UINT32 RST_DTX_IDX0:1;
  UINT32 RST_DTX_IDX1:1;
  UINT32 RST_DTX_IDX2:1;
  UINT32 RST_DTX_IDX3:1;
  UINT32 RST_DTX_IDX4:1;
  UINT32 RST_DTX_IDX5:1;
  UINT32 rsv:10;
  UINT32 RST_DRX_IDX0:1;
  UINT32 :15;
 } field;
 UINT32 word;
} WPDMA_RST_IDX_STRUC, *PWPDMA_RST_IDX_STRUC;
# 230 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _DELAY_INT_CFG_STRUC {
 struct {
  UINT32 RXMAX_PTIME:8;
  UINT32 RXMAX_PINT:7;
  UINT32 RXDLY_INT_EN:1;
  UINT32 TXMAX_PTIME:8;
  UINT32 TXMAX_PINT:7;
  UINT32 TXDLY_INT_EN:1;
 } field;
 UINT32 word;
} DELAY_INT_CFG_STRUC, *PDELAY_INT_CFG_STRUC;
# 255 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _AIFSN_CSR_STRUC {
 struct {
     UINT32 Aifsn0:4;
     UINT32 Aifsn1:4;
     UINT32 Aifsn2:4;
     UINT32 Aifsn3:4;
     UINT32 Rsv:16;
 } field;
 UINT32 word;
} AIFSN_CSR_STRUC, *PAIFSN_CSR_STRUC;
# 282 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _CWMIN_CSR_STRUC {
 struct {
     UINT32 Cwmin0:4;
     UINT32 Cwmin1:4;
     UINT32 Cwmin2:4;
     UINT32 Cwmin3:4;
     UINT32 Rsv:16;
 } field;
 UINT32 word;
} CWMIN_CSR_STRUC, *PCWMIN_CSR_STRUC;
# 310 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _CWMAX_CSR_STRUC {
 struct {
     UINT32 Cwmax0:4;
     UINT32 Cwmax1:4;
     UINT32 Cwmax2:4;
     UINT32 Cwmax3:4;
     UINT32 Rsv:16;
 } field;
 UINT32 word;
} CWMAX_CSR_STRUC, *PCWMAX_CSR_STRUC;
# 336 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _AC_TXOP_CSR0_STRUC {
 struct {
     unsigned short Ac0Txop;
     unsigned short Ac1Txop;
 } field;
 UINT32 word;
} AC_TXOP_CSR0_STRUC, *PAC_TXOP_CSR0_STRUC;
# 358 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _AC_TXOP_CSR1_STRUC {
 struct {
     unsigned short Ac2Txop;
     unsigned short Ac3Txop;
 } field;
 UINT32 word;
} AC_TXOP_CSR1_STRUC, *PAC_TXOP_CSR1_STRUC;
# 420 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _USB_DMA_CFG_STRUC {
 struct {
     UINT32 RxBulkAggTOut:8;
     UINT32 RxBulkAggLmt:8;
     UINT32 phyclear:1;
     UINT32 rsv:2;
     UINT32 TxClear:1;
     UINT32 TxopHalt:1;
     UINT32 RxBulkAggEn:1;
     UINT32 RxBulkEn:1;
     UINT32 TxBulkEn:1;
     UINT32 EpoutValid:6;
     UINT32 RxBusy:1;
     UINT32 TxBusy:1;
 } field;
 UINT32 word;
} USB_DMA_CFG_STRUC, *PUSB_DMA_CFG_STRUC;
# 470 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _ASIC_VER_ID_STRUC {
 struct {
     unsigned short ASICRev;
     unsigned short ASICVer;
 } field;
 UINT32 word;
} ASIC_VER_ID_STRUC, *PASIC_VER_ID_STRUC;
# 495 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _MAC_DW0_STRUC {
 struct {
  unsigned char Byte0;
  unsigned char Byte1;
  unsigned char Byte2;
  unsigned char Byte3;
 } field;
 UINT32 word;
} MAC_DW0_STRUC, *PMAC_DW0_STRUC;
# 520 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _MAC_DW1_STRUC {
 struct {
  unsigned char Byte4;
  unsigned char Byte5;
  unsigned char U2MeMask;
  unsigned char Rsvd1;
 } field;
 UINT32 word;
} MAC_DW1_STRUC, *PMAC_DW1_STRUC;
# 549 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _MAC_CSR5_STRUC {
 struct {
  unsigned char Byte4;
  unsigned char Byte5;
  unsigned short BssIdMask:2;
  unsigned short MBssBcnNum:3;
  unsigned short Rsvd:11;
 } field;
 UINT32 word;
} MAC_CSR5_STRUC, *PMAC_CSR5_STRUC;
# 580 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _BBP_CSR_CFG_STRUC {
 struct {
  UINT32 Value:8;
  UINT32 RegNum:8;
  UINT32 fRead:1;
  UINT32 Busy:1;
  UINT32 BBP_PAR_DUR:1;
  UINT32 BBP_RW_MODE:1;
  UINT32 :12;
 } field;
 UINT32 word;
} BBP_CSR_CFG_STRUC, *PBBP_CSR_CFG_STRUC;
# 609 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RF_CSR_CFG0_STRUC {
 struct {
  UINT32 RegIdAndContent:24;
  UINT32 bitwidth:5;
  UINT32 StandbyMode:1;
  UINT32 Sel:1;
  UINT32 Busy:1;
 } field;
 UINT32 word;
} RF_CSR_CFG0_STRUC, *PRF_CSR_CFG0_STRUC;
# 631 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RF_CSR_CFG1_STRUC {
 struct {
  UINT32 RegIdAndContent:24;
  UINT32 RFGap:5;
  UINT32 rsv:7;
 } field;
 UINT32 word;
} RF_CSR_CFG1_STRUC, *PRF_CSR_CFG1_STRUC;
# 650 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RF_CSR_CFG2_STRUC {
 struct {
  UINT32 RegIdAndContent:24;
  UINT32 rsv:8;
 } field;
 UINT32 word;
} RF_CSR_CFG2_STRUC, *PRF_CSR_CFG2_STRUC;
# 675 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _LED_CFG_STRUC {
 struct {
  UINT32 OnPeriod:8;
  UINT32 OffPeriod:8;
  UINT32 SlowBlinkPeriod:6;
  UINT32 rsv:2;
  UINT32 RLedMode:2;
  UINT32 GLedMode:2;
  UINT32 YLedMode:2;
  UINT32 LedPolar:1;
  UINT32 :1;
 } field;
 UINT32 word;
} LED_CFG_STRUC, *PLED_CFG_STRUC;
# 707 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _IFS_SLOT_CFG_STRUC {
 struct {
     UINT32 CckmSifsTime:8;
     UINT32 OfdmSifsTime:8;
     UINT32 OfdmXifsTime:4;
     UINT32 EIFS:9;
     UINT32 BBRxendEnable:1;
     UINT32 rsv:2;
 } field;
 UINT32 word;
} IFS_SLOT_CFG_STRUC, *PIFS_SLOT_CFG_STRUC;
# 746 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _BCN_TIME_CFG_STRUC {
 struct {
  UINT32 BeaconInterval:16;
  UINT32 bTsfTicking:1;
  UINT32 TsfSyncMode:2;
        UINT32 bTBTTEnable:1;
  UINT32 bBeaconGen:1;
        UINT32 :3;
  UINT32 TxTimestampCompensate:8;
 } field;
 UINT32 word;
} BCN_TIME_CFG_STRUC, *PBCN_TIME_CFG_STRUC;
# 787 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _AUTO_WAKEUP_STRUC {
 struct {
  UINT32 AutoLeadTime:8;
  UINT32 NumofSleepingTbtt:7;
  UINT32 EnableAutoWakeup:1;
  UINT32 :16;
 } field;
 UINT32 word;
} AUTO_WAKEUP_STRUC, *PAUTO_WAKEUP_STRUC;
# 817 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EDCA_AC_CFG_STRUC {
 struct {
     UINT32 AcTxop:8;
     UINT32 Aifsn:4;
     UINT32 Cwmin:4;
     UINT32 Cwmax:4;
     UINT32 :12;
 } field;
 UINT32 word;
} EDCA_AC_CFG_STRUC, *PEDCA_AC_CFG_STRUC;
# 855 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_RTS_CFG_STRUC {
 struct {
     UINT32 AutoRtsRetryLimit:8;
     UINT32 RtsThres:16;
     UINT32 RtsFbkEn:1;
     UINT32 rsv:7;
 } field;
 UINT32 word;
} TX_RTS_CFG_STRUC, *PTX_RTS_CFG_STRUC;
# 878 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_TIMEOUT_CFG_STRUC {
 struct {
     UINT32 rsv:4;
     UINT32 MpduLifeTime:4;
     UINT32 RxAckTimeout:8;
     UINT32 TxopTimeout:8;
     UINT32 rsv2:8;
 } field;
 UINT32 word;
} TX_TIMEOUT_CFG_STRUC, *PTX_TIMEOUT_CFG_STRUC;
# 905 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union __attribute__ ((packed)) _TX_RTY_CFG_STRUC {
 struct {
     UINT32 ShortRtyLimit:8;
     UINT32 LongRtyLimit:8;
     UINT32 LongRtyThre:12;
     UINT32 NonAggRtyMode:1;
     UINT32 AggRtyMode:1;
     UINT32 TxautoFBEnable:1;
     UINT32 rsv:1;
 } field;
 UINT32 word;
} TX_RTY_CFG_STRUC, *PTX_RTY_CFG_STRUC;
# 935 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union __attribute__ ((packed)) _TX_LINK_CFG_STRUC {
 struct __attribute__ ((packed)) {
     UINT32 RemoteMFBLifeTime:8;
     UINT32 MFBEnable:1;
     UINT32 RemoteUMFSEnable:1;
     UINT32 TxMRQEn:1;
     UINT32 TxRDGEn:1;
     UINT32 TxCFAckEn:1;
     UINT32 rsv:3;
     UINT32 RemotMFB:8;
     UINT32 RemotMFS:8;
 } field;
 UINT32 word;
} TX_LINK_CFG_STRUC, *PTX_LINK_CFG_STRUC;
# 966 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union __attribute__ ((packed)) _HT_FBK_CFG0_STRUC {
 struct {
     UINT32 HTMCS0FBK:4;
     UINT32 HTMCS1FBK:4;
     UINT32 HTMCS2FBK:4;
     UINT32 HTMCS3FBK:4;
     UINT32 HTMCS4FBK:4;
     UINT32 HTMCS5FBK:4;
     UINT32 HTMCS6FBK:4;
     UINT32 HTMCS7FBK:4;
 } field;
 UINT32 word;
} HT_FBK_CFG0_STRUC, *PHT_FBK_CFG0_STRUC;
# 996 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _HT_FBK_CFG1_STRUC {
 struct {
     UINT32 HTMCS8FBK:4;
     UINT32 HTMCS9FBK:4;
     UINT32 HTMCS10FBK:4;
     UINT32 HTMCS11FBK:4;
     UINT32 HTMCS12FBK:4;
     UINT32 HTMCS13FBK:4;
     UINT32 HTMCS14FBK:4;
     UINT32 HTMCS15FBK:4;
 } field;
 UINT32 word;
} HT_FBK_CFG1_STRUC, *PHT_FBK_CFG1_STRUC;
# 1026 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _LG_FBK_CFG0_STRUC {
 struct {
     UINT32 OFDMMCS0FBK:4;
     UINT32 OFDMMCS1FBK:4;
     UINT32 OFDMMCS2FBK:4;
     UINT32 OFDMMCS3FBK:4;
     UINT32 OFDMMCS4FBK:4;
     UINT32 OFDMMCS5FBK:4;
     UINT32 OFDMMCS6FBK:4;
     UINT32 OFDMMCS7FBK:4;
 } field;
 UINT32 word;
} LG_FBK_CFG0_STRUC, *PLG_FBK_CFG0_STRUC;
# 1053 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _LG_FBK_CFG1_STRUC {
 struct {
     UINT32 CCKMCS0FBK:4;
     UINT32 CCKMCS1FBK:4;
     UINT32 CCKMCS2FBK:4;
     UINT32 CCKMCS3FBK:4;
     UINT32 rsv:16;
 } field;
 UINT32 word;
} LG_FBK_CFG1_STRUC, *PLG_FBK_CFG1_STRUC;
# 1091 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _PROT_CFG_STRUC {
 struct {
     UINT32 ProtectRate:16;
     UINT32 ProtectCtrl:2;
     UINT32 ProtectNav:2;
     UINT32 TxopAllowCck:1;
     UINT32 TxopAllowOfdm:1;
     UINT32 TxopAllowMM20:1;
     UINT32 TxopAllowMM40:1;
     UINT32 TxopAllowGF20:1;
     UINT32 TxopAllowGF40:1;
     UINT32 RTSThEn:1;
     UINT32 rsv:5;
 } field;
 UINT32 word;
} PROT_CFG_STRUC, *PPROT_CFG_STRUC;
# 1141 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _AUTO_RSP_CFG_STRUC {
 struct {
     UINT32 AutoResponderEnable:1;
     UINT32 BACAckPolicyEnable:1;
     UINT32 CTS40MMode:1;
     UINT32 CTS40MRef:1;
     UINT32 AutoResponderPreamble:1;
     UINT32 rsv:1;
     UINT32 DualCTSEn:1;
     UINT32 AckCtsPsmBit:1;
     UINT32 :24;
 } field;
 UINT32 word;
} AUTO_RSP_CFG_STRUC, *PAUTO_RSP_CFG_STRUC;
# 1197 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RX_STA_CNT0_STRUC {
 struct {
     unsigned short CrcErr;
     unsigned short PhyErr;
 } field;
 UINT32 word;
} RX_STA_CNT0_STRUC, *PRX_STA_CNT0_STRUC;
# 1218 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RX_STA_CNT1_STRUC {
 struct {
     unsigned short FalseCca;
     unsigned short PlcpErr;
 } field;
 UINT32 word;
} RX_STA_CNT1_STRUC, *PRX_STA_CNT1_STRUC;
# 1239 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RX_STA_CNT2_STRUC {
 struct {
     unsigned short RxDupliCount;
     unsigned short RxFifoOverflowCount;
 } field;
 UINT32 word;
} RX_STA_CNT2_STRUC, *PRX_STA_CNT2_STRUC;
# 1260 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_STA_CNT0_STRUC {
 struct {
     unsigned short TxFailCount;
     unsigned short TxBeaconCount;
 } field;
 UINT32 word;
} TX_STA_CNT0_STRUC, *PTX_STA_CNT0_STRUC;
# 1281 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_STA_CNT1_STRUC {
 struct {
     unsigned short TxSuccess;
     unsigned short TxRetransmit;
 } field;
 UINT32 word;
} TX_STA_CNT1_STRUC, *PTX_STA_CNT1_STRUC;
# 1302 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_STA_CNT2_STRUC {
 struct {
     unsigned short TxZeroLenCount;
     unsigned short TxUnderFlowCount;
 } field;
 UINT32 word;
} TX_STA_CNT2_STRUC, *PTX_STA_CNT2_STRUC;
# 1328 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union __attribute__ ((packed)) _TX_STA_FIFO_STRUC {
 struct {
  UINT32 bValid:1;
  UINT32 PidType:4;
  UINT32 TxSuccess:1;
  UINT32 TxAggre:1;
  UINT32 TxAckRequired:1;
  UINT32 wcid:8;
  UINT32 SuccessRate:16;
 } field;
 UINT32 word;
} TX_STA_FIFO_STRUC, *PTX_STA_FIFO_STRUC;
# 1352 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT_STRUC {
 struct {
     unsigned short NonAggTxCount;
     unsigned short AggTxCount;
 } field;
 UINT32 word;
} TX_AGG_CNT_STRUC, *PTX_AGG_CNT_STRUC;
# 1371 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT0_STRUC {
 struct {
     unsigned short AggSize1Count;
     unsigned short AggSize2Count;
 } field;
 UINT32 word;
} TX_AGG_CNT0_STRUC, *PTX_AGG_CNT0_STRUC;
# 1390 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT1_STRUC {
 struct {
     unsigned short AggSize3Count;
     unsigned short AggSize4Count;
 } field;
 UINT32 word;
} TX_AGG_CNT1_STRUC, *PTX_AGG_CNT1_STRUC;
# 1408 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT2_STRUC {
 struct {
     unsigned short AggSize5Count;
     unsigned short AggSize6Count;
 } field;
 UINT32 word;
} TX_AGG_CNT2_STRUC, *PTX_AGG_CNT2_STRUC;
# 1427 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT3_STRUC {
 struct {
     unsigned short AggSize7Count;
     unsigned short AggSize8Count;
 } field;
 UINT32 word;
} TX_AGG_CNT3_STRUC, *PTX_AGG_CNT3_STRUC;
# 1446 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT4_STRUC {
 struct {
     unsigned short AggSize9Count;
     unsigned short AggSize10Count;
 } field;
 UINT32 word;
} TX_AGG_CNT4_STRUC, *PTX_AGG_CNT4_STRUC;
# 1464 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT5_STRUC {
 struct {
     unsigned short AggSize11Count;
     unsigned short AggSize12Count;
 } field;
 UINT32 word;
} TX_AGG_CNT5_STRUC, *PTX_AGG_CNT5_STRUC;
# 1482 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT6_STRUC {
 struct {
     unsigned short AggSize13Count;
     unsigned short AggSize14Count;
 } field;
 UINT32 word;
} TX_AGG_CNT6_STRUC, *PTX_AGG_CNT6_STRUC;
# 1500 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _TX_AGG_CNT7_STRUC {
 struct {
     unsigned short AggSize15Count;
     unsigned short AggSize16Count;
 } field;
 UINT32 word;
} TX_AGG_CNT7_STRUC, *PTX_AGG_CNT7_STRUC;
# 1518 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _MPDU_DEN_CNT_STRUC {
 struct {
     unsigned short TXZeroDelCount;
     unsigned short RXZeroDelCount;
 } field;
 UINT32 word;
} MPDU_DEN_CNT_STRUC, *PMPDU_DEN_CNT_STRUC;
# 1575 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _SHAREDKEY_MODE_STRUC {
 struct {
  UINT32 Bss0Key0CipherAlg:3;
  UINT32 :1;
  UINT32 Bss0Key1CipherAlg:3;
  UINT32 :1;
  UINT32 Bss0Key2CipherAlg:3;
  UINT32 :1;
  UINT32 Bss0Key3CipherAlg:3;
  UINT32 :1;
  UINT32 Bss1Key0CipherAlg:3;
  UINT32 :1;
  UINT32 Bss1Key1CipherAlg:3;
  UINT32 :1;
  UINT32 Bss1Key2CipherAlg:3;
  UINT32 :1;
  UINT32 Bss1Key3CipherAlg:3;
  UINT32 :1;
 } field;
 UINT32 word;
} SHAREDKEY_MODE_STRUC, *PSHAREDKEY_MODE_STRUC;


typedef struct _HW_WCID_ENTRY {
    unsigned char Address[6];
    unsigned char Rsv[2];
} HW_WCID_ENTRY, PHW_WCID_ENTRY;
# 1814 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef struct _WCID_ENTRY_STRUC {
 unsigned char RXBABitmap7;
 unsigned char RXBABitmap0;
 unsigned char MAC[6];
} WCID_ENTRY_STRUC, *PWCID_ENTRY_STRUC;



typedef struct _HW_KEY_ENTRY {
    unsigned char Key[16];
    unsigned char TxMic[8];
    unsigned char RxMic[8];
} HW_KEY_ENTRY, *PHW_KEY_ENTRY;
# 1840 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef struct _MAC_ATTRIBUTE_STRUC {
 UINT32 KeyTab:1;
 UINT32 PairKeyMode:3;
 UINT32 BSSIDIdx:3;
 UINT32 RXWIUDF:3;
 UINT32 rsv:22;
} MAC_ATTRIBUTE_STRUC, *PMAC_ATTRIBUTE_STRUC;
# 1886 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef struct __attribute__ ((packed)) _TXD_STRUC {

 UINT32 SDPtr0;

 UINT32 SDLen1:14;
 UINT32 LastSec1:1;
 UINT32 Burst:1;
 UINT32 SDLen0:14;
 UINT32 LastSec0:1;
 UINT32 DMADONE:1;

 UINT32 SDPtr1;

 UINT32 rsv2:24;
 UINT32 WIV:1;
 UINT32 QSEL:2;
 UINT32 rsv:2;
 UINT32 TCO:1;
 UINT32 UCO:1;
 UINT32 ICO:1;
} TXD_STRUC, *PTXD_STRUC;
# 1949 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef struct __attribute__ ((packed)) _TXWI_STRUC {

 UINT32 FRAG:1;
 UINT32 MIMOps:1;
 UINT32 CFACK:1;
 UINT32 TS:1;

 UINT32 AMPDU:1;
 UINT32 MpduDensity:3;
 UINT32 txop:2;
 UINT32 rsv:6;

 UINT32 MCS:7;
 UINT32 BW:1;
 UINT32 ShortGI:1;
 UINT32 STBC:2;
 UINT32 Ifs:1;
 UINT32 rsv2:2;
 UINT32 PHYMODE:2;

 UINT32 ACK:1;
 UINT32 NSEQ:1;
 UINT32 BAWinSize:6;
 UINT32 WirelessCliID:8;
 UINT32 MPDUtotalByteCount:12;
 UINT32 PacketId:4;

 UINT32 IV;

 UINT32 EIV;
} TXWI_STRUC, *PTXWI_STRUC;
# 2020 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef struct __attribute__ ((packed)) _RXD_STRUC {

 UINT32 SDP0;

 UINT32 SDL1:14;
 UINT32 Rsv:2;
 UINT32 SDL0:14;
 UINT32 LS0:1;
 UINT32 DDONE:1;

 UINT32 SDP1;

 UINT32 BA:1;
 UINT32 DATA:1;
 UINT32 NULLDATA:1;
 UINT32 FRAG:1;
 UINT32 U2M:1;
 UINT32 Mcast:1;
 UINT32 Bcast:1;
 UINT32 MyBss:1;
 UINT32 Crc:1;
 UINT32 CipherErr:2;
 UINT32 AMSDU:1;
 UINT32 HTC:1;
 UINT32 RSSI:1;
 UINT32 L2PAD:1;
 UINT32 AMPDU:1;
 UINT32 Decrypted:1;
 UINT32 PlcpSignal:1;
 UINT32 PlcpRssil:1;
 UINT32 Rsv1:13;
} RXD_STRUC, *PRXD_STRUC, RT28XX_RXD_STRUC, *PRT28XX_RXD_STRUC;
# 2086 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef struct __attribute__ ((packed)) _RXWI_STRUC {

 UINT32 WirelessCliID:8;
 UINT32 KeyIndex:2;
 UINT32 BSSID:3;
 UINT32 UDF:3;
 UINT32 MPDUtotalByteCount:12;
 UINT32 TID:4;

 UINT32 FRAG:4;
 UINT32 SEQUENCE:12;
 UINT32 MCS:7;
 UINT32 BW:1;
 UINT32 ShortGI:1;
 UINT32 STBC:2;
 UINT32 rsv:3;
 UINT32 PHYMODE:2;

 UINT32 RSSI0:8;
 UINT32 RSSI1:8;
 UINT32 RSSI2:8;
 UINT32 rsv1:8;

 UINT32 SNR0:8;
 UINT32 SNR1:8;
 UINT32 rsv2:16;
} RXWI_STRUC, *PRXWI_STRUC;
# 2134 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _H2M_MAILBOX_STRUC {
    struct {
        UINT32 LowByte:8;
        UINT32 HighByte:8;
        UINT32 CmdToken:8;
        UINT32 Owner:8;
    } field;
    UINT32 word;
} H2M_MAILBOX_STRUC, *PH2M_MAILBOX_STRUC;
# 2159 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _M2H_CMD_DONE_STRUC {
    struct {
        UINT32 CmdToken0;
        UINT32 CmdToken1;
        UINT32 CmdToken2;
        UINT32 CmdToken3;
    } field;
    UINT32 word;
} M2H_CMD_DONE_STRUC, *PM2H_CMD_DONE_STRUC;
# 2184 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _MCU_LEDCS_STRUC {
 struct {
  unsigned char LedMode:7;
  unsigned char Polarity:1;
 } field;
 unsigned char word;
} MCU_LEDCS_STRUC, *PMCU_LEDCS_STRUC;
# 2211 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _NAV_TIME_CFG_STRUC {
 struct {
  unsigned char Sifs;
  unsigned char SlotTime;
  unsigned short Eifs:9;
  unsigned short ZeroSifs:1;
  unsigned short rsv:6;
 } field;
 UINT32 word;
} NAV_TIME_CFG_STRUC, *PNAV_TIME_CFG_STRUC;
# 2259 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _RX_FILTR_CFG_STRUC {
 struct {
  UINT32 DropCRCErr:1;
  UINT32 DropPhyErr:1;
  UINT32 DropNotToMe:1;
  UINT32 DropNotMyBSSID:1;

  UINT32 DropVerErr:1;
  UINT32 DropMcast:1;
  UINT32 DropBcast:1;
  UINT32 DropDuplicate:1;

  UINT32 DropCFEndAck:1;
  UINT32 DropCFEnd:1;
  UINT32 DropAck:1;
  UINT32 DropCts:1;

  UINT32 DropRts:1;
  UINT32 DropPsPoll:1;
  UINT32 DropBA:1;
         UINT32 DropBAR:1;

  UINT32 DropRsvCntlType:1;
  UINT32 :15;
 } field;
 UINT32 word;
} RX_FILTR_CFG_STRUC, *PRX_FILTR_CFG_STRUC;
# 2306 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _PHY_CSR4_STRUC {
 struct {
  UINT32 RFRegValue:24;
  UINT32 NumberOfBits:5;
  UINT32 IFSelect:1;
  UINT32 PLL_LD:1;
  UINT32 Busy:1;
 } field;
 UINT32 word;
} PHY_CSR4_STRUC, *PPHY_CSR4_STRUC;
# 2345 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _SEC_CSR5_STRUC {
 struct {
        UINT32 Bss2Key0CipherAlg:3;
        UINT32 :1;
        UINT32 Bss2Key1CipherAlg:3;
        UINT32 :1;
        UINT32 Bss2Key2CipherAlg:3;
        UINT32 :1;
        UINT32 Bss2Key3CipherAlg:3;
        UINT32 :1;
        UINT32 Bss3Key0CipherAlg:3;
        UINT32 :1;
        UINT32 Bss3Key1CipherAlg:3;
        UINT32 :1;
        UINT32 Bss3Key2CipherAlg:3;
        UINT32 :1;
        UINT32 Bss3Key3CipherAlg:3;
        UINT32 :1;
 } field;
 UINT32 word;
} SEC_CSR5_STRUC, *PSEC_CSR5_STRUC;
# 2381 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _HOST_CMD_CSR_STRUC {
 struct {
     UINT32 HostCommand:8;
     UINT32 Rsv:24;
 } field;
 UINT32 word;
} HOST_CMD_CSR_STRUC, *PHOST_CMD_CSR_STRUC;
# 2415 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _E2PROM_CSR_STRUC {
 struct {
  UINT32 Reload:1;
  UINT32 EepromSK:1;
  UINT32 EepromCS:1;
  UINT32 EepromDI:1;
  UINT32 EepromDO:1;
  UINT32 Type:1;
  UINT32 LoadStatus:1;
  UINT32 Rsvd:25;
 } field;
 UINT32 word;
} E2PROM_CSR_STRUC, *PE2PROM_CSR_STRUC;
# 2449 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EEPROM_ANTENNA_STRUC {
 struct {
  unsigned short RxPath:4;
  unsigned short TxPath:4;
  unsigned short RfIcType:4;
  unsigned short Rsv:4;
 } field;
 unsigned short word;
} EEPROM_ANTENNA_STRUC, *PEEPROM_ANTENNA_STRUC;
# 2478 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EEPROM_NIC_CINFIG2_STRUC {
 struct {
  unsigned short HardwareRadioControl:1;
  unsigned short DynamicTxAgcControl:1;
  unsigned short ExternalLNAForG:1;
  unsigned short ExternalLNAForA:1;
  unsigned short CardbusAcceleration:1;
  unsigned short BW40MSidebandForG:1;
  unsigned short BW40MSidebandForA:1;
  unsigned short EnableWPSPBC:1;
  unsigned short BW40MAvailForG:1;
  unsigned short BW40MAvailForA:1;
  unsigned short Rsv2:6;
 } field;
 unsigned short word;
} EEPROM_NIC_CONFIG2_STRUC, *PEEPROM_NIC_CONFIG2_STRUC;
# 2508 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EEPROM_TX_PWR_STRUC {
 struct {
  signed char Byte0;
  signed char Byte1;
 } field;
 unsigned short word;
} EEPROM_TX_PWR_STRUC, *PEEPROM_TX_PWR_STRUC;
# 2526 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EEPROM_VERSION_STRUC {
 struct {
  unsigned char FaeReleaseNumber;
  unsigned char Version;
 } field;
 unsigned short word;
} EEPROM_VERSION_STRUC, *PEEPROM_VERSION_STRUC;
# 2552 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EEPROM_LED_STRUC {
 struct {
  unsigned short PolarityRDY_G:1;
  unsigned short PolarityRDY_A:1;
  unsigned short PolarityACT:1;
  unsigned short PolarityGPIO_0:1;
  unsigned short PolarityGPIO_1:1;
  unsigned short PolarityGPIO_2:1;
  unsigned short PolarityGPIO_3:1;
  unsigned short PolarityGPIO_4:1;
  unsigned short LedMode:5;
  unsigned short Rsvd:3;
 } field;
 unsigned short word;
} EEPROM_LED_STRUC, *PEEPROM_LED_STRUC;
# 2579 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _EEPROM_TXPOWER_DELTA_STRUC {
 struct {
  unsigned char DeltaValue:6;
  unsigned char Type:1;
  unsigned char TxPowerEnable:1;
 } field;
 unsigned char value;
} EEPROM_TXPOWER_DELTA_STRUC, *PEEPROM_TXPOWER_DELTA_STRUC;
# 2603 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _QOS_CSR0_STRUC {
 struct {
  unsigned char Byte0;
  unsigned char Byte1;
  unsigned char Byte2;
  unsigned char Byte3;
 } field;
 UINT32 word;
} QOS_CSR0_STRUC, *PQOS_CSR0_STRUC;
# 2628 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt28xx.h"
typedef union _QOS_CSR1_STRUC {
 struct {
  unsigned char Byte4;
  unsigned char Byte5;
  unsigned char Rsvd0;
  unsigned char Rsvd1;
 } field;
 UINT32 word;
} QOS_CSR1_STRUC, *PQOS_CSR1_STRUC;
# 55 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2


# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt2860.h" 1
# 55 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt2860.h"
void



rt2860_interrupt(int irq, void *dev_instance, struct pt_regs *regs);
# 58 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2



# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/oid.h" 1
# 222 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/oid.h"
typedef enum _NDIS_802_11_STATUS_TYPE
{
    Ndis802_11StatusType_Authentication,
    Ndis802_11StatusType_MediaStreamMode,
    Ndis802_11StatusType_PMKID_CandidateList,
    Ndis802_11StatusTypeMax
} NDIS_802_11_STATUS_TYPE, *PNDIS_802_11_STATUS_TYPE;

typedef unsigned char NDIS_802_11_MAC_ADDRESS[6];

typedef struct _NDIS_802_11_STATUS_INDICATION
{
    NDIS_802_11_STATUS_TYPE StatusType;
} NDIS_802_11_STATUS_INDICATION, *PNDIS_802_11_STATUS_INDICATION;
# 245 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/oid.h"
typedef struct _NDIS_802_11_AUTHENTICATION_REQUEST
{
    unsigned long Length;
    NDIS_802_11_MAC_ADDRESS Bssid;
    unsigned long Flags;
} NDIS_802_11_AUTHENTICATION_REQUEST, *PNDIS_802_11_AUTHENTICATION_REQUEST;


typedef struct _PMKID_CANDIDATE {
    NDIS_802_11_MAC_ADDRESS BSSID;
    unsigned long Flags;
} PMKID_CANDIDATE, *PPMKID_CANDIDATE;

typedef struct _NDIS_802_11_PMKID_CANDIDATE_LIST
{
    unsigned long Version;
    unsigned long NumCandidates;
    PMKID_CANDIDATE CandidateList[1];
} NDIS_802_11_PMKID_CANDIDATE_LIST, *PNDIS_802_11_PMKID_CANDIDATE_LIST;





typedef enum _NDIS_802_11_NETWORK_TYPE
{
   Ndis802_11FH,
   Ndis802_11DS,
    Ndis802_11OFDM5,
    Ndis802_11OFDM5_N,
    Ndis802_11OFDM24,
    Ndis802_11OFDM24_N,
   Ndis802_11Automode,
    Ndis802_11NetworkTypeMax
} NDIS_802_11_NETWORK_TYPE, *PNDIS_802_11_NETWORK_TYPE;

typedef struct _NDIS_802_11_NETWORK_TYPE_LIST
{
    unsigned int NumberOfItems;
   NDIS_802_11_NETWORK_TYPE NetworkType [1];
} NDIS_802_11_NETWORK_TYPE_LIST, *PNDIS_802_11_NETWORK_TYPE_LIST;

typedef enum _NDIS_802_11_POWER_MODE
{
    Ndis802_11PowerModeCAM,
    Ndis802_11PowerModeMAX_PSP,
    Ndis802_11PowerModeFast_PSP,
    Ndis802_11PowerModeLegacy_PSP,
    Ndis802_11PowerModeMax
} NDIS_802_11_POWER_MODE, *PNDIS_802_11_POWER_MODE;

typedef unsigned long NDIS_802_11_TX_POWER_LEVEL;




typedef long NDIS_802_11_RSSI;

typedef struct _NDIS_802_11_CONFIGURATION_FH
{
   unsigned long Length;
   unsigned long HopPattern;
   unsigned long HopSet;
   unsigned long DwellTime;
} NDIS_802_11_CONFIGURATION_FH, *PNDIS_802_11_CONFIGURATION_FH;

typedef struct _NDIS_802_11_CONFIGURATION
{
   unsigned long Length;
   unsigned long BeaconPeriod;
   unsigned long ATIMWindow;
   unsigned long DSConfig;
   NDIS_802_11_CONFIGURATION_FH FHConfig;
} NDIS_802_11_CONFIGURATION, *PNDIS_802_11_CONFIGURATION;

typedef struct _NDIS_802_11_STATISTICS
{
   unsigned long Length;
   LARGE_INTEGER TransmittedFragmentCount;
   LARGE_INTEGER MulticastTransmittedFrameCount;
   LARGE_INTEGER FailedCount;
   LARGE_INTEGER RetryCount;
   LARGE_INTEGER MultipleRetryCount;
   LARGE_INTEGER RTSSuccessCount;
   LARGE_INTEGER RTSFailureCount;
   LARGE_INTEGER ACKFailureCount;
   LARGE_INTEGER FrameDuplicateCount;
   LARGE_INTEGER ReceivedFragmentCount;
   LARGE_INTEGER MulticastReceivedFrameCount;
   LARGE_INTEGER FCSErrorCount;
   LARGE_INTEGER TKIPLocalMICFailures;
   LARGE_INTEGER TKIPRemoteMICErrors;
   LARGE_INTEGER TKIPICVErrors;
   LARGE_INTEGER TKIPCounterMeasuresInvoked;
   LARGE_INTEGER TKIPReplays;
   LARGE_INTEGER CCMPFormatErrors;
   LARGE_INTEGER CCMPReplays;
   LARGE_INTEGER CCMPDecryptErrors;
   LARGE_INTEGER FourWayHandshakeFailures;
} NDIS_802_11_STATISTICS, *PNDIS_802_11_STATISTICS;

typedef unsigned long NDIS_802_11_KEY_INDEX;
typedef u64 NDIS_802_11_KEY_RSC;



typedef struct __attribute__ ((packed)) _RADIUS_SRV_INFO {
 UINT32 radius_ip;
 UINT32 radius_port;
 unsigned char radius_key[64];
 unsigned char radius_key_len;
} RADIUS_SRV_INFO, *PRADIUS_SRV_INFO;

typedef struct __attribute__ ((packed)) _RADIUS_KEY_INFO
{
 unsigned char radius_srv_num;
 RADIUS_SRV_INFO radius_srv_info[2];
 unsigned char ieee8021xWEP;
    unsigned char key_index;
    unsigned char key_length;
    unsigned char key_material[13];
} RADIUS_KEY_INFO, *PRADIUS_KEY_INFO;


typedef struct __attribute__ ((packed)) _RADIUS_CONF
{
    UINT32 Length;
    unsigned char mbss_num;
 UINT32 own_ip_addr;
 UINT32 retry_interval;
 UINT32 session_timeout_interval;
 unsigned char EAPifname[16];
 unsigned char EAPifname_len;
 unsigned char PreAuthifname[16];
 unsigned char PreAuthifname_len;
 RADIUS_KEY_INFO RadiusInfo[1];
} RADIUS_CONF, *PRADIUS_CONF;




typedef struct _NDIS_802_11_KEY
{
    unsigned int Length;
    unsigned int KeyIndex;
    unsigned int KeyLength;
    NDIS_802_11_MAC_ADDRESS BSSID;
    NDIS_802_11_KEY_RSC KeyRSC;
    unsigned char KeyMaterial[1];
} NDIS_802_11_KEY, *PNDIS_802_11_KEY;


typedef struct _NDIS_802_11_REMOVE_KEY
{
    unsigned int Length;
    unsigned int KeyIndex;
    NDIS_802_11_MAC_ADDRESS BSSID;
} NDIS_802_11_REMOVE_KEY, *PNDIS_802_11_REMOVE_KEY;

typedef struct _NDIS_802_11_WEP
{
   unsigned int Length;
   unsigned int KeyIndex;

   unsigned int KeyLength;
   unsigned char KeyMaterial[1];
} NDIS_802_11_WEP, *PNDIS_802_11_WEP;


typedef enum _NDIS_802_11_NETWORK_INFRASTRUCTURE
{
   Ndis802_11IBSS,
   Ndis802_11Infrastructure,
   Ndis802_11AutoUnknown,
   Ndis802_11Monitor,
   Ndis802_11InfrastructureMax
} NDIS_802_11_NETWORK_INFRASTRUCTURE, *PNDIS_802_11_NETWORK_INFRASTRUCTURE;


typedef enum _NDIS_802_11_AUTHENTICATION_MODE
{
   Ndis802_11AuthModeOpen,
   Ndis802_11AuthModeShared,
   Ndis802_11AuthModeAutoSwitch,
    Ndis802_11AuthModeWPA,
    Ndis802_11AuthModeWPAPSK,
    Ndis802_11AuthModeWPANone,
   Ndis802_11AuthModeWPA2,
   Ndis802_11AuthModeWPA2PSK,
    Ndis802_11AuthModeWPA1WPA2,
 Ndis802_11AuthModeWPA1PSKWPA2PSK,
   Ndis802_11AuthModeMax
} NDIS_802_11_AUTHENTICATION_MODE, *PNDIS_802_11_AUTHENTICATION_MODE;

typedef unsigned char NDIS_802_11_RATES[8];
typedef unsigned char NDIS_802_11_RATES_EX[16];

typedef struct __attribute__ ((packed)) _NDIS_802_11_SSID
{
    unsigned int SsidLength;

    unsigned char Ssid[32];
} NDIS_802_11_SSID, *PNDIS_802_11_SSID;


typedef struct __attribute__ ((packed)) _NDIS_WLAN_BSSID
{
   unsigned long Length;
   NDIS_802_11_MAC_ADDRESS MacAddress;
   unsigned char Reserved[2];
   NDIS_802_11_SSID Ssid;
   unsigned long Privacy;
   NDIS_802_11_RSSI Rssi;
   NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
   NDIS_802_11_CONFIGURATION Configuration;
   NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
   NDIS_802_11_RATES SupportedRates;
} NDIS_WLAN_BSSID, *PNDIS_WLAN_BSSID;

typedef struct __attribute__ ((packed)) _NDIS_802_11_BSSID_LIST
{
   unsigned int NumberOfItems;
   NDIS_WLAN_BSSID Bssid[1];
} NDIS_802_11_BSSID_LIST, *PNDIS_802_11_BSSID_LIST;


typedef struct __attribute__ ((packed)) _NDIS_WLAN_BSSID_EX
{
    unsigned long Length;
    NDIS_802_11_MAC_ADDRESS MacAddress;
    unsigned char Reserved[2];
    NDIS_802_11_SSID Ssid;
    unsigned int Privacy;
    NDIS_802_11_RSSI Rssi;

    NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
    NDIS_802_11_CONFIGURATION Configuration;
    NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
    NDIS_802_11_RATES_EX SupportedRates;
    unsigned long IELength;
    unsigned char IEs[1];
} NDIS_WLAN_BSSID_EX, *PNDIS_WLAN_BSSID_EX;

typedef struct __attribute__ ((packed)) _NDIS_802_11_BSSID_LIST_EX
{
    unsigned int NumberOfItems;
    NDIS_WLAN_BSSID_EX Bssid[1];
} NDIS_802_11_BSSID_LIST_EX, *PNDIS_802_11_BSSID_LIST_EX;

typedef struct __attribute__ ((packed)) _NDIS_802_11_FIXED_IEs
{
    unsigned char Timestamp[8];
    unsigned short BeaconInterval;
    unsigned short Capabilities;
} NDIS_802_11_FIXED_IEs, *PNDIS_802_11_FIXED_IEs;

typedef struct _NDIS_802_11_VARIABLE_IEs
{
    unsigned char ElementID;
    unsigned char Length;
    unsigned char data[1];
} NDIS_802_11_VARIABLE_IEs, *PNDIS_802_11_VARIABLE_IEs;

typedef unsigned long NDIS_802_11_FRAGMENTATION_THRESHOLD;

typedef unsigned long NDIS_802_11_RTS_THRESHOLD;

typedef unsigned long NDIS_802_11_ANTENNA;

typedef enum _NDIS_802_11_PRIVACY_FILTER
{
   Ndis802_11PrivFilterAcceptAll,
   Ndis802_11PrivFilter8021xWEP
} NDIS_802_11_PRIVACY_FILTER, *PNDIS_802_11_PRIVACY_FILTER;



typedef enum _NDIS_802_11_WEP_STATUS
{
   Ndis802_11WEPEnabled,
    Ndis802_11Encryption1Enabled = Ndis802_11WEPEnabled,
   Ndis802_11WEPDisabled,
    Ndis802_11EncryptionDisabled = Ndis802_11WEPDisabled,
   Ndis802_11WEPKeyAbsent,
    Ndis802_11Encryption1KeyAbsent = Ndis802_11WEPKeyAbsent,
   Ndis802_11WEPNotSupported,
    Ndis802_11EncryptionNotSupported = Ndis802_11WEPNotSupported,
    Ndis802_11Encryption2Enabled,
    Ndis802_11Encryption2KeyAbsent,
    Ndis802_11Encryption3Enabled,
    Ndis802_11Encryption3KeyAbsent,
    Ndis802_11Encryption4Enabled,
    Ndis802_11Encryption4KeyAbsent,
} NDIS_802_11_WEP_STATUS, *PNDIS_802_11_WEP_STATUS,
  NDIS_802_11_ENCRYPTION_STATUS, *PNDIS_802_11_ENCRYPTION_STATUS;

typedef enum _NDIS_802_11_RELOAD_DEFAULTS
{
   Ndis802_11ReloadWEPKeys
} NDIS_802_11_RELOAD_DEFAULTS, *PNDIS_802_11_RELOAD_DEFAULTS;
# 554 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/oid.h"
typedef struct _NDIS_802_11_AI_REQFI
{
    unsigned short Capabilities;
    unsigned short ListenInterval;
    NDIS_802_11_MAC_ADDRESS CurrentAPAddress;
} NDIS_802_11_AI_REQFI, *PNDIS_802_11_AI_REQFI;

typedef struct _NDIS_802_11_AI_RESFI
{
    unsigned short Capabilities;
    unsigned short StatusCode;
    unsigned short AssociationId;
} NDIS_802_11_AI_RESFI, *PNDIS_802_11_AI_RESFI;

typedef struct _NDIS_802_11_ASSOCIATION_INFORMATION
{
    unsigned long Length;
    unsigned short AvailableRequestFixedIEs;
    NDIS_802_11_AI_REQFI RequestFixedIEs;
    unsigned long RequestIELength;
    unsigned long OffsetRequestIEs;
    unsigned short AvailableResponseFixedIEs;
    NDIS_802_11_AI_RESFI ResponseFixedIEs;
    unsigned long ResponseIELength;
    unsigned long OffsetResponseIEs;
} NDIS_802_11_ASSOCIATION_INFORMATION, *PNDIS_802_11_ASSOCIATION_INFORMATION;

typedef struct _NDIS_802_11_AUTHENTICATION_EVENT
{
    NDIS_802_11_STATUS_INDICATION Status;
    NDIS_802_11_AUTHENTICATION_REQUEST Request[1];
} NDIS_802_11_AUTHENTICATION_EVENT, *PNDIS_802_11_AUTHENTICATION_EVENT;

typedef struct _NDIS_802_11_TEST
{
    unsigned long Length;
    unsigned long Type;
    union
    {
        NDIS_802_11_AUTHENTICATION_EVENT AuthenticationEvent;
        NDIS_802_11_RSSI RssiTrigger;
    };
} NDIS_802_11_TEST, *PNDIS_802_11_TEST;


typedef enum _NDIS_802_11_MEDIA_STREAM_MODE
{
    Ndis802_11MediaStreamOff,
    Ndis802_11MediaStreamOn,
} NDIS_802_11_MEDIA_STREAM_MODE, *PNDIS_802_11_MEDIA_STREAM_MODE;


typedef unsigned char NDIS_802_11_PMKID_VALUE[16];


typedef struct _BSSID_INFO
{
    NDIS_802_11_MAC_ADDRESS BSSID;
    NDIS_802_11_PMKID_VALUE PMKID;
} BSSID_INFO, *PBSSID_INFO;

typedef struct _NDIS_802_11_PMKID
{
    unsigned int Length;
    unsigned int BSSIDInfoCount;
    BSSID_INFO BSSIDInfo[1];
} NDIS_802_11_PMKID, *PNDIS_802_11_PMKID;



typedef struct _NDIS_802_11_AUTHENTICATION_ENCRYPTION
{
    NDIS_802_11_AUTHENTICATION_MODE AuthModeSupported;
    NDIS_802_11_ENCRYPTION_STATUS EncryptStatusSupported;
} NDIS_802_11_AUTHENTICATION_ENCRYPTION, *PNDIS_802_11_AUTHENTICATION_ENCRYPTION;

typedef struct _NDIS_802_11_CAPABILITY
{
     unsigned long Length;
     unsigned long Version;
     unsigned long NoOfPMKIDs;
     unsigned long NoOfAuthEncryptPairsSupported;
     NDIS_802_11_AUTHENTICATION_ENCRYPTION AuthenticationEncryptionSupported[1];
} NDIS_802_11_CAPABILITY, *PNDIS_802_11_CAPABILITY;
# 651 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/oid.h"
typedef enum _RT_802_11_PREAMBLE {
    Rt802_11PreambleLong,
    Rt802_11PreambleShort,
    Rt802_11PreambleAuto
} RT_802_11_PREAMBLE, *PRT_802_11_PREAMBLE;


typedef enum _RT_802_11_PHY_MODE {
 PHY_11BG_MIXED = 0,
 PHY_11B,
 PHY_11A,
 PHY_11ABG_MIXED,
 PHY_11G,
 PHY_11ABGN_MIXED,
 PHY_11N_2_4G,
 PHY_11GN_MIXED,
 PHY_11AN_MIXED,
 PHY_11BGN_MIXED,
 PHY_11AGN_MIXED,
 PHY_11N_5G,
} RT_802_11_PHY_MODE;

typedef enum _RT_802_11_ADHOC_MODE {
 ADHOC_11B,
 ADHOC_11BG_MIXED,
 ADHOC_11G,
 ADHOC_11A,
 ADHOC_11ABG_MIXED
} RT_802_11_ADHOC_MODE;


typedef struct _RT_802_11_LINK_STATUS {
    unsigned long CurrTxRate;
    unsigned long ChannelQuality;
    unsigned long TxByteCount;
    unsigned long RxByteCount;
    unsigned long CentralChannel;
} RT_802_11_LINK_STATUS, *PRT_802_11_LINK_STATUS;

typedef struct _RT_802_11_EVENT_LOG {
    LARGE_INTEGER SystemTime;
    unsigned char Addr[6];
    unsigned short Event;
} RT_802_11_EVENT_LOG, *PRT_802_11_EVENT_LOG;

typedef struct _RT_802_11_EVENT_TABLE {
    unsigned long Num;
    unsigned long Rsv;
    RT_802_11_EVENT_LOG Log[10];
} RT_802_11_EVENT_TABLE, PRT_802_11_EVENT_TABLE;


typedef union _MACHTTRANSMIT_SETTING {
 struct {
 unsigned short MCS:7;
 unsigned short BW:1;
 unsigned short ShortGI:1;
 unsigned short STBC:2;
 unsigned short rsv:3;
 unsigned short MODE:2;
 } field;
 unsigned short word;
 } MACHTTRANSMIT_SETTING, *PMACHTTRANSMIT_SETTING;

typedef struct _RT_802_11_MAC_ENTRY {
    unsigned char Addr[6];
    unsigned char Aid;
    unsigned char Psm;
    unsigned char MimoPs;
    MACHTTRANSMIT_SETTING TxRate;
} RT_802_11_MAC_ENTRY, *PRT_802_11_MAC_ENTRY;

typedef struct _RT_802_11_MAC_TABLE {
    unsigned long Num;
    RT_802_11_MAC_ENTRY Entry[32];
} RT_802_11_MAC_TABLE, *PRT_802_11_MAC_TABLE;


typedef struct _RT_802_11_HARDWARE_REGISTER {
    unsigned long HardwareType;
    unsigned long Offset;
    unsigned long Data;
} RT_802_11_HARDWARE_REGISTER, *PRT_802_11_HARDWARE_REGISTER;

typedef struct _RT_802_11_AP_CONFIG {
    unsigned long EnableTxBurst;
    unsigned long EnableTurboRate;
    unsigned long IsolateInterStaTraffic;
    unsigned long HideSsid;
    unsigned long UseBGProtection;
    unsigned long UseShortSlotTime;
    unsigned long Rsv1;
    unsigned long SystemErrorBitmap;
} RT_802_11_AP_CONFIG, *PRT_802_11_AP_CONFIG;


typedef struct _RT_802_11_STA_CONFIG {
    unsigned long EnableTxBurst;
    unsigned long EnableTurboRate;
    unsigned long UseBGProtection;
    unsigned long UseShortSlotTime;
    unsigned long AdhocMode;
    unsigned long HwRadioStatus;
    unsigned long Rsv1;
    unsigned long SystemErrorBitmap;
} RT_802_11_STA_CONFIG, *PRT_802_11_STA_CONFIG;

typedef struct _RT_802_11_ACL_ENTRY {
    unsigned char Addr[6];
    unsigned short Rsv;
} RT_802_11_ACL_ENTRY, *PRT_802_11_ACL_ENTRY;

typedef struct __attribute__ ((packed)) _RT_802_11_ACL {
    unsigned long Policy;
    unsigned long Num;
    RT_802_11_ACL_ENTRY Entry[64];
} RT_802_11_ACL, *PRT_802_11_ACL;

typedef struct _RT_802_11_WDS {
    unsigned long Num;
    NDIS_802_11_MAC_ADDRESS Entry[(3*1)];
 unsigned long KeyLength;
 unsigned char KeyMaterial[32];
} RT_802_11_WDS, *PRT_802_11_WDS;

typedef struct _RT_802_11_TX_RATES_ {
    unsigned char SupRateLen;
    unsigned char SupRate[12];
    unsigned char ExtRateLen;
    unsigned char ExtRate[12];
} RT_802_11_TX_RATES, *PRT_802_11_TX_RATES;
# 816 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/oid.h"
typedef struct _RT_802_11_DLS_UI {
 unsigned short TimeOut;
 unsigned short CountDownTimer;
 NDIS_802_11_MAC_ADDRESS MacAddr;
 unsigned char Status;
 unsigned char Valid;
} RT_802_11_DLS_UI, *PRT_802_11_DLS_UI;


typedef struct _RT_802_11_DLS {
 unsigned short TimeOut;
 unsigned short CountDownTimer;
 NDIS_802_11_MAC_ADDRESS MacAddr;
 unsigned char Status;
 unsigned char Valid;
 RALINK_TIMER_STRUCT Timer;
 PVOID pAd;
} RT_802_11_DLS, *PRT_802_11_DLS;

typedef enum _RT_802_11_DLS_MODE {
    DLS_NONE,
    DLS_WAIT_KEY,
    DLS_FINISH
} RT_802_11_DLS_MODE;
# 62 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h" 1
# 184 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
typedef struct __attribute__ ((packed)) {
# 201 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned short AdvCoding:1;
 unsigned short ChannelWidth:1;
 unsigned short MimoPs:2;
 unsigned short GF:1;
 unsigned short ShortGIfor20:1;
 unsigned short ShortGIfor40:1;
 unsigned short TxSTBC:1;
 unsigned short RxSTBC:2;
 unsigned short DelayedBA:1;
 unsigned short AMsduSize:1;
 unsigned short CCKmodein40:1;
 unsigned short PSMP:1;
 unsigned short Forty_Mhz_Intolerant:1;
 unsigned short LSIGTxopProSup:1;

} HT_CAP_INFO, *PHT_CAP_INFO;


typedef struct __attribute__ ((packed)) {





 unsigned char MaxRAmpduFactor:2;
 unsigned char MpduDensity:3;
 unsigned char rsv:3;

} HT_CAP_PARM, *PHT_CAP_PARM;


typedef struct __attribute__ ((packed)) {
# 242 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned short Pco:1;
 unsigned short TranTime:2;
 unsigned short rsv:5;
 unsigned short MCSFeedback:2;
 unsigned short PlusHTC:1;
 unsigned short RDGSupport:1;
 unsigned short rsv2:4;

} EXT_HT_CAP_INFO, *PEXT_HT_CAP_INFO;




typedef struct __attribute__ ((packed)) {
 HT_CAP_INFO HtCapInfo;
 HT_CAP_PARM HtCapParm;
 unsigned char MCSSet[16];
 EXT_HT_CAP_INFO ExtHtCapInfo;
 unsigned char TxBFCap[4];
 unsigned char ASCap;
} HT_CAPABILITY_IE, *PHT_CAPABILITY_IE;


typedef struct {
 unsigned char bHtEnable;
 unsigned char bPreNHt;

 unsigned char MCSSet[16];
} RT_HT_PHY_INFO, *PRT_HT_PHY_INFO;



typedef struct {
# 287 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned short ChannelWidth:1;
 unsigned short MimoPs:2;
 unsigned short GF:1;
 unsigned short ShortGIfor20:1;
 unsigned short ShortGIfor40:1;
 unsigned short TxSTBC:1;
 unsigned short RxSTBC:2;
 unsigned short AmsduEnable:1;
 unsigned short AmsduSize:1;
 unsigned short rsv:5;
# 306 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned char MaxRAmpduFactor:2;
 unsigned char MpduDensity:3;
 unsigned char ExtChanOffset:2;
 unsigned char RecomWidth:1;
# 319 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned short OperaionMode:2;
 unsigned short NonGfPresent:1;
 unsigned short TransmitBustLimit:1;
 unsigned short OBSSNonHT:1;
 unsigned short rsv2:11;



 unsigned char NewExtChannelOffset;
} RT_HT_CAPABILITY, *PRT_HT_CAPABILITY;


typedef struct __attribute__ ((packed)) {







 unsigned char ExtChanOffset:2;
 unsigned char RecomWidth:1;
 unsigned char RifsMode:1;
 unsigned char CntlAccOnly:1;
 unsigned char SerInterGranu:3;

} ADD_HTINFO, *PADD_HTINFO;

typedef struct __attribute__ ((packed)){







 unsigned short OperaionMode:2;
 unsigned short NonGfPresent:1;
 unsigned short TransmitBustLimit:1;
 unsigned short OBSSNonHT:1;
 unsigned short rsv:11;

} ADD_HTINFO2, *PADD_HTINFO2;

typedef struct __attribute__ ((packed)){
# 373 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned short StbcMcs:7;
 unsigned short DualStbcProtect:1;
 unsigned short SecondBeacon:1;
 unsigned short LsigTxopProtFull:1;
 unsigned short PcoActive:1;
 unsigned short PcoPhase:1;
 unsigned short rsv:4;

} ADD_HTINFO3, *PADD_HTINFO3;


typedef struct __attribute__ ((packed)){
 unsigned char ControlChan;
 ADD_HTINFO AddHtInfo;
 ADD_HTINFO2 AddHtInfo2;
 ADD_HTINFO3 AddHtInfo3;
 unsigned char MCSSet[16];
} ADD_HT_INFO_IE, *PADD_HT_INFO_IE;

typedef struct __attribute__ ((packed)){
 unsigned char NewExtChanOffset;
} NEW_EXT_CHAN_IE, *PNEW_EXT_CHAN_IE;



typedef struct __attribute__ ((packed)) {
# 415 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
    UINT32 MA:1;
    UINT32 TRQ:1;
    UINT32 MRQ:1;
    UINT32 MRSorASI:3;
    UINT32 MFS:3;
    UINT32 MFBorASC:7;
    UINT32 CalPos:2;
    UINT32 CalSeq:2;
    UINT32 FBKReq:2;
    UINT32 CSISTEERING:2;
    UINT32 ZLFAnnouce:1;
    UINT32 rsv:5;
    UINT32 ACConstraint:1;
    UINT32 RDG:1;

} HT_CONTROL, *PHT_CONTROL;


typedef struct __attribute__ ((packed)) {







    unsigned short TID:4;
    unsigned short EOSP:1;
    unsigned short AckPolicy:2;
    unsigned short AMsduPresent:1;
    unsigned short Txop_QueueSize:8;

} QOS_CONTROL, *PQOS_CONTROL;


typedef struct __attribute__ ((packed)) {
# 464 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned short Ver:2;
 unsigned short Type:2;
 unsigned short SubType:4;
 unsigned short ToDs:1;
 unsigned short FrDs:1;
 unsigned short MoreFrag:1;
 unsigned short Retry:1;
 unsigned short PwrMgmt:1;
 unsigned short MoreData:1;
 unsigned short Wep:1;
 unsigned short Order:1;

} FRAME_CONTROL, *PFRAME_CONTROL;

typedef struct __attribute__ ((packed)) _HEADER_802_11 {
    FRAME_CONTROL FC;
    unsigned short Duration;
    unsigned char Addr1[6];
    unsigned char Addr2[6];
 unsigned char Addr3[6];




 unsigned short Frag:4;
 unsigned short Sequence:12;

 unsigned char Octet[0];
} HEADER_802_11, *PHEADER_802_11;

typedef struct __attribute__ ((packed)) _FRAME_802_11 {
    HEADER_802_11 Hdr;
    unsigned char Octet[1];
} FRAME_802_11, *PFRAME_802_11;


typedef struct __attribute__ ((packed)) _MA_BODY {
    unsigned char Category;
    unsigned char Action;
    unsigned char Octet[1];
} MA_BODY, *PMA_BODY;

typedef struct __attribute__ ((packed)) _HEADER_802_3 {
    unsigned char DAAddr1[6];
    unsigned char SAAddr2[6];
    unsigned char Octet[2];
} HEADER_802_3, *PHEADER_802_3;


typedef struct __attribute__ ((packed)){





    unsigned short Rsv:11;
    unsigned short Initiator:1;
    unsigned short TID:4;

} DELBA_PARM, *PDELBA_PARM;


typedef struct __attribute__ ((packed)) {






    unsigned short AMSDUSupported:1;
    unsigned short BAPolicy:1;
    unsigned short TID:4;
    unsigned short BufSize:10;

} BA_PARM, *PBA_PARM;


typedef union __attribute__ ((packed)) {
    struct __attribute__ ((packed)) {




    unsigned short FragNum:4;
 unsigned short StartSeq:12;

    } field;
    unsigned short word;
} BASEQ_CONTROL, *PBASEQ_CONTROL;



typedef struct __attribute__ ((packed)) {







    unsigned short ACKPolicy:1;
    unsigned short MTID:1;
    unsigned short Compressed:1;
    unsigned short Rsv:9;
    unsigned short TID:4;

} BA_CONTROL, *PBA_CONTROL;


typedef struct __attribute__ ((packed)) {







    unsigned short ACKPolicy:1;
    unsigned short MTID:1;
    unsigned short Compressed:1;
    unsigned short Rsv1:9;
    unsigned short TID:4;

} BAR_CONTROL, *PBAR_CONTROL;


typedef struct __attribute__ ((packed)) {







    unsigned short ACKPolicy:1;
    unsigned short MTID:1;
    unsigned short Compressed:1;
    unsigned short Rsv1:9;
    unsigned short NumTID:4;

} MTBAR_CONTROL, *PMTBAR_CONTROL;

typedef struct __attribute__ ((packed)) {




    unsigned short Rsv1:12;
    unsigned short TID:4;

} PER_TID_INFO, *PPER_TID_INFO;

typedef struct {
 PER_TID_INFO PerTID;
 BASEQ_CONTROL BAStartingSeq;
} EACH_TID, *PEACH_TID;


typedef struct __attribute__ ((packed)) _PSPOLL_FRAME {
    FRAME_CONTROL FC;
    unsigned short Aid;
    unsigned char Bssid[6];
    unsigned char Ta[6];
} PSPOLL_FRAME, *PPSPOLL_FRAME;

typedef struct __attribute__ ((packed)) _RTS_FRAME {
    FRAME_CONTROL FC;
    unsigned short Duration;
    unsigned char Addr1[6];
    unsigned char Addr2[6];
}RTS_FRAME, *PRTS_FRAME;


typedef struct __attribute__ ((packed)) _FRAME_BA_REQ {
 FRAME_CONTROL FC;
 unsigned short Duration;
 unsigned char Addr1[6];
 unsigned char Addr2[6];
 BAR_CONTROL BARControl;
 BASEQ_CONTROL BAStartingSeq;
} FRAME_BA_REQ, *PFRAME_BA_REQ;

typedef struct _FRAME_MTBA_REQ {
 FRAME_CONTROL FC;
 unsigned short Duration;
 unsigned char Addr1[6];
 unsigned char Addr2[6];
 MTBAR_CONTROL MTBARControl;
 unsigned char Octet[1];
} FRAME_MTBA_REQ, *PFRAME_MTBA_REQ;


typedef struct __attribute__ ((packed)) _FRAME_MTBA {
 FRAME_CONTROL FC;
 unsigned short Duration;
 unsigned char Addr1[6];
 unsigned char Addr2[6];
 BA_CONTROL BAControl;
 unsigned char Octet[1];
} FRAME_MTBA, *PFRAME_MTBA;



typedef struct __attribute__ ((packed)) _CHAN_SWITCH_ANNOUNCE {
 unsigned char ElementIE;
 unsigned char Len;
 unsigned char Mode;
 unsigned char NewChannel;
 unsigned char CSCount;
} CHAN_SWITCH_ANNOUNCE, *PCHAN_SWITCH_ANNOUNCE;


typedef struct __attribute__ ((packed)) _SECOND_CHAN_OFFSET {
 unsigned char ElementIE;
 unsigned char Len;
 unsigned char Mode;
 unsigned char NewChannel;
 unsigned char CSCount;
} SECOND_CHAN_OFFSET, *PSECOND_CHAN_OFFSET;

typedef struct __attribute__ ((packed)) _FRAME_SPETRUM_CS {
 HEADER_802_11 Hdr;
 unsigned char Category;
 unsigned char Action;
 CHAN_SWITCH_ANNOUNCE CSAnnounce;
 SECOND_CHAN_OFFSET SecondChannel;
} FRAME_SPETRUM_CS, *PFRAME_SPETRUM_CS;


typedef struct __attribute__ ((packed)) _FRAME_ADDBA_REQ {
 HEADER_802_11 Hdr;
 unsigned char Category;
 unsigned char Action;
 unsigned char Token;
 BA_PARM BaParm;
 unsigned short TimeOutValue;
 BASEQ_CONTROL BaStartSeq;
} FRAME_ADDBA_REQ, *PFRAME_ADDBA_REQ;

typedef struct __attribute__ ((packed)) _FRAME_ADDBA_RSP {
 HEADER_802_11 Hdr;
 unsigned char Category;
 unsigned char Action;
 unsigned char Token;
 unsigned short StatusCode;
 BA_PARM BaParm;
 unsigned short TimeOutValue;
} FRAME_ADDBA_RSP, *PFRAME_ADDBA_RSP;

typedef struct __attribute__ ((packed)) _FRAME_DELBA_REQ {
 HEADER_802_11 Hdr;
 unsigned char Category;
 unsigned char Action;
 DELBA_PARM DelbaParm;
 unsigned short ReasonCode;
} FRAME_DELBA_REQ, *PFRAME_DELBA_REQ;



typedef struct __attribute__ ((packed)) _FRAME_BAR {
 FRAME_CONTROL FC;
 unsigned short Duration;
 unsigned char Addr1[6];
 unsigned char Addr2[6];
 BAR_CONTROL BarControl;
 BASEQ_CONTROL StartingSeq;
} FRAME_BAR, *PFRAME_BAR;


typedef struct __attribute__ ((packed)) _FRAME_BA {
 FRAME_CONTROL FC;
 unsigned short Duration;
 unsigned char Addr1[6];
 unsigned char Addr2[6];
 BAR_CONTROL BarControl;
 BASEQ_CONTROL StartingSeq;
 unsigned char bitmask[8];
} FRAME_BA, *PFRAME_BA;


typedef struct __attribute__ ((packed)) _FRAME_PSMP_ACTION {
 HEADER_802_11 Hdr;
 unsigned char Category;
 unsigned char Action;
 unsigned char Psmp;
} FRAME_PSMP_ACTION, *PFRAME_PSMP_ACTION;


typedef struct __attribute__ ((packed)) _FRAME_RADIO_ACTION {
 HEADER_802_11 Hdr;
 unsigned char Category;
 unsigned char Action;
 unsigned char Token;
 unsigned short Repetition;
 unsigned char data[0];
} FRAME_RADIO_ACTION, *PFRAME_RADIO_ACTION;
# 775 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
typedef struct __attribute__ ((packed)) {
    unsigned char bValid;
    unsigned char CfpCount;
    unsigned char CfpPeriod;
    unsigned short CfpMaxDuration;
    unsigned short CfpDurRemaining;
} CF_PARM, *PCF_PARM;

typedef struct _CIPHER_SUITE {
 NDIS_802_11_ENCRYPTION_STATUS PairCipher;
 NDIS_802_11_ENCRYPTION_STATUS PairCipherAux;
 NDIS_802_11_ENCRYPTION_STATUS GroupCipher;
 unsigned short RsnCapability;
 unsigned char bMixMode;
} CIPHER_SUITE, *PCIPHER_SUITE;


typedef struct {
    unsigned char bValid;
    unsigned char bAdd;
    unsigned char bQAck;
    unsigned char bQueueRequest;
    unsigned char bTxopRequest;
    unsigned char bAPSDCapable;

    unsigned char EdcaUpdateCount;
    unsigned char Aifsn[4];
    unsigned char Cwmin[4];
    unsigned char Cwmax[4];
    unsigned short Txop[4];
    unsigned char bACM[4];
} EDCA_PARM, *PEDCA_PARM;


typedef struct {
    unsigned char bValid;
    unsigned short StaNum;
    unsigned char ChannelUtilization;
    unsigned short RemainingAdmissionControl;
} QBSS_LOAD_PARM, *PQBSS_LOAD_PARM;


typedef struct __attribute__ ((packed)) {
# 827 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
    unsigned char UAPSD_AC_VO:1;
 unsigned char UAPSD_AC_VI:1;
 unsigned char UAPSD_AC_BK:1;
 unsigned char UAPSD_AC_BE:1;
 unsigned char Rsv1:1;
 unsigned char MaxSPLength:2;
 unsigned char Rsv2:1;

} QBSS_STA_INFO_PARM, *PQBSS_STA_INFO_PARM;


typedef struct __attribute__ ((packed)) {





    unsigned char ParamSetCount:4;
 unsigned char Rsv:3;
 unsigned char UAPSD:1;

} QBSS_AP_INFO_PARM, *PQBSS_AP_INFO_PARM;



typedef struct {
    unsigned char bValid;
    unsigned char bQAck;
    unsigned char bQueueRequest;
    unsigned char bTxopRequest;

    unsigned char EdcaUpdateCount;
} QOS_CAPABILITY_PARM, *PQOS_CAPABILITY_PARM;


typedef struct {
    unsigned char IELen;
    unsigned char IE[64];
} WPA_IE_;



typedef struct {
    unsigned char Bssid[6];
    unsigned char Channel;
 unsigned char CentralChannel;
    unsigned char BssType;
    unsigned short AtimWin;
    unsigned short BeaconPeriod;

    unsigned char SupRate[12];
    unsigned char SupRateLen;
    unsigned char ExtRate[12];
    unsigned char ExtRateLen;
 HT_CAPABILITY_IE HtCapability;
 unsigned char HtCapabilityLen;
 ADD_HT_INFO_IE AddHtInfo;
 unsigned char AddHtInfoLen;
 unsigned char NewExtChanOffset;
 signed char Rssi;
    unsigned char Privacy;
 unsigned char Hidden;

    unsigned short DtimPeriod;
    unsigned short CapabilityInfo;

    unsigned short CfpCount;
    unsigned short CfpPeriod;
    unsigned short CfpMaxDuration;
    unsigned short CfpDurRemaining;
    unsigned char SsidLen;
    signed char Ssid[32];

    unsigned long LastBeaconRxTime;

 unsigned char bSES;


 CIPHER_SUITE WPA;
 CIPHER_SUITE WPA2;


 NDIS_802_11_FIXED_IEs FixIEs;
 NDIS_802_11_AUTHENTICATION_MODE AuthModeAux;
 NDIS_802_11_AUTHENTICATION_MODE AuthMode;
 NDIS_802_11_WEP_STATUS WepStatus;
 unsigned short VarIELen;
 unsigned char VarIEs[1024];


    unsigned char CkipFlag;


 unsigned char PTSF[4];
 unsigned char TTSF[8];


 EDCA_PARM EdcaParm;
 QOS_CAPABILITY_PARM QosCapability;
 QBSS_LOAD_PARM QbssLoad;

    WPA_IE_ WpaIE;
    WPA_IE_ RsnIE;




} BSS_ENTRY, *PBSS_ENTRY;

typedef struct {
    unsigned char BssNr;
    unsigned char BssOverlapNr;
    BSS_ENTRY BssEntry[64];
} BSS_TABLE, *PBSS_TABLE;


typedef struct _MLME_QUEUE_ELEM {
    unsigned long Machine;
    unsigned long MsgType;
    unsigned long MsgLen;
    unsigned char Msg[1536];
    LARGE_INTEGER TimeStamp;
    unsigned char Rssi0;
    unsigned char Rssi1;
    unsigned char Rssi2;
    unsigned char Signal;
    unsigned char Channel;
    unsigned char Wcid;
    unsigned char Occupied;
} MLME_QUEUE_ELEM, *PMLME_QUEUE_ELEM;

typedef struct _MLME_QUEUE {
    unsigned long Num;
    unsigned long Head;
    unsigned long Tail;
    NDIS_SPIN_LOCK Lock;
    MLME_QUEUE_ELEM Entry[40];
} MLME_QUEUE, *PMLME_QUEUE;

typedef void (*STATE_MACHINE_FUNC)(void *Adaptor, MLME_QUEUE_ELEM *Elem);

typedef struct _STATE_MACHINE {
    unsigned long Base;
    unsigned long NrState;
    unsigned long NrMsg;
    unsigned long CurrState;
    STATE_MACHINE_FUNC *TransFunc;
} STATE_MACHINE, *PSTATE_MACHINE;
# 983 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
typedef struct _MLME_AUX {
    unsigned char BssType;
    unsigned char Ssid[32];
    unsigned char SsidLen;
    unsigned char Bssid[6];
 unsigned char AutoReconnectSsid[32];
 unsigned char AutoReconnectSsidLen;
    unsigned short Alg;
    unsigned char ScanType;
    unsigned char Channel;
 unsigned char CentralChannel;
    unsigned short Aid;
    unsigned short CapabilityInfo;
    unsigned short BeaconPeriod;
    unsigned short CfpMaxDuration;
    unsigned short CfpPeriod;
    unsigned short AtimWin;



 unsigned char SupRate[12];
 unsigned char ExtRate[12];
 unsigned char SupRateLen;
 unsigned char ExtRateLen;
 HT_CAPABILITY_IE HtCapability;
 unsigned char HtCapabilityLen;
 ADD_HT_INFO_IE AddHtInfo;
 unsigned char NewExtChannelOffset;


    QOS_CAPABILITY_PARM APQosCapability;
    EDCA_PARM APEdcaParm;
    QBSS_LOAD_PARM APQbssLoad;


    unsigned long APRalinkIe;

    BSS_TABLE SsidBssTab;
    BSS_TABLE RoamTab;
    unsigned long BssIdx;
    unsigned long RoamIdx;

 unsigned char CurrReqIsFromNdis;

    RALINK_TIMER_STRUCT BeaconTimer, ScanTimer;
    RALINK_TIMER_STRUCT AuthTimer;
    RALINK_TIMER_STRUCT AssocTimer, ReassocTimer, DisassocTimer;
} MLME_AUX, *PMLME_AUX;

typedef struct _MLME_ADDBA_REQ_STRUCT{
 unsigned char Wcid;
 unsigned char pAddr[6];
 unsigned char BaBufSize;
 unsigned short TimeOutValue;
 unsigned char TID;
 unsigned char Token;
 unsigned short BaStartSeq;
} MLME_ADDBA_REQ_STRUCT, *PMLME_ADDBA_REQ_STRUCT;


typedef struct _MLME_DELBA_REQ_STRUCT{
 unsigned char Wcid;
 unsigned char Addr[6];
 unsigned char TID;
 unsigned char Initiator;
} MLME_DELBA_REQ_STRUCT, *PMLME_DELBA_REQ_STRUCT;


typedef struct _MLME_ASSOC_REQ_STRUCT{
    unsigned char Addr[6];
    unsigned short CapabilityInfo;
    unsigned short ListenIntv;
    unsigned long Timeout;
} MLME_ASSOC_REQ_STRUCT, *PMLME_ASSOC_REQ_STRUCT, MLME_REASSOC_REQ_STRUCT, *PMLME_REASSOC_REQ_STRUCT;

typedef struct _MLME_DISASSOC_REQ_STRUCT{
    unsigned char Addr[6];
    unsigned short Reason;
} MLME_DISASSOC_REQ_STRUCT, *PMLME_DISASSOC_REQ_STRUCT;

typedef struct _MLME_AUTH_REQ_STRUCT {
    unsigned char Addr[6];
    unsigned short Alg;
    unsigned long Timeout;
} MLME_AUTH_REQ_STRUCT, *PMLME_AUTH_REQ_STRUCT;

typedef struct _MLME_DEAUTH_REQ_STRUCT {
    unsigned char Addr[6];
    unsigned short Reason;
} MLME_DEAUTH_REQ_STRUCT, *PMLME_DEAUTH_REQ_STRUCT;

typedef struct {
    unsigned long BssIdx;
} MLME_JOIN_REQ_STRUCT;

typedef struct _MLME_SCAN_REQ_STRUCT {
    unsigned char Bssid[6];
    unsigned char BssType;
    unsigned char ScanType;
    unsigned char SsidLen;
    signed char Ssid[32];
} MLME_SCAN_REQ_STRUCT, *PMLME_SCAN_REQ_STRUCT;

typedef struct _MLME_START_REQ_STRUCT {
    signed char Ssid[32];
    unsigned char SsidLen;
} MLME_START_REQ_STRUCT, *PMLME_START_REQ_STRUCT;

typedef struct __attribute__ ((packed)) {
    unsigned char Eid;
    unsigned char Len;
    signed char Octet[1];
} EID_STRUCT,*PEID_STRUCT, BEACON_EID_STRUCT, *PBEACON_EID_STRUCT;

typedef struct _RTMP_TX_RATE_SWITCH
{
 unsigned char ItemNo;
# 1108 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
 unsigned char STBC:1;
 unsigned char ShortGI:1;
 unsigned char BW:1;
 unsigned char Rsv1:1;
 unsigned char Mode:2;
 unsigned char Rsv2:2;

 unsigned char CurrMCS;
 unsigned char TrainUp;
 unsigned char TrainDown;
} RRTMP_TX_RATE_SWITCH, *PRTMP_TX_RATE_SWITCH;
# 1129 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/mlme.h"
typedef enum _Sst {
    SST_NOT_AUTH,
    SST_AUTH,
    SST_ASSOC
} SST;


typedef enum _AuthState {
    AS_NOT_AUTH,
    AS_AUTH_OPEN,
    AS_AUTH_KEY,
    AS_AUTHENTICATING
} AUTH_STATE;


typedef enum _ApWpaState {
    AS_NOTUSE,
    AS_DISCONNECT,
    AS_DISCONNECTED,
    AS_INITIALIZE,
    AS_AUTHENTICATION,
    AS_AUTHENTICATION2,
    AS_INITPMK,
    AS_INITPSK,
    AS_PTKSTART,
    AS_PTKINIT_NEGOTIATING,
    AS_PTKINITDONE,
    AS_UPDATEKEYS,
    AS_INTEGRITY_FAILURE,
    AS_KEYUPDATE,
} AP_WPA_STATE;


typedef enum _GTKState {
    REKEY_NEGOTIATING,
    REKEY_ESTABLISHED,
    KEYERROR,
} GTK_STATE;


typedef enum _WpaGTKState {
    SETKEYS,
    SETKEYS_DONE,
} WPA_GTK_STATE;



typedef struct __attribute__ ((packed)) {
 unsigned char ID;
 unsigned char Length;
 unsigned char ChannelSwitchMode;
 unsigned char NewRegClass;
 unsigned char NewChannelNum;
 unsigned char ChannelSwitchCount;
} HT_EXT_CHANNEL_SWITCH_ANNOUNCEMENT_IE, *PHT_EXT_CHANNEL_SWITCH_ANNOUNCEMENT_IE;
# 63 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/wpa.h" 1
# 142 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/wpa.h"
typedef struct __attribute__ ((packed)) _KEY_INFO
{
# 157 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/wpa.h"
 unsigned char KeyMic:1;
 unsigned char Secure:1;
 unsigned char Error:1;
 unsigned char Request:1;
 unsigned char EKD_DL:1;
 unsigned char Rsvd:3;
 unsigned char KeyDescVer:3;
 unsigned char KeyType:1;
 unsigned char KeyIndex:2;
 unsigned char Install:1;
 unsigned char KeyAck:1;

} KEY_INFO, *PKEY_INFO;


typedef struct __attribute__ ((packed)) _KEY_DESCRIPTER
{
 unsigned char Type;
 KEY_INFO KeyInfo;
 unsigned char KeyLength[2];
 unsigned char ReplayCounter[8];
 unsigned char KeyNonce[32];
 unsigned char KeyIv[16];
 unsigned char KeyRsc[8];
 unsigned char KeyId[8];
 unsigned char KeyMic[16];
 unsigned char KeyDataLen[2];
 unsigned char KeyData[90];
} KEY_DESCRIPTER, *PKEY_DESCRIPTER;

typedef struct __attribute__ ((packed)) _EAPOL_PACKET
{
 unsigned char ProVer;
 unsigned char ProType;
 unsigned char Body_Len[2];
 KEY_DESCRIPTER KeyDesc;
} EAPOL_PACKET, *PEAPOL_PACKET;


typedef struct __attribute__ ((packed)) _GTK_ENCAP
{

    unsigned char Kid:2;
    unsigned char tx:1;
    unsigned char rsv:5;
    unsigned char rsv1;






    unsigned char GTK[((16)+(8)+(8))];
} GTK_ENCAP, *PGTK_ENCAP;

typedef struct __attribute__ ((packed)) _KDE_ENCAP
{
    unsigned char Type;
    unsigned char Len;
    unsigned char OUI[3];
    unsigned char DataType;
    GTK_ENCAP GTKEncap;
} KDE_ENCAP, *PKDE_ENCAP;


typedef struct __attribute__ ((packed)) _RSNIE {
    unsigned char oui[4];
    unsigned short version;
    unsigned char mcast[4];
    unsigned short ucount;
    struct __attribute__ ((packed)) {
        unsigned char oui[4];
    }ucast[1];
} RSNIE, *PRSNIE;


typedef struct __attribute__ ((packed)) _RSNIE2 {
    unsigned short version;
    unsigned char mcast[4];
    unsigned short ucount;
    struct __attribute__ ((packed)) {
        unsigned char oui[4];
    }ucast[1];
} RSNIE2, *PRSNIE2;


typedef struct __attribute__ ((packed)) _RSNIE_AUTH {
    unsigned short acount;
    struct __attribute__ ((packed)) {
        unsigned char oui[4];
    }auth[1];
} RSNIE_AUTH,*PRSNIE_AUTH;

typedef union __attribute__ ((packed)) _RSN_CAPABILITIES {
 struct __attribute__ ((packed)) {







        unsigned short PreAuth:1;
  unsigned short No_Pairwise:1;
  unsigned short PTKSA_R_Counter:2;
  unsigned short GTKSA_R_Counter:2;
  unsigned short Rsvd:10;

 } field;
 unsigned short word;
} RSN_CAPABILITIES, *PRSN_CAPABILITIES;

typedef struct __attribute__ ((packed)) _EAP_HDR {
    unsigned char ProVer;
    unsigned char ProType;
    unsigned char Body_Len[2];
    unsigned char code;
    unsigned char identifier;
    unsigned char length[2];
} EAP_HDR, *PEAP_HDR;



typedef enum _WpaState
{
 SS_NOTUSE,
 SS_START,
 SS_WAIT_MSG_3,
 SS_WAIT_GROUP,
 SS_FINISH,
 SS_KEYUPDATE,
} WPA_STATE;
# 64 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/md5.h" 1
# 54 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/md5.h"
typedef struct _MD5_CTX {
    unsigned long Buf[4];
 unsigned char Input[64];
 unsigned long LenInBitCount[2];
} MD5_CTX;

void MD5Init(MD5_CTX *pCtx);
void MD5Update(MD5_CTX *pCtx, unsigned char *pData, unsigned long LenInBytes);
void MD5Final(unsigned char Digest[16], MD5_CTX *pCtx);
void MD5Transform(unsigned long Buf[4], unsigned long Mes[16]);

void md5_mac(u8 *key, size_t key_len, u8 *data, size_t data_len, u8 *mac);
void hmac_md5(u8 *key, size_t key_len, u8 *data, size_t data_len, u8 *mac);




typedef struct _SHA_CTX
{
 unsigned long Buf[5];
 unsigned char Input[80];
 unsigned long LenInBitCount[2];

} SHA_CTX;

void SHAInit(SHA_CTX *pCtx);
unsigned char SHAUpdate(SHA_CTX *pCtx, unsigned char *pData, unsigned long LenInBytes);
void SHAFinal(SHA_CTX *pCtx, unsigned char Digest[20]);
void SHATransform(unsigned long Buf[5], unsigned long Mes[20]);
# 91 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/md5.h"
typedef struct
{
 unsigned long int erk[64];
 unsigned long int drk[64];
 int nr;
}
aes_context;

int rtmp_aes_set_key( aes_context *ctx, unsigned char *key, int nbits );
void rtmp_aes_encrypt( aes_context *ctx, unsigned char input[16], unsigned char output[16] );
void rtmp_aes_decrypt( aes_context *ctx, unsigned char input[16], unsigned char output[16] );

void F(char *password, unsigned char *ssid, int ssidlength, int iterations, int count, unsigned char *output);
int PasswordHash(char *password, unsigned char *ssid, int ssidlength, unsigned char *output);
# 65 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h" 1
# 43 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/link_list.h" 1
# 31 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/link_list.h"
typedef struct _LIST_ENTRY
{
 struct _LIST_ENTRY *pNext;
} LIST_ENTRY, *PLIST_ENTRY;

typedef struct _LIST_HEADR
{
 PLIST_ENTRY pHead;
 PLIST_ENTRY pTail;
 unsigned char size;
} LIST_HEADER, *PLIST_HEADER;

static inline void initList(
 PLIST_HEADER pList)
{
 pList->pHead = pList->pTail = ((void *)0);
 pList->size = 0;
 return;
}

static inline void insertTailList(
 PLIST_HEADER pList,
 PLIST_ENTRY pEntry)
{
 pEntry->pNext = ((void *)0);
 if (pList->pTail)
  pList->pTail->pNext = pEntry;
 else
  pList->pHead = pEntry;
 pList->pTail = pEntry;
 pList->size++;

 return;
}

static inline PLIST_ENTRY removeHeadList(
 PLIST_HEADER pList)
{
 PLIST_ENTRY pNext;
 PLIST_ENTRY pEntry;

 pEntry = pList->pHead;
 if (pList->pHead != ((void *)0))
 {
  pNext = pList->pHead->pNext;
  pList->pHead = pNext;
  if (pNext == ((void *)0))
   pList->pTail = ((void *)0);
  pList->size--;
 }
 return pEntry;
}

static inline int getListSize(
 PLIST_HEADER pList)
{
 return pList->size;
}

static inline PLIST_ENTRY delEntryList(
 PLIST_HEADER pList,
 PLIST_ENTRY pEntry)
{
 PLIST_ENTRY pCurEntry;
 PLIST_ENTRY pPrvEntry;

 if(pList->pHead == ((void *)0))
  return ((void *)0);

 if(pEntry == pList->pHead)
 {
  pCurEntry = pList->pHead;
  pList->pHead = pCurEntry->pNext;

  if(pList->pHead == ((void *)0))
   pList->pTail = ((void *)0);

  pList->size--;
  return pCurEntry;
 }

 pPrvEntry = pList->pHead;
 pCurEntry = pPrvEntry->pNext;
 while(pCurEntry != ((void *)0))
 {
  if (pEntry == pCurEntry)
  {
   pPrvEntry->pNext = pCurEntry->pNext;

   if(pEntry == pList->pTail)
    pList->pTail = pPrvEntry;

   pList->size--;
   break;
  }
  pPrvEntry = pCurEntry;
  pCurEntry = pPrvEntry->pNext;
 }

 return pCurEntry;
}
# 44 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h" 2


# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/aironet.h" 1
# 78 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/aironet.h"
typedef struct _MEASUREMENT_REQUEST {
 unsigned char Channel;
 unsigned char ScanMode;
 unsigned short Duration;
} MEASUREMENT_REQUEST, *PMEASUREMENT_REQUEST;




typedef struct _BEACON_REPORT {
 unsigned char Channel;
 unsigned char Spare;
 unsigned short Duration;
 unsigned char PhyType;
 unsigned char RxPower;
 unsigned char BSSID[6];
 unsigned char ParentTSF[4];
 unsigned char TargetTSF[8];
 unsigned short BeaconInterval;
 unsigned short CapabilityInfo;
} BEACON_REPORT, *PBEACON_REPORT;


typedef struct _FRAME_REPORT {
 unsigned char Channel;
 unsigned char Spare;
 unsigned short Duration;
 unsigned char TA;
 unsigned char BSSID[6];
 unsigned char RSSI;
 unsigned char Count;
} FRAME_REPORT, *PFRAME_REPORT;

#pragma pack(1)

typedef struct _CHANNEL_LOAD_REPORT {
 unsigned char Channel;
 unsigned char Spare;
 unsigned short Duration;
 unsigned char CCABusy;
} CHANNEL_LOAD_REPORT, *PCHANNEL_LOAD_REPORT;
#pragma pack()


typedef struct _NOISE_HIST_REPORT {
 unsigned char Channel;
 unsigned char Spare;
 unsigned short Duration;
 unsigned char Density[8];
} NOISE_HIST_REPORT, *PNOISE_HIST_REPORT;


typedef struct _RADIO_MANAGEMENT_CAPABILITY {
 unsigned char Eid;
 unsigned char Length;
 unsigned char AironetOui[3];
 unsigned char Type;
 unsigned short Status;
} RADIO_MANAGEMENT_CAPABILITY, *PRADIO_MANAGEMENT_CAPABILITY;


typedef struct _MEASUREMENT_MODE {
 unsigned char Rsvd:4;
 unsigned char Report:1;
 unsigned char NotUsed:1;
 unsigned char Enable:1;
 unsigned char Parallel:1;
} MEASUREMENT_MODE, *PMEASUREMENT_MODE;


typedef struct _MEASUREMENT_REQUEST_ELEMENT {
 unsigned short Eid;
 unsigned short Length;
 unsigned short Token;
 unsigned char Mode;
 unsigned char Type;
} MEASUREMENT_REQUEST_ELEMENT, *PMEASUREMENT_REQUEST_ELEMENT;


typedef struct _MEASUREMENT_REPORT_ELEMENT {
 unsigned short Eid;
 unsigned short Length;
 unsigned short Token;
 unsigned char Mode;
 unsigned char Type;
} MEASUREMENT_REPORT_ELEMENT, *PMEASUREMENT_REPORT_ELEMENT;


typedef struct _AIRONET_IAPP_HEADER {
 unsigned char CiscoSnapHeader[8];
 unsigned short Length;
 unsigned char Type;
 unsigned char SubType;
 unsigned char DA[6];
 unsigned char SA[6];
 unsigned short Token;
} AIRONET_IAPP_HEADER, *PAIRONET_IAPP_HEADER;


typedef struct _AIRONET_RM_REQUEST_FRAME {
    AIRONET_IAPP_HEADER IAPP;
 unsigned char Delay;
 unsigned char Offset;
} AIRONET_RM_REQUEST_FRAME, *PAIRONET_RM_REQUEST_FRAME;


typedef struct _AIRONET_RM_REPORT_FRAME {
    AIRONET_IAPP_HEADER IAPP;
} AIRONET_RM_REPORT_FRAME, *PAIRONET_RM_REPORT_FRAME;


typedef struct _RM_REQUEST_ACTION {
 MEASUREMENT_REQUEST_ELEMENT ReqElem;
 MEASUREMENT_REQUEST Measurement;
} RM_REQUEST_ACTION, *PRM_REQUEST_ACTION;


typedef union _CCX_CONTROL {
 struct {
  UINT32 Enable:1;
  UINT32 LeapEnable:1;
  UINT32 RMEnable:1;
  UINT32 DCRMEnable:1;
  UINT32 QOSEnable:1;
  UINT32 FastRoamEnable:1;
  UINT32 Rsvd:2;
  UINT32 dBmToRoam:8;
  UINT32 TuLimit:16;
 } field;
 UINT32 word;
} CCX_CONTROL, *PCCX_CONTROL;
# 47 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h" 2
# 61 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
extern char NIC_VENDOR_DESC[];
extern int NIC_VENDOR_DESC_LEN;

extern unsigned char SNAP_AIRONET[];
extern unsigned char CipherSuiteCiscoCCKM[];
extern unsigned char CipherSuiteCiscoCCKMLen;
extern unsigned char CipherSuiteCiscoCCKM24[];
extern unsigned char CipherSuiteCiscoCCKM24Len;
extern unsigned char CipherSuiteCCXTkip[];
extern unsigned char CipherSuiteCCXTkipLen;
extern unsigned char CISCO_OUI[];
extern unsigned char BaSizeArray[4];

extern unsigned char BROADCAST_ADDR[6];
extern unsigned char MULTICAST_ADDR[6];
extern unsigned char ZERO_MAC_ADDR[6];
extern unsigned long BIT32[32];
extern unsigned char BIT8[8];
extern char* CipherName[];
extern char* MCSToMbps[];
extern unsigned char RxwiMCSToOfdmRate[12];
extern unsigned char SNAP_802_1H[6];
extern unsigned char SNAP_BRIDGE_TUNNEL[6];
extern unsigned char SNAP_AIRONET[8];
extern unsigned char CKIP_LLC_SNAP[8];
extern unsigned char EAPOL_LLC_SNAP[8];
extern unsigned char EAPOL[2];
extern unsigned char IPX[2];
extern unsigned char APPLE_TALK[2];
extern unsigned char RateIdToPlcpSignal[12];
extern unsigned char OfdmRateToRxwiMCS[];
extern unsigned char OfdmSignalToRateId[16] ;
extern unsigned char default_cwmin[4];
extern unsigned char default_cwmax[4];
extern unsigned char default_sta_aifsn[4];
extern unsigned char MapUserPriorityToAccessCategory[8];

extern unsigned short RateUpPER[];
extern unsigned short RateDownPER[];
extern unsigned char Phy11BNextRateDownward[];
extern unsigned char Phy11BNextRateUpward[];
extern unsigned char Phy11BGNextRateDownward[];
extern unsigned char Phy11BGNextRateUpward[];
extern unsigned char Phy11ANextRateDownward[];
extern unsigned char Phy11ANextRateUpward[];
extern signed char RssiSafeLevelForTxRate[];
extern unsigned char RateIdToMbps[];
extern unsigned short RateIdTo500Kbps[];

extern unsigned char CipherSuiteWpaNoneTkip[];
extern unsigned char CipherSuiteWpaNoneTkipLen;

extern unsigned char CipherSuiteWpaNoneAes[];
extern unsigned char CipherSuiteWpaNoneAesLen;

extern unsigned char SsidIe;
extern unsigned char SupRateIe;
extern unsigned char ExtRateIe;
extern unsigned char HtCapIe;
extern unsigned char AddHtInfoIe;
extern unsigned char NewExtChanIe;
extern unsigned char ErpIe;
extern unsigned char DsIe;
extern unsigned char TimIe;
extern unsigned char WpaIe;
extern unsigned char Wpa2Ie;
extern unsigned char IbssIe;
extern unsigned char Ccx2Ie;

extern unsigned char WPA_OUI[];
extern unsigned char RSN_OUI[];
extern unsigned char WME_INFO_ELEM[];
extern unsigned char WME_PARM_ELEM[];
extern unsigned char Ccx2QosInfo[];
extern unsigned char Ccx2IeInfo[];
extern unsigned char RALINK_OUI[];
extern unsigned char PowerConstraintIE[];


extern unsigned char RateSwitchTable[];
extern unsigned char RateSwitchTable11B[];
extern unsigned char RateSwitchTable11G[];
extern unsigned char RateSwitchTable11BG[];
extern unsigned char RateSwitchTable11BGN1S[];
extern unsigned char RateSwitchTable11BGN2S[];
extern unsigned char RateSwitchTable11BGN2SForABand[];
extern unsigned char RateSwitchTable11N1S[];
extern unsigned char RateSwitchTable11N2S[];
extern unsigned char RateSwitchTable11N2SForABand[];


extern unsigned char PRE_N_HT_OUI[];
# 242 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
struct reordering_mpdu
{
 struct reordering_mpdu *next;
 PNDIS_PACKET pPacket;
 int Sequence;
 unsigned char bAMSDU;
};

struct reordering_list
{
 struct reordering_mpdu *next;
 int qlen;
};

struct reordering_mpdu_pool
{
 PVOID mem;
 NDIS_SPIN_LOCK lock;
 struct reordering_list freelist;
};

typedef struct _RSSI_SAMPLE {
 signed char LastRssi0;
 signed char LastRssi1;
 signed char LastRssi2;
 signed char AvgRssi0;
 signed char AvgRssi1;
 signed char AvgRssi2;
 signed short AvgRssi0X8;
 signed short AvgRssi1X8;
 signed short AvgRssi2X8;
} RSSI_SAMPLE;




typedef struct _QUEUE_ENTRY {
 struct _QUEUE_ENTRY *Next;
} QUEUE_ENTRY, *PQUEUE_ENTRY;


typedef struct _QUEUE_HEADER {
 PQUEUE_ENTRY Head;
 PQUEUE_ENTRY Tail;
 unsigned long Number;
} QUEUE_HEADER, *PQUEUE_HEADER;
# 726 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _RTMP_SCATTER_GATHER_ELEMENT {
    PVOID Address;
    unsigned long Length;
    PULONG Reserved;
} RTMP_SCATTER_GATHER_ELEMENT, *PRTMP_SCATTER_GATHER_ELEMENT;


typedef struct _RTMP_SCATTER_GATHER_LIST {
    unsigned long NumberOfElements;
    PULONG Reserved;
    RTMP_SCATTER_GATHER_ELEMENT Elements[8];
} RTMP_SCATTER_GATHER_LIST, *PRTMP_SCATTER_GATHER_LIST;
# 882 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _RTMP_REG_PAIR
{
 unsigned long Register;
 unsigned long Value;
} RTMP_REG_PAIR, *PRTMP_REG_PAIR;

typedef struct _BBP_REG_PAIR
{
 unsigned char Register;
 unsigned char Value;
} BBP_REG_PAIR, *PBBP_REG_PAIR;




typedef struct _RTMP_RF_REGS
{
 unsigned char Channel;
 unsigned long R1;
 unsigned long R2;
 unsigned long R3;
 unsigned long R4;
} RTMP_RF_REGS, *PRTMP_RF_REGS;





typedef struct _RTMP_DMABUF
{
 unsigned long AllocSize;
 PVOID AllocVa;
 NDIS_PHYSICAL_ADDRESS AllocPa;
} RTMP_DMABUF, *PRTMP_DMABUF;


typedef union _HEADER_802_11_SEQ{






    struct {
 unsigned short Frag:4;
 unsigned short Sequence:12;
    } field;

    unsigned short value;
} HEADER_802_11_SEQ, *PHEADER_802_11_SEQ;





typedef struct _RTMP_REORDERBUF
{
 unsigned char IsFull;
 PVOID AllocVa;
 unsigned char Header802_3[14];
 HEADER_802_11_SEQ Sequence;
 unsigned char DataOffset;
 unsigned short Datasize;
 unsigned long AllocSize;

 NDIS_PHYSICAL_ADDRESS AllocPa;

} RTMP_REORDERBUF, *PRTMP_REORDERBUF;
# 959 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _RTMP_DMACB
{
 unsigned long AllocSize;
 PVOID AllocVa;
 NDIS_PHYSICAL_ADDRESS AllocPa;
 PNDIS_PACKET pNdisPacket;
 PNDIS_PACKET pNextNdisPacket;

 RTMP_DMABUF DmaBuf;



} RTMP_DMACB, *PRTMP_DMACB;

typedef struct _RTMP_TX_BUF
{
 PQUEUE_ENTRY Next;
 unsigned char Index;
 unsigned long AllocSize;
 PVOID AllocVa;
 NDIS_PHYSICAL_ADDRESS AllocPa;
} RTMP_TXBUF, *PRTMP_TXBUF;

typedef struct _RTMP_RX_BUF
{
 unsigned char InUse;
 unsigned long ByBaRecIndex;
 RTMP_REORDERBUF MAP_RXBuf[64];
} RTMP_RXBUF, *PRTMP_RXBUF;
typedef struct _RTMP_TX_RING
{
 RTMP_DMACB Cell[64];
 UINT32 TxCpuIdx;
 UINT32 TxDmaIdx;
 UINT32 TxSwFreeIdx;
} RTMP_TX_RING, *PRTMP_TX_RING;

typedef struct _RTMP_RX_RING
{
 RTMP_DMACB Cell[128];
 UINT32 RxCpuIdx;
 UINT32 RxDmaIdx;
 INT32 RxSwReadIdx;
} RTMP_RX_RING, *PRTMP_RX_RING;

typedef struct _RTMP_MGMT_RING
{
 RTMP_DMACB Cell[128];
 UINT32 TxCpuIdx;
 UINT32 TxDmaIdx;
 UINT32 TxSwFreeIdx;
} RTMP_MGMT_RING, *PRTMP_MGMT_RING;




typedef struct _COUNTER_802_3
{

 unsigned long GoodTransmits;
 unsigned long GoodReceives;
 unsigned long TxErrors;
 unsigned long RxErrors;
 unsigned long RxNoBuffer;


 unsigned long RcvAlignmentErrors;
 unsigned long OneCollision;
 unsigned long MoreCollisions;

} COUNTER_802_3, *PCOUNTER_802_3;

typedef struct _COUNTER_802_11 {
 unsigned long Length;
 LARGE_INTEGER LastTransmittedFragmentCount;
 LARGE_INTEGER TransmittedFragmentCount;
 LARGE_INTEGER MulticastTransmittedFrameCount;
 LARGE_INTEGER FailedCount;
 LARGE_INTEGER RetryCount;
 LARGE_INTEGER MultipleRetryCount;
 LARGE_INTEGER RTSSuccessCount;
 LARGE_INTEGER RTSFailureCount;
 LARGE_INTEGER ACKFailureCount;
 LARGE_INTEGER FrameDuplicateCount;
 LARGE_INTEGER ReceivedFragmentCount;
 LARGE_INTEGER MulticastReceivedFrameCount;
 LARGE_INTEGER FCSErrorCount;
} COUNTER_802_11, *PCOUNTER_802_11;

typedef struct _COUNTER_RALINK {
 unsigned long TransmittedByteCount;
 unsigned long ReceivedByteCount;
 unsigned long BeenDisassociatedCount;
 unsigned long BadCQIAutoRecoveryCount;
 unsigned long PoorCQIRoamingCount;
 unsigned long MgmtRingFullCount;
 unsigned long RxCount;
 unsigned long RxRingErrCount;
 unsigned long KickTxCount;
 unsigned long TxRingErrCount;
 LARGE_INTEGER RealFcsErrCount;
 unsigned long PendingNdisPacketCount;

 unsigned long OneSecOsTxCount[5];
 unsigned long OneSecDmaDoneCount[5];
 UINT32 OneSecTxDoneCount;
 unsigned long OneSecRxCount;
 UINT32 OneSecTxAggregationCount;
 UINT32 OneSecRxAggregationCount;

 UINT32 OneSecFrameDuplicateCount;
 UINT32 OneSecTxNoRetryOkCount;
 UINT32 OneSecTxRetryOkCount;
 UINT32 OneSecTxFailCount;
 UINT32 OneSecFalseCCACnt;
 UINT32 OneSecRxOkCnt;
 UINT32 OneSecRxOkDataCnt;
 UINT32 OneSecRxFcsErrCnt;
 UINT32 OneSecBeaconSentCnt;
 UINT32 LastOneSecTotalTxCount;
 UINT32 LastOneSecRxOkDataCnt;
 unsigned long DuplicateRcv;
 unsigned long TxAggCount;
 unsigned long TxNonAggCount;
 unsigned long TxAgg1MPDUCount;
 unsigned long TxAgg2MPDUCount;
 unsigned long TxAgg3MPDUCount;
 unsigned long TxAgg4MPDUCount;
 unsigned long TxAgg5MPDUCount;
 unsigned long TxAgg6MPDUCount;
 unsigned long TxAgg7MPDUCount;
 unsigned long TxAgg8MPDUCount;
 unsigned long TxAgg9MPDUCount;
 unsigned long TxAgg10MPDUCount;
 unsigned long TxAgg11MPDUCount;
 unsigned long TxAgg12MPDUCount;
 unsigned long TxAgg13MPDUCount;
 unsigned long TxAgg14MPDUCount;
 unsigned long TxAgg15MPDUCount;
 unsigned long TxAgg16MPDUCount;

 LARGE_INTEGER TransmittedOctetsInAMSDU;
 LARGE_INTEGER TransmittedAMSDUCount;
 LARGE_INTEGER ReceivedOctesInAMSDUCount;
 LARGE_INTEGER ReceivedAMSDUCount;
 LARGE_INTEGER TransmittedAMPDUCount;
 LARGE_INTEGER TransmittedMPDUsInAMPDUCount;
 LARGE_INTEGER TransmittedOctetsInAMPDUCount;
 LARGE_INTEGER MPDUInReceivedAMPDUCount;
} COUNTER_RALINK, *PCOUNTER_RALINK;

typedef struct _PID_COUNTER {
 unsigned long TxAckRequiredCount;
 unsigned long TxAggreCount;
 unsigned long TxSuccessCount;
 unsigned long LastSuccessRate;
} PID_COUNTER, *PPID_COUNTER;

typedef struct _COUNTER_DRS {

 unsigned short TxQuality[32];
 unsigned char PER[32];
 unsigned char TxRateUpPenalty;
 unsigned long CurrTxRateStableTime;
 unsigned char fNoisyEnvironment;
 unsigned char fLastSecAccordingRSSI;
 unsigned char LastSecTxRateChangeAction;
 unsigned char LastTimeTxRateChangeAction;
 unsigned long LastTxOkCount;
} COUNTER_DRS, *PCOUNTER_DRS;





typedef struct _ARCFOUR
{
 unsigned int X;
 unsigned int Y;
 unsigned char STATE[256];
} ARCFOURCONTEXT, *PARCFOURCONTEXT;


typedef union _HTTRANSMIT_SETTING {
# 1153 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 struct {
 unsigned short MCS:7;
 unsigned short BW:1;
 unsigned short ShortGI:1;
 unsigned short STBC:2;
 unsigned short rsv:3;
 unsigned short MODE:2;
 } field;

 unsigned short word;
 } HTTRANSMIT_SETTING, *PHTTRANSMIT_SETTING;



typedef struct _RECEIVE_SETTING {
# 1177 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 unsigned short NumOfRX:2;
 unsigned short Mode:2;
 unsigned short ShortGI:1;
 unsigned short STBC:2;
 unsigned short rsv:3;
 unsigned short OFDM:1;
 unsigned short MIMO:1;

 } RECEIVE_SETTING, *PRECEIVE_SETTING;


typedef struct _WEP_KEY {
 unsigned char KeyLen;
 unsigned char Key[32];
} WEP_KEY, *PWEP_KEY;

typedef struct _CIPHER_KEY {
 unsigned char Key[16];
 unsigned char RxMic[8];
 unsigned char TxMic[8];
 unsigned char TxTsc[6];
 unsigned char RxTsc[6];
 unsigned char CipherAlg;
 unsigned char KeyLen;

 unsigned char BssId[6];


 unsigned char Type;
} CIPHER_KEY, *PCIPHER_KEY;

typedef struct _BBP_TUNING_STRUCT {
 unsigned char Enable;
 unsigned char FalseCcaCountUpperBound;
 unsigned char FalseCcaCountLowerBound;
 unsigned char R17LowerBound;
 unsigned char R17UpperBound;
 unsigned char CurrentR17Value;
} BBP_TUNING, *PBBP_TUNING;

typedef struct _SOFT_RX_ANT_DIVERSITY_STRUCT {
 unsigned char EvaluatePeriod;
 unsigned char Pair1PrimaryRxAnt;
 unsigned char Pair1SecondaryRxAnt;
 unsigned char Pair2PrimaryRxAnt;
 unsigned char Pair2SecondaryRxAnt;
 signed short Pair1AvgRssi[2];
 signed short Pair2AvgRssi[2];
 signed short Pair1LastAvgRssi;
 signed short Pair2LastAvgRssi;
 unsigned long RcvPktNumWhenEvaluate;
 unsigned char FirstPktArrivedWhenEvaluate;
 RALINK_TIMER_STRUCT RxAntDiversityTimer;
} SOFT_RX_ANT_DIVERSITY, *PSOFT_RX_ANT_DIVERSITY;

typedef struct _LEAP_AUTH_INFO {
 unsigned char Enabled;
 unsigned char CCKM;
 unsigned char Reserve[2];
 unsigned char UserName[256];
 unsigned long UserNameLen;
 unsigned char Password[256];
 unsigned long PasswordLen;
} LEAP_AUTH_INFO, *PLEAP_AUTH_INFO;

typedef struct {
 unsigned char Addr[6];
 unsigned char ErrorCode[2];



 unsigned char Reported;
} ROGUEAP_ENTRY, *PROGUEAP_ENTRY;

typedef struct {
 unsigned char RogueApNr;
 ROGUEAP_ENTRY RogueApEntry[64];
} ROGUEAP_TABLE, *PROGUEAP_TABLE;

typedef struct {
 unsigned char Enable;
 unsigned char Delta;
 unsigned char PlusSign;
} CCK_TX_POWER_CALIBRATE, *PCCK_TX_POWER_CALIBRATE;




typedef struct _TUPLE_CACHE {
 unsigned char Valid;
 unsigned char MacAddress[6];
 unsigned short Sequence;
 unsigned short Frag;
} TUPLE_CACHE, *PTUPLE_CACHE;




typedef struct _FRAGMENT_FRAME {
 PNDIS_PACKET pFragPacket;
 unsigned long RxSize;
 unsigned short Sequence;
 unsigned short LastFrag;
 unsigned long Flags;
} FRAGMENT_FRAME, *PFRAGMENT_FRAME;





typedef struct _PACKET_INFO {
 unsigned int PhysicalBufferCount;
 unsigned int BufferCount ;
 unsigned int TotalPacketLength ;
 PNDIS_BUFFER pFirstBuffer;
} PACKET_INFO, *PPACKET_INFO;




typedef struct _TKIP_KEY_INFO {
 unsigned int nBytesInM;
 unsigned long IV16;
 unsigned long IV32;
 unsigned long K0;
 unsigned long K1;
 unsigned long L;
 unsigned long R;
 unsigned long M;
 unsigned char RC4KEY[16];
 unsigned char MIC[8];
} TKIP_KEY_INFO, *PTKIP_KEY_INFO;




typedef struct __PRIVATE_STRUC {
 unsigned int SystemResetCnt;
 unsigned int TxRingFullCnt;
 unsigned int PhyRxErrCnt;

 unsigned int FCSCRC32;
 ARCFOURCONTEXT WEPCONTEXT;

 TKIP_KEY_INFO Tx;
 TKIP_KEY_INFO Rx;
} PRIVATE_STRUC, *PPRIVATE_STRUC;


typedef struct _BBP_R66_TUNING {
 unsigned char bEnable;
 unsigned short FalseCcaLowerThreshold;
 unsigned short FalseCcaUpperThreshold;
 unsigned char R66Delta;
 unsigned char R66CurrentValue;
 unsigned char R66LowerUpperSelect;
} BBP_R66_TUNING, *PBBP_R66_TUNING;


typedef struct _CHANNEL_TX_POWER {
 unsigned short RemainingTimeForUse;
 unsigned char Channel;
 signed char Power;
 signed char Power2;
 unsigned char MaxTxPwr;
 unsigned char DfsReq;
} CHANNEL_TX_POWER, *PCHANNEL_TX_POWER;


typedef struct _CHANNEL_11J_TX_POWER {
 unsigned char Channel;
 unsigned char BW;
 signed char Power;
 signed char Power2;
 unsigned short RemainingTimeForUse;
} CHANNEL_11J_TX_POWER, *PCHANNEL_11J_TX_POWER;

typedef enum _ABGBAND_STATE_ {
 UNKNOWN_BAND,
 BG_BAND,
 A_BAND,
} ABGBAND_STATE;

typedef struct _MLME_STRUCT {


 STATE_MACHINE CntlMachine;
 STATE_MACHINE AssocMachine;
 STATE_MACHINE AuthMachine;
 STATE_MACHINE AuthRspMachine;
 STATE_MACHINE SyncMachine;
 STATE_MACHINE WpaPskMachine;
 STATE_MACHINE LeapMachine;
 STATE_MACHINE AironetMachine;
 STATE_MACHINE_FUNC AssocFunc[(4 * 11)];
 STATE_MACHINE_FUNC AuthFunc[(3 * 3)];
 STATE_MACHINE_FUNC AuthRspFunc[(2 * 3)];
 STATE_MACHINE_FUNC SyncFunc[(3 * 10)];
 STATE_MACHINE_FUNC WpaPskFunc[(1 * 5)];
 STATE_MACHINE_FUNC AironetFunc[(2 * 3)];

 STATE_MACHINE_FUNC ActFunc[(1 * 14)];

 STATE_MACHINE ActMachine;



 unsigned long ChannelQuality;
 unsigned long Now32;

 unsigned char bRunning;
 NDIS_SPIN_LOCK TaskLock;
 MLME_QUEUE Queue;

 unsigned int ShiftReg;

 RALINK_TIMER_STRUCT PeriodicTimer;
 RALINK_TIMER_STRUCT APSDPeriodicTimer;
 RALINK_TIMER_STRUCT LinkDownTimer;
 RALINK_TIMER_STRUCT LinkUpTimer;

    unsigned char bPsPollTimerRunning;
    RALINK_TIMER_STRUCT PsPollTimer;
 RALINK_TIMER_STRUCT RadioOnOffTimer;

 unsigned long PeriodicRound;
 unsigned long OneSecPeriodicRound;

 unsigned char RealRxPath;
 unsigned char bLowThroughput;
 unsigned char bEnableAutoAntennaCheck;
 RALINK_TIMER_STRUCT RxAntEvalTimer;
} MLME_STRUCT, *PMLME_STRUCT;


typedef struct _RADAR_DETECT_STRUCT {
 unsigned char CSCount;
 unsigned char CSPeriod;
 unsigned char RDCount;
 unsigned char RDMode;
 unsigned char RDDurRegion;
 unsigned char BBPR16;
 unsigned char BBPR17;
 unsigned char BBPR18;
 unsigned char BBPR21;
 unsigned char BBPR22;
 unsigned char BBPR64;
 unsigned long InServiceMonitorCount;
 UINT8 DfsSessionTime;
 unsigned char bFastDfs;
 UINT8 ChMovingTime;
 UINT8 LongPulseRadarTh;
} RADAR_DETECT_STRUCT, *PRADAR_DETECT_STRUCT;
# 1448 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef enum _REC_BLOCKACK_STATUS
{
    Recipient_NONE=0,
 Recipient_USED,
 Recipient_HandleRes,
    Recipient_Accept
} REC_BLOCKACK_STATUS, *PREC_BLOCKACK_STATUS;

typedef enum _ORI_BLOCKACK_STATUS
{
    Originator_NONE=0,
 Originator_USED,
    Originator_WaitRes,
    Originator_Done
} ORI_BLOCKACK_STATUS, *PORI_BLOCKACK_STATUS;


typedef struct _BA_ORI_ENTRY{
 unsigned char Wcid;
 unsigned char TID;
 unsigned char BAWinSize;
 unsigned char Token;

 unsigned short Sequence;
 unsigned short TimeOutValue;
 ORI_BLOCKACK_STATUS ORI_BA_Status;
 RALINK_TIMER_STRUCT ORIBATimer;
 PVOID pAdapter;
} BA_ORI_ENTRY, *PBA_ORI_ENTRY;

typedef struct _BA_REC_ENTRY {
 unsigned char Wcid;
 unsigned char TID;
 unsigned char BAWinSize;
 unsigned short LastIndSeq;
 unsigned short TimeOutValue;
 RALINK_TIMER_STRUCT RECBATimer;
 unsigned long LastIndSeqAtTimer;
 unsigned long nDropPacket;
 unsigned long rcvSeq;
 REC_BLOCKACK_STATUS REC_BA_Status;
 NDIS_SPIN_LOCK RxReRingLock;
 PVOID pAdapter;
 struct reordering_list list;
} BA_REC_ENTRY, *PBA_REC_ENTRY;


typedef struct {
 unsigned long numAsRecipient;
 unsigned long numAsOriginator;
 BA_ORI_ENTRY BAOriEntry[((8 * 32)/2)];
 BA_REC_ENTRY BARecEntry[((8 * 32)/2)];
} BA_TABLE, *PBA_TABLE;


typedef struct __attribute__ ((packed)) _OID_BA_REC_ENTRY{
 unsigned char MACAddr[6];
 unsigned char BaBitmap;
 unsigned char rsv;
 unsigned char BufSize[8];
 REC_BLOCKACK_STATUS REC_BA_Status[8];
} OID_BA_REC_ENTRY, *POID_BA_REC_ENTRY;


typedef struct __attribute__ ((packed)) _OID_BA_ORI_ENTRY{
 unsigned char MACAddr[6];
 unsigned char BaBitmap;
 unsigned char rsv;
 unsigned char BufSize[8];
 ORI_BLOCKACK_STATUS ORI_BA_Status[8];
} OID_BA_ORI_ENTRY, *POID_BA_ORI_ENTRY;

typedef struct _QUERYBA_TABLE{
 OID_BA_ORI_ENTRY BAOriEntry[32];
 OID_BA_REC_ENTRY BARecEntry[32];
 unsigned char OriNum;
 unsigned char RecNum;
} QUERYBA_TABLE, *PQUERYBA_TABLE;

typedef union _BACAP_STRUC {
# 1541 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 struct {
  UINT32 RxBAWinLimit:8;
  UINT32 TxBAWinLimit:8;
  UINT32 AutoBA:1;
  UINT32 Policy:2;
  UINT32 MpduDensity:3;
  UINT32 AmsduEnable:1;
  UINT32 AmsduSize:1;
  UINT32 MMPSmode:2;
  UINT32 :6;
 } field;

 UINT32 word;
} BACAP_STRUC, *PBACAP_STRUC;


typedef struct _IOT_STRUC {
 unsigned char Threshold[2];
 unsigned char ReorderTimeOutNum[((8 * 32)/2)];
 unsigned char RefreshNum[((8 * 32)/2)];
 unsigned long OneSecInWindowCount;
 unsigned long OneSecFrameDuplicateCount;
 unsigned long OneSecOutWindowCount;
 unsigned char DelOriAct;
 unsigned char DelRecAct;
 unsigned char RTSShortProt;
 unsigned char RTSLongProt;
 unsigned char bRTSLongProtOn;

 unsigned char bLastAtheros;
    unsigned char bCurrentAtheros;
    unsigned char bNowAtherosBurstOn;
 unsigned char bNextDisableRxBA;
    unsigned char bToggle;

} IOT_STRUC, *PIOT_STRUC;


typedef union _REG_TRANSMIT_SETTING {
# 1592 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 struct {
   UINT32 rsv0:11;
         UINT32 BW:1;
         UINT32 ShortGI:1;
         UINT32 STBC:1;
         UINT32 TRANSNO:2;
         UINT32 HTMODE:1;
         UINT32 EXTCHA:2;
         UINT32 rsv:13;
    } field;

 UINT32 word;
} REG_TRANSMIT_SETTING, *PREG_TRANSMIT_SETTING;

typedef union _DESIRED_TRANSMIT_SETTING {
# 1615 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 struct {
   unsigned short MCS:7;
   unsigned short PhyMode:4;
   unsigned short FixedTxMode:2;
   unsigned short rsv:3;
 } field;

 unsigned short word;
 } DESIRED_TRANSMIT_SETTING, *PDESIRED_TRANSMIT_SETTING;




typedef struct _OID_BACAP_STRUC {
  unsigned char RxBAWinLimit;
  unsigned char TxBAWinLimit;
  unsigned char Policy;
  unsigned char MpduDensity;
  unsigned char AmsduEnable;
  unsigned char AmsduSize;
  unsigned char MMPSmode;
  unsigned char AutoBA;
} OID_BACAP_STRUC, *POID_BACAP_STRUC;




typedef struct {
 RT_802_11_PHY_MODE PhyMode;
 unsigned char TransmitNo;
 unsigned char HtMode;
 unsigned char ExtOffset;
 unsigned char MCS;
 unsigned char BW;
 unsigned char STBC;
 unsigned char SHORTGI;
 unsigned char rsv;
} OID_SET_HT_PHYMODE, *POID_SET_HT_PHYMODE;

typedef struct {
 unsigned char IsRecipient;
 unsigned char MACAddr[6];
 unsigned char TID;
 unsigned char nMSDU;
 unsigned short TimeOut;
 unsigned char bAllTid;
} OID_ADD_BA_ENTRY, *POID_ADD_BA_ENTRY;
# 1689 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _MULTISSID_STRUCT {
 unsigned char Bssid[6];
    unsigned char SsidLen;
    signed char Ssid[32];
    unsigned short CapabilityInfo;

    PNET_DEV MSSIDDev;

 NDIS_802_11_AUTHENTICATION_MODE AuthMode;
 NDIS_802_11_WEP_STATUS WepStatus;
 NDIS_802_11_WEP_STATUS GroupKeyWepStatus;

 unsigned long TxCount;
 unsigned long RxCount;
 unsigned long ReceivedByteCount;
 unsigned long TransmittedByteCount;
 unsigned long RxErrorCount;
 unsigned long RxDropCount;

 HTTRANSMIT_SETTING HTPhyMode, MaxHTPhyMode, MinHTPhyMode;
 DESIRED_TRANSMIT_SETTING DesiredTransmitSetting;
 RT_HT_PHY_INFO DesiredHtPhyInfo;
 unsigned char bAutoTxRateSwitch;

 unsigned char DefaultKeyId;

 unsigned char TxRate;
 unsigned char DesiredRates[12];
 unsigned char DesiredRatesIndex;
 unsigned char MaxTxRate;

 unsigned char TimBitmaps[((32 >> 3) + 1)];


    unsigned char GMK[32];
    unsigned char PMK[32];
 unsigned char GTK[32];
    unsigned char IEEE8021X;
    unsigned char PreAuth;
    unsigned char GNonce[32];
    unsigned char PortSecured;
    NDIS_802_11_PRIVACY_FILTER PrivacyFilter;
    unsigned char BANClass3Data;
    unsigned long IsolateInterStaTraffic;

    unsigned char RSNIE_Len[2];
    unsigned char RSN_IE[2][90];

    unsigned char TimIELocationInBeacon;
    unsigned char CapabilityInfoLocationInBeacon;

    signed char BeaconBuf[512];

    unsigned char bHideSsid;
 UINT16 StationKeepAliveTime;

    unsigned short VLAN_VID;
    unsigned short VLAN_Priority;

    RT_802_11_ACL AccessControlList;


    unsigned char bWmmCapable;
    unsigned char bDLSCapable;

 unsigned char DlsPTK[64];


 unsigned char radius_srv_num;
 RADIUS_SRV_INFO radius_srv_info[2];






 UINT32 RcvdConflictSsidCount;
 UINT32 RcvdSpoofedAssocRespCount;
 UINT32 RcvdSpoofedReassocRespCount;
 UINT32 RcvdSpoofedProbeRespCount;
 UINT32 RcvdSpoofedBeaconCount;
 UINT32 RcvdSpoofedDisassocCount;
 UINT32 RcvdSpoofedAuthCount;
 UINT32 RcvdSpoofedDeauthCount;
 UINT32 RcvdSpoofedUnknownMgmtCount;
 UINT32 RcvdReplayAttackCount;

 signed char RssiOfRcvdConflictSsid;
 signed char RssiOfRcvdSpoofedAssocResp;
 signed char RssiOfRcvdSpoofedReassocResp;
 signed char RssiOfRcvdSpoofedProbeResp;
 signed char RssiOfRcvdSpoofedBeacon;
 signed char RssiOfRcvdSpoofedDisassoc;
 signed char RssiOfRcvdSpoofedAuth;
 signed char RssiOfRcvdSpoofedDeauth;
 signed char RssiOfRcvdSpoofedUnknownMgmt;
 signed char RssiOfRcvdReplayAttack;

} MULTISSID_STRUCT, *PMULTISSID_STRUCT;



typedef struct _COMMON_CONFIG {

 unsigned char bCountryFlag;
 unsigned char CountryCode[3];
 unsigned char Geography;
 unsigned char CountryRegion;
 unsigned char CountryRegionForABand;
 unsigned char PhyMode;
 unsigned short Dsifs;
 unsigned long PacketFilter;

 signed char Ssid[32];
 unsigned char SsidLen;
 unsigned char LastSsidLen;
 signed char LastSsid[32];
 unsigned char LastBssid[6];

 unsigned char Bssid[6];
 unsigned short BeaconPeriod;
 unsigned char Channel;
 unsigned char CentralChannel;

 unsigned char SupRate[12];
 unsigned char SupRateLen;
 unsigned char ExtRate[12];
 unsigned char ExtRateLen;
 unsigned char DesireRate[12];
 unsigned char MaxDesiredRate;
 unsigned char ExpectedACKRate[12];

 unsigned long BasicRateBitmap;

 unsigned char bAPSDCapable;
 unsigned char bInServicePeriod;
 unsigned char bAPSDAC_BE;
 unsigned char bAPSDAC_BK;
 unsigned char bAPSDAC_VI;
 unsigned char bAPSDAC_VO;
 unsigned char bNeedSendTriggerFrame;
 unsigned char bAPSDForcePowerSave;
 unsigned long TriggerTimerCount;
 unsigned char MaxSPLength;
 unsigned char BBPCurrentBW;
 REG_TRANSMIT_SETTING RegTransmitSetting;
 unsigned char TxRate;
 unsigned char MaxTxRate;
 unsigned char TxRateIndex;
 unsigned char TxRateTableSize;
 unsigned char MinTxRate;
 unsigned char RtsRate;
 HTTRANSMIT_SETTING MlmeTransmit;
 unsigned char MlmeRate;
 unsigned char BasicMlmeRate;

 unsigned short RtsThreshold;
 unsigned short FragmentThreshold;

 unsigned char TxPower;
 unsigned long TxPowerPercentage;
 unsigned long TxPowerDefault;

 BACAP_STRUC BACapability;
 BACAP_STRUC REGBACapability;
 IOT_STRUC IOTestParm;
 unsigned long TxPreamble;
 unsigned char bUseZeroToDisableFragment;
 unsigned long UseBGProtection;
 unsigned char bUseShortSlotTime;
 unsigned char bEnableTxBurst;
 unsigned char bAggregationCapable;
 unsigned char bPiggyBackCapable;
 unsigned char bIEEE80211H;
 unsigned long DisableOLBCDetect;

 unsigned char bRdg;
 unsigned char bWmmCapable;
 QOS_CAPABILITY_PARM APQosCapability;
 EDCA_PARM APEdcaParm;
 QBSS_LOAD_PARM APQbssLoad;
 unsigned char AckPolicy[4];

 unsigned char bDLSCapable;





 unsigned long OpStatusFlags;

 unsigned char NdisRadioStateOff;
 ABGBAND_STATE BandState;


 RADAR_DETECT_STRUCT RadarDetect;



 unsigned char BASize;
 RT_HT_CAPABILITY DesiredHtPhy;
 HT_CAPABILITY_IE HtCapability;
 ADD_HT_INFO_IE AddHTInfo;


 NEW_EXT_CHAN_IE NewExtChanOffset;
    unsigned char bHTProtect;
    unsigned char bMIMOPSEnable;
    unsigned char bBADecline;
 unsigned char bDisableReordering;
 unsigned char bForty_Mhz_Intolerant;
 unsigned char bExtChannelSwitchAnnouncement;
 unsigned char bRcvBSSWidthTriggerEvents;
 unsigned long LastRcvBSSWidthTriggerEventsTime;


 unsigned char bWirelessEvent;
 unsigned char TxBASize;
 unsigned char bWiFiTest;


 unsigned char TxStream;
 unsigned char RxStream;







 unsigned char bHardwareRadio;
} COMMON_CONFIG, *PCOMMON_CONFIG;





typedef struct _STA_ADMIN_CONFIG {






 unsigned char BssType;
 unsigned short AtimWin;






 unsigned char RssiTrigger;
 unsigned char RssiTriggerMode;
 unsigned short DefaultListenCount;
 unsigned long WindowsPowerMode;
 unsigned long WindowsBatteryPowerMode;
 unsigned char bWindowsACCAMEnable;
 unsigned char bAutoReconnect;
 unsigned long WindowsPowerProfile;


 unsigned short Psm;
 unsigned short DisassocReason;
 unsigned char DisassocSta[6];
 unsigned short DeauthReason;
 unsigned char DeauthSta[6];
 unsigned short AuthFailReason;
 unsigned char AuthFailSta[6];

 NDIS_802_11_PRIVACY_FILTER PrivacyFilter;
 NDIS_802_11_AUTHENTICATION_MODE AuthMode;
 NDIS_802_11_WEP_STATUS WepStatus;
 NDIS_802_11_WEP_STATUS OrigWepStatus;


 NDIS_802_11_ENCRYPTION_STATUS GroupCipher;
 NDIS_802_11_ENCRYPTION_STATUS PairCipher;
 unsigned char bMixCipher;
 unsigned short RsnCapability;

 NDIS_802_11_WEP_STATUS GroupKeyWepStatus;

 unsigned char PMK[32];
 unsigned char PTK[64];
 unsigned char GTK[32];
 BSSID_INFO SavedPMK[4];
 unsigned int SavedPMKNum;

 unsigned char DefaultKeyId;


 unsigned char PortSecured;


 unsigned long LastMicErrorTime;
 unsigned long MicErrCnt;
 unsigned char bBlockAssoc;

 WPA_STATE WpaState;
 unsigned char ReplayCounter[8];
 unsigned char ANonce[32];
 unsigned char SNonce[32];

 unsigned char LastSNR0;
 unsigned char LastSNR1;
 RSSI_SAMPLE RssiSample;
 unsigned long NumOfAvgRssiSample;

 unsigned long LastBeaconRxTime;
 unsigned long Last11bBeaconRxTime;
 unsigned long LastScanTime;
 unsigned long ScanCnt;
 unsigned char bSwRadio;
 unsigned char bHwRadio;
 unsigned char bRadio;
 unsigned char bHardwareRadio;
 unsigned char bShowHiddenSSID;

    unsigned char AdhocBOnlyJoined;



 NDIS_802_11_ASSOCIATION_INFORMATION AssocInfo;
 unsigned short ReqVarIELen;
 unsigned char ReqVarIEs[1024];
 unsigned short ResVarIELen;
 unsigned char ResVarIEs[1024];

 unsigned char RSNIE_Len;
 unsigned char RSN_IE[90];

 unsigned long AdhocMode;


 unsigned char bCkipOn;
 unsigned char bCkipCmicOn;
 unsigned char CkipFlag;
 unsigned char GIV[3];
 unsigned char RxSEQ[4];
 unsigned char TxSEQ[4];
 unsigned char CKIPMIC[4];
 unsigned char LeapAuthMode;
 LEAP_AUTH_INFO LeapAuthInfo;
 unsigned char HashPwd[16];
 unsigned char NetworkChallenge[8];
 unsigned char NetworkChallengeResponse[24];
 unsigned char PeerChallenge[8];

 unsigned char PeerChallengeResponse[24];
 unsigned char SessionKey[16];
 RALINK_TIMER_STRUCT LeapAuthTimer;
 ROGUEAP_TABLE RogueApTab;


 CCX_CONTROL CCXControl;
 unsigned char CCXEnable;
 unsigned char CCXScanChannel;
 unsigned short CCXScanTime;
 unsigned char CCXReqType;
 BSS_TABLE CCXBssTab;
 unsigned char FrameReportBuf[2048];
 unsigned short FrameReportLen;
 unsigned long CLBusyBytes;
 unsigned short RPIDensity[8];


 unsigned short BssReportOffset[64];
 unsigned short BeaconToken;
 unsigned long LastBssIndex;
 RM_REQUEST_ACTION MeasurementRequest[16];
 unsigned char RMReqCnt;
 unsigned char CurrentRMReqIdx;
 unsigned char ParallelReq;

 unsigned short ParallelDuration;
 unsigned char ParallelChannel;
 unsigned short IAPPToken;
 unsigned char CCXQosECWMin;
 unsigned char CCXQosECWMax;

 unsigned char NHFactor;
 unsigned char CLFactor;

 unsigned char KRK[16];
 unsigned char BTK[32];
 unsigned char CCKMLinkUpFlag;
 unsigned long CCKMRN;
 LARGE_INTEGER CCKMBeaconAtJoinTimeStamp;
 unsigned char AironetCellPowerLimit;
 unsigned char AironetIPAddress[4];
 unsigned char CCXAdjacentAPReportFlag;
 signed char CCXAdjacentAPSsid[32];
 unsigned char CCXAdjacentAPSsidLen;
 unsigned char CCXAdjacentAPBssid[6];
 unsigned short CCXAdjacentAPChannel;
 unsigned long CCXAdjacentAPLinkDownTime;

 RALINK_TIMER_STRUCT StaQuickResponeForRateUpTimer;
 unsigned char StaQuickResponeForRateUpTimerRunning;

 unsigned char DtimCount;
 unsigned char DtimPeriod;

 RT_802_11_DLS DLSEntry[4];


 unsigned char WhqlTest;


    RALINK_TIMER_STRUCT WpaDisassocAndBlockAssocTimer;

 unsigned char bFastRoaming;
 signed char dBmToRoam;


    unsigned char IEEE8021X;
    unsigned char IEEE8021x_required_keys;
    CIPHER_KEY DesireSharedKey[4];
    unsigned char DesireSharedKeyId;




    unsigned char WpaSupplicantUP;


    signed char dev_name[16];
    unsigned short OriDevType;

    unsigned char bTGnWifiTest;
 unsigned char bScanReqIsFromWebUI;

 HTTRANSMIT_SETTING HTPhyMode, MaxHTPhyMode, MinHTPhyMode;
 DESIRED_TRANSMIT_SETTING DesiredTransmitSetting;
 RT_HT_PHY_INFO DesiredHtPhyInfo;
 unsigned char bAutoTxRateSwitch;
} STA_ADMIN_CONFIG, *PSTA_ADMIN_CONFIG;







typedef struct _STA_ACTIVE_CONFIG {
 unsigned short Aid;
 unsigned short AtimWin;
 unsigned short CapabilityInfo;
 unsigned short CfpMaxDuration;
 unsigned short CfpPeriod;



 unsigned char SupRate[12];
 unsigned char ExtRate[12];
 unsigned char SupRateLen;
 unsigned char ExtRateLen;

    unsigned char BBPR3;


 RT_HT_PHY_INFO SupportedPhyInfo;
 RT_HT_CAPABILITY SupportedHtPhy;
} STA_ACTIVE_CONFIG, *PSTA_ACTIVE_CONFIG;




typedef struct _AP_MLME_AUX {
 unsigned char Addr[6];
 unsigned short Alg;
 signed char Challenge[128];
} AP_MLME_AUX, *PAP_MLME_AUX;


typedef struct __attribute__ ((packed)) _RT_802_11_WPA_REKEY {
 unsigned long ReKeyMethod;
 unsigned long ReKeyInterval;
} RT_WPA_REKEY,*PRT_WPA_REKEY, RT_802_11_WPA_REKEY, *PRT_802_11_WPA_REKEY;

typedef struct _MAC_TABLE_ENTRY {

 unsigned char ValidAsCLI;
 unsigned char ValidAsWDS;
 unsigned char ValidAsApCli;
 unsigned char bIAmBadAtheros;

 unsigned char EnqueueStartForPSKTimerRunning;


 unsigned char CMTimerRunning;
 unsigned char apidx;
 unsigned char RSNIE_Len;
 unsigned char RSN_IE[90];
 unsigned char ANonce[32];
 unsigned char R_Counter[8];
 unsigned char PTK[64];
 unsigned char ReTryCounter;
 RALINK_TIMER_STRUCT RetryTimer;
 RALINK_TIMER_STRUCT EnqueueStartForPSKTimer;
 NDIS_802_11_AUTHENTICATION_MODE AuthMode;
 NDIS_802_11_WEP_STATUS WepStatus;
 AP_WPA_STATE WpaState;
 GTK_STATE GTKState;
 unsigned short PortSecured;
 NDIS_802_11_PRIVACY_FILTER PrivacyFilter;
 CIPHER_KEY PairwiseKey;
 PVOID pAd;
    signed int PMKID_CacheIdx;
    unsigned char PMKID[16];

 unsigned char Addr[6];
 unsigned char PsMode;
 SST Sst;
 AUTH_STATE AuthState;
 unsigned short Aid;
 unsigned short CapabilityInfo;
 unsigned char LastRssi;
 unsigned long NoDataIdleCount;
 UINT16 StationKeepAliveCount;
 unsigned long PsQIdleCount;
 QUEUE_HEADER PsQueue;



 unsigned char bSendBAR;
 unsigned short NoBADataCountDown;

 unsigned char isCached;
 UINT32 CachedBuf[16];
 unsigned int FIFOCount;
 unsigned int DebugFIFOCount;
 unsigned int DebugTxCount;
    unsigned char bDlsInit;





 unsigned int MatchWDSTabIdx;
 unsigned char MaxSupportedRate;
 unsigned char CurrTxRate;
 unsigned char CurrTxRateIndex;

 unsigned short TxQuality[32];
 UINT32 OneSecTxNoRetryOkCount;
 UINT32 OneSecTxRetryOkCount;
 UINT32 OneSecTxFailCount;
 UINT32 CurrTxRateStableTime;
 unsigned char TxRateUpPenalty;



 unsigned char fNoisyEnvironment;
 unsigned char fLastSecAccordingRSSI;
 unsigned char LastSecTxRateChangeAction;
 signed char LastTimeTxRateChangeAction;
 unsigned long LastTxOkCount;
 unsigned char PER[32];





 unsigned long ClientStatusFlags;

 unsigned short RXBAbitmap;
 unsigned short TXBAbitmap;
 unsigned short TXAutoBAbitmap;
 unsigned short BADeclineBitmap;
 unsigned short BARecWcidArray[8];
 unsigned short BAOriWcidArray[8];
 unsigned short BAOriSequence[8];
 HTTRANSMIT_SETTING HTPhyMode, MaxHTPhyMode, MinHTPhyMode;
 unsigned char bAutoTxRateSwitch;

 unsigned char MpduDensity;
 unsigned char MaxRAmpduFactor;


 unsigned char AMsduSize;
 unsigned char MmpsMode;
 unsigned char RateLen;
 HT_CAPABILITY_IE HTCapability;
 struct _MAC_TABLE_ENTRY *pNext;
    unsigned short TxSeq[8];
 unsigned short NonQosDataSeq;

 RSSI_SAMPLE RssiSample;

 UINT32 TXMCSExpected[16];
 UINT32 TXMCSSuccessful[16];
 UINT32 TXMCSFailed[16];
 UINT32 TXMCSAutoFallBack[16][16];
} MAC_TABLE_ENTRY, *PMAC_TABLE_ENTRY;

typedef struct _MAC_TABLE {
 unsigned short Size;
 MAC_TABLE_ENTRY *Hash[256];
 MAC_TABLE_ENTRY Content[32];
 QUEUE_HEADER McastPsQueue;
 unsigned long PsQIdleCount;
 unsigned char fAnyStationInPsm;
 unsigned char fAnyStationIsLegacy;
 unsigned char fAnyStationNonGF;
 unsigned char fAnyStation20Only;
 unsigned char fAnyStationBadAtheros;
 unsigned char fAnyStationMIMOPSDynamic;
 unsigned char fAnyTxOPForceDisable;
 unsigned char fAnyBASession;
} MAC_TABLE, *PMAC_TABLE;
# 2321 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
struct wificonf
{
 unsigned char bShortGI;
 unsigned char bGreenField;
};



typedef struct _INF_PCI_CONFIG
{
 PUCHAR CSRBaseAddress;
}INF_PCI_CONFIG;

typedef struct _INF_USB_CONFIG
{
 unsigned int BulkInEpAddr;
 unsigned int BulkOutEpAddr[6];

}INF_USB_CONFIG;
# 2375 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _RtmpDiagStrcut_
{
 unsigned char inited;
 unsigned char qIdx;
 unsigned char ArrayStartIdx;
 unsigned char ArrayCurIdx;

 unsigned short TxDataCnt[10];
 unsigned short TxFailCnt[10];
 unsigned short TxDescCnt[10][16];
 unsigned short TxMcsCnt[10][16];
 unsigned short TxSWQueCnt[10][9];

 unsigned short TxAggCnt[10];
 unsigned short TxNonAggCnt[10];
 unsigned short TxAMPDUCnt[10][16];
 unsigned short TxRalinkCnt[10];
 unsigned short TxAMSDUCnt[10];


 unsigned short RxDataCnt[10];
 unsigned short RxCrcErrCnt[10];
 unsigned short RxMcsCnt[10][16];
}RtmpDiagStruct;






typedef struct _RTMP_ADAPTER
{

 PVOID OS_Cookie;
 PNET_DEV net_dev;


    unsigned short LnkCtrlBitMask;
    unsigned short RLnkCtrlConfiguration;
    unsigned short RLnkCtrlOffset;
    unsigned short HostLnkCtrlConfiguration;
    unsigned short HostLnkCtrlOffset;
 unsigned short PCIePowerSaveLevel;
    unsigned char bPCIclkOff;
 unsigned char bPCIclkOffCommand;





 PUCHAR CSRBaseAddress;


 unsigned int int_enable_reg;
 unsigned int int_disable_mask;
 unsigned int int_pending;


 RTMP_DMABUF TxBufSpace[5];
 RTMP_DMABUF RxDescRing;
 RTMP_DMABUF TxDescRing[5];
 RTMP_TX_RING TxRing[5];




 NDIS_SPIN_LOCK irq_lock;
 unsigned char irq_disabled;
# 2454 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 unsigned char DeQueueRunning[5];
 NDIS_SPIN_LOCK DeQueueLock[5];



 QUEUE_HEADER TxSwQueue[5];
 NDIS_SPIN_LOCK TxSwQueueLock[5];

 RTMP_DMABUF MgmtDescRing;
 RTMP_MGMT_RING MgmtRing;
 NDIS_SPIN_LOCK MgmtRingLock;






 RTMP_RX_RING RxRing;
 NDIS_SPIN_LOCK RxRingLock;







 UINT32 MACVersion;




 unsigned long EepromVersion;
 unsigned char EEPROMAddressNum;
 unsigned short EEPROMDefaultValue[19];
 unsigned long FirmwareVersion;




 unsigned char BbpWriteLatch[140];
 unsigned char BbpRssiToDbmDelta;
 BBP_R66_TUNING BbpTuning;




 unsigned char RfIcType;
 unsigned long RfFreqOffset;
 RTMP_RF_REGS LatchRfRegs;

 EEPROM_ANTENNA_STRUC Antenna;
 EEPROM_NIC_CONFIG2_STRUC NicConfig2;



 SOFT_RX_ANT_DIVERSITY RxAnt;

 unsigned char RFProgSeq;
 CHANNEL_TX_POWER TxPower[49];
 CHANNEL_TX_POWER ChannelList[49];
 CHANNEL_11J_TX_POWER TxPower11J[20];
 CHANNEL_11J_TX_POWER ChannelList11J[20];

 unsigned char ChannelListNum;
 unsigned char Bbp94;
 unsigned char BbpForCCK;
 unsigned long TxPwrCfg[5];
 unsigned long Tx40MPwrCfgABand[5];
 unsigned long Tx40MPwrCfgGBand[5];

 unsigned char bAutoTxAgcA;
 unsigned char TssiRefA;
 unsigned char TssiPlusBoundaryA[5];
 unsigned char TssiMinusBoundaryA[5];
 unsigned char TxAgcStepA;
 signed char TxAgcCompensateA;

 unsigned char bAutoTxAgcG;
 unsigned char TssiRefG;
 unsigned char TssiPlusBoundaryG[5];
 unsigned char TssiMinusBoundaryG[5];
 unsigned char TxAgcStepG;
 signed char TxAgcCompensateG;


 signed char BGRssiOffset0;
 signed char BGRssiOffset1;
 signed char BGRssiOffset2;



 signed char ARssiOffset0;
 signed char ARssiOffset1;
 signed char ARssiOffset2;


 signed char BLNAGain;
 signed char ALNAGain0;
 signed char ALNAGain1;
 signed char ALNAGain2;




 MCU_LEDCS_STRUC LedCntl;
 unsigned short Led1;
 unsigned short Led2;
 unsigned short Led3;
 unsigned char LedIndicatorStregth;
 unsigned char RssiSingalstrengthOffet;
    unsigned char bLedOnScanning;
 unsigned char LedStatus;





 TXWI_STRUC BeaconTxWI;
 PUCHAR BeaconBuf;
 unsigned short BeaconOffset[8];


 PSPOLL_FRAME PsPollFrame;
 HEADER_802_11 NullFrame;
# 2591 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 STA_ADMIN_CONFIG StaCfg;
 STA_ACTIVE_CONFIG StaActive;
 signed char nickname[32 +1];
 NDIS_MEDIA_STATE PreMediaState;




 unsigned char OpMode;

 NDIS_MEDIA_STATE IndicateMediaState;



 unsigned char bLocalAdminMAC;
 unsigned char PermanentAddress[6];
 unsigned char CurrentAddress[6];




 COMMON_CONFIG CommonCfg;
 MLME_STRUCT Mlme;


 MLME_AUX MlmeAux;
 BSS_TABLE ScanTab;


 MAC_TABLE MacTab;
 NDIS_SPIN_LOCK MacTabLock;

 BA_TABLE BATable;
 NDIS_SPIN_LOCK BATabLock;
 RALINK_TIMER_STRUCT RECBATimer;


 CIPHER_KEY SharedKey[1][4];


 FRAGMENT_FRAME FragFrame;


 COUNTER_802_3 Counters8023;
 COUNTER_802_11 WlanCounters;
 COUNTER_RALINK RalinkCounters;
 COUNTER_DRS DrsCounters;
 PRIVATE_STRUC PrivateInfo;


 unsigned long Flags;


 unsigned short Sequence;
# 2653 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 unsigned long LinkDownTime;

 unsigned long LastRxRate;
 unsigned long LastTxRate;

 unsigned char bConfigChanged;


 unsigned long ExtraInfo;
 unsigned long SystemErrorBitmap;


 unsigned long MacIcVersion;





 RT_802_11_EVENT_TABLE EventTab;






 unsigned char bUpdateBcnCntDone;
 unsigned long watchDogMacDeadlock;



 unsigned char bBanAllBaSetup;
 unsigned char bPromiscuous;




 unsigned long rtsaccu[30];
 unsigned long ctsaccu[30];
 unsigned long cfendaccu[30];
 unsigned long bacontent[16];
 unsigned long rxint[128 +1];
 unsigned char rcvba[60];
 unsigned long MRS;
 unsigned char HTCEnable;
 unsigned char bLinkAdapt;
 unsigned char bForcePrintTX;
 unsigned char bForcePrintRX;
 unsigned char bForceDisableautowake;
 unsigned char bDisablescanning;
 unsigned char bStaFifoTest;
 unsigned char bProtectionTest;
 unsigned char bHCCATest;
 unsigned char bGenOneHCCA;
 unsigned char bBroadComHT;

 unsigned char bDisableResetPipe;
 unsigned char bVenderReset;
 unsigned char bBulkInFail;
 unsigned long BulkOutReq;
 unsigned long BulkOutComplete;
 unsigned long BulkOutCompleteOther;
 unsigned long BulkOutCompleteCancel;
 unsigned long BulkInReq;
 unsigned long BulkInComplete;
 unsigned long BulkInCompleteFail;


    struct wificonf WIFItestbed;





 struct reordering_mpdu_pool mpdu_blk_pool;

 unsigned long OneSecondnonBEpackets;



    struct iw_statistics iw_stats;


 struct net_device_stats stats;
# 2748 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
 unsigned long TbttTickCount;





 unsigned char is_on;







 RtmpDiagStruct DiagStruct;


} RTMP_ADAPTER, *PRTMP_ADAPTER;





typedef struct _CISCO_IAPP_CONTENT_
{
 unsigned short Length;
 unsigned char MessageType;
 unsigned char FunctionCode;
 unsigned char DestinaionMAC[6];
 unsigned char SourceMAC[6];
 unsigned short Tag;
 unsigned short TagLength;
 unsigned char OUI[4];
 unsigned char PreviousAP[6];
 unsigned short Channel;
 unsigned short SsidLen;
 unsigned char Ssid[32];
 unsigned short Seconds;
} CISCO_IAPP_CONTENT, *PCISCO_IAPP_CONTENT;
# 2804 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _RX_BLK_
{
 RT28XX_RXD_STRUC RxD;
 PRXWI_STRUC pRxWI;
 PHEADER_802_11 pHeader;
 PNDIS_PACKET pRxPacket;
 unsigned char *pData;
 unsigned short DataSize;
 unsigned short Flags;
 unsigned char UserPriority;
} RX_BLK;
# 2848 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
typedef struct _TX_BLK_
{
 unsigned char QueIdx;
 unsigned char TxFrameType;
 unsigned char TotalFrameNum;
 unsigned short TotalFragNum;
 unsigned short TotalFrameLen;

 QUEUE_HEADER TxPacketList;
 MAC_TABLE_ENTRY *pMacEntry;
 HTTRANSMIT_SETTING *pTransmit;


 PNDIS_PACKET pPacket;
 PUCHAR pSrcBufHeader;
 PUCHAR pSrcBufData;
 unsigned int SrcBufLen;
 PUCHAR pExtraLlcSnapEncap;
 unsigned char HeaderBuf[80];
 unsigned char MpduHeaderLen;
 unsigned char HdrPadLen;
 unsigned char apidx;
 unsigned char Wcid;
 unsigned char UserPriority;
 unsigned char FrameGap;
 unsigned char MpduReqNum;
 unsigned char TxRate;
 unsigned char CipherAlg;
 PCIPHER_KEY pKey;



 unsigned short Flags;


 unsigned long Priv;

} TX_BLK;
# 2928 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
static inline void NICDisableInterrupt(
    PRTMP_ADAPTER pAd)
{
 { if ((pAd)->bPCIclkOff == 0) { unsigned int Val; Val = ((*(volatile unsigned int *)((void *)((pAd)->CSRBaseAddress + 0x1000)))); do { ((*(volatile unsigned int *)((void *)((pAd)->CSRBaseAddress + (0x204)))) = ((0x0)));__asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while(0); } };
 ((pAd)->Flags &= ~(0x00002000));
}

static inline void NICEnableInterrupt(
    PRTMP_ADAPTER pAd)
{
 { if ((pAd)->bPCIclkOff == 0) { unsigned int Val; Val = ((*(volatile unsigned int *)((void *)((pAd)->CSRBaseAddress + 0x1000)))); do { ((*(volatile unsigned int *)((void *)((pAd)->CSRBaseAddress + (0x204)))) = ((pAd->int_enable_reg)));__asm__ __volatile__( ".set	push\n\t" ".set	noreorder\n\t" ".set	mips2\n\t" "sync\n\t" ".set	pop" : : : "memory"); } while(0); } };
 ((pAd)->Flags |= (0x00002000));
}
# 3181 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
unsigned char RTMPCheckForHang(
 NDIS_HANDLE MiniportAdapterContext
 );

void RTMPHalt(
 NDIS_HANDLE MiniportAdapterContext
 );




signed int RTMPAllocAdapterBlock(
 PVOID handle,
 PRTMP_ADAPTER *ppAdapter
 );

signed int RTMPAllocTxRxRingMemory(
 PRTMP_ADAPTER pAd
 );

signed int RTMPFindAdapter(
 PRTMP_ADAPTER pAd,
 NDIS_HANDLE WrapperConfigurationContext
 );

signed int RTMPReadParametersHook(
 PRTMP_ADAPTER pAd
 );

void RTMPFreeAdapter(
 PRTMP_ADAPTER pAd
 );

signed int NICReadRegParameters(
 PRTMP_ADAPTER pAd,
 NDIS_HANDLE WrapperConfigurationContext
 );

void NICReadEEPROMParameters(
 PRTMP_ADAPTER pAd,
 PUCHAR mac_addr);

void NICInitAsicFromEEPROM(
 PRTMP_ADAPTER pAd);

void NICInitTxRxRingAndBacklogQueue(
 PRTMP_ADAPTER pAd);

signed int NICInitializeAdapter(
 PRTMP_ADAPTER pAd,
 unsigned char bHardReset);

signed int NICInitializeAsic(
 PRTMP_ADAPTER pAd,
 unsigned char bHardReset);

void NICIssueReset(
 PRTMP_ADAPTER pAd);

void RTMPRingCleanUp(
 PRTMP_ADAPTER pAd,
 unsigned char RingType);

void RxTest(
 PRTMP_ADAPTER pAd);

signed int DbgSendPacket(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);

void UserCfgInit(
 PRTMP_ADAPTER pAd);

void NICResetFromError(
 PRTMP_ADAPTER pAd);

void NICEraseFirmware(
 PRTMP_ADAPTER pAd);

signed int NICLoadFirmware(
 PRTMP_ADAPTER pAd);

signed int NICLoadRateSwitchingParams(
 PRTMP_ADAPTER pAd);

unsigned char NICCheckForHang(
 PRTMP_ADAPTER pAd);

void NICUpdateFifoStaCounters(
 PRTMP_ADAPTER pAd);

void NICUpdateRawCounters(
 PRTMP_ADAPTER pAd);

unsigned long RTMPNotAllZero(
 PVOID pSrc1,
 unsigned long Length);

void RTMPZeroMemory(
 PVOID pSrc,
 unsigned long Length);

unsigned long RTMPCompareMemory(
 PVOID pSrc1,
 PVOID pSrc2,
 unsigned long Length);

void RTMPMoveMemory(
 PVOID pDest,
 PVOID pSrc,
 unsigned long Length);

void AtoH(
 char *src,
 unsigned char *dest,
 int destlen);

unsigned char BtoH(
 char ch);

void RTMPPatchMacBbpBug(
 PRTMP_ADAPTER pAd);

void RTMPPatchCardBus(
 PRTMP_ADAPTER pAdapter);

void RTMPPatchRalinkCardBus(
 PRTMP_ADAPTER pAdapter,
 unsigned long Bus);

unsigned long RTMPReadCBConfig(
 unsigned long Bus,
 unsigned long Slot,
 unsigned long Func,
 unsigned long Offset);

void RTMPWriteCBConfig(
 unsigned long Bus,
 unsigned long Slot,
 unsigned long Func,
 unsigned long Offset,
 unsigned long Value);

void RTMPInitTimer(
 PRTMP_ADAPTER pAd,
 PRALINK_TIMER_STRUCT pTimer,
 PVOID pTimerFunc,
 PVOID pData,
 unsigned char Repeat);

void RTMPSetTimer(
 PRALINK_TIMER_STRUCT pTimer,
 unsigned long Value);


void RTMPModTimer(
 PRALINK_TIMER_STRUCT pTimer,
 unsigned long Value);

void RTMPCancelTimer(
 PRALINK_TIMER_STRUCT pTimer,
 unsigned char *pCancelled);

void RTMPSetLED(
 PRTMP_ADAPTER pAd,
 unsigned char Status);

void RTMPSetSignalLED(
 PRTMP_ADAPTER pAd,
 NDIS_802_11_RSSI Dbm);

void RTMPEnableRxTx(
 PRTMP_ADAPTER pAd);




void ActionStateMachineInit(
    PRTMP_ADAPTER pAd,
    STATE_MACHINE *S,
    STATE_MACHINE_FUNC Trans[]);

void MlmeADDBAAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void MlmeDELBAAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void PeerSpectrumAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void MlmeDLSAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void MlmeInvalidAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void MlmeQOSAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void PeerAddBAReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerAddBARspAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerDelBAAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerBAAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void SendPSMPAction(
 PRTMP_ADAPTER pAd,
 unsigned char Wcid,
 unsigned char Psmp);

void PeerRMAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerBSSTranAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerHTAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerQOSAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);


void RECBATimerTimeout(
    PVOID SystemSpecific1,
    PVOID FunctionContext,
    PVOID SystemSpecific2,
    PVOID SystemSpecific3);

void ORIBATimerTimeout(
 PRTMP_ADAPTER pAd);

void SendRefreshBAR(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry);

void ActHeaderInit(
    PRTMP_ADAPTER pAd,
    PHEADER_802_11 pHdr80211,
    PUCHAR Addr1,
    PUCHAR Addr2,
    PUCHAR Addr3);

void BarHeaderInit(
 PRTMP_ADAPTER pAd,
 PFRAME_BAR pCntlBar,
 PUCHAR pDA,
 PUCHAR pSA);

unsigned char QosBADataParse(
 PRTMP_ADAPTER pAd,
 unsigned char bAMSDU,
 PUCHAR p8023Header,
 unsigned char WCID,
 unsigned char TID,
 unsigned short Sequence,
 unsigned char DataOffset,
 unsigned short Datasize,
 unsigned int CurRxIndex);

unsigned char CntlEnqueueForRecv(
    PRTMP_ADAPTER pAd,
 unsigned long Wcid,
    unsigned long MsgLen,
 PFRAME_BA_REQ pMsg);

void BaAutoManSwitch(
 PRTMP_ADAPTER pAd);

void HTIOTCheck(
 PRTMP_ADAPTER pAd,
 unsigned char BatRecIdx);




unsigned char RTMPHandleRxDoneInterrupt(
 PRTMP_ADAPTER pAd);

void RTMPHandleTxDoneInterrupt(
 PRTMP_ADAPTER pAd);

unsigned char RTMPHandleTxRingDmaDoneInterrupt(
 PRTMP_ADAPTER pAd,
 INT_SOURCE_CSR_STRUC TxRingBitmap);

void RTMPHandleMgmtRingDmaDoneInterrupt(
 PRTMP_ADAPTER pAd);

void RTMPHandleTBTTInterrupt(
 PRTMP_ADAPTER pAd);

void RTMPHandlePreTBTTInterrupt(
 PRTMP_ADAPTER pAd);

void RTMPHandleTwakeupInterrupt(
 PRTMP_ADAPTER pAd);

void RTMPHandleRxCoherentInterrupt(
 PRTMP_ADAPTER pAd);

unsigned char TxFrameIsAggregatible(
 PRTMP_ADAPTER pAd,
 PUCHAR pPrevAddr1,
 PUCHAR p8023hdr);

unsigned char PeerIsAggreOn(
    PRTMP_ADAPTER pAd,
    unsigned long TxRate,
    PMAC_TABLE_ENTRY pMacEntry);

signed int Sniff2BytesFromNdisBuffer(
 PNDIS_BUFFER pFirstBuffer,
 unsigned char DesiredOffset,
 PUCHAR pByte0,
 PUCHAR pByte1);

signed int STASendPacket(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);

void STASendPackets(
 NDIS_HANDLE MiniportAdapterContext,
 PPNDIS_PACKET ppPacketArray,
 unsigned int NumberOfPackets);

void RTMPDeQueuePacket(
 PRTMP_ADAPTER pAd,
    unsigned char bIntContext,
 unsigned char QueIdx,
 unsigned char Max_Tx_Packets);

signed int RTMPHardTransmit(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 unsigned char QueIdx,
 PULONG pFreeTXDLeft);

signed int STAHardTransmit(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char QueIdx);

void STARxEAPOLFrameIndicate(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);

signed int RTMPFreeTXDRequest(
 PRTMP_ADAPTER pAd,
 unsigned char RingType,
 unsigned char NumberRequired,
 PUCHAR FreeNumberIs);

signed int MlmeHardTransmit(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx,
 PNDIS_PACKET pPacket);

signed int MlmeHardTransmitMgmtRing(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx,
 PNDIS_PACKET pPacket);

signed int MlmeHardTransmitTxRing(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx,
 PNDIS_PACKET pPacket);

unsigned short RTMPCalcDuration(
 PRTMP_ADAPTER pAd,
 unsigned char Rate,
 unsigned long Size);

void RTMPWriteTxWI(
 PRTMP_ADAPTER pAd,
 PTXWI_STRUC pTxWI,
 unsigned char FRAG,
 unsigned char CFACK,
 unsigned char InsTimestamp,
 unsigned char AMPDU,
 unsigned char Ack,
 unsigned char NSeq,
 unsigned char BASize,
 unsigned char WCID,
 unsigned long Length,
 unsigned char PID,
 unsigned char TID,
 unsigned char TxRate,
 unsigned char Txopmode,
 unsigned char CfAck,
 HTTRANSMIT_SETTING *pTransmit);


void RTMPWriteTxWI_Data(
 PRTMP_ADAPTER pAd,
 PTXWI_STRUC pTxWI,
 TX_BLK *pTxBlk);


void RTMPWriteTxWI_Cache(
 PRTMP_ADAPTER pAd,
 PTXWI_STRUC pTxWI,
 TX_BLK *pTxBlk);

void RTMPWriteTxDescriptor(
 PRTMP_ADAPTER pAd,
 PTXD_STRUC pTxD,
 unsigned char bWIV,
 unsigned char QSEL);

void RTMPSuspendMsduTransmission(
 PRTMP_ADAPTER pAd);

void RTMPResumeMsduTransmission(
 PRTMP_ADAPTER pAd);

signed int MiniportMMRequest(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx,
 PUCHAR pData,
 unsigned int Length);

void RTMPSendNullFrame(
 PRTMP_ADAPTER pAd,
 unsigned char TxRate,
 unsigned char bQosNull);

void RTMPSendDisassociationFrame(
 PRTMP_ADAPTER pAd);

void RTMPSendRTSFrame(
 PRTMP_ADAPTER pAd,
 PUCHAR pDA,
 unsigned int NextMpduSize,
 unsigned char TxRate,
 unsigned char RTSRate,
 unsigned short AckDuration,
 unsigned char QueIdx,
 unsigned char FrameGap);


signed int RTMPApplyPacketFilter(
 PRTMP_ADAPTER pAd,
 PRT28XX_RXD_STRUC pRxD,
 PHEADER_802_11 pHeader);

PQUEUE_HEADER RTMPCheckTxSwQueue(
 PRTMP_ADAPTER pAd,
 unsigned char *QueIdx);


void RTMPReportMicError(
 PRTMP_ADAPTER pAd,
 PCIPHER_KEY pWpaKey);

void WpaMicFailureReportFrame(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void WpaDisassocApAndBlockAssoc(
    PVOID SystemSpecific1,
    PVOID FunctionContext,
    PVOID SystemSpecific2,
    PVOID SystemSpecific3);


signed int RTMPCloneNdisPacket(
 PRTMP_ADAPTER pAd,
 unsigned char pInsAMSDUHdr,
 PNDIS_PACKET pInPacket,
 PNDIS_PACKET *ppOutPacket);

signed int RTMPAllocateNdisPacket(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET *pPacket,
 PUCHAR pHeader,
 unsigned int HeaderLen,
 PUCHAR pData,
 unsigned int DataLen);

void RTMPFreeNdisPacket(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);

unsigned char RTMPFreeTXDUponTxDmaDone(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx);

unsigned char RTMPCheckDHCPFrame(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);


unsigned char RTMPCheckEtherType(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);


void RTMPCckBbpTuning(
 PRTMP_ADAPTER pAd,
 unsigned int TxRate);




void RTMPInitWepEngine(
 PRTMP_ADAPTER pAd,
 PUCHAR pKey,
 unsigned char KeyId,
 unsigned char KeyLen,
 PUCHAR pDest);

void RTMPEncryptData(
 PRTMP_ADAPTER pAd,
 PUCHAR pSrc,
 PUCHAR pDest,
 unsigned int Len);

unsigned char RTMPDecryptData(
 PRTMP_ADAPTER pAdapter,
 PUCHAR pSrc,
 unsigned int Len,
 unsigned int idx);

unsigned char RTMPSoftDecryptWEP(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned long DataByteCnt,
 PCIPHER_KEY pGroupKey);

void RTMPSetICV(
 PRTMP_ADAPTER pAd,
 PUCHAR pDest);

void ARCFOUR_INIT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pKey,
 unsigned int KeyLen);

unsigned char ARCFOUR_BYTE(
 PARCFOURCONTEXT Ctx);

void ARCFOUR_DECRYPT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pDest,
 PUCHAR pSrc,
 unsigned int Len);

void ARCFOUR_ENCRYPT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pDest,
 PUCHAR pSrc,
 unsigned int Len);

void WPAARCFOUR_ENCRYPT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pDest,
 PUCHAR pSrc,
 unsigned int Len);

unsigned int RTMP_CALC_FCS32(
 unsigned int Fcs,
 PUCHAR Cp,
 signed int Len);







void AsicAdjustTxPower(
 PRTMP_ADAPTER pAd);

void AsicUpdateProtect(
 PRTMP_ADAPTER pAd,
 unsigned short OperaionMode,
 unsigned char SetMask,
 unsigned char bDisableBGProtect,
 unsigned char bNonGFExist);

void AsicSwitchChannel(
 PRTMP_ADAPTER pAd,
 unsigned char Channel,
 unsigned char bScan);

void AsicLockChannel(
 PRTMP_ADAPTER pAd,
 unsigned char Channel) ;

void AsicAntennaSelect(
 PRTMP_ADAPTER pAd,
 unsigned char Channel);

void AsicAntennaSetting(
 PRTMP_ADAPTER pAd,
 ABGBAND_STATE BandState);

void AsicRfTuningExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);


void AsicSleepThenAutoWakeup(
 PRTMP_ADAPTER pAd,
 unsigned short TbttNumToNextWakeUp);

void AsicForceSleep(
 PRTMP_ADAPTER pAd);

void AsicForceWakeup(
 PRTMP_ADAPTER pAd,
 unsigned char bFromTx);


void AsicSetBssid(
 PRTMP_ADAPTER pAd,
 PUCHAR pBssid);

void AsicSetMcastWC(
 PRTMP_ADAPTER pAd);

void AsicDelWcidTab(
 PRTMP_ADAPTER pAd,
 unsigned char Wcid);

void AsicEnableRDG(
 PRTMP_ADAPTER pAd);

void AsicDisableRDG(
 PRTMP_ADAPTER pAd);

void AsicDisableSync(
 PRTMP_ADAPTER pAd);

void AsicEnableBssSync(
 PRTMP_ADAPTER pAd);

void AsicEnableIbssSync(
 PRTMP_ADAPTER pAd);

void AsicSetEdcaParm(
 PRTMP_ADAPTER pAd,
 PEDCA_PARM pEdcaParm);

void AsicSetSlotTime(
 PRTMP_ADAPTER pAd,
 unsigned char bUseShortSlotTime);

void AsicAddSharedKeyEntry(
 PRTMP_ADAPTER pAd,
 unsigned char BssIndex,
 unsigned char KeyIdx,
 unsigned char CipherAlg,
 PUCHAR pKey,
 PUCHAR pTxMic,
 PUCHAR pRxMic);

void AsicRemoveSharedKeyEntry(
 PRTMP_ADAPTER pAd,
 unsigned char BssIndex,
 unsigned char KeyIdx);

void AsicUpdateWCIDAttribute(
 PRTMP_ADAPTER pAd,
 unsigned short WCID,
 unsigned char BssIndex,
 unsigned char CipherAlg,
 unsigned char bUsePairewiseKeyTable);

void AsicUpdateWCIDIVEIV(
 PRTMP_ADAPTER pAd,
 unsigned short WCID,
 unsigned long uIV,
 unsigned long uEIV);

void AsicUpdateRxWCIDTable(
 PRTMP_ADAPTER pAd,
 unsigned short WCID,
 PUCHAR pAddr);

void AsicAddKeyEntry(
 PRTMP_ADAPTER pAd,
 unsigned short WCID,
 unsigned char BssIndex,
 unsigned char KeyIdx,
 PCIPHER_KEY pCipherKey,
 unsigned char bUsePairewiseKeyTable,
 unsigned char bTxKey);

void AsicAddPairwiseKeyEntry(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr,
 unsigned char WCID,
 CIPHER_KEY *pCipherKey);

void AsicRemovePairwiseKeyEntry(
 PRTMP_ADAPTER pAd,
 unsigned char BssIdx,
 unsigned char Wcid);

unsigned char AsicSendCommandToMcu(
 PRTMP_ADAPTER pAd,
 unsigned char Command,
 unsigned char Token,
 unsigned char Arg0,
 unsigned char Arg1);


unsigned char AsicCheckCommanOk(
 PRTMP_ADAPTER pAd,
 unsigned char Command);


void MacAddrRandomBssid(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr);

void MgtMacHeaderInit(
 PRTMP_ADAPTER pAd,
 PHEADER_802_11 pHdr80211,
 unsigned char SubType,
 unsigned char ToDs,
 PUCHAR pDA,
 PUCHAR pBssid);

void MlmeRadioOff(
 PRTMP_ADAPTER pAd);

void MlmeRadioOn(
 PRTMP_ADAPTER pAd);


void BssTableInit(
 BSS_TABLE *Tab);

void BATableInit(
 PRTMP_ADAPTER pAd,
    BA_TABLE *Tab);

unsigned long BssTableSearch(
 BSS_TABLE *Tab,
 PUCHAR pBssid,
 unsigned char Channel);

unsigned long BssSsidTableSearch(
 BSS_TABLE *Tab,
 PUCHAR pBssid,
 PUCHAR pSsid,
 unsigned char SsidLen,
 unsigned char Channel);

unsigned long BssTableSearchWithSSID(
 BSS_TABLE *Tab,
 PUCHAR Bssid,
 PUCHAR pSsid,
 unsigned char SsidLen,
 unsigned char Channel);

void BssTableDeleteEntry(
 PBSS_TABLE pTab,
 PUCHAR pBssid,
 unsigned char Channel);

void BATableDeleteORIEntry(
 PRTMP_ADAPTER pAd,
 BA_ORI_ENTRY *pBAORIEntry);

void BATableDeleteRECEntry(
 PRTMP_ADAPTER pAd,
 BA_REC_ENTRY *pBARECEntry);

void BATableTearORIEntry(
 PRTMP_ADAPTER pAd,
 unsigned char TID,
 unsigned char Wcid,
 unsigned char bForceDelete,
 unsigned char ALL);

void BATableTearRECEntry(
 PRTMP_ADAPTER pAd,
 unsigned char TID,
 unsigned char WCID,
 unsigned char ALL);

void BssEntrySet(
 PRTMP_ADAPTER pAd,
 PBSS_ENTRY pBss,
 PUCHAR pBssid,
 signed char Ssid[],
 unsigned char SsidLen,
 unsigned char BssType,
 unsigned short BeaconPeriod,
 PCF_PARM CfParm,
 unsigned short AtimWin,
 unsigned short CapabilityInfo,
 unsigned char SupRate[],
 unsigned char SupRateLen,
 unsigned char ExtRate[],
 unsigned char ExtRateLen,
 HT_CAPABILITY_IE *pHtCapability,
 ADD_HT_INFO_IE *pAddHtInfo,
 unsigned char HtCapabilityLen,
 unsigned char AddHtInfoLen,
 unsigned char NewExtChanOffset,
 unsigned char Channel,
 signed char Rssi,
 LARGE_INTEGER TimeStamp,
 unsigned char CkipFlag,
 PEDCA_PARM pEdcaParm,
 PQOS_CAPABILITY_PARM pQosCapability,
 PQBSS_LOAD_PARM pQbssLoad,
 unsigned short LengthVIE,
 PNDIS_802_11_VARIABLE_IEs pVIE);

unsigned long BssTableSetEntry(
 PRTMP_ADAPTER pAd,
 PBSS_TABLE pTab,
 PUCHAR pBssid,
 signed char Ssid[],
 unsigned char SsidLen,
 unsigned char BssType,
 unsigned short BeaconPeriod,
 CF_PARM *CfParm,
 unsigned short AtimWin,
 unsigned short CapabilityInfo,
 unsigned char SupRate[],
 unsigned char SupRateLen,
 unsigned char ExtRate[],
 unsigned char ExtRateLen,
 HT_CAPABILITY_IE *pHtCapability,
 ADD_HT_INFO_IE *pAddHtInfo,
 unsigned char HtCapabilityLen,
 unsigned char AddHtInfoLen,
 unsigned char NewExtChanOffset,
 unsigned char Channel,
 signed char Rssi,
 LARGE_INTEGER TimeStamp,
 unsigned char CkipFlag,
 PEDCA_PARM pEdcaParm,
 PQOS_CAPABILITY_PARM pQosCapability,
 PQBSS_LOAD_PARM pQbssLoad,
 unsigned short LengthVIE,
 PNDIS_802_11_VARIABLE_IEs pVIE);

void BATableInsertEntry(
    PRTMP_ADAPTER pAd,
 unsigned short Aid,
    unsigned short TimeOutValue,
 unsigned short StartingSeq,
    unsigned char TID,
 unsigned char BAWinSize,
 unsigned char OriginatorStatus,
    unsigned char IsRecipient);

void BssTableSsidSort(
 PRTMP_ADAPTER pAd,
 BSS_TABLE *OutTab,
 signed char Ssid[],
 unsigned char SsidLen);

void BssTableSortByRssi(
 BSS_TABLE *OutTab);

void BssCipherParse(
 PBSS_ENTRY pBss);

signed int MlmeQueueInit(
 MLME_QUEUE *Queue);

void MlmeQueueDestroy(
 MLME_QUEUE *Queue);

unsigned char MlmeEnqueue(
 PRTMP_ADAPTER pAd,
 unsigned long Machine,
 unsigned long MsgType,
 unsigned long MsgLen,
 void *Msg);

unsigned char MlmeEnqueueForRecv(
 PRTMP_ADAPTER pAd,
 unsigned long Wcid,
 unsigned long TimeStampHigh,
 unsigned long TimeStampLow,
 unsigned char Rssi0,
 unsigned char Rssi1,
 unsigned char Rssi2,
 unsigned long MsgLen,
 PVOID Msg,
 unsigned char Signal);

unsigned char MlmeDequeue(
 MLME_QUEUE *Queue,
 MLME_QUEUE_ELEM **Elem);

void MlmeRestartStateMachine(
 PRTMP_ADAPTER pAd);

unsigned char MlmeQueueEmpty(
 MLME_QUEUE *Queue);

unsigned char MlmeQueueFull(
 MLME_QUEUE *Queue);

unsigned char MsgTypeSubst(
 PRTMP_ADAPTER pAd,
 PFRAME_802_11 pFrame,
 signed int *Machine,
 signed int *MsgType);

void StateMachineInit(
 STATE_MACHINE *Sm,
 STATE_MACHINE_FUNC Trans[],
 unsigned long StNr,
 unsigned long MsgNr,
 STATE_MACHINE_FUNC DefFunc,
 unsigned long InitState,
 unsigned long Base);

void StateMachineSetAction(
 STATE_MACHINE *S,
 unsigned long St,
 unsigned long Msg,
 STATE_MACHINE_FUNC F);

void StateMachinePerformAction(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *S,
 MLME_QUEUE_ELEM *Elem);

void Drop(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void AssocStateMachineInit(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *Sm,
 STATE_MACHINE_FUNC Trans[]);

void ReassocTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void AssocTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void DisassocTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);


void MlmeDisassocReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void MlmeAssocReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void MlmeReassocReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void MlmeDisassocReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerAssocRspAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerReassocRspAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerDisassocAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void DisassocTimeoutAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void AssocTimeoutAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ReassocTimeoutAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void Cls3errAction(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr);

void SwitchBetweenWepAndCkip(
 PRTMP_ADAPTER pAd);

void InvalidStateWhenAssoc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void InvalidStateWhenReassoc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void InvalidStateWhenDisassociate(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ComposePsPoll(
 PRTMP_ADAPTER pAd);

void ComposeNullFrame(
 PRTMP_ADAPTER pAd);

void AssocPostProc(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr2,
 unsigned short CapabilityInfo,
 unsigned short Aid,
 unsigned char SupRate[],
 unsigned char SupRateLen,
 unsigned char ExtRate[],
 unsigned char ExtRateLen,
 PEDCA_PARM pEdcaParm,
 HT_CAPABILITY_IE *pHtCapability,
 unsigned char HtCapabilityLen,
 ADD_HT_INFO_IE *pAddHtInfo);

void AuthStateMachineInit(
 PRTMP_ADAPTER pAd,
 PSTATE_MACHINE sm,
 STATE_MACHINE_FUNC Trans[]);

void AuthTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void MlmeAuthReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerAuthRspAtSeq2Action(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerAuthRspAtSeq4Action(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void AuthTimeoutAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void Cls2errAction(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr);

void MlmeDeauthReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void InvalidStateWhenAuth(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);



void AuthRspStateMachineInit(
 PRTMP_ADAPTER pAd,
 PSTATE_MACHINE Sm,
 STATE_MACHINE_FUNC Trans[]);

void PeerDeauthAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerAuthSimpleRspGenAndSend(
 PRTMP_ADAPTER pAd,
 PHEADER_802_11 pHdr80211,
 unsigned short Alg,
 unsigned short Seq,
 unsigned short Reason,
 unsigned short Status);




void DLSStateMachineInit(
    PRTMP_ADAPTER pAd,
    STATE_MACHINE *S,
    STATE_MACHINE_FUNC Trans[]);

void PeerDlsReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void PeerDlsRspAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void PeerDlsTearDownAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);



void SyncStateMachineInit(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *Sm,
 STATE_MACHINE_FUNC Trans[]);

void BeaconTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void ScanTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void MlmeScanReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void InvalidStateWhenScan(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void InvalidStateWhenJoin(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void InvalidStateWhenStart(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerBeacon(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void EnqueueProbeRequest(
 PRTMP_ADAPTER pAd);



void MlmeCntlInit(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *S,
 STATE_MACHINE_FUNC Trans[]);

void MlmeCntlMachinePerformAction(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *S,
 MLME_QUEUE_ELEM *Elem);

void CntlIdleProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlOidScanProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlOidSsidProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM * Elem);

void CntlOidRTBssidProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM * Elem);

void CntlMlmeRoamingProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM * Elem);

void CntlWaitDisassocProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlWaitJoinProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlWaitReassocProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlWaitStartProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlWaitAuthProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlWaitAuthProc2(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void CntlWaitAssocProc(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void LinkUp(
 PRTMP_ADAPTER pAd,
 unsigned char BssType);

void LinkDown(
 PRTMP_ADAPTER pAd,
 unsigned char IsReqFromAP);

void IterateOnBssTab(
 PRTMP_ADAPTER pAd);

void IterateOnBssTab2(
 PRTMP_ADAPTER pAd);;

void JoinParmFill(
 PRTMP_ADAPTER pAd,
 MLME_JOIN_REQ_STRUCT *JoinReq,
 unsigned long BssIdx);

void AssocParmFill(
 PRTMP_ADAPTER pAd,
 MLME_ASSOC_REQ_STRUCT *AssocReq,
 PUCHAR pAddr,
 unsigned short CapabilityInfo,
 unsigned long Timeout,
 unsigned short ListenIntv);

void ScanParmFill(
 PRTMP_ADAPTER pAd,
 MLME_SCAN_REQ_STRUCT *ScanReq,
 signed char Ssid[],
 unsigned char SsidLen,
 unsigned char BssType,
 unsigned char ScanType);

void DisassocParmFill(
 PRTMP_ADAPTER pAd,
 MLME_DISASSOC_REQ_STRUCT *DisassocReq,
 PUCHAR pAddr,
 unsigned short Reason);

void StartParmFill(
 PRTMP_ADAPTER pAd,
 MLME_START_REQ_STRUCT *StartReq,
 signed char Ssid[],
 unsigned char SsidLen);

void AuthParmFill(
 PRTMP_ADAPTER pAd,
 MLME_AUTH_REQ_STRUCT *AuthReq,
 PUCHAR pAddr,
 unsigned short Alg);

void EnqueuePsPoll(
 PRTMP_ADAPTER pAd);

void EnqueueBeaconFrame(
 PRTMP_ADAPTER pAd);

void MlmeJoinReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void MlmeScanReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void MlmeStartReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ScanTimeoutAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void BeaconTimeoutAtJoinAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerBeaconAtScanAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerBeaconAtJoinAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerBeacon(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void PeerProbeReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ScanNextChannel(
 PRTMP_ADAPTER pAd);

unsigned long MakeIbssBeacon(
 PRTMP_ADAPTER pAd);

void CCXAdjacentAPReport(
 PRTMP_ADAPTER pAd);

unsigned char MlmeScanReqSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 unsigned char *BssType,
 signed char ssid[],
 unsigned char *SsidLen,
 unsigned char *ScanType);

unsigned char PeerBeaconAndProbeRspSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 unsigned char MsgChannel,
 PUCHAR pAddr2,
 PUCHAR pBssid,
 signed char Ssid[],
 unsigned char *pSsidLen,
 unsigned char *pBssType,
 unsigned short *pBeaconPeriod,
 unsigned char *pChannel,
 unsigned char *pNewChannel,
 LARGE_INTEGER *pTimestamp,
 CF_PARM *pCfParm,
 unsigned short *pAtimWin,
 unsigned short *pCapabilityInfo,
 unsigned char *pErp,
 unsigned char *pDtimCount,
 unsigned char *pDtimPeriod,
 unsigned char *pBcastFlag,
 unsigned char *pMessageToMe,
 unsigned char SupRate[],
 unsigned char *pSupRateLen,
 unsigned char ExtRate[],
 unsigned char *pExtRateLen,
 unsigned char *pCkipFlag,
 unsigned char *pAironetCellPowerLimit,
 PEDCA_PARM pEdcaParm,
 PQBSS_LOAD_PARM pQbssLoad,
 PQOS_CAPABILITY_PARM pQosCapability,
 unsigned long *pRalinkIe,
 unsigned char *pHtCapabilityLen,

 unsigned char *pPreNHtCapabilityLen,

 HT_CAPABILITY_IE *pHtCapability,
 unsigned char *AddHtInfoLen,
 ADD_HT_INFO_IE *AddHtInfo,
 unsigned char *NewExtChannel,
 unsigned short *LengthVIE,
 PNDIS_802_11_VARIABLE_IEs pVIE);

unsigned char PeerAddBAReqActionSanity(
    PRTMP_ADAPTER pAd,
    void *pMsg,
    unsigned long MsgLen,
 PUCHAR pAddr2);

unsigned char PeerAddBARspActionSanity(
    PRTMP_ADAPTER pAd,
    void *pMsg,
    unsigned long MsgLen);

unsigned char PeerDelBAActionSanity(
    PRTMP_ADAPTER pAd,
    unsigned char Wcid,
    void *pMsg,
    unsigned long MsgLen);

unsigned char MlmeAssocReqSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 PUCHAR pApAddr,
 unsigned short *CapabilityInfo,
 unsigned long *Timeout,
 unsigned short *ListenIntv);

unsigned char MlmeAuthReqSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 PUCHAR pAddr,
 unsigned long *Timeout,
 unsigned short *Alg);

unsigned char MlmeStartReqSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 signed char Ssid[],
 unsigned char *Ssidlen);

unsigned char PeerAuthSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 PUCHAR pAddr,
 unsigned short *Alg,
 unsigned short *Seq,
 unsigned short *Status,
 signed char ChlgText[]);

unsigned char PeerAssocRspSanity(
 PRTMP_ADAPTER pAd,
    void *pMsg,
 unsigned long MsgLen,
 PUCHAR pAddr2,
 unsigned short *pCapabilityInfo,
 unsigned short *pStatus,
 unsigned short *pAid,
 unsigned char SupRate[],
 unsigned char *pSupRateLen,
 unsigned char ExtRate[],
 unsigned char *pExtRateLen,
    HT_CAPABILITY_IE *pHtCapability,
    ADD_HT_INFO_IE *pAddHtInfo,
    unsigned char *pHtCapabilityLen,
    unsigned char *pAddHtInfoLen,
    unsigned char *pNewExtChannelOffset,
 PEDCA_PARM pEdcaParm,
 unsigned char *pCkipFlag);

unsigned char PeerDisassocSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 PUCHAR pAddr2,
 unsigned short *Reason);

unsigned char PeerWpaMessageSanity(
    PRTMP_ADAPTER pAd,
    PEAPOL_PACKET pMsg,
    unsigned long MsgLen,
    unsigned char MsgType,
    PUCHAR pMIC,
    MAC_TABLE_ENTRY *pEntry);

unsigned char PeerDeauthSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 PUCHAR pAddr2,
 unsigned short *Reason);

unsigned char PeerProbeReqSanity(
 PRTMP_ADAPTER pAd,
 void *Msg,
 unsigned long MsgLen,
 PUCHAR pAddr2,
 signed char Ssid[],
 unsigned char *pSsidLen);

unsigned char GetTimBit(
 signed char *Ptr,
 unsigned short Aid,
 unsigned char *TimLen,
 unsigned char *BcastFlag,
 unsigned char *DtimCount,
 unsigned char *DtimPeriod,
 unsigned char *MessageToMe);

unsigned char ChannelSanity(
 PRTMP_ADAPTER pAd,
 unsigned char channel);

NDIS_802_11_NETWORK_TYPE NetworkTypeInUseSanity(
 PBSS_ENTRY pBss);

unsigned char MlmeDelBAReqSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen);

unsigned char MlmeAddBAReqSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pAddr2);

unsigned long MakeOutgoingFrame(
 signed char *Buffer,
 unsigned long *Length, ...);

void LfsrInit(
 PRTMP_ADAPTER pAd,
 unsigned long Seed);

unsigned char RandomByte(
 PRTMP_ADAPTER pAd);

void AsicUpdateAutoFallBackTable(
 PRTMP_ADAPTER pAd,
 PUCHAR pTxRate);

void MlmePeriodicExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void LinkDownExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void LinkUpExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void STAMlmePeriodicExec(
 PRTMP_ADAPTER pAd);

void MlmeAutoScan(
 PRTMP_ADAPTER pAd);

void MlmeAutoReconnectLastSSID(
 PRTMP_ADAPTER pAd);

unsigned char MlmeValidateSSID(
 PUCHAR pSsid,
 unsigned char SsidLen);

void MlmeCheckForRoaming(
 PRTMP_ADAPTER pAd,
 unsigned long Now32);

void MlmeCheckForFastRoaming(
 PRTMP_ADAPTER pAd,
 unsigned long Now);

void MlmeDynamicTxRateSwitching(
 PRTMP_ADAPTER pAd);

void MlmeSetTxRate(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry,
 PRTMP_TX_RATE_SWITCH pTxRate);

void MlmeSelectTxRateTable(
 PRTMP_ADAPTER pAd,
 PUCHAR *ppTable,
 PUCHAR pTableSize,
 PUCHAR pInitTxRateIdx);

void MlmeCalculateChannelQuality(
 PRTMP_ADAPTER pAd,
 unsigned long Now);

void MlmeCheckPsmChange(
 PRTMP_ADAPTER pAd,
 unsigned long Now32);

void MlmeSetPsmBit(
 PRTMP_ADAPTER pAd,
 unsigned short psm);

void MlmeSetTxPreamble(
 PRTMP_ADAPTER pAd,
 unsigned short TxPreamble);

void UpdateBasicRateBitmap(
 PRTMP_ADAPTER pAd);

void MlmeUpdateTxRates(
 PRTMP_ADAPTER pAd,
 unsigned char bLinkUp,
 unsigned char apidx);

void MlmeUpdateHtTxRates(
 PRTMP_ADAPTER pAd,
 unsigned char apidx);


void RTMPCheckRates(
 PRTMP_ADAPTER pAd,
 unsigned char SupRate[],
 unsigned char *SupRateLen);

unsigned char RTMPCheckHt(
 PRTMP_ADAPTER pAd,
 unsigned char Wcid,
 HT_CAPABILITY_IE *pHtCapability,
 ADD_HT_INFO_IE *pAddHtInfo);

unsigned char RTMPCheckAddHtInfoIe(
 PRTMP_ADAPTER pAd,
 ADD_HT_INFO_IE *pAddHTInfo);

void StaQuickResponeForRateUpExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void AsicBbpTuning1(
 PRTMP_ADAPTER pAd);

void AsicBbpTuning2(
 PRTMP_ADAPTER pAd);

void RTMPUpdateMlmeRate(
 PRTMP_ADAPTER pAd);

signed char RTMPMaxRssi(
 PRTMP_ADAPTER pAd,
 signed char Rssi0,
 signed char Rssi1,
 signed char Rssi2);

void AsicEvaluateRxAnt(
 PRTMP_ADAPTER pAd);

void AsicRxAntEvalTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void APSDPeriodicExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

unsigned char RTMPCheckEntryEnableAutoRateSwitch(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry);

unsigned char RTMPStaFixedTxMode(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry);

void RTMPUpdateLegacyTxSetting(
  unsigned char fixed_tx_mode,
  PMAC_TABLE_ENTRY pEntry);

unsigned char RTMPAutoRateSwitchCheck(
 PRTMP_ADAPTER pAd);

signed int MlmeInit(
 PRTMP_ADAPTER pAd);

void MlmeHandler(
 PRTMP_ADAPTER pAd);

void MlmeHalt(
 PRTMP_ADAPTER pAd);

void MlmeResetRalinkCounters(
 PRTMP_ADAPTER pAd);

void BuildChannelList(
 PRTMP_ADAPTER pAd);

unsigned char FirstChannel(
 PRTMP_ADAPTER pAd);

unsigned char NextChannel(
 PRTMP_ADAPTER pAd,
 unsigned char channel);

void ChangeToCellPowerLimit(
 PRTMP_ADAPTER pAd,
 unsigned char AironetCellPowerLimit);

void RaiseClock(
 PRTMP_ADAPTER pAd,
 UINT32 *x);

void LowerClock(
 PRTMP_ADAPTER pAd,
 UINT32 *x);

unsigned short ShiftInBits(
 PRTMP_ADAPTER pAd);

void ShiftOutBits(
 PRTMP_ADAPTER pAd,
 unsigned short data,
 unsigned short count);

void EEpromCleanup(
 PRTMP_ADAPTER pAd);

void EWDS(
 PRTMP_ADAPTER pAd);

void EWEN(
 PRTMP_ADAPTER pAd);

unsigned short RTMP_EEPROM_READ16(
 PRTMP_ADAPTER pAd,
 unsigned short Offset);

void RTMP_EEPROM_WRITE16(
 PRTMP_ADAPTER pAd,
 unsigned short Offset,
 unsigned short Data);




void RTMPInitTkipEngine(
 PRTMP_ADAPTER pAd,
 PUCHAR pTKey,
 unsigned char KeyId,
 PUCHAR pTA,
 PUCHAR pMICKey,
 PUCHAR pTSC,
 PULONG pIV16,
 PULONG pIV32);

void RTMPInitMICEngine(
 PRTMP_ADAPTER pAd,
 PUCHAR pKey,
 PUCHAR pDA,
 PUCHAR pSA,
 unsigned char UserPriority,
 PUCHAR pMICKey);

unsigned char RTMPTkipCompareMICValue(
 PRTMP_ADAPTER pAd,
 PUCHAR pSrc,
 PUCHAR pDA,
 PUCHAR pSA,
 PUCHAR pMICKey,
 unsigned char UserPriority,
 unsigned int Len);

void RTMPCalculateMICValue(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 PUCHAR pEncap,
 PCIPHER_KEY pKey,
 unsigned char apidx);

unsigned char RTMPTkipCompareMICValueWithLLC(
 PRTMP_ADAPTER pAd,
 PUCHAR pLLC,
 PUCHAR pSrc,
 PUCHAR pDA,
 PUCHAR pSA,
 PUCHAR pMICKey,
 unsigned int Len);

void RTMPTkipAppendByte(
 PTKIP_KEY_INFO pTkip,
 unsigned char uChar);

void RTMPTkipAppend(
 PTKIP_KEY_INFO pTkip,
 PUCHAR pSrc,
 unsigned int nBytes);

void RTMPTkipGetMIC(
 PTKIP_KEY_INFO pTkip);

unsigned char RTMPSoftDecryptTKIP(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned long DataByteCnt,
 unsigned char UserPriority,
 PCIPHER_KEY pWpaKey);

unsigned char RTMPSoftDecryptAES(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned long DataByteCnt,
 PCIPHER_KEY pWpaKey);




signed int RTMPWPARemoveKeyProc(
 PRTMP_ADAPTER pAd,
 PVOID pBuf);

void RTMPWPARemoveAllKeys(
 PRTMP_ADAPTER pAd);

unsigned char RTMPCheckStrPrintAble(
    signed char *pInPutStr,
    unsigned char strLen);

void RTMPSetPhyMode(
 PRTMP_ADAPTER pAd,
 unsigned long phymode);

void RTMPUpdateHTIE(
 RT_HT_CAPABILITY *pRtHt,
 unsigned char *pMcsSet,
 HT_CAPABILITY_IE *pHtCapability,
 ADD_HT_INFO_IE *pAddHtInfo);

void RTMPAddWcidAttributeEntry(
 PRTMP_ADAPTER pAd,
 unsigned char BssIdx,
 unsigned char KeyIdx,
 unsigned char CipherAlg,
 MAC_TABLE_ENTRY *pEntry);

signed char *GetEncryptType(
 signed char enc);

signed char *GetAuthMode(
 signed char auth);

void RTMPIoctlGetSiteSurvey(
 PRTMP_ADAPTER pAdapter,
 struct iwreq *wrq);

void RTMPIoctlGetMacTable(
 PRTMP_ADAPTER pAd,
 struct iwreq *wrq);

void RTMPIndicateWPA2Status(
 PRTMP_ADAPTER pAdapter);

void RTMPOPModeSwitching(
 PRTMP_ADAPTER pAd);


void RTMPAddBSSIDCipher(
    PRTMP_ADAPTER pAd,
 unsigned char Aid,
    PNDIS_802_11_KEY pKey,
    unsigned char CipherAlg);


void RTMPSetHT(
 PRTMP_ADAPTER pAd,
 OID_SET_HT_PHYMODE *pHTPhyMode);

void RTMPSetIndividualHT(
 PRTMP_ADAPTER pAd,
 unsigned char apidx);

void RTMPSendWirelessEvent(
 PRTMP_ADAPTER pAd,
 unsigned short Event_flag,
 PUCHAR pAddr,
 unsigned char BssIdx,
 signed char Rssi);

void NICUpdateCntlCounters(
 PRTMP_ADAPTER pAd,
 PHEADER_802_11 pHeader,
 unsigned char SubType,
 PRXWI_STRUC pRxWI);



unsigned char WpaMsgTypeSubst(
 unsigned char EAPType,
 signed int *MsgType);

void WpaPskStateMachineInit(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *S,
 STATE_MACHINE_FUNC Trans[]);

void WpaEAPOLKeyAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void WpaPairMsg1Action(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void WpaPairMsg3Action(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void WpaGroupMsg1Action(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void WpaMacHeaderInit(
 PRTMP_ADAPTER pAd,
 PHEADER_802_11 pHdr80211,
 unsigned char wep,
 PUCHAR pAddr1);

void Wpa2PairMsg1Action(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void Wpa2PairMsg3Action(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

unsigned char ParseKeyData(
    PRTMP_ADAPTER pAd,
    PUCHAR pKeyData,
    unsigned char KeyDataLen,
 unsigned char bPairewise);

void RTMPToWirelessSta(
 PRTMP_ADAPTER pAd,
 PUCHAR pHeader802_3,
    unsigned int HdrLen,
 PUCHAR pData,
    unsigned int DataLen,
    unsigned char is4wayFrame);

void HMAC_SHA1(
 unsigned char *text,
 unsigned int text_len,
 unsigned char *key,
 unsigned int key_len,
 unsigned char *digest);

void PRF(
 unsigned char *key,
 signed int key_len,
 unsigned char *prefix,
 signed int prefix_len,
 unsigned char *data,
 signed int data_len,
 unsigned char *output,
 signed int len);

void CCKMPRF(
 unsigned char *key,
 signed int key_len,
 unsigned char *data,
 signed int data_len,
 unsigned char *output,
 signed int len);

void WpaCountPTK(
 PRTMP_ADAPTER pAd,
 unsigned char *PMK,
 unsigned char *ANonce,
 unsigned char *AA,
 unsigned char *SNonce,
 unsigned char *SA,
 unsigned char *output,
 unsigned int len);

void GenRandom(
 PRTMP_ADAPTER pAd,
 unsigned char *macAddr,
 unsigned char *random);




void AironetStateMachineInit(
 PRTMP_ADAPTER pAd,
 STATE_MACHINE *S,
 STATE_MACHINE_FUNC Trans[]);

void AironetMsgAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void AironetRequestAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ChannelLoadRequestAction(
 PRTMP_ADAPTER pAd,
 unsigned char Index);

void NoiseHistRequestAction(
 PRTMP_ADAPTER pAd,
 unsigned char Index);

void BeaconRequestAction(
 PRTMP_ADAPTER pAd,
 unsigned char Index);

void AironetReportAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ChannelLoadReportAction(
 PRTMP_ADAPTER pAd,
 unsigned char Index);

void NoiseHistReportAction(
 PRTMP_ADAPTER pAd,
 unsigned char Index);

void AironetFinalReportAction(
 PRTMP_ADAPTER pAd);

void BeaconReportAction(
 PRTMP_ADAPTER pAd,
 unsigned char Index);

void AironetAddBeaconReport(
 PRTMP_ADAPTER pAd,
 unsigned long Index,
 PMLME_QUEUE_ELEM pElem);

void AironetCreateBeaconReportFromBssTable(
 PRTMP_ADAPTER pAd);

void DBGPRINT_TX_RING(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx);

void DBGPRINT_RX_RING(
 PRTMP_ADAPTER pAd);

signed char ConvertToRssi(
 PRTMP_ADAPTER pAd,
 signed char Rssi,
 unsigned char RssiNumber);



void APAsicEvaluateRxAnt(
 PRTMP_ADAPTER pAd);


void APAsicRxAntEvalTimeout(
 PRTMP_ADAPTER pAd);




unsigned char RTMPCheckWPAframe(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned long DataByteCount,
 unsigned char FromWhichBSSID);

void AES_GTK_KEY_UNWRAP(
 unsigned char *key,
 unsigned char *plaintext,
 unsigned char c_len,
 unsigned char *ciphertext);

unsigned char RTMPCheckRSNIE(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned char DataLen,
 MAC_TABLE_ENTRY *pEntry,
 unsigned char *Offset);

unsigned char RTMPParseEapolKeyData(
 PRTMP_ADAPTER pAd,
 PUCHAR pKeyData,
 unsigned char KeyDataLen,
 unsigned char GroupKeyIndex,
 unsigned char MsgType,
 unsigned char bWPA2,
 MAC_TABLE_ENTRY *pEntry);

void ConstructEapolMsg(
 PRTMP_ADAPTER pAd,
    unsigned char PeerAuthMode,
    unsigned char PeerWepStatus,
    unsigned char MyGroupKeyWepStatus,
    unsigned char MsgType,
    unsigned char DefaultKeyIdx,
    unsigned char *ReplayCounter,
 unsigned char *KeyNonce,
 unsigned char *TxRSC,
 unsigned char *PTK,
 unsigned char *GTK,
 unsigned char *RSNIE,
 unsigned char RSNIE_Len,
    PEAPOL_PACKET pMsg);

void CalculateMIC(
 PRTMP_ADAPTER pAd,
 unsigned char PeerWepStatus,
 unsigned char *PTK,
 PEAPOL_PACKET pMsg);

signed int RTMPSoftDecryptBroadCastData(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 NDIS_802_11_ENCRYPTION_STATUS GroupCipher,
 PCIPHER_KEY pShard_key);

void ConstructEapolKeyData(
 PRTMP_ADAPTER pAd,
 unsigned char PeerAuthMode,
 unsigned char PeerWepStatus,
 unsigned char GroupKeyWepStatus,
 unsigned char MsgType,
 unsigned char DefaultKeyIdx,
 unsigned char bWPA2Capable,
 unsigned char *PTK,
 unsigned char *GTK,
 unsigned char *RSNIE,
 unsigned char RSNIE_LEN,
 PEAPOL_PACKET pMsg);

void RTMPMakeRSNIE(
 PRTMP_ADAPTER pAd,
 unsigned int AuthMode,
 unsigned int WepStatus,
 unsigned char apidx);





unsigned char APWpaMsgTypeSubst(
 unsigned char EAPType,
 signed int *MsgType) ;

MAC_TABLE_ENTRY *PACInquiry(
 PRTMP_ADAPTER pAd,
 unsigned long Wcid);

unsigned char RTMPCheckMcast(
 PRTMP_ADAPTER pAd,
 PEID_STRUCT eid_ptr,
 MAC_TABLE_ENTRY *pEntry);

unsigned char RTMPCheckUcast(
 PRTMP_ADAPTER pAd,
 PEID_STRUCT eid_ptr,
 MAC_TABLE_ENTRY *pEntry);

unsigned char RTMPCheckAUTH(
 PRTMP_ADAPTER pAd,
 PEID_STRUCT eid_ptr,
 MAC_TABLE_ENTRY *pEntry);

void WPAStart4WayHS(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry,
 unsigned long TimeInterval);

void WPAStart2WayGroupHS(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry);

void APWpaEAPPacketAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APWpaEAPOLStartAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APWpaEAPOLLogoffAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APWpaEAPOLKeyAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APWpaEAPOLASFAlertAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void HandleCounterMeasure(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry);

void PeerPairMsg2Action(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry,
 MLME_QUEUE_ELEM *Elem);

void PeerPairMsg4Action(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry,
 MLME_QUEUE_ELEM *Elem);

void CMTimerExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void WPARetryExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void EnqueueStartForPSKExec(
    PVOID SystemSpecific1,
    PVOID FunctionContext,
    PVOID SystemSpecific2,
    PVOID SystemSpecific3);

void RTMPHandleSTAKey(
    PRTMP_ADAPTER pAdapter,
    MAC_TABLE_ENTRY *pEntry,
    MLME_QUEUE_ELEM *Elem);

void PeerGroupMsg2Action(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry,
 void *Msg,
 unsigned int MsgLen);

void PairDisAssocAction(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry,
 unsigned short Reason);

void DisAssocAction(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry,
 unsigned short Reason);

void GREKEYPeriodicExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void CountGTK(
 unsigned char *PMK,
 unsigned char *GNonce,
 unsigned char *AA,
 unsigned char *output,
 unsigned int len);

void GetSmall(
 PVOID pSrc1,
 PVOID pSrc2,
 PUCHAR out,
 unsigned long Length);

void GetLarge(
 PVOID pSrc1,
 PVOID pSrc2,
 PUCHAR out,
 unsigned long Length);

void APGenRandom(
 PRTMP_ADAPTER pAd,
 unsigned char *random);

void AES_GTK_KEY_WRAP(
 unsigned char *key,
 unsigned char *plaintext,
 unsigned char p_len,
 unsigned char *ciphertext);

void WpaSend(
    PRTMP_ADAPTER pAdapter,
    PUCHAR pPacket,
    unsigned long Len);

void APToWirelessSta(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry,
 PUCHAR pHeader802_3,
 unsigned int HdrLen,
 PUCHAR pData,
 unsigned int DataLen,
    unsigned char bClearFrame);

void RTMPAddPMKIDCache(
 PRTMP_ADAPTER pAd,
 signed int apidx,
 PUCHAR pAddr,
 unsigned char *PMKID,
 unsigned char *PMK);

signed int RTMPSearchPMKIDCache(
 PRTMP_ADAPTER pAd,
 signed int apidx,
 PUCHAR pAddr);

void RTMPDeletePMKIDCache(
 PRTMP_ADAPTER pAd,
 signed int apidx,
 signed int idx);

void RTMPMaintainPMKIDCache(
 PRTMP_ADAPTER pAd);

void RTMPSendTriggerFrame(
 PRTMP_ADAPTER pAd,
 PVOID pBuffer,
 unsigned long Length,
 unsigned char TxRate,
 unsigned char bQosNull);



void RTMP_SetPeriodicTimer(
 NDIS_MINIPORT_TIMER *pTimer,
 unsigned long timeout);

void RTMP_OS_Init_Timer(
 PRTMP_ADAPTER pAd,
 NDIS_MINIPORT_TIMER *pTimer,
 TIMER_FUNCTION function,
 PVOID data);

void RTMP_OS_Add_Timer(
 NDIS_MINIPORT_TIMER *pTimer,
 unsigned long timeout);

void RTMP_OS_Mod_Timer(
 NDIS_MINIPORT_TIMER *pTimer,
 unsigned long timeout);


void RTMP_OS_Del_Timer(
 NDIS_MINIPORT_TIMER *pTimer,
 unsigned char *pCancelled);


void RTMP_OS_Release_Packet(
 PRTMP_ADAPTER pAd,
 PQUEUE_ENTRY pEntry);

void RTMPusecDelay(
 unsigned long usec);

signed int os_alloc_mem(
 PRTMP_ADAPTER pAd,
 PUCHAR *mem,
 unsigned long size);

signed int os_free_mem(
 PRTMP_ADAPTER pAd,
 PUCHAR mem);


void RTMP_AllocateSharedMemory(
 PRTMP_ADAPTER pAd,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress,
 PNDIS_PHYSICAL_ADDRESS PhysicalAddress);

void RTMPFreeTxRxRingMemory(
    PRTMP_ADAPTER pAd);

signed int AdapterBlockAllocateMemory(
 PVOID handle,
 PVOID *ppAd);

void RTMP_AllocateTxDescMemory(
 PRTMP_ADAPTER pAd,
 unsigned int Index,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress,
 PNDIS_PHYSICAL_ADDRESS PhysicalAddress);

void RTMP_AllocateFirstTxBuffer(
 PRTMP_ADAPTER pAd,
 unsigned int Index,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress,
 PNDIS_PHYSICAL_ADDRESS PhysicalAddress);

void RTMP_AllocateMgmtDescMemory(
 PRTMP_ADAPTER pAd,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress,
 PNDIS_PHYSICAL_ADDRESS PhysicalAddress);

void RTMP_AllocateRxDescMemory(
 PRTMP_ADAPTER pAd,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress,
 PNDIS_PHYSICAL_ADDRESS PhysicalAddress);

PNDIS_PACKET RTMP_AllocateRxPacketBuffer(
 PRTMP_ADAPTER pAd,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress,
 PNDIS_PHYSICAL_ADDRESS PhysicalAddress);

PNDIS_PACKET RTMP_AllocateTxPacketBuffer(
 PRTMP_ADAPTER pAd,
 unsigned long Length,
 unsigned char Cached,
 PVOID *VirtualAddress);

PNDIS_PACKET RTMP_AllocateFragPacketBuffer(
 PRTMP_ADAPTER pAd,
 unsigned long Length);

void RTMP_QueryPacketInfo(
 PNDIS_PACKET pPacket,
 PACKET_INFO *pPacketInfo,
 PUCHAR *pSrcBufVA,
 unsigned int *pSrcBufLen);

void RTMP_QueryNextPacketInfo(
 PNDIS_PACKET *ppPacket,
 PACKET_INFO *pPacketInfo,
 PUCHAR *pSrcBufVA,
 unsigned int *pSrcBufLen);


void RTMP_FillTxBlkInfo(
 RTMP_ADAPTER *pAd,
 TX_BLK *pTxBlk);


PRTMP_SCATTER_GATHER_LIST
rt_get_sg_list_from_packet(PNDIS_PACKET pPacket, RTMP_SCATTER_GATHER_LIST *sg);


 void announce_802_3_packet(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);


unsigned int BA_Reorder_AMSDU_Annnounce(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket);


unsigned int Handle_AMSDU_Packet(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned long DataSize,
 unsigned char FromWhichBSSID);


void convert_802_11_to_802_3_packet(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 PUCHAR p8023hdr,
 PUCHAR pData,
 unsigned long DataSize,
 unsigned char FromWhichBSSID);


PNET_DEV get_netdev_from_bssid(
 PRTMP_ADAPTER pAd,
 unsigned char FromWhichBSSID);


PNDIS_PACKET duplicate_pkt(
 PRTMP_ADAPTER pAd,
 PUCHAR pHeader802_3,
    unsigned int HdrLen,
 PUCHAR pData,
 unsigned long DataSize,
 unsigned char FromWhichBSSID);


PNDIS_PACKET duplicate_pkt_with_TKIP_MIC(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pOldPkt);

PNDIS_PACKET duplicate_pkt_with_VLAN(
 PRTMP_ADAPTER pAd,
 PUCHAR pHeader802_3,
    unsigned int HdrLen,
 PUCHAR pData,
 unsigned long DataSize,
 unsigned char FromWhichBSSID);


unsigned char VLAN_8023_Header_Copy(
 PRTMP_ADAPTER pAd,
 PUCHAR pHeader802_3,
 unsigned int HdrLen,
 PUCHAR pData,
 unsigned char FromWhichBSSID);


void ba_flush_reordering_timeout_mpdus(
 PRTMP_ADAPTER pAd,
 PBA_REC_ENTRY pBAEntry,
 unsigned long Now32);


void BAOriSessionSetUp(
   PRTMP_ADAPTER pAd,
   MAC_TABLE_ENTRY *pEntry,
   unsigned char TID,
   unsigned short TimeOut,
   unsigned long DelayTime,
   unsigned char isForced);

void BASessionTearDownALL(
 PRTMP_ADAPTER pAd,
 unsigned char Wcid);

unsigned char OS_Need_Clone_Packet(void);


void build_tx_packet(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 PUCHAR pFrame,
 unsigned long FrameLen);

void STAMacTableReset(
 PRTMP_ADAPTER pAd);



void BAOriSessionTearDown(
 PRTMP_ADAPTER pAd,
 unsigned char Wcid,
 unsigned char TID,
 unsigned char bPassive,
 unsigned char bForceSend);

void BARecSessionTearDown(
 PRTMP_ADAPTER pAd,
 unsigned char Wcid,
 unsigned char TID,
 unsigned char bPassive);

unsigned char ba_reordering_resource_init(PRTMP_ADAPTER pAd, int num);
void ba_reordering_resource_release(PRTMP_ADAPTER pAd);

unsigned long AutoChBssInsertEntry(
 PRTMP_ADAPTER pAd,
 PUCHAR pBssid,
 signed char Ssid[],
 unsigned char SsidLen,
 unsigned char ChannelNo,
 signed char Rssi);

void AutoChBssTableInit(
 PRTMP_ADAPTER pAd);

void ChannelInfoInit(
 PRTMP_ADAPTER pAd);

void AutoChBssTableDestroy(
 PRTMP_ADAPTER pAd);

void ChannelInfoDestroy(
 PRTMP_ADAPTER pAd);

unsigned char New_ApAutoSelectChannel(
 PRTMP_ADAPTER pAd);

unsigned char rtstrmactohex(
 char *s1,
 char *s2);

unsigned char rtstrcasecmp(
 char *s1,
 char *s2);

char *rtstrstruncasecmp(
 char *s1,
 char *s2);

char *rtstrstr(
 const char * s1,
 const char * s2);

char *rstrtok(
 char * s,
 const char * ct);


signed int Set_DriverVersion_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_CountryRegion_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_CountryRegionABand_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_WirelessMode_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_Channel_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_ShortSlot_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_TxPower_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_BGProtection_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_TxPreamble_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_RTSThreshold_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_FragThreshold_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_TxBurst_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);


signed int Set_PktAggregate_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);


signed int Set_IEEE80211H_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);







signed int Show_DescInfo_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_ResetStatCounter_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_BASetup_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_BADecline_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_BAOriTearDown_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_BARecTearDown_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtBw_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtMcs_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtGi_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtOpMode_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtStbc_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtHtc_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtExtcha_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtMpduDensity_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtBaWinSize_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtRdg_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtLinkAdapt_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtAmsdu_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtAutoBa_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtProtect_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtMimoPs_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);


signed int Set_ForceShortGI_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_ForceGF_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int SetCommonHT(
 PRTMP_ADAPTER pAd);

signed int Set_SendPSMPAction_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_HtMIMOPSmode_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);


signed int Set_HtTxBASize_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);



void RTMPSendDLSTearDownFrame(
 PRTMP_ADAPTER pAd,
 PUCHAR pDA);


void QueryBATABLE(
 PRTMP_ADAPTER pAd,
 PQUERYBA_TABLE pBAT);


signed int WpaCheckEapCode(
 PRTMP_ADAPTER pAd,
 PUCHAR pFrame,
 unsigned short FrameLen,
 unsigned short OffSet);

void WpaSendMicFailureToWpaSupplicant(
    PRTMP_ADAPTER pAd,
    unsigned char bUnicast);

void SendAssocIEsToWpaSupplicant(
    PRTMP_ADAPTER pAd);
# 6004 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
void Handle_BSS_Width_Trigger_Events(
 PRTMP_ADAPTER pAd);

void build_ext_channel_switch_ie(
 PRTMP_ADAPTER pAd,
 HT_EXT_CHANNEL_SWITCH_ANNOUNCEMENT_IE *pIE);



unsigned char APRxDoneInterruptHandle(
 PRTMP_ADAPTER pAd);

unsigned char STARxDoneInterruptHandle(
 PRTMP_ADAPTER pAd,
 unsigned char argc);


void Indicate_AMPDU_Packet(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);


void Indicate_Legacy_Packet(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);


void Indicate_AMSDU_Packet(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);

void Indicate_EAPOL_Packet(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);

void update_os_packet_info(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);

void wlan_802_11_to_802_3_packet(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 PUCHAR pHeader802_3,
 unsigned char FromWhichBSSID);

unsigned int deaggregate_AMSDU_announce(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 PUCHAR pData,
 unsigned long DataSize);
# 6084 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
unsigned char APFowardWirelessStaToWirelessSta(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 unsigned long FromWhichBSSID);

void Announce_or_Forward_802_3_Packet(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 unsigned char FromWhichBSSID);

void Sta_Announce_or_Forward_802_3_Packet(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 unsigned char FromWhichBSSID);
# 6107 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
PNDIS_PACKET DuplicatePacket(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 unsigned char FromWhichBSSID);


PNDIS_PACKET ClonePacket(
 PRTMP_ADAPTER pAd,
 PNDIS_PACKET pPacket,
 PUCHAR pData,
 unsigned long DataSize);



void CmmRxnonRalinkFrameIndicate(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);

void CmmRxRalinkFrameIndicate(
 PRTMP_ADAPTER pAd,
 MAC_TABLE_ENTRY *pEntry,
 RX_BLK *pRxBlk,
 unsigned char FromWhichBSSID);

void Update_Rssi_Sample(
 PRTMP_ADAPTER pAd,
 RSSI_SAMPLE *pRssi,
 PRXWI_STRUC pRxWI);

PNDIS_PACKET GetPacketFromRxRing(
 PRTMP_ADAPTER pAd,
 PRT28XX_RXD_STRUC pSaveRxD,
 unsigned char *pbReschedule,
 UINT32 *pRxPending);

PNDIS_PACKET RTMPDeFragmentDataFrame(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk);
# 6160 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rtmp.h"
enum {
 DIDmsg_lnxind_wlansniffrm = 0x00000044,
 DIDmsg_lnxind_wlansniffrm_hosttime = 0x00010044,
 DIDmsg_lnxind_wlansniffrm_mactime = 0x00020044,
 DIDmsg_lnxind_wlansniffrm_channel = 0x00030044,
 DIDmsg_lnxind_wlansniffrm_rssi = 0x00040044,
 DIDmsg_lnxind_wlansniffrm_sq = 0x00050044,
 DIDmsg_lnxind_wlansniffrm_signal = 0x00060044,
 DIDmsg_lnxind_wlansniffrm_noise = 0x00070044,
 DIDmsg_lnxind_wlansniffrm_rate = 0x00080044,
 DIDmsg_lnxind_wlansniffrm_istx = 0x00090044,
 DIDmsg_lnxind_wlansniffrm_frmlen = 0x000A0044
};
enum {
 P80211ENUM_msgitem_status_no_value = 0x00
};
enum {
 P80211ENUM_truth_false = 0x00,
 P80211ENUM_truth_true = 0x01
};

typedef struct {
        u_int32_t did;
        u_int16_t status;
        u_int16_t len;
        u_int32_t data;
} p80211item_uint32_t;

typedef struct {
        u_int32_t msgcode;
        u_int32_t msglen;

        u_int8_t devname[16];
        p80211item_uint32_t hosttime;
        p80211item_uint32_t mactime;
        p80211item_uint32_t channel;
        p80211item_uint32_t rssi;
        p80211item_uint32_t sq;
        p80211item_uint32_t signal;
        p80211item_uint32_t noise;
        p80211item_uint32_t rate;
        p80211item_uint32_t istx;
        p80211item_uint32_t frmlen;
} wlan_ng_prism2_header;

void send_monitor_packets(
 PRTMP_ADAPTER pAd,
 RX_BLK *pRxBlk);



struct iw_statistics *rt28xx_get_wireless_stats(
    struct net_device *net_dev);


void RTMPSetDesiredRates(
    PRTMP_ADAPTER pAdapter,
    long Rates);


signed int Set_FixedTxMode_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

static inline char* GetPhyMode(
 int Mode)
{
 switch(Mode)
 {
  case 0:
   return "CCK";

  case 1:
   return "OFDM";

  case 2:
   return "HTMIX";

  case 3:
   return "GREEN";

  default:
   return "N/A";
 }
}

static inline char* GetBW(
 int BW)
{
 switch(BW)
 {
  case 3:
   return "10M";

  case 0:
   return "20M";

  case 1:
   return "40M";

  default:
   return "N/A";
 }
}


void RT28xxThreadTerminate(
 RTMP_ADAPTER *pAd);

unsigned char RT28XXChipsetCheck(
 void *_dev_p);

unsigned char RT28XXNetDevInit(
 void *_dev_p,
 struct net_device *net_dev,
 RTMP_ADAPTER *pAd);

unsigned char RT28XXProbePostConfig(
 void *_dev_p,
 RTMP_ADAPTER *pAd,
 INT32 argc);

void RT28XXDMADisable(
 RTMP_ADAPTER *pAd);

void RT28XXDMAEnable(
 RTMP_ADAPTER *pAd);


signed int rt28xx_ioctl(
 struct net_device *net_dev,
 struct ifreq *rq,
 signed int cmd);



signed int rt28xx_sta_ioctl(
 struct net_device *net_dev,
 struct ifreq *rq,
 signed int cmd);


unsigned char RT28XXSecurityKeyAdd(
 PRTMP_ADAPTER pAd,
 unsigned long apidx,
 unsigned long KeyIdx,
 MAC_TABLE_ENTRY *pEntry);


PNDIS_PACKET GetPacketFromRxRing(
 PRTMP_ADAPTER pAd,
 PRT28XX_RXD_STRUC pSaveRxD,
 unsigned char *pbReschedule,
 UINT32 *pRxPending);


void kill_thread_task(PRTMP_ADAPTER pAd);

void tbtt_tasklet(unsigned long data);





unsigned short RtmpPCI_WriteTxResource(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char bIsLast,
 unsigned short *FreeNumber);

unsigned short RtmpPCI_WriteSingleTxResource(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char bIsLast,
 unsigned short *FreeNumber);

unsigned short RtmpPCI_WriteMultiTxResource(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char frameNum,
 unsigned short *FreeNumber);

unsigned short RtmpPCI_WriteFragTxResource(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char fragNum,
 unsigned short *FreeNumber);

unsigned short RtmpPCI_WriteSubTxResource(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char bIsLast,
 unsigned short *FreeNumber);

void RtmpPCI_FinalWriteTxResource(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned short totalMPDUSize,
 unsigned short FirstTxIdx);

void RtmpPCIDataLastTxIdx(
 PRTMP_ADAPTER pAd,
 unsigned char QueIdx,
 unsigned short LastTxIdx);

void RtmpPCIDataKickOut(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char QueIdx);


int RtmpPCIMgmtKickOut(
 RTMP_ADAPTER *pAd,
 unsigned char QueIdx,
 PNDIS_PACKET pPacket,
 PUCHAR pSrcBufVA,
 unsigned int SrcBufLen);


signed int RTMPCheckRxError(
 PRTMP_ADAPTER pAd,
 PHEADER_802_11 pHeader,
 PRXWI_STRUC pRxWI,
 PRT28XX_RXD_STRUC pRxD);


void RTMPInitPCIeLinkCtrlValue(
 PRTMP_ADAPTER pAd);

void RTMPFindHostPCIDev(
    PRTMP_ADAPTER pAd);

void RTMPPCIeLinkCtrlValueRestore(
 PRTMP_ADAPTER pAd,
 unsigned char Level);

void RTMPPCIeLinkCtrlSetting(
 PRTMP_ADAPTER pAd,
 unsigned short Max);

void RT28xxPciAsicRadioOff(
 PRTMP_ADAPTER pAd,
 unsigned char Level,
 unsigned short TbttNumToNextWakeUp);

unsigned char RT28xxPciAsicRadioOn(
 PRTMP_ADAPTER pAd,
 unsigned char Level);

void RT28xxPciAsicTurnOffRFClk(
 PRTMP_ADAPTER pAd,
 unsigned char Channel);

void RT28xxPciAsicTurnOnRFClk(
 PRTMP_ADAPTER pAd,
 unsigned char Channel);

void RT28xxPciStaAsicForceWakeup(
 PRTMP_ADAPTER pAd,
 unsigned char bFromTx);

void RT28xxPciStaAsicSleepThenAutoWakeup(
 PRTMP_ADAPTER pAd,
 unsigned short TbttNumToNextWakeUp);

void PsPollWakeExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void RadioOnExec(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);


void RT28xxPciMlmeRadioOn(
 PRTMP_ADAPTER pAd);

void RT28xxPciMlmeRadioOFF(
 PRTMP_ADAPTER pAd);





void QBSS_LoadInit(
  RTMP_ADAPTER *pAd);

UINT32 QBSS_LoadElementAppend(
  RTMP_ADAPTER *pAd,
 UINT8 *buf_p);

void QBSS_LoadUpdate(
  RTMP_ADAPTER *pAd);


signed int RTMPShowCfgValue(
 PRTMP_ADAPTER pAd,
 PUCHAR pName,
 PUCHAR pBuf);

PCHAR RTMPGetRalinkAuthModeStr(
    NDIS_802_11_AUTHENTICATION_MODE authMode);

PCHAR RTMPGetRalinkEncryModeStr(
    unsigned short encryMode);
# 66 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/ap.h" 1
# 55 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/ap.h"
unsigned char APBridgeToWirelessSta(
    PRTMP_ADAPTER pAd,
    PUCHAR pHeader,
    unsigned int HdrLen,
    PUCHAR pData,
    unsigned int DataLen,
    unsigned long fromwdsidx);

unsigned char APHandleRxDoneInterrupt(
    PRTMP_ADAPTER pAd);

void APSendPackets(
 NDIS_HANDLE MiniportAdapterContext,
 PPNDIS_PACKET ppPacketArray,
 unsigned int NumberOfPackets);

signed int APSendPacket(
    PRTMP_ADAPTER pAd,
    PNDIS_PACKET pPacket);


signed int APHardTransmit(
 PRTMP_ADAPTER pAd,
 TX_BLK *pTxBlk,
 unsigned char QueIdx);




signed int APCheckRxError(
 PRTMP_ADAPTER pAd,
 PRT28XX_RXD_STRUC pRxD,
 unsigned char Wcid);

unsigned char APCheckClass2Class3Error(
    PRTMP_ADAPTER pAd,
 unsigned long Wcid,
 PHEADER_802_11 pHeader);

void APHandleRxPsPoll(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr,
 unsigned short Aid,
    unsigned char isActive);

void RTMPDescriptorEndianChange(
    PUCHAR pData,
    unsigned long DescriptorType);

void RTMPFrameEndianChange(
    PRTMP_ADAPTER pAd,
    PUCHAR pData,
    unsigned long Dir,
    unsigned char FromRxDoneInt);



void APAssocStateMachineInit(
    PRTMP_ADAPTER pAd,
    STATE_MACHINE *S,
    STATE_MACHINE_FUNC Trans[]);

void APPeerAssocReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APPeerReassocReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APPeerDisassocReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APMlmeDisassocReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APCls3errAction(
    PRTMP_ADAPTER pAd,
 unsigned long Wcid,
    PHEADER_802_11 pHeader);


unsigned short APBuildAssociation(
    PRTMP_ADAPTER pAd,
    MAC_TABLE_ENTRY *pEntry,
    unsigned short CapabilityInfo,
    unsigned char MaxSupportedRateIn500Kbps,
    unsigned char *RSN,
    unsigned char *pRSNLen,
    unsigned char bWmmCapable,
    unsigned long RalinkIe,
 HT_CAPABILITY_IE *pHtCapability,
 unsigned char HtCapabilityLen,
    unsigned short *pAid);



void APAuthStateMachineInit(
    PRTMP_ADAPTER pAd,
    STATE_MACHINE *Sm,
    STATE_MACHINE_FUNC Trans[]);

void APMlmeDeauthReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APCls2errAction(
    PRTMP_ADAPTER pAd,
 unsigned long Wcid,
    PHEADER_802_11 pHeader);



void APAuthRspStateMachineInit(
    PRTMP_ADAPTER pAd,
    PSTATE_MACHINE Sm,
    STATE_MACHINE_FUNC Trans[]);

void APPeerAuthAtAuthRspIdleAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APPeerDeauthReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APPeerAuthSimpleRspGenAndSend(
    PRTMP_ADAPTER pAd,
    PHEADER_802_11 pHdr80211,
    unsigned short Alg,
    unsigned short Seq,
    unsigned short StatusCode);



void APMakeBssBeacon(
    PRTMP_ADAPTER pAd,
 signed int apidx);

void APUpdateBeaconFrame(
    PRTMP_ADAPTER pAd,
 signed int apidx);

void APMakeAllBssBeacon(
    PRTMP_ADAPTER pAd);

void APUpdateAllBeaconFrame(
    PRTMP_ADAPTER pAd);




void APSyncStateMachineInit(
    PRTMP_ADAPTER pAd,
    STATE_MACHINE *Sm,
    STATE_MACHINE_FUNC Trans[]);

void APScanTimeout(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3);

void APInvalidStateWhenScan(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APScanTimeoutAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APPeerProbeReqAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APPeerBeaconAction(
    PRTMP_ADAPTER pAd,
    MLME_QUEUE_ELEM *Elem);

void APMlmeScanReqAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void APPeerBeaconAtScanAction(
 PRTMP_ADAPTER pAd,
 MLME_QUEUE_ELEM *Elem);

void ApSiteSurvey(
 PRTMP_ADAPTER pAd);

void SupportRate(
 PUCHAR SupRate,
 unsigned char SupRateLen,
 PUCHAR ExtRate,
 unsigned char ExtRateLen,
 PUCHAR *Rates,
 PUCHAR RatesLen,
 PUCHAR pMaxSupportRate);



void APWpaStateMachineInit(
    PRTMP_ADAPTER pAd,
    STATE_MACHINE *Sm,
    STATE_MACHINE_FUNC Trans[]);



void APMlmePeriodicExec(
    PRTMP_ADAPTER pAd);

void APMlmeSelectTxRateTable(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry,
 PUCHAR *ppTable,
 PUCHAR pTableSize,
 PUCHAR pInitTxRateIdx);

void APMlmeSetTxRate(
 PRTMP_ADAPTER pAd,
 PMAC_TABLE_ENTRY pEntry,
 PRTMP_TX_RATE_SWITCH pTxRate);

void APMlmeDynamicTxRateSwitching(
    PRTMP_ADAPTER pAd);

unsigned char APMsgTypeSubst(
    PRTMP_ADAPTER pAd,
    PFRAME_802_11 pFrame,
    signed int *Machine,
    signed int *MsgType);

void APQuickResponeForRateUpExec(
    PVOID SystemSpecific1,
    PVOID FunctionContext,
    PVOID SystemSpecific2,
    PVOID SystemSpecific3);


void RTMPSetPiggyBack(
 PRTMP_ADAPTER pAd,
 unsigned char bPiggyBack);

void APAsicEvaluateRxAnt(
 PRTMP_ADAPTER pAd);

void APAsicRxAntEvalTimeout(
 PRTMP_ADAPTER pAd);



void APSwitchChannel(
 PRTMP_ADAPTER pAd,
 signed int Channel);

signed int APInitialize(
    PRTMP_ADAPTER pAd);

void APShutdown(
    PRTMP_ADAPTER pAd);

void APStartUp(
    PRTMP_ADAPTER pAd);

void APStop(
    PRTMP_ADAPTER pAd);

void APCleanupPsQueue(
    PRTMP_ADAPTER pAd,
    PQUEUE_HEADER pQueue);

void MacTableReset(
    PRTMP_ADAPTER pAd);

MAC_TABLE_ENTRY *MacTableInsertEntry(
    PRTMP_ADAPTER pAd,
    PUCHAR pAddr,
 unsigned char apidx,
 unsigned char CleanAll);

unsigned char MacTableDeleteEntry(
    PRTMP_ADAPTER pAd,
 unsigned short wcid,
    PUCHAR pAddr);

MAC_TABLE_ENTRY *MacTableLookup(
    PRTMP_ADAPTER pAd,
    PUCHAR pAddr);

void MacTableMaintenance(
    PRTMP_ADAPTER pAd);

MAC_TABLE_ENTRY *APSsPsInquiry(
    PRTMP_ADAPTER pAd,
    PUCHAR pAddr,
    SST *Sst,
    unsigned short *Aid,
    unsigned char *PsMode,
    unsigned char *Rate);

unsigned char APPsIndicate(
    PRTMP_ADAPTER pAd,
    PUCHAR pAddr,
 unsigned long Wcid,
    unsigned char Psm);

void ApLogEvent(
    PRTMP_ADAPTER pAd,
    PUCHAR pAddr,
    unsigned short Event);

void APUpdateOperationMode(
    PRTMP_ADAPTER pAd);

void APUpdateCapabilityAndErpIe(
 PRTMP_ADAPTER pAd);

unsigned char ApCheckAccessControlList(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr,
 unsigned char Apidx);

void ApUpdateAccessControlList(
    PRTMP_ADAPTER pAd,
    unsigned char Apidx);

void ApEnqueueNullFrame(
 PRTMP_ADAPTER pAd,
 PUCHAR pAddr,
 unsigned char TxRate,
 unsigned char PID,
 unsigned char apidx,
    unsigned char bQosNull,
    unsigned char bEOSP,
    unsigned char OldUP);

void ApSendFrame(
    PRTMP_ADAPTER pAd,
    PVOID pBuffer,
    unsigned long Length,
    unsigned char TxRate,
    unsigned char PID);

void ApEnqueueAckFrame(
    PRTMP_ADAPTER pAd,
    PUCHAR pAddr,
    unsigned char TxRate,
 unsigned char apidx);

unsigned char APAutoSelectChannel(
 PRTMP_ADAPTER pAd,
 unsigned char Optimal);




unsigned char PeerAssocReqCmmSanity(
    PRTMP_ADAPTER pAd,
 unsigned char isRessoc,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pAddr2,
    unsigned short *pCapabilityInfo,
    unsigned short *pListenInterval,
    PUCHAR pApAddr,
    unsigned char *pSsidLen,
    char *Ssid,
    unsigned char *pRatesLen,
    unsigned char Rates[],
    unsigned char *RSN,
    unsigned char *pRSNLen,
    unsigned char *pbWmmCapable,
    unsigned long *pRalinkIe,
    unsigned char *pHtCapabilityLen,
    HT_CAPABILITY_IE *pHtCapability);

unsigned char PeerDisassocReqSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pAddr2,
    unsigned short *Reason);

unsigned char PeerDeauthReqSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pAddr2,
    unsigned short *Reason);

unsigned char APPeerAuthSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
 PUCHAR pAddr1,
    PUCHAR pAddr2,
    unsigned short *Alg,
    unsigned short *Seq,
    unsigned short *Status,
    signed char *ChlgText);

unsigned char APPeerProbeReqSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pAddr2,
    signed char Ssid[],
    unsigned char *SsidLen);

unsigned char APPeerBeaconAndProbeRspSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pAddr2,
    PUCHAR pBssid,
    signed char Ssid[],
    unsigned char *SsidLen,
    unsigned char *BssType,
    unsigned short *BeaconPeriod,
    unsigned char *Channel,
    LARGE_INTEGER *Timestamp,
    unsigned short *CapabilityInfo,
    unsigned char Rate[],
    unsigned char *RateLen,
    unsigned char *ExtendedRateIeExist,
    unsigned char *Erp);

unsigned char PeerDlsReqSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pDA,
    PUCHAR pSA,
    unsigned short *pCapabilityInfo,
    unsigned short *pDlsTimeout);

unsigned char PeerDlsRspSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pDA,
    PUCHAR pSA,
    unsigned short *pCapabilityInfo,
    unsigned short *pStatus);

unsigned char PeerDlsTearDownSanity(
    PRTMP_ADAPTER pAd,
    void *Msg,
    unsigned long MsgLen,
    PUCHAR pDA,
    PUCHAR pSA,
    unsigned short *pReason);




void ReSyncBeaconTime(
 PRTMP_ADAPTER pAd);
# 67 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/dfs.h" 1
# 46 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/dfs.h"
void BbpRadarDetectionStart(
 PRTMP_ADAPTER pAd);

void BbpRadarDetectionStop(
 PRTMP_ADAPTER pAd);

void RadarDetectionStart(
 PRTMP_ADAPTER pAd,
 unsigned char CTS_Protect,
 UINT8 CTSPeriod);

void RadarDetectionStop(
 PRTMP_ADAPTER pAd);

void RadarDetectPeriodic(
 PRTMP_ADAPTER pAd);


unsigned char RadarChannelCheck(
 PRTMP_ADAPTER pAd,
 unsigned char Ch);

unsigned long JapRadarType(
 PRTMP_ADAPTER pAd);

unsigned long RTMPBbpReadRadarDuration(
 PRTMP_ADAPTER pAd);

unsigned long RTMPReadRadarDuration(
 PRTMP_ADAPTER pAd);

void RTMPCleanRadarDuration(
 PRTMP_ADAPTER pAd);

void RTMPPrepareRDCTSFrame(
 PRTMP_ADAPTER pAd,
 PUCHAR pDA,
 unsigned long Duration,
 unsigned char RTSRate,
 unsigned long CTSBaseAddr,
 unsigned char FrameGap);

void RTMPPrepareRadarDetectParams(
 PRTMP_ADAPTER pAd);


signed int Set_ChMovingTime_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);

signed int Set_LongPulseRadarTh_Proc(
 PRTMP_ADAPTER pAd,
 PUCHAR arg);
# 68 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 1 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/chlist.h" 1
# 53 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/chlist.h"
typedef struct _CH_DESP {
 unsigned char FirstChannel;
 unsigned char NumOfCh;
 signed char MaxTxPwr;
 unsigned char Geography;
 unsigned char DfsReq;
} CH_DESP, *PCH_DESP;

typedef struct _CH_REGION {
 unsigned char CountReg[3];
 unsigned char DfsType;
 CH_DESP ChDesp[10];
} CH_REGION, *PCH_REGION;

static CH_REGION ChRegion[] =
{
  {
   "AG",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 100, 11, 30, 2, 0},
    { 0},
   }
  },

  {
   "AR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "AW",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 100, 11, 30, 2, 0},
    { 0},
   }
  },

  {
   "AU",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "AT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 1},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "BS",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "BB",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 100, 11, 30, 2, 0},
    { 0},
   }
  },

  {
   "BM",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 100, 11, 30, 2, 0},
    { 0},
   }
  },

  {
   "BR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 100, 11, 24, 2, 0},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "BE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 18, 1, 0},
    { 52, 4, 18, 1, 0},
    { 0},
   }
  },

  {
   "BG",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 0, 1},
    { 0},
   }
  },

  {
   "CA",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "KY",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 100, 11, 30, 2, 0},
    { 0},
   }
  },

  {
   "CL",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 20, 2, 0},
    { 52, 4, 20, 2, 0},
    { 149, 5, 20, 2, 0},
    { 0},
   }
  },

  {
   "CN",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 27, 2, 0},
    { 0},
   }
  },

  {
   "CO",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 17, 2, 0},
    { 52, 4, 24, 2, 0},
    { 100, 11, 30, 2, 0},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "CR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 17, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "CY",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 24, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "CZ",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 0},
   }
  },

  {
   "DK",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "DO",
   0,
   {
    { 1, 0, 20, 2, 0},
    { 149, 4, 20, 2, 0},
    { 0},
   }
  },

  {
   "EC",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 100, 11, 27, 2, 0},
    { 0},
   }
  },

  {
   "SV",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 30, 2, 1},
    { 149, 4, 36, 2, 1},
    { 0},
   }
  },

  {
   "FI",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "FR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 0},
   }
  },

  {
   "DE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "GR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 0, 1},
    { 0},
   }
  },

  {
   "GU",
   0,
   {
    { 1, 11, 20, 2, 0},
    { 36, 4, 17, 2, 0},
    { 52, 4, 24, 2, 0},
    { 100, 11, 30, 2, 0},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "GT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 17, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "HT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 17, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "HN",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 27, 2, 0},
    { 0},
   }
  },

  {
   "HK",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 0},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "HU",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 0},
   }
  },

  {
   "IS",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "IN",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 24, 1, 0},
    { 0},
   }
  },

  {
   "ID",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 27, 2, 0},
    { 0},
   }
  },

  {
   "ID",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 27, 2, 0},
    { 0},
   }
  },

  {
   "IE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 0, 1},
    { 0},
   }
  },

  {
   "IL",
   0,
   {
    { 1, 3, 20, 1, 0},
    { 4, 6, 20, 2, 0},
    { 10, 4, 20, 1, 0},
    { 0},
   }
  },

  {
   "IT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 0, 1},
    { 0},
   }
  },

  {
   "JP",
   2,
   {
    { 1, 14, 20, 2, 0},
    { 34, 4, 23, 1, 0},
    { 0},
   }
  },

  {
   "JO",
   0,
   {
    { 1, 13, 20, 1, 0},
    { 36, 4, 23, 1, 0},
    { 149, 4, 23, 1, 0},
    { 0},
   }
  },

  {
   "LV",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "LI",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "LT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "LU",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "MY",
   0,
   {
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 149, 5, 20, 2, 0},
    { 0},
   }
  },

  {
   "MT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "MA",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 24, 1, 0},
    { 0},
   }
  },

  {
   "MX",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 5, 30, 1, 0},
    { 0},
   }
  },

  {
   "NL",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 24, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "NZ",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 24, 2, 0},
    { 52, 4, 24, 2, 0},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "NO",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 24, 1, 0},
    { 52, 4, 24, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "PE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 27, 2, 0},
    { 0},
   }
  },

  {
   "PT",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "PL",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "RO",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "RU",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 20, 1, 0},
    { 0},
   }
  },

  {
   "SA",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 149, 4, 23, 2, 0},
    { 0},
   }
  },

  {
   "CS",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 0},
   }
  },

  {
   "SG",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 149, 4, 20, 2, 0},
    { 0},
   }
  },

  {
   "SK",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "SI",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 0},
   }
  },

  {
   "ZA",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 1, 0},
    { 100, 11, 30, 2, 1},
    { 149, 4, 30, 2, 0},
    { 0},
   }
  },

  {
   "KR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 20, 2, 0},
    { 52, 4, 20, 2, 0},
    { 100, 8, 20, 2, 0},
    { 149, 4, 20, 2, 0},
    { 0},
   }
  },

  {
   "ES",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 17, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "SE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "CH",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 1},
    { 52, 4, 23, 1, 1},
    { 0},
   }
  },

  {
   "TW",
   0,
   {
    { 1, 11, 30, 2, 0},
    { 52, 4, 23, 1, 0},
    { 0},
   }
  },

  {
   "TR",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 2, 0},
    { 52, 4, 23, 2, 0},
    { 0},
   }
  },

  {
   "GB",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 36, 4, 23, 1, 0},
    { 52, 4, 23, 1, 1},
    { 100, 11, 30, 2, 1},
    { 0},
   }
  },

  {
   "UA",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 0},
   }
  },

  {
   "AE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 0},
   }
  },

  {
   "US",
   0,
   {
    { 1, 11, 30, 2, 0},
    { 36, 4, 17, 1, 0},
    { 52, 4, 24, 2, 1},
    { 100, 11, 30, 2, 1},
    { 149, 5, 30, 2, 0},
    { 0},
   }
  },

  {
   "VE",
   0,
   {
    { 1, 13, 20, 2, 0},
    { 149, 4, 27, 2, 0},
    { 0},
   }
  },

  {
   "",
   0,
   {
    { 1, 11, 20, 2, 0},
    { 36, 4, 20, 2, 0},
    { 52, 4, 20, 2, 0},
    { 100, 11, 20, 2, 0},
    { 149, 5, 20, 2, 0},
    { 0},
   }
  },
};

static inline PCH_REGION GetChRegion(
 PUCHAR CntryCode)
{
 signed int loop = 0;
 PCH_REGION pChRegion = ((void *)0);

 while (strcmp(ChRegion[loop].CountReg, "") != 0)
 {
  if (strncmp(ChRegion[loop].CountReg, CntryCode, 2) == 0)
  {
   pChRegion = &ChRegion[loop];
   break;
  }
  loop++;
 }

 if (pChRegion == ((void *)0))
  pChRegion = &ChRegion[loop];
 return pChRegion;
}

static inline void ChBandCheck(
 unsigned char PhyMode,
 PUCHAR pChType)
{
 switch(PhyMode)
 {
        case PHY_11A:
  case PHY_11AN_MIXED:
   *pChType = 0;
   break;
        case PHY_11AGN_MIXED:
        case PHY_11ABG_MIXED:
        case PHY_11ABGN_MIXED:
   *pChType = 2;
            break;

  default:
   *pChType = 1;
   break;
 }
}

static inline unsigned char FillChList(
 PRTMP_ADAPTER pAd,
 PCH_DESP pChDesp,
 unsigned char Offset,
 unsigned char increment)
{
 signed int i, j, l;
 unsigned char channel;

 j = Offset;
 for (i = 0; i < pChDesp->NumOfCh; i++)
 {
  channel = pChDesp->FirstChannel + i * increment;
  for (l=0; l<49; l++)
  {
   if (channel == pAd->TxPower[l].Channel)
   {
    pAd->ChannelList[j].Power = pAd->TxPower[l].Power;
    pAd->ChannelList[j].Power2 = pAd->TxPower[l].Power2;
    break;
   }
  }
  if (l == 49)
   continue;

  pAd->ChannelList[j].Channel = pChDesp->FirstChannel + i * increment;
  pAd->ChannelList[j].MaxTxPwr = pChDesp->MaxTxPwr;
  pAd->ChannelList[j].DfsReq = pChDesp->DfsReq;
  j++;
 }
 pAd->ChannelListNum = j;

 return j;
}

static inline void CreateChList(
 PRTMP_ADAPTER pAd,
 PCH_REGION pChRegion,
 unsigned char Geography)
{
 signed int i;
 unsigned char offset = 0;
 PCH_DESP pChDesp;
 unsigned char ChType;
 unsigned char increment;

 if (pChRegion == ((void *)0))
  return;

 ChBandCheck(pAd->CommonCfg.PhyMode, &ChType);

 for (i=0; i<10; i++)
 {
  pChDesp = &pChRegion->ChDesp[i];
  if (pChDesp->FirstChannel == 0)
   break;

  if (ChType == 0)
  {
   if (pChDesp->FirstChannel <= 14)
    continue;
  }
  else if (ChType == 1)
  {
   if (pChDesp->FirstChannel > 14)
    continue;
  }

  if ((pChDesp->Geography == 2)
   || (pChDesp->Geography == Geography))
        {
   if (pChDesp->FirstChannel > 14)
                increment = 4;
            else
                increment = 1;
   offset = FillChList(pAd, pChDesp, offset, increment);
  }
 }
}

static inline void BuildChannelListEx(
 PRTMP_ADAPTER pAd)
{
 PCH_REGION pChReg;

 pChReg = GetChRegion(pAd->CommonCfg.CountryCode);
 CreateChList(pAd, pChReg, pAd->CommonCfg.Geography);
}

static inline void BuildBeaconChList(
 PRTMP_ADAPTER pAd,
 PUCHAR pBuf,
 PULONG pBufLen)
{
 signed int i;
 unsigned long TmpLen;
 PCH_REGION pChRegion;
 PCH_DESP pChDesp;
 unsigned char ChType;

 pChRegion = GetChRegion(pAd->CommonCfg.CountryCode);

 if (pChRegion == ((void *)0))
  return;

 ChBandCheck(pAd->CommonCfg.PhyMode, &ChType);
 *pBufLen = 0;

 for (i=0; i<10; i++)
 {
  pChDesp = &pChRegion->ChDesp[i];
  if (pChDesp->FirstChannel == 0)
   break;

  if (ChType == 0)
  {
   if (pChDesp->FirstChannel <= 14)
    continue;
  }
  else if (ChType == 1)
  {
   if (pChDesp->FirstChannel > 14)
    continue;
  }

  if ((pChDesp->Geography == 2)
   || (pChDesp->Geography == pAd->CommonCfg.Geography))
  {
   MakeOutgoingFrame(pBuf + *pBufLen, &TmpLen,
        1, &pChDesp->FirstChannel,
        1, &pChDesp->NumOfCh,
        1, &pChDesp->MaxTxPwr,
        -1);
   *pBufLen += TmpLen;
  }
 }
}

static inline unsigned char GetExtCh(
 unsigned char Channel,
 unsigned char Direction)
{
 signed char ExtCh;

 if (Direction == 0x1)
  ExtCh = Channel + 4;
 else
  ExtCh = (Channel - 4) > 0 ? (Channel - 4) : 0;

 return ExtCh;
}

static inline unsigned char IsValidChannel(
 PRTMP_ADAPTER pAd,
 unsigned char channel)

{
 signed int i;

 for (i = 0; i < pAd->ChannelListNum; i++)
 {
  if (pAd->ChannelList[i].Channel == channel)
   break;
 }

 if (i == pAd->ChannelListNum)
  return 0;
 else
  return 1;
}

static inline void N_ChannelCheck(
 PRTMP_ADAPTER pAd)
{

 unsigned char Channel = pAd->CommonCfg.Channel;

 if ((pAd->CommonCfg.PhyMode >= PHY_11ABGN_MIXED) && (pAd->CommonCfg.RegTransmitSetting.field.BW == 1))
 {
  if (Channel > 14)
  {
   if ((Channel == 36) || (Channel == 44) || (Channel == 52) || (Channel == 60) || (Channel == 100) || (Channel == 108) ||
       (Channel == 116) || (Channel == 124) || (Channel == 132) || (Channel == 149) || (Channel == 157))
   {
    pAd->CommonCfg.RegTransmitSetting.field.EXTCHA = 0x1;
   }
   else if ((Channel == 40) || (Channel == 48) || (Channel == 56) || (Channel == 64) || (Channel == 104) || (Channel == 112) ||
     (Channel == 120) || (Channel == 128) || (Channel == 136) || (Channel == 153) || (Channel == 161))
   {
    pAd->CommonCfg.RegTransmitSetting.field.EXTCHA = 0x3;
   }
   else
   {
    pAd->CommonCfg.RegTransmitSetting.field.BW = 0;
   }
  }
  else
  {
   do
   {
    unsigned char ExtCh;
    unsigned char Dir = pAd->CommonCfg.RegTransmitSetting.field.EXTCHA;
    ExtCh = GetExtCh(Channel, Dir);
    if (IsValidChannel(pAd, ExtCh))
     break;

    Dir = (Dir == 0x1) ? 0x3 : 0x1;
    ExtCh = GetExtCh(Channel, Dir);
    if (IsValidChannel(pAd, ExtCh))
    {
     pAd->CommonCfg.RegTransmitSetting.field.EXTCHA = Dir;
     break;
    }
    pAd->CommonCfg.RegTransmitSetting.field.BW = 0;
   } while(0);
  }
 }
}
# 69 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/include/rt_config.h" 2
# 39 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c" 2

unsigned int FCSTAB_32[256] =
{
 0x00000000, 0x77073096, 0xee0e612c, 0x990951ba,
 0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3,
 0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988,
 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91,
 0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de,
 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
 0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec,
 0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5,
 0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172,
 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
 0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940,
 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
 0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116,
 0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f,
 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,
 0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a,
 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
 0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818,
 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
 0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e,
 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457,
 0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c,
 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
 0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2,
 0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb,
 0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0,
 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9,
 0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086,
 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
 0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4,
 0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad,
 0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a,
 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683,
 0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8,
 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
 0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe,
 0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7,
 0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc,
 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
 0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252,
 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
 0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60,
 0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79,
 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f,
 0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04,
 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
 0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a,
 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
 0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38,
 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21,
 0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e,
 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
 0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c,
 0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45,
 0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2,
 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db,
 0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0,
 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
 0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6,
 0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf,
 0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94,
 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d
};
# 139 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void RTMPInitWepEngine(
 PRTMP_ADAPTER pAd,
 PUCHAR pKey,
 unsigned char KeyId,
 unsigned char KeyLen,
 PUCHAR pDest)
{
 unsigned int i;
 unsigned char WEPKEY[] = {

  0x00, 0x11, 0x22,

  0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC
 };

 pAd->PrivateInfo.FCSCRC32 = 0xffffffff;


    if (pAd->StaCfg.bCkipOn && (pAd->StaCfg.CkipFlag & 0x10) && (pAd->OpMode == 0))
    {
        ARCFOUR_INIT(&pAd->PrivateInfo.WEPCONTEXT, pKey, KeyLen);
        memmove(pDest, pKey, 3);
    }
    else

    {
  memmove(WEPKEY + 3, pKey, KeyLen);

        for(i = 0; i < 3; i++)
   WEPKEY[i] = RandomByte(pAd);
  ARCFOUR_INIT(&pAd->PrivateInfo.WEPCONTEXT, WEPKEY, KeyLen + 3);

  memmove(pDest, WEPKEY, 3);
    }
 *(pDest+3) = (KeyId << 6);

}
# 198 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void RTMPEncryptData(
 PRTMP_ADAPTER pAd,
 PUCHAR pSrc,
 PUCHAR pDest,
 unsigned int Len)
{
 pAd->PrivateInfo.FCSCRC32 = RTMP_CALC_FCS32(pAd->PrivateInfo.FCSCRC32, pSrc, Len);
 ARCFOUR_ENCRYPT(&pAd->PrivateInfo.WEPCONTEXT, pDest, pSrc, Len);
}
# 228 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
unsigned char RTMPSoftDecryptWEP(
 PRTMP_ADAPTER pAd,
 PUCHAR pData,
 unsigned long DataByteCnt,
 PCIPHER_KEY pGroupKey)
{
 unsigned int trailfcs;
 unsigned int crc32;
 unsigned char KeyIdx;
 unsigned char WEPKEY[] = {

  0x00, 0x11, 0x22,

  0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC
 };
 unsigned char *pPayload = (unsigned char *)pData + 24;
 unsigned long payload_len = DataByteCnt - 24;

 memmove(WEPKEY, pPayload, 3);

 KeyIdx = (*(pPayload + 3) & 0xc0) >> 6;
 if (pGroupKey[KeyIdx].KeyLen == 0)
  return (0);

 memmove(WEPKEY + 3, pGroupKey[KeyIdx].Key, pGroupKey[KeyIdx].KeyLen);
 ARCFOUR_INIT(&pAd->PrivateInfo.WEPCONTEXT, WEPKEY, pGroupKey[KeyIdx].KeyLen + 3);
 ARCFOUR_DECRYPT(&pAd->PrivateInfo.WEPCONTEXT, pPayload, pPayload + 4, payload_len - 4);
 memmove(&trailfcs, pPayload + payload_len - 8, 4);
 crc32 = RTMP_CALC_FCS32(0xffffffff, pPayload, payload_len - 8);
 crc32 ^= 0xffffffff;

    if(crc32 != ((UINT32)(trailfcs)))
    {
  ;
  return (0);
 }
 return (1);
}
# 287 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void ARCFOUR_INIT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pKey,
 unsigned int KeyLen)
{
 unsigned char t, u;
 unsigned int keyindex;
 unsigned int stateindex;
 PUCHAR state;
 unsigned int counter;

 state = Ctx->STATE;
 Ctx->X = 0;
 Ctx->Y = 0;
 for (counter = 0; counter < 256; counter++)
  state[counter] = (unsigned char)counter;
 keyindex = 0;
 stateindex = 0;
 for (counter = 0; counter < 256; counter++)
 {
  t = state[counter];
  stateindex = (stateindex + pKey[keyindex] + t) & 0xff;
  u = state[stateindex];
  state[stateindex] = t;
  state[counter] = u;
  if (++keyindex >= KeyLen)
   keyindex = 0;
 }
}
# 333 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
unsigned char ARCFOUR_BYTE(
 PARCFOURCONTEXT Ctx)
{
  unsigned int x;
  unsigned int y;
  unsigned char sx, sy;
  PUCHAR state;

  state = Ctx->STATE;
  x = (Ctx->X + 1) & 0xff;
  sx = state[x];
  y = (sx + Ctx->Y) & 0xff;
  sy = state[y];
  Ctx->X = x;
  Ctx->Y = y;
  state[y] = sx;
  state[x] = sy;

  return(state[(sx + sy) & 0xff]);

}
# 374 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void ARCFOUR_DECRYPT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pDest,
 PUCHAR pSrc,
 unsigned int Len)
{
 unsigned int i;

 for (i = 0; i < Len; i++)
  pDest[i] = pSrc[i] ^ ARCFOUR_BYTE(Ctx);
}
# 407 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void ARCFOUR_ENCRYPT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pDest,
 PUCHAR pSrc,
 unsigned int Len)
{
 unsigned int i;

 for (i = 0; i < Len; i++)
  pDest[i] = pSrc[i] ^ ARCFOUR_BYTE(Ctx);
}
# 435 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void WPAARCFOUR_ENCRYPT(
 PARCFOURCONTEXT Ctx,
 PUCHAR pDest,
 PUCHAR pSrc,
 unsigned int Len)
{
 unsigned int i;

 for (i = 0; i < 256; i++)
            ARCFOUR_BYTE(Ctx);

 for (i = 0; i < Len; i++)
  pDest[i] = pSrc[i] ^ ARCFOUR_BYTE(Ctx);
}
# 471 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
unsigned int RTMP_CALC_FCS32(
 unsigned int Fcs,
 PUCHAR Cp,
 signed int Len)
{
 while (Len--)
    Fcs = (((Fcs) >> 8) ^ FCSTAB_32[((Fcs) ^ (*Cp++)) & 0xff]);

 return (Fcs);
}
# 499 "/home/davidhu/svn.32M/HW/ralink/RT2860/v1.6.1.0/common/rtmp_wep.c"
void RTMPSetICV(
 PRTMP_ADAPTER pAd,
 PUCHAR pDest)
{
 pAd->PrivateInfo.FCSCRC32 ^= 0xffffffff;
 pAd->PrivateInfo.FCSCRC32 = ((UINT32)(pAd->PrivateInfo.FCSCRC32));

 ARCFOUR_ENCRYPT(&pAd->PrivateInfo.WEPCONTEXT, pDest, (PUCHAR) &pAd->PrivateInfo.FCSCRC32, 4);
}
