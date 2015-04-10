#ifndef _ASM_X86_64_VSYSCALL_H_
#define _ASM_X86_64_VSYSCALL_H_

#include <linux/seqlock.h>

enum vsyscall_num {
	__NR_vgettimeofday,
	__NR_vtime,
};

#define VSYSCALL_START (-10UL << 20)
#define VSYSCALL_SIZE 1024
#define VSYSCALL_END (-2UL << 20)
#define VSYSCALL_ADDR(vsyscall_nr) (VSYSCALL_START+VSYSCALL_SIZE*(vsyscall_nr))

#endif /* _ASM_X86_64_VSYSCALL_H_ */
