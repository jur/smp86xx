/* Type information for cp/semantics.c.
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
gt_ggc_mx_VEC_deferred_access (void *x_p)
{
  struct VEC_deferred_access * const x = (struct VEC_deferred_access *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_ggc_m_9tree_node ((*x).vec[i0].deferred_access_checks);
        }
      }
    }
}

void
gt_pch_nx_VEC_deferred_access (void *x_p)
{
  struct VEC_deferred_access * const x = (struct VEC_deferred_access *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19VEC_deferred_access))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_pch_n_9tree_node ((*x).vec[i0].deferred_access_checks);
        }
      }
    }
}

void
gt_pch_p_19VEC_deferred_access (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_deferred_access * const x ATTRIBUTE_UNUSED = (struct VEC_deferred_access *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).vec[i0].deferred_access_checks), cookie);
    }
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_cp_semantics_h[] = {
  {
    &deferred_access_stack,
    1,
    sizeof (deferred_access_stack),
    &gt_ggc_mx_VEC_deferred_access,
    &gt_pch_nx_VEC_deferred_access
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_cp_semantics_h[] = {
  { &deferred_access_no_check, 1, sizeof (deferred_access_no_check), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

