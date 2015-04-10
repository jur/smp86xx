/* Type information for cp/parser.c.
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
gt_ggc_mx_cp_parser (void *x_p)
{
  struct cp_parser * const x = (struct cp_parser *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_8cp_lexer ((*x).lexer);
      gt_ggc_m_9tree_node ((*x).scope);
      gt_ggc_m_9tree_node ((*x).object_scope);
      gt_ggc_m_9tree_node ((*x).qualifying_scope);
      gt_ggc_m_17cp_parser_context ((*x).context);
      gt_ggc_m_9tree_node ((*x).unparsed_functions_queues);
    }
}

void
gt_ggc_mx_cp_parser_context (void *x_p)
{
  struct cp_parser_context * const x = (struct cp_parser_context *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).object_type);
      gt_ggc_m_17cp_parser_context ((*x).next);
    }
}

void
gt_ggc_mx_cp_lexer (void *x_p)
{
  struct cp_lexer * const x = (struct cp_lexer *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).buffer != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).buffer_length); i0++) {
          gt_ggc_m_9tree_node ((*x).buffer[i0].value);
        }
        ggc_mark ((*x).buffer);
      }
      gt_ggc_m_8cp_lexer ((*x).next);
    }
}

void
gt_ggc_mx_cp_token (void *x_p)
{
  struct cp_token * const x = (struct cp_token *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).value);
    }
}

void
gt_ggc_mx_cp_token_cache (void *x_p)
{
  struct cp_token_cache * const x = (struct cp_token_cache *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_pch_nx_cp_parser (void *x_p)
{
  struct cp_parser * const x = (struct cp_parser *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9cp_parser))
    {
      gt_pch_n_8cp_lexer ((*x).lexer);
      gt_pch_n_9tree_node ((*x).scope);
      gt_pch_n_9tree_node ((*x).object_scope);
      gt_pch_n_9tree_node ((*x).qualifying_scope);
      gt_pch_n_17cp_parser_context ((*x).context);
      gt_pch_n_S ((*x).type_definition_forbidden_message);
      gt_pch_n_9tree_node ((*x).unparsed_functions_queues);
    }
}

void
gt_pch_nx_cp_parser_context (void *x_p)
{
  struct cp_parser_context * const x = (struct cp_parser_context *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17cp_parser_context))
    {
      gt_pch_n_9tree_node ((*x).object_type);
      gt_pch_n_17cp_parser_context ((*x).next);
    }
}

void
gt_pch_nx_cp_lexer (void *x_p)
{
  struct cp_lexer * const x = (struct cp_lexer *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8cp_lexer))
    {
      if ((*x).buffer != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).buffer_length); i0++) {
          gt_pch_n_9tree_node ((*x).buffer[i0].value);
          gt_pch_n_S ((*x).buffer[i0].location.file);
        }
        gt_pch_note_object ((*x).buffer, x, gt_pch_p_8cp_lexer);
      }
      gt_pch_n_8cp_lexer ((*x).next);
    }
}

void
gt_pch_nx_cp_token (void *x_p)
{
  struct cp_token * const x = (struct cp_token *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_8cp_token))
    {
      gt_pch_n_9tree_node ((*x).value);
      gt_pch_n_S ((*x).location.file);
    }
}

void
gt_pch_nx_cp_token_cache (void *x_p)
{
  struct cp_token_cache * const x = (struct cp_token_cache *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14cp_token_cache))
    {
    }
}

void
gt_pch_p_9cp_parser (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cp_parser * const x ATTRIBUTE_UNUSED = (struct cp_parser *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).lexer), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).scope), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).object_scope), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).qualifying_scope), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).context), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type_definition_forbidden_message), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).unparsed_functions_queues), cookie);
}

void
gt_pch_p_17cp_parser_context (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cp_parser_context * const x ATTRIBUTE_UNUSED = (struct cp_parser_context *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).object_type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_8cp_lexer (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cp_lexer * const x ATTRIBUTE_UNUSED = (struct cp_lexer *)x_p;
  if ((*x).buffer != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).buffer_length); i0++) {
      if ((void *)((*x).buffer) == this_obj)
        op (&((*x).buffer[i0].value), cookie);
      if ((void *)((*x).buffer) == this_obj)
        op (&((*x).buffer[i0].location.file), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).buffer), cookie);
  }
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_8cp_token (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cp_token * const x ATTRIBUTE_UNUSED = (struct cp_token *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).location.file), cookie);
}

void
gt_pch_p_14cp_token_cache (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cp_token_cache * const x ATTRIBUTE_UNUSED = (struct cp_token_cache *)x_p;
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_cp_parser_h[] = {
  {
    &the_parser,
    1,
    sizeof (the_parser),
    &gt_ggc_mx_cp_parser,
    &gt_pch_nx_cp_parser
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_ggc_rd_gt_cp_parser_h[] = {
  { &cp_parser_context_free_list, 1, sizeof (cp_parser_context_free_list), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

