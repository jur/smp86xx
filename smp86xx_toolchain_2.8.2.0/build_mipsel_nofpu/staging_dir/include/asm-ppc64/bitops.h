/*
 * PowerPC64 atomic bit operations.
 * Dave Engebretsen, Todd Inglett, Don Reed, Pat McCarthy, Peter Bergner,
 * Anton Blanchard
 *
 * Originally taken from the 32b PPC code.  Modified to use 64b values for
 * the various counters & memory references.
 *
 * Bitops are odd when viewed on big-endian systems.  They were designed
 * on little endian so the size of the bitset doesn't matter (low order bytes
 * come first) as long as the bit in question is valid.
 *
 * Bits are "tested" often using the C expression (val & (1<<nr)) so we do
 * our best to stay compatible with that.  The assumption is that val will
 * be unsigned long for such tests.  As such, we assume the bits are stored
 * as an array of unsigned long (the usual case is a single unsigned long,
 * of course).  Here's an example bitset with bit numbering:
 *
 *   |63..........0|127........64|195.......128|255.......196|
 *
 * This leads to a problem. If an int, short or char is passed as a bitset
 * it will be a bad memory reference since we want to store in chunks
 * of unsigned long (64 bits here) size.
 *
 * There are a few little-endian macros used mostly for filesystem bitmaps,
 * these work on similar bit arrays layouts, but byte-oriented:
 *
 *   |7...0|15...8|23...16|31...24|39...32|47...40|55...48|63...56|
 *
 * The main difference is that bit 3-5 in the bit number field needs to be
 * reversed compared to the big-endian bit fields. This can be achieved
 * by XOR with 0b111000 (0x38).
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _PPC64_BITOPS_H
#define _PPC64_BITOPS_H

#endif /* _PPC64_BITOPS_H */
