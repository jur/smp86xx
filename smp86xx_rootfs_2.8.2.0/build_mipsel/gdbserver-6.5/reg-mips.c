/* *INDENT-OFF* */ /* THIS FILE IS GENERATED */

/* A register protocol for GDB, the GNU debugger.
   Copyright 2001, 2002 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* This file was created with the aid of ``regdat.sh'' and ``/opt/smp86xx/smp86xx_rootfs_2.8.2.0/toolchain_build_mipsel/gdb-6.5/gdb/gdbserver/../regformats/reg-mips.dat''.  */

#include "regdef.h"
#include "regcache.h"

struct reg regs_mips[] = {
  { "zero", 0, 32 },
  { "at", 32, 32 },
  { "v0", 64, 32 },
  { "v1", 96, 32 },
  { "a0", 128, 32 },
  { "a1", 160, 32 },
  { "a2", 192, 32 },
  { "a3", 224, 32 },
  { "t0", 256, 32 },
  { "t1", 288, 32 },
  { "t2", 320, 32 },
  { "t3", 352, 32 },
  { "t4", 384, 32 },
  { "t5", 416, 32 },
  { "t6", 448, 32 },
  { "t7", 480, 32 },
  { "s0", 512, 32 },
  { "s1", 544, 32 },
  { "s2", 576, 32 },
  { "s3", 608, 32 },
  { "s4", 640, 32 },
  { "s5", 672, 32 },
  { "s6", 704, 32 },
  { "s7", 736, 32 },
  { "t8", 768, 32 },
  { "t9", 800, 32 },
  { "k0", 832, 32 },
  { "k1", 864, 32 },
  { "gp", 896, 32 },
  { "sp", 928, 32 },
  { "s8", 960, 32 },
  { "ra", 992, 32 },
  { "sr", 1024, 32 },
  { "lo", 1056, 32 },
  { "hi", 1088, 32 },
  { "bad", 1120, 32 },
  { "cause", 1152, 32 },
  { "pc", 1184, 32 },
  { "f0", 1216, 32 },
  { "f1", 1248, 32 },
  { "f2", 1280, 32 },
  { "f3", 1312, 32 },
  { "f4", 1344, 32 },
  { "f5", 1376, 32 },
  { "f6", 1408, 32 },
  { "f7", 1440, 32 },
  { "f8", 1472, 32 },
  { "f9", 1504, 32 },
  { "f10", 1536, 32 },
  { "f11", 1568, 32 },
  { "f12", 1600, 32 },
  { "f13", 1632, 32 },
  { "f14", 1664, 32 },
  { "f15", 1696, 32 },
  { "f16", 1728, 32 },
  { "f17", 1760, 32 },
  { "f18", 1792, 32 },
  { "f19", 1824, 32 },
  { "f20", 1856, 32 },
  { "f21", 1888, 32 },
  { "f22", 1920, 32 },
  { "f23", 1952, 32 },
  { "f24", 1984, 32 },
  { "f25", 2016, 32 },
  { "f26", 2048, 32 },
  { "f27", 2080, 32 },
  { "f28", 2112, 32 },
  { "f29", 2144, 32 },
  { "f30", 2176, 32 },
  { "f31", 2208, 32 },
  { "fsr", 2240, 32 },
  { "fir", 2272, 32 },
  { "fp", 2304, 32 },
  { "", 2336, 32 },
  { "", 2368, 32 },
  { "", 2400, 32 },
  { "", 2432, 32 },
  { "", 2464, 32 },
  { "", 2496, 32 },
  { "", 2528, 32 },
  { "", 2560, 32 },
  { "", 2592, 32 },
  { "", 2624, 32 },
  { "", 2656, 32 },
  { "", 2688, 32 },
  { "", 2720, 32 },
  { "", 2752, 32 },
  { "", 2784, 32 },
  { "", 2816, 32 },
  { "", 2848, 32 },
};

const char *expedite_regs_mips[] = { "pc", "sp", 0 };

void
init_registers ()
{
    set_register_cache (regs_mips,
			sizeof (regs_mips) / sizeof (regs_mips[0]));
    gdbserver_expedite_regs = expedite_regs_mips;
}
