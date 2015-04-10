#ifndef _PPC64_SEMAPHORE_H
#define _PPC64_SEMAPHORE_H

/*
 * Remove spinlock-based RW semaphores; RW semaphore definitions are
 * now in rwsem.h and we use the generic lib/rwsem.c implementation.
 * Rework semaphores to use atomic_dec_if_positive.
 * -- Paul Mackerras (paulus@samba.org)
 */


#endif /* !(_PPC64_SEMAPHORE_H) */
