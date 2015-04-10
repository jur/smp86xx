#ifndef _PARISC_SIGINFO_H
#define _PARISC_SIGINFO_H

#include <linux/siginfo.h>

/*
 * SIGTRAP si_codes
 */
#define TRAP_BRANCH	(__SI_FAULT|3)	/* process taken branch trap */
#define TRAP_HWBKPT	(__SI_FAULT|4)	/* hardware breakpoint or watchpoint */
#undef NSIGTRAP
#define NSIGTRAP	4

#endif
