
#ifndef __ASM_MACH_TANGO2_IRQ_H
#define __ASM_MACH_TANGO2_IRQ_H

#include <linux/config.h>

#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
# define NR_IRQS 256
#else
# define NR_IRQS 128
#endif

#endif
