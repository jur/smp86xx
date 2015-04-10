/* 
 * Copyright (C) 2000 - 2004  Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef _UM_UNISTD_H_
#define _UM_UNISTD_H_

#include <linux/syscalls.h>
#include "linux/resource.h"

extern int um_execve(const char *file, char *const argv[], char *const env[]);

#ifdef __KERNEL_SYSCALLS__

#include <linux/types.h>

static inline int execve(const char *filename, char *const argv[],
			 char *const envp[])
{
	mm_segment_t fs;
	int ret;

	fs = get_fs();
	set_fs(KERNEL_DS);
	ret = um_execve(filename, argv, envp);
	set_fs(fs);

	if (ret >= 0)
		return ret;

	errno = -(long)ret;
	return -1;
}

int sys_execve(char *file, char **argv, char **env);

#endif /* __KERNEL_SYSCALLS__ */

#undef __KERNEL_SYSCALLS__
#include "asm/arch/unistd.h"

#endif /* _UM_UNISTD_H_*/
