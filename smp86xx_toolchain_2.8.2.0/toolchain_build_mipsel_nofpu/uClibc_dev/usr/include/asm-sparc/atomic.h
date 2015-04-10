/* atomic.h: These still suck, but the I-cache hit rate is higher.
 *
 * Copyright (C) 1996 David S. Miller (davem@caip.rutgers.edu)
 * Copyright (C) 2000 Anton Blanchard (anton@linuxcare.com.au)
 */

#ifndef __ARCH_SPARC_ATOMIC__
#define __ARCH_SPARC_ATOMIC__


typedef struct { volatile int counter; } atomic_t;

#endif /* !(__ARCH_SPARC_ATOMIC__) */
