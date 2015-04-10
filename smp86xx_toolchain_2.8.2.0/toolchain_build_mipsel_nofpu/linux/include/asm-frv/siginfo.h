#ifndef _ASM_SIGINFO_H
#define _ASM_SIGINFO_H

#include <linux/siginfo.h>

#define FPE_MDAOVF	(__SI_FAULT|9)	/* media overflow */
#undef NSIGFPE
#define NSIGFPE		9

#endif

