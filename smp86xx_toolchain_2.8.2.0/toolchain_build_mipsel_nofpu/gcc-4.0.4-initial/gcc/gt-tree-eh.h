/* Type information for tree-eh.c.
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
gt_ggc_mx_throw_stmt_node (void *x_p)
{
  struct throw_stmt_node * const x = (struct throw_stmt_node *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).stmt);
    }
}

void
gt_ggc_m_P15throw_stmt_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_15throw_stmt_node ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_throw_stmt_node (void *x_p)
{
  struct throw_stmt_node * const x = (struct throw_stmt_node *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15throw_stmt_node))
    {
      gt_pch_n_9tree_node ((*x).stmt);
    }
}

void
gt_pch_n_P15throw_stmt_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P15throw_stmt_node4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_15throw_stmt_node ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P15throw_stmt_node4htab);
      }
    }
}

void
gt_pch_p_15throw_stmt_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct throw_stmt_node * const x ATTRIBUTE_UNUSED = (struct throw_stmt_node *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).stmt), cookie);
}

void
gt_pch_p_P15throw_stmt_node4htab (ATTRIBUTE_UNUSED void *this_obj,
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

const struct ggc_root_tab gt_ggc_r_gt_tree_eh_h[] = {
  {
    &throw_stmt_table,
    1,
    sizeof (throw_stmt_table),
    &gt_ggc_m_P15throw_stmt_node4htab,
    &gt_pch_n_P15throw_stmt_node4htab
  },
  LAST_GGC_ROOT_TAB
};

