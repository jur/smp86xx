/* Force shared libraries to know about the correct library loader */
#include <features.h>
#ifdef __HAVE_ELF__
const char __dl_ldso__[] __attribute__ ((section  (".interp"))) ="/lib/ld-uClibc.so.0";
#endif
