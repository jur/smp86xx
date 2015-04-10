#ifndef __ASM_BUG_H
#define __ASM_BUG_H

#include <linux/config.h>

#ifdef CONFIG_BUG

#include <asm/break.h>

#ifdef CONFIG_PRINTK
int printk(const char * fmt, ...) __attribute__ ((format (printf, 1, 2)));
#else
static inline int printk(const char *s, ...) __attribute__ ((format (printf, 1, 2)));
#endif

#define BUG()								\
do {									\
	printk("<0> BUG on %s:%d (%s).\n", __FILE__, __LINE__, __FUNCTION__); \
	__asm__ __volatile__("break %0" : : "i" (BRK_BUG));		\
} while (0)

#define HAVE_ARCH_BUG

#endif

#include <asm-generic/bug.h>

#endif /* __ASM_BUG_H */
