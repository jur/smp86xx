/* Type information for tree.c.
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
gt_ggc_mx_type_hash (void *x_p)
{
  struct type_hash * const x = (struct type_hash *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).type);
    }
}

void
gt_ggc_m_P9type_hash4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_9type_hash ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_type_hash (void *x_p)
{
  struct type_hash * const x = (struct type_hash *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9type_hash))
    {
      gt_pch_n_9tree_node ((*x).type);
    }
}

void
gt_pch_n_P9type_hash4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P9type_hash4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_9type_hash ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P9type_hash4htab);
      }
    }
}

void
gt_pch_p_9type_hash (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct type_hash * const x ATTRIBUTE_UNUSED = (struct type_hash *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
}

void
gt_pch_p_P9type_hash4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_tree_h[] = {
  {
    &last_annotated_node,
    1,
    sizeof (last_annotated_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &int_cst_node,
    1,
    sizeof (int_cst_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_cache_tab gt_ggc_rc_gt_tree_h[] = {
  {
    &int_cst_hash_table,
    1,
    sizeof (int_cst_hash_table),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node,
    &ggc_marked_p
  },
  {
    &type_hash_table,
    1,
    sizeof (type_hash_table),
    &gt_ggc_mx_type_hash,
    &gt_pch_nx_type_hash,
    &type_hash_marked_p
  },
  LAST_GGC_CACHE_TAB
};

const struct ggc_root_tab gt_pch_rc_gt_tree_h[] = {
  {
    &int_cst_hash_table,
    1,
    sizeof (int_cst_hash_table),
    &gt_ggc_m_P9tree_node4htab,
    &gt_pch_n_P9tree_node4htab
  },
  {
    &type_hash_table,
    1,
    sizeof (type_hash_table),
    &gt_ggc_m_P9type_hash4htab,
    &gt_pch_n_P9type_hash4htab
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_tree_h[] = {
  { &next_type_uid, 1, sizeof (next_type_uid), NULL, NULL },
  { &next_decl_uid, 1, sizeof (next_decl_uid), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

