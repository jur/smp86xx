/* Type information for except.c.
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
gt_ggc_mx_eh_region (void *x_p)
{
  struct eh_region * const x = (struct eh_region *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9eh_region ((*x).outer);
      gt_ggc_m_9eh_region ((*x).inner);
      gt_ggc_m_9eh_region ((*x).next_peer);
      gt_ggc_m_15bitmap_head_def ((*x).aka);
      switch ((*x).type)
        {
        case ERT_TRY:
          gt_ggc_m_9eh_region ((*x).u.try.catch);
          gt_ggc_m_9eh_region ((*x).u.try.last_catch);
          gt_ggc_m_9eh_region ((*x).u.try.prev_try);
          gt_ggc_m_7rtx_def ((*x).u.try.continue_label);
          break;
        case ERT_CATCH:
          gt_ggc_m_9eh_region ((*x).u.catch.next_catch);
          gt_ggc_m_9eh_region ((*x).u.catch.prev_catch);
          gt_ggc_m_9tree_node ((*x).u.catch.type_list);
          gt_ggc_m_9tree_node ((*x).u.catch.filter_list);
          break;
        case ERT_ALLOWED_EXCEPTIONS:
          gt_ggc_m_9tree_node ((*x).u.allowed.type_list);
          break;
        case ERT_THROW:
          gt_ggc_m_9tree_node ((*x).u.throw.type);
          break;
        case ERT_CLEANUP:
          gt_ggc_m_9tree_node ((*x).u.cleanup.exp);
          gt_ggc_m_9eh_region ((*x).u.cleanup.prev_try);
          break;
        case ERT_FIXUP:
          gt_ggc_m_9tree_node ((*x).u.fixup.cleanup_exp);
          gt_ggc_m_9eh_region ((*x).u.fixup.real_region);
          break;
        default:
          break;
        }
      gt_ggc_m_7rtx_def ((*x).label);
      gt_ggc_m_9tree_node ((*x).tree_label);
      gt_ggc_m_7rtx_def ((*x).landing_pad);
      gt_ggc_m_7rtx_def ((*x).post_landing_pad);
      gt_ggc_m_7rtx_def ((*x).resume);
    }
}

void
gt_ggc_mx_ehl_map_entry (void *x_p)
{
  struct ehl_map_entry * const x = (struct ehl_map_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).label);
      gt_ggc_m_9eh_region ((*x).region);
    }
}

void
gt_ggc_mx_eh_status (void *x_p)
{
  struct eh_status * const x = (struct eh_status *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9eh_region ((*x).region_tree);
      if ((*x).region_array != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).last_region_number); i0++) {
          gt_ggc_m_9eh_region ((*x).region_array[i0]);
        }
        ggc_mark ((*x).region_array);
      }
      gt_ggc_m_9eh_region ((*x).cur_region);
      gt_ggc_m_9eh_region ((*x).try_region);
      gt_ggc_m_7rtx_def ((*x).filter);
      gt_ggc_m_7rtx_def ((*x).exc_ptr);
      gt_ggc_m_15varray_head_tag ((*x).ttype_data);
      gt_ggc_m_15varray_head_tag ((*x).ehspec_data);
      gt_ggc_m_15varray_head_tag ((*x).action_record_data);
      gt_ggc_m_P13ehl_map_entry4htab ((*x).exception_handler_label_map);
      if ((*x).call_site_data != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x)).call_site_data_used); i1++) {
          gt_ggc_m_7rtx_def ((*x).call_site_data[i1].landing_pad);
        }
        ggc_mark ((*x).call_site_data);
      }
      gt_ggc_m_7rtx_def ((*x).ehr_stackadj);
      gt_ggc_m_7rtx_def ((*x).ehr_handler);
      gt_ggc_m_7rtx_def ((*x).ehr_label);
      gt_ggc_m_7rtx_def ((*x).sjlj_fc);
      gt_ggc_m_7rtx_def ((*x).sjlj_exit_after);
    }
}

void
gt_ggc_m_P13ehl_map_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_13ehl_map_entry ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_eh_region (void *x_p)
{
  struct eh_region * const x = (struct eh_region *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9eh_region))
    {
      gt_pch_n_9eh_region ((*x).outer);
      gt_pch_n_9eh_region ((*x).inner);
      gt_pch_n_9eh_region ((*x).next_peer);
      gt_pch_n_15bitmap_head_def ((*x).aka);
      switch ((*x).type)
        {
        case ERT_TRY:
          gt_pch_n_9eh_region ((*x).u.try.catch);
          gt_pch_n_9eh_region ((*x).u.try.last_catch);
          gt_pch_n_9eh_region ((*x).u.try.prev_try);
          gt_pch_n_7rtx_def ((*x).u.try.continue_label);
          break;
        case ERT_CATCH:
          gt_pch_n_9eh_region ((*x).u.catch.next_catch);
          gt_pch_n_9eh_region ((*x).u.catch.prev_catch);
          gt_pch_n_9tree_node ((*x).u.catch.type_list);
          gt_pch_n_9tree_node ((*x).u.catch.filter_list);
          break;
        case ERT_ALLOWED_EXCEPTIONS:
          gt_pch_n_9tree_node ((*x).u.allowed.type_list);
          break;
        case ERT_THROW:
          gt_pch_n_9tree_node ((*x).u.throw.type);
          break;
        case ERT_CLEANUP:
          gt_pch_n_9tree_node ((*x).u.cleanup.exp);
          gt_pch_n_9eh_region ((*x).u.cleanup.prev_try);
          break;
        case ERT_FIXUP:
          gt_pch_n_9tree_node ((*x).u.fixup.cleanup_exp);
          gt_pch_n_9eh_region ((*x).u.fixup.real_region);
          break;
        default:
          break;
        }
      gt_pch_n_7rtx_def ((*x).label);
      gt_pch_n_9tree_node ((*x).tree_label);
      gt_pch_n_7rtx_def ((*x).landing_pad);
      gt_pch_n_7rtx_def ((*x).post_landing_pad);
      gt_pch_n_7rtx_def ((*x).resume);
    }
}

void
gt_pch_nx_ehl_map_entry (void *x_p)
{
  struct ehl_map_entry * const x = (struct ehl_map_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13ehl_map_entry))
    {
      gt_pch_n_7rtx_def ((*x).label);
      gt_pch_n_9eh_region ((*x).region);
    }
}

void
gt_pch_nx_eh_status (void *x_p)
{
  struct eh_status * const x = (struct eh_status *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9eh_status))
    {
      gt_pch_n_9eh_region ((*x).region_tree);
      if ((*x).region_array != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).last_region_number); i0++) {
          gt_pch_n_9eh_region ((*x).region_array[i0]);
        }
        gt_pch_note_object ((*x).region_array, x, gt_pch_p_9eh_status);
      }
      gt_pch_n_9eh_region ((*x).cur_region);
      gt_pch_n_9eh_region ((*x).try_region);
      gt_pch_n_7rtx_def ((*x).filter);
      gt_pch_n_7rtx_def ((*x).exc_ptr);
      gt_pch_n_15varray_head_tag ((*x).ttype_data);
      gt_pch_n_15varray_head_tag ((*x).ehspec_data);
      gt_pch_n_15varray_head_tag ((*x).action_record_data);
      gt_pch_n_P13ehl_map_entry4htab ((*x).exception_handler_label_map);
      if ((*x).call_site_data != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x)).call_site_data_used); i1++) {
          gt_pch_n_7rtx_def ((*x).call_site_data[i1].landing_pad);
        }
        gt_pch_note_object ((*x).call_site_data, x, gt_pch_p_9eh_status);
      }
      gt_pch_n_7rtx_def ((*x).ehr_stackadj);
      gt_pch_n_7rtx_def ((*x).ehr_handler);
      gt_pch_n_7rtx_def ((*x).ehr_label);
      gt_pch_n_7rtx_def ((*x).sjlj_fc);
      gt_pch_n_7rtx_def ((*x).sjlj_exit_after);
    }
}

void
gt_pch_n_P13ehl_map_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P13ehl_map_entry4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_13ehl_map_entry ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P13ehl_map_entry4htab);
      }
    }
}

void
gt_pch_p_9eh_region (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct eh_region * const x ATTRIBUTE_UNUSED = (struct eh_region *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).outer), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).inner), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_peer), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).aka), cookie);
  switch ((*x).type)
    {
    case ERT_TRY:
      if ((void *)(x) == this_obj)
        op (&((*x).u.try.catch), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.try.last_catch), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.try.prev_try), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.try.continue_label), cookie);
      break;
    case ERT_CATCH:
      if ((void *)(x) == this_obj)
        op (&((*x).u.catch.next_catch), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.catch.prev_catch), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.catch.type_list), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.catch.filter_list), cookie);
      break;
    case ERT_ALLOWED_EXCEPTIONS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.allowed.type_list), cookie);
      break;
    case ERT_THROW:
      if ((void *)(x) == this_obj)
        op (&((*x).u.throw.type), cookie);
      break;
    case ERT_CLEANUP:
      if ((void *)(x) == this_obj)
        op (&((*x).u.cleanup.exp), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.cleanup.prev_try), cookie);
      break;
    case ERT_FIXUP:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fixup.cleanup_exp), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fixup.real_region), cookie);
      break;
    default:
      break;
    }
  if ((void *)(x) == this_obj)
    op (&((*x).label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).tree_label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).landing_pad), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).post_landing_pad), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).resume), cookie);
}

void
gt_pch_p_13ehl_map_entry (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct ehl_map_entry * const x ATTRIBUTE_UNUSED = (struct ehl_map_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).region), cookie);
}

void
gt_pch_p_9eh_status (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct eh_status * const x ATTRIBUTE_UNUSED = (struct eh_status *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).region_tree), cookie);
  if ((*x).region_array != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).last_region_number); i0++) {
      if ((void *)((*x).region_array) == this_obj)
        op (&((*x).region_array[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).region_array), cookie);
  }
  if ((void *)(x) == this_obj)
    op (&((*x).cur_region), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).try_region), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).filter), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).exc_ptr), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ttype_data), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ehspec_data), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).action_record_data), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).exception_handler_label_map), cookie);
  if ((*x).call_site_data != NULL) {
    size_t i1;
    for (i1 = 0; i1 != (size_t)(((*x)).call_site_data_used); i1++) {
      if ((void *)((*x).call_site_data) == this_obj)
        op (&((*x).call_site_data[i1].landing_pad), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).call_site_data), cookie);
  }
  if ((void *)(x) == this_obj)
    op (&((*x).ehr_stackadj), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ehr_handler), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ehr_label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).sjlj_fc), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).sjlj_exit_after), cookie);
}

void
gt_pch_p_P13ehl_map_entry4htab (ATTRIBUTE_UNUSED void *this_obj,
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

const struct ggc_root_tab gt_ggc_r_gt_except_h[] = {
  {
    &sjlj_fc_type_node,
    1,
    sizeof (sjlj_fc_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &type_to_runtime_map,
    1,
    sizeof (type_to_runtime_map),
    &gt_ggc_m_P9tree_node4htab,
    &gt_pch_n_P9tree_node4htab
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_except_h[] = {
  { &call_site_base, 1, sizeof (call_site_base), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

