/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "insn-constants.h"

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "system.h"
#if GCC_VERSION < 3001
#include "dummy-conditions.c"
#else
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "gensupport.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

/* If we don't have __builtin_constant_p, or it's not acceptable in
   array initializers, fall back (by using dummy-conditions.c above)
   to assuming that all conditions potentially vary at run time.  It
   works in 3.0.1 and later; 3.0 only when not optimizing.  */
#define MAYBE_EVAL(expr) (__builtin_constant_p(expr) ? (int) (expr) : -1)

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time. */

const struct c_test insn_conditions[] = {
  { "!TARGET_MIPS16 && !TARGET_MEMCPY",
    MAYBE_EVAL (!TARGET_MIPS16 && !TARGET_MEMCPY) },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "!TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))) },
  { "(TARGET_FIX_R4000) && (TARGET_64BIT)",
    MAYBE_EVAL ((TARGET_FIX_R4000) && (TARGET_64BIT)) },
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected) },
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0xf)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))) },
  { "!ISA_HAS_SEB_SEH",
    MAYBE_EVAL (!ISA_HAS_SEB_SEH) },
  { "(TARGET_MIPS3900\n\
   || ISA_HAS_MADD_MSUB)\n\
   && !TARGET_MIPS16",
    MAYBE_EVAL ((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[3]) == LO_REGNUM",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM) },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)) },
  { "TARGET_64BIT && !TARGET_MIPS16&& reload_completed",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16&& reload_completed) },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)) },
  { "(!TARGET_FIX_R4000) && (TARGET_64BIT)",
    MAYBE_EVAL ((!TARGET_FIX_R4000) && (TARGET_64BIT)) },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)) },
  { "TARGET_MIPS3D",
    MAYBE_EVAL (TARGET_MIPS3D) },
  { "ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS",
    MAYBE_EVAL (ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && INTVAL (operands[1]) >= 0x100\n\
   && INTVAL (operands[1]) <= 0xff + 0x7f",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f) },
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || reg_or_0_operand (operands[1], SImode))",
    MAYBE_EVAL (!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))) },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)) },
  { "(TARGET_MAD || ISA_HAS_MACC)\n\
   && !TARGET_64BIT",
    MAYBE_EVAL ((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT) },
  { "reload_completed",
    MAYBE_EVAL (reload_completed) },
  { "TARGET_MAD",
    MAYBE_EVAL (TARGET_MAD) },
  { "ISA_HAS_MULHI",
    MAYBE_EVAL (ISA_HAS_MULHI) },
  { "TARGET_64BIT && TARGET_MIPS16",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16) },
  { "TARGET_PAIRED_SINGLE_FLOAT\n\
   && TARGET_64BIT\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || reg_or_0_operand (operands[1], V2SFmode))",
    MAYBE_EVAL (TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))) },
  { "TARGET_SIBCALLS && SIBLING_CALL_P (insn)",
    MAYBE_EVAL (TARGET_SIBCALLS && SIBLING_CALL_P (insn)) },
  { "TARGET_64BIT&& reload_completed && register_operand (operands[1], VOIDmode)",
    MAYBE_EVAL (TARGET_64BIT&& reload_completed && register_operand (operands[1], VOIDmode)) },
  { "(!ISA_HAS_SEB_SEH) && (TARGET_64BIT)&& reload_completed && REG_P (operands[1])",
    MAYBE_EVAL ((!ISA_HAS_SEB_SEH) && (TARGET_64BIT)&& reload_completed && REG_P (operands[1])) },
  { "TARGET_64BIT && TARGET_MIPS16&& reload_completed",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16&& reload_completed) },
  { "Pmode == DImode",
    MAYBE_EVAL (Pmode == DImode) },
  { "(TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "TARGET_64BIT && !TARGET_FIX_R4000",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_FIX_R4000) },
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected&& reload_completed",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected&& reload_completed) },
  { "mips_can_use_return_insn ()",
    MAYBE_EVAL (mips_can_use_return_insn ()) },
  { "TARGET_PAIRED_SINGLE_FLOAT",
    MAYBE_EVAL (TARGET_PAIRED_SINGLE_FLOAT) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))) },
  { "(ISA_HAS_CLZ_CLO) && (TARGET_64BIT)",
    MAYBE_EVAL ((ISA_HAS_CLZ_CLO) && (TARGET_64BIT)) },
  { "(!TARGET_FIX_VR4120) && (TARGET_64BIT)",
    MAYBE_EVAL ((!TARGET_FIX_VR4120) && (TARGET_64BIT)) },
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) },
  { "reload_completed && !TARGET_DEBUG_D_MODE",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W) },
  { "TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W) },
  { "TARGET_SIBCALLS",
    MAYBE_EVAL (TARGET_SIBCALLS) },
  { "(ISA_HAS_MACCHI) && (TARGET_64BIT)",
    MAYBE_EVAL ((ISA_HAS_MACCHI) && (TARGET_64BIT)) },
  { "TARGET_64BIT && !TARGET_FIX_R4000&& reload_completed",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_FIX_R4000&& reload_completed) },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "ISA_HAS_CONDMOVE",
    MAYBE_EVAL (ISA_HAS_CONDMOVE) },
  { "GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0])",
    MAYBE_EVAL (GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0])) },
  { "TARGET_64BIT && !TARGET_MIPS16",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16) },
  { "TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0) },
  { "TARGET_MIPS16",
    MAYBE_EVAL (TARGET_MIPS16) },
  { "!TARGET_64BIT && TARGET_FIX_R4000",
    MAYBE_EVAL (!TARGET_64BIT && TARGET_FIX_R4000) },
  { "ISA_HAS_CLZ_CLO",
    MAYBE_EVAL (ISA_HAS_CLZ_CLO) },
  { "TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))) },
  { "ISA_HAS_MACC && reload_completed",
    MAYBE_EVAL (ISA_HAS_MACC && reload_completed) },
  { "(TARGET_MIPS16) && (Pmode == SImode)",
    MAYBE_EVAL ((TARGET_MIPS16) && (Pmode == SImode)) },
  { "(TARGET_MIPS16) && (TARGET_64BIT)",
    MAYBE_EVAL ((TARGET_MIPS16) && (TARGET_64BIT)) },
  { "!ISA_HAS_SEB_SEH&& reload_completed && REG_P (operands[1])",
    MAYBE_EVAL (!ISA_HAS_SEB_SEH&& reload_completed && REG_P (operands[1])) },
  { "TARGET_64BIT && !TARGET_FIX_R4000\n\
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)) },
  { "reload_completed && !TARGET_64BIT\n\
   && mips_split_64bit_move_p (operands[0], operands[1])",
    MAYBE_EVAL (reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])) },
  { "(TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    MAYBE_EVAL ((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))) },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)&& reload_completed",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)&& reload_completed) },
  { "(!TARGET_MIPS16) && (Pmode == SImode)",
    MAYBE_EVAL ((!TARGET_MIPS16) && (Pmode == SImode)) },
  { "(TARGET_ABICALLS) && (Pmode == SImode)",
    MAYBE_EVAL ((TARGET_ABICALLS) && (Pmode == SImode)) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)) },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "TARGET_HARD_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT) },
  { "(ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    MAYBE_EVAL ((ISA_HAS_SEB_SEH) && (TARGET_64BIT)) },
  { "TARGET_MIPS3D&& reload_completed",
    MAYBE_EVAL (TARGET_MIPS3D&& reload_completed) },
  { "TARGET_64BIT && TARGET_MIPS16 && reload_completed\n\
   && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x10)\n\
       || (INTVAL (operands[1]) >= 32 * 8\n\
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 8\n\
	   && (INTVAL (operands[1]) & 7) != 0))",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0))) },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))) },
  { "TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    MAYBE_EVAL (TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))) },
  { "TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT) },
  { "(!ISA_HAS_SEB_SEH) && (TARGET_64BIT)",
    MAYBE_EVAL ((!ISA_HAS_SEB_SEH) && (TARGET_64BIT)) },
  { "ISA_HAS_8CC && TARGET_HARD_FLOAT",
    MAYBE_EVAL (ISA_HAS_8CC && TARGET_HARD_FLOAT) },
  { "(TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)",
    MAYBE_EVAL ((TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)) },
  { "TARGET_64BIT&& reload_completed && REG_P (operands[1])",
    MAYBE_EVAL (TARGET_64BIT&& reload_completed && REG_P (operands[1])) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))) },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "TARGET_64BIT",
    MAYBE_EVAL (TARGET_64BIT) },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)) },
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])",
    MAYBE_EVAL (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])) },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)) },
  { "ISA_HAS_SEB_SEH",
    MAYBE_EVAL (ISA_HAS_SEB_SEH) },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)) },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && true_regnum (operands[1]) == LO_REGNUM",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM) },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))) },
  { "TARGET_ABICALLS && TARGET_OLDABI&& reload_completed",
    MAYBE_EVAL (TARGET_ABICALLS && TARGET_OLDABI&& reload_completed) },
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS&& flow2_completed",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS&& flow2_completed) },
  { "(!ISA_HAS_MACCHI) && (TARGET_64BIT)",
    MAYBE_EVAL ((!ISA_HAS_MACCHI) && (TARGET_64BIT)) },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)",
    MAYBE_EVAL ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)) },
  { "!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])",
    MAYBE_EVAL (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])) },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)",
    MAYBE_EVAL ((ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)) },
  { "!TARGET_64BIT && ISA_HAS_MULS",
    MAYBE_EVAL (!TARGET_64BIT && ISA_HAS_MULS) },
  { "! TARGET_64BIT",
    MAYBE_EVAL (! TARGET_64BIT) },
  { "TARGET_64BIT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || reg_or_0_operand (operands[1], DImode))",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))) },
  { "ISA_HAS_ROTR_SI",
    MAYBE_EVAL (ISA_HAS_ROTR_SI) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))) },
  { "GENERATE_MULT3_SI",
    MAYBE_EVAL (GENERATE_MULT3_SI) },
  { "TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS",
    MAYBE_EVAL (TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS) },
  { "(!TARGET_MIPS16) && (TARGET_64BIT)",
    MAYBE_EVAL ((!TARGET_MIPS16) && (TARGET_64BIT)) },
  { "TARGET_PAIRED_SINGLE_FLOAT&& reload_completed",
    MAYBE_EVAL (TARGET_PAIRED_SINGLE_FLOAT&& reload_completed) },
  { "TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT) },
  { "!TARGET_FIX_VR4120",
    MAYBE_EVAL (!TARGET_FIX_VR4120) },
  { "GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1])",
    MAYBE_EVAL (GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1])) },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)&& reload_completed",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)&& reload_completed) },
  { "!TARGET_64BIT && !TARGET_FIX_R4000",
    MAYBE_EVAL (!TARGET_64BIT && !TARGET_FIX_R4000) },
  { "(TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "ISA_HAS_MACCHI",
    MAYBE_EVAL (ISA_HAS_MACCHI) },
  { "ISA_HAS_MACC",
    MAYBE_EVAL (ISA_HAS_MACC) },
  { "(TARGET_MIPS16) && (Pmode == DImode)",
    MAYBE_EVAL ((TARGET_MIPS16) && (Pmode == DImode)) },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "TARGET_64BIT && GENERATE_MULT3_DI",
    MAYBE_EVAL (TARGET_64BIT && GENERATE_MULT3_DI) },
  { "(TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)) },
  { "!TARGET_MIPS16",
    MAYBE_EVAL (!TARGET_MIPS16) },
  { "!TARGET_64BIT || !TARGET_FIX_R4000",
    MAYBE_EVAL (!TARGET_64BIT || !TARGET_FIX_R4000) },
  { "ISA_HAS_MACC && !GENERATE_MULT3_SI",
    MAYBE_EVAL (ISA_HAS_MACC && !GENERATE_MULT3_SI) },
  { "Pmode == SImode",
    MAYBE_EVAL (Pmode == SImode) },
  { "ISA_HAS_MULHI || !TARGET_FIX_R4000",
    MAYBE_EVAL (ISA_HAS_MULHI || !TARGET_FIX_R4000) },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0x7f\n\
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)\n\
       || (INTVAL (operands[1]) < - 0x80\n\
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[3]))",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3]))) },
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], QImode)\n\
       || reg_or_0_operand (operands[1], QImode))",
    MAYBE_EVAL (!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))) },
  { "ISA_HAS_MADD_MSUB",
    MAYBE_EVAL (ISA_HAS_MADD_MSUB) },
  { "ISA_HAS_MACC && !ISA_HAS_MSAC&& reload_completed",
    MAYBE_EVAL (ISA_HAS_MACC && !ISA_HAS_MSAC&& reload_completed) },
  { "!TARGET_64BIT && ISA_HAS_MSAC",
    MAYBE_EVAL (!TARGET_64BIT && ISA_HAS_MSAC) },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)",
    MAYBE_EVAL (((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT) },
  { "(TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) > 8\n\
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)",
    MAYBE_EVAL ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)) },
  { "ISA_HAS_COND_TRAP",
    MAYBE_EVAL (ISA_HAS_COND_TRAP) },
  { "(TARGET_MIPS3D) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT)) },
  { "TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) > 0xf\n\
	&& INTVAL (operands[1]) <= 0xf + 0xf)\n\
       || (INTVAL (operands[1]) < - 0x10\n\
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))",
    MAYBE_EVAL (TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))) },
  { "ISA_HAS_MULS",
    MAYBE_EVAL (ISA_HAS_MULS) },
  { "(TARGET_ABICALLS) && (Pmode == DImode)",
    MAYBE_EVAL ((TARGET_ABICALLS) && (Pmode == DImode)) },
  { "TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W) },
  { "!TARGET_64BIT && TARGET_MIPS16\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    MAYBE_EVAL (!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))) },
  { "TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32",
    MAYBE_EVAL (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32) },
  { "TARGET_FIX_R4000",
    MAYBE_EVAL (TARGET_FIX_R4000) },
  { "(!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)) },
  { "TARGET_ABICALLS && TARGET_OLDABI",
    MAYBE_EVAL (TARGET_ABICALLS && TARGET_OLDABI) },
  { "TARGET_SPLIT_CALLS",
    MAYBE_EVAL (TARGET_SPLIT_CALLS) },
  { "(TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)&& reload_completed",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)&& reload_completed) },
  { "!ISA_HAS_MACCHI",
    MAYBE_EVAL (!ISA_HAS_MACCHI) },
  { "(!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)",
    MAYBE_EVAL ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)) },
  { "(ISA_HAS_ROTR_DI) && (TARGET_64BIT)",
    MAYBE_EVAL ((ISA_HAS_ROTR_DI) && (TARGET_64BIT)) },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)&& reload_completed",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)&& reload_completed) },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "(!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32\n\
	   && INTVAL (operands[1]) <= 31 + 0x7f))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))) },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)",
    MAYBE_EVAL (((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)) },
  { "reload_completed && !TARGET_DEBUG_D_MODE\n\
   && GP_REG_P (true_regnum (operands[0]))\n\
   && GP_REG_P (true_regnum (operands[1]))",
    MAYBE_EVAL (reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1]))) },
  { "GENERATE_MULT3_SI\n\
   && true_regnum (operands[1]) == LO_REGNUM\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && GP_REG_P (true_regnum (operands[3]))",
    MAYBE_EVAL (GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3]))) },
  { "(ISA_HAS_COND_TRAP) && (TARGET_64BIT)",
    MAYBE_EVAL ((ISA_HAS_COND_TRAP) && (TARGET_64BIT)) },
  { "(TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)) },
  { "((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) },
  { "(ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 4\n\
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 4\n\
	   && (INTVAL (operands[1]) & 3) != 0))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))) },
  { "(ISA_HAS_CONDMOVE) && (TARGET_64BIT)",
    MAYBE_EVAL ((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) },
  { "(ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W) },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)&& reload_completed",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)&& reload_completed) },
  { "!TARGET_FIX_R4000",
    MAYBE_EVAL (!TARGET_FIX_R4000) },
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)",
    MAYBE_EVAL (reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)) },
  { "TARGET_ABICALLS && TARGET_NEWABI",
    MAYBE_EVAL (TARGET_ABICALLS && TARGET_NEWABI) },
  { "(TARGET_SB1) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((TARGET_SB1) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    MAYBE_EVAL (TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))) },
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)",
    MAYBE_EVAL (reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)) },
  { "!TARGET_MIPS16\n\
   && (register_operand (operands[0], HImode)\n\
       || reg_or_0_operand (operands[1], HImode))",
    MAYBE_EVAL (!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))) },
  { "TARGET_ABICALLS",
    MAYBE_EVAL (TARGET_ABICALLS) },
  { "(TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)&& reload_completed",
    MAYBE_EVAL ((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)&& reload_completed) },
  { "((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "(!TARGET_MIPS16) && (Pmode == DImode)",
    MAYBE_EVAL ((!TARGET_MIPS16) && (Pmode == DImode)) },
  { "(TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "ISA_HAS_MSAC",
    MAYBE_EVAL (ISA_HAS_MSAC) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && REG_P (operands[1])\n\
   && M16_REG_P (REGNO (operands[1]))\n\
   && REGNO (operands[0]) != REGNO (operands[1])\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && ((INTVAL (operands[2]) > 0x7\n\
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)\n\
       || (INTVAL (operands[2]) < - 0x8\n\
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))) },
  { "TARGET_SOFT_FLOAT && !TARGET_MIPS16\n\
   && (register_operand (operands[0], SFmode)\n\
       || reg_or_0_operand (operands[1], SFmode))",
    MAYBE_EVAL (TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))) },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((!ISA_MIPS1) && (TARGET_HARD_FLOAT)) },
  { "ISA_HAS_MSAC && reload_completed",
    MAYBE_EVAL (ISA_HAS_MSAC && reload_completed) },
  { "(ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)",
    MAYBE_EVAL ((ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)) },
  { "reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)",
    MAYBE_EVAL (reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)) },
  { "(ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)) },
  { "ISA_HAS_MACC && !ISA_HAS_MSAC",
    MAYBE_EVAL (ISA_HAS_MACC && !ISA_HAS_MSAC) },
  { "(TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_PAIRED_SINGLE_FLOAT)",
    MAYBE_EVAL ((TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_PAIRED_SINGLE_FLOAT)) },
  { "((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL (((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)) },
  { "TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE\n\
   && REG_P (operands[0])\n\
   && M16_REG_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && ((INTVAL (operands[1]) < 0\n\
	&& INTVAL (operands[1]) >= -0x80)\n\
       || (INTVAL (operands[1]) >= 32 * 2\n\
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)\n\
       || (INTVAL (operands[1]) >= 0\n\
	   && INTVAL (operands[1]) < 32 * 2\n\
	   && (INTVAL (operands[1]) & 1) != 0))",
    MAYBE_EVAL (TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))) },
  { "!ISA_HAS_MULHI && !TARGET_FIX_R4000",
    MAYBE_EVAL (!ISA_HAS_MULHI && !TARGET_FIX_R4000) },
  { "(!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)",
    MAYBE_EVAL ((!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)) },
  { "(ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)",
    MAYBE_EVAL ((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)) },
  { "TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT\n\
   && (register_operand (operands[0], DFmode)\n\
       || reg_or_0_operand (operands[1], DFmode))",
    MAYBE_EVAL (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))) },
};

const size_t n_insn_conditions = 199;
const int insn_elision_unavailable = 0;
#endif
