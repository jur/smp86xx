/* Type information for c-decl.c.
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
gt_ggc_mx_c_scope (void *x_p)
{
  struct c_scope * x = (struct c_scope *)x_p;
  struct c_scope * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).outer);
  while (x != xlimit)
    {
      gt_ggc_m_7c_scope ((*x).outer);
      gt_ggc_m_7c_scope ((*x).outer_function);
      gt_ggc_m_9c_binding ((*x).bindings);
      gt_ggc_m_9tree_node ((*x).blocks);
      gt_ggc_m_9tree_node ((*x).blocks_last);
      x = ((*x).outer);
    }
}

void
gt_ggc_mx_c_binding (void *x_p)
{
  struct c_binding * x = (struct c_binding *)x_p;
  struct c_binding * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((*xlimit).prev);
  while (x != xlimit)
    {
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_9tree_node ((*x).type);
      gt_ggc_m_9tree_node ((*x).id);
      gt_ggc_m_9c_binding ((*x).prev);
      gt_ggc_m_9c_binding ((*x).shadowed);
      x = ((*x).prev);
    }
}

void
gt_ggc_mx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = (TREE_CODE (&(*xlimit).generic) == INTEGER_TYPE ? (union lang_tree_node *) TYPE_NEXT_VARIANT (&(*xlimit).generic) : (union lang_tree_node *) TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
        {
        case 0:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.common.ann);
              break;
            case TS_INT_CST:
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.int_cst.common.ann);
              break;
            case TS_REAL_CST:
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.real_cst.common.ann);
              gt_ggc_m_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_VECTOR:
              gt_ggc_m_9tree_node ((*x).generic.vector.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vector.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.vector.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_ggc_m_9tree_node ((*x).generic.string.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.string.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.string.common.ann);
              break;
            case TS_COMPLEX:
              gt_ggc_m_9tree_node ((*x).generic.complex.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.complex.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.complex.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.complex.real);
              gt_ggc_m_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.identifier.common.ann);
              break;
            case TS_DECL:
              gt_ggc_m_9tree_node ((*x).generic.decl.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.decl.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.decl.size);
              gt_ggc_m_9tree_node ((*x).generic.decl.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl.name);
              gt_ggc_m_9tree_node ((*x).generic.decl.context);
              gt_ggc_m_9tree_node ((*x).generic.decl.arguments);
              gt_ggc_m_9tree_node ((*x).generic.decl.result);
              gt_ggc_m_9tree_node ((*x).generic.decl.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.decl.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.decl.section_name);
              gt_ggc_m_9tree_node ((*x).generic.decl.attributes);
              gt_ggc_m_7rtx_def ((*x).generic.decl.rtl);
              switch (TREE_CODE((tree) &((*x))))
                {
                case FUNCTION_DECL:
                  gt_ggc_m_8function ((*x).generic.decl.u2.f);
                  break;
                case PARM_DECL:
                  gt_ggc_m_7rtx_def ((*x).generic.decl.u2.r);
                  break;
                case FIELD_DECL:
                  gt_ggc_m_9tree_node ((*x).generic.decl.u2.t);
                  break;
                case VAR_DECL:
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.decl.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.decl.vindex);
              gt_ggc_m_9lang_decl ((*x).generic.decl.lang_specific);
              break;
            case TS_TYPE:
              gt_ggc_m_9tree_node ((*x).generic.type.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.type.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.type.values);
              gt_ggc_m_9tree_node ((*x).generic.type.size);
              gt_ggc_m_9tree_node ((*x).generic.type.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type.reference_to);
              switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  break;
                case 2:
                  gt_ggc_m_10die_struct ((*x).generic.type.symtab.die);
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type.name);
              gt_ggc_m_9tree_node ((*x).generic.type.minval);
              gt_ggc_m_9tree_node ((*x).generic.type.maxval);
              gt_ggc_m_9tree_node ((*x).generic.type.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.binfo);
              gt_ggc_m_9tree_node ((*x).generic.type.context);
              gt_ggc_m_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_ggc_m_9tree_node ((*x).generic.list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.list.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.list.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.list.purpose);
              gt_ggc_m_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_ggc_m_9tree_node ((*x).generic.vec.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vec.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.vec.common.ann);
              {
                size_t i1;
                for (i1 = 0; i1 != (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i1++) {
                  gt_ggc_m_9tree_node ((*x).generic.vec.a[i1]);
                }
              }
              break;
            case TS_EXP:
              gt_ggc_m_9tree_node ((*x).generic.exp.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.exp.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.exp.common.ann);
              gt_ggc_m_10location_s ((*x).generic.exp.locus);
              gt_ggc_m_9tree_node ((*x).generic.exp.block);
              switch (TREE_CODE ((tree) &(*x)))
                {
                default:
                  {
                    size_t i2;
                    for (i2 = 0; i2 != (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i2++) {
                      gt_ggc_m_9tree_node ((*x).generic.exp.operands[i2]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.ssa_name.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.var);
              gt_ggc_m_12ptr_info_def ((*x).generic.ssa_name.ptr_info);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.value_handle);
              break;
            case TS_PHI_NODE:
              gt_ggc_m_9tree_node ((*x).generic.phi.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.phi.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.phi.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.phi.result);
              gt_ggc_m_15basic_block_def ((*x).generic.phi.bb);
              gt_ggc_m_10dataflow_d ((*x).generic.phi.df);
              {
                size_t i3;
                for (i3 = 0; i3 != (size_t)(((tree)&((*x).generic.phi))->phi.num_args); i3++) {
                  gt_ggc_m_9tree_node ((*x).generic.phi.a[i3].def);
                }
              }
              break;
            case TS_BLOCK:
              gt_ggc_m_9tree_node ((*x).generic.block.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.block.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.block.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.block.vars);
              gt_ggc_m_9tree_node ((*x).generic.block.subblocks);
              gt_ggc_m_9tree_node ((*x).generic.block.supercontext);
              gt_ggc_m_9tree_node ((*x).generic.block.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_chain);
              break;
            case TS_BINFO:
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.binfo.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.binfo.offset);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtable);
              gt_ggc_m_9tree_node ((*x).generic.binfo.virtuals);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vptr_field);
              gt_ggc_m_8VEC_tree ((*x).generic.binfo.base_accesses);
              gt_ggc_m_9tree_node ((*x).generic.binfo.inheritance);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_vptr);
              {
                size_t i4;
                for (i4 = 0; i4 != (size_t)(((*x).generic.binfo.base_binfos).num); i4++) {
                  gt_ggc_m_9tree_node ((*x).generic.binfo.base_binfos.vec[i4]);
                }
              }
              break;
            case TS_STATEMENT_LIST:
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.stmt_list.common.ann);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_VALUE_HANDLE:
              gt_ggc_m_9tree_node ((*x).generic.value_handle.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.value_handle.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.value_handle.common.ann);
              break;
            default:
              break;
            }
          break;
        case 1:
          gt_ggc_m_9tree_node ((*x).identifier.common_id.common.chain);
          gt_ggc_m_9tree_node ((*x).identifier.common_id.common.type);
          gt_ggc_m_10tree_ann_d ((*x).identifier.common_id.common.ann);
          switch (CPP_HASHNODE_VALUE_IDX (((*x).identifier.common_id.node)))
            {
            case NTV_MACRO:
              gt_ggc_m_9cpp_macro ((*x).identifier.common_id.node.value.macro);
              break;
            case NTV_ANSWER:
              gt_ggc_m_6answer ((*x).identifier.common_id.node.value.answers);
              break;
            case NTV_BUILTIN:
              break;
            case NTV_ARGUMENT:
              break;
            default:
              break;
            }
          gt_ggc_m_9c_binding ((*x).identifier.symbol_binding);
          gt_ggc_m_9c_binding ((*x).identifier.tag_binding);
          gt_ggc_m_9c_binding ((*x).identifier.label_binding);
          break;
        default:
          break;
        }
      x = (TREE_CODE (&(*x).generic) == INTEGER_TYPE ? (union lang_tree_node *) TYPE_NEXT_VARIANT (&(*x).generic) : (union lang_tree_node *) TREE_CHAIN (&(*x).generic));
    }
}

void
gt_ggc_mx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_18sorted_fields_type ((*x).s);
      gt_ggc_m_9tree_node ((*x).enum_min);
      gt_ggc_m_9tree_node ((*x).enum_max);
      gt_ggc_m_9tree_node ((*x).objc_info);
    }
}

void
gt_ggc_mx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).base.x_stmt_tree.x_cur_stmt_list);
      gt_ggc_m_9tree_node ((*x).x_break_label);
      gt_ggc_m_9tree_node ((*x).x_cont_label);
    }
}

void
gt_pch_nx_c_scope (void *x_p)
{
  struct c_scope * x = (struct c_scope *)x_p;
  struct c_scope * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_7c_scope))
   xlimit = ((*xlimit).outer);
  while (x != xlimit)
    {
      gt_pch_n_7c_scope ((*x).outer);
      gt_pch_n_7c_scope ((*x).outer_function);
      gt_pch_n_9c_binding ((*x).bindings);
      gt_pch_n_9tree_node ((*x).blocks);
      gt_pch_n_9tree_node ((*x).blocks_last);
      x = ((*x).outer);
    }
}

void
gt_pch_nx_c_binding (void *x_p)
{
  struct c_binding * x = (struct c_binding *)x_p;
  struct c_binding * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_9c_binding))
   xlimit = ((*xlimit).prev);
  while (x != xlimit)
    {
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_9tree_node ((*x).type);
      gt_pch_n_9tree_node ((*x).id);
      gt_pch_n_9c_binding ((*x).prev);
      gt_pch_n_9c_binding ((*x).shadowed);
      x = ((*x).prev);
    }
}

void
gt_pch_nx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_14lang_tree_node))
   xlimit = (TREE_CODE (&(*xlimit).generic) == INTEGER_TYPE ? (union lang_tree_node *) TYPE_NEXT_VARIANT (&(*xlimit).generic) : (union lang_tree_node *) TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
        {
        case 0:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_COMMON:
              gt_pch_n_9tree_node ((*x).generic.common.chain);
              gt_pch_n_9tree_node ((*x).generic.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.common.ann);
              break;
            case TS_INT_CST:
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.int_cst.common.ann);
              break;
            case TS_REAL_CST:
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.real_cst.common.ann);
              gt_pch_n_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_VECTOR:
              gt_pch_n_9tree_node ((*x).generic.vector.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vector.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.vector.common.ann);
              gt_pch_n_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_pch_n_9tree_node ((*x).generic.string.common.chain);
              gt_pch_n_9tree_node ((*x).generic.string.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.string.common.ann);
              break;
            case TS_COMPLEX:
              gt_pch_n_9tree_node ((*x).generic.complex.common.chain);
              gt_pch_n_9tree_node ((*x).generic.complex.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.complex.common.ann);
              gt_pch_n_9tree_node ((*x).generic.complex.real);
              gt_pch_n_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_pch_n_9tree_node ((*x).generic.identifier.common.chain);
              gt_pch_n_9tree_node ((*x).generic.identifier.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.identifier.common.ann);
              gt_pch_n_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL:
              gt_pch_n_9tree_node ((*x).generic.decl.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.decl.common.ann);
              gt_pch_n_S ((*x).generic.decl.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl.size);
              gt_pch_n_9tree_node ((*x).generic.decl.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl.name);
              gt_pch_n_9tree_node ((*x).generic.decl.context);
              gt_pch_n_9tree_node ((*x).generic.decl.arguments);
              gt_pch_n_9tree_node ((*x).generic.decl.result);
              gt_pch_n_9tree_node ((*x).generic.decl.initial);
              gt_pch_n_9tree_node ((*x).generic.decl.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.decl.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.decl.section_name);
              gt_pch_n_9tree_node ((*x).generic.decl.attributes);
              gt_pch_n_7rtx_def ((*x).generic.decl.rtl);
              switch (TREE_CODE((tree) &((*x))))
                {
                case FUNCTION_DECL:
                  gt_pch_n_8function ((*x).generic.decl.u2.f);
                  break;
                case PARM_DECL:
                  gt_pch_n_7rtx_def ((*x).generic.decl.u2.r);
                  break;
                case FIELD_DECL:
                  gt_pch_n_9tree_node ((*x).generic.decl.u2.t);
                  break;
                case VAR_DECL:
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.decl.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.decl.vindex);
              gt_pch_n_9lang_decl ((*x).generic.decl.lang_specific);
              break;
            case TS_TYPE:
              gt_pch_n_9tree_node ((*x).generic.type.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.type.common.ann);
              gt_pch_n_9tree_node ((*x).generic.type.values);
              gt_pch_n_9tree_node ((*x).generic.type.size);
              gt_pch_n_9tree_node ((*x).generic.type.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type.attributes);
              gt_pch_n_9tree_node ((*x).generic.type.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type.reference_to);
              switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  gt_pch_n_S ((*x).generic.type.symtab.pointer);
                  break;
                case 2:
                  gt_pch_n_10die_struct ((*x).generic.type.symtab.die);
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type.name);
              gt_pch_n_9tree_node ((*x).generic.type.minval);
              gt_pch_n_9tree_node ((*x).generic.type.maxval);
              gt_pch_n_9tree_node ((*x).generic.type.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type.binfo);
              gt_pch_n_9tree_node ((*x).generic.type.context);
              gt_pch_n_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_pch_n_9tree_node ((*x).generic.list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.list.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.list.common.ann);
              gt_pch_n_9tree_node ((*x).generic.list.purpose);
              gt_pch_n_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_pch_n_9tree_node ((*x).generic.vec.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vec.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.vec.common.ann);
              {
                size_t i1;
                for (i1 = 0; i1 != (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i1++) {
                  gt_pch_n_9tree_node ((*x).generic.vec.a[i1]);
                }
              }
              break;
            case TS_EXP:
              gt_pch_n_9tree_node ((*x).generic.exp.common.chain);
              gt_pch_n_9tree_node ((*x).generic.exp.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.exp.common.ann);
              gt_pch_n_10location_s ((*x).generic.exp.locus);
              gt_pch_n_9tree_node ((*x).generic.exp.block);
              switch (TREE_CODE ((tree) &(*x)))
                {
                default:
                  {
                    size_t i2;
                    for (i2 = 0; i2 != (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i2++) {
                      gt_pch_n_9tree_node ((*x).generic.exp.operands[i2]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_pch_n_9tree_node ((*x).generic.ssa_name.common.chain);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.ssa_name.common.ann);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.var);
              gt_pch_n_12ptr_info_def ((*x).generic.ssa_name.ptr_info);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.value_handle);
              break;
            case TS_PHI_NODE:
              gt_pch_n_9tree_node ((*x).generic.phi.common.chain);
              gt_pch_n_9tree_node ((*x).generic.phi.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.phi.common.ann);
              gt_pch_n_9tree_node ((*x).generic.phi.result);
              gt_pch_n_15basic_block_def ((*x).generic.phi.bb);
              gt_pch_n_10dataflow_d ((*x).generic.phi.df);
              {
                size_t i3;
                for (i3 = 0; i3 != (size_t)(((tree)&((*x).generic.phi))->phi.num_args); i3++) {
                  gt_pch_n_9tree_node ((*x).generic.phi.a[i3].def);
                }
              }
              break;
            case TS_BLOCK:
              gt_pch_n_9tree_node ((*x).generic.block.common.chain);
              gt_pch_n_9tree_node ((*x).generic.block.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.block.common.ann);
              gt_pch_n_9tree_node ((*x).generic.block.vars);
              gt_pch_n_9tree_node ((*x).generic.block.subblocks);
              gt_pch_n_9tree_node ((*x).generic.block.supercontext);
              gt_pch_n_9tree_node ((*x).generic.block.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_chain);
              break;
            case TS_BINFO:
              gt_pch_n_9tree_node ((*x).generic.binfo.common.chain);
              gt_pch_n_9tree_node ((*x).generic.binfo.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.binfo.common.ann);
              gt_pch_n_9tree_node ((*x).generic.binfo.offset);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtable);
              gt_pch_n_9tree_node ((*x).generic.binfo.virtuals);
              gt_pch_n_9tree_node ((*x).generic.binfo.vptr_field);
              gt_pch_n_8VEC_tree ((*x).generic.binfo.base_accesses);
              gt_pch_n_9tree_node ((*x).generic.binfo.inheritance);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_vptr);
              {
                size_t i4;
                for (i4 = 0; i4 != (size_t)(((*x).generic.binfo.base_binfos).num); i4++) {
                  gt_pch_n_9tree_node ((*x).generic.binfo.base_binfos.vec[i4]);
                }
              }
              break;
            case TS_STATEMENT_LIST:
              gt_pch_n_9tree_node ((*x).generic.stmt_list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.stmt_list.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.stmt_list.common.ann);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_VALUE_HANDLE:
              gt_pch_n_9tree_node ((*x).generic.value_handle.common.chain);
              gt_pch_n_9tree_node ((*x).generic.value_handle.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.value_handle.common.ann);
              break;
            default:
              break;
            }
          break;
        case 1:
          gt_pch_n_9tree_node ((*x).identifier.common_id.common.chain);
          gt_pch_n_9tree_node ((*x).identifier.common_id.common.type);
          gt_pch_n_10tree_ann_d ((*x).identifier.common_id.common.ann);
          gt_pch_n_S ((*x).identifier.common_id.node.ident.str);
          switch (CPP_HASHNODE_VALUE_IDX (((*x).identifier.common_id.node)))
            {
            case NTV_MACRO:
              gt_pch_n_9cpp_macro ((*x).identifier.common_id.node.value.macro);
              break;
            case NTV_ANSWER:
              gt_pch_n_6answer ((*x).identifier.common_id.node.value.answers);
              break;
            case NTV_BUILTIN:
              break;
            case NTV_ARGUMENT:
              break;
            default:
              break;
            }
          gt_pch_n_9c_binding ((*x).identifier.symbol_binding);
          gt_pch_n_9c_binding ((*x).identifier.tag_binding);
          gt_pch_n_9c_binding ((*x).identifier.label_binding);
          break;
        default:
          break;
        }
      x = (TREE_CODE (&(*x).generic) == INTEGER_TYPE ? (union lang_tree_node *) TYPE_NEXT_VARIANT (&(*x).generic) : (union lang_tree_node *) TREE_CHAIN (&(*x).generic));
    }
}

void
gt_pch_nx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_decl))
    {
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type))
    {
      gt_pch_n_18sorted_fields_type ((*x).s);
      gt_pch_note_reorder ((*x).s, (*x).s, resort_sorted_fields);
      gt_pch_n_9tree_node ((*x).enum_min);
      gt_pch_n_9tree_node ((*x).enum_max);
      gt_pch_n_9tree_node ((*x).objc_info);
    }
}

void
gt_pch_nx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17language_function))
    {
      gt_pch_n_9tree_node ((*x).base.x_stmt_tree.x_cur_stmt_list);
      gt_pch_n_9tree_node ((*x).x_break_label);
      gt_pch_n_9tree_node ((*x).x_cont_label);
    }
}

void
gt_pch_p_7c_scope (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct c_scope * const x ATTRIBUTE_UNUSED = (struct c_scope *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).outer), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).outer_function), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).bindings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).blocks), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).blocks_last), cookie);
}

void
gt_pch_p_9c_binding (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct c_binding * const x ATTRIBUTE_UNUSED = (struct c_binding *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).id), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).shadowed), cookie);
}

void
gt_pch_p_14lang_tree_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  union lang_tree_node * const x ATTRIBUTE_UNUSED = (union lang_tree_node *)x_p;
  switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
    {
    case 0:
      switch (tree_node_structure (&((*x).generic)))
        {
        case TS_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.ann), cookie);
          break;
        case TS_INT_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.ann), cookie);
          break;
        case TS_REAL_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.real_cst_ptr), cookie);
          break;
        case TS_VECTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.elements), cookie);
          break;
        case TS_STRING:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.ann), cookie);
          break;
        case TS_COMPLEX:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.real), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.imag), cookie);
          break;
        case TS_IDENTIFIER:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.id.str), cookie);
          break;
        case TS_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.rtl), cookie);
          switch (TREE_CODE((tree) &((*x))))
            {
            case FUNCTION_DECL:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.decl.u2.f), cookie);
              break;
            case PARM_DECL:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.decl.u2.r), cookie);
              break;
            case FIELD_DECL:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.decl.u2.t), cookie);
              break;
            case VAR_DECL:
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.vindex), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.lang_specific), cookie);
          break;
        case TS_TYPE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.values), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.pointer_to), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.reference_to), cookie);
          switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
            {
            case 0:
              break;
            case 1:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.pointer), cookie);
              break;
            case 2:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.die), cookie);
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.minval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.maxval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.next_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.main_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.binfo), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.lang_specific), cookie);
          break;
        case TS_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.purpose), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.value), cookie);
          break;
        case TS_VEC:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.ann), cookie);
          {
            size_t i1;
            for (i1 = 0; i1 != (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i1++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.vec.a[i1]), cookie);
            }
          }
          break;
        case TS_EXP:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.locus), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.block), cookie);
          switch (TREE_CODE ((tree) &(*x)))
            {
            default:
              {
                size_t i2;
                for (i2 = 0; i2 != (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i2++) {
                  if ((void *)(x) == this_obj)
                    op (&((*x).generic.exp.operands[i2]), cookie);
                }
              }
              break;
            }
          break;
        case TS_SSA_NAME:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.var), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.ptr_info), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.value_handle), cookie);
          break;
        case TS_PHI_NODE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.bb), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.df), cookie);
          {
            size_t i3;
            for (i3 = 0; i3 != (size_t)(((tree)&((*x).generic.phi))->phi.num_args); i3++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.phi.a[i3].def), cookie);
            }
          }
          break;
        case TS_BLOCK:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.vars), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.subblocks), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.supercontext), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_chain), cookie);
          break;
        case TS_BINFO:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtable), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.virtuals), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vptr_field), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.base_accesses), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.inheritance), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_subvtt), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_vptr), cookie);
          {
            size_t i4;
            for (i4 = 0; i4 != (size_t)(((*x).generic.binfo.base_binfos).num); i4++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.binfo.base_binfos.vec[i4]), cookie);
            }
          }
          break;
        case TS_STATEMENT_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.head), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.tail), cookie);
          break;
        case TS_VALUE_HANDLE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.common.ann), cookie);
          break;
        default:
          break;
        }
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common_id.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common_id.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common_id.common.ann), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common_id.node.ident.str), cookie);
      switch (CPP_HASHNODE_VALUE_IDX (((*x).identifier.common_id.node)))
        {
        case NTV_MACRO:
          if ((void *)(x) == this_obj)
            op (&((*x).identifier.common_id.node.value.macro), cookie);
          break;
        case NTV_ANSWER:
          if ((void *)(x) == this_obj)
            op (&((*x).identifier.common_id.node.value.answers), cookie);
          break;
        case NTV_BUILTIN:
          break;
        case NTV_ARGUMENT:
          break;
        default:
          break;
        }
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.symbol_binding), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.tag_binding), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.label_binding), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_9lang_decl (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_decl * const x ATTRIBUTE_UNUSED = (struct lang_decl *)x_p;
}

void
gt_pch_p_9lang_type (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_type * const x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).s), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).enum_min), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).enum_max), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).objc_info), cookie);
}

void
gt_pch_p_17language_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct language_function * const x ATTRIBUTE_UNUSED = (struct language_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).base.x_stmt_tree.x_cur_stmt_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_break_label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_cont_label), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_c_decl_h[] = {
  {
    &ext_block,
    1,
    sizeof (ext_block),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &static_dtors,
    1,
    sizeof (static_dtors),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &static_ctors,
    1,
    sizeof (static_ctors),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &external_scope,
    1,
    sizeof (external_scope),
    &gt_ggc_mx_c_scope,
    &gt_pch_nx_c_scope
  },
  {
    &file_scope,
    1,
    sizeof (file_scope),
    &gt_ggc_mx_c_scope,
    &gt_pch_nx_c_scope
  },
  {
    &current_function_scope,
    1,
    sizeof (current_function_scope),
    &gt_ggc_mx_c_scope,
    &gt_pch_nx_c_scope
  },
  {
    &current_scope,
    1,
    sizeof (current_scope),
    &gt_ggc_mx_c_scope,
    &gt_pch_nx_c_scope
  },
  {
    &visible_builtins,
    1,
    sizeof (visible_builtins),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &all_translation_units,
    1,
    sizeof (all_translation_units),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &c_stmt_tree.x_cur_stmt_list,
    1,
    sizeof (c_stmt_tree),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_ggc_rd_gt_c_decl_h[] = {
  { &binding_freelist, 1, sizeof (binding_freelist), NULL, NULL },
  { &scope_freelist, 1, sizeof (scope_freelist), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_c_decl_h[] = {
  { &compound_literal_number, 1, sizeof (compound_literal_number), NULL, NULL },
  { &c_stmt_tree, 1, sizeof (c_stmt_tree), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

