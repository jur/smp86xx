#ifndef _ASM_IA64_SYSTEM_H
#define _ASM_IA64_SYSTEM_H

/*
 * System defines. Note that this is included both from .c and .S
 * files, so it does only defines, not any C code.  This is based
 * on information published in the Processor Abstraction Layer
 * and the System Abstraction Layer manual.
 *
 * Copyright (C) 1998-2003 Hewlett-Packard Co
 *	David Mosberger-Tang <davidm@hpl.hp.com>
 * Copyright (C) 1999 Asit Mallick <asit.k.mallick@intel.com>
 * Copyright (C) 1999 Don Dugger <don.dugger@intel.com>
 */

#include <asm/kregs.h>
#include <asm/page.h>
#include <asm/pal.h>
#include <asm/percpu.h>

#define GATE_ADDR		__IA64_UL_CONST(0xa000000000000000)
/*
 * 0xa000000000000000+2*PERCPU_PAGE_SIZE
 * - 0xa000000000000000+3*PERCPU_PAGE_SIZE remain unmapped (guard page)
 */
#define KERNEL_START		 __IA64_UL_CONST(0xa000000100000000)
#define PERCPU_ADDR		(-PERCPU_PAGE_SIZE)

#ifndef __ASSEMBLY__

#include <linux/kernel.h>
#include <linux/types.h>

struct pci_vector_struct {
	__u16 segment;	/* PCI Segment number */
	__u16 bus;	/* PCI Bus number */
	__u32 pci_id;	/* ACPI split 16 bits device, 16 bits function (see section 6.1.1) */
	__u8 pin;	/* PCI PIN (0 = A, 1 = B, 2 = C, 3 = D) */
	__u32 irq;	/* IRQ assigned */
};

extern struct ia64_boot_param {
	__u64 command_line;		/* physical address of command line arguments */
	__u64 efi_systab;		/* physical address of EFI system table */
	__u64 efi_memmap;		/* physical address of EFI memory map */
	__u64 efi_memmap_size;		/* size of EFI memory map */
	__u64 efi_memdesc_size;		/* size of an EFI memory map descriptor */
	__u32 efi_memdesc_version;	/* memory descriptor version */
	struct {
		__u16 num_cols;	/* number of columns on console output device */
		__u16 num_rows;	/* number of rows on console output device */
		__u16 orig_x;	/* cursor's x position */
		__u16 orig_y;	/* cursor's y position */
	} console_info;
	__u64 fpswa;		/* physical address of the fpswa interface */
	__u64 initrd_start;
	__u64 initrd_size;
} *ia64_boot_param;

/*
 * Macros to force memory ordering.  In these descriptions, "previous"
 * and "subsequent" refer to program order; "visible" means that all
 * architecturally visible effects of a memory access have occurred
 * (at a minimum, this means the memory has been read or written).
 *
 *   wmb():	Guarantees that all preceding stores to memory-
 *		like regions are visible before any subsequent
 *		stores and that all following stores will be
 *		visible only after all previous stores.
 *   rmb():	Like wmb(), but for reads.
 *   mb():	wmb()/rmb() combo, i.e., all previous memory
 *		accesses are visible before all subsequent
 *		accesses and vice versa.  This is also known as
 *		a "fence."
 *
 * Note: "mb()" and its variants cannot be used as a fence to order
 * accesses to memory mapped I/O registers.  For that, mf.a needs to
 * be used.  However, we don't want to always use mf.a because (a)
 * it's (presumably) much slower than mf and (b) mf.a is supported for
 * sequential memory pages only.
 */
#define mb()	ia64_mf()
#define rmb()	mb()
#define wmb()	mb()
#define read_barrier_depends()	do { } while(0)

#ifdef CONFIG_SMP
# define smp_mb()	mb()
# define smp_rmb()	rmb()
# define smp_wmb()	wmb()
# define smp_read_barrier_depends()	read_barrier_depends()
#else
# define smp_mb()	barrier()
# define smp_rmb()	barrier()
# define smp_wmb()	barrier()
# define smp_read_barrier_depends()	do { } while(0)
#endif

/*
 * XXX check on these---I suspect what Linus really wants here is
 * acquire vs release semantics but we can't discuss this stuff with
 * Linus just yet.  Grrr...
 */
#define set_mb(var, value)	do { (var) = (value); mb(); } while (0)
#define set_wmb(var, value)	do { (var) = (value); mb(); } while (0)

#define safe_halt()         ia64_pal_halt_light()    /* PAL_HALT_LIGHT */

/*
 * The group barrier in front of the rsm & ssm are necessary to ensure
 * that none of the previous instructions in the same group are
 * affected by the rsm/ssm.
 */
/* For spinlocks etc */

/*
 * - clearing psr.i is implicitly serialized (visible by next insn)
 * - setting psr.i requires data serialization
 * - we need a stop-bit before reading PSR because we sometimes
 *   write a floating-point register right before reading the PSR
 *   and that writes to PSR.mfl
 */
#define __local_irq_save(x)			\
do {						\
	ia64_stop();				\
	(x) = ia64_getreg(_IA64_REG_PSR);	\
	ia64_stop();				\
	ia64_rsm(IA64_PSR_I);			\
} while (0)

#define __local_irq_disable()			\
do {						\
	ia64_stop();				\
	ia64_rsm(IA64_PSR_I);			\
} while (0)

#define __local_irq_restore(x)	ia64_intrin_local_irq_restore((x) & IA64_PSR_I)

#ifdef CONFIG_IA64_DEBUG_IRQ

  extern unsigned long last_cli_ip;

# define __save_ip()		last_cli_ip = ia64_getreg(_IA64_REG_IP)

# define local_irq_save(x)					\
do {								\
	unsigned long psr;					\
								\
	__local_irq_save(psr);					\
	if (psr & IA64_PSR_I)					\
		__save_ip();					\
	(x) = psr;						\
} while (0)

# define local_irq_disable()	do { unsigned long x; local_irq_save(x); } while (0)

# define local_irq_restore(x)					\
do {								\
	unsigned long old_psr, psr = (x);			\
								\
	local_save_flags(old_psr);				\
	__local_irq_restore(psr);				\
	if ((old_psr & IA64_PSR_I) && !(psr & IA64_PSR_I))	\
		__save_ip();					\
} while (0)

#else /* !CONFIG_IA64_DEBUG_IRQ */
# define local_irq_save(x)	__local_irq_save(x)
# define local_irq_disable()	__local_irq_disable()
# define local_irq_restore(x)	__local_irq_restore(x)
#endif /* !CONFIG_IA64_DEBUG_IRQ */

#define local_irq_enable()	({ ia64_stop(); ia64_ssm(IA64_PSR_I); ia64_srlz_d(); })
#define local_save_flags(flags)	({ ia64_stop(); (flags) = ia64_getreg(_IA64_REG_PSR); })

#define irqs_disabled()				\
({						\
	unsigned long __ia64_id_flags;		\
	local_save_flags(__ia64_id_flags);	\
	(__ia64_id_flags & IA64_PSR_I) == 0;	\
})

#endif /* __ASSEMBLY__ */

#endif /* _ASM_IA64_SYSTEM_H */
