# 1 "e2fsprogs/ext2fs/expanddir.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "e2fsprogs/ext2fs/expanddir.c"
# 12 "e2fsprogs/ext2fs/expanddir.c"
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/features.h" 1 3 4
# 262 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/features.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_config.h" 1 3 4
# 263 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/features.h" 2 3 4
# 303 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/features.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/cdefs.h" 1 3 4
# 304 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/features.h" 2 3 4
# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 2 3 4





# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 214 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 2 3 4

# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/types.h" 1 3 4
# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/types.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 30 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/types.h" 2 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/kernel_types.h" 1 3 4
# 37 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/kernel_types.h" 3 4
typedef unsigned int __kernel_dev_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
# 48 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/kernel_types.h" 3 4
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
typedef __kernel_dev_t __kernel_old_dev_t;
typedef long long __kernel_loff_t;



typedef struct {
 long val[2];
} __kernel_fsid_t;
# 31 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;

__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef long long int __quad_t;
# 50 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/types.h" 3 4
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;

typedef __quad_t *__qaddr_t;

typedef __u_quad_t __dev_t;
typedef __u_int __uid_t;
typedef __u_int __gid_t;
typedef __u_long __ino_t;
typedef __u_int __mode_t;
typedef __u_int __nlink_t;
typedef long int __off_t;
typedef __quad_t __loff_t;
typedef int __pid_t;
typedef int __ssize_t;
typedef __u_long __rlim_t;
typedef __u_quad_t __rlim64_t;
typedef __u_int __id_t;

typedef struct
  {
    int __val[2];
  } __fsid_t;


typedef int __daddr_t;
typedef char *__caddr_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __swblk_t;

typedef long int __clock_t;


typedef int __clockid_t;


typedef int __timer_t;





typedef int __key_t;


typedef long int __ipc_pid_t;



typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef __quad_t __blkcnt64_t;


typedef __u_long __fsblkcnt_t;
typedef __u_quad_t __fsblkcnt64_t;


typedef __u_long __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;


typedef __u_quad_t __ino64_t;


typedef __loff_t __off64_t;


typedef long int __t_scalar_t;
typedef unsigned long int __t_uscalar_t;


typedef int __intptr_t;


typedef unsigned int __socklen_t;




# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/pthreadtypes.h" 1 3 4
# 23 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/pthreadtypes.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sched.h" 1 3 4
# 68 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sched.h" 3 4
struct __sched_param
  {
    int __sched_priority;
  };
# 24 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/pthreadtypes.h" 2 3 4


struct _pthread_fastlock
{
  long int __status;
  int __spinlock;

};



typedef struct _pthread_descr_struct *_pthread_descr;





typedef struct __pthread_attr_s
{
  int __detachstate;
  int __schedpolicy;
  struct __sched_param __schedparam;
  int __inheritsched;
  int __scope;
  size_t __guardsize;
  int __stackaddr_set;
  void *__stackaddr;
  size_t __stacksize;
} pthread_attr_t;



typedef struct
{
  struct _pthread_fastlock __c_lock;
  _pthread_descr __c_waiting;
} pthread_cond_t;



typedef struct
{
  int __dummy;
} pthread_condattr_t;


typedef unsigned int pthread_key_t;





typedef struct
{
  int __m_reserved;
  int __m_count;
  _pthread_descr __m_owner;
  int __m_kind;
  struct _pthread_fastlock __m_lock;
} pthread_mutex_t;



typedef struct
{
  int __mutexkind;
} pthread_mutexattr_t;



typedef int pthread_once_t;
# 140 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;
# 144 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/types.h" 2 3 4
# 37 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 2 3 4









typedef struct __STDIO_FILE_STRUCT FILE;





# 62 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
typedef struct __STDIO_FILE_STRUCT __FILE;
# 72 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 1 3 4
# 81 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 326 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 3 4
typedef int wchar_t;
# 82 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 2 3 4





# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/wchar.h" 1 3 4
# 52 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/wchar.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 355 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 53 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/wchar.h" 2 3 4

# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/wchar.h" 1 3 4
# 55 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/wchar.h" 2 3 4
# 81 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/wchar.h" 3 4
typedef struct
{
 wchar_t __mask;
 wchar_t __wc;
} __mbstate_t;
# 88 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 2 3 4
# 119 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_mutex.h" 1 3 4
# 15 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_mutex.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 1 3 4
# 20 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sched.h" 1 3 4
# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sched.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 1 3 4
# 118 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 30 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sched.h" 2 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sched.h" 1 3 4
# 47 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg) ;



# 33 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sched.h" 2 3 4







extern int sched_setparam (__pid_t __pid, __const struct sched_param *__param)
     ;


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) ;


extern int sched_setscheduler (__pid_t __pid, int __policy,
          __const struct sched_param *__param) ;


extern int sched_getscheduler (__pid_t __pid) ;


extern int sched_yield (void) ;


extern int sched_get_priority_max (int __algorithm) ;


extern int sched_get_priority_min (int __algorithm) ;


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) ;


# 21 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 2 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 1 3 4
# 30 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4








# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 39 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 2 3 4



# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/time.h" 1 3 4
# 38 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/time.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_clk_tck.h" 1 3 4
# 39 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/time.h" 2 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 2 3 4
# 58 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4


typedef __time_t time_t;



# 92 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4
typedef __timer_t timer_t;
# 129 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;



  long int tm_gmtoff;
  __const char *tm_zone;





};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4



extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;



extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__const__));



extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) ;

# 243 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) ;



extern struct tm *localtime (__const time_t *__timer) ;





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) ;



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) ;





extern char *asctime (__const struct tm *__tp) ;


extern char *ctime (__const time_t *__timer) ;







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) ;


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) ;
# 299 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4
extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) ;
# 329 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year) __attribute__ ((__const__));
# 344 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp) ;
# 438 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/time.h" 3 4

# 22 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 2 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/signal.h" 1 3 4
# 31 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/signal.h" 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sigset.h" 1 3 4
# 23 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/signal.h" 2 3 4
# 48 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/signal.h" 3 4
typedef __sigset_t sigset_t;
# 373 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/signal.h" 3 4

# 25 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 2 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/pthreadtypes.h" 1 3 4
# 26 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 2 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/initspin.h" 1 3 4
# 27 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 2 3 4






# 62 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};

enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};

enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};

enum
{
  PTHREAD_MUTEX_ADAPTIVE_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_TIMED_NP
# 103 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
};

enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 134 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};



enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 166 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_create (pthread_t *__restrict __thread_id,
      __const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) ;


extern pthread_t pthread_self (void) ;


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2) ;


extern void pthread_exit (void *__retval)
     __attribute__ ((__noreturn__));




extern int pthread_join (pthread_t __th, void **__thread_return) ;





extern int pthread_detach (pthread_t __th) ;







extern int pthread_attr_init (pthread_attr_t *__attr) ;


extern int pthread_attr_destroy (pthread_attr_t *__attr) ;


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate) ;


extern int pthread_attr_getdetachstate (__const pthread_attr_t *__attr,
     int *__detachstate) ;


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           __const struct sched_param *__restrict
           __param) ;


extern int pthread_attr_getschedparam (__const pthread_attr_t *__restrict
           __attr,
           struct sched_param *__restrict __param)
     ;


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     ;


extern int pthread_attr_getschedpolicy (__const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     ;


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit) ;


extern int pthread_attr_getinheritsched (__const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     ;


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     ;


extern int pthread_attr_getscope (__const pthread_attr_t *__restrict __attr,
      int *__restrict __scope) ;
# 263 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr) ;


extern int pthread_attr_getstackaddr (__const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     ;
# 291 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize) ;


extern int pthread_attr_getstacksize (__const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     ;
# 312 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      __const struct sched_param *__param)
     ;


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     ;
# 346 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_mutex_init (pthread_mutex_t *__restrict __mutex,
          __const pthread_mutexattr_t *__restrict
          __mutex_attr) ;


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex) ;


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex) ;


extern int pthread_mutex_lock (pthread_mutex_t *__mutex) ;
# 367 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_mutex_unlock (pthread_mutex_t *__mutex) ;






extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr) ;


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr) ;


extern int pthread_mutexattr_getpshared (__const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared) ;


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared) ;
# 405 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         __const pthread_condattr_t *__restrict
         __cond_attr) ;


extern int pthread_cond_destroy (pthread_cond_t *__cond) ;


extern int pthread_cond_signal (pthread_cond_t *__cond) ;


extern int pthread_cond_broadcast (pthread_cond_t *__cond) ;



extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex) ;





extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __const struct timespec *__restrict
       __abstime) ;




extern int pthread_condattr_init (pthread_condattr_t *__attr) ;


extern int pthread_condattr_destroy (pthread_condattr_t *__attr) ;


extern int pthread_condattr_getpshared (__const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared) ;


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) ;
# 577 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *)) ;


extern int pthread_key_delete (pthread_key_t __key) ;


extern int pthread_setspecific (pthread_key_t __key,
    __const void *__pointer) ;


extern void *pthread_getspecific (pthread_key_t __key) ;
# 597 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) ;






extern int pthread_setcancelstate (int __state, int *__oldstate) ;



extern int pthread_setcanceltype (int __type, int *__oldtype) ;


extern int pthread_cancel (pthread_t __thread_id) ;




extern void pthread_testcancel (void) ;
# 631 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern void _pthread_cleanup_push (struct _pthread_cleanup_buffer *__buffer,
       void (*__routine) (void *),
       void *__arg) ;







extern void _pthread_cleanup_pop (struct _pthread_cleanup_buffer *__buffer,
      int __execute) ;
# 681 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sigthread.h" 1 3 4
# 31 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask);


extern int pthread_kill (pthread_t __thread_id, int __signo) ;
# 682 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 2 3 4
# 697 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) ;




extern void pthread_kill_other_threads_np (void) ;


# 16 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_mutex.h" 2 3 4
# 120 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 2 3 4
# 170 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
typedef struct {
 __off_t __pos;

 __mbstate_t __mbstate;


 int __mblen_pending;

} __STDIO_fpos_t;


typedef struct {
 __off64_t __pos;

 __mbstate_t __mbstate;


 int __mblen_pending;

} __STDIO_fpos64_t;




typedef __off64_t __offmax_t;







typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __bufsize);
typedef __ssize_t __io_write_fn(void *__cookie,
        __const char *__buf, size_t __bufsize);




typedef int __io_seek_fn(void *__cookie, __offmax_t *__pos, int __whence);
typedef int __io_close_fn(void *__cookie);

typedef struct {
 __io_read_fn *read;
 __io_write_fn *write;
 __io_seek_fn *seek;
 __io_close_fn *close;
} _IO_cookie_io_functions_t;
# 233 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
struct __STDIO_FILE_STRUCT {
 unsigned short __modeflags;


 unsigned char __ungot_width[2];






 int __filedes;

 unsigned char *__bufstart;
 unsigned char *__bufend;
 unsigned char *__bufpos;
 unsigned char *__bufread;


 unsigned char *__bufgetc_u;


 unsigned char *__bufputc_u;





 struct __STDIO_FILE_STRUCT *__nextopen;


 void *__cookie;
 _IO_cookie_io_functions_t __gcs;


 wchar_t __ungot[2];


 __mbstate_t __state;





 int __user_locking;
 pthread_mutex_t __lock;





};
# 383 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
extern int __fgetc_unlocked(FILE *__stream);
extern int __fputc_unlocked(int __c, FILE *__stream);
# 402 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
extern FILE *__stdin;
# 461 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/uClibc_stdio.h" 3 4
extern FILE *__stdout;
# 73 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 2 3 4



# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 1 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 77 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 2 3 4






typedef __STDIO_fpos64_t fpos_t;


# 131 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/stdio_lim.h" 1 3 4
# 132 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;







extern int remove (__const char *__filename) ;

extern int rename (__const char *__old, __const char *__new) ;




# 160 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64");
# 171 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern char *tmpnam (char *__s) ;





extern char *tmpnam_r (char *__s) ;
# 189 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__malloc__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 214 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 228 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4

# 245 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern FILE *fopen (__const char *__restrict __filename, __const char *__restrict __modes) __asm__ ("" "fopen64");

extern FILE *freopen (__const char *__restrict __filename, __const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64");








# 266 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) ;
# 289 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) ;





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) ;





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));

# 383 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...);




extern int scanf (__const char *__restrict __format, ...);

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) ;

# 425 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 449 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 463 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 496 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
# 515 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream);






extern char *gets (char *__s);

# 579 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream);




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 632 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream);
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream);




extern void rewind (FILE *__stream);

# 687 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4

# 701 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64");

extern int fsetpos (FILE *__stream, __const fpos_t *__pos) __asm__ ("" "fsetpos64");







# 719 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4


extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;




extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;








extern void perror (__const char *__s);

# 756 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
# 771 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes);





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
# 811 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;
# 858 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdio.h" 3 4

# 13 "e2fsprogs/ext2fs/expanddir.c" 2
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4





# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 34 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (2)));

# 138 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 173 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 189 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nonnull__ (2, 3)));
# 248 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 262 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4


extern char *strerror (int __errnum) ;


extern char *__glibc_strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nonnull__ (2)));
extern int __xpg_strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nonnull__ (2)));
# 305 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__const__));
# 342 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 373 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nonnull__ (1, 2)));
# 421 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/string.h" 3 4
extern size_t strlcat(char *__restrict dst, const char *__restrict src,
                      size_t n) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlcpy(char *__restrict dst, const char *__restrict src,
                      size_t n) __attribute__ ((__nonnull__ (1, 2)));



# 14 "e2fsprogs/ext2fs/expanddir.c" 2
# 1 "e2fsprogs/ext2fs/../e2fsbb.h" 1
# 11 "e2fsprogs/ext2fs/../e2fsbb.h"
# 1 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 1
# 28 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h"
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 1 3 4
# 35 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 36 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 2 3 4


# 95 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;



# 143 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern size_t _stdlib_mb_cur_max (void) ;






extern double atof (__const char *__nptr) __attribute__ ((__pure__));


extern int atoi (__const char *__nptr) __attribute__ ((__pure__));

extern long int atol (__const char *__nptr) __attribute__ ((__pure__));





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__pure__));






extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr) ;

# 185 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;

# 309 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern char *l64a (long int __n) ;


extern long int a64l (__const char *__s) __attribute__ ((__pure__));




# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;





typedef __ino64_t ino_t;
# 61 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;







typedef __off64_t off_t;
# 99 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 146 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 147 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 190 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 212 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/endian.h" 1 3 4
# 37 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/endian.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/endian.h" 1 3 4
# 38 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/endian.h" 2 3 4
# 213 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 2 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 1 3 4
# 31 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/select.h" 1 3 4
# 32 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 2 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sigset.h" 1 3 4
# 35 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 2 3 4
# 45 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/time.h" 1 3 4
# 73 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 2 3 4



typedef long int __fd_mask;







typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 89 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 3 4







extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout) ;
# 112 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/select.h" 3 4

# 216 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 2 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/sysmacros.h" 1 3 4
# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/sysmacros.h" 3 4
__extension__
static __inline unsigned int gnu_dev_major (unsigned long long int __dev)
     ;
__extension__
static __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;
__extension__
static __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
       unsigned int __minor)
     ;


__extension__ static __inline unsigned int
gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ static __inline unsigned int
gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ static __inline unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 219 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 2 3 4
# 243 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;
# 262 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/types.h" 3 4

# 318 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 2 3 4






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf) ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf) ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf) ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;
# 390 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;



extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3]) ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3]) ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3]) ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };



extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;



extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result) ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result) ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result) ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result) ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer) ;









extern void *malloc (size_t __size) __attribute__ ((__malloc__));

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__malloc__));







extern void *realloc (void *__ptr, size_t __size) __attribute__ ((__malloc__));

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;



# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/alloca.h" 1 3 4
# 25 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/alloca.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 26 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/alloca.h" 2 3 4







extern void *alloca (size_t __size) ;






# 484 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__malloc__));
# 497 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) ;





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) __attribute__ ((__noreturn__));

# 529 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4


extern char *getenv (__const char *__name) ;




extern char *__secure_getenv (__const char *__name) ;





extern int putenv (char *__string) ;





extern int setenv (__const char *__name, __const char *__value, int __replace)
     ;


extern int unsetenv (__const char *__name) ;
# 568 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern int clearenv (void) ;
# 577 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern char *mktemp (char *__template) ;
# 591 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64");
# 607 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) ;








extern int system (__const char *__command);

# 627 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar);



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar);



extern int abs (int __x) __attribute__ ((__const__));
extern long int labs (long int __x) __attribute__ ((__const__));












extern div_t div (int __numer, int __denom)
     __attribute__ ((__const__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__const__));

# 685 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4



extern int mblen (__const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     ;

# 714 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4
extern int rpmatch (__const char *__response) ;
# 774 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdlib.h" 3 4

# 29 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 1 3 4
# 105 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 30 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 1 3 4
# 96 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 3 4


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/stat.h" 1 3 4
# 37 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/stat.h" 3 4
struct stat
  {
 __dev_t st_dev;
    long int st_pad1[3];



    __ino64_t st_ino;

    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;






    long int st_pad2[3];
    __off64_t st_size;





    __time_t st_atime;
    long int __reserved0;
    __time_t st_mtime;
    long int __reserved1;
    __time_t st_ctime;
    long int __reserved2;
    __blksize_t st_blksize;



    long int st_pad4;
    __blkcnt64_t st_blocks;

    long int st_pad5[14];
  };
# 99 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 2 3 4
# 208 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "stat64");



extern int fstat (int __fd, struct stat *__buf) __asm__ ("" "fstat64");
# 232 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 3 4
extern int lstat (__const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "lstat64");
# 249 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 3 4
extern int chmod (__const char *__file, __mode_t __mode) ;



extern int fchmod (int __fd, __mode_t __mode) ;





extern __mode_t umask (__mode_t __mask) ;
# 268 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/stat.h" 3 4
extern int mkdir (__const char *__path, __mode_t __mode) ;





extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     ;



extern int mkfifo (__const char *__path, __mode_t __mode) ;


# 31 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2

# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 1 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
# 175 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
extern reg_syntax_t re_syntax_options;
# 293 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
typedef enum
{




  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;
# 333 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
struct re_pattern_buffer
{




  unsigned char *buffer;


  unsigned long int allocated;


  unsigned long int used;


  reg_syntax_t syntax;




  char *fastmap;





  char * translate;


  size_t re_nsub;






  unsigned can_be_null : 1;
# 378 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
  unsigned regs_allocated : 2;



  unsigned fastmap_accurate : 1;



  unsigned no_sub : 1;



  unsigned not_bol : 1;


  unsigned not_eol : 1;


  unsigned newline_anchor : 1;


};

typedef struct re_pattern_buffer regex_t;


typedef int regoff_t;




struct re_registers
{
  unsigned num_regs;
  regoff_t *start;
  regoff_t *end;
};
# 428 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;
# 454 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
extern reg_syntax_t re_set_syntax (reg_syntax_t syntax);




extern const char *re_compile_pattern
  (const char *pattern, size_t length, struct re_pattern_buffer *buffer);






extern int re_compile_fastmap (struct re_pattern_buffer *buffer);







extern int re_search
  (struct re_pattern_buffer *buffer, const char *string, int length, int start, int range, struct re_registers *regs);





extern int re_search_2
  (struct re_pattern_buffer *buffer, const char *string1, int length1, const char *string2, int length2, int start, int range, struct re_registers *regs, int stop);






extern int re_match
  (struct re_pattern_buffer *buffer, const char *string, int length, int start, struct re_registers *regs);




extern int re_match_2
  (struct re_pattern_buffer *buffer, const char *string1, int length1, const char *string2, int length2, int start, struct re_registers *regs, int stop);
# 514 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
extern void re_set_registers
  (struct re_pattern_buffer *buffer, struct re_registers *regs, unsigned num_regs, regoff_t *starts, regoff_t *ends);
# 547 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/regex.h" 3 4
extern int regcomp (regex_t *__restrict __preg, const char *__restrict __pattern, int __cflags);



extern int regexec (const regex_t *__restrict __preg, const char *__restrict __string, size_t __nmatch, regmatch_t __pmatch[__restrict], int __eflags);




extern size_t regerror (int __errcode, const regex_t *__preg, char *__errbuf, size_t __errbuf_size);


extern void regfree (regex_t *__preg);
# 33 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/termios.h" 1 3 4
# 36 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/termios.h" 3 4




# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/termios.h" 1 3 4
# 24 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/termios.h" 3 4
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;


struct termios
  {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
  };
# 41 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/termios.h" 2 3 4
# 49 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/termios.h" 3 4
extern speed_t cfgetospeed (__const struct termios *__termios_p) ;


extern speed_t cfgetispeed (__const struct termios *__termios_p) ;


extern int cfsetospeed (struct termios *__termios_p, speed_t __speed) ;


extern int cfsetispeed (struct termios *__termios_p, speed_t __speed) ;



extern int cfsetspeed (struct termios *__termios_p, speed_t __speed) ;




extern int tcgetattr (int __fd, struct termios *__termios_p) ;



extern int tcsetattr (int __fd, int __optional_actions,
        __const struct termios *__termios_p) ;




extern void cfmakeraw (struct termios *__termios_p) ;



extern int tcsendbreak (int __fd, int __duration) ;


extern int tcdrain (int __fd) ;



extern int tcflush (int __fd, int __queue_selector) ;



extern int tcflow (int __fd, int __action) ;
# 102 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/termios.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/sys/ttydefaults.h" 1 3 4
# 103 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/termios.h" 2 3 4



# 34 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdint.h" 1 3 4
# 30 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdint.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/wordsize.h" 1 3 4
# 31 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdint.h" 2 3 4
# 51 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 128 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 140 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 35 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2

# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 1 3 4
# 27 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 3 4



enum
  {
    IPPROTO_IP = 0,

    IPPROTO_HOPOPTS = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_IPV6 = 41,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MTP = 92,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };



typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };
# 190 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t u6_addr8[16];
 uint16_t u6_addr16[8];
 uint32_t u6_addr32[4];
      } in6_u;



  };

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;







# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 1 3 4
# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 30 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 2 3 4

# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/limits.h" 1 3 4
# 11 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/limits.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/syslimits.h" 1 3 4






# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/limits.h" 1 3 4
# 122 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/limits.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/limits.h" 1 3 4
# 144 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/limits.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/posix1_lim.h" 1 3 4
# 130 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/posix1_lim.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/local_lim.h" 1 3 4
# 36 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/local_lim.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/linux/limits.h" 1 3 4
# 37 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/local_lim.h" 2 3 4
# 131 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/posix1_lim.h" 2 3 4
# 145 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/limits.h" 2 3 4



# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/posix2_lim.h" 1 3 4
# 149 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/limits.h" 2 3 4
# 123 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/limits.h" 2 3 4
# 8 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/syslimits.h" 2 3 4
# 12 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/limits.h" 2 3 4
# 32 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 2 3 4




typedef __socklen_t socklen_t;




enum __socket_type
{
  SOCK_DGRAM = 1,


  SOCK_STREAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_PACKET = 10



};
# 142 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sockaddr.h" 1 3 4
# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 143 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 162 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    __uint32_t __ss_align;
    char __ss_padding[(128 - (2 * sizeof (__uint32_t)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000

  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    int msg_iovlen;

    void *msg_control;
    socklen_t msg_controllen;

    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;

    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 257 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) ;
# 284 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01,


    SCM_CREDENTIALS = 0x02,


    __SCM_CONNECT = 0x03
  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/socket.h" 1 3 4
# 12 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/socket.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/sockios.h" 1 3 4
# 13 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/sockios.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/ioctl.h" 1 3 4
# 69 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/ioctl.h" 3 4
extern unsigned int __invalid_size_argument_for_IOC;
# 14 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/sockios.h" 2 3 4
# 13 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/asm/socket.h" 2 3 4
# 306 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/socket.h" 2 3 4



struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 213 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 2 3 4



struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };


struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };


struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };


# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/in.h" 1 3 4
# 66 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreq
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 251 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 2 3 4
# 259 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__const__));




# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/byteswap.h" 1 3 4
# 271 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 2 3 4
# 336 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) ;


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     ;
# 364 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netinet/in.h" 3 4
struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


# 29 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 2 3 4




# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/rpc/netdb.h" 1 3 4
# 42 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/rpc/netdb.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) ;
extern void endrpcent (void) ;
extern struct rpcent *getrpcbyname (__const char *__name) ;
extern struct rpcent *getrpcbynumber (int __number) ;
extern struct rpcent *getrpcent (void) ;


extern int getrpcbyname_r (__const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) ;

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) ;

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) ;



# 34 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 2 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/netdb.h" 1 3 4
# 27 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 44 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 2 3 4
# 54 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4



extern int h_errno;


extern int *__h_errno_location (void) __attribute__ ((__const__));
# 96 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
extern void herror (__const char *__str) ;


extern __const char *hstrerror (int __err_num) ;




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;

};



extern void sethostent (int __stay_open) ;


extern void endhostent (void) ;



extern struct hostent *gethostent (void) ;



extern struct hostent *gethostbyaddr (__const void *__addr, __socklen_t __len,
          int __type) ;


extern struct hostent *gethostbyname (__const char *__name) ;





extern struct hostent *gethostbyname2 (__const char *__name, int __af) ;






extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop) ;

extern int gethostbyaddr_r (__const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop) ;

extern int gethostbyname_r (__const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop) ;

extern int gethostbyname2_r (__const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop) ;





extern void setnetent (int __stay_open) ;


extern void endnetent (void) ;



extern struct netent *getnetent (void) ;



extern struct netent *getnetbyaddr (uint32_t __net, int __type)
     ;


extern struct netent *getnetbyname (__const char *__name) ;
# 218 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};



extern void setservent (int __stay_open) ;


extern void endservent (void) ;



extern struct servent *getservent (void) ;



extern struct servent *getservbyname (__const char *__name,
          __const char *__proto) ;



extern struct servent *getservbyport (int __port, __const char *__proto)
     ;





extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result) ;

extern int getservbyname_r (__const char *__restrict __name,
       __const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result) ;

extern int getservbyport_r (int __port, __const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result) ;




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};



extern void setprotoent (int __stay_open) ;


extern void endprotoent (void) ;



extern struct protoent *getprotoent (void) ;


extern struct protoent *getprotobyname (__const char *__name) ;


extern struct protoent *getprotobynumber (int __proto) ;





extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result) ;

extern int getprotobyname_r (__const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result) ;

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result) ;
# 320 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   __const char *__restrict __locuser,
   __const char *__restrict __remuser,
   __const char *__restrict __cmd, int *__restrict __fd2p)
     ;
# 342 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    __const char *__restrict __name,
    __const char *__restrict __pass,
    __const char *__restrict __cmd, int *__restrict __fd2p)
     ;



extern int rexec_af (char **__restrict __ahost, int __rport,
       __const char *__restrict __name,
       __const char *__restrict __pass,
       __const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af) ;




extern int ruserok (__const char *__rhost, int __suser,
      __const char *__remuser, __const char *__locuser) ;
# 374 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
extern int rresvport (int *__alport) ;
# 388 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
# 436 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/netdb.h" 3 4
extern int getaddrinfo (__const char *__restrict __name,
   __const char *__restrict __service,
   __const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai) ;


extern void freeaddrinfo (struct addrinfo *__ai) ;


extern __const char *gai_strerror (int __ecode) ;


extern int getnameinfo (__const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, unsigned int __flags) ;




# 37 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2







# 1 "/home/davidhu/svn.32M/apps/../busybox/include/config.h" 1
# 45 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2




# 1 "/home/davidhu/svn.32M/apps/../busybox/include/pwd_.h" 1
# 24 "/home/davidhu/svn.32M/apps/../busybox/include/pwd_.h"
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 3 4





# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 34 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 2 3 4
# 50 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 70 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 3 4
extern void setpwent (void) ;


extern void endpwent (void) ;


extern struct passwd *getpwent (void) ;




extern struct passwd *fgetpwent (FILE *__stream) ;


extern int putpwent (__const struct passwd *__restrict __p,
       FILE *__restrict __f) ;



extern struct passwd *getpwuid (__uid_t __uid) ;


extern struct passwd *getpwnam (__const char *__name) ;
# 111 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result) ;


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result) ;

extern int getpwnam_r (__const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result) ;





extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result) ;
# 145 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/pwd.h" 3 4

# 25 "/home/davidhu/svn.32M/apps/../busybox/include/pwd_.h" 2
# 50 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2
# 1 "/home/davidhu/svn.32M/apps/../busybox/include/grp_.h" 1
# 25 "/home/davidhu/svn.32M/apps/../busybox/include/grp_.h"
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 3 4





# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 34 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 2 3 4
# 43 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 3 4
struct group
  {
    char *gr_name;
    char *gr_passwd;
    __gid_t gr_gid;
    char **gr_mem;
  };
# 60 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 3 4
extern void setgrent (void) ;


extern void endgrent (void) ;


extern struct group *getgrent (void) ;




extern struct group *fgetgrent (FILE *__stream) ;
# 81 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 3 4
extern struct group *getgrgid (__gid_t __gid) ;


extern struct group *getgrnam (__const char *__name) ;
# 109 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 3 4
extern int getgrgid_r (__gid_t __gid, struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result) ;


extern int getgrnam_r (__const char *__restrict __name,
         struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result) ;




extern int fgetgrent_r (FILE *__restrict __stream,
   struct group *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct group **__restrict __result) ;
# 134 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 135 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/grp.h" 2 3 4


extern int setgroups (size_t __n, __const __gid_t *__groups) ;




extern int initgroups (__const char *, __gid_t __group) ;




# 26 "/home/davidhu/svn.32M/apps/../busybox/include/grp_.h" 2
# 51 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h" 2
# 95 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h"
extern void bb_error_msg(const char *s, ...) __attribute__ ((format (printf, 1, 2)));
extern void bb_error_msg_and_die(const char *s, ...) __attribute__ ((noreturn, format (printf, 1, 2)));
extern void bb_perror_msg(const char *s, ...) __attribute__ ((format (printf, 1, 2)));
extern void bb_perror_msg_and_die(const char *s, ...) __attribute__ ((noreturn, format (printf, 1, 2)));
extern void bb_vherror_msg(const char *s, va_list p);
extern void bb_herror_msg(const char *s, ...) __attribute__ ((format (printf, 1, 2)));
extern void bb_herror_msg_and_die(const char *s, ...) __attribute__ ((noreturn, format (printf, 1, 2)));

extern void bb_perror_nomsg_and_die(void) __attribute__ ((noreturn));
extern void bb_perror_nomsg(void);


extern void bb_verror_msg(const char *s, va_list p) __attribute__ ((format (printf, 1, 0)));
extern void bb_vperror_msg(const char *s, va_list p) __attribute__ ((format (printf, 1, 0)));

extern const char *bb_mode_string(int mode);
extern int is_directory(const char *name, int followLinks, struct stat *statBuf);

extern int remove_file(const char *path, int flags);
extern int copy_file(const char *source, const char *dest, int *flags);
extern ssize_t safe_read(int *fd, void *buf, size_t count);
extern ssize_t bb_full_read(int *fd, void *buf, size_t len);
extern ssize_t safe_write(int *fd, const void *buf, size_t count);
extern ssize_t bb_full_write(int *fd, const void *buf, size_t len);
extern int recursive_action(const char *fileName, int recurse,
   int followLinks, int depthFirst,
   int (*fileAction) (const char *fileName, struct stat* statbuf, void* userData),
   int (*dirAction) (const char *fileName, struct stat* statbuf, void* userData),
   void* userData);

extern int bb_parse_mode( const char* s, mode_t* theMode);
extern long bb_xgetlarg(const char *arg, int base, long lower, long upper);

extern unsigned long bb_baud_to_value(speed_t speed);
extern speed_t bb_value_to_baud(unsigned long value);

extern int get_kernel_revision(void);

extern int get_console_fd(void);
extern struct mntent *find_mount_point(const char *name, const char *table);
extern void write_mtab(char* blockDevice, char* directory,
        char* filesystemType, long flags, char* string_flags);
extern void erase_mtab(const char * name);
extern long *find_pid_by_name( const char* pidName);
extern char *find_real_root_device_name(void);
extern char *bb_get_line_from_file(FILE *file);
extern char *bb_get_chomped_line_from_file(FILE *file);
extern int bb_copyfd_size(int *fd1, int *fd2, const off_t size);
extern int bb_copyfd_eof(int *fd1, int *fd2);
extern void bb_xprint_and_close_file(FILE *file);
extern int bb_xprint_file_by_name(const char *filename);
extern char bb_process_escape_sequence(const char **ptr);
extern char *bb_get_last_path_component(char *path);
extern FILE *bb_wfopen(const char *path, const char *mode);
extern FILE *bb_xfopen(const char *path, const char *mode);


extern int bb_fclose_nonstdin(FILE *f);
extern void bb_fflush_stdout_and_exit(int retval) __attribute__ ((noreturn));

extern const char *bb_opt_complementaly;
extern const struct option *bb_applet_long_options;
extern unsigned long bb_getopt_ulflags(int argc, char **argv, const char *applet_opts, ...);


extern FILE *bb_wfopen_input(const char *filename);

extern int bb_vfprintf(FILE * __restrict stream, const char * __restrict format,
        va_list arg) __attribute__ ((format (printf, 2, 0)));
extern int bb_vprintf(const char * __restrict format, va_list arg)
 __attribute__ ((format (printf, 1, 0)));
extern int bb_fprintf(FILE * __restrict stream, const char * __restrict format, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int bb_printf(const char * __restrict format, ...)
 __attribute__ ((format (printf, 1, 2)));


extern void bb_xferror(FILE *fp, const char *fn);
extern void bb_xferror_stdout(void);
extern void bb_xfflush_stdout(void);

extern void bb_warn_ignoring_args(int n);

extern void chomp(char *s);
extern void trim(char *s);
extern const char *bb_skip_whitespace(const char *);

extern struct BB_applet *find_applet_by_name(const char *name);
void run_applet_by_name(const char *name, int argc, char **argv);



extern void *xmalloc (size_t size);
extern void *xrealloc(void *old, size_t size);
extern void *xcalloc(size_t nmemb, size_t size);

extern char *bb_xstrdup (const char *s);
extern char *bb_xstrndup (const char *s, int n);
extern char *safe_strncpy(char *dst, const char *src, size_t size);
extern int safe_strtoi(char *arg, int* value);
extern int safe_strtod(char *arg, double* value);
extern int safe_strtol(char *arg, long* value);
extern int safe_strtoul(char *arg, unsigned long* value);

struct suffix_mult {
 const char *suffix;
 unsigned int mult;
};

extern unsigned long bb_xgetularg_bnd_sfx(const char *arg, int base,
            unsigned long lower,
            unsigned long upper,
            const struct suffix_mult *suffixes);
extern unsigned long bb_xgetularg_bnd(const char *arg, int base,
           unsigned long lower,
           unsigned long upper);
extern unsigned long bb_xgetularg10_bnd(const char *arg,
          unsigned long lower,
          unsigned long upper);
extern unsigned long bb_xgetularg10(const char *arg);

extern long bb_xgetlarg_bnd_sfx(const char *arg, int base,
        long lower,
        long upper,
        const struct suffix_mult *suffixes);
extern long bb_xgetlarg10_sfx(const char *arg, const struct suffix_mult *suffixes);



extern unsigned long bb_xparse_number(const char *numstr,
  const struct suffix_mult *suffixes);







extern long my_getpwnam(const char *name);
extern long my_getgrnam(const char *name);
extern char * my_getug(char *buffer, char *idname, long id, int bufsize, char prefix);
extern char * my_getpwuid(char *name, long uid, int bufsize);
extern char * my_getgrgid(char *group, long gid, int bufsize);
extern char *bb_askpass(int timeout, const char * prompt);

extern int device_open(const char *device, int mode);

extern int del_loop(const char *device);
extern int set_loop(const char *device, const char *file, int offset, int *loopro);
extern char *find_unused_loop_device (void);






int nfsmount(const char *spec, const char *node, int *flags,
      char **extra_opts, char **mount_opts, int running_bg);



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
extern int sysinfo (struct sysinfo* info);

enum {
 KILOBYTE = 1024,
 MEGABYTE = (KILOBYTE*1024),
 GIGABYTE = (MEGABYTE*1024)
};
const char *make_human_readable_str(unsigned long long size,
  unsigned long block_size, unsigned long display_unit);

int bb_ask_confirmation(void);
int klogctl(int type, char * b, int len);

char *xgetcwd(char *cwd);
char *xreadlink(const char *path);
char *concat_path_file(const char *path, const char *filename);
char *concat_subpath_file(const char *path, const char *filename);
char *last_char_is(const char *s, int c);

int read_package_field(const char *package_buffer, char **field_name, char **field_value);

char *fgets_str(FILE *file, const char *terminating_string);

extern int uncompress(int fd_in, int fd_out);
extern int inflate(int in, int out);

extern struct hostent *xgethostbyname(const char *name);
extern struct hostent *xgethostbyname2(const char *name, int af);
extern int create_icmp_socket(void);
extern int create_icmp6_socket(void);
extern int xconnect(struct sockaddr_in *s_addr);
extern unsigned short bb_lookup_port(const char *port, const char *protocol, unsigned short default_port);
extern void bb_lookup_host(struct sockaddr_in *s_in, const char *host);


char *dirname (char *path);

int bb_make_directory (char *path, long mode, int flags);

const char *u_signal_names(const char *str_sig, int *signo, int startnum);
char *bb_simplify_path(const char *path);

enum {
 FILEUTILS_PRESERVE_STATUS = 1,
 FILEUTILS_DEREFERENCE = 2,
 FILEUTILS_RECUR = 4,
 FILEUTILS_FORCE = 8,
 FILEUTILS_INTERACTIVE = 16
};

extern const char *bb_applet_name;

extern const char * const bb_msg_full_version;
extern const char * const bb_msg_memory_exhausted;
extern const char * const bb_msg_invalid_date;
extern const char * const bb_msg_io_error;
extern const char * const bb_msg_write_error;
extern const char * const bb_msg_name_longer_than_foo;
extern const char * const bb_msg_unknown;
extern const char * const bb_msg_can_not_create_raw_socket;
extern const char * const bb_msg_perm_denied_are_you_root;
extern const char * const bb_msg_standard_input;
extern const char * const bb_msg_standard_output;

extern const char * const bb_path_nologin_file;
extern const char * const bb_path_passwd_file;
extern const char * const bb_path_shadow_file;
extern const char * const bb_path_gshadow_file;
extern const char * const bb_path_group_file;
extern const char * const bb_path_securetty_file;
extern const char * const bb_path_motd_file;
# 352 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h"
extern const char * const bb_default_login_shell;






extern const char bb_path_mtab_file[];

extern int bb_default_error_retval;
# 412 "/home/davidhu/svn.32M/apps/../busybox/include/libbb.h"
int is_in_ino_dev_hashtable(const struct stat *statbuf, char **name);
void add_to_ino_dev_hashtable(const struct stat *statbuf, const char *name);
void reset_ino_dev_hashtable(void);


extern size_t bb_strlen(const char *string);


void bb_xasprintf(char **string_ptr, const char *format, ...) __attribute__ ((format (printf, 2, 3)));



extern void change_identity ( const struct passwd *pw );
extern const char *change_identity_e2str ( const struct passwd *pw );
extern void run_shell ( const char *shell, int loginshell, const char *command, const char **additional_args



);
extern int run_parts(char **args, const unsigned char test_mode, char **env);
extern int restricted_shell ( const char *shell );
extern void setup_environment ( const char *shell, int loginshell, int changeenv, const struct passwd *pw );
extern int correct_password ( const struct passwd *pw );
extern char *pw_encrypt(const char *clear, const char *salt);
extern struct spwd *pwd_to_spwd(const struct passwd *pw);
extern int obscure(const char *old, const char *newval, const struct passwd *pwdp);

extern int bb_xopen(const char *pathname, int flags);
extern ssize_t bb_xread(int fd, void *buf, size_t count);
extern void bb_xread_all(int fd, void *buf, size_t count);
extern unsigned char bb_xread_char(int fd);

typedef struct {
 int pid;
 char user[9];
 char state[4];
 unsigned long rss;
 int ppid;




 char *cmd;



 char short_cmd[16];
} procps_status_t;

extern procps_status_t * procps_scan(int save_user_arg0



);
extern unsigned short compare_string_array(const char *string_array[], const char *key);

extern int my_query_module(const char *name, int which, void **buf, size_t *bufsize, size_t *ret);

typedef struct llist_s {
 char *data;
 struct llist_s *link;
} llist_t;
extern llist_t *llist_add_to(llist_t *old_head, char *new_item);

extern void print_login_issue(const char *issue_file, const char *tty);
extern void print_login_prompt(void);

extern void vfork_daemon_rexec(int nochdir, int noclose,
  int argc, char **argv, char *foreground_opt);
extern void get_terminal_width_height(int fd, int *width, int *height);
extern unsigned long get_ug_id(const char *s, long (*my_getxxnam)(const char *));
extern void xregcomp(regex_t *preg, const char *regex, int cflags);



extern int hash_fd(int fd, const size_t size, const uint8_t hash_algo, uint8_t *hashval);
# 12 "e2fsprogs/ext2fs/../e2fsbb.h" 2
# 25 "e2fsprogs/ext2fs/../e2fsbb.h"
typedef long errcode_t;
# 15 "e2fsprogs/ext2fs/expanddir.c" 2

# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 1 3 4
# 28 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4

# 175 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/posix_opt.h" 1 3 4
# 176 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 2 3 4
# 199 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/include/stddef.h" 1 3 4
# 200 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 2 3 4
# 260 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern int access (__const char *__name, int __type) ;
# 287 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64");
# 300 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern int close (int __fd) ;



extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;


extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 347 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) ;
# 356 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) ;
# 365 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds) ;






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;



extern int usleep (__useconds_t __useconds) ;





extern int pause (void) ;



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     ;




extern int chdir (__const char *__path) ;



extern int fchdir (int __fd) ;
# 417 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) ;




extern char *get_current_dir_name (void) ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2) ;


extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) ;


extern int execv (__const char *__path, char *__const __argv[]) ;



extern int execle (__const char *__path, __const char *__arg, ...) ;



extern int execl (__const char *__path, __const char *__arg, ...) ;



extern int execvp (__const char *__file, char *__const __argv[]) ;




extern int execlp (__const char *__file, __const char *__arg, ...) ;




extern int nice (int __inc) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/confname.h" 1 3 4
# 25 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG

  };





enum
  {
    _CS_PATH,




    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,
# 563 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/bits/confname.h" 3 4
    _CS_V6_WIDTH_RESTRICTED_ENVS

  };
# 479 "/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin-ccache/../lib/gcc/mipsel-linux-uclibc/4.0.4/../../../../mipsel-linux-uclibc/sys-include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name) ;


extern long int fpathconf (int __fd, int __name) 