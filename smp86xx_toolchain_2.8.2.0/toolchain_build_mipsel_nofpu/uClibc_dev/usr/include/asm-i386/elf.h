#ifndef __ASMi386_ELF_H
#define __ASMi386_ELF_H

/*
 * ELF register definitions..
 */

#include <asm/user.h>

#ifndef R_386_NUM
#define R_386_NONE	0
#define R_386_32	1
#define R_386_PC32	2
#define R_386_GOT32	3
#define R_386_PLT32	4
#define R_386_COPY	5
#define R_386_GLOB_DAT	6
#define R_386_JMP_SLOT	7
#define R_386_RELATIVE	8
#define R_386_GOTOFF	9
#define R_386_GOTPC	10
#define R_386_NUM	11
#endif

typedef unsigned long elf_greg_t;

#define ELF_NGREG (sizeof (struct user_regs_struct) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];

typedef struct user_i387_struct elf_fpregset_t;
typedef struct user_fxsr_struct elf_fpxregset_t;

/*
 * This is used to ensure we don't load something for the wrong architecture.
 */
#define elf_check_arch(x) \
	(((x)->e_machine == EM_386) || ((x)->e_machine == EM_486))

/*
 * These are used to set parameters in the core dumps.
 */
#define ELF_CLASS	ELFCLASS32
#define ELF_DATA	ELFDATA2LSB
#define ELF_ARCH	EM_386

/* SVR4/i386 ABI (pages 3-31, 3-32) says that when the program starts %edx
   contains a pointer to a function which might be registered using `atexit'.
   This provides a mean for the dynamic linker to call DT_FINI functions for
   shared libraries that have been loaded before the code runs.

   A value of 0 tells we have no such handler. 

   We might as well make sure everything else is cleared too (except for %esp),
   just to make things more deterministic.
 */
#define ELF_PLAT_INIT(_r, load_addr)	do { \
	_r->ebx = 0; _r->ecx = 0; _r->edx = 0; \
	_r->esi = 0; _r->edi = 0; _r->ebp = 0; \
	_r->eax = 0; \
} while (0)

#define USE_ELF_CORE_DUMP
#define ELF_EXEC_PAGESIZE	4096

/* This is the location that an ET_DYN program is loaded if exec'ed.  Typical
   use of this is to invoke "./ld.so someprog" to test out a new version of
   the loader.  We need to make sure that it is out of the way of the program
   that it will "exec", and that there is sufficient room for the brk.  */

#define ELF_ET_DYN_BASE         (TASK_SIZE / 3 * 2)

/* regs is struct pt_regs, pr_reg is elf_gregset_t (which is
   now struct_user_regs, they are different) */

#define ELF_CORE_COPY_REGS(pr_reg, regs)		\
	pr_reg[0] = regs->ebx;				\
	pr_reg[1] = regs->ecx;				\
	pr_reg[2] = regs->edx;				\
	pr_reg[3] = regs->esi;				\
	pr_reg[4] = regs->edi;				\
	pr_reg[5] = regs->ebp;				\
	pr_reg[6] = regs->eax;				\
	pr_reg[7] = regs->xds;				\
	pr_reg[8] = regs->xes;				\
	savesegment(fs,pr_reg[9]);			\
	savesegment(gs,pr_reg[10]);			\
	pr_reg[11] = regs->orig_eax;			\
	pr_reg[12] = regs->eip;				\
	pr_reg[13] = regs->xcs;				\
	pr_reg[14] = regs->eflags;			\
	pr_reg[15] = regs->esp;				\
	pr_reg[16] = regs->xss;

/* This yields a mask that user programs can use to figure out what
   instruction set this CPU supports.  This could be done in user space,
   but it's not easy, and we've already done it here.  */

#define ELF_HWCAP	(boot_cpu_data.x86_capability[0])

/* This yields a string that ld.so will use to load implementation
   specific libraries for optimization.  This is more specific in
   intent than poking at uname or /proc/cpuinfo.

   For the moment, we have only optimizations for the Intel generations,
   but that could change... */

#define ELF_PLATFORM  (system_utsname.machine)

/*
 * Architecture-neutral AT_ values in 0-17, leave some room
 * for more of them, start the x86-specific ones at 32.
 */
#define AT_SYSINFO		32
#define AT_SYSINFO_EHDR		33

#endif
