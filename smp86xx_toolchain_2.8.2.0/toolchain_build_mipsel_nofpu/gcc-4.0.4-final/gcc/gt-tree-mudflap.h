/* Type information for tree-mudflap.c.
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

const struct ggc_root_tab gt_ggc_r_gt_tree_mudflap_h[] = {
  {
    &enqueued_call_stmt_chain,
    1,
    sizeof (enqueued_call_stmt_chain),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &deferred_static_decls,
    1,
    sizeof (deferred_static_decls),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &marked_trees,
    1,
    sizeof (marked_trees),
    &gt_ggc_m_P9tree_node4htab,
    &gt_pch_n_P9tree_node4htab
  },
  {
    &mf_set_options_fndecl,
    1,
    sizeof (mf_set_options_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_init_fndecl,
    1,
    sizeof (mf_init_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_unregister_fndecl,
    1,
    sizeof (mf_unregister_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_register_fndecl,
    1,
    sizeof (mf_register_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_check_fndecl,
    1,
    sizeof (mf_check_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_mask_decl_l,
    1,
    sizeof (mf_cache_mask_decl_l),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_shift_decl_l,
    1,
    sizeof (mf_cache_shift_decl_l),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_mask_decl,
    1,
    sizeof (mf_cache_mask_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_shift_decl,
    1,
    sizeof (mf_cache_shift_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_array_decl,
    1,
    sizeof (mf_cache_array_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_structptr_type,
    1,
    sizeof (mf_cache_structptr_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_cache_struct_type,
    1,
    sizeof (mf_cache_struct_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &mf_uintptr_type,
    1,
    sizeof (mf_uintptr_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

