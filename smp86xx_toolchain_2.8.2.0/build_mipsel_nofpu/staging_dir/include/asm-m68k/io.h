/*
 * linux/include/asm-m68k/io.h
 *
 * 4/1/00 RZ: - rewritten to avoid clashes between ISA/PCI and other
 *              IO access
 *            - added Q40 support
 *            - added skeleton for GG-II and Amiga PCMCIA
 * 2/3/01 RZ: - moved a few more defs into raw_io.h
 *
 * inX/outX/readX/writeX should not be used by any driver unless it does
 * ISA or PCI access. Other drivers should use function defined in raw_io.h
 * or define its own macros on top of these.
 *
 *    inX(),outX()              are for PCI and ISA I/O
 *    readX(),writeX()          are for PCI memory
 *    isa_readX(),isa_writeX()  are for ISA memory
 *
 * moved mem{cpy,set}_*io inside CONFIG_PCI
 */

#ifndef _IO_H
#define _IO_H

#endif /* _IO_H */
