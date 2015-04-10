/* Type information for cgraph.c.
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

const struct ggc_root_tab gt_ggc_r_gt_cgraph_h[] = {
  {
    &cgraph_varpool_nodes,
    1,
    sizeof (cgraph_varpool_nodes),
    &gt_ggc_mx_cgraph_varpool_node,
    &gt_pch_nx_cgraph_varpool_node
  },
  {
    &cgraph_varpool_hash,
    1,
    sizeof (cgraph_varpool_hash),
    &gt_ggc_m_P19cgraph_varpool_node4htab,
    &gt_pch_n_P19cgraph_varpool_node4htab
  },
  {
    &cgraph_hash,
    1,
    sizeof (cgraph_hash),
    &gt_ggc_m_P11cgraph_node4htab,
    &gt_pch_n_P11cgraph_node4htab
  },
  LAST_GGC_ROOT_TAB
};

