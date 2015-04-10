/* Type information for mips.c.
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
gt_ggc_mx_extern_list (void *x_p)
{
  struct extern_list * const x = (struct extern_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11extern_list ((*x).next);
    }
}

void
gt_ggc_mx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).mips16_gp_pseudo_rtx);
    }
}

void
gt_pch_nx_extern_list (void *x_p)
{
  struct extern_list * const x = (struct extern_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11extern_list))
    {
      gt_pch_n_11extern_list ((*x).next);
      gt_pch_n_S ((*x).name);
    }
}

void
gt_pch_nx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16machine_function))
    {
      gt_pch_n_7rtx_def ((*x).mips16_gp_pseudo_rtx);
    }
}

void
gt_pch_p_11extern_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct extern_list * const x ATTRIBUTE_UNUSED = (struct extern_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
}

void
gt_pch_p_16machine_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct machine_function * const x ATTRIBUTE_UNUSED = (struct machine_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).mips16_gp_pseudo_rtx), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_mips_h[] = {
  {
    &extern_head,
    1,
    sizeof (extern_head),
    &gt_ggc_mx_extern_list,
    &gt_pch_nx_extern_list
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_mips_h[] = {
  { &mips_output_filename_first_time, 1, sizeof (mips_output_filename_first_time), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

