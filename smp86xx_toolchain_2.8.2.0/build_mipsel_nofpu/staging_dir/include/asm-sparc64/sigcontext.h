#ifndef __SPARC64_SIGCONTEXT_H
#define __SPARC64_SIGCONTEXT_H

#ifndef __ASSEMBLY__

typedef struct {
	unsigned   int si_float_regs [64];
	unsigned   long si_fsr;
	unsigned   long si_gsr;
	unsigned   long si_fprs;
} __siginfo_fpu_t;

/* This is what SunOS doesn't, so we have to write this alone
   and do it properly. */
struct sigcontext {
	/* The size of this array has to match SI_MAX_SIZE from siginfo.h */
	char			sigc_info[128];
	struct {
		unsigned long	u_regs[16]; /* globals and ins */
		unsigned long	tstate;
		unsigned long	tpc;
		unsigned long	tnpc;
		unsigned int	y;
		unsigned int	fprs;
	}			sigc_regs;
	__siginfo_fpu_t *	sigc_fpu_save;
	struct {
		void	*	ss_sp;
		int		ss_flags;
		unsigned long	ss_size;
	}			sigc_stack;
	unsigned long		sigc_mask;
};

#endif /* !(__ASSEMBLY__) */

#endif /* !(__SPARC64_SIGCONTEXT_H) */
