/* Type information for varasm.c.
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
gt_ggc_mx_VEC_alias_pair (void *x_p)
{
  struct VEC_alias_pair * const x = (struct VEC_alias_pair *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_ggc_m_10alias_pair ((*x).vec[i0]);
        }
      }
    }
}

void
gt_ggc_mx_alias_pair (void *x_p)
{
  struct alias_pair * const x = (struct alias_pair *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_9tree_node ((*x).target);
    }
}

void
gt_ggc_mx_constant_descriptor_rtx (void *x_p)
{
  struct constant_descriptor_rtx * x = (struct constant_descriptor_rtx *)x_p;
  struct constant_descriptor_rtx * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next);
  while (x != xlimit)
    {
      gt_ggc_m_23constant_descriptor_rtx ((*x).next);
      gt_ggc_m_7rtx_def ((*x).mem);
      gt_ggc_m_7rtx_def ((*x).sym);
      gt_ggc_m_7rtx_def ((*x).constant);
      x = ((*x).next);
    }
}

void
gt_ggc_mx_constant_descriptor_tree (void *x_p)
{
  struct constant_descriptor_tree * const x = (struct constant_descriptor_tree *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).rtl);
      gt_ggc_m_9tree_node ((*x).value);
    }
}

void
gt_ggc_mx_in_named_entry (void *x_p)
{
  struct in_named_entry * const x = (struct in_named_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_rtx_constant_pool (void *x_p)
{
  struct rtx_constant_pool * const x = (struct rtx_constant_pool *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_23constant_descriptor_rtx ((*x).first);
      gt_ggc_m_23constant_descriptor_rtx ((*x).last);
      gt_ggc_m_P23constant_descriptor_rtx4htab ((*x).const_rtx_htab);
      gt_ggc_m_P23constant_descriptor_rtx4htab ((*x).const_rtx_sym_htab);
    }
}

void
gt_ggc_mx_varasm_status (void *x_p)
{
  struct varasm_status * const x = (struct varasm_status *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_17rtx_constant_pool ((*x).pool);
    }
}

void
gt_ggc_m_P23constant_descriptor_rtx4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_23constant_descriptor_rtx ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P24constant_descriptor_tree4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_24constant_descriptor_tree ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P14in_named_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_14in_named_entry ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_VEC_alias_pair (void *x_p)
{
  struct VEC_alias_pair * const x = (struct VEC_alias_pair *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14VEC_alias_pair))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_pch_n_10alias_pair ((*x).vec[i0]);
        }
      }
    }
}

void
gt_pch_nx_alias_pair (void *x_p)
{
  struct alias_pair * const x = (struct alias_pair *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_10alias_pair))
    {
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_9tree_node ((*x).target);
    }
}

void
gt_pch_nx_constant_descriptor_rtx (void *x_p)
{
  struct constant_descriptor_rtx * x = (struct constant_descriptor_rtx *)x_p;
  struct constant_descriptor_rtx * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_23constant_descriptor_rtx))
   xlimit = ((*xlimit).next);
  while (x != xlimit)
    {
      gt_pch_n_23constant_descriptor_rtx ((*x).next);
      gt_pch_n_7rtx_def ((*x).mem);
      gt_pch_n_7rtx_def ((*x).sym);
      gt_pch_n_7rtx_def ((*x).constant);
      x = ((*x).next);
    }
}

void
gt_pch_nx_constant_descriptor_tree (void *x_p)
{
  struct constant_descriptor_tree * const x = (struct constant_descriptor_tree *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_24constant_descriptor_tree))
    {
      gt_pch_n_7rtx_def ((*x).rtl);
      gt_pch_n_9tree_node ((*x).value);
    }
}

void
gt_pch_nx_in_named_entry (void *x_p)
{
  struct in_named_entry * const x = (struct in_named_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14in_named_entry))
    {
      gt_pch_n_S ((*x).name);
    }
}

void
gt_pch_nx_rtx_constant_pool (void *x_p)
{
  struct rtx_constant_pool * const x = (struct rtx_constant_pool *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17rtx_constant_pool))
    {
      gt_pch_n_23constant_descriptor_rtx ((*x).first);
      gt_pch_n_23constant_descriptor_rtx ((*x).last);
      gt_pch_n_P23constant_descriptor_rtx4htab ((*x).const_rtx_htab);
      gt_pch_n_P23constant_descriptor_rtx4htab ((*x).const_rtx_sym_htab);
    }
}

void
gt_pch_nx_varasm_status (void *x_p)
{
  struct varasm_status * const x = (struct varasm_status *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13varasm_status))
    {
      gt_pch_n_17rtx_constant_pool ((*x).pool);
    }
}

void
gt_pch_n_P23constant_descriptor_rtx4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P23constant_descriptor_rtx4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_23constant_descriptor_rtx ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P23constant_descriptor_rtx4htab);
      }
    }
}

void
gt_pch_n_P24constant_descriptor_tree4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P24constant_descriptor_tree4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_24constant_descriptor_tree ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P24constant_descriptor_tree4htab);
      }
    }
}

void
gt_pch_n_P14in_named_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P14in_named_entry4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_14in_named_entry ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P14in_named_entry4htab);
      }
    }
}

void
gt_pch_p_14VEC_alias_pair (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_alias_pair * const x ATTRIBUTE_UNUSED = (struct VEC_alias_pair *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).vec[i0]), cookie);
    }
  }
}

void
gt_pch_p_10alias_pair (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct alias_pair * const x ATTRIBUTE_UNUSED = (struct alias_pair *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).target), cookie);
}

void
gt_pch_p_23constant_descriptor_rtx (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct constant_descriptor_rtx * const x ATTRIBUTE_UNUSED = (struct constant_descriptor_rtx *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).mem), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).sym), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).constant), cookie);
}

void
gt_pch_p_24constant_descriptor_tree (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct constant_descriptor_tree * const x ATTRIBUTE_UNUSED = (struct constant_descriptor_tree *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).rtl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
}

void
gt_pch_p_14in_named_entry (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct in_named_entry * const x ATTRIBUTE_UNUSED = (struct in_named_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
}

void
gt_pch_p_17rtx_constant_pool (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct rtx_constant_pool * const x ATTRIBUTE_UNUSED = (struct rtx_constant_pool *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).first), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).last), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).const_rtx_htab), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).const_rtx_sym_htab), cookie);
}

void
gt_pch_p_13varasm_status (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct varasm_status * const x ATTRIBUTE_UNUSED = (struct varasm_status *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).pool), cookie);
}

void
gt_pch_p_P23constant_descriptor_rtx4htab (ATTRIBUTE_UNUSED void *this_obj,
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

void
gt_pch_p_P24constant_descriptor_tree4htab (ATTRIBUTE_UNUSED void *this_obj,
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

void
gt_pch_p_P14in_named_entry4htab (ATTRIBUTE_UNUSED void *this_obj,
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

const struct ggc_root_tab gt_ggc_r_gt_varasm_h[] = {
  {
    &alias_pairs,
    1,
    sizeof (alias_pairs),
    &gt_ggc_mx_VEC_alias_pair,
    &gt_pch_nx_VEC_alias_pair
  },
  {
    &weak_decls,
    1,
    sizeof (weak_decls),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &const_desc_htab,
    1,
    sizeof (const_desc_htab),
    &gt_ggc_m_P24constant_descriptor_tree4htab,
    &gt_pch_n_P24constant_descriptor_tree4htab
  },
  {
    &initial_trampoline,
    1,
    sizeof (initial_trampoline),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &pending_assemble_externals,
    1,
    sizeof (pending_assemble_externals),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &in_named_htab,
    1,
    sizeof (in_named_htab),
    &gt_ggc_m_P14in_named_entry4htab,
    &gt_pch_n_P14in_named_entry4htab
  },
  {
    &in_named_name,
    1, 
    sizeof (in_named_name),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &weak_global_object_name,
    1, 
    sizeof (weak_global_object_name),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &first_global_object_name,
    1, 
    sizeof (first_global_object_name),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_varasm_h[] = {
  { &in_section, 1, sizeof (in_section), NULL, NULL },
  { &const_labelno, 1, sizeof (const_labelno), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

