
#ifndef __SPARC_SYSTEM_H
#define __SPARC_SYSTEM_H

#include <linux/kernel.h>
#include <linux/threads.h>	/* NR_CPUS */

#include <asm/segment.h>
#include <asm/page.h>
#include <asm/psr.h>
#include <asm/ptrace.h>
#include <asm/btfixup.h>

#ifndef __ASSEMBLY__

/*
 * Sparc (general) CPU types
 */
enum sparc_cpu {
  sun4        = 0x00,
  sun4c       = 0x01,
  sun4m       = 0x02,
  sun4d       = 0x03,
  sun4e       = 0x04,
  sun4u       = 0x05, /* V8 ploos ploos */
  sun_unknown = 0x06,
  ap1000      = 0x07, /* almost a sun4m */
};

#endif /* __ASSEMBLY__ */

#endif /* !(__SPARC_SYSTEM_H) */
