/* Type information for GCC.
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
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "varray.h"
#include "hashtab.h"
#include "splay-tree.h"
#include "obstack.h"
#include "bitmap.h"
#include "input.h"
#include "tree.h"
#include "rtl.h"
#include "function.h"
#include "insn-config.h"
#include "expr.h"
#include "hard-reg-set.h"
#include "basic-block.h"
#include "cselib.h"
#include "insn-addr.h"
#include "optabs.h"
#include "libfuncs.h"
#include "debug.h"
#include "ggc.h"
#include "cgraph.h"
#include "tree-flow.h"
#include "reload.h"
#include "cpp-id-data.h"
#include "tree-chrec.h"

void
gt_ggc_mx_v_must_def_optype_d (void *x_p)
{
  struct v_must_def_optype_d * const x = (struct v_must_def_optype_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_v_must_defs); i0++) {
          gt_ggc_m_9tree_node ((*x).v_must_defs[i0].def);
          gt_ggc_m_9tree_node ((*x).v_must_defs[i0].use);
        }
      }
    }
}

void
gt_ggc_mx_vuse_optype_d (void *x_p)
{
  struct vuse_optype_d * const x = (struct vuse_optype_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_vuses); i0++) {
          gt_ggc_m_9tree_node ((*x).vuses[i0]);
        }
      }
    }
}

void
gt_ggc_mx_v_may_def_optype_d (void *x_p)
{
  struct v_may_def_optype_d * const x = (struct v_may_def_optype_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_v_may_defs); i0++) {
          gt_ggc_m_9tree_node ((*x).v_may_defs[i0].def);
          gt_ggc_m_9tree_node ((*x).v_may_defs[i0].use);
        }
      }
    }
}

void
gt_ggc_mx_use_optype_d (void *x_p)
{
  struct use_optype_d * const x = (struct use_optype_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_uses); i0++) {
        }
      }
    }
}

void
gt_ggc_mx_def_optype_d (void *x_p)
{
  struct def_optype_d * const x = (struct def_optype_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_defs); i0++) {
        }
      }
    }
}

void
gt_ggc_mx_edge_prediction (void *x_p)
{
  struct edge_prediction * x = (struct edge_prediction *)x_p;
  struct edge_prediction * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next);
  while (x != xlimit)
    {
      gt_ggc_m_15edge_prediction ((*x).next);
      gt_ggc_m_8edge_def ((*x).edge);
      x = ((*x).next);
    }
}

void
gt_ggc_mx_cgraph_varpool_node (void *x_p)
{
  struct cgraph_varpool_node * const x = (struct cgraph_varpool_node *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_19cgraph_varpool_node ((*x).next);
      gt_ggc_m_19cgraph_varpool_node ((*x).next_needed);
    }
}

void
gt_ggc_mx_cgraph_edge (void *x_p)
{
  struct cgraph_edge * x = (struct cgraph_edge *)x_p;
  struct cgraph_edge * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next_caller);
  if (x != xlimit)
    for (;;)
      {
        struct cgraph_edge * const xprev = ((*x).prev_caller);
        if (xprev == NULL) break;
        x = xprev;
        (void) ggc_test_and_set_mark (xprev);
      }
  while (x != xlimit)
    {
      gt_ggc_m_11cgraph_node ((*x).caller);
      gt_ggc_m_11cgraph_node ((*x).callee);
      gt_ggc_m_11cgraph_edge ((*x).prev_caller);
      gt_ggc_m_11cgraph_edge ((*x).next_caller);
      gt_ggc_m_11cgraph_edge ((*x).prev_callee);
      gt_ggc_m_11cgraph_edge ((*x).next_callee);
      gt_ggc_m_9tree_node ((*x).call_expr);
      x = ((*x).next_caller);
    }
}

void
gt_ggc_mx_cgraph_node (void *x_p)
{
  struct cgraph_node * x = (struct cgraph_node *)x_p;
  struct cgraph_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next);
  if (x != xlimit)
    for (;;)
      {
        struct cgraph_node * const xprev = ((*x).previous);
        if (xprev == NULL) break;
        x = xprev;
        (void) ggc_test_and_set_mark (xprev);
      }
  while (x != xlimit)
    {
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_11cgraph_edge ((*x).callees);
      gt_ggc_m_11cgraph_edge ((*x).callers);
      gt_ggc_m_11cgraph_node ((*x).next);
      gt_ggc_m_11cgraph_node ((*x).previous);
      gt_ggc_m_11cgraph_node ((*x).origin);
      gt_ggc_m_11cgraph_node ((*x).nested);
      gt_ggc_m_11cgraph_node ((*x).next_nested);
      gt_ggc_m_11cgraph_node ((*x).next_needed);
      gt_ggc_m_11cgraph_node ((*x).next_clone);
      gt_ggc_m_11cgraph_node ((*x).global.inlined_to);
      x = ((*x).next);
    }
}

void
gt_ggc_mx_bb_ann_d (void *x_p)
{
  struct bb_ann_d * const x = (struct bb_ann_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).phi_nodes);
      gt_ggc_m_15edge_prediction ((*x).predictions);
    }
}

void
gt_ggc_mx_VEC_edge (void *x_p)
{
  struct VEC_edge * const x = (struct VEC_edge *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_ggc_m_8edge_def ((*x).vec[i0]);
        }
      }
    }
}

void
gt_ggc_mx_elt_loc_list (void *x_p)
{
  struct elt_loc_list * const x = (struct elt_loc_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_12elt_loc_list ((*x).next);
      gt_ggc_m_7rtx_def ((*x).loc);
      gt_ggc_m_7rtx_def ((*x).setting_insn);
    }
}

void
gt_ggc_mx_cselib_val_struct (void *x_p)
{
  struct cselib_val_struct * const x = (struct cselib_val_struct *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch (1)
        {
        case 1:
          gt_ggc_m_7rtx_def ((*x).u.val_rtx);
          break;
        default:
          break;
        }
      gt_ggc_m_12elt_loc_list ((*x).locs);
      gt_ggc_m_8elt_list ((*x).addr_list);
      gt_ggc_m_17cselib_val_struct ((*x).next_containing_mem);
    }
}

void
gt_ggc_mx_edge_def (void *x_p)
{
  struct edge_def * const x = (struct edge_def *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_15basic_block_def ((*x).src);
      gt_ggc_m_15basic_block_def ((*x).dest);
      switch (ir_type ())
        {
        case 0:
          gt_ggc_m_7rtx_def ((*x).insns.r);
          break;
        case 1:
          gt_ggc_m_9tree_node ((*x).insns.t);
          break;
        default:
          break;
        }
      gt_ggc_m_10location_s ((*x).goto_locus);
    }
}

void
gt_ggc_mx_elt_list (void *x_p)
{
  struct elt_list * const x = (struct elt_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_8elt_list ((*x).next);
      gt_ggc_m_17cselib_val_struct ((*x).elt);
    }
}

void
gt_ggc_mx_tree_statement_list_node (void *x_p)
{
  struct tree_statement_list_node * x = (struct tree_statement_list_node *)x_p;
  struct tree_statement_list_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next);
  if (x != xlimit)
    for (;;)
      {
        struct tree_statement_list_node * const xprev = ((*x).prev);
        if (xprev == NULL) break;
        x = xprev;
        (void) ggc_test_and_set_mark (xprev);
      }
  while (x != xlimit)
    {
      gt_ggc_m_24tree_statement_list_node ((*x).prev);
      gt_ggc_m_24tree_statement_list_node ((*x).next);
      gt_ggc_m_9tree_node ((*x).stmt);
      x = ((*x).next);
    }
}

void
gt_ggc_mx_dataflow_d (void *x_p)
{
  struct dataflow_d * const x = (struct dataflow_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_15varray_head_tag ((*x).immediate_uses);
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(2); i0++) {
          gt_ggc_m_9tree_node ((*x).uses[i0]);
        }
      }
    }
}

void
gt_ggc_mx_ptr_info_def (void *x_p)
{
  struct ptr_info_def * const x = (struct ptr_info_def *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_15bitmap_head_def ((*x).pt_vars);
      gt_ggc_m_9tree_node ((*x).name_mem_tag);
    }
}

void
gt_ggc_mx_real_value (void *x_p)
{
  struct real_value * const x = (struct real_value *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_tree_ann_d (void *x_p)
{
  union tree_ann_d * const x = (union tree_ann_d *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch (ann_type ((tree_ann_t)&((*x))))
        {
        case TREE_ANN_COMMON:
          break;
        case VAR_ANN:
          gt_ggc_m_9tree_node ((*x).decl.type_mem_tag);
          gt_ggc_m_15varray_head_tag ((*x).decl.may_aliases);
          gt_ggc_m_9tree_node ((*x).decl.default_def);
          gt_ggc_m_9tree_node ((*x).decl.current_def);
          break;
        case STMT_ANN:
          gt_ggc_m_12def_optype_d ((*x).stmt.operands.def_ops);
          gt_ggc_m_12use_optype_d ((*x).stmt.operands.use_ops);
          gt_ggc_m_18v_may_def_optype_d ((*x).stmt.operands.v_may_def_ops);
          gt_ggc_m_13vuse_optype_d ((*x).stmt.operands.vuse_ops);
          gt_ggc_m_19v_must_def_optype_d ((*x).stmt.operands.v_must_def_ops);
          gt_ggc_m_10dataflow_d ((*x).stmt.df);
          gt_ggc_m_15bitmap_head_def ((*x).stmt.addresses_taken);
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_VEC_tree (void *x_p)
{
  struct VEC_tree * const x = (struct VEC_tree *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_ggc_m_9tree_node ((*x).vec[i0]);
        }
      }
    }
}

void
gt_ggc_mx_convert_optab (void *x_p)
{
  struct convert_optab * const x = (struct convert_optab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(NUM_MACHINE_MODES); i0++) {
          {
            size_t i1;
            for (i1 = 0; i1 != (size_t)(NUM_MACHINE_MODES); i1++) {
              gt_ggc_m_7rtx_def ((*x).handlers[i0][i1].libfunc);
            }
          }
        }
      }
    }
}

void
gt_ggc_mx_optab (void *x_p)
{
  struct optab * const x = (struct optab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(NUM_MACHINE_MODES); i0++) {
          gt_ggc_m_7rtx_def ((*x).handlers[i0].libfunc);
        }
      }
    }
}

void
gt_ggc_mx_basic_block_def (void *x_p)
{
  struct basic_block_def * x = (struct basic_block_def *)x_p;
  struct basic_block_def * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).next_bb);
  if (x != xlimit)
    for (;;)
      {
        struct basic_block_def * const xprev = ((*x).prev_bb);
        if (xprev == NULL) break;
        x = xprev;
        (void) ggc_test_and_set_mark (xprev);
      }
  while (x != xlimit)
    {
      gt_ggc_m_7rtx_def ((*x).head_);
      gt_ggc_m_7rtx_def ((*x).end_);
      gt_ggc_m_9tree_node ((*x).stmt_list);
      gt_ggc_m_8VEC_edge ((*x).preds);
      gt_ggc_m_8VEC_edge ((*x).succs);
      gt_ggc_m_15basic_block_def ((*x).prev_bb);
      gt_ggc_m_15basic_block_def ((*x).next_bb);
      gt_ggc_m_8bb_ann_d ((*x).tree_annotations);
      x = ((*x).next_bb);
    }
}

void
gt_ggc_mx_reg_attrs (void *x_p)
{
  struct reg_attrs * const x = (struct reg_attrs *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).decl);
    }
}

void
gt_ggc_mx_mem_attrs (void *x_p)
{
  struct mem_attrs * const x = (struct mem_attrs *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).expr);
      gt_ggc_m_7rtx_def ((*x).offset);
      gt_ggc_m_7rtx_def ((*x).size);
    }
}

void
gt_ggc_mx_varray_head_tag (void *x_p)
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
          gcc_unreachable ();
          break;
        case VARRAY_DATA_CPTR:
          {
            size_t i10;
            for (i10 = 0; i10 != (size_t)((*x).num_elements); i10++) {
            }
          }
          break;
        case VARRAY_DATA_RTX:
          {
            size_t i11;
            for (i11 = 0; i11 != (size_t)((*x).num_elements); i11++) {
              gt_ggc_m_7rtx_def ((*x).data.rtx[i11]);
            }
          }
          break;
        case VARRAY_DATA_RTVEC:
          {
            size_t i12;
            for (i12 = 0; i12 != (size_t)((*x).num_elements); i12++) {
              gt_ggc_m_9rtvec_def ((*x).data.rtvec[i12]);
            }
          }
          break;
        case VARRAY_DATA_TREE:
          {
            size_t i13;
            for (i13 = 0; i13 != (size_t)((*x).num_elements); i13++) {
              gt_ggc_m_9tree_node ((*x).data.tree[i13]);
            }
          }
          break;
        case VARRAY_DATA_BITMAP:
          {
            size_t i14;
            for (i14 = 0; i14 != (size_t)((*x).num_elements); i14++) {
              gt_ggc_m_15bitmap_head_def ((*x).data.bitmap[i14]);
            }
          }
          break;
        case VARRAY_DATA_TE:
          {
            size_t i15;
            for (i15 = 0; i15 != (size_t)((*x).num_elements); i15++) {
              gt_ggc_m_8elt_list ((*x).data.te[i15]);
            }
          }
          break;
        case VARRAY_DATA_EDGE:
          {
            size_t i16;
            for (i16 = 0; i16 != (size_t)((*x).num_elements); i16++) {
              gt_ggc_m_8edge_def ((*x).data.e[i16]);
            }
          }
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_function (void *x_p)
{
  struct function * const x = (struct function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9eh_status ((*x).eh);
      gt_ggc_m_11expr_status ((*x).expr);
      gt_ggc_m_11emit_status ((*x).emit);
      gt_ggc_m_13varasm_status ((*x).varasm);
      gt_ggc_m_9tree_node ((*x).saved_tree);
      gt_ggc_m_9tree_node ((*x).saved_args);
      gt_ggc_m_9tree_node ((*x).saved_static_chain_decl);
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_8function ((*x).outer);
      gt_ggc_m_7rtx_def ((*x).arg_offset_rtx);
      gt_ggc_m_7rtx_def ((*x).return_rtx);
      gt_ggc_m_7rtx_def ((*x).internal_arg_pointer);
      gt_ggc_m_20initial_value_struct ((*x).hard_reg_initial_vals);
      gt_ggc_m_7rtx_def ((*x).x_nonlocal_goto_handler_labels);
      gt_ggc_m_7rtx_def ((*x).x_return_label);
      gt_ggc_m_7rtx_def ((*x).x_naked_return_label);
      gt_ggc_m_7rtx_def ((*x).x_stack_slot_list);
      gt_ggc_m_7rtx_def ((*x).x_tail_recursion_reentry);
      gt_ggc_m_7rtx_def ((*x).x_arg_pointer_save_area);
      gt_ggc_m_9tree_node ((*x).static_chain_decl);
      gt_ggc_m_9tree_node ((*x).nonlocal_goto_save_area);
      gt_ggc_m_7rtx_def ((*x).x_parm_birth_insn);
      gt_ggc_m_P9temp_slot15varray_head_tag ((*x).x_used_temp_slots);
      gt_ggc_m_9temp_slot ((*x).x_avail_temp_slots);
      gt_ggc_m_14var_refs_queue ((*x).fixup_var_refs_queue);
      gt_ggc_m_9rtvec_def ((*x).original_arg_vector);
      gt_ggc_m_9tree_node ((*x).original_decl_initial);
      gt_ggc_m_16machine_function ((*x).machine);
      gt_ggc_m_17language_function ((*x).language);
      gt_ggc_m_7rtx_def ((*x).epilogue_delay_list);
      gt_ggc_m_15varray_head_tag ((*x).ib_boundaries_block);
      gt_ggc_m_9tree_node ((*x).unexpanded_var_list);
    }
}

void
gt_ggc_mx_expr_status (void *x_p)
{
  struct expr_status * const x = (struct expr_status *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).x_saveregs_value);
      gt_ggc_m_7rtx_def ((*x).x_apply_args_value);
      gt_ggc_m_7rtx_def ((*x).x_forced_labels);
    }
}

void
gt_ggc_mx_emit_status (void *x_p)
{
  struct emit_status * const x = (struct emit_status *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).x_first_insn);
      gt_ggc_m_7rtx_def ((*x).x_last_insn);
      gt_ggc_m_14sequence_stack ((*x).sequence_stack);
      if ((*x).regno_pointer_align != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).x_reg_rtx_no); i0++) {
        }
        ggc_mark ((*x).regno_pointer_align);
      }
      if ((*x).x_regno_reg_rtx != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x)).x_reg_rtx_no); i1++) {
          gt_ggc_m_7rtx_def ((*x).x_regno_reg_rtx[i1]);
        }
        ggc_mark ((*x).x_regno_reg_rtx);
      }
    }
}

void
gt_ggc_mx_sequence_stack (void *x_p)
{
  struct sequence_stack * const x = (struct sequence_stack *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).first);
      gt_ggc_m_7rtx_def ((*x).last);
      gt_ggc_m_14sequence_stack ((*x).next);
    }
}

void
gt_ggc_mx_var_refs_queue (void *x_p)
{
  struct var_refs_queue * const x = (struct var_refs_queue *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).modified);
      gt_ggc_m_14var_refs_queue ((*x).next);
    }
}

void
gt_ggc_mx_bitmap_head_def (void *x_p)
{
  struct bitmap_head_def * const x = (struct bitmap_head_def *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_18bitmap_element_def ((*x).first);
      gt_ggc_m_18bitmap_element_def ((*x).current);
      gt_ggc_m_14bitmap_obstack ((*x).obstack);
    }
}

void
gt_ggc_mx_bitmap_element_def (void *x_p)
{
  struct bitmap_element_def * const x = (struct bitmap_element_def *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_18bitmap_element_def ((*x).next);
      gt_ggc_m_18bitmap_element_def ((*x).prev);
    }
}

void
gt_ggc_mx_bitmap_obstack (void *x_p)
{
  struct bitmap_obstack * const x = (struct bitmap_obstack *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_18bitmap_element_def ((*x).elements);
      gt_ggc_m_15bitmap_head_def ((*x).heads);
    }
}

void
gt_ggc_mx_answer (void *x_p)
{
  struct answer * const x = (struct answer *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_6answer ((*x).next);
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).count); i0++) {
          switch (cpp_token_val_index (&((*x).first[i0])))
            {
            case CPP_TOKEN_FLD_NODE:
              {
                union tree_node * const x1 =
                  ((*x).first[i0].val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).first[i0].val.node))) : NULL;
                gt_ggc_m_9tree_node (x1);
              }
              break;
            case CPP_TOKEN_FLD_SOURCE:
              gt_ggc_m_9cpp_token ((*x).first[i0].val.source);
              break;
            case CPP_TOKEN_FLD_STR:
              break;
            case CPP_TOKEN_FLD_ARG_NO:
              break;
            default:
              break;
            }
        }
      }
    }
}

void
gt_ggc_mx_cpp_macro (void *x_p)
{
  struct cpp_macro * const x = (struct cpp_macro *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).params != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).paramc); i0++) {
          {
            union tree_node * const x1 =
              ((*x).params[i0]) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).params[i0]))) : NULL;
            gt_ggc_m_9tree_node (x1);
          }
        }
        ggc_mark ((*x).params);
      }
      switch (((*x)).traditional)
        {
        case 0:
          if ((*x).exp.tokens != NULL) {
            size_t i2;
            for (i2 = 0; i2 != (size_t)((*x).count); i2++) {
              switch (cpp_token_val_index (&((*x).exp.tokens[i2])))
                {
                case CPP_TOKEN_FLD_NODE:
                  {
                    union tree_node * const x3 =
                      ((*x).exp.tokens[i2].val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).exp.tokens[i2].val.node))) : NULL;
                    gt_ggc_m_9tree_node (x3);
                  }
                  break;
                case CPP_TOKEN_FLD_SOURCE:
                  gt_ggc_m_9cpp_token ((*x).exp.tokens[i2].val.source);
                  break;
                case CPP_TOKEN_FLD_STR:
                  break;
                case CPP_TOKEN_FLD_ARG_NO:
                  break;
                default:
                  break;
                }
            }
            ggc_mark ((*x).exp.tokens);
          }
          break;
        case 1:
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_cpp_token (void *x_p)
{
  struct cpp_token * const x = (struct cpp_token *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch (cpp_token_val_index (&((*x))))
        {
        case CPP_TOKEN_FLD_NODE:
          {
            union tree_node * const x0 =
              ((*x).val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).val.node))) : NULL;
            gt_ggc_m_9tree_node (x0);
          }
          break;
        case CPP_TOKEN_FLD_SOURCE:
          gt_ggc_m_9cpp_token ((*x).val.source);
          break;
        case CPP_TOKEN_FLD_STR:
          break;
        case CPP_TOKEN_FLD_ARG_NO:
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_rtvec_def (void *x_p)
{
  struct rtvec_def * const x = (struct rtvec_def *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_elem); i0++) {
          gt_ggc_m_7rtx_def ((*x).elem[i0]);
        }
      }
    }
}

void
gt_ggc_mx_rtx_def (void *x_p)
{
  struct rtx_def * x = (struct rtx_def *)x_p;
  struct rtx_def * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = (RTX_NEXT (&(*xlimit)));
  if (x != xlimit)
    for (;;)
      {
        struct rtx_def * const xprev = (RTX_PREV (&(*x)));
        if (xprev == NULL) break;
        x = xprev;
        (void) ggc_test_and_set_mark (xprev);
      }
  while (x != xlimit)
    {
      switch (GET_CODE (&(*x)))
        {
        case VAR_LOCATION:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_9tree_node ((*x).u.fld[0].rt_tree);
          break;
        case US_TRUNCATE:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SS_TRUNCATE:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case US_MINUS:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SS_MINUS:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case US_PLUS:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SS_PLUS:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_DUPLICATE:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_CONCAT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_SELECT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_MERGE:
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LO_SUM:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case HIGH:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ZERO_EXTRACT:
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SIGN_EXTRACT:
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PARITY:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POPCOUNT:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CTZ:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CLZ:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FFS:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SQRT:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ABS:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNSIGNED_FIX:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNSIGNED_FLOAT:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FIX:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FLOAT:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FLOAT_TRUNCATE:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FLOAT_EXTEND:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case TRUNCATE:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ZERO_EXTEND:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SIGN_EXTEND:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LTGT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNLT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNLE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNGT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNGE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNEQ:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ORDERED:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNORDERED:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LTU:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LEU:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GTU:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GEU:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case EQ:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POST_MODIFY:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PRE_MODIFY:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POST_INC:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POST_DEC:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PRE_INC:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PRE_DEC:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UMAX:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UMIN:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SMAX:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SMIN:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ROTATERT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LSHIFTRT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ASHIFTRT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ROTATE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ASHIFT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NOT:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case XOR:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case IOR:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case AND:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UMOD:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UDIV:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MOD:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case DIV:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MULT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NEG:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MINUS:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PLUS:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case COMPARE:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case IF_THEN_ELSE:
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CC0:
          break;
        case SYMBOL_REF:
          gt_ggc_m_9tree_node ((*x).u.fld[2].rt_tree);
          break;
        case LABEL_REF:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MEM:
          gt_ggc_m_9mem_attrs ((*x).u.fld[1].rt_mem);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CONCAT:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case STRICT_LOW_PART:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SUBREG:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SCRATCH:
          break;
        case REG:
          gt_ggc_m_9reg_attrs ((*x).u.fld[2].rt_reg);
          break;
        case VALUE:
          break;
        case PC:
          break;
        case CONST:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CONST_STRING:
          break;
        case CONST_VECTOR:
          gt_ggc_m_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case CONST_DOUBLE:
          break;
        case CONST_INT:
          break;
        case RESX:
          break;
        case TRAP_IF:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case RETURN:
          break;
        case CALL:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CLOBBER:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case USE:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SET:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PREFETCH:
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ADDR_DIFF_VEC:
          gt_ggc_m_7rtx_def ((*x).u.fld[3].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_9rtvec_def ((*x).u.fld[1].rt_rtvec);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ADDR_VEC:
          gt_ggc_m_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case UNSPEC_VOLATILE:
          gt_ggc_m_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case UNSPEC:
          gt_ggc_m_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case ASM_OPERANDS:
          gt_ggc_m_9rtvec_def ((*x).u.fld[4].rt_rtvec);
          gt_ggc_m_9rtvec_def ((*x).u.fld[3].rt_rtvec);
          break;
        case ASM_INPUT:
          break;
        case PARALLEL:
          gt_ggc_m_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case COND_EXEC:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NOTE:
          switch (NOTE_LINE_NUMBER (&(*x)))
            {
            default:
              break;
            case NOTE_INSN_UNLIKELY_EXECUTED_CODE:
              break;
            case NOTE_INSN_BASIC_BLOCK:
              break;
            case NOTE_INSN_EXPECTED_VALUE:
              gt_ggc_m_7rtx_def ((*x).u.fld[4].rt_rtx);
              break;
            case NOTE_INSN_VAR_LOCATION:
              gt_ggc_m_7rtx_def ((*x).u.fld[4].rt_rtx);
              break;
            case NOTE_INSN_REPEATED_LINE_NUMBER:
              break;
            case NOTE_INSN_EH_REGION_END:
              break;
            case NOTE_INSN_EH_REGION_BEG:
              break;
            case NOTE_INSN_EPILOGUE_BEG:
              break;
            case NOTE_INSN_PROLOGUE_END:
              break;
            case NOTE_INSN_FUNCTION_END:
              break;
            case NOTE_INSN_FUNCTION_BEG:
              break;
            case NOTE_INSN_LOOP_END:
              break;
            case NOTE_INSN_LOOP_BEG:
              break;
            case NOTE_INSN_BLOCK_END:
              gt_ggc_m_9tree_node ((*x).u.fld[4].rt_tree);
              break;
            case NOTE_INSN_BLOCK_BEG:
              gt_ggc_m_9tree_node ((*x).u.fld[4].rt_tree);
              break;
            case NOTE_INSN_DELETED_LABEL:
              break;
            case NOTE_INSN_DELETED:
              break;
            }
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case CODE_LABEL:
          gt_ggc_m_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case BARRIER:
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case CALL_INSN:
          gt_ggc_m_7rtx_def ((*x).u.fld[9].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[8].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[7].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case JUMP_INSN:
          gt_ggc_m_7rtx_def ((*x).u.fld[9].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[8].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[7].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case INSN:
          gt_ggc_m_7rtx_def ((*x).u.fld[8].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[7].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case ADDRESS:
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SEQUENCE:
          gt_ggc_m_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case INSN_LIST:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case EXPR_LIST:
          gt_ggc_m_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_ggc_m_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNKNOWN:
          break;
        default:
          break;
        }
      x = (RTX_NEXT (&(*x)));
    }
}

void
gt_ggc_mx_location_s (void *x_p)
{
  struct location_s * const x = (struct location_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_m_II17splay_tree_node_s (void *x_p)
{
  struct splay_tree_node_s * const x = (struct splay_tree_node_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_II17splay_tree_node_s ((*x).left);
      gt_ggc_m_II17splay_tree_node_s ((*x).right);
    }
}

void
gt_ggc_m_SP9tree_node17splay_tree_node_s (void *x_p)
{
  struct splay_tree_node_s * const x = (struct splay_tree_node_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((void *)(*x).value);
      gt_ggc_m_SP9tree_node17splay_tree_node_s ((*x).left);
      gt_ggc_m_SP9tree_node17splay_tree_node_s ((*x).right);
    }
}

void
gt_ggc_m_P9tree_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_9tree_node ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P9reg_attrs4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_9reg_attrs ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P9mem_attrs4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_9mem_attrs ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P7rtx_def4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_7rtx_def ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_SP9tree_node12splay_tree_s (void *x_p)
{
  struct splay_tree_s * const x = (struct splay_tree_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_SP9tree_node17splay_tree_node_s ((*x).root);
    }
}

void
gt_ggc_m_P19cgraph_varpool_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_19cgraph_varpool_node ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P11cgraph_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_11cgraph_node ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_II12splay_tree_s (void *x_p)
{
  struct splay_tree_s * const x = (struct splay_tree_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_II17splay_tree_node_s ((*x).root);
    }
}

void
gt_pch_nx_v_must_def_optype_d (void *x_p)
{
  struct v_must_def_optype_d * const x = (struct v_must_def_optype_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19v_must_def_optype_d))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_v_must_defs); i0++) {
          gt_pch_n_9tree_node ((*x).v_must_defs[i0].def);
          gt_pch_n_9tree_node ((*x).v_must_defs[i0].use);
        }
      }
    }
}

void
gt_pch_nx_vuse_optype_d (void *x_p)
{
  struct vuse_optype_d * const x = (struct vuse_optype_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13vuse_optype_d))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_vuses); i0++) {
          gt_pch_n_9tree_node ((*x).vuses[i0]);
        }
      }
    }
}

void
gt_pch_nx_v_may_def_optype_d (void *x_p)
{
  struct v_may_def_optype_d * const x = (struct v_may_def_optype_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18v_may_def_optype_d))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_v_may_defs); i0++) {
          gt_pch_n_9tree_node ((*x).v_may_defs[i0].def);
          gt_pch_n_9tree_node ((*x).v_may_defs[i0].use);
        }
      }
    }
}

void
gt_pch_nx_use_optype_d (void *x_p)
{
  struct use_optype_d * const x = (struct use_optype_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_12use_optype_d))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_uses); i0++) {
        }
      }
    }
}

void
gt_pch_nx_def_optype_d (void *x_p)
{
  struct def_optype_d * const x = (struct def_optype_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_12def_optype_d))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_defs); i0++) {
        }
      }
    }
}

void
gt_pch_nx_edge_prediction (void *x_p)
{
  struct edge_prediction * x = (struct edge_prediction *)x_p;
  struct edge_prediction * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_15edge_prediction))
   xlimit = ((*xlimit).next);
  while (x != xlimit)
    {
      gt_pch_n_15edge_prediction ((*x).next);
      gt_pch_n_8edge_def ((*x).edge);
      x = ((*x).next);
    }
}

void
gt_pch_nx_cgraph_varpool_node (void *x_p)
{
  struct cgraph_varpool_node * const x = (struct cgraph_varpool_node *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_19cgraph_varpool_node))
    {
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_19cgraph_varpool_node ((*x).next);
      gt_pch_n_19cgraph_varpool_node ((*x).next_needed);
    }
}

void
gt_pch_nx_cgraph_edge (void *x_p)
{
  struct cgraph_edge * x = (struct cgraph_edge *)x_p;
  struct cgraph_edge * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_11cgraph_edge))
   xlimit = ((*xlimit).next_caller);
  if (x != xlimit)
    for (;;)
      {
        struct cgraph_edge * const xprev = ((*x).prev_caller);
        if (xprev == NULL) break;
        x = xprev;
        (void) gt_pch_note_object (xprev, xprev, gt_pch_p_11cgraph_edge);
      }
  while (x != xlimit)
    {
      gt_pch_n_11cgraph_node ((*x).caller);
      gt_pch_n_11cgraph_node ((*x).callee);
      gt_pch_n_11cgraph_edge ((*x).prev_caller);
      gt_pch_n_11cgraph_edge ((*x).next_caller);
      gt_pch_n_11cgraph_edge ((*x).prev_callee);
      gt_pch_n_11cgraph_edge ((*x).next_callee);
      gt_pch_n_9tree_node ((*x).call_expr);
      gt_pch_n_S ((*x).inline_failed);
      x = ((*x).next_caller);
    }
}

void
gt_pch_nx_cgraph_node (void *x_p)
{
  struct cgraph_node * x = (struct cgraph_node *)x_p;
  struct cgraph_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_11cgraph_node))
   xlimit = ((*xlimit).next);
  if (x != xlimit)
    for (;;)
      {
        struct cgraph_node * const xprev = ((*x).previous);
        if (xprev == NULL) break;
        x = xprev;
        (void) gt_pch_note_object (xprev, xprev, gt_pch_p_11cgraph_node);
      }
  while (x != xlimit)
    {
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_11cgraph_edge ((*x).callees);
      gt_pch_n_11cgraph_edge ((*x).callers);
      gt_pch_n_11cgraph_node ((*x).next);
      gt_pch_n_11cgraph_node ((*x).previous);
      gt_pch_n_11cgraph_node ((*x).origin);
      gt_pch_n_11cgraph_node ((*x).nested);
      gt_pch_n_11cgraph_node ((*x).next_nested);
      gt_pch_n_11cgraph_node ((*x).next_needed);
      gt_pch_n_11cgraph_node ((*x).next_clone);
      gt_pch_n_11cgraph_node ((*x).global.inlined_to);
      x = ((*x).next);
    }
}

void
gt_pch_nx_bb_ann_d (void *x_p)
{
  struct bb_ann_d * const x = (struct bb_ann_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8bb_ann_d))
    {
      gt_pch_n_9tree_node ((*x).phi_nodes);
      gt_pch_n_15edge_prediction ((*x).predictions);
    }
}

void
gt_pch_nx_VEC_edge (void *x_p)
{
  struct VEC_edge * const x = (struct VEC_edge *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8VEC_edge))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_pch_n_8edge_def ((*x).vec[i0]);
        }
      }
    }
}

void
gt_pch_nx_elt_loc_list (void *x_p)
{
  struct elt_loc_list * const x = (struct elt_loc_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_12elt_loc_list))
    {
      gt_pch_n_12elt_loc_list ((*x).next);
      gt_pch_n_7rtx_def ((*x).loc);
      gt_pch_n_7rtx_def ((*x).setting_insn);
    }
}

void
gt_pch_nx_cselib_val_struct (void *x_p)
{
  struct cselib_val_struct * const x = (struct cselib_val_struct *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17cselib_val_struct))
    {
      switch (1)
        {
        case 1:
          gt_pch_n_7rtx_def ((*x).u.val_rtx);
          break;
        default:
          break;
        }
      gt_pch_n_12elt_loc_list ((*x).locs);
      gt_pch_n_8elt_list ((*x).addr_list);
      gt_pch_n_17cselib_val_struct ((*x).next_containing_mem);
    }
}

void
gt_pch_nx_edge_def (void *x_p)
{
  struct edge_def * const x = (struct edge_def *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8edge_def))
    {
      gt_pch_n_15basic_block_def ((*x).src);
      gt_pch_n_15basic_block_def ((*x).dest);
      switch (ir_type ())
        {
        case 0:
          gt_pch_n_7rtx_def ((*x).insns.r);
          break;
        case 1:
          gt_pch_n_9tree_node ((*x).insns.t);
          break;
        default:
          break;
        }
      gt_pch_n_10location_s ((*x).goto_locus);
    }
}

void
gt_pch_nx_elt_list (void *x_p)
{
  struct elt_list * const x = (struct elt_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8elt_list))
    {
      gt_pch_n_8elt_list ((*x).next);
      gt_pch_n_17cselib_val_struct ((*x).elt);
    }
}

void
gt_pch_nx_tree_statement_list_node (void *x_p)
{
  struct tree_statement_list_node * x = (struct tree_statement_list_node *)x_p;
  struct tree_statement_list_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_24tree_statement_list_node))
   xlimit = ((*xlimit).next);
  if (x != xlimit)
    for (;;)
      {
        struct tree_statement_list_node * const xprev = ((*x).prev);
        if (xprev == NULL) break;
        x = xprev;
        (void) gt_pch_note_object (xprev, xprev, gt_pch_p_24tree_statement_list_node);
      }
  while (x != xlimit)
    {
      gt_pch_n_24tree_statement_list_node ((*x).prev);
      gt_pch_n_24tree_statement_list_node ((*x).next);
      gt_pch_n_9tree_node ((*x).stmt);
      x = ((*x).next);
    }
}

void
gt_pch_nx_dataflow_d (void *x_p)
{
  struct dataflow_d * const x = (struct dataflow_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_10dataflow_d))
    {
      gt_pch_n_15varray_head_tag ((*x).immediate_uses);
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(2); i0++) {
          gt_pch_n_9tree_node ((*x).uses[i0]);
        }
      }
    }
}

void
gt_pch_nx_ptr_info_def (void *x_p)
{
  struct ptr_info_def * const x = (struct ptr_info_def *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_12ptr_info_def))
    {
      gt_pch_n_15bitmap_head_def ((*x).pt_vars);
      gt_pch_n_9tree_node ((*x).name_mem_tag);
    }
}

void
gt_pch_nx_real_value (void *x_p)
{
  struct real_value * const x = (struct real_value *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_10real_value))
    {
    }
}

void
gt_pch_nx_tree_ann_d (void *x_p)
{
  union tree_ann_d * const x = (union tree_ann_d *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_10tree_ann_d))
    {
      switch (ann_type ((tree_ann_t)&((*x))))
        {
        case TREE_ANN_COMMON:
          break;
        case VAR_ANN:
          gt_pch_n_9tree_node ((*x).decl.type_mem_tag);
          gt_pch_n_15varray_head_tag ((*x).decl.may_aliases);
          gt_pch_n_9tree_node ((*x).decl.default_def);
          gt_pch_n_9tree_node ((*x).decl.current_def);
          break;
        case STMT_ANN:
          gt_pch_n_12def_optype_d ((*x).stmt.operands.def_ops);
          gt_pch_n_12use_optype_d ((*x).stmt.operands.use_ops);
          gt_pch_n_18v_may_def_optype_d ((*x).stmt.operands.v_may_def_ops);
          gt_pch_n_13vuse_optype_d ((*x).stmt.operands.vuse_ops);
          gt_pch_n_19v_must_def_optype_d ((*x).stmt.operands.v_must_def_ops);
          gt_pch_n_10dataflow_d ((*x).stmt.df);
          gt_pch_n_15bitmap_head_def ((*x).stmt.addresses_taken);
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_VEC_tree (void *x_p)
{
  struct VEC_tree * const x = (struct VEC_tree *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8VEC_tree))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
          gt_pch_n_9tree_node ((*x).vec[i0]);
        }
      }
    }
}

void
gt_pch_nx_convert_optab (void *x_p)
{
  struct convert_optab * const x = (struct convert_optab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13convert_optab))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(NUM_MACHINE_MODES); i0++) {
          {
            size_t i1;
            for (i1 = 0; i1 != (size_t)(NUM_MACHINE_MODES); i1++) {
              gt_pch_n_7rtx_def ((*x).handlers[i0][i1].libfunc);
            }
          }
        }
      }
    }
}

void
gt_pch_nx_optab (void *x_p)
{
  struct optab * const x = (struct optab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_5optab))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(NUM_MACHINE_MODES); i0++) {
          gt_pch_n_7rtx_def ((*x).handlers[i0].libfunc);
        }
      }
    }
}

void
gt_pch_nx_basic_block_def (void *x_p)
{
  struct basic_block_def * x = (struct basic_block_def *)x_p;
  struct basic_block_def * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_15basic_block_def))
   xlimit = ((*xlimit).next_bb);
  if (x != xlimit)
    for (;;)
      {
        struct basic_block_def * const xprev = ((*x).prev_bb);
        if (xprev == NULL) break;
        x = xprev;
        (void) gt_pch_note_object (xprev, xprev, gt_pch_p_15basic_block_def);
      }
  while (x != xlimit)
    {
      gt_pch_n_7rtx_def ((*x).head_);
      gt_pch_n_7rtx_def ((*x).end_);
      gt_pch_n_9tree_node ((*x).stmt_list);
      gt_pch_n_8VEC_edge ((*x).preds);
      gt_pch_n_8VEC_edge ((*x).succs);
      gt_pch_n_15basic_block_def ((*x).prev_bb);
      gt_pch_n_15basic_block_def ((*x).next_bb);
      gt_pch_n_8bb_ann_d ((*x).tree_annotations);
      x = ((*x).next_bb);
    }
}

void
gt_pch_nx_reg_attrs (void *x_p)
{
  struct reg_attrs * const x = (struct reg_attrs *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9reg_attrs))
    {
      gt_pch_n_9tree_node ((*x).decl);
    }
}

void
gt_pch_nx_mem_attrs (void *x_p)
{
  struct mem_attrs * const x = (struct mem_attrs *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9mem_attrs))
    {
      gt_pch_n_9tree_node ((*x).expr);
      gt_pch_n_7rtx_def ((*x).offset);
      gt_pch_n_7rtx_def ((*x).size);
    }
}

void
gt_pch_nx_varray_head_tag (void *x_p)
{
  struct varray_head_tag * const x = (struct varray_head_tag *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15varray_head_tag))
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
          gcc_unreachable ();
          break;
        case VARRAY_DATA_CPTR:
          {
            size_t i10;
            for (i10 = 0; i10 != (size_t)((*x).num_elements); i10++) {
              gt_pch_n_S ((*x).data.cptr[i10]);
            }
          }
          break;
        case VARRAY_DATA_RTX:
          {
            size_t i11;
            for (i11 = 0; i11 != (size_t)((*x).num_elements); i11++) {
              gt_pch_n_7rtx_def ((*x).data.rtx[i11]);
            }
          }
          break;
        case VARRAY_DATA_RTVEC:
          {
            size_t i12;
            for (i12 = 0; i12 != (size_t)((*x).num_elements); i12++) {
              gt_pch_n_9rtvec_def ((*x).data.rtvec[i12]);
            }
          }
          break;
        case VARRAY_DATA_TREE:
          {
            size_t i13;
            for (i13 = 0; i13 != (size_t)((*x).num_elements); i13++) {
              gt_pch_n_9tree_node ((*x).data.tree[i13]);
            }
          }
          break;
        case VARRAY_DATA_BITMAP:
          {
            size_t i14;
            for (i14 = 0; i14 != (size_t)((*x).num_elements); i14++) {
              gt_pch_n_15bitmap_head_def ((*x).data.bitmap[i14]);
            }
          }
          break;
        case VARRAY_DATA_TE:
          {
            size_t i15;
            for (i15 = 0; i15 != (size_t)((*x).num_elements); i15++) {
              gt_pch_n_8elt_list ((*x).data.te[i15]);
            }
          }
          break;
        case VARRAY_DATA_EDGE:
          {
            size_t i16;
            for (i16 = 0; i16 != (size_t)((*x).num_elements); i16++) {
              gt_pch_n_8edge_def ((*x).data.e[i16]);
            }
          }
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_function (void *x_p)
{
  struct function * const x = (struct function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8function))
    {
      gt_pch_n_9eh_status ((*x).eh);
      gt_pch_n_11expr_status ((*x).expr);
      gt_pch_n_11emit_status ((*x).emit);
      gt_pch_n_13varasm_status ((*x).varasm);
      gt_pch_n_9tree_node ((*x).saved_tree);
      gt_pch_n_9tree_node ((*x).saved_args);
      gt_pch_n_9tree_node ((*x).saved_static_chain_decl);
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_8function ((*x).outer);
      gt_pch_n_7rtx_def ((*x).arg_offset_rtx);
      gt_pch_n_7rtx_def ((*x).return_rtx);
      gt_pch_n_7rtx_def ((*x).internal_arg_pointer);
      gt_pch_n_20initial_value_struct ((*x).hard_reg_initial_vals);
      gt_pch_n_7rtx_def ((*x).x_nonlocal_goto_handler_labels);
      gt_pch_n_7rtx_def ((*x).x_return_label);
      gt_pch_n_7rtx_def ((*x).x_naked_return_label);
      gt_pch_n_7rtx_def ((*x).x_stack_slot_list);
      gt_pch_n_7rtx_def ((*x).x_tail_recursion_reentry);
      gt_pch_n_7rtx_def ((*x).x_arg_pointer_save_area);
      gt_pch_n_9tree_node ((*x).static_chain_decl);
      gt_pch_n_9tree_node ((*x).nonlocal_goto_save_area);
      gt_pch_n_7rtx_def ((*x).x_parm_birth_insn);
      gt_pch_n_P9temp_slot15varray_head_tag ((*x).x_used_temp_slots);
      gt_pch_n_9temp_slot ((*x).x_avail_temp_slots);
      gt_pch_n_14var_refs_queue ((*x).fixup_var_refs_queue);
      gt_pch_n_9rtvec_def ((*x).original_arg_vector);
      gt_pch_n_9tree_node ((*x).original_decl_initial);
      gt_pch_n_16machine_function ((*x).machine);
      gt_pch_n_17language_function ((*x).language);
      gt_pch_n_7rtx_def ((*x).epilogue_delay_list);
      gt_pch_n_S ((*x).function_end_locus.file);
      gt_pch_n_15varray_head_tag ((*x).ib_boundaries_block);
      gt_pch_n_9tree_node ((*x).unexpanded_var_list);
    }
}

void
gt_pch_nx_expr_status (void *x_p)
{
  struct expr_status * const x = (struct expr_status *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11expr_status))
    {
      gt_pch_n_7rtx_def ((*x).x_saveregs_value);
      gt_pch_n_7rtx_def ((*x).x_apply_args_value);
      gt_pch_n_7rtx_def ((*x).x_forced_labels);
    }
}

void
gt_pch_nx_emit_status (void *x_p)
{
  struct emit_status * const x = (struct emit_status *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11emit_status))
    {
      gt_pch_n_7rtx_def ((*x).x_first_insn);
      gt_pch_n_7rtx_def ((*x).x_last_insn);
      gt_pch_n_14sequence_stack ((*x).sequence_stack);
      gt_pch_n_S ((*x).x_last_location.file);
      if ((*x).regno_pointer_align != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).x_reg_rtx_no); i0++) {
        }
        gt_pch_note_object ((*x).regno_pointer_align, x, gt_pch_p_11emit_status);
      }
      if ((*x).x_regno_reg_rtx != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x)).x_reg_rtx_no); i1++) {
          gt_pch_n_7rtx_def ((*x).x_regno_reg_rtx[i1]);
        }
        gt_pch_note_object ((*x).x_regno_reg_rtx, x, gt_pch_p_11emit_status);
      }
    }
}

void
gt_pch_nx_sequence_stack (void *x_p)
{
  struct sequence_stack * const x = (struct sequence_stack *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14sequence_stack))
    {
      gt_pch_n_7rtx_def ((*x).first);
      gt_pch_n_7rtx_def ((*x).last);
      gt_pch_n_14sequence_stack ((*x).next);
    }
}

void
gt_pch_nx_var_refs_queue (void *x_p)
{
  struct var_refs_queue * const x = (struct var_refs_queue *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14var_refs_queue))
    {
      gt_pch_n_7rtx_def ((*x).modified);
      gt_pch_n_14var_refs_queue ((*x).next);
    }
}

void
gt_pch_nx_bitmap_head_def (void *x_p)
{
  struct bitmap_head_def * const x = (struct bitmap_head_def *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15bitmap_head_def))
    {
      gt_pch_n_18bitmap_element_def ((*x).first);
      gt_pch_n_18bitmap_element_def ((*x).current);
      gt_pch_n_14bitmap_obstack ((*x).obstack);
    }
}

void
gt_pch_nx_bitmap_element_def (void *x_p)
{
  struct bitmap_element_def * const x = (struct bitmap_element_def *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18bitmap_element_def))
    {
      gt_pch_n_18bitmap_element_def ((*x).next);
      gt_pch_n_18bitmap_element_def ((*x).prev);
    }
}

void
gt_pch_nx_bitmap_obstack (void *x_p)
{
  struct bitmap_obstack * const x = (struct bitmap_obstack *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14bitmap_obstack))
    {
      gt_pch_n_18bitmap_element_def ((*x).elements);
      gt_pch_n_15bitmap_head_def ((*x).heads);
    }
}

void
gt_pch_nx_answer (void *x_p)
{
  struct answer * const x = (struct answer *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_6answer))
    {
      gt_pch_n_6answer ((*x).next);
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).count); i0++) {
          switch (cpp_token_val_index (&((*x).first[i0])))
            {
            case CPP_TOKEN_FLD_NODE:
              {
                union tree_node * const x1 =
                  ((*x).first[i0].val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).first[i0].val.node))) : NULL;
                gt_pch_n_9tree_node (x1);
              }
              break;
            case CPP_TOKEN_FLD_SOURCE:
              gt_pch_n_9cpp_token ((*x).first[i0].val.source);
              break;
            case CPP_TOKEN_FLD_STR:
              gt_pch_n_S ((*x).first[i0].val.str.text);
              break;
            case CPP_TOKEN_FLD_ARG_NO:
              break;
            default:
              break;
            }
        }
      }
    }
}

void
gt_pch_nx_cpp_macro (void *x_p)
{
  struct cpp_macro * const x = (struct cpp_macro *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9cpp_macro))
    {
      if ((*x).params != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).paramc); i0++) {
          {
            union tree_node * const x1 =
              ((*x).params[i0]) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).params[i0]))) : NULL;
            gt_pch_n_9tree_node (x1);
          }
        }
        gt_pch_note_object ((*x).params, x, gt_pch_p_9cpp_macro);
      }
      switch (((*x)).traditional)
        {
        case 0:
          if ((*x).exp.tokens != NULL) {
            size_t i2;
            for (i2 = 0; i2 != (size_t)((*x).count); i2++) {
              switch (cpp_token_val_index (&((*x).exp.tokens[i2])))
                {
                case CPP_TOKEN_FLD_NODE:
                  {
                    union tree_node * const x3 =
                      ((*x).exp.tokens[i2].val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).exp.tokens[i2].val.node))) : NULL;
                    gt_pch_n_9tree_node (x3);
                  }
                  break;
                case CPP_TOKEN_FLD_SOURCE:
                  gt_pch_n_9cpp_token ((*x).exp.tokens[i2].val.source);
                  break;
                case CPP_TOKEN_FLD_STR:
                  gt_pch_n_S ((*x).exp.tokens[i2].val.str.text);
                  break;
                case CPP_TOKEN_FLD_ARG_NO:
                  break;
                default:
                  break;
                }
            }
            gt_pch_note_object ((*x).exp.tokens, x, gt_pch_p_9cpp_macro);
          }
          break;
        case 1:
          gt_pch_n_S ((*x).exp.text);
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_cpp_token (void *x_p)
{
  struct cpp_token * const x = (struct cpp_token *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9cpp_token))
    {
      switch (cpp_token_val_index (&((*x))))
        {
        case CPP_TOKEN_FLD_NODE:
          {
            union tree_node * const x0 =
              ((*x).val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).val.node))) : NULL;
            gt_pch_n_9tree_node (x0);
          }
          break;
        case CPP_TOKEN_FLD_SOURCE:
          gt_pch_n_9cpp_token ((*x).val.source);
          break;
        case CPP_TOKEN_FLD_STR:
          gt_pch_n_S ((*x).val.str.text);
          break;
        case CPP_TOKEN_FLD_ARG_NO:
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_rtvec_def (void *x_p)
{
  struct rtvec_def * const x = (struct rtvec_def *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9rtvec_def))
    {
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).num_elem); i0++) {
          gt_pch_n_7rtx_def ((*x).elem[i0]);
        }
      }
    }
}

void
gt_pch_nx_rtx_def (void *x_p)
{
  struct rtx_def * x = (struct rtx_def *)x_p;
  struct rtx_def * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_7rtx_def))
   xlimit = (RTX_NEXT (&(*xlimit)));
  if (x != xlimit)
    for (;;)
      {
        struct rtx_def * const xprev = (RTX_PREV (&(*x)));
        if (xprev == NULL) break;
        x = xprev;
        (void) gt_pch_note_object (xprev, xprev, gt_pch_p_7rtx_def);
      }
  while (x != xlimit)
    {
      switch (GET_CODE (&(*x)))
        {
        case VAR_LOCATION:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_9tree_node ((*x).u.fld[0].rt_tree);
          break;
        case US_TRUNCATE:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SS_TRUNCATE:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case US_MINUS:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SS_MINUS:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case US_PLUS:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SS_PLUS:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_DUPLICATE:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_CONCAT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_SELECT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case VEC_MERGE:
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LO_SUM:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case HIGH:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ZERO_EXTRACT:
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SIGN_EXTRACT:
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PARITY:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POPCOUNT:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CTZ:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CLZ:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FFS:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SQRT:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ABS:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNSIGNED_FIX:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNSIGNED_FLOAT:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FIX:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FLOAT:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FLOAT_TRUNCATE:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case FLOAT_EXTEND:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case TRUNCATE:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ZERO_EXTEND:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SIGN_EXTEND:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LTGT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNLT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNLE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNGT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNGE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNEQ:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ORDERED:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNORDERED:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LTU:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LEU:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GTU:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GEU:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case GE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case EQ:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POST_MODIFY:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PRE_MODIFY:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POST_INC:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case POST_DEC:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PRE_INC:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PRE_DEC:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UMAX:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UMIN:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SMAX:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SMIN:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ROTATERT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case LSHIFTRT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ASHIFTRT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ROTATE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ASHIFT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NOT:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case XOR:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case IOR:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case AND:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UMOD:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UDIV:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MOD:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case DIV:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MULT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NEG:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MINUS:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PLUS:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case COMPARE:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case IF_THEN_ELSE:
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CC0:
          break;
        case SYMBOL_REF:
          gt_pch_n_9tree_node ((*x).u.fld[2].rt_tree);
          gt_pch_n_S ((*x).u.fld[0].rt_str);
          break;
        case LABEL_REF:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case MEM:
          gt_pch_n_9mem_attrs ((*x).u.fld[1].rt_mem);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CONCAT:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case STRICT_LOW_PART:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SUBREG:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SCRATCH:
          break;
        case REG:
          gt_pch_n_9reg_attrs ((*x).u.fld[2].rt_reg);
          break;
        case VALUE:
          break;
        case PC:
          break;
        case CONST:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CONST_STRING:
          gt_pch_n_S ((*x).u.fld[0].rt_str);
          break;
        case CONST_VECTOR:
          gt_pch_n_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case CONST_DOUBLE:
          break;
        case CONST_INT:
          break;
        case RESX:
          break;
        case TRAP_IF:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case RETURN:
          break;
        case CALL:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case CLOBBER:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case USE:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SET:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case PREFETCH:
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ADDR_DIFF_VEC:
          gt_pch_n_7rtx_def ((*x).u.fld[3].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_9rtvec_def ((*x).u.fld[1].rt_rtvec);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case ADDR_VEC:
          gt_pch_n_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case UNSPEC_VOLATILE:
          gt_pch_n_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case UNSPEC:
          gt_pch_n_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case ASM_OPERANDS:
          gt_pch_n_S ((*x).u.fld[5].rt_str);
          gt_pch_n_9rtvec_def ((*x).u.fld[4].rt_rtvec);
          gt_pch_n_9rtvec_def ((*x).u.fld[3].rt_rtvec);
          gt_pch_n_S ((*x).u.fld[1].rt_str);
          gt_pch_n_S ((*x).u.fld[0].rt_str);
          break;
        case ASM_INPUT:
          gt_pch_n_S ((*x).u.fld[0].rt_str);
          break;
        case PARALLEL:
          gt_pch_n_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case COND_EXEC:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case NOTE:
          switch (NOTE_LINE_NUMBER (&(*x)))
            {
            default:
              gt_pch_n_S ((*x).u.fld[4].rt_str);
              break;
            case NOTE_INSN_UNLIKELY_EXECUTED_CODE:
              break;
            case NOTE_INSN_BASIC_BLOCK:
              break;
            case NOTE_INSN_EXPECTED_VALUE:
              gt_pch_n_7rtx_def ((*x).u.fld[4].rt_rtx);
              break;
            case NOTE_INSN_VAR_LOCATION:
              gt_pch_n_7rtx_def ((*x).u.fld[4].rt_rtx);
              break;
            case NOTE_INSN_REPEATED_LINE_NUMBER:
              break;
            case NOTE_INSN_EH_REGION_END:
              break;
            case NOTE_INSN_EH_REGION_BEG:
              break;
            case NOTE_INSN_EPILOGUE_BEG:
              break;
            case NOTE_INSN_PROLOGUE_END:
              break;
            case NOTE_INSN_FUNCTION_END:
              break;
            case NOTE_INSN_FUNCTION_BEG:
              break;
            case NOTE_INSN_LOOP_END:
              break;
            case NOTE_INSN_LOOP_BEG:
              break;
            case NOTE_INSN_BLOCK_END:
              gt_pch_n_9tree_node ((*x).u.fld[4].rt_tree);
              break;
            case NOTE_INSN_BLOCK_BEG:
              gt_pch_n_9tree_node ((*x).u.fld[4].rt_tree);
              break;
            case NOTE_INSN_DELETED_LABEL:
              break;
            case NOTE_INSN_DELETED:
              break;
            }
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case CODE_LABEL:
          gt_pch_n_S ((*x).u.fld[7].rt_str);
          gt_pch_n_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case BARRIER:
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case CALL_INSN:
          gt_pch_n_7rtx_def ((*x).u.fld[9].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[8].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[7].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case JUMP_INSN:
          gt_pch_n_7rtx_def ((*x).u.fld[9].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[8].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[7].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case INSN:
          gt_pch_n_7rtx_def ((*x).u.fld[8].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[7].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[5].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[2].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          break;
        case ADDRESS:
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case SEQUENCE:
          gt_pch_n_9rtvec_def ((*x).u.fld[0].rt_rtvec);
          break;
        case INSN_LIST:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case EXPR_LIST:
          gt_pch_n_7rtx_def ((*x).u.fld[1].rt_rtx);
          gt_pch_n_7rtx_def ((*x).u.fld[0].rt_rtx);
          break;
        case UNKNOWN:
          break;
        default:
          break;
        }
      x = (RTX_NEXT (&(*x)));
    }
}

void
gt_pch_nx_location_s (void *x_p)
{
  struct location_s * const x = (struct location_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_10location_s))
    {
      gt_pch_n_S ((*x).file);
    }
}

void
gt_pch_n_II17splay_tree_node_s (void *x_p)
{
  struct splay_tree_node_s * const x = (struct splay_tree_node_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_II17splay_tree_node_s))
    {
      gt_pch_n_II17splay_tree_node_s ((*x).left);
      gt_pch_n_II17splay_tree_node_s ((*x).right);
    }
}

void
gt_pch_n_SP9tree_node17splay_tree_node_s (void *x_p)
{
  struct splay_tree_node_s * const x = (struct splay_tree_node_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_SP9tree_node17splay_tree_node_s))
    {
      gt_pch_n_S ((void *)(*x).key);
      gt_pch_n_9tree_node ((void *)(*x).value);
      gt_pch_n_SP9tree_node17splay_tree_node_s ((*x).left);
      gt_pch_n_SP9tree_node17splay_tree_node_s ((*x).right);
    }
}

void
gt_pch_n_P9tree_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P9tree_node4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_9tree_node ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P9tree_node4htab);
      }
    }
}

void
gt_pch_n_P9reg_attrs4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P9reg_attrs4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_9reg_attrs ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P9reg_attrs4htab);
      }
    }
}

void
gt_pch_n_P9mem_attrs4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P9mem_attrs4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_9mem_attrs ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P9mem_attrs4htab);
      }
    }
}

void
gt_pch_n_P7rtx_def4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P7rtx_def4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_7rtx_def ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P7rtx_def4htab);
      }
    }
}

void
gt_pch_n_SP9tree_node12splay_tree_s (void *x_p)
{
  struct splay_tree_s * const x = (struct splay_tree_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_SP9tree_node12splay_tree_s))
    {
      gt_pch_n_SP9tree_node17splay_tree_node_s ((*x).root);
    }
}

void
gt_pch_n_P19cgraph_varpool_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P19cgraph_varpool_node4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_19cgraph_varpool_node ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P19cgraph_varpool_node4htab);
      }
    }
}

void
gt_pch_n_P11cgraph_node4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P11cgraph_node4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_11cgraph_node ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P11cgraph_node4htab);
      }
    }
}

void
gt_pch_n_II12splay_tree_s (void *x_p)
{
  struct splay_tree_s * const x = (struct splay_tree_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_II12splay_tree_s))
    {
      gt_pch_n_II17splay_tree_node_s ((*x).root);
    }
}

void
gt_pch_p_19v_must_def_optype_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct v_must_def_optype_d * const x ATTRIBUTE_UNUSED = (struct v_must_def_optype_d *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num_v_must_defs); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).v_must_defs[i0].def), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).v_must_defs[i0].use), cookie);
    }
  }
}

void
gt_pch_p_13vuse_optype_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct vuse_optype_d * const x ATTRIBUTE_UNUSED = (struct vuse_optype_d *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num_vuses); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).vuses[i0]), cookie);
    }
  }
}

void
gt_pch_p_18v_may_def_optype_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct v_may_def_optype_d * const x ATTRIBUTE_UNUSED = (struct v_may_def_optype_d *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num_v_may_defs); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).v_may_defs[i0].def), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).v_may_defs[i0].use), cookie);
    }
  }
}

void
gt_pch_p_12use_optype_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct use_optype_d * const x ATTRIBUTE_UNUSED = (struct use_optype_d *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num_uses); i0++) {
    }
  }
}

void
gt_pch_p_12def_optype_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct def_optype_d * const x ATTRIBUTE_UNUSED = (struct def_optype_d *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num_defs); i0++) {
    }
  }
}

void
gt_pch_p_15edge_prediction (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct edge_prediction * const x ATTRIBUTE_UNUSED = (struct edge_prediction *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).edge), cookie);
}

void
gt_pch_p_19cgraph_varpool_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cgraph_varpool_node * const x ATTRIBUTE_UNUSED = (struct cgraph_varpool_node *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_needed), cookie);
}

void
gt_pch_p_11cgraph_edge (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cgraph_edge * const x ATTRIBUTE_UNUSED = (struct cgraph_edge *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).caller), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).callee), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev_caller), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_caller), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev_callee), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_callee), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).call_expr), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).inline_failed), cookie);
}

void
gt_pch_p_11cgraph_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cgraph_node * const x ATTRIBUTE_UNUSED = (struct cgraph_node *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).callees), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).callers), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).previous), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).origin), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).nested), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_nested), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_needed), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_clone), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).global.inlined_to), cookie);
}

void
gt_pch_p_8bb_ann_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct bb_ann_d * const x ATTRIBUTE_UNUSED = (struct bb_ann_d *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).phi_nodes), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).predictions), cookie);
}

void
gt_pch_p_8VEC_edge (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_edge * const x ATTRIBUTE_UNUSED = (struct VEC_edge *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).vec[i0]), cookie);
    }
  }
}

void
gt_pch_p_12elt_loc_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct elt_loc_list * const x ATTRIBUTE_UNUSED = (struct elt_loc_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).loc), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).setting_insn), cookie);
}

void
gt_pch_p_17cselib_val_struct (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cselib_val_struct * const x ATTRIBUTE_UNUSED = (struct cselib_val_struct *)x_p;
  switch (1)
    {
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).u.val_rtx), cookie);
      break;
    default:
      break;
    }
  if ((void *)(x) == this_obj)
    op (&((*x).locs), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).addr_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_containing_mem), cookie);
}

void
gt_pch_p_8edge_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct edge_def * const x ATTRIBUTE_UNUSED = (struct edge_def *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).src), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).dest), cookie);
  switch (ir_type ())
    {
    case 0:
      if ((void *)(x) == this_obj)
        op (&((*x).insns.r), cookie);
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).insns.t), cookie);
      break;
    default:
      break;
    }
  if ((void *)(x) == this_obj)
    op (&((*x).goto_locus), cookie);
}

void
gt_pch_p_8elt_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct elt_list * const x ATTRIBUTE_UNUSED = (struct elt_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).elt), cookie);
}

void
gt_pch_p_24tree_statement_list_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct tree_statement_list_node * const x ATTRIBUTE_UNUSED = (struct tree_statement_list_node *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).stmt), cookie);
}

void
gt_pch_p_10dataflow_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct dataflow_d * const x ATTRIBUTE_UNUSED = (struct dataflow_d *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).immediate_uses), cookie);
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(2); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).uses[i0]), cookie);
    }
  }
}

void
gt_pch_p_12ptr_info_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct ptr_info_def * const x ATTRIBUTE_UNUSED = (struct ptr_info_def *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).pt_vars), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).name_mem_tag), cookie);
}

void
gt_pch_p_10real_value (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct real_value * const x ATTRIBUTE_UNUSED = (struct real_value *)x_p;
}

void
gt_pch_p_10tree_ann_d (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  union tree_ann_d * const x ATTRIBUTE_UNUSED = (union tree_ann_d *)x_p;
  switch (ann_type ((tree_ann_t)&((*x))))
    {
    case TREE_ANN_COMMON:
      break;
    case VAR_ANN:
      if ((void *)(x) == this_obj)
        op (&((*x).decl.type_mem_tag), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).decl.may_aliases), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).decl.default_def), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).decl.current_def), cookie);
      break;
    case STMT_ANN:
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.operands.def_ops), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.operands.use_ops), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.operands.v_may_def_ops), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.operands.vuse_ops), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.operands.v_must_def_ops), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.df), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).stmt.addresses_taken), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_8VEC_tree (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct VEC_tree * const x ATTRIBUTE_UNUSED = (struct VEC_tree *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).vec[i0]), cookie);
    }
  }
}

void
gt_pch_p_13convert_optab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct convert_optab * const x ATTRIBUTE_UNUSED = (struct convert_optab *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(NUM_MACHINE_MODES); i0++) {
      {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(NUM_MACHINE_MODES); i1++) {
          if ((void *)(x) == this_obj)
            op (&((*x).handlers[i0][i1].libfunc), cookie);
        }
      }
    }
  }
}

void
gt_pch_p_5optab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct optab * const x ATTRIBUTE_UNUSED = (struct optab *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(NUM_MACHINE_MODES); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).handlers[i0].libfunc), cookie);
    }
  }
}

void
gt_pch_p_15basic_block_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct basic_block_def * const x ATTRIBUTE_UNUSED = (struct basic_block_def *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).head_), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).end_), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).stmt_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).preds), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).succs), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev_bb), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next_bb), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).tree_annotations), cookie);
}

void
gt_pch_p_9reg_attrs (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct reg_attrs * const x ATTRIBUTE_UNUSED = (struct reg_attrs *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
}

void
gt_pch_p_9mem_attrs (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct mem_attrs * const x ATTRIBUTE_UNUSED = (struct mem_attrs *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).expr), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).offset), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).size), cookie);
}

void
gt_pch_p_15varray_head_tag (ATTRIBUTE_UNUSED void *this_obj,
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
      gcc_unreachable ();
      break;
    case VARRAY_DATA_CPTR:
      {
        size_t i10;
        for (i10 = 0; i10 != (size_t)((*x).num_elements); i10++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.cptr[i10]), cookie);
        }
      }
      break;
    case VARRAY_DATA_RTX:
      {
        size_t i11;
        for (i11 = 0; i11 != (size_t)((*x).num_elements); i11++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.rtx[i11]), cookie);
        }
      }
      break;
    case VARRAY_DATA_RTVEC:
      {
        size_t i12;
        for (i12 = 0; i12 != (size_t)((*x).num_elements); i12++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.rtvec[i12]), cookie);
        }
      }
      break;
    case VARRAY_DATA_TREE:
      {
        size_t i13;
        for (i13 = 0; i13 != (size_t)((*x).num_elements); i13++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.tree[i13]), cookie);
        }
      }
      break;
    case VARRAY_DATA_BITMAP:
      {
        size_t i14;
        for (i14 = 0; i14 != (size_t)((*x).num_elements); i14++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.bitmap[i14]), cookie);
        }
      }
      break;
    case VARRAY_DATA_TE:
      {
        size_t i15;
        for (i15 = 0; i15 != (size_t)((*x).num_elements); i15++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.te[i15]), cookie);
        }
      }
      break;
    case VARRAY_DATA_EDGE:
      {
        size_t i16;
        for (i16 = 0; i16 != (size_t)((*x).num_elements); i16++) {
          if ((void *)(x) == this_obj)
            op (&((*x).data.e[i16]), cookie);
        }
      }
      break;
    default:
      break;
    }
}

void
gt_pch_p_8function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct function * const x ATTRIBUTE_UNUSED = (struct function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).eh), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).expr), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).emit), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).varasm), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).saved_tree), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).saved_args), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).saved_static_chain_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).outer), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).arg_offset_rtx), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).return_rtx), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).internal_arg_pointer), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).hard_reg_initial_vals), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_nonlocal_goto_handler_labels), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_return_label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_naked_return_label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_stack_slot_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_tail_recursion_reentry), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_arg_pointer_save_area), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).static_chain_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).nonlocal_goto_save_area), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_parm_birth_insn), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_used_temp_slots), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_avail_temp_slots), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).fixup_var_refs_queue), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).original_arg_vector), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).original_decl_initial), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).machine), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).language), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).epilogue_delay_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).function_end_locus.file), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ib_boundaries_block), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).unexpanded_var_list), cookie);
}

void
gt_pch_p_11expr_status (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct expr_status * const x ATTRIBUTE_UNUSED = (struct expr_status *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).x_saveregs_value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_apply_args_value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_forced_labels), cookie);
}

void
gt_pch_p_11emit_status (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct emit_status * const x ATTRIBUTE_UNUSED = (struct emit_status *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).x_first_insn), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_last_insn), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).sequence_stack), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_last_location.file), cookie);
  if ((*x).regno_pointer_align != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).x_reg_rtx_no); i0++) {
    }
    if ((void *)(x) == this_obj)
      op (&((*x).regno_pointer_align), cookie);
  }
  if ((*x).x_regno_reg_rtx != NULL) {
    size_t i1;
    for (i1 = 0; i1 != (size_t)(((*x)).x_reg_rtx_no); i1++) {
      if ((void *)((*x).x_regno_reg_rtx) == this_obj)
        op (&((*x).x_regno_reg_rtx[i1]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).x_regno_reg_rtx), cookie);
  }
}

void
gt_pch_p_14sequence_stack (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct sequence_stack * const x ATTRIBUTE_UNUSED = (struct sequence_stack *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).first), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).last), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_14var_refs_queue (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct var_refs_queue * const x ATTRIBUTE_UNUSED = (struct var_refs_queue *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).modified), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_15bitmap_head_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct bitmap_head_def * const x ATTRIBUTE_UNUSED = (struct bitmap_head_def *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).first), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).current), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).obstack), cookie);
}

void
gt_pch_p_18bitmap_element_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct bitmap_element_def * const x ATTRIBUTE_UNUSED = (struct bitmap_element_def *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
}

void
gt_pch_p_14bitmap_obstack (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct bitmap_obstack * const x ATTRIBUTE_UNUSED = (struct bitmap_obstack *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).elements), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).heads), cookie);
}

void
gt_pch_p_6answer (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct answer * const x ATTRIBUTE_UNUSED = (struct answer *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).count); i0++) {
      switch (cpp_token_val_index (&((*x).first[i0])))
        {
        case CPP_TOKEN_FLD_NODE:
          {
            union tree_node * x1 =
              ((*x).first[i0].val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).first[i0].val.node))) : NULL;
            if ((void *)(x) == this_obj)
              op (&(x1), cookie);
            (*x).first[i0].val.node = (x1) ? CPP_HASHNODE (GCC_IDENT_TO_HT_IDENT ((x1))) : NULL;
          }
          break;
        case CPP_TOKEN_FLD_SOURCE:
          if ((void *)(x) == this_obj)
            op (&((*x).first[i0].val.source), cookie);
          break;
        case CPP_TOKEN_FLD_STR:
          if ((void *)(x) == this_obj)
            op (&((*x).first[i0].val.str.text), cookie);
          break;
        case CPP_TOKEN_FLD_ARG_NO:
          break;
        default:
          break;
        }
    }
  }
}

void
gt_pch_p_9cpp_macro (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cpp_macro * const x ATTRIBUTE_UNUSED = (struct cpp_macro *)x_p;
  if ((*x).params != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).paramc); i0++) {
      {
        union tree_node * x1 =
          ((*x).params[i0]) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).params[i0]))) : NULL;
        if ((void *)((*x).params) == this_obj)
          op (&(x1), cookie);
        (*x).params[i0] = (x1) ? CPP_HASHNODE (GCC_IDENT_TO_HT_IDENT ((x1))) : NULL;
      }
    }
    if ((void *)(x) == this_obj)
      op (&((*x).params), cookie);
  }
  switch (((*x)).traditional)
    {
    case 0:
      if ((*x).exp.tokens != NULL) {
        size_t i2;
        for (i2 = 0; i2 != (size_t)((*x).count); i2++) {
          switch (cpp_token_val_index (&((*x).exp.tokens[i2])))
            {
            case CPP_TOKEN_FLD_NODE:
              {
                union tree_node * x3 =
                  ((*x).exp.tokens[i2].val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).exp.tokens[i2].val.node))) : NULL;
                if ((void *)((*x).exp.tokens) == this_obj)
                  op (&(x3), cookie);
                (*x).exp.tokens[i2].val.node = (x3) ? CPP_HASHNODE (GCC_IDENT_TO_HT_IDENT ((x3))) : NULL;
              }
              break;
            case CPP_TOKEN_FLD_SOURCE:
              if ((void *)((*x).exp.tokens) == this_obj)
                op (&((*x).exp.tokens[i2].val.source), cookie);
              break;
            case CPP_TOKEN_FLD_STR:
              if ((void *)((*x).exp.tokens) == this_obj)
                op (&((*x).exp.tokens[i2].val.str.text), cookie);
              break;
            case CPP_TOKEN_FLD_ARG_NO:
              break;
            default:
              break;
            }
        }
        if ((void *)(x) == this_obj)
          op (&((*x).exp.tokens), cookie);
      }
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).exp.text), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_9cpp_token (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cpp_token * const x ATTRIBUTE_UNUSED = (struct cpp_token *)x_p;
  switch (cpp_token_val_index (&((*x))))
    {
    case CPP_TOKEN_FLD_NODE:
      {
        union tree_node * x0 =
          ((*x).val.node) ? HT_IDENT_TO_GCC_IDENT (HT_NODE (((*x).val.node))) : NULL;
        if ((void *)(x) == this_obj)
          op (&(x0), cookie);
        (*x).val.node = (x0) ? CPP_HASHNODE (GCC_IDENT_TO_HT_IDENT ((x0))) : NULL;
      }
      break;
    case CPP_TOKEN_FLD_SOURCE:
      if ((void *)(x) == this_obj)
        op (&((*x).val.source), cookie);
      break;
    case CPP_TOKEN_FLD_STR:
      if ((void *)(x) == this_obj)
        op (&((*x).val.str.text), cookie);
      break;
    case CPP_TOKEN_FLD_ARG_NO:
      break;
    default:
      break;
    }
}

void
gt_pch_p_9rtvec_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct rtvec_def * const x ATTRIBUTE_UNUSED = (struct rtvec_def *)x_p;
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).num_elem); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).elem[i0]), cookie);
    }
  }
}

void
gt_pch_p_7rtx_def (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct rtx_def * const x ATTRIBUTE_UNUSED = (struct rtx_def *)x_p;
  switch (GET_CODE (&(*x)))
    {
    case VAR_LOCATION:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_tree), cookie);
      break;
    case US_TRUNCATE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SS_TRUNCATE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case US_MINUS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SS_MINUS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case US_PLUS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SS_PLUS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case VEC_DUPLICATE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case VEC_CONCAT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case VEC_SELECT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case VEC_MERGE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LO_SUM:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case HIGH:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ZERO_EXTRACT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SIGN_EXTRACT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case PARITY:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case POPCOUNT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case CTZ:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case CLZ:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case FFS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SQRT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ABS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNSIGNED_FIX:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNSIGNED_FLOAT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case FIX:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case FLOAT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case FLOAT_TRUNCATE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case FLOAT_EXTEND:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case TRUNCATE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ZERO_EXTEND:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SIGN_EXTEND:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LTGT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNLT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNLE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNGT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNGE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNEQ:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ORDERED:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNORDERED:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LTU:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LEU:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case GTU:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case GEU:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case GT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case GE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case EQ:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case NE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case POST_MODIFY:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case PRE_MODIFY:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case POST_INC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case POST_DEC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case PRE_INC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case PRE_DEC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UMAX:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UMIN:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SMAX:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SMIN:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ROTATERT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case LSHIFTRT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ASHIFTRT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ROTATE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ASHIFT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case NOT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case XOR:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case IOR:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case AND:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UMOD:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UDIV:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case MOD:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case DIV:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case MULT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case NEG:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case MINUS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case PLUS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case COMPARE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case IF_THEN_ELSE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case CC0:
      break;
    case SYMBOL_REF:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_tree), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_str), cookie);
      break;
    case LABEL_REF:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case MEM:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_mem), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case CONCAT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case STRICT_LOW_PART:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SUBREG:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SCRATCH:
      break;
    case REG:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_reg), cookie);
      break;
    case VALUE:
      break;
    case PC:
      break;
    case CONST:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case CONST_STRING:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_str), cookie);
      break;
    case CONST_VECTOR:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtvec), cookie);
      break;
    case CONST_DOUBLE:
      break;
    case CONST_INT:
      break;
    case RESX:
      break;
    case TRAP_IF:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case RETURN:
      break;
    case CALL:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case CLOBBER:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case USE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SET:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case PREFETCH:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ADDR_DIFF_VEC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[3].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtvec), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case ADDR_VEC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtvec), cookie);
      break;
    case UNSPEC_VOLATILE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtvec), cookie);
      break;
    case UNSPEC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtvec), cookie);
      break;
    case ASM_OPERANDS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[5].rt_str), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[4].rt_rtvec), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[3].rt_rtvec), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_str), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_str), cookie);
      break;
    case ASM_INPUT:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_str), cookie);
      break;
    case PARALLEL:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtvec), cookie);
      break;
    case COND_EXEC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case NOTE:
      switch (NOTE_LINE_NUMBER (&(*x)))
        {
        default:
          if ((void *)(x) == this_obj)
            op (&((*x).u.fld[4].rt_str), cookie);
          break;
        case NOTE_INSN_UNLIKELY_EXECUTED_CODE:
          break;
        case NOTE_INSN_BASIC_BLOCK:
          break;
        case NOTE_INSN_EXPECTED_VALUE:
          if ((void *)(x) == this_obj)
            op (&((*x).u.fld[4].rt_rtx), cookie);
          break;
        case NOTE_INSN_VAR_LOCATION:
          if ((void *)(x) == this_obj)
            op (&((*x).u.fld[4].rt_rtx), cookie);
          break;
        case NOTE_INSN_REPEATED_LINE_NUMBER:
          break;
        case NOTE_INSN_EH_REGION_END:
          break;
        case NOTE_INSN_EH_REGION_BEG:
          break;
        case NOTE_INSN_EPILOGUE_BEG:
          break;
        case NOTE_INSN_PROLOGUE_END:
          break;
        case NOTE_INSN_FUNCTION_END:
          break;
        case NOTE_INSN_FUNCTION_BEG:
          break;
        case NOTE_INSN_LOOP_END:
          break;
        case NOTE_INSN_LOOP_BEG:
          break;
        case NOTE_INSN_BLOCK_END:
          if ((void *)(x) == this_obj)
            op (&((*x).u.fld[4].rt_tree), cookie);
          break;
        case NOTE_INSN_BLOCK_BEG:
          if ((void *)(x) == this_obj)
            op (&((*x).u.fld[4].rt_tree), cookie);
          break;
        case NOTE_INSN_DELETED_LABEL:
          break;
        case NOTE_INSN_DELETED:
          break;
        }
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      break;
    case CODE_LABEL:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[7].rt_str), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[5].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      break;
    case BARRIER:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      break;
    case CALL_INSN:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[9].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[8].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[7].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[5].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      break;
    case JUMP_INSN:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[9].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[8].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[7].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[5].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      break;
    case INSN:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[8].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[7].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[5].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[2].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      break;
    case ADDRESS:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case SEQUENCE:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtvec), cookie);
      break;
    case INSN_LIST:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case EXPR_LIST:
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[1].rt_rtx), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.fld[0].rt_rtx), cookie);
      break;
    case UNKNOWN:
      break;
    default:
      break;
    }
}

void
gt_pch_p_10location_s (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct location_s * const x ATTRIBUTE_UNUSED = (struct location_s *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).file), cookie);
}

void
gt_pch_p_II17splay_tree_node_s (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct splay_tree_node_s * const x ATTRIBUTE_UNUSED = (struct splay_tree_node_s *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).left), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).right), cookie);
}

void
gt_pch_p_SP9tree_node17splay_tree_node_s (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct splay_tree_node_s * const x ATTRIBUTE_UNUSED = (struct splay_tree_node_s *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).key), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).left), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).right), cookie);
}

void
gt_pch_p_P9tree_node4htab (ATTRIBUTE_UNUSED void *this_obj,
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
gt_pch_p_P9reg_attrs4htab (ATTRIBUTE_UNUSED void *this_obj,
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
gt_pch_p_P9mem_attrs4htab (ATTRIBUTE_UNUSED void *this_obj,
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
gt_pch_p_P7rtx_def4htab (ATTRIBUTE_UNUSED void *this_obj,
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
gt_pch_p_SP9tree_node12splay_tree_s (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct splay_tree_s * const x ATTRIBUTE_UNUSED = (struct splay_tree_s *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).root), cookie);
}

void
gt_pch_p_P19cgraph_varpool_node4htab (ATTRIBUTE_UNUSED void *this_obj,
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
gt_pch_p_P11cgraph_node4htab (ATTRIBUTE_UNUSED void *this_obj,
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
gt_pch_p_II12splay_tree_s (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct splay_tree_s * const x ATTRIBUTE_UNUSED = (struct splay_tree_s *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).root), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gtype_desc_c[] = {
  {
    &chrec_known,
    1,
    sizeof (chrec_known),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &chrec_dont_know,
    1,
    sizeof (chrec_dont_know),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &global_var,
    1,
    sizeof (global_var),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ssa_names,
    1,
    sizeof (ssa_names),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &referenced_vars,
    1,
    sizeof (referenced_vars),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &modified_noreturn_calls,
    1,
    sizeof (modified_noreturn_calls),
    &gt_ggc_mx_VEC_tree,
    &gt_pch_nx_VEC_tree
  },
  {
    &reg_equiv_memory_loc_varray,
    1,
    sizeof (reg_equiv_memory_loc_varray),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &cgraph_varpool_nodes_queue,
    1,
    sizeof (cgraph_varpool_nodes_queue),
    &gt_ggc_mx_cgraph_varpool_node,
    &gt_pch_nx_cgraph_varpool_node
  },
  {
    &cgraph_nodes_queue,
    1,
    sizeof (cgraph_nodes_queue),
    &gt_ggc_mx_cgraph_node,
    &gt_pch_nx_cgraph_node
  },
  {
    &cgraph_nodes,
    1,
    sizeof (cgraph_nodes),
    &gt_ggc_mx_cgraph_node,
    &gt_pch_nx_cgraph_node
  },
  {
    &EXIT_BLOCK_PTR,
    1,
    sizeof (EXIT_BLOCK_PTR),
    &gt_ggc_mx_basic_block_def,
    &gt_pch_nx_basic_block_def
  },
  {
    &ENTRY_BLOCK_PTR,
    1,
    sizeof (ENTRY_BLOCK_PTR),
    &gt_ggc_mx_basic_block_def,
    &gt_pch_nx_basic_block_def
  },
  {
    &label_value_list,
    1,
    sizeof (label_value_list),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &basic_block_info,
    1,
    sizeof (basic_block_info),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &insn_addresses_,
    1,
    sizeof (insn_addresses_),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &libfunc_table[0],
    1 * (LTI_MAX),
    sizeof (libfunc_table[0]),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &current_function_func_begin_label,
    1, 
    sizeof (current_function_func_begin_label),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &current_function_decl,
    1,
    sizeof (current_function_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &sizetype_tab[0],
    1 * ((int) TYPE_KIND_LAST),
    sizeof (sizetype_tab[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &frame_base_decl,
    1,
    sizeof (frame_base_decl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &integer_types[0],
    1 * (itk_none),
    sizeof (integer_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &global_trees[0],
    1 * (TI_MAX),
    sizeof (global_trees[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &implicit_built_in_decls[0],
    1 * ((int) END_BUILTINS),
    sizeof (implicit_built_in_decls[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &built_in_decls[0],
    1 * ((int) END_BUILTINS),
    sizeof (built_in_decls[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &code_to_optab[0],
    1 * (NUM_RTX_CODE + 1),
    sizeof (code_to_optab[0]),
    &gt_ggc_mx_optab,
    &gt_pch_nx_optab
  },
  {
    &convert_optab_table[0],
    1 * (CTI_MAX),
    sizeof (convert_optab_table[0]),
    &gt_ggc_mx_convert_optab,
    &gt_pch_nx_convert_optab
  },
  {
    &optab_table[0],
    1 * (OTI_MAX),
    sizeof (optab_table[0]),
    &gt_ggc_mx_optab,
    &gt_pch_nx_optab
  },
  {
    &stack_limit_rtx,
    1,
    sizeof (stack_limit_rtx),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &return_address_pointer_rtx,
    1,
    sizeof (return_address_pointer_rtx),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &static_chain_incoming_rtx,
    1,
    sizeof (static_chain_incoming_rtx),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &static_chain_rtx,
    1,
    sizeof (static_chain_rtx),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &pic_offset_table_rtx,
    1,
    sizeof (pic_offset_table_rtx),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &global_rtl[0],
    1 * (GR_MAX),
    sizeof (global_rtl[0]),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &const_tiny_rtx[0][0],
    1 * (3) * ((int) MAX_MACHINE_MODE),
    sizeof (const_tiny_rtx[0][0]),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &const_true_rtx,
    1,
    sizeof (const_true_rtx),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &const_int_rtx[0],
    1 * (MAX_SAVED_CONST_INT * 2 + 1),
    sizeof (const_int_rtx[0]),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &outer_function_chain,
    1,
    sizeof (outer_function_chain),
    &gt_ggc_mx_function,
    &gt_pch_nx_function
  },
  {
    &cfun,
    1,
    sizeof (cfun),
    &gt_ggc_mx_function,
    &gt_pch_nx_function
  },
  {
    &cmp_operands[0],
    1 * (2),
    sizeof (cmp_operands[0]),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gtype_desc_c[] = {
  { &cgraph_max_uid, 1, sizeof (cgraph_max_uid), NULL, NULL },
  { &cgraph_n_nodes, 1, sizeof (cgraph_n_nodes), NULL, NULL },
  LAST_GGC_ROOT_TAB
};


/* Used to implement the RTX_NEXT macro.  */
const unsigned char rtx_next[NUM_RTX_CODE] = {
  0,
  RTX_HDR_SIZE + 1 * sizeof (rtunion),
  RTX_HDR_SIZE + 1 * sizeof (rtunion),
  0,
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 2 * sizeof (rtunion),
  RTX_HDR_SIZE + 2 * sizeof (rtunion),
  RTX_HDR_SIZE + 2 * sizeof (rtunion),
  RTX_HDR_SIZE + 2 * sizeof (rtunion),
  RTX_HDR_SIZE + 2 * sizeof (rtunion),
  RTX_HDR_SIZE + 2 * sizeof (rtunion),
  RTX_HDR_SIZE + 1 * sizeof (rtunion),
  0,
  0,
  0,
  0,
  0,
  0,
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 1 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  0,
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  0,
  0,
  0,
  0,
  0,
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  0,
  0,
  0,
  0,
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  0,
  0,
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 0 * sizeof (rtunion),
  RTX_HDR_SIZE + 1 * sizeof (rtunion),
};
