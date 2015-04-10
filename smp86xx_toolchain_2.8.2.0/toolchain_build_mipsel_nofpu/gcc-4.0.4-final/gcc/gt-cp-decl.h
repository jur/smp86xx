/* Type information for cp/decl.c.
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

void
gt_ggc_mx_named_label_list (void *x_p)
{
  struct named_label_list * const x = (struct named_label_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_16cp_binding_level ((*x).binding_level);
      gt_ggc_m_9tree_node ((*x).names_in_scope);
      gt_ggc_m_9tree_node ((*x).old_value);
      gt_ggc_m_9tree_node ((*x).label_decl);
      gt_ggc_m_9tree_node ((*x).bad_decls);
      gt_ggc_m_16named_label_list ((*x).next);
    }
}

void
gt_ggc_mx_named_label_use_list (void *x_p)
{
  struct named_label_use_list * const x = (struct named_label_use_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_16cp_binding_level ((*x).binding_level);
      gt_ggc_m_9tree_node ((*x).names_in_scope);
      gt_ggc_m_9tree_node ((*x).label_decl);
      gt_ggc_m_20named_label_use_list ((*x).next);
    }
}

void
gt_pch_nx_named_label_list (void *x_p)
{
  struct named_label_list * const x = (struct named_label_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16named_label_list))
    {
      gt_pch_n_16cp_binding_level ((*x).binding_level);
      gt_pch_n_9tree_node ((*x).names_in_scope);
      gt_pch_n_9tree_node ((*x).old_value);
      gt_pch_n_9tree_node ((*x).label_decl);
      gt_pch_n_9tree_node ((*x).bad_decls);
      gt_pch_n_16named_label_list ((*x).next);
    }
}

void
gt_pch_nx_named_label_use_list (void *x_p)
{
  struct named_label_use_list * const x = (struct named_label_use_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_20named_label_use_list))
    {
      gt_pch_n_16cp_binding_level ((*x).binding_level);
      gt_pch_n_9tree_node ((*x).names_in_scope);
      gt_pch_n_9tree_node ((*x).label_decl);
      gt_pch_n_S ((*x).o_goto_locus.file);
      gt_pch_n_20named_label_use_list ((*x).next);
    }
}

void
gt_pch_p_16named_label_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct named_label_list * const x ATTRIBUTE_UNUSED = (struct named_label_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).binding_level), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).names_in_scope), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).old_value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).label_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).bad_decls), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_20named_label_use_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct named_label_use_list * const x ATTRIBUTE_UNUSED = (struct named_label_use_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).binding_level), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).names_in_scope), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).label_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).o_goto_locus.file), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_cp_decl_h[] = {
  {
    &typename_htab,
    1,
    sizeof (typename_htab),
    &gt_ggc_m_P9tree_node4htab,
    &gt_pch_n_P9tree_node4htab
  },
  {
    &incomplete_vars,
    1,
    sizeof (incomplete_vars),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_cp_decl_h[] = {
  { &start_cleanup_cnt, 1, sizeof (start_cleanup_cnt), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

