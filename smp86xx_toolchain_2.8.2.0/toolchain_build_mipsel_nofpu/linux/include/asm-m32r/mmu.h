#ifndef _ASM_M32R_MMU_H
#define _ASM_M32R_MMU_H

/* $Id: mmu.h 5237 2004-10-22 16:58:50Z mmazur $ */


#if !defined(CONFIG_MMU)
struct mm_rblock_struct {
  int     size;
  int     refcount;
  void    *kblock;
};

struct mm_tblock_struct {
  struct mm_rblock_struct *rblock;
  struct mm_tblock_struct *next;
};

typedef struct {
  struct mm_tblock_struct tblock;
  unsigned long           end_brk;
} mm_context_t;
#else

/* Default "unsigned long" context */
#ifndef CONFIG_SMP
typedef unsigned long mm_context_t;
#else
typedef unsigned long mm_context_t[NR_CPUS];
#endif

#endif  /* CONFIG_MMU */
#endif  /* _ASM_M32R_MMU_H */

