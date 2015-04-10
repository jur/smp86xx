/* Type information for cp/mangle.c.
   Copyright (C) 2004 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

/* This file is machine generated.  Do not edit.  */

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_cp_mangle_h[] = {
  {
    &conv_type_names,
    1,
    sizeof (conv_type_names),
    &gt_ggc_m_P9tree_node4htab,
    &gt_pch_n_P9tree_node4htab
  },
  {
    &subst_identifiers[0],
    1 * (SUBID_MAX),
    sizeof (subst_identifiers[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &G.substitutions,
    1,
    sizeof (G),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_cp_mangle_h[] = {
  { &G, 1, sizeof (G), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

