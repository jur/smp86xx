
#ifndef M68K_PGALLOC_H
#define M68K_PGALLOC_H

#include <linux/highmem.h>



#ifdef CONFIG_SUN3
#include <asm/sun3_pgalloc.h>
#else
#include <asm/motorola_pgalloc.h>
#endif

#endif /* M68K_PGALLOC_H */
