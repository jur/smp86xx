/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "regs.h"

int
const_uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (SMALL_OPERAND_UNSIGNED (INTVAL (op)));
}

int
uns_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_uns_arith_operand (op, mode)) || (register_operand (op, mode));
}

int
const_arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (SMALL_OPERAND (INTVAL (op)));
}

int
arith_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_arith_operand (op, mode)) || (register_operand (op, mode));
}

int
sle_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (SMALL_OPERAND (INTVAL (op) + 1));
}

int
sleu_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (sle_operand (op, mode)) && (INTVAL (op) + 1 != 0);
}

int
const_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT || GET_CODE (op) == CONST_DOUBLE || GET_CODE (op) == CONST_VECTOR) && (op == CONST0_RTX (GET_MODE (op)));
}

int
reg_or_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((const_0_operand (op, mode)) && (!TARGET_MIPS16)) || (register_operand (op, mode));
}

int
const_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT || GET_CODE (op) == CONST_DOUBLE || GET_CODE (op) == CONST_VECTOR) && (op == CONST1_RTX (GET_MODE (op)));
}

int
reg_or_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_1_operand (op, mode)) || (register_operand (op, mode));
}

int
const_0_or_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((op == CONST0_RTX (GET_MODE (op))) || (op == CONST1_RTX (GET_MODE (op))));
}

int
fpr_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (FP_REG_P (REGNO (op)))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
hilo_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (MD_REG_P (REGNO (op)))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
lo_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (REGNO (op) == LO_REGNUM)) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
fcc_reload_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG || GET_CODE (op) == SUBREG) && (ST_REG_P (true_regnum (op)))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
pc_or_label_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == PC || GET_CODE (op) == LABEL_REF;
}

static inline int
const_call_insn_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  enum mips_symbol_type symbol_type;

  if (!mips_symbolic_constant_p (op, &symbol_type))
    return false;

  switch (symbol_type)
    {
    case SYMBOL_GENERAL:
      /* If -mlong-calls, force all calls to use register addressing.  */
      return !TARGET_LONG_CALLS;

    case SYMBOL_GOT_GLOBAL:
      /* Without explicit relocs, there is no special syntax for
	 loading the address of a call destination into a register.
	 Using "la $25,foo; jal $25" would prevent the lazy binding
	 of "foo", so keep the address of global symbols with the
	 jal macro.  */
      return !TARGET_EXPLICIT_RELOCS;

    default:
      return false;
    }
}

int
const_call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (const_call_insn_operand_1 (op, mode))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_call_insn_operand (op, mode)) || (register_operand (op, mode));
}

static inline int
move_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
      /* When generating mips16 code, LEGITIMATE_CONSTANT_P rejects
	 CONST_INTs that can't be loaded using simple insns.  */
      if (TARGET_MIPS16)
	return true;

      /* When generating 32-bit code, allow DImode move_operands to
	 match arbitrary constants.  We split them after reload.  */
      if (!TARGET_64BIT && mode == DImode)
	return true;

      /* Otherwise check whether the constant can be loaded in a single
	 instruction.  */
      return LUI_INT (op) || SMALL_INT (op) || SMALL_INT_UNSIGNED (op);

    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      return CONST_GP_P (op) || mips_atomic_symbolic_constant_p (op);

    default:
      return true;
    }
}

int
move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (move_operand_1 (op, mode));
}

int
consttable_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (CONSTANT_P (op)) && (mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type);
}

int
symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (symbolic_operand_1 (op, mode))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
general_symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type) && type == SYMBOL_GENERAL;
}

int
general_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (general_symbolic_operand_1 (op, mode))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
global_got_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type) && type == SYMBOL_GOT_GLOBAL;
}

int
global_got_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (global_got_operand_1 (op, mode))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
local_got_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  enum mips_symbol_type type;
  return mips_symbolic_constant_p (op, &type) && type == SYMBOL_GOT_LOCAL;
}

int
local_got_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST || GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == LABEL_REF) && (local_got_operand_1 (op, mode))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
stack_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (mips_stack_address_p (XEXP (op, 0), GET_MODE (op)))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
macc_msac_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  rtx mult = XEXP (op, GET_CODE (op) == PLUS ? 0 : 1);
  rtx accum = XEXP (op, GET_CODE (op) == PLUS ? 1 : 0);
  return (GET_CODE (mult) == MULT
	  && REG_P (XEXP (mult, 0))
	  && REG_P (XEXP (mult, 1))
	  && REG_P (accum));
}

int
macc_msac_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == PLUS) && (ISA_HAS_MACC)) || ((GET_CODE (op) == MINUS) && (ISA_HAS_MSAC))) && (macc_msac_operand_1 (op, mode))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
equality_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == EQ || GET_CODE (op) == NE) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
extend_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == ZERO_EXTEND || GET_CODE (op) == SIGN_EXTEND) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
trap_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == LT || GET_CODE (op) == LTU || GET_CODE (op) == GE || GET_CODE (op) == GEU) && (mode == VOIDmode || GET_MODE (op) == mode);
}

int
small_data_pattern (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SET || GET_CODE (op) == PARALLEL || GET_CODE (op) == UNSPEC || GET_CODE (op) == UNSPEC_VOLATILE || GET_CODE (op) == PREFETCH) && (mips_small_data_pattern_p (op))) && (mode == VOIDmode || GET_MODE (op) == mode);
}

