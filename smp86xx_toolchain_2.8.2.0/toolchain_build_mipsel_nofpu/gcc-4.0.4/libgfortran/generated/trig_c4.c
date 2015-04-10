/* Complex trig functions
   Copyright 2002 Free Software Foundation, Inc.
   Contributed by Paul Brook <paul@nowt.org>

This file is part of the GNU Fortran 95 runtime library (libgfortran).

Libgfortran is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

Libgfortran is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public
License along with libgfortran; see the file COPYING.  If not,
write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
#include <math.h>
#include "libgfortran.h"


/* Complex number z = a + ib.  */

/* sin(z) = sin(a)cosh(b) + icos(a)sinh(b)  */
GFC_COMPLEX_4
csinf (GFC_COMPLEX_4 a)
{
  GFC_REAL_4 r;
  GFC_REAL_4 i;
  GFC_COMPLEX_4 v;

  r = REALPART (a);
  i = IMAGPART (a);
  COMPLEX_ASSIGN (v, sinf (r) * coshf (i), cosf (r) * sinhf (i));
  return v;
}

/* cos(z) = cos(a)cosh(b) - isin(a)sinh(b)  */
GFC_COMPLEX_4
ccosf (GFC_COMPLEX_4 a)
{
  GFC_REAL_4 r;
  GFC_REAL_4 i;
  GFC_COMPLEX_4 v;

  r = REALPART (a);
  i = IMAGPART (a);
  COMPLEX_ASSIGN (v, cosf (r) * coshf (i), - (sinf (r) * sinhf (i)));
  return v;
}

/* tan(z) = (tan(a) + itanh(b)) / (1 - itan(a)tanh(b))  */
GFC_COMPLEX_4
ctanf (GFC_COMPLEX_4 a)
{
  GFC_REAL_4 rt;
  GFC_REAL_4 it;
  GFC_COMPLEX_4 n;
  GFC_COMPLEX_4 d;

  rt = tanf (REALPART (a));
  it = tanhf (IMAGPART (a));
  COMPLEX_ASSIGN (n, rt, it);
  COMPLEX_ASSIGN (d , 1, - (rt * it));

  return n / d;
}

