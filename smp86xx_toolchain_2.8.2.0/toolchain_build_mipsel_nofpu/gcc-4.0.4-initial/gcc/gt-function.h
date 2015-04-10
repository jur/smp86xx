/* Type information for function.c.
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
gt_ggc_mx_temp_slot (void *x_p)
{
  struct temp_slot * const x = (struct temp_slot *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9temp_slot ((*x).next);
      gt_ggc_m_9temp_slot ((*x).prev);
      gt_ggc_m_7rtx_def ((*x).slot);
      gt_ggc_m_7rtx_def ((*x).address);
      gt_ggc_m_9tree_node ((*x).type);
    }
}

void
gt_ggc_m_P9temp_slot15varray_head_tag (void *x_p)
{
  struct varray_head_tag * const x = (struct varray_head_tag *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch ((*x).type)
        {
        case VARRAY_DATA_C:
          break;
        case VARRAY_DATA_UC:
          break;
        case VARRAY_DATA_S:
          break;
        case VARRAY_DATA_US:
          break;
        case VARRAY_DATA_I:
          break;
        case VARRAY_DATA_U:
          break;
        case VARRAY_DATA_L:
          break;
        case VARRAY_DATA_UL:
          break;
        case VARRAY_DATA_HINT:
          break;
        case VARRAY_DATA_UHINT:
          break;
        case VARRAY_DATA_GENERIC:
          {
            size_t i10;
            for (i10 = 0; i10 != (size_t)((*x).num_elements); i10++) {
              gt_ggc_m_9temp_slot ((*x).data.generic[i10]);
            }
          }
          break;
        case VARRAY_DATA_CPTR:
          {
            size_t i11;
            for (i11 = 0; i11 != (size_t)((*x).num_elements); i11++) {
            }
          }
          break;
        case VARRAY_DATA_RTX:
          {
            size_t i12;
            for (i12 = 0; i12 != (size_t)((*x).num_elements); i12++) {
              gt_ggc_m_7rtx_def ((*x).data.rtx[i12]);
            }
          }
          break;
        case VARRAY_DATA_RTVEC:
          {
            size_t i13;
            for (i13 = 0; i13 != (size_t)((*x).num_elements); i13++) {
              gt_ggc_m_9rtvec_def ((*x).data.rtvec[i13]);
            }
          }
          break;
        case VARRAY_DATA_TREE:
          {
            size_t i14;
            for (i14 = 0; i14 != (size_t)((*x).num_elements); i14++) {
              gt_ggc_m_9tree_node ((*x).data.tree[i14]);
            }
          }
          break;
        case VARRAY_DATA_BITMAP:
          {
            size_t i15;
            for (i15 = 0; i15 != (size_t)((*x).num_elements); i15++) {
              gt_ggc_m_15bitmap_head_def ((*x).data.bitmap[i15]);
            }
          }
          break;
        case VARRAY_DATA_TE:
          {
            size_t i16;
            for (i16 = 0; i16 != (size_t)((*x).num_elements); i16++) {
              gt_ggc_m_8elt_list ((*x).data.te[i16]);
            }
          }
          break;
        case VARRAY_DATA_EDGE:
          {
            size_t i17;
            for (i17 = 0; i17 != (size_t)((*x).num_elements); i17++) {
              gt_ggc_m_8edge_def ((*x).data.e[i17]);
            }
          }
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_temp_slot (void *x_p)
{
  struct temp_slot * const x = (struct temp_slot *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9temp_slot))
    {
      gt_pch_n_9temp_slot ((*x).next);
      gt_pch_n_9temp_slot ((*x).prev);
      gt_pch_n_7rtx_def ((*x).slot);
      gt_pch_n_7rtx_def ((*x).address);
      gt_pch_n_9tree_node ((*x).type);
    }
}

void
gt_pch_n_P9temp_slot15varray_head_tag (void *x_p)
{
  struct varray_head_tag * const x = (struct varray_head_tag *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P9temp_slot15varray_head_tag))
    {
      gt_pch_n_S ((*x).name);
      switch ((*x).type)
        {
        case VARRAY_DATA_C:
          break;
        case VARRAY_DATA_UC:
          break;
        case VARRAY_DATA_S:
          break;
        case VARRAY_DATA_US:
          break;
        case VARRAY_DATA_I:
          break;
        case VARRAY_DATA_U:
          break;
        case VARRAY_DATA_L:
          break;
        case VARRAY_DATA_UL:
          break;
        case VARRAY_DATA_HINT:
          break;
        case VARRAY_DATA_UHINT:
          break;
        case VARRAY_DATA_GENERIC:
          {
            size_t i10;
            for (i10 = 0; i10 != (size_t)((*x).num_elements); i10++) {
              gt_pch_n_9temp_slot ((*x).data.generic[i10]);
            }
          }
          break;
        case VARRAY_DATA_CPTR:
          {
            size_t i11;
            for (i11 = 0; i11 != (size_t)((*x).num_elements); i11++) {
              gt_pch_n_S ((*x).data.cptr[i11]);
            }
          }
          break;
        case VARRAY_DATA_RTX:
          {
            size_t i12;
            for (i12 = 0; i12 != (size_t)((*x).num_elements); i12++) {
              gt_pch_n_7rtx_def ((*x).data.rtx[i12]);
            }
          }
          break;
        case VARRAY_DATA_RTVEC:
          {
            size_t i13;
            for (i13 = 0; i13 != (size_t)((*x).num_elements); i13++) {
              gt_pch_n_9rtvec_def ((*x).data.rtvec[i13]);
            }
          }
          break;
        case VARRAY_DATA_TREE:
          {
            size_t i14;
            for (i14 = 0; i14 != (size_t)((*x).num_elements); i14++) {
              gt_pch_n_9tree_node ((*x).data.tree[i14]);
            }
          }
          break;
        case VARRAY_DATA_BITMAP:
          {
            size_t i15;
            for (i15 = 0; i15 != (size_t)((*x).num_elements); i15++) {
              gt_pch_n_15bitmap_head_def ((*x).data.bitmap[i15]);
            }
          }
          break;
        case VARRAY_DATA_TE:
          {
            size_t i16;
            for (i16 = 0; i16 != (size_t)((*x).num_elements); i16++) {
              gt_pch_n_8elt_list ((*x).data.te[i16]);
            }
          }
          break;
        case VARRAY_DATA_EDGE:
          {
            size_t i17;
            for (i17 = 0; i17 != (size_t)((*x).num_elements); i17++) {
              gt_pch_n_8edge_def ((*x).data.e[i17]);
            }
          }
          break;
        default:
          break;
        }
    }
}

void
gt_pch_p_9temp_slot (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct temp_slot * const x ATTRIBUTE_UNUSED = (struct temp_slot *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).slot), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).address), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
}

void
gt_pch_p_P9temp_slot15varray_head_tag (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct varray_head_tag * const x ATTRIBUTE_UNUSED = (struct varray_head_tag *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
  switch ((*x).type)
    {
    case VARRAY_DATA_C:
      break;
    case VARRAY_DATA_UC:
      break;
    case VARRAY_DATA_S:
      break;
    case VARRAY_DATA_US:
      break;
    case VARRAY_DATA_I:
      break;
    case VARRAY_DATA_U:
      break;
    case VARRAY_DATA_L:
      break;
    case VARRAY_DATA_UL:
      break;
    case VARRAY_DATA_HINT:
      break;
    case VARRAY_DATA_UHINT:
      break;
    case VARRAY_DATA_GENERIC:
      {
        size_t i10;
        for (i10 = 0; i10 != (size_t)((*x).num_elements); i10++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.generic[i10]), cookie);
        }
      }
      break;
    case VARRAY_DATA_CPTR:
      {
        size_t i11;
        for (i11 = 0; i11 != (size_t)((*x).num_elements); i11++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.cptr[i11]), cookie);
        }
      }
      break;
    case VARRAY_DATA_RTX:
      {
        size_t i12;
        for (i12 = 0; i12 != (size_t)((*x).num_elements); i12++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.rtx[i12]), cookie);
        }
      }
      break;
    case VARRAY_DATA_RTVEC:
      {
        size_t i13;
        for (i13 = 0; i13 != (size_t)((*x).num_elements); i13++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.rtvec[i13]), cookie);
        }
      }
      break;
    case VARRAY_DATA_TREE:
      {
        size_t i14;
        for (i14 = 0; i14 != (size_t)((*x).num_elements); i14++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.tree[i14]), cookie);
        }
      }
      break;
    case VARRAY_DATA_BITMAP:
      {
        size_t i15;
        for (i15 = 0; i15 != (size_t)((*x).num_elements); i15++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.bitmap[i15]), cookie);
        }
      }
      break;
    case VARRAY_DATA_TE:
      {
        size_t i16;
        for (i16 = 0; i16 != (size_t)((*x).num_elements); i16++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.te[i16]), cookie);
        }
      }
      break;
    case VARRAY_DATA_EDGE:
      {
        size_t i17;
        for (i17 = 0; i17 != (size_t)((*x).num_elements); i17++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.e[i17]), cookie);
        }
      }
      break;
    default:
      break;
    }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_function_h[] = {
  {
    &initial_trampoline,
    1,
    sizeof (initial_trampoline),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &sibcall_epilogue,
    1,
    sizeof (sibcall_epilogue),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &epilogue,
    1,
    sizeof (epilogue),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &prologue,
    1,
    sizeof (prologue),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_function_h[] = {
  { &next_block_index, 1, sizeof (next_block_index), NULL, NULL },
  { &funcdef_no, 1, sizeof (funcdef_no), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

