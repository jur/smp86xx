/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
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



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_409 (rtx, rtx *);
extern rtx gen_split_410 (rtx, rtx *);
extern rtx gen_split_411 (rtx, rtx *);
extern rtx gen_split_412 (rtx, rtx *);
extern rtx gen_split_413 (rtx, rtx *);
extern rtx gen_peephole2_418 (rtx, rtx *);
extern rtx gen_peephole2_419 (rtx, rtx *);
extern rtx gen_split_420 (rtx, rtx *);
extern rtx gen_split_421 (rtx, rtx *);
extern rtx gen_split_422 (rtx, rtx *);
extern rtx gen_peephole2_423 (rtx, rtx *);
extern rtx gen_peephole2_424 (rtx, rtx *);
extern rtx gen_peephole2_425 (rtx, rtx *);
extern rtx gen_split_426 (rtx, rtx *);
extern rtx gen_split_427 (rtx, rtx *);
extern rtx gen_split_430 (rtx, rtx *);
extern rtx gen_split_431 (rtx, rtx *);
extern rtx gen_split_443 (rtx, rtx *);
extern rtx gen_split_444 (rtx, rtx *);
extern rtx gen_split_445 (rtx, rtx *);
extern rtx gen_split_451 (rtx, rtx *);
extern rtx gen_split_456 (rtx, rtx *);
extern rtx gen_split_457 (rtx, rtx *);
extern rtx gen_split_458 (rtx, rtx *);
extern rtx gen_split_459 (rtx, rtx *);
extern rtx gen_split_460 (rtx, rtx *);
extern rtx gen_split_470 (rtx, rtx *);
extern rtx gen_peephole2_471 (rtx, rtx *);
extern rtx gen_split_472 (rtx, rtx *);
extern rtx gen_split_473 (rtx, rtx *);
extern rtx gen_split_474 (rtx, rtx *);
extern rtx gen_split_475 (rtx, rtx *);
extern rtx gen_split_476 (rtx, rtx *);
extern rtx gen_split_477 (rtx, rtx *);
extern rtx gen_split_478 (rtx, rtx *);
extern rtx gen_split_479 (rtx, rtx *);
extern rtx gen_split_480 (rtx, rtx *);
extern rtx gen_split_482 (rtx, rtx *);
extern rtx gen_split_484 (rtx, rtx *);
extern rtx gen_split_485 (rtx, rtx *);
extern rtx gen_split_489 (rtx, rtx *);
extern rtx gen_split_491 (rtx, rtx *);
extern rtx gen_split_494 (rtx, rtx *);
extern rtx gen_split_495 (rtx, rtx *);
extern rtx gen_split_496 (rtx, rtx *);
extern rtx gen_split_500 (rtx, rtx *);
extern rtx gen_split_508 (rtx, rtx *);
extern rtx gen_split_509 (rtx, rtx *);
extern rtx gen_split_510 (rtx, rtx *);
extern rtx gen_split_511 (rtx, rtx *);
extern rtx gen_split_512 (rtx, rtx *);
extern rtx gen_split_513 (rtx, rtx *);
extern rtx gen_split_514 (rtx, rtx *);
extern rtx gen_split_555 (rtx, rtx *);
extern rtx gen_split_556 (rtx, rtx *);
extern rtx gen_split_560 (rtx, rtx *);
extern rtx gen_split_562 (rtx, rtx *);
extern rtx gen_split_563 (rtx, rtx *);
extern rtx gen_split_569 (rtx, rtx *);
extern rtx gen_split_576 (rtx, rtx *);
extern rtx gen_split_577 (rtx, rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L16;
    case MINUS:
      goto L96;
    case MULT:
      goto L132;
    case NEG:
      goto L916;
    case DIV:
      goto L1021;
    case SQRT:
      goto L1101;
    case ABS:
      goto L1168;
    case FLOAT_TRUNCATE:
      goto L1344;
    case FLOAT:
      goto L1572;
    case MEM:
      goto L1758;
    case IF_THEN_ELSE:
      goto L2781;
    case VEC_SELECT:
      goto L2915;
    case UNSPEC:
      goto L3621;
    default:
     break;
   }
  goto ret0;

 L16: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3626;
  goto ret0;

 L3626: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L869;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L17;
    }
  goto ret0;

 L869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L870;
    }
  goto ret0;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L871;
    }
  goto ret0;

 L871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L872;
    }
  goto ret0;

 L872: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)))
    {
      return 64;  /* *maddsf */
    }
  goto ret0;

 L17: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L18;
    }
  goto ret0;

 L18: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 3;  /* addsf3 */
    }
  goto ret0;

 L96: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3628;
  goto ret0;

 L3628: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L893;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L97;
    }
  goto ret0;

 L893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L3630;
  goto ret0;

 L3630: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L945;
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L894;
    }
  goto ret0;

 L945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L946;
    }
  goto ret0;

 L946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L947;
    }
  goto ret0;

 L947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L948;
    }
  goto ret0;

 L948: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)))
    {
      return 73;  /* *nmaddsf_fastmath */
    }
  goto ret0;

 L894: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L895;
    }
  goto ret0;

 L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L896;
    }
  goto ret0;

 L896: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT)))
    {
      return 67;  /* *msubsf */
    }
  goto ret0;

 L97: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L3632;
  goto ret0;

 L3632: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L999;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L98;
    }
  goto ret0;

 L999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1000;
    }
  goto ret0;

 L1000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L1001;
    }
  goto ret0;

 L1001: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)))
    {
      return 79;  /* *nmsubsf_fastmath */
    }
  goto ret0;

 L98: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 16;  /* subsf3 */
    }
  goto ret0;

 L132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L133;
    }
  goto ret0;

 L133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L134;
    }
  goto ret0;

 L134: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)))
    {
      return 22;  /* *mulsf3 */
    }
 L146: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT)))
    {
      return 24;  /* *mulsf3_r4300 */
    }
  goto ret0;

 L916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3633;
  goto ret0;

 L3633: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L917;
    case MINUS:
      goto L971;
    case REG:
    case SUBREG:
      goto L3635;
    default:
      goto ret0;
   }
 L3635: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1233;
    }
  goto ret0;

 L917: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L918;
  goto ret0;

 L918: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L919;
    }
  goto ret0;

 L919: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L920;
    }
  goto ret0;

 L920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[3] = x3;
      goto L921;
    }
  goto ret0;

 L921: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)))
    {
      return 70;  /* *nmaddsf */
    }
  goto ret0;

 L971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode
      && GET_CODE (x3) == MULT)
    goto L972;
  goto ret0;

 L972: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L973;
    }
  goto ret0;

 L973: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      operands[3] = x4;
      goto L974;
    }
  goto ret0;

 L974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L975;
    }
  goto ret0;

 L975: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT)))
    {
      return 76;  /* *nmsubsf */
    }
  goto ret0;

 L1233: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 112;  /* negsf2 */
    }
  goto ret0;

 L1021: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1022;
    }
  if (const_1_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1040;
    }
  goto ret0;

 L1022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1023;
    }
  goto ret0;

 L1023: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)))
    {
      return 82;  /* *divsf3 */
    }
  goto ret0;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L3637;
  goto ret0;

 L3637: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1118;
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1041;
    }
  goto ret0;

 L1118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1119;
    }
  goto ret0;

 L1119: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)))
    {
      return 95;  /* *rsqrtsfa */
    }
  goto ret0;

 L1041: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)))
    {
      return 85;  /* *recipsf3 */
    }
  goto ret0;

 L1101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SFmode)
    goto L3639;
  goto ret0;

 L3639: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1138;
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1102;
    }
  goto ret0;

 L1138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1139;
    }
  goto ret0;

 L1139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L1140;
    }
  goto ret0;

 L1140: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT)))
    {
      return 98;  /* *rsqrtsfb */
    }
  goto ret0;

 L1102: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_MIPS1) && (TARGET_HARD_FLOAT)))
    {
      return 92;  /* sqrtsf2 */
    }
  goto ret0;

 L1168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1169;
    }
  goto ret0;

 L1169: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 103;  /* abssf2 */
    }
  goto ret0;

 L1344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1345;
    }
  goto ret0;

 L1345: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 131;  /* truncdfsf2 */
    }
  goto ret0;

 L1572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3640;
    case DImode:
      goto L3641;
    default:
      break;
    }
  goto ret0;

 L3640: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1573;
    }
  goto ret0;

 L1573: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 172;  /* floatsisf2 */
    }
  goto ret0;

 L3641: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1578;
    }
  goto ret0;

 L1578: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 173;  /* floatdisf2 */
    }
  goto ret0;

 L1758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3642;
    case DImode:
      goto L3643;
    default:
      break;
    }
  goto ret0;

 L3642: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1759;
  goto ret0;

 L1759: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1760;
    }
  goto ret0;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1761;
    }
  goto ret0;

 L1761: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)))
    {
      return 207;  /* *lwxc1_si */
    }
  goto ret0;

 L3643: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1780;
  goto ret0;

 L1780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1781;
    }
  goto ret0;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1782;
    }
  goto ret0;

 L1782: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)))
    {
      return 210;  /* *lwxc1_di */
    }
  goto ret0;

 L2781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3644;
    case DImode:
      goto L3645;
    case CCmode:
      goto L3646;
    default:
      break;
    }
  goto ret0;

 L3644: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2782;
    }
  goto ret0;

 L2782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2783;
    }
  goto ret0;

 L2783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2784;
  goto ret0;

 L2784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2785;
    }
  goto ret0;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2786;
    }
  goto ret0;

 L2786: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)))
    {
      return 361;  /* *movsf_on_si */
    }
  goto ret0;

 L3645: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2800;
    }
  goto ret0;

 L2800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2801;
    }
  goto ret0;

 L2801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2802;
  goto ret0;

 L2802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2803;
    }
  goto ret0;

 L2803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2804;
    }
  goto ret0;

 L2804: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT)))
    {
      return 363;  /* *movsf_on_di */
    }
  goto ret0;

 L3646: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2818;
    }
  goto ret0;

 L2818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2819;
    }
  goto ret0;

 L2819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2820;
  goto ret0;

 L2820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2821;
    }
  goto ret0;

 L2821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      operands[3] = x2;
      goto L2822;
    }
  goto ret0;

 L2822: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT)))
    {
      return 365;  /* *movsf_on_cc */
    }
  goto ret0;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2916;
    }
  goto ret0;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L2917;
  goto ret0;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (const_0_or_1_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2918;
    }
  goto ret0;

 L2918: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 378;  /* vec_extractv2sf */
    }
  goto ret0;

 L3621: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L3647;
    case 2:
      goto L3648;
    default:
      break;
    }
  goto ret0;

 L3647: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 208LL:
      goto L3033;
    case 210LL:
      goto L3066;
    default:
      break;
    }
  goto ret0;

 L3033: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3034;
    }
  goto ret0;

 L3034: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT)))
    {
      return 394;  /* mips_rsqrt1_s */
    }
  goto ret0;

 L3066: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3067;
    }
  goto ret0;

 L3067: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT)))
    {
      return 400;  /* mips_recip1_s */
    }
  goto ret0;

 L3648: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 209LL:
      goto L3048;
    case 211LL:
      goto L3081;
    default:
      break;
    }
  goto ret0;

 L3048: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3049;
    }
  goto ret0;

 L3049: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3050;
    }
  goto ret0;

 L3050: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT)))
    {
      return 397;  /* mips_rsqrt2_s */
    }
  goto ret0;

 L3081: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3082;
    }
  goto ret0;

 L3082: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3083;
    }
  goto ret0;

 L3083: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT)))
    {
      return 403;  /* mips_recip2_s */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L22;
    case MINUS:
      goto L102;
    case MULT:
      goto L138;
    case NEG:
      goto L925;
    case DIV:
      goto L1027;
    case SQRT:
      goto L1106;
    case ABS:
      goto L1173;
    case FLOAT_EXTEND:
      goto L1511;
    case FLOAT:
      goto L1562;
    case MEM:
      goto L1765;
    case UNSPEC:
      goto L3670;
    case IF_THEN_ELSE:
      goto L2790;
    default:
     break;
   }
  goto ret0;

 L22: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3677;
  goto ret0;

 L3677: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L877;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L23;
    }
  goto ret0;

 L877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L878;
    }
  goto ret0;

 L878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L879;
    }
  goto ret0;

 L879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L880;
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 65;  /* *madddf */
    }
  goto ret0;

 L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L24;
    }
  goto ret0;

 L24: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 4;  /* adddf3 */
    }
  goto ret0;

 L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3679;
  goto ret0;

 L3679: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L901;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L103;
    }
  goto ret0;

 L901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L3681;
  goto ret0;

 L3681: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L954;
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L902;
    }
  goto ret0;

 L954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L955;
    }
  goto ret0;

 L955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L956;
    }
  goto ret0;

 L956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L957;
    }
  goto ret0;

 L957: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 74;  /* *nmadddf_fastmath */
    }
  goto ret0;

 L902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L903;
    }
  goto ret0;

 L903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L904;
    }
  goto ret0;

 L904: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 68;  /* *msubdf */
    }
  goto ret0;

 L103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L3683;
  goto ret0;

 L3683: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1007;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L104;
    }
  goto ret0;

 L1007: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1008;
    }
  goto ret0;

 L1008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L1009;
    }
  goto ret0;

 L1009: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 80;  /* *nmsubdf_fastmath */
    }
  goto ret0;

 L104: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 17;  /* subdf3 */
    }
  goto ret0;

 L138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L139;
    }
  goto ret0;

 L139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L140;
    }
  goto ret0;

 L140: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 23;  /* *muldf3 */
    }
 L152: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_4300_MUL_FIX) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 25;  /* *muldf3_r4300 */
    }
  goto ret0;

 L925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3684;
  goto ret0;

 L3684: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L926;
    case MINUS:
      goto L980;
    case REG:
    case SUBREG:
      goto L3686;
    default:
      goto ret0;
   }
 L3686: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1238;
    }
  goto ret0;

 L926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L927;
  goto ret0;

 L927: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L928;
    }
  goto ret0;

 L928: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L929;
    }
  goto ret0;

 L929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[3] = x3;
      goto L930;
    }
  goto ret0;

 L930: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 71;  /* *nmadddf */
    }
  goto ret0;

 L980: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == MULT)
    goto L981;
  goto ret0;

 L981: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      operands[2] = x4;
      goto L982;
    }
  goto ret0;

 L982: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      operands[3] = x4;
      goto L983;
    }
  goto ret0;

 L983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L984;
    }
  goto ret0;

 L984: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 77;  /* *nmsubdf */
    }
  goto ret0;

 L1238: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 113;  /* negdf2 */
    }
  goto ret0;

 L1027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1028;
    }
  if (const_1_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1046;
    }
  goto ret0;

 L1028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1029;
    }
  goto ret0;

 L1029: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 83;  /* *divdf3 */
    }
  goto ret0;

 L1046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L3688;
  goto ret0;

 L3688: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1125;
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1047;
    }
  goto ret0;

 L1125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1126;
    }
  goto ret0;

 L1126: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 96;  /* *rsqrtdfa */
    }
  goto ret0;

 L1047: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 86;  /* *recipdf3 */
    }
  goto ret0;

 L1106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L3690;
  goto ret0;

 L3690: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1145;
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1107;
    }
  goto ret0;

 L1145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1146;
    }
  goto ret0;

 L1146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L1147;
    }
  goto ret0;

 L1147: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 99;  /* *rsqrtdfb */
    }
  goto ret0;

 L1107: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 93;  /* sqrtdf2 */
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1174;
    }
  goto ret0;

 L1174: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 104;  /* absdf2 */
    }
  goto ret0;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1512;
    }
  goto ret0;

 L1512: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 163;  /* extendsfdf2 */
    }
  goto ret0;

 L1562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3691;
    case DImode:
      goto L3692;
    default:
      break;
    }
  goto ret0;

 L3691: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1563;
    }
  goto ret0;

 L1563: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 170;  /* floatsidf2 */
    }
  goto ret0;

 L3692: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1568;
    }
  goto ret0;

 L1568: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 171;  /* floatdidf2 */
    }
  goto ret0;

 L1765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3693;
    case DImode:
      goto L3694;
    default:
      break;
    }
  goto ret0;

 L3693: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1766;
  goto ret0;

 L1766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1767;
    }
  goto ret0;

 L1767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1768;
    }
  goto ret0;

 L1768: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 208;  /* *ldxc1_si */
    }
  goto ret0;

 L3694: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1787;
  goto ret0;

 L1787: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1788;
    }
  goto ret0;

 L1788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1789;
    }
  goto ret0;

 L1789: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 211;  /* *ldxc1_di */
    }
  goto ret0;

 L3670: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L3695;
    case 2:
      goto L3696;
    default:
      break;
    }
  goto ret0;

 L3695: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 0LL:
      goto L1914;
    case 208LL:
      goto L3038;
    case 210LL:
      goto L3071;
    default:
      break;
    }
  goto ret0;

 L1914: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1915;
    }
  goto ret0;

 L1915: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 235;  /* load_df_low */
    }
  goto ret0;

 L3038: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3039;
    }
  goto ret0;

 L3039: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 395;  /* mips_rsqrt1_d */
    }
  goto ret0;

 L3071: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3072;
    }
  goto ret0;

 L3072: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 401;  /* mips_recip1_d */
    }
  goto ret0;

 L3696: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 1LL:
      goto L1919;
    case 209LL:
      goto L3054;
    case 211LL:
      goto L3087;
    default:
      break;
    }
  goto ret0;

 L1919: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1920;
    }
  goto ret0;

 L1920: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1921;
    }
  goto ret0;

 L1921: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 236;  /* load_df_high */
    }
  goto ret0;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3055;
    }
  goto ret0;

 L3055: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3056;
    }
  goto ret0;

 L3056: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 398;  /* mips_rsqrt2_d */
    }
  goto ret0;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3088;
    }
  goto ret0;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3089;
    }
  goto ret0;

 L3089: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 404;  /* mips_recip2_d */
    }
  goto ret0;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3701;
    case DImode:
      goto L3702;
    case CCmode:
      goto L3703;
    default:
      break;
    }
  goto ret0;

 L3701: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2791;
    }
  goto ret0;

 L2791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2792;
    }
  goto ret0;

 L2792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2793;
  goto ret0;

 L2793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2794;
    }
  goto ret0;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2795;
    }
  goto ret0;

 L2795: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 362;  /* *movdf_on_si */
    }
  goto ret0;

 L3702: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2809;
    }
  goto ret0;

 L2809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2810;
    }
  goto ret0;

 L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2811;
  goto ret0;

 L2811: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2812;
    }
  goto ret0;

 L2812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2813;
    }
  goto ret0;

 L2813: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 364;  /* *movdf_on_di */
    }
  goto ret0;

 L3703: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2827;
    }
  goto ret0;

 L2827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2828;
    }
  goto ret0;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2829;
  goto ret0;

 L2829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2830;
    }
  goto ret0;

 L2830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      operands[3] = x2;
      goto L2831;
    }
  goto ret0;

 L2831: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 366;  /* *movdf_on_cc */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L28;
    case MINUS:
      goto L108;
    case MULT:
      goto L156;
    case NEG:
      goto L934;
    case DIV:
      goto L1033;
    case SQRT:
      goto L1111;
    case ABS:
      goto L1178;
    case MEM:
      goto L1772;
    case IF_THEN_ELSE:
      goto L2844;
    case UNSPEC:
      goto L3727;
    case VEC_MERGE:
      goto L2869;
    case VEC_CONCAT:
      goto L2909;
    default:
     break;
   }
  goto ret0;

 L28: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L3738;
  goto ret0;

 L3738: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L885;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L29;
    }
  goto ret0;

 L885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L886;
    }
  goto ret0;

 L886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L887;
    }
  goto ret0;

 L887: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L888;
    }
  goto ret0;

 L888: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 66;  /* *maddv2sf */
    }
  goto ret0;

 L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L30;
    }
  goto ret0;

 L30: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 5;  /* addv2sf3 */
    }
  goto ret0;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L3740;
  goto ret0;

 L3740: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L909;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L109;
    }
  goto ret0;

 L909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode)
    goto L3742;
  goto ret0;

 L3742: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NEG)
    goto L963;
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L910;
    }
  goto ret0;

 L963: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L964;
    }
  goto ret0;

 L964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L965;
    }
  goto ret0;

 L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L966;
    }
  goto ret0;

 L966: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 75;  /* *nmaddv2sf_fastmath */
    }
  goto ret0;

 L910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L911;
    }
  goto ret0;

 L911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L912;
    }
  goto ret0;

 L912: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_FP4 && TARGET_FUSED_MADD) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 69;  /* *msubv2sf */
    }
  goto ret0;

 L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L3744;
  goto ret0;

 L3744: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L1015;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L110;
    }
  goto ret0;

 L1015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1016;
    }
  goto ret0;

 L1016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L1017;
    }
  goto ret0;

 L1017: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && !HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 81;  /* *nmsubv2sf_fastmath */
    }
  goto ret0;

 L110: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 18;  /* subv2sf3 */
    }
  goto ret0;

 L156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L157;
    }
  goto ret0;

 L157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L158;
    }
  goto ret0;

 L158: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 26;  /* mulv2sf3 */
    }
  goto ret0;

 L934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L3745;
  goto ret0;

 L3745: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L935;
    case MINUS:
      goto L989;
    case REG:
    case SUBREG:
      goto L3747;
    default:
      goto ret0;
   }
 L3747: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1243;
    }
  goto ret0;

 L935: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L936;
  goto ret0;

 L936: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[1] = x4;
      goto L937;
    }
  goto ret0;

 L937: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L938;
    }
  goto ret0;

 L938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[3] = x3;
      goto L939;
    }
  goto ret0;

 L939: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 72;  /* *nmaddv2sf */
    }
  goto ret0;

 L989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SFmode
      && GET_CODE (x3) == MULT)
    goto L990;
  goto ret0;

 L990: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SFmode))
    {
      operands[2] = x4;
      goto L991;
    }
  goto ret0;

 L991: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V2SFmode))
    {
      operands[3] = x4;
      goto L992;
    }
  goto ret0;

 L992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L993;
    }
  goto ret0;

 L993: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_NMADD_NMSUB && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (V2SFmode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 78;  /* *nmsubv2sf */
    }
  goto ret0;

 L1243: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 114;  /* negv2sf2 */
    }
  goto ret0;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1034;
    }
  if (const_1_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1052;
    }
  goto ret0;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1035;
    }
  goto ret0;

 L1035: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 84;  /* *divv2sf3 */
    }
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L3749;
  goto ret0;

 L3749: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SQRT)
    goto L1132;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L1053;
    }
  goto ret0;

 L1132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1133;
    }
  goto ret0;

 L1133: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 97;  /* *rsqrtv2sfa */
    }
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 87;  /* *recipv2sf3 */
    }
  goto ret0;

 L1111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L3751;
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == DIV)
    goto L1152;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1112;
    }
  goto ret0;

 L1152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (const_1_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L1153;
    }
  goto ret0;

 L1153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L1154;
    }
  goto ret0;

 L1154: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SB1 && flag_unsafe_math_optimizations) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 100;  /* *rsqrtv2sfb */
    }
  goto ret0;

 L1112: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SB1) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 94;  /* sqrtv2sf2 */
    }
  goto ret0;

 L1178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L1179;
    }
  goto ret0;

 L1179: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 105;  /* absv2sf2 */
    }
  goto ret0;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3752;
    case DImode:
      goto L3753;
    default:
      break;
    }
  goto ret0;

 L3752: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1773;
  goto ret0;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1774;
    }
  goto ret0;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1775;
    }
  goto ret0;

 L1775: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 209;  /* *ldxc1_si */
    }
  goto ret0;

 L3753: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1794;
  goto ret0;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1795;
    }
  goto ret0;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1796;
    }
  goto ret0;

 L1796: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 212;  /* *ldxc1_di */
    }
  goto ret0;

 L2844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3754;
    case DImode:
      goto L3755;
    default:
      break;
    }
  goto ret0;

 L3754: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2845;
    }
  goto ret0;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2846;
    }
  goto ret0;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2847;
  goto ret0;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2848;
    }
  goto ret0;

 L2848: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L2849;
    }
  goto ret0;

 L2849: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 370;  /* *movcc_v2sf_si */
    }
  goto ret0;

 L3755: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2854;
    }
  goto ret0;

 L2854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2855;
    }
  goto ret0;

 L2855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2856;
  goto ret0;

 L2856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2857;
    }
  goto ret0;

 L2857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L2858;
    }
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_PAIRED_SINGLE_FLOAT) && (TARGET_64BIT)))
    {
      return 371;  /* *movcc_v2sf_di */
    }
  goto ret0;

 L3727: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L3756;
    case 2:
      goto L3758;
    case 1:
      goto L3759;
    default:
      break;
    }
  goto ret0;

 L3756: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 200LL:
      goto L2862;
    case 202LL:
      goto L2922;
    default:
      break;
    }
  goto ret0;

 L2862: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2863;
    }
  goto ret0;

 L2863: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2864;
    }
  goto ret0;

 L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, CCV2mode))
    {
      operands[3] = x2;
      goto L2865;
    }
  goto ret0;

 L2865: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 372;  /* mips_cond_move_tf_ps */
    }
  goto ret0;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2923;
    }
  goto ret0;

 L2923: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2924;
    }
  goto ret0;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2925;
    }
  goto ret0;

 L2925: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 379;  /* mips_alnv_ps */
    }
  goto ret0;

 L3758: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 204LL:
      goto L2929;
    case 207LL:
      goto L2945;
    case 209LL:
      goto L3060;
    case 211LL:
      goto L3093;
    default:
      break;
    }
  goto ret0;

 L2929: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2930;
    }
  goto ret0;

 L2930: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2931;
    }
  goto ret0;

 L2931: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D))
    {
      return 380;  /* mips_addr_ps */
    }
  goto ret0;

 L2945: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2946;
    }
  goto ret0;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2947;
    }
  goto ret0;

 L2947: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D))
    {
      return 383;  /* mips_mulr_ps */
    }
  goto ret0;

 L3060: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3061;
    }
  goto ret0;

 L3061: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3062;
    }
  goto ret0;

 L3062: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 399;  /* mips_rsqrt2_ps */
    }
  goto ret0;

 L3093: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3094;
    }
  goto ret0;

 L3094: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3095;
    }
  goto ret0;

 L3095: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 405;  /* mips_recip2_ps */
    }
  goto ret0;

 L3759: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 205LL:
      goto L2935;
    case 206LL:
      goto L2940;
    case 208LL:
      goto L3043;
    case 210LL:
      goto L3076;
    default:
      break;
    }
  goto ret0;

 L2935: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2936;
    }
  goto ret0;

 L2936: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D))
    {
      return 381;  /* mips_cvt_pw_ps */
    }
  goto ret0;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2941;
    }
  goto ret0;

 L2941: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D))
    {
      return 382;  /* mips_cvt_ps_pw */
    }
  goto ret0;

 L3043: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3044;
    }
  goto ret0;

 L3044: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 396;  /* mips_rsqrt1_ps */
    }
  goto ret0;

 L3076: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3077;
    }
  goto ret0;

 L3077: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 402;  /* mips_recip1_ps */
    }
  goto ret0;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SFmode)
    goto L3767;
  goto ret0;

 L3767: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L2886;
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2870;
    }
  goto ret0;

 L2886: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[1] = x3;
      goto L2887;
    }
  goto ret0;

 L2887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L2888;
  goto ret0;

 L2888: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2889;
  goto ret0;

 L2889: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2890;
  goto ret0;

 L2890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L3769;
  goto ret0;

 L3769: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L2901;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2891;
    }
  goto ret0;

 L2901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L2902;
    }
  goto ret0;

 L2902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L2903;
  goto ret0;

 L2903: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2904;
  goto ret0;

 L2904: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2905;
  goto ret0;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && (TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 376;  /* mips_plu_ps */
    }
  goto ret0;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && (TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 375;  /* mips_pll_ps */
    }
  goto ret0;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SFmode)
    goto L3771;
  goto ret0;

 L3771: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L2877;
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2871;
    }
  goto ret0;

 L2877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SFmode))
    {
      operands[2] = x3;
      goto L2878;
    }
  goto ret0;

 L2878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L2879;
  goto ret0;

 L2879: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2880;
  goto ret0;

 L2880: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2881;
  goto ret0;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && (TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 374;  /* mips_puu_ps */
    }
  goto ret0;

 L2871: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (2)]
      && (TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 373;  /* mips_pul_ps */
    }
  goto ret0;

 L2909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2910;
    }
  goto ret0;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2911;
    }
  goto ret0;

 L2911: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 377;  /* vec_initv2sf_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L58;
    case MINUS:
      goto L114;
    case MULT:
      goto L173;
    case NEG:
      goto L449;
    case TRUNCATE:
      goto L640;
    case ABS:
      goto L1158;
    case FFS:
      goto L1193;
    case CLZ:
      goto L1213;
    case NOT:
      goto L1247;
    case AND:
      goto L1256;
    case IOR:
      goto L1280;
    case XOR:
      goto L1304;
    case SIGN_EXTEND:
      goto L1377;
    case ZERO_EXTEND:
      goto L1389;
    case FIX:
      goto L1516;
    case UNSPEC:
      goto L3812;
    case HIGH:
      goto L1648;
    case LO_SUM:
      goto L1658;
    case ASHIFT:
      goto L1938;
    case ASHIFTRT:
      goto L1944;
    case LSHIFTRT:
      goto L1950;
    case ROTATERT:
      goto L2037;
    case EQ:
      goto L2162;
    case NE:
      goto L2182;
    case GT:
      goto L2192;
    case GE:
      goto L2216;
    case LT:
      goto L2226;
    case LE:
      goto L2250;
    case GTU:
      goto L2274;
    case GEU:
      goto L2298;
    case LTU:
      goto L2308;
    case LEU:
      goto L2332;
    case IF_THEN_ELSE:
      goto L2727;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L3793;
    default:
      goto ret0;
   }
 L3793: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1670;
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3817;
  goto ret0;

 L3817: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L3820;
    case MULT:
      goto L276;
    default:
     break;
   }
 L3818: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L71;
    }
  goto ret0;

 L3820: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 29)
    goto L59;
  goto L3818;

 L59: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L60;
    }
  x2 = XEXP (x1, 0);
  goto L3818;

 L60: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 10;  /* *addsi3_sp2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3818;

 L276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L277;
    }
  goto ret0;

 L277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L278;
    }
  goto ret0;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L279;
    }
 L844: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_MAD)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 61;  /* madsi */
    }
  goto ret0;

 L279: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 33;  /* *mul_acc_si */
    }
 L300: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 34;  /* *macc */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L844;

 L71: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L72;
    }
  goto ret0;

 L72: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 12;  /* *addsi3_mips16 */
    }
  goto ret0;

 L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L115;
    }
  goto ret0;

 L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L3822;
  goto ret0;

 L3822: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L319;
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      return 19;  /* subsi3 */
    }
  goto ret0;

 L319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L320;
    }
  goto ret0;

 L320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L321;
    }
  goto ret0;

 L321: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 35;  /* *msac */
    }
 L344: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC && !ISA_HAS_MSAC)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 36;  /* *msac_using_macc */
    }
 L433: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MADD_MSUB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 39;  /* *mul_sub_si */
    }
  goto ret0;

 L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L174;
    }
  goto ret0;

 L174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L175;
    }
  goto ret0;

 L175: ATTRIBUTE_UNUSED_LABEL
  if ((GENERATE_MULT3_SI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 27;  /* mulsi3_mult3 */
    }
 L207: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 29;  /* mulsi3_internal */
    }
 L239: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 31;  /* mulsi3_r4000 */
    }
  goto ret0;

 L449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3823;
  goto ret0;

 L3823: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L450;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 110;  /* negsi2 */
    }
  goto ret0;

 L450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L451;
    }
  goto ret0;

 L451: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L452;
    }
  goto ret0;

 L452: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 40;  /* *muls */
    }
  goto ret0;

 L640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3825;
  goto ret0;

 L3825: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LSHIFTRT:
      goto L641;
    case ASHIFTRT:
      goto L1365;
    default:
     break;
   }
  goto ret0;

 L641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3827;
  goto ret0;

 L3827: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L642;
    case NEG:
      goto L745;
    case REG:
    case SUBREG:
      goto L3829;
    default:
      goto ret0;
   }
 L3829: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1373;
    }
  goto ret0;

 L642: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L3830;
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L643;
    case ZERO_EXTEND:
      goto L667;
    default:
     break;
   }
  goto ret0;

 L643: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L644;
    }
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L645;
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L646;
    }
  goto ret0;

 L646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3832;
  goto ret0;

 L3832: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL)
    goto L3834;
  goto ret0;

 L3834: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 53;  /* smulsi3_highpart_internal */
    }
 L3835: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 55;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L667: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L668;
    }
  goto ret0;

 L668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L669;
  goto ret0;

 L669: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L670;
    }
  goto ret0;

 L670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L3836;
  goto ret0;

 L3836: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 32LL)
    goto L3838;
  goto ret0;

 L3838: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 54;  /* umulsi3_highpart_internal */
    }
 L3839: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 56;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L745: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L746;
  goto ret0;

 L746: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L3840;
  goto ret0;

 L3840: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L747;
    case ZERO_EXTEND:
      goto L775;
    default:
     break;
   }
  goto ret0;

 L747: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L748;
    }
  goto ret0;

 L748: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L749;
  goto ret0;

 L749: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L750;
    }
  goto ret0;

 L750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && (ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 57;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L775: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L776;
    }
  goto ret0;

 L776: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L777;
  goto ret0;

 L777: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L778;
    }
  goto ret0;

 L778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && (ISA_HAS_MULHI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 58;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && (TARGET_64BIT && !TARGET_MIPS16))
    {
      return 136;  /* *mips.md:2201 */
    }
  goto ret0;

 L1365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1366;
    }
  goto ret0;

 L1366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_arith_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1367;
    }
  goto ret0;

 L1367: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) >= 32))
    {
      return 135;  /* *mips.md:2191 */
    }
  goto ret0;

 L1158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1159;
    }
  goto ret0;

 L1159: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 101;  /* abssi2 */
    }
  goto ret0;

 L1193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1194;
    }
  goto ret0;

 L1194: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 106;  /* ffssi2 */
    }
  goto ret0;

 L1213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1214;
    }
  goto ret0;

 L1214: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CLZ_CLO))
    {
      return 108;  /* clzsi2 */
    }
  goto ret0;

 L1247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 115;  /* one_cmplsi2 */
    }
  goto ret0;

 L1256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3843;
  goto ret0;

 L3843: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1329;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1257;
    }
  goto ret0;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1330;
    }
  goto ret0;

 L1330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1331;
  goto ret0;

 L1331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1332;
    }
  goto ret0;

 L1332: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 129;  /* *norsi3 */
    }
  goto ret0;

 L1257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1258;
    }
 L1269: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1270;
    }
  goto ret0;

 L1258: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 117;  /* *andsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1269;

 L1270: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 119;  /* *andsi3_mips16 */
    }
  goto ret0;

 L1280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1281;
    }
  goto ret0;

 L1281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1282;
    }
 L1293: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1294;
    }
  goto ret0;

 L1282: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 121;  /* *iorsi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1293;

 L1294: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 123;  /* *iorsi3_mips16 */
    }
  goto ret0;

 L1304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1305;
    }
  goto ret0;

 L1305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1306;
    }
  goto ret0;

 L1306: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 125;  /* *mips.md:2088 */
    }
 L1318: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 127;  /* *mips.md:2099 */
    }
  goto ret0;

 L1377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3844;
    case QImode:
      goto L3845;
    default:
      break;
    }
  goto ret0;

 L3844: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1378;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1478;
    }
  goto ret0;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1379;
    }
  goto ret0;

 L1379: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 137;  /* *mips.md:2214 */
    }
  goto ret0;

 L1478: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_SEB_SEH))
    {
      return 156;  /* *extendhisi2 */
    }
 L1498: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_SEB_SEH))
    {
      return 160;  /* *extendhisi2_seh */
    }
  goto ret0;

 L3845: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1384;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1468;
    }
  goto ret0;

 L1384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1385;
    }
  goto ret0;

 L1385: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 138;  /* *mips.md:2229 */
    }
  goto ret0;

 L1468: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_SEB_SEH))
    {
      return 154;  /* *extendqisi2 */
    }
 L1488: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_SEB_SEH))
    {
      return 158;  /* *extendqisi2_seb */
    }
  goto ret0;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L3848;
    case QImode:
      goto L3849;
    default:
      break;
    }
  goto ret0;

 L3848: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1390;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1423;
    }
 L3853: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1443;
    }
  goto ret0;

 L1390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1391;
    }
  goto ret0;

 L1391: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 139;  /* *mips.md:2247 */
    }
  goto ret0;

 L1423: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 145;  /* *zero_extendhisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3853;

 L1443: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 149;  /* *zero_extendhisi2_mips16 */
    }
  goto ret0;

 L3849: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1396;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1413;
    }
 L3852: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1433;
    }
  goto ret0;

 L1396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1397;
    }
  goto ret0;

 L1397: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 140;  /* *mips.md:2256 */
    }
  goto ret0;

 L1413: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 143;  /* *zero_extendqisi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3852;

 L1433: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 147;  /* *zero_extendqisi2_mips16 */
    }
  goto ret0;

 L1516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3854;
    case SFmode:
      goto L3855;
    default:
      break;
    }
  goto ret0;

 L3854: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1517;
    }
  goto ret0;

 L1517: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 164;  /* fix_truncdfsi2_insn */
    }
 L1530: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 165;  /* fix_truncdfsi2_macro */
    }
  goto ret0;

 L3855: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1535;
    }
  goto ret0;

 L1535: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W))
    {
      return 166;  /* fix_truncsfsi2_insn */
    }
 L1548: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 167;  /* fix_truncsfsi2_macro */
    }
  goto ret0;

 L3812: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3856;
    case 3:
      goto L3857;
    default:
      break;
    }
  goto ret0;

 L3856: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18LL:
      goto L1582;
    case 24LL:
      goto L1688;
    case 26LL:
      goto L1890;
    default:
      break;
    }
  goto ret0;

 L1582: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1583;
    }
  goto ret0;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1584;
    }
  goto ret0;

 L1584: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 174;  /* mov_lwl */
    }
  goto ret0;

 L1688: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1689;
    }
  goto ret0;

 L1689: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1690;
    }
  goto ret0;

 L1690: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ABICALLS) && (Pmode == SImode)))
    {
      return 192;  /* *load_gotsi */
    }
  goto ret0;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1891;
    }
  goto ret0;

 L1891: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1892;
    }
  goto ret0;

 L1892: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MACCHI))
    {
      return 231;  /* *mfhilo_si */
    }
 L1904: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACCHI))
    {
      return 233;  /* *mfhilo_si_macc */
    }
  goto ret0;

 L3857: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19LL:
      goto L1594;
    case 23LL:
      goto L2551;
    default:
      break;
    }
  goto ret0;

 L1594: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1595;
    }
  goto ret0;

 L1595: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1596;
    }
  goto ret0;

 L1596: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1597;
    }
  goto ret0;

 L1597: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1])))
    {
      return 176;  /* mov_lwr */
    }
  goto ret0;

 L2551: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2552;
    }
  goto ret0;

 L2552: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2553;
    }
  goto ret0;

 L2553: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && ((TARGET_ABICALLS) && (Pmode == SImode)))
    {
      return 339;  /* load_callsi */
    }
  goto ret0;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3861;
  goto ret0;

 L3861: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1649;
    }
 L3862: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1679;
    }
  goto ret0;

 L1649: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)))
    {
      return 184;  /* *xgot_hisi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3862;

 L1679: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)))
    {
      return 190;  /* *got_pagesi */
    }
  goto ret0;

 L1658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1659;
    }
  goto ret0;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1660;
    }
 L1701: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1702;
    }
  goto ret0;

 L1660: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)))
    {
      return 186;  /* *xgot_losi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1701;

 L1702: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (Pmode == SImode)))
    {
      return 194;  /* *lowsi */
    }
 L1714: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (Pmode == SImode)))
    {
      return 196;  /* *lowsi_mips16 */
    }
  goto ret0;

 L1938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1939;
    }
  goto ret0;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1940;
    }
  goto ret0;

 L1940: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 241;  /* *ashlsi3 */
    }
 L1997: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 250;  /* *ashlsi3_mips16 */
    }
  goto ret0;

 L1944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1945;
    }
  goto ret0;

 L1945: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1946;
    }
  goto ret0;

 L1946: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 242;  /* *ashrsi3 */
    }
 L2003: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 251;  /* *ashrsi3_mips16 */
    }
  goto ret0;

 L1950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L3863;
  goto ret0;

 L3863: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1951;
    }
 L3864: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2032;
    }
  goto ret0;

 L1951: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1952;
    }
  x2 = XEXP (x1, 0);
  goto L3864;

 L1952: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 243;  /* *lshrsi3 */
    }
 L2009: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 252;  /* *lshrsi3_mips16 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3864;

 L2032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2033;
    }
  goto ret0;

 L2033: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 256;  /* *mips.md:4061 */
    }
  goto ret0;

 L2037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2038;
    }
  goto ret0;

 L2038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2039;
    }
  goto ret0;

 L2039: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_ROTR_SI))
    {
      return 257;  /* rotrsi3 */
    }
  goto ret0;

 L2162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2163;
    }
  goto ret0;

 L2163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3865;
  goto ret0;

 L3865: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL)
    goto L3867;
  goto ret0;

 L3867: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 271;  /* *seq_si */
    }
 L3868: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 273;  /* *seq_si_mips16 */
    }
  goto ret0;

 L2182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2183;
    }
  goto ret0;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (!TARGET_MIPS16))
    {
      return 275;  /* *sne_si */
    }
  goto ret0;

 L2192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2193;
    }
  goto ret0;

 L2193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2194;
    }
 L2205: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2206;
    }
  goto ret0;

 L2194: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 277;  /* *sgt_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2205;

 L2206: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 279;  /* *sgt_si_mips16 */
    }
  goto ret0;

 L2216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2217;
    }
  goto ret0;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (!TARGET_MIPS16))
    {
      return 281;  /* *sge_si */
    }
  goto ret0;

 L2226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2227;
    }
  goto ret0;

 L2227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2228;
    }
  goto ret0;

 L2228: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 283;  /* *slt_si */
    }
 L2240: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 285;  /* *slt_si_mips16 */
    }
  goto ret0;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2251;
    }
  goto ret0;

 L2251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2252;
    }
  goto ret0;

 L2252: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 287;  /* *sle_si */
    }
 L2264: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 289;  /* *sle_si_mips16 */
    }
  goto ret0;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2275;
    }
  goto ret0;

 L2275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2276;
    }
 L2287: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2288;
    }
  goto ret0;

 L2276: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 291;  /* *sgtu_si */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2287;

 L2288: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 293;  /* *sgtu_si_mips16 */
    }
  goto ret0;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2299;
    }
  goto ret0;

 L2299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && (!TARGET_MIPS16))
    {
      return 295;  /* *sge_si */
    }
  goto ret0;

 L2308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2309;
    }
  goto ret0;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2310;
    }
  goto ret0;

 L2310: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 297;  /* *sltu_si */
    }
 L2322: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 299;  /* *sltu_si_mips16 */
    }
  goto ret0;

 L2332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2333;
    }
  goto ret0;

 L2333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sleu_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2334;
    }
  goto ret0;

 L2334: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 301;  /* *sleu_si */
    }
 L2346: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 303;  /* *sleu_si_mips16 */
    }
  goto ret0;

 L2727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3869;
    case DImode:
      goto L3870;
    case CCmode:
      goto L3871;
    default:
      break;
    }
  goto ret0;

 L3869: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2728;
    }
  goto ret0;

 L2728: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2729;
    }
  goto ret0;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2730;
  goto ret0;

 L2730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2731;
    }
  goto ret0;

 L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2732;
    }
  goto ret0;

 L2732: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_CONDMOVE))
    {
      return 355;  /* *movsi_on_si */
    }
  goto ret0;

 L3870: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2746;
    }
  goto ret0;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2747;
    }
  goto ret0;

 L2747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2748;
  goto ret0;

 L2748: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2749;
    }
  goto ret0;

 L2749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2750;
    }
  goto ret0;

 L2750: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE) && (TARGET_64BIT)))
    {
      return 357;  /* *movsi_on_di */
    }
  goto ret0;

 L3871: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2764;
    }
  goto ret0;

 L2764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2765;
    }
  goto ret0;

 L2765: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2766;
  goto ret0;

 L2766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2767;
    }
  goto ret0;

 L2767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2768;
    }
  goto ret0;

 L2768: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)))
    {
      return 359;  /* *movsi_on_cc */
    }
  goto ret0;

 L1670: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)))
    {
      return 188;  /* *got_dispsi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L64;
    case SIGN_EXTEND:
      goto L82;
    case MINUS:
      goto L119;
    case MULT:
      goto L190;
    case NEG:
      goto L588;
    case TRUNCATE:
      goto L796;
    case ABS:
      goto L1163;
    case FFS:
      goto L1208;
    case CLZ:
      goto L1218;
    case NOT:
      goto L1251;
    case AND:
      goto L1262;
    case IOR:
      goto L1286;
    case XOR:
      goto L1310;
    case ZERO_EXTEND:
      goto L1407;
    case FIX:
      goto L1552;
    case UNSPEC:
      goto L3914;
    case HIGH:
      goto L1632;
    case LO_SUM:
      goto L1664;
    case ASHIFT:
      goto L1956;
    case ASHIFTRT:
      goto L1962;
    case LSHIFTRT:
      goto L1968;
    case ROTATERT:
      goto L2043;
    case EQ:
      goto L2167;
    case NE:
      goto L2187;
    case GT:
      goto L2198;
    case GE:
      goto L2221;
    case LT:
      goto L2232;
    case LE:
      goto L2256;
    case GTU:
      goto L2280;
    case GEU:
      goto L2303;
    case LTU:
      goto L2314;
    case LEU:
      goto L2338;
    case IF_THEN_ELSE:
      goto L2736;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L3893;
    default:
      goto L3895;
   }
 L3893: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1644;
    }
 L3895: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1674;
    }
  goto ret0;

 L64: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3919;
  goto ret0;

 L3919: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L3922;
    case MULT:
      goto L849;
    default:
     break;
   }
 L3920: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L77;
    }
  goto ret0;

 L3922: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 29)
    goto L65;
  goto L3920;

 L65: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L66;
    }
  x2 = XEXP (x1, 0);
  goto L3920;

 L66: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 11;  /* *adddi3_sp2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3920;

 L849: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3923;
  goto ret0;

 L3923: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L850;
    case ZERO_EXTEND:
      goto L860;
    default:
     break;
   }
  goto ret0;

 L850: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L851;
    }
  goto ret0;

 L851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L852;
  goto ret0;

 L852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L853;
    }
  goto ret0;

 L853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L854;
    }
  goto ret0;

 L854: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT))
    {
      return 62;  /* *smul_acc_di */
    }
  goto ret0;

 L860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L861;
    }
  goto ret0;

 L861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L862;
  goto ret0;

 L862: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L863;
    }
  goto ret0;

 L863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L864;
    }
  goto ret0;

 L864: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MAD || ISA_HAS_MACC)
   && !TARGET_64BIT))
    {
      return 63;  /* *umul_acc_di */
    }
  goto ret0;

 L77: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L78;
    }
  goto ret0;

 L78: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 13;  /* *adddi3_mips16 */
    }
  goto ret0;

 L82: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3925;
    case QImode:
      goto L3928;
    case HImode:
      goto L3929;
    default:
      break;
    }
  goto ret0;

 L3925: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L83;
    case MINUS:
      goto L126;
    case ASHIFT:
      goto L1975;
    case ASHIFTRT:
      goto L1982;
    case LSHIFTRT:
      goto L1989;
    case REG:
    case SUBREG:
    case MEM:
      goto L3927;
    default:
      goto ret0;
   }
 L3927: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1463;
    }
  goto ret0;

 L83: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L84;
    }
  goto ret0;

 L84: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L85;
    }
  goto ret0;

 L85: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 14;  /* *addsi3_extended */
    }
 L92: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 15;  /* *addsi3_extended_mips16 */
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L127;
    }
  goto ret0;

 L127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L128;
    }
  goto ret0;

 L128: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 21;  /* *subsi3_extended */
    }
  goto ret0;

 L1975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1976;
    }
  goto ret0;

 L1976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1977;
    }
  goto ret0;

 L1977: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 247;  /* *ashlsi3_extend */
    }
  goto ret0;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1983;
    }
  goto ret0;

 L1983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1984;
    }
  goto ret0;

 L1984: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 248;  /* *ashrsi3_extend */
    }
  goto ret0;

 L1989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1990;
    }
  goto ret0;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1991;
    }
  goto ret0;

 L1991: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 249;  /* *lshrsi3_extend */
    }
  goto ret0;

 L1463: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 153;  /* extendsidi2 */
    }
  goto ret0;

 L3928: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1473;
    }
  goto ret0;

 L1473: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_HAS_SEB_SEH) && (TARGET_64BIT)))
    {
      return 155;  /* *extendqidi2 */
    }
 L1493: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_SEB_SEH) && (TARGET_64BIT)))
    {
      return 159;  /* *extendqidi2_seb */
    }
  goto ret0;

 L3929: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1483;
    }
  goto ret0;

 L1483: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_HAS_SEB_SEH) && (TARGET_64BIT)))
    {
      return 157;  /* *extendhidi2 */
    }
 L1503: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_SEB_SEH) && (TARGET_64BIT)))
    {
      return 161;  /* *extendhidi2_seh */
    }
  goto ret0;

 L119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3933;
  goto ret0;

 L3933: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L120;
    }
 L3934: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L607;
    }
  goto ret0;

 L120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L121;
    }
  x2 = XEXP (x1, 0);
  goto L3934;

 L121: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 20;  /* subdi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3934;

 L607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L608;
  goto ret0;

 L608: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3935;
  goto ret0;

 L3935: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L609;
    case ZERO_EXTEND:
      goto L619;
    default:
     break;
   }
  goto ret0;

 L609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L610;
    }
  goto ret0;

 L610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L611;
  goto ret0;

 L611: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L612;
    }
  goto ret0;

 L612: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MSAC))
    {
      return 51;  /* *msac_di */
    }
  goto ret0;

 L619: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L620;
    }
  goto ret0;

 L620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L621;
  goto ret0;

 L621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L622;
    }
  goto ret0;

 L622: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MSAC))
    {
      return 52;  /* *msacu_di */
    }
  goto ret0;

 L190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3938;
  goto ret0;

 L3938: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L457;
    case ZERO_EXTEND:
      goto L465;
    case REG:
    case SUBREG:
      goto L3937;
    default:
      goto ret0;
   }
 L3937: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L191;
    }
  goto ret0;

 L457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L458;
    }
  goto ret0;

 L458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L459;
  goto ret0;

 L459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L460;
    }
  goto ret0;

 L460: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 41;  /* mulsidi3_32bit_internal */
    }
 L487: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 43;  /* mulsidi3_32bit_r4000 */
    }
 L529: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 45;  /* *mulsidi3_64bit */
    }
  goto ret0;

 L465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L466;
    }
  goto ret0;

 L466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L467;
  goto ret0;

 L467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L468;
    }
  goto ret0;

 L468: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 42;  /* umulsidi3_32bit_internal */
    }
 L506: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 44;  /* umulsidi3_32bit_r4000 */
    }
 L552: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 46;  /* *umulsidi3_64bit */
    }
  goto ret0;

 L191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L192;
    }
  goto ret0;

 L192: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && GENERATE_MULT3_DI)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 28;  /* muldi3_mult3 */
    }
 L222: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_FIX_R4000) && (TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 30;  /* muldi3_internal */
    }
 L256: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_FIX_R4000) && (TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 32;  /* muldi3_r4000 */
    }
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3940;
  goto ret0;

 L3940: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L589;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1228;
    }
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L3942;
  goto ret0;

 L3942: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L590;
    case ZERO_EXTEND:
      goto L599;
    default:
     break;
   }
  goto ret0;

 L590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L591;
    }
  goto ret0;

 L591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L592;
  goto ret0;

 L592: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L593;
    }
  goto ret0;

 L593: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 49;  /* *muls_di */
    }
  goto ret0;

 L599: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L600;
    }
  goto ret0;

 L600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L601;
  goto ret0;

 L601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L602;
    }
  goto ret0;

 L602: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && ISA_HAS_MULS))
    {
      return 50;  /* *mulsu_di */
    }
  goto ret0;

 L1228: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 111;  /* negdi2 */
    }
  goto ret0;

 L796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L797;
  goto ret0;

 L797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == MULT)
    goto L798;
  goto ret0;

 L798: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode)
    goto L3944;
  goto ret0;

 L3944: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L799;
    case ZERO_EXTEND:
      goto L823;
    default:
     break;
   }
  goto ret0;

 L799: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L800;
    }
  goto ret0;

 L800: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L801;
  goto ret0;

 L801: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L802;
    }
  goto ret0;

 L802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && (TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 59;  /* smuldi3_highpart */
    }
  goto ret0;

 L823: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[1] = x5;
      goto L824;
    }
  goto ret0;

 L824: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L825;
  goto ret0;

 L825: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, DImode))
    {
      operands[2] = x5;
      goto L826;
    }
  goto ret0;

 L826: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (64)]
      && (TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 60;  /* umuldi3_highpart */
    }
  goto ret0;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1164;
    }
  goto ret0;

 L1164: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 102;  /* absdi2 */
    }
  goto ret0;

 L1208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1209;
    }
  goto ret0;

 L1209: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 107;  /* ffsdi2 */
    }
  goto ret0;

 L1218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1219;
    }
  goto ret0;

 L1219: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CLZ_CLO) && (TARGET_64BIT)))
    {
      return 109;  /* clzdi2 */
    }
  goto ret0;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1252;
    }
  goto ret0;

 L1252: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 116;  /* one_cmpldi2 */
    }
  goto ret0;

 L1262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3947;
  goto ret0;

 L3947: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L1337;
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1263;
    }
  goto ret0;

 L1337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1338;
    }
  goto ret0;

 L1338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NOT)
    goto L1339;
  goto ret0;

 L1339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1340;
    }
  goto ret0;

 L1340: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 130;  /* *nordi3 */
    }
  goto ret0;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1264;
    }
 L1275: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1276;
    }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 118;  /* *anddi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1275;

 L1276: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 120;  /* *anddi3_mips16 */
    }
  goto ret0;

 L1286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1287;
    }
  goto ret0;

 L1287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1288;
    }
 L1299: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1300;
    }
  goto ret0;

 L1288: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 122;  /* *iordi3 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1299;

 L1300: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 124;  /* *iordi3_mips16 */
    }
  goto ret0;

 L1310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1311;
    }
  goto ret0;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1312;
    }
  goto ret0;

 L1312: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 126;  /* *mips.md:2088 */
    }
 L1324: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 128;  /* *mips.md:2099 */
    }
  goto ret0;

 L1407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3948;
    case QImode:
      goto L3949;
    case HImode:
      goto L3950;
    default:
      break;
    }
  goto ret0;

 L3948: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1408;
    }
  goto ret0;

 L1408: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 142;  /* zero_extendsidi2 */
    }
  goto ret0;

 L3949: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1418;
    }
 L3951: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1438;
    }
  goto ret0;

 L1418: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 144;  /* *zero_extendqidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3951;

 L1438: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 148;  /* *zero_extendqidi2_mips16 */
    }
  goto ret0;

 L3950: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1428;
    }
 L3952: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1448;
    }
  goto ret0;

 L1428: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 146;  /* *zero_extendhidi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3952;

 L1448: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 150;  /* *zero_extendhidi2_mips16 */
    }
  goto ret0;

 L1552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DFmode:
      goto L3953;
    case SFmode:
      goto L3954;
    default:
      break;
    }
  goto ret0;

 L3953: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1553;
    }
  goto ret0;

 L1553: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 168;  /* fix_truncdfdi2 */
    }
  goto ret0;

 L3954: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L1558;
    }
  goto ret0;

 L1558: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT))
    {
      return 169;  /* fix_truncsfdi2 */
    }
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3955;
    case 3:
      goto L3956;
    default:
      break;
    }
  goto ret0;

 L3955: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 18LL:
      goto L1588;
    case 24LL:
      goto L1694;
    case 26LL:
      goto L1896;
    default:
      break;
    }
  goto ret0;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1589;
    }
  goto ret0;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1590;
    }
  goto ret0;

 L1590: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)))
    {
      return 175;  /* mov_ldl */
    }
  goto ret0;

 L1694: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1695;
    }
  goto ret0;

 L1695: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1696;
    }
  goto ret0;

 L1696: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ABICALLS) && (Pmode == DImode)))
    {
      return 193;  /* *load_gotdi */
    }
  goto ret0;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1897;
    }
  goto ret0;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1898;
    }
  goto ret0;

 L1898: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_HAS_MACCHI) && (TARGET_64BIT)))
    {
      return 232;  /* *mfhilo_di */
    }
 L1910: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_MACCHI) && (TARGET_64BIT)))
    {
      return 234;  /* *mfhilo_di_macc */
    }
  goto ret0;

 L3956: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 19LL:
      goto L1601;
    case 23LL:
      goto L2557;
    default:
      break;
    }
  goto ret0;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L1602;
    }
  goto ret0;

 L1602: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1603;
    }
  goto ret0;

 L1603: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1604;
    }
  goto ret0;

 L1604: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT)))
    {
      return 177;  /* mov_ldr */
    }
  goto ret0;

 L2557: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2558;
    }
  goto ret0;

 L2558: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2559;
    }
  goto ret0;

 L2559: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 79
      && ((TARGET_ABICALLS) && (Pmode == DImode)))
    {
      return 340;  /* load_calldi */
    }
  goto ret0;

 L1632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L3960;
  goto ret0;

 L3960: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1633;
    }
 L3961: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1654;
    }
 L3962: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1684;
    }
  goto ret0;

 L1633: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      return 182;  /* *lea_high64 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3961;

 L1654: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)))
    {
      return 185;  /* *xgot_hidi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3962;

 L1684: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)))
    {
      return 191;  /* *got_pagedi */
    }
  goto ret0;

 L1664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1665;
    }
  goto ret0;

 L1665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1666;
    }
 L1707: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1708;
    }
  goto ret0;

 L1666: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)))
    {
      return 187;  /* *xgot_lodi */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L1707;

 L1708: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (Pmode == DImode)))
    {
      return 195;  /* *lowdi */
    }
 L1720: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (Pmode == DImode)))
    {
      return 197;  /* *lowdi_mips16 */
    }
  goto ret0;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1957;
    }
  goto ret0;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1958;
    }
  goto ret0;

 L1958: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 244;  /* *ashldi3 */
    }
 L2015: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 253;  /* *ashldi3_mips16 */
    }
  goto ret0;

 L1962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1963;
    }
  goto ret0;

 L1963: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1964;
    }
  goto ret0;

 L1964: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 245;  /* *ashrdi3 */
    }
 L2021: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 254;  /* *ashrdi3_mips16 */
    }
  goto ret0;

 L1968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1969;
    }
  goto ret0;

 L1969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1970;
    }
  goto ret0;

 L1970: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 246;  /* *lshrdi3 */
    }
 L2027: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16))
    {
      return 255;  /* *lshrdi3_mips16 */
    }
  goto ret0;

 L2043: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2044;
    }
  goto ret0;

 L2044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2045;
    }
  goto ret0;

 L2045: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_ROTR_DI) && (TARGET_64BIT)))
    {
      return 258;  /* rotrdi3 */
    }
  goto ret0;

 L2167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2168;
    }
  goto ret0;

 L2168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L3963;
  goto ret0;

 L3963: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == 0LL)
    goto L3965;
  goto ret0;

 L3965: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 272;  /* *seq_di */
    }
 L3966: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 274;  /* *seq_di_mips16 */
    }
  goto ret0;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2188;
    }
  goto ret0;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && ((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 276;  /* *sne_di */
    }
  goto ret0;

 L2198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2199;
    }
  goto ret0;

 L2199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2200;
    }
 L2211: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2212;
    }
  goto ret0;

 L2200: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 278;  /* *sgt_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2211;

 L2212: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 280;  /* *sgt_di_mips16 */
    }
  goto ret0;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2222;
    }
  goto ret0;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && ((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 282;  /* *sge_di */
    }
  goto ret0;

 L2232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2233;
    }
  goto ret0;

 L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2234;
    }
  goto ret0;

 L2234: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 284;  /* *slt_di */
    }
 L2246: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 286;  /* *slt_di_mips16 */
    }
  goto ret0;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2257;
    }
  goto ret0;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sle_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2258;
    }
  goto ret0;

 L2258: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 288;  /* *sle_di */
    }
 L2270: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 290;  /* *sle_di_mips16 */
    }
  goto ret0;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2281;
    }
  goto ret0;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2282;
    }
 L2293: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2294;
    }
  goto ret0;

 L2282: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 292;  /* *sgtu_di */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2293;

 L2294: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 294;  /* *sgtu_di_mips16 */
    }
  goto ret0;

 L2303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2304;
    }
  goto ret0;

 L2304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (1)]
      && ((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 296;  /* *sge_di */
    }
  goto ret0;

 L2314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2315;
    }
  goto ret0;

 L2315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2316;
    }
  goto ret0;

 L2316: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 298;  /* *sltu_di */
    }
 L2328: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 300;  /* *sltu_di_mips16 */
    }
  goto ret0;

 L2338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2339;
    }
  goto ret0;

 L2339: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (sleu_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2340;
    }
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 302;  /* *sleu_di */
    }
 L2352: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 304;  /* *sleu_di_mips16 */
    }
  goto ret0;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3967;
    case DImode:
      goto L3968;
    case CCmode:
      goto L3969;
    default:
      break;
    }
  goto ret0;

 L3967: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2737;
    }
  goto ret0;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2738;
    }
  goto ret0;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2739;
  goto ret0;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2740;
    }
  goto ret0;

 L2740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2741;
    }
  goto ret0;

 L2741: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_CONDMOVE) && (TARGET_64BIT)))
    {
      return 356;  /* *movdi_on_si */
    }
  goto ret0;

 L3968: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[4] = x2;
      goto L2755;
    }
  goto ret0;

 L2755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2756;
    }
  goto ret0;

 L2756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2757;
  goto ret0;

 L2757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2758;
    }
  goto ret0;

 L2758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2759;
    }
  goto ret0;

 L2759: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_CONDMOVE) && (TARGET_64BIT)) && (TARGET_64BIT)))
    {
      return 358;  /* *movdi_on_di */
    }
  goto ret0;

 L3969: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, CCmode))
    {
      operands[4] = x2;
      goto L2773;
    }
  goto ret0;

 L2773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[1] = x3;
      goto L2774;
    }
  goto ret0;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2775;
  goto ret0;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L2776;
    }
  goto ret0;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L2777;
    }
  goto ret0;

 L2777: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT)) && (TARGET_64BIT)))
    {
      return 360;  /* *movdi_on_cc */
    }
  goto ret0;

 L1644: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 183;  /* *lea64 */
    }
  x1 = XEXP (x0, 1);
  goto L3895;

 L1674: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)))
    {
      return 189;  /* *got_dispdi */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case UNORDERED:
      goto L2356;
    case UNEQ:
      goto L2362;
    case UNLT:
      goto L2368;
    case UNLE:
      goto L2374;
    case EQ:
      goto L2380;
    case LT:
      goto L2386;
    case LE:
      goto L2392;
    case GE:
      goto L2440;
    case GT:
      goto L2446;
    case UNGE:
      goto L2452;
    case UNGT:
      goto L2458;
    case UNSPEC:
      goto L3993;
    default:
     break;
   }
  goto ret0;

 L2356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3994;
    case DFmode:
      goto L3995;
    default:
      break;
    }
  goto ret0;

 L3994: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2357;
    }
  goto ret0;

 L2357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2358;
    }
  goto ret0;

 L2358: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 305;  /* sunordered_sf */
    }
  goto ret0;

 L3995: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2399;
    }
  goto ret0;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2400;
    }
  goto ret0;

 L2400: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 312;  /* sunordered_df */
    }
  goto ret0;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3996;
    case DFmode:
      goto L3997;
    default:
      break;
    }
  goto ret0;

 L3996: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2363;
    }
  goto ret0;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2364;
    }
  goto ret0;

 L2364: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 306;  /* suneq_sf */
    }
  goto ret0;

 L3997: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2405;
    }
  goto ret0;

 L2405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2406;
    }
  goto ret0;

 L2406: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 313;  /* suneq_df */
    }
  goto ret0;

 L2368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L3998;
    case DFmode:
      goto L3999;
    default:
      break;
    }
  goto ret0;

 L3998: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2369;
    }
  goto ret0;

 L2369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2370;
    }
  goto ret0;

 L2370: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 307;  /* sunlt_sf */
    }
  goto ret0;

 L3999: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2411;
    }
  goto ret0;

 L2411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2412;
    }
  goto ret0;

 L2412: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 314;  /* sunlt_df */
    }
  goto ret0;

 L2374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4000;
    case DFmode:
      goto L4001;
    default:
      break;
    }
  goto ret0;

 L4000: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2375;
    }
  goto ret0;

 L2375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2376;
    }
  goto ret0;

 L2376: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 308;  /* sunle_sf */
    }
  goto ret0;

 L4001: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2417;
    }
  goto ret0;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2418;
    }
  goto ret0;

 L2418: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 315;  /* sunle_df */
    }
  goto ret0;

 L2380: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4002;
    case DFmode:
      goto L4003;
    default:
      break;
    }
  goto ret0;

 L4002: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2381;
    }
  goto ret0;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2382;
    }
  goto ret0;

 L2382: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 309;  /* seq_sf */
    }
  goto ret0;

 L4003: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2423;
    }
  goto ret0;

 L2423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2424;
    }
  goto ret0;

 L2424: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 316;  /* seq_df */
    }
  goto ret0;

 L2386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4004;
    case DFmode:
      goto L4005;
    default:
      break;
    }
  goto ret0;

 L4004: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2387;
    }
  goto ret0;

 L2387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2388;
    }
  goto ret0;

 L2388: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 310;  /* slt_sf */
    }
  goto ret0;

 L4005: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2429;
    }
  goto ret0;

 L2429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2430;
    }
  goto ret0;

 L2430: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 317;  /* slt_df */
    }
  goto ret0;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4006;
    case DFmode:
      goto L4007;
    default:
      break;
    }
  goto ret0;

 L4006: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2393;
    }
  goto ret0;

 L2393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2394;
    }
  goto ret0;

 L2394: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 311;  /* sle_sf */
    }
  goto ret0;

 L4007: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2435;
    }
  goto ret0;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2436;
    }
  goto ret0;

 L2436: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 318;  /* sle_df */
    }
  goto ret0;

 L2440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4008;
    case DFmode:
      goto L4009;
    default:
      break;
    }
  goto ret0;

 L4008: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2441;
    }
  goto ret0;

 L2441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2442;
    }
  goto ret0;

 L2442: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 319;  /* sge_sf */
    }
  goto ret0;

 L4009: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2465;
    }
  goto ret0;

 L2465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2466;
    }
  goto ret0;

 L2466: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 323;  /* sge_df */
    }
  goto ret0;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4010;
    case DFmode:
      goto L4011;
    default:
      break;
    }
  goto ret0;

 L4010: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2447;
    }
  goto ret0;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2448;
    }
  goto ret0;

 L2448: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 320;  /* sgt_sf */
    }
  goto ret0;

 L4011: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2471;
    }
  goto ret0;

 L2471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2472;
    }
  goto ret0;

 L2472: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 324;  /* sgt_df */
    }
  goto ret0;

 L2452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4012;
    case DFmode:
      goto L4013;
    default:
      break;
    }
  goto ret0;

 L4012: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2453;
    }
  goto ret0;

 L2453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2454;
    }
  goto ret0;

 L2454: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 321;  /* sunge_sf */
    }
  goto ret0;

 L4013: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2477;
    }
  goto ret0;

 L2477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2478;
    }
  goto ret0;

 L2478: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 325;  /* sunge_df */
    }
  goto ret0;

 L2458: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4014;
    case DFmode:
      goto L4015;
    default:
      break;
    }
  goto ret0;

 L4014: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2459;
    }
  goto ret0;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2460;
    }
  goto ret0;

 L2460: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 322;  /* sungt_sf */
    }
  goto ret0;

 L4015: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2483;
    }
  goto ret0;

 L2483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2484;
    }
  goto ret0;

 L2484: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
    {
      return 326;  /* sungt_df */
    }
  goto ret0;

 L3993: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 203)
    goto L2951;
  goto ret0;

 L2951: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L4016;
    case DFmode:
      goto L4017;
    default:
      break;
    }
  goto ret0;

 L4016: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2952;
    }
  goto ret0;

 L2952: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2953;
    }
  goto ret0;

 L2953: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2954;
    }
  goto ret0;

 L2954: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT)))
    {
      return 384;  /* mips_cabs_cond_s */
    }
  goto ret0;

 L4017: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L2959;
    }
  goto ret0;

 L2959: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L2960;
    }
  goto ret0;

 L2960: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2961;
    }
  goto ret0;

 L2961: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 385;  /* mips_cabs_cond_d */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SFmode:
      goto L3593;
    case DFmode:
      goto L3594;
    case V2SFmode:
      goto L3595;
    case SImode:
      goto L3588;
    case DImode:
      goto L3589;
    case HImode:
      goto L3584;
    case QImode:
      goto L3585;
    case BLKmode:
      goto L3587;
    case CCmode:
      goto L3592;
    case CCV4mode:
      goto L3601;
    case CCV2mode:
      goto L3602;
    default:
      break;
    }
 L2047: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PC)
    goto L2497;
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2567;
    }
  goto ret0;

 L3593: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1799;
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L15;
    }
 L3596: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1857;
    }
  goto L2047;

 L1799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3603;
    case DImode:
      goto L3604;
    default:
      break;
    }
  goto L3596;

 L3603: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1800;
  goto L3596;

 L1800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1801;
    }
  goto L3596;

 L1801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1802;
    }
  goto L3596;

 L1802: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1803;
    }
  x1 = XEXP (x0, 0);
  goto L3596;

 L1803: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT)))
    {
      return 213;  /* *swxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L3596;

 L3604: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1821;
  goto L3596;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1822;
    }
  goto L3596;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1823;
    }
  goto L3596;

 L1823: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1824;
    }
  x1 = XEXP (x0, 0);
  goto L3596;

 L1824: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT)))
    {
      return 216;  /* *swxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L3596;

 L15: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L3605;
  x1 = XEXP (x0, 0);
  goto L3596;

 L3605: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3596;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L1858;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1858: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 223;  /* *movsf_hardfloat */
    }
 L1862: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))))
    {
      return 224;  /* *movsf_softfloat */
    }
 L1866: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode))))
    {
      return 225;  /* *movsf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3594: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1806;
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L21;
    }
 L3597: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1869;
    }
  goto L2047;

 L1806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3651;
    case DImode:
      goto L3652;
    default:
      break;
    }
  goto L3597;

 L3651: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1807;
  goto L3597;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1808;
    }
  goto L3597;

 L1808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1809;
    }
  goto L3597;

 L1809: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1810;
    }
  x1 = XEXP (x0, 0);
  goto L3597;

 L1810: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 214;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L3597;

 L3652: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1828;
  goto L3597;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1829;
    }
  goto L3597;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1830;
    }
  goto L3597;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1831;
    }
  x1 = XEXP (x0, 0);
  goto L3597;

 L1831: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)))
    {
      return 217;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L3597;

 L21: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L3653;
  x1 = XEXP (x0, 0);
  goto L3597;

 L3653: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3597;

 L1869: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1870;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1870: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 226;  /* *movdf_hardfloat_64bit */
    }
 L1874: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 227;  /* *movdf_hardfloat_32bit */
    }
 L1878: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))))
    {
      return 228;  /* *movdf_softfloat */
    }
 L1882: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 229;  /* *movdf_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3595: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L1813;
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L27;
    }
 L3598: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1885;
    }
  goto L2047;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L3704;
    case DImode:
      goto L3705;
    default:
      break;
    }
  goto L3598;

 L3704: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1814;
  goto L3598;

 L1814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1815;
    }
  goto L3598;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1816;
    }
  goto L3598;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1817;
    }
  x1 = XEXP (x0, 0);
  goto L3598;

 L1817: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == SImode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 215;  /* *sdxc1_si */
    }
  x1 = XEXP (x0, 0);
  goto L3598;

 L3705: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L1835;
  goto L3598;

 L1835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1836;
    }
  goto L3598;

 L1836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1837;
    }
  goto L3598;

 L1837: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, V2SFmode))
    {
      operands[0] = x1;
      goto L1838;
    }
  x1 = XEXP (x0, 0);
  goto L3598;

 L1838: ATTRIBUTE_UNUSED_LABEL
  if ((((ISA_HAS_FP4) && (Pmode == DImode)) && (TARGET_PAIRED_SINGLE_FLOAT)))
    {
      return 218;  /* *sdxc1_di */
    }
  x1 = XEXP (x0, 0);
  goto L3598;

 L27: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SFmode)
    goto L3706;
  x1 = XEXP (x0, 0);
  goto L3598;

 L3706: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3598;

 L1885: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, V2SFmode))
    {
      operands[1] = x1;
      goto L1886;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1886: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT
   && TARGET_64BIT
   && (register_operand (operands[0], V2SFmode)
       || reg_or_0_operand (operands[1], V2SFmode))))
    {
      return 230;  /* movv2sf_hardfloat_64bit */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3588: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MEM:
      goto L3772;
    case REG:
      goto L3773;
    default:
     break;
   }
 L3577: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L33;
    }
 L3579: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 29)
    goto L45;
 L3581: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L57;
    }
 L3583: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1348;
    }
  goto L2047;

 L3772: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1723;
    }
  goto L3583;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && (TARGET_MIPS16))
    {
      return 198;  /* *movsi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L3583;

 L3773: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 28)
    goto L2546;
  goto L3577;

 L2546: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L2547;
  x1 = XEXP (x0, 0);
  goto L3577;

 L2547: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (TARGET_ABICALLS && TARGET_OLDABI))
    {
      return 338;  /* exception_receiver */
    }
  x1 = XEXP (x0, 0);
  goto L3577;

 L33: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L34;
  x1 = XEXP (x0, 0);
  goto L3579;

 L34: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L35;
    }
  x1 = XEXP (x0, 0);
  goto L3579;

 L35: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L36;
    }
  x1 = XEXP (x0, 0);
  goto L3579;

 L36: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 6;  /* *addsi3 */
    }
  x1 = XEXP (x0, 0);
  goto L3579;

 L45: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L46;
  x1 = XEXP (x0, 0);
  goto L3581;

 L46: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L47;
  x1 = XEXP (x0, 0);
  goto L3581;

 L47: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L48;
    }
  x1 = XEXP (x0, 0);
  goto L3581;

 L48: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 8;  /* *addsi3_sp1 */
    }
  x1 = XEXP (x0, 0);
  goto L3581;

 L57: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3774;
  x1 = XEXP (x0, 0);
  goto L3583;

 L3774: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3583;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L3872;
 L1745: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1746;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3872: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case TRUNCATE:
      goto L1349;
    case UNSPEC:
      goto L3874;
    default:
     break;
   }
  goto L1745;

 L1349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1350;
    }
  goto L1745;

 L1350: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 132;  /* truncdisi2 */
    }
  x1 = XEXP (x0, 1);
  goto L1745;

 L3874: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 2)
    goto L1925;
  goto L1745;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L1926;
    }
  goto L1745;

 L1926: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT))
    {
      return 237;  /* store_df_high */
    }
  x1 = XEXP (x0, 1);
  goto L1745;

 L1746: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || reg_or_0_operand (operands[1], SImode))))
    {
      return 204;  /* *movsi_internal */
    }
 L1750: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 205;  /* *movsi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3589: ATTRIBUTE_UNUSED_LABEL
  if (stack_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1726;
    }
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L39;
    }
 L3580: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 29)
    goto L51;
 L3582: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L63;
    }
 L3590: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1729;
    }
  goto L2047;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 31
      && ((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 199;  /* *movdi_ra */
    }
  x1 = XEXP (x0, 0);
  goto L3590;

 L39: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L40;
  x1 = XEXP (x0, 0);
  goto L3580;

 L40: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L41;
    }
  x1 = XEXP (x0, 0);
  goto L3580;

 L41: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L42;
    }
  x1 = XEXP (x0, 0);
  goto L3580;

 L42: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 7;  /* *adddi3 */
    }
  x1 = XEXP (x0, 0);
  goto L3580;

 L51: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L52;
  x1 = XEXP (x0, 0);
  goto L3582;

 L52: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 29)
    goto L53;
  x1 = XEXP (x0, 0);
  goto L3582;

 L53: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_arith_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L54;
    }
  x1 = XEXP (x0, 0);
  goto L3582;

 L54: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 9;  /* *adddi3_sp1 */
    }
  x1 = XEXP (x0, 0);
  goto L3582;

 L63: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L3875;
  x1 = XEXP (x0, 0);
  goto L3590;

 L3875: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L3590;

 L1729: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1730;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1730: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 200;  /* *movdi_32bit */
    }
 L1734: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 201;  /* *movdi_32bit_mips16 */
    }
 L1738: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))))
    {
      return 202;  /* *movdi_64bit */
    }
 L1742: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 203;  /* *movdi_64bit_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3584: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1353;
    }
 L3586: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1400;
    }
  goto L2047;

 L1353: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1354;
  if (move_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1842;
    }
  x1 = XEXP (x0, 0);
  goto L3586;

 L1354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1355;
    }
  x1 = XEXP (x0, 0);
  goto L3586;

 L1355: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 133;  /* truncdihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L3586;

 L1842: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || reg_or_0_operand (operands[1], HImode))))
    {
      return 219;  /* *movhi_internal */
    }
 L1846: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 220;  /* *movhi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L3586;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L3970;
  x1 = XEXP (x0, 0);
  goto L2047;

 L3970: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1401;
    case SIGN_EXTEND:
      goto L1507;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L3972;
  x1 = XEXP (x0, 0);
  goto L2047;

 L3972: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L1402;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1453;
    }
 L3974: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1458;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1403;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1403: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16))
    {
      return 141;  /* *mips.md:2265 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1453: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 151;  /* *zero_extendqihi2 */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3974;

 L1458: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 152;  /* *zero_extendqihi2_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      return 162;  /* extendqihi2 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3585: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1358;
    }
  goto L2047;

 L1358: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == TRUNCATE)
    goto L1359;
  if (move_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L1850;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1360;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1360: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 134;  /* truncdiqi2 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1850: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || reg_or_0_operand (operands[1], QImode))))
    {
      return 221;  /* *movqi_internal */
    }
 L1854: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 222;  /* *movqi_mips16 */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3587: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, BLKmode))
    {
      operands[0] = x1;
      goto L1607;
    }
  goto L2047;

 L1607: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode)
    goto L3975;
  x1 = XEXP (x0, 0);
  goto L2047;

 L3975: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L3977;
  x1 = XEXP (x0, 0);
  goto L2047;

 L3977: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 2:
      goto L3979;
    case 3:
      goto L3980;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3979: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 20)
    goto L1608;
  x1 = XEXP (x0, 0);
  goto L2047;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1609;
    }
 L1614: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1615;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1610;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1614;

 L1610: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 178;  /* mov_swl */
    }
  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  goto L1614;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1616;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1616: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)))
    {
      return 179;  /* mov_sdl */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3980: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 21)
    goto L1620;
  x1 = XEXP (x0, 0);
  goto L2047;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1621;
    }
 L1626: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1627;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1622;
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1626;

 L1622: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0])))
    {
      return 180;  /* mov_swr */
    }
  x2 = XVECEXP (x1, 0, 0);
  goto L1626;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (memory_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L1628;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (rtx_equal_p (x2, operands[0])
      && ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT)))
    {
      return 181;  /* mov_sdr */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3592: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L1753;
    }
 L3599: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCmode))
    {
      operands[0] = x1;
      goto L2355;
    }
  goto L2047;

 L1753: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      operands[1] = x1;
      goto L1754;
    }
  x1 = XEXP (x0, 0);
  goto L3599;

 L1754: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_8CC && TARGET_HARD_FLOAT))
    {
      return 206;  /* movcc */
    }
  x1 = XEXP (x0, 0);
  goto L3599;

 L2355: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode)
    goto L3981;
  x1 = XEXP (x0, 0);
  goto L2047;

 L3981: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2047;

 L3601: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L2964;
    }
  goto L2047;

 L2964: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L4018;
  x1 = XEXP (x0, 0);
  goto L2047;

 L4018: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4020;
  x1 = XEXP (x0, 0);
  goto L2047;

 L4020: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L4022;
  x1 = XEXP (x0, 0);
  goto L2047;

 L4022: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201LL:
      goto L2965;
    case 203LL:
      goto L2974;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2965: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2966;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2966: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2967;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2967: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L2968;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2968: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L2969;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2969: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L2970;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2970: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 386;  /* mips_c_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2974: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2975;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2976;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L2977;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L2978;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L2979;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2979: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D))
    {
      return 387;  /* mips_cabs_cond_4s */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L3602: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, CCV2mode))
    {
      operands[0] = x1;
      goto L2982;
    }
  goto L2047;

 L2982: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV2mode)
    goto L4024;
  x1 = XEXP (x0, 0);
  goto L2047;

 L4024: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4026;
  x1 = XEXP (x0, 0);
  goto L2047;

 L4026: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L4028;
  x1 = XEXP (x0, 0);
  goto L2047;

 L4028: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201LL:
      goto L2983;
    case 203LL:
      goto L2990;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2983: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2984;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2984: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2985;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2985: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2986;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2986: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT))
    {
      return 388;  /* mips_c_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2990: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L2991;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2991: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L2992;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2992: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2993;
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2993: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D))
    {
      return 389;  /* mips_cabs_cond_ps */
    }
  x1 = XEXP (x0, 0);
  goto L2047;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4030;
    case DImode:
      goto L4031;
    default:
      break;
    }
 L2048: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L2049;
    case LABEL_REF:
      goto L2488;
    default:
     break;
   }
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2498;
    }
  goto L2048;

 L2498: ATTRIBUTE_UNUSED_LABEL
  if ((Pmode == SImode))
    {
      return 329;  /* indirect_jumpsi */
    }
  x1 = XEXP (x0, 1);
  goto L2048;

 L4031: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2502;
    }
  goto L2048;

 L2502: ATTRIBUTE_UNUSED_LABEL
  if ((Pmode == DImode))
    {
      return 330;  /* indirect_jumpdi */
    }
  x1 = XEXP (x0, 1);
  goto L2048;

 L2049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case CCmode:
      goto L4032;
    case SImode:
      goto L4033;
    case DImode:
      goto L4034;
    case CCV4mode:
      goto L4037;
    case CCV2mode:
      goto L4038;
    default:
      break;
    }
  goto ret0;

 L4032: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, CCmode))
    {
      operands[0] = x2;
      goto L2050;
    }
  goto ret0;

 L2050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      operands[2] = x3;
      goto L2051;
    }
  goto ret0;

 L2051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2052;
  goto ret0;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2053;
    case PC:
      goto L2062;
    default:
     break;
   }
  goto ret0;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2054;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_HARD_FLOAT))
    {
      return 259;  /* branch_fp */
    }
  goto ret0;

 L2062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2063;
  goto ret0;

 L2063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2064;

 L2064: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT))
    {
      return 260;  /* branch_fp_inverted */
    }
  goto ret0;

 L4033: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, SImode))
    {
      operands[0] = x2;
      goto L2069;
    }
 L4035: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, SImode))
    {
      operands[0] = x2;
      goto L2107;
    }
  goto ret0;

 L2069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2070;
    }
  goto L4035;

 L2070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2071;
  goto L4035;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2072;
    case PC:
      goto L2090;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4035;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2073;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (!TARGET_MIPS16))
    {
      return 261;  /* *branch_zerosi */
    }
  x2 = XEXP (x1, 0);
  goto L4035;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2091;
  x2 = XEXP (x1, 0);
  goto L4035;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2092;

 L2092: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 263;  /* *branch_zerosi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4035;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L4039;
  goto ret0;

 L4039: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2108;
    }
 L4040: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2146;
    }
  goto ret0;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2109;
    }
  x3 = XEXP (x2, 0);
  goto L4040;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2110;
    case PC:
      goto L2128;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4040;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2111;

 L2111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (!TARGET_MIPS16))
    {
      return 265;  /* *branch_equalitysi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4040;

 L2128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2129;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4040;

 L2129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2130;

 L2130: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 267;  /* *branch_equalitysi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4040;

 L2146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2147;
  goto ret0;

 L2147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2148;
    }
  goto ret0;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2149;
    }
  goto ret0;

 L2149: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 269;  /* *branch_equalitysi_mips16 */
    }
  goto ret0;

 L4034: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, DImode))
    {
      operands[0] = x2;
      goto L2078;
    }
 L4036: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, DImode))
    {
      operands[0] = x2;
      goto L2116;
    }
  goto ret0;

 L2078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2079;
    }
  goto L4036;

 L2079: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2080;
  goto L4036;

 L2080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2081;
    case PC:
      goto L2100;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L4036;

 L2081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2082;

 L2082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && ((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 262;  /* *branch_zerodi */
    }
  x2 = XEXP (x1, 0);
  goto L4036;

 L2100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2101;
  x2 = XEXP (x1, 0);
  goto L4036;

 L2101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2102;

 L2102: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 264;  /* *branch_zerodi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4036;

 L2116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4041;
  goto ret0;

 L4041: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L2117;
    }
 L4042: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L2155;
    }
  goto ret0;

 L2117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[3] = x3;
      goto L2118;
    }
  x3 = XEXP (x2, 0);
  goto L4042;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2119;
    case PC:
      goto L2138;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4042;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2120;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && ((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 266;  /* *branch_equalitydi */
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4042;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2139;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4042;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2140;

 L2140: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 268;  /* *branch_equalitydi_inverted */
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L4042;

 L2155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    goto L2156;
  goto ret0;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2157;
    }
  goto ret0;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2158;
    }
  goto ret0;

 L2158: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 270;  /* *branch_equalitydi_mips16 */
    }
  goto ret0;

 L4037: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NE)
    goto L2998;
  goto ret0;

 L2998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCV4mode))
    {
      operands[0] = x3;
      goto L2999;
    }
  goto ret0;

 L2999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4043;
  goto ret0;

 L4043: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0LL:
        goto L3000;
      case -1LL:
        goto L3009;
      default:
        break;
      }
  goto ret0;

 L3000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3001;
  goto ret0;

 L3001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3002;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_MIPS3D))
    {
      return 390;  /* bc1any4t */
    }
  goto ret0;

 L3009: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3010;
  goto ret0;

 L3010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3011;

 L3011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_MIPS3D))
    {
      return 391;  /* bc1any4f */
    }
  goto ret0;

 L4038: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NE)
    goto L3016;
  goto ret0;

 L3016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCV2mode))
    {
      operands[0] = x3;
      goto L3017;
    }
  goto ret0;

 L3017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT)
    goto L4045;
  goto ret0;

 L4045: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0LL:
        goto L3018;
      case -1LL:
        goto L3027;
      default:
        break;
      }
  goto ret0;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3019;
  goto ret0;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3020;

 L3020: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_MIPS3D))
    {
      return 392;  /* bc1any2t */
    }
  goto ret0;

 L3027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3028;
  goto ret0;

 L3028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3029;

 L3029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_MIPS3D))
    {
      return 393;  /* bc1any2f */
    }
  goto ret0;

 L2488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L2489;

 L2489: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 327;  /* jump */
    }
 L2494: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 328;  /* *mips.md:4639 */
    }
  goto ret0;

 L2567: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L2568;
  goto ret0;

 L2568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2569;
  goto ret0;

 L2569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2570;
    }
  goto ret0;

 L2570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  goto L2571;

 L2571: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 342;  /* sibcall_value_internal */
    }
 L2626: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 346;  /* call_value_internal */
    }
 L2644: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 347;  /* call_value_split */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L163;
    case PLUS:
      goto L284;
    case MINUS:
      goto L305;
    case NEG:
      goto L438;
    case TRUNCATE:
      goto L675;
    case FFS:
      goto L1184;
    default:
     break;
   }
  goto ret0;

 L163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L164;
    }
  goto ret0;

 L164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L165;
    }
  goto ret0;

 L165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L166;
  goto ret0;

 L166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L167;
    }
  goto ret0;

 L167: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L168;
  goto ret0;

 L168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L169;
    }
  goto ret0;

 L169: ATTRIBUTE_UNUSED_LABEL
  if ((GENERATE_MULT3_SI))
    {
      return 27;  /* mulsi3_mult3 */
    }
 L233: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_FIX_R4000))
    {
      return 31;  /* mulsi3_r4000 */
    }
  goto ret0;

 L284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L285;
  goto ret0;

 L285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L286;
    }
  goto ret0;

 L286: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L287;
    }
  goto ret0;

 L287: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L288;
    }
 L352: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L353;
  goto ret0;

 L288: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L289;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L290;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L292;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L292: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC))
    {
      return 34;  /* *macc */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L352;

 L353: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L354;
  goto ret0;

 L354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L355;
    }
  goto ret0;

 L355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L356;
  goto ret0;

 L356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L357;
  goto ret0;

 L357: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L358;
  goto ret0;

 L358: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L359;
  goto ret0;

 L359: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L360;
  goto ret0;

 L360: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L361;
  goto ret0;

 L361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L362;
    }
  goto ret0;

 L362: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC && reload_completed))
    {
      return 37;  /* *macc2 */
    }
  goto ret0;

 L305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L306;
    }
 L382: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[0]))
    goto L383;
  goto ret0;

 L306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L307;
  x3 = XEXP (x2, 0);
  goto L382;

 L307: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L308;
    }
  x3 = XEXP (x2, 0);
  goto L382;

 L308: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L309;
    }
  x3 = XEXP (x2, 0);
  goto L382;

 L309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L311;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L311: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L312;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L313;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L313: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MSAC))
    {
      return 35;  /* *msac */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L382;

 L383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L384;
  goto ret0;

 L384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L385;
    }
  goto ret0;

 L385: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L386;
    }
  goto ret0;

 L386: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L387;
  goto ret0;

 L387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L388;
    }
  goto ret0;

 L388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L389;
  goto ret0;

 L389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L390;
  goto ret0;

 L390: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L391;
  goto ret0;

 L391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L392;
  goto ret0;

 L392: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L393;
  goto ret0;

 L393: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L394;
  goto ret0;

 L394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L395;
    }
  goto ret0;

 L395: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MSAC && reload_completed))
    {
      return 38;  /* *msac2 */
    }
  goto ret0;

 L438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L439;
  goto ret0;

 L439: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L440;
    }
  goto ret0;

 L440: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L441;
    }
  goto ret0;

 L441: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L442;
  goto ret0;

 L442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L443;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L444;
  goto ret0;

 L444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L445;
    }
  goto ret0;

 L445: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULS))
    {
      return 40;  /* *muls */
    }
  goto ret0;

 L675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L676;
  goto ret0;

 L676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L4055;
  goto ret0;

 L4055: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case MULT:
      goto L677;
    case NEG:
      goto L729;
    default:
     break;
   }
  goto ret0;

 L677: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L4057;
  goto ret0;

 L4057: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L678;
    case ZERO_EXTEND:
      goto L704;
    default:
     break;
   }
  goto ret0;

 L678: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L679;
    }
  goto ret0;

 L679: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L680;
  goto ret0;

 L680: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L681;
    }
  goto ret0;

 L681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L682;
  goto ret0;

 L682: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L683;
  goto ret0;

 L683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L684;
    }
  goto ret0;

 L684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L685;
  goto ret0;

 L685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L686;
    }
  goto ret0;

 L686: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 55;  /* smulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L704: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L705;
    }
  goto ret0;

 L705: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L706;
  goto ret0;

 L706: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L707;
    }
  goto ret0;

 L707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L708;
  goto ret0;

 L708: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L709;
  goto ret0;

 L709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L710;
    }
  goto ret0;

 L710: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L711;
  goto ret0;

 L711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L712;
    }
  goto ret0;

 L712: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 56;  /* umulsi3_highpart_mulhi_internal */
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L730;
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L4059;
  goto ret0;

 L4059: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case SIGN_EXTEND:
      goto L731;
    case ZERO_EXTEND:
      goto L759;
    default:
     break;
   }
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L732;
    }
  goto ret0;

 L732: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L733;
  goto ret0;

 L733: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L734;
    }
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L735;
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L736;
  goto ret0;

 L736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L737;
    }
  goto ret0;

 L737: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L738;
  goto ret0;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L739;
    }
  goto ret0;

 L739: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 57;  /* *smulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L759: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L760;
    }
  goto ret0;

 L760: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L761;
  goto ret0;

 L761: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L762;
    }
  goto ret0;

 L762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L763;
  goto ret0;

 L763: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L764;
  goto ret0;

 L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L765;
    }
  goto ret0;

 L765: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L766;
  goto ret0;

 L766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L767;
    }
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MULHI))
    {
      return 58;  /* *umulsi3_highpart_neg_mulhi_internal */
    }
  goto ret0;

 L1184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1185;
    }
  goto ret0;

 L1185: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1186;
  goto ret0;

 L1186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1187;
    }
  goto ret0;

 L1187: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1188;
  goto ret0;

 L1188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1189;
    }
  goto ret0;

 L1189: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_MIPS16))
    {
      return 106;  /* ffssi2 */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4064;
    case DImode:
      goto L4065;
    default:
      break;
    }
 L2505: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L2506;
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2575;
    }
  goto ret0;

 L4064: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L196;
    }
  goto L2505;

 L196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4066;
  x2 = XEXP (x1, 0);
  goto L2505;

 L4066: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L197;
    case PLUS:
      goto L367;
    case MINUS:
      goto L400;
    case TRUNCATE:
      goto L627;
    case DIV:
      goto L1058;
    case UDIV:
      goto L1080;
    case FIX:
      goto L1522;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2505;

 L197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L198;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L198: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L199;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L199: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L200;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L201;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L201: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_FIX_R4000))
    {
      return 29;  /* mulsi3_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L367: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L368;
  x2 = XEXP (x1, 0);
  goto L2505;

 L368: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L369;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L370;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L370: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L371;
  x2 = XEXP (x1, 0);
  goto L2505;

 L371: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L372;
    case CLOBBER:
      goto L836;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L373;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L374;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L375;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L375: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L376;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L377;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L377: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0])
      && (ISA_HAS_MACC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 37;  /* *macc2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L836: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L837;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L837: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MAD))
    {
      return 61;  /* madsi */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L400: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L401;
  x2 = XEXP (x1, 0);
  goto L2505;

 L401: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L402;
  x2 = XEXP (x1, 0);
  goto L2505;

 L402: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L403;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L404;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L404: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L405;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L406;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L407;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L408;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L410;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (ISA_HAS_MSAC && reload_completed)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;  /* *msac2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L628;
  x2 = XEXP (x1, 0);
  goto L2505;

 L628: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L629;
  x2 = XEXP (x1, 0);
  goto L2505;

 L629: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L4073;
  x2 = XEXP (x1, 0);
  goto L2505;

 L4073: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L630;
    case ZERO_EXTEND:
      goto L654;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2505;

 L630: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L631;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L631: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L632;
  x2 = XEXP (x1, 0);
  goto L2505;

 L632: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L633;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L634;
  x2 = XEXP (x1, 0);
  goto L2505;

 L634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L636;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L636: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI && !TARGET_FIX_R4000))
    {
      return 53;  /* smulsi3_highpart_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L654: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L655;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L655: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L656;
  x2 = XEXP (x1, 0);
  goto L2505;

 L656: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L657;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (32)])
    goto L658;
  x2 = XEXP (x1, 0);
  goto L2505;

 L658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L659;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L660;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L660: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_MULHI && !TARGET_FIX_R4000))
    {
      return 54;  /* umulsi3_highpart_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1058: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1059;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1059: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1060;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1060: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1061;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1062;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MOD)
    goto L1063;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1064;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (!TARGET_FIX_VR4120))
    {
      return 88;  /* divmodsi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1081;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1082;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1083;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1084;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UMOD)
    goto L1085;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1086;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      return 90;  /* udivmodsi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case DFmode:
      goto L4075;
    case SFmode:
      goto L4076;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L4075: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L1523;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1524;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L1525;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1525: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 165;  /* fix_truncdfsi2_macro */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L4076: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L1541;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1542;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L1543;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1543: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W))
    {
      return 167;  /* fix_truncsfsi2_macro */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L4065: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L211;
    }
  goto L2505;

 L211: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L4077;
  x2 = XEXP (x1, 0);
  goto L2505;

 L4077: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L212;
    case SIGN_EXTEND:
      goto L557;
    case TRUNCATE:
      goto L783;
    case DIV:
      goto L1069;
    case UDIV:
      goto L1091;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L4082;
    default:
      x2 = XEXP (x1, 0);
      goto L2505;
   }
 L4082: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1638;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4084;
  x2 = XEXP (x1, 0);
  goto L2505;

 L4084: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L474;
    case ZERO_EXTEND:
      goto L493;
    case REG:
    case SUBREG:
      goto L4083;
    default:
      x2 = XEXP (x1, 0);
      goto L2505;
   }
 L4083: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L213;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L474: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L475;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L476;
  x2 = XEXP (x1, 0);
  goto L2505;

 L476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L477;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L477: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L479;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L479: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 43;  /* mulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L493: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L494;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L495;
  x2 = XEXP (x1, 0);
  goto L2505;

 L495: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L496;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L496: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L497;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L498;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L498: ATTRIBUTE_UNUSED_LABEL
  if ((!TARGET_64BIT && TARGET_FIX_R4000))
    {
      return 44;  /* umulsidi3_32bit_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L214;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L214: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L215;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L216;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L216: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_FIX_R4000) && (TARGET_64BIT)))
    {
      return 30;  /* muldi3_internal */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L558;
  x2 = XEXP (x1, 0);
  goto L2505;

 L558: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L559;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L559: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L560;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L560: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L561;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L562;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L563;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L564;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L564: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L4086;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L4086: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L565;
    case ZERO_EXTEND:
      goto L581;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L565: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L566;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L567;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L567: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L568;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && (TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 47;  /* *mulsidi3_64bit_parts */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L581: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L582;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L582: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L583;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L583: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L584;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + (32)]
      && (TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 48;  /* *umulsidi3_64bit_parts */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L784;
  x2 = XEXP (x1, 0);
  goto L2505;

 L784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == MULT)
    goto L785;
  x2 = XEXP (x1, 0);
  goto L2505;

 L785: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == TImode)
    goto L4088;
  x2 = XEXP (x1, 0);
  goto L2505;

 L4088: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L786;
    case ZERO_EXTEND:
      goto L810;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2505;

 L786: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L787;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L787: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L788;
  x2 = XEXP (x1, 0);
  goto L2505;

 L788: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L789;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L789: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L790;
  x2 = XEXP (x1, 0);
  goto L2505;

 L790: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L791;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L792;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L792: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 59;  /* smuldi3_highpart */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L810: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[1] = x6;
      goto L811;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L811: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L812;
  x2 = XEXP (x1, 0);
  goto L2505;

 L812: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, DImode))
    {
      operands[2] = x6;
      goto L813;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + (64)])
    goto L814;
  x2 = XEXP (x1, 0);
  goto L2505;

 L814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L816;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L816: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120)))
    {
      return 60;  /* umuldi3_highpart */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1070;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1071;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1071: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1072;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1073;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MOD)
    goto L1074;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1075;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && ((!TARGET_FIX_VR4120) && (TARGET_64BIT)))
    {
      return 89;  /* divmoddi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1092;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L1093;
    }
  x2 = XEXP (x1, 0);
  goto L2505;

 L1093: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1094;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1095;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UMOD)
    goto L1096;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1097;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_64BIT))
    {
      return 91;  /* udivmoddi4 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1638: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1639;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1640;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L1640: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected))
    {
      return 183;  /* *lea64 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2505;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4090;
    case DImode:
      goto L4091;
    default:
      break;
    }
  goto ret0;

 L4090: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2507;
    }
  goto ret0;

 L2507: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2508;
  goto ret0;

 L2508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2509;
  goto ret0;

 L2509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2510;

 L2510: ATTRIBUTE_UNUSED_LABEL
  if ((Pmode == SImode))
    {
      return 331;  /* tablejumpsi */
    }
  goto ret0;

 L4091: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2515;
    }
  goto ret0;

 L2515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2516;
  goto ret0;

 L2516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2517;
  goto ret0;

 L2517: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L2518;

 L2518: ATTRIBUTE_UNUSED_LABEL
  if ((Pmode == DImode))
    {
      return 332;  /* tablejumpdi */
    }
  goto ret0;

 L2575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2576;
  goto ret0;

 L2576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2577;
  goto ret0;

 L2577: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2578;
    }
  goto ret0;

 L2578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2579;

 L2579: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2580;
    case CLOBBER:
      goto L2619;
    default:
     break;
   }
  goto ret0;

 L2580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2581;
    }
  goto ret0;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2582;
  goto ret0;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2583;
  goto ret0;

 L2583: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2584;
  goto ret0;

 L2584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 343;  /* sibcall_value_multiple_internal */
    }
 L2672: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 348;  /* call_value_multiple_internal */
    }
 L2702: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 349;  /* call_value_multiple_split */
    }
  goto ret0;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 346;  /* call_value_internal */
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L160;
    case 2:
      goto L194;
    case 4:
      goto L258;
    default:
      break;
    }
  goto ret0;

 L160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L161;
    case CALL:
      goto L2599;
    default:
     break;
   }
  goto ret0;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4047;
    case DImode:
      goto L4048;
    default:
      break;
    }
 L2629: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2630;
    }
  goto ret0;

 L4047: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L162;
    }
  goto L2629;

 L162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4049;
  x2 = XEXP (x1, 0);
  goto L2629;

 L4049: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2629;

 L4048: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L179;
    }
  goto L2629;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L4061;
  x2 = XEXP (x1, 0);
  goto L2629;

 L4061: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L180;
    case FFS:
      goto L1199;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2629;

 L180: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L181;
    }
  x2 = XEXP (x1, 0);
  goto L2629;

 L181: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L182;
    }
  x2 = XEXP (x1, 0);
  goto L2629;

 L182: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L183;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L184;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L184: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L185;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L186;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L186: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && GENERATE_MULT3_DI))
    {
      return 28;  /* muldi3_mult3 */
    }
 L250: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_FIX_R4000) && (TARGET_64BIT)))
    {
      return 32;  /* muldi3_r4000 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L1199: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1200;
    }
  x2 = XEXP (x1, 0);
  goto L2629;

 L1200: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1201;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L1201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L1202;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L1202: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1203;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L1204;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L1204: ATTRIBUTE_UNUSED_LABEL
  if (((!TARGET_MIPS16) && (TARGET_64BIT)))
    {
      return 107;  /* ffsdi2 */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2629;

 L2630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2631;
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2632;
  goto ret0;

 L2632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2633;
    }
  goto ret0;

 L2633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2634;

 L2634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      goto L2635;
    case SET:
      goto L2653;
    default:
     break;
   }
  goto ret0;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2636;
  goto ret0;

 L2636: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2637;
  goto ret0;

 L2637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (TARGET_SPLIT_CALLS))
    {
      return 347;  /* call_value_split */
    }
  goto ret0;

 L2653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2654;
    }
  goto ret0;

 L2654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2655;
  goto ret0;

 L2655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2656;
  goto ret0;

 L2656: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2657;
  goto ret0;

 L2657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2658;
  goto ret0;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2659;
  goto ret0;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 348;  /* call_value_multiple_internal */
    }
  goto ret0;

 L2599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2600;
  goto ret0;

 L2600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2601;
    }
  goto ret0;

 L2601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2602;

 L2602: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2603;
  goto ret0;

 L2603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2604;
  goto ret0;

 L2604: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2605;
  goto ret0;

 L2605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (TARGET_SPLIT_CALLS))
    {
      return 345;  /* call_split */
    }
  goto ret0;

 L194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L195;
    case RETURN:
      goto L2524;
    case UNSPEC:
      goto L4063;
    case CALL:
      goto L2587;
    default:
     break;
   }
  goto ret0;

 L195: ATTRIBUTE_UNUSED_LABEL
  return recog_9 (x0, insn, pnum_clobbers);

 L2524: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2525;
  goto ret0;

 L2525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pmode_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      return 335;  /* return_internal */
    }
  goto ret0;

 L4063: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L2528;
  goto ret0;

 L2528: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4092;
    case DImode:
      goto L4093;
    default:
      break;
    }
  goto ret0;

 L4092: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2529;
    }
  goto ret0;

 L2529: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2530;
  goto ret0;

 L2530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2531;
    }
  goto ret0;

 L2531: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_64BIT))
    {
      return 336;  /* eh_set_lr_si */
    }
  goto ret0;

 L4093: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2538;
    }
  goto ret0;

 L2538: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2539;
  goto ret0;

 L2539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2540;
    }
  goto ret0;

 L2540: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT))
    {
      return 337;  /* eh_set_lr_di */
    }
  goto ret0;

 L2587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2588;
  goto ret0;

 L2588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L2589;
    }
  goto ret0;

 L2589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2590;

 L2590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2591;
  goto ret0;

 L2591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    {
      return 344;  /* call_internal */
    }
  goto ret0;

 L258: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L259;
  goto ret0;

 L259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4094;
    case DImode:
      goto L4095;
    default:
      break;
    }
 L2675: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2676;
    }
  goto ret0;

 L4094: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L260;
    }
  goto L2675;

 L260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4096;
  x2 = XEXP (x1, 0);
  goto L2675;

 L4096: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L261;
    case MINUS:
      goto L326;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2675;

 L261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L262;
  x2 = XEXP (x1, 0);
  goto L2675;

 L262: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L263;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L263: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L264;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L265;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L265: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L266;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L267;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L268;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L269: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L270;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L271;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L271: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS3900
   || ISA_HAS_MADD_MSUB)
   && !TARGET_MIPS16))
    {
      return 33;  /* *mul_acc_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L327;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L327: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L328;
  x2 = XEXP (x1, 0);
  goto L2675;

 L328: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L329;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L329: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L330;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L331;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L332;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L332: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L333;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L334;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L334: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L335;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L336;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L336: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC && !ISA_HAS_MSAC))
    {
      return 36;  /* *msac_using_macc */
    }
 L425: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MADD_MSUB))
    {
      return 39;  /* *mul_sub_si */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L4095: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L510;
    }
  goto L2675;

 L510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L511;
  x2 = XEXP (x1, 0);
  goto L2675;

 L511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4098;
  x2 = XEXP (x1, 0);
  goto L2675;

 L4098: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L512;
    case ZERO_EXTEND:
      goto L535;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2675;

 L512: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L513;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L514;
  x2 = XEXP (x1, 0);
  goto L2675;

 L514: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L515;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L516;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L517;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L519;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L519: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L520;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L521;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L521: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 45;  /* *mulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L536;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L537;
  x2 = XEXP (x1, 0);
  goto L2675;

 L537: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L538;
    }
  x2 = XEXP (x1, 0);
  goto L2675;

 L538: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L539;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L540;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L541;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L542;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L542: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L543;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L544;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L544: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000))
    {
      return 46;  /* *umulsidi3_64bit */
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2675;

 L2676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2677;
  goto ret0;

 L2677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2678;
  goto ret0;

 L2678: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L2679;
    }
  goto ret0;

 L2679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2680;

 L2680: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2681;
  goto ret0;

 L2681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2682;
    }
  goto ret0;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2683;
  goto ret0;

 L2683: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2684;
  goto ret0;

 L2684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2685;
  goto ret0;

 L2685: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2686;
  goto ret0;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2687;
  goto ret0;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31)
    goto L2688;
  goto ret0;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L2689;
  goto ret0;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 28
      && (TARGET_SPLIT_CALLS))
    {
      return 349;  /* call_value_multiple_split */
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case TRAP_IF:
      goto L4;
    case SET:
      goto L14;
    case PARALLEL:
      goto L3559;
    case UNSPEC_VOLATILE:
      goto L3562;
    case RETURN:
      goto L3565;
    case UNSPEC:
      goto L3566;
    case CALL:
      goto L2561;
    case PREFETCH:
      goto L2704;
    case CONST_INT:
      goto L3567;
    default:
     break;
   }
  goto ret0;

 L4: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L3572;
    case DImode:
      goto L3573;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (1)])
    goto L2;
  goto ret0;

 L3572: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, SImode))
    {
      operands[0] = x1;
      goto L5;
    }
  goto L1;

 L5: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L6;
    }
  goto L1;

 L6: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L7;
    }
  goto L1;

 L7: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (ISA_HAS_COND_TRAP))
    {
      return 1;  /* *conditional_trapsi */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L3573: ATTRIBUTE_UNUSED_LABEL
  if (trap_comparison_operator (x1, DImode))
    {
      operands[0] = x1;
      goto L10;
    }
  goto L1;

 L10: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L11;
    }
  goto L1;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L12;
    }
  goto L1;

 L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && ((ISA_HAS_COND_TRAP) && (TARGET_64BIT)))
    {
      return 2;  /* *conditional_trapdi */
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 0;  /* trap */
    }
  goto ret0;

 L14: ATTRIBUTE_UNUSED_LABEL
  return recog_7 (x0, insn, pnum_clobbers);

 L3559: ATTRIBUTE_UNUSED_LABEL
  return recog_10 (x0, insn, pnum_clobbers);

 L3562: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L4100;
    case 1:
      goto L4101;
    default:
      break;
    }
  goto ret0;

 L4100: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 22LL:
      goto L1928;
    case 8LL:
      goto L2833;
    default:
      break;
    }
  goto ret0;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L1929;

 L1929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L1930;
    }
  goto ret0;

 L1930: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ABICALLS && TARGET_NEWABI))
    {
      return 238;  /* loadgp */
    }
  goto ret0;

 L2833: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2834;
    }
  goto ret0;

 L2834: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2835;
    }
  goto ret0;

 L2835: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 367;  /* consttable_int */
    }
  goto ret0;

 L4101: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 4LL:
      goto L1932;
    case 5LL:
      goto L1934;
    case 9LL:
      goto L2837;
    case 14LL:
      goto L2840;
    default:
      break;
    }
  goto ret0;

 L1932: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    {
      return 239;  /* loadgp_blockage */
    }
  if (x1 == const_int_rtx[MAX_SAVED_CONST_INT + (0)])
    {
      return 333;  /* blockage */
    }
  goto ret0;

 L1934: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 240;  /* cprestore */
    }
  goto ret0;

 L2837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2838;
    }
  goto ret0;

 L2838: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16))
    {
      return 368;  /* consttable_float */
    }
  goto ret0;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      return 369;  /* align */
    }
  goto ret0;

 L3565: ATTRIBUTE_UNUSED_LABEL
  if ((mips_can_use_return_insn ()))
    {
      return 334;  /* return */
    }
  goto ret0;

 L3566: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 7)
    goto L2533;
  goto ret0;

 L2533: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4106;
    case DImode:
      goto L4107;
    default:
      break;
    }
  goto ret0;

 L4106: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2534;
    }
  goto ret0;

 L2534: ATTRIBUTE_UNUSED_LABEL
  if ((! TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 336;  /* eh_set_lr_si */
    }
  goto ret0;

 L4107: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L2543;
    }
  goto ret0;

 L2543: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 337;  /* eh_set_lr_di */
    }
  goto ret0;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == MEM)
    goto L2562;
  goto ret0;

 L2562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2563;
    }
  goto ret0;

 L2563: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L2564;

 L2564: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SIBCALLS && SIBLING_CALL_P (insn)))
    {
      return 341;  /* sibcall_internal */
    }
 L2596: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 344;  /* call_internal */
    }
 L2610: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_SPLIT_CALLS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 345;  /* call_split */
    }
  goto ret0;

 L2704: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L2705;
    }
 L2709: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4108;
    case DImode:
      goto L4109;
    default:
      break;
    }
  goto ret0;

 L2705: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L2706;
    }
  x1 = XEXP (x0, 0);
  goto L2709;

 L2706: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2707;
    }
  x1 = XEXP (x0, 0);
  goto L2709;

 L2707: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS))
    {
      return 350;  /* prefetch */
    }
  x1 = XEXP (x0, 0);
  goto L2709;

 L4108: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2710;
  goto ret0;

 L2710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2711;
    }
  goto ret0;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2712;
    }
  goto ret0;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2713;
    }
  goto ret0;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L2714;
    }
  goto ret0;

 L2714: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == SImode)))
    {
      return 351;  /* *prefetch_indexed_si */
    }
  goto ret0;

 L4109: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == PLUS)
    goto L2717;
  goto ret0;

 L2717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L2718;
    }
  goto ret0;

 L2718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L2719;
    }
  goto ret0;

 L2719: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L2720;
    }
  goto ret0;

 L2720: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L2721;
    }
  goto ret0;

 L2721: ATTRIBUTE_UNUSED_LABEL
  if (((ISA_HAS_PREFETCHX && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT) && (Pmode == DImode)))
    {
      return 352;  /* *prefetch_indexed_di */
    }
  goto ret0;

 L3567: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x0, 0) == XWINT (x0, 0))
    switch ((int) XWINT (x0, 0))
      {
      case 0LL:
        goto L4110;
      case 1LL:
        goto L4111;
      default:
        break;
      }
  goto ret0;

 L4110: ATTRIBUTE_UNUSED_LABEL
  return 353;  /* nop */

 L4111: ATTRIBUTE_UNUSED_LABEL
  return 354;  /* hazard_nop */
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4122;
    case DImode:
      goto L4117;
    case HImode:
      goto L4118;
    case QImode:
      goto L4119;
    case DFmode:
      goto L4121;
    default:
      break;
    }
 L3451: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L3452;
    }
  goto ret0;

 L4122: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 28)
    goto L3506;
 L4116: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3098;
    }
  goto L3451;

 L3506: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L3507;
  x1 = XEXP (x0, 0);
  goto L4116;

 L3507: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + (0)]
      && (TARGET_ABICALLS && TARGET_OLDABI&& reload_completed))
    {
      return gen_split_556 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4116;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L4123;
 L3426: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3427;
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L4123: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3099;
    case SIGN_EXTEND:
      goto L3308;
    case HIGH:
      goto L3373;
    case LO_SUM:
      goto L3383;
    case MEM:
      goto L3420;
    case ASHIFT:
      goto L3460;
    case ASHIFTRT:
      goto L3466;
    case LSHIFTRT:
      goto L3472;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L4127;
    default:
      goto L3426;
   }
 L4127: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3395;
    }
  goto L3426;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3100;
 L3105: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3106;
    }
  goto L3426;

 L3100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3101;
    }
  x2 = XEXP (x1, 0);
  goto L3105;

 L3101: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80))))
    {
      return gen_split_409 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3105;

 L3106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3107;
    }
  goto L3426;

 L3107: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80))))
    {
      return gen_split_410 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L4132;
    case QImode:
      goto L4133;
    default:
      break;
    }
  goto L3426;

 L4132: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L3309;
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3341;
    }
  goto L3426;

 L3309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3310;
    }
  goto L3426;

 L3310: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16&& reload_completed))
    {
      return gen_split_443 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3341: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_SEB_SEH&& reload_completed && REG_P (operands[1])))
    {
      return gen_split_458 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L4133: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == TRUNCATE)
    goto L3315;
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3331;
    }
  goto L3426;

 L3315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3316;
    }
  goto L3426;

 L3316: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_MIPS16&& reload_completed))
    {
      return gen_split_444 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3331: ATTRIBUTE_UNUSED_LABEL
  if ((!ISA_HAS_SEB_SEH&& reload_completed && REG_P (operands[1])))
    {
      return gen_split_456 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4136;
  goto L3426;

 L4136: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3374;
    }
 L4137: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3404;
    }
  goto L3426;

 L3374: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)&& reload_completed))
    {
      return gen_split_473 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4137;

 L3404: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS) && (Pmode == SImode)&& reload_completed))
    {
      return gen_split_479 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3384;
    }
  goto L3426;

 L3384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3385;
    }
  goto L3426;

 L3385: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == SImode)&& reload_completed))
    {
      return gen_split_475 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3421;
  goto L3426;

 L3421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3422;
  goto L3426;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3423;
    }
  goto L3426;

 L3423: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0))))
    {
      return gen_split_484 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3461;
    }
  goto L3426;

 L3461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3462;
    }
  goto L3426;

 L3462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_508 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3467;
    }
  goto L3426;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3468;
    }
  goto L3426;

 L3468: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_509 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3472: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L4138;
  goto L3426;

 L4138: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3473;
    }
 L4139: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3497;
    }
  goto L3426;

 L3473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3474;
    }
  x2 = XEXP (x1, 0);
  goto L4139;

 L3474: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16))
    {
      return gen_split_510 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4139;

 L3497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      return gen_split_514 (insn, operands);
    }
  goto L3426;

 L3395: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == SImode)&& reload_completed))
    {
      return gen_split_477 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  goto L3426;

 L3427: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f))
    {
      return gen_split_485 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L4117: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3110;
    }
 L4120: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L3444;
    }
  goto L3451;

 L3110: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L4140;
  x1 = XEXP (x0, 0);
  goto L4120;

 L4140: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3111;
    case SIGN_EXTEND:
      goto L3123;
    case ZERO_EXTEND:
      goto L3320;
    case HIGH:
      goto L3355;
    case LO_SUM:
      goto L3389;
    case MEM:
      goto L3413;
    case ASHIFT:
      goto L3478;
    case ASHIFTRT:
      goto L3484;
    case LSHIFTRT:
      goto L3490;
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      goto L4145;
    default:
      x1 = XEXP (x0, 0);
      goto L4120;
   }
 L4145: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3399;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L3112;
 L3117: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3118;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3113;
    }
  x2 = XEXP (x1, 0);
  goto L3117;

 L3113: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10))))
    {
      return gen_split_411 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3117;

 L3118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3119;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3119: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && TARGET_64BIT && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && REG_P (operands[1])
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10))))
    {
      return gen_split_412 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4150;
    case QImode:
      goto L4152;
    case HImode:
      goto L4153;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L4150: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L3124;
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3326;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3125;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3126;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3126: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16&& reload_completed))
    {
      return gen_split_413 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3326: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT&& reload_completed && register_operand (operands[1], VOIDmode)))
    {
      return gen_split_451 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L4152: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3336;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3336: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_HAS_SEB_SEH) && (TARGET_64BIT)&& reload_completed && REG_P (operands[1])))
    {
      return gen_split_457 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L4153: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L3346;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3346: ATTRIBUTE_UNUSED_LABEL
  if (((!ISA_HAS_SEB_SEH) && (TARGET_64BIT)&& reload_completed && REG_P (operands[1])))
    {
      return gen_split_459 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3321;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3321: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT&& reload_completed && REG_P (operands[1])))
    {
      return gen_split_445 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L4154;
  x1 = XEXP (x0, 0);
  goto L4120;

 L4154: ATTRIBUTE_UNUSED_LABEL
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3356;
    }
 L4155: ATTRIBUTE_UNUSED_LABEL
  if (global_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3379;
    }
 L4156: ATTRIBUTE_UNUSED_LABEL
  if (local_got_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3409;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3356: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS&& flow2_completed))
    {
      return gen_split_470 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4155;

 L3379: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)&& reload_completed))
    {
      return gen_split_474 (insn, operands);
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L4156;

 L3409: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS) && (Pmode == DImode)&& reload_completed))
    {
      return gen_split_480 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3390;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (global_got_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3391;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3391: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && TARGET_XGOT) && (Pmode == DImode)&& reload_completed))
    {
      return gen_split_476 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L3414;
  x1 = XEXP (x0, 0);
  goto L4120;

 L3414: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3415;
  x1 = XEXP (x0, 0);
  goto L4120;

 L3415: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L3416;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3416: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && TARGET_MIPS16 && reload_completed
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
	   && (INTVAL (operands[1]) & 7) != 0))))
    {
      return gen_split_482 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3479;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3480;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3480: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)))
    {
      return gen_split_511 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3485;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3486;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3486: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)))
    {
      return gen_split_512 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3491;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3492;
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3492: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16) && (TARGET_64BIT)))
    {
      return gen_split_513 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3399: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_EXPLICIT_RELOCS && !TARGET_XGOT) && (Pmode == DImode)&& reload_completed))
    {
      return gen_split_478 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L4120;

 L3444: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3445;
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3445: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_494 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L4118: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L3349;
    }
  goto L3451;

 L3349: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L4157;
  x1 = XEXP (x0, 0);
  goto L3451;

 L4157: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L3350;
    case MEM:
      goto L3431;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L3351;
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3351: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_460 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3432;
  x1 = XEXP (x0, 0);
  goto L3451;

 L3432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3433;
  x1 = XEXP (x0, 0);
  goto L3451;

 L3433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3434;
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3434: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0))))
    {
      return gen_split_489 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L4119: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L3437;
    }
  goto L3451;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode
      && GET_CODE (x1) == MEM)
    goto L3438;
  x1 = XEXP (x0, 0);
  goto L3451;

 L3438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3439;
  x1 = XEXP (x0, 0);
  goto L3451;

 L3439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3440;
  x1 = XEXP (x0, 0);
  goto L3451;

 L3440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3441;
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3441: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && !TARGET_DEBUG_D_MODE
   && REG_P (operands[0])
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f))))
    {
      return gen_split_491 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L4121: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L3448;
    }
  goto L3451;

 L3448: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L3449;
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3449: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_64BIT
   && mips_split_64bit_move_p (operands[0], operands[1])))
    {
      return gen_split_495 (insn, operands);
    }
  x1 = XEXP (x0, 0);
  goto L3451;

 L3452: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L3453;
    }
  goto ret0;

 L3453: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS16 && reload_completed && INTVAL (operands[1]) < 0))
    {
      return gen_split_496 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L3097;
    case PARALLEL:
      goto L4112;
    case UNSPEC_VOLATILE:
      goto L4114;
    default:
     break;
   }
 L3539: ATTRIBUTE_UNUSED_LABEL
  if (small_data_pattern (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L3540;
    }
 L3541: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET)
    goto L3542;
  goto ret0;

 L3097: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  goto L3539;

 L4112: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 4:
      goto L3158;
    case 2:
      goto L3364;
    case 3:
      goto L3525;
    default:
      break;
    }
  goto L3539;

 L3158: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3159;
  goto L3539;

 L3159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L4159;
    case DImode:
      goto L4160;
    default:
      break;
    }
  goto L3539;

 L4159: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3160;
    }
  goto L3539;

 L3160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4161;
  goto L3539;

 L4161: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L3161;
    case MINUS:
      goto L3191;
    default:
     break;
   }
  goto L3539;

 L3161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L3162;
  goto L3539;

 L3162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3163;
    }
  goto L3539;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3164;
    }
  goto L3539;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3165;
    }
  goto L3539;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3166;
  goto L3539;

 L3166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L3167;
    }
  goto L3539;

 L3167: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3168;
  goto L3539;

 L3168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3169;
    }
  goto L3539;

 L3169: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3170;
  goto L3539;

 L3170: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L3171;
    }
  goto L3539;

 L3171: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[3]))))
    {
      return gen_split_420 (insn, operands);
    }
 L3186: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[3]) == LO_REGNUM))
    {
      return gen_split_421 (insn, operands);
    }
  goto L3539;

 L3191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3192;
    }
  goto L3539;

 L3192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L3193;
  goto L3539;

 L3193: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3194;
    }
  goto L3539;

 L3194: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3195;
    }
  goto L3539;

 L3195: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3196;
  goto L3539;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L3197;
    }
  goto L3539;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3198;
  goto L3539;

 L3198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3199;
    }
  goto L3539;

 L3199: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3200;
  goto L3539;

 L3200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L3201;
    }
  goto L3539;

 L3201: ATTRIBUTE_UNUSED_LABEL
  if ((ISA_HAS_MACC && !ISA_HAS_MSAC&& reload_completed))
    {
      return gen_split_422 (insn, operands);
    }
 L3259: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && GP_REG_P (true_regnum (operands[1]))))
    {
      return gen_split_426 (insn, operands);
    }
 L3274: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE
   && GP_REG_P (true_regnum (operands[0]))
   && true_regnum (operands[1]) == LO_REGNUM))
    {
      return gen_split_427 (insn, operands);
    }
  goto L3539;

 L4160: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3278;
    }
  goto L3539;

 L3278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == MULT)
    goto L3279;
  goto L3539;

 L3279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L4163;
  goto L3539;

 L4163: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L3280;
    case ZERO_EXTEND:
      goto L3295;
    default:
     break;
   }
  goto L3539;

 L3280: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3281;
    }
  goto L3539;

 L3281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L3282;
  goto L3539;

 L3282: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3283;
    }
  goto L3539;

 L3283: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3284;
  goto L3539;

 L3284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3285;
    }
  goto L3539;

 L3285: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3286;
  goto L3539;

 L3286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L3287;
    }
  goto L3539;

 L3287: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3288;
  goto L3539;

 L3288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3289;
    }
  goto L3539;

 L3289: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000&& reload_completed))
    {
      return gen_split_430 (insn, operands);
    }
  goto L3539;

 L3295: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3296;
    }
  goto L3539;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L3297;
  goto L3539;

 L3297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3298;
    }
  goto L3539;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3299;
  goto L3539;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[3] = x2;
      goto L3300;
    }
  goto L3539;

 L3300: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3301;
  goto L3539;

 L3301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[4] = x2;
      goto L3302;
    }
  goto L3539;

 L3302: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L3303;
  goto L3539;

 L3303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[5] = x2;
      goto L3304;
    }
  goto L3539;

 L3304: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_64BIT && !TARGET_FIX_R4000&& reload_completed))
    {
      return gen_split_431 (insn, operands);
    }
  goto L3539;

 L3364: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L3365;
    case UNSPEC:
      goto L4165;
    case CALL:
      goto L3510;
    default:
     break;
   }
  goto L3539;

 L3365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3366;
    }
 L3517: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3518;
    }
  goto L3539;

 L3366: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_symbolic_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L3367;
    }
  x2 = XEXP (x1, 0);
  goto L3517;

 L3367: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3368;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3517;

 L3368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3369;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3517;

 L3369: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS && cse_not_expected&& reload_completed))
    {
      return gen_split_472 (insn, operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L3517;

 L3518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3519;
  goto L3539;

 L3519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3520;
  goto L3539;

 L3520: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3521;
    }
  goto L3539;

 L3521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3522;

 L3522: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3523;
  goto L3539;

 L3523: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (reload_completed && TARGET_SPLIT_CALLS && (operands[3] = insn)))
    {
      return gen_split_562 (insn, operands);
    }
  goto L3539;

 L4165: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 7)
    goto L3500;
  goto L3539;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3501;
    }
  goto L3539;

 L3501: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3502;
  goto L3539;

 L3502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L3503;
    }
  goto L3539;

 L3503: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed && !TARGET_DEBUG_D_MODE))
    {
      return gen_split_555 (insn, operands);
    }
  goto L3539;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3511;
  goto L3539;

 L3511: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L3512;
    }
  goto L3539;

 L3512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L3513;

 L3513: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3514;
  goto L3539;

 L3514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (reload_completed && TARGET_SPLIT_CALLS && (operands[2] = insn)))
    {
      return gen_split_560 (insn, operands);
    }
  goto L3539;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3526;
  goto L3539;

 L3526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L3527;
    }
  goto L3539;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3528;
  goto L3539;

 L3528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3529;
  goto L3539;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      operands[1] = x4;
      goto L3530;
    }
  goto L3539;

 L3530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L3531;

 L3531: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3532;
  goto L3539;

 L3532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L3533;
    }
  goto L3539;

 L3533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L3534;
  goto L3539;

 L3534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L3535;
  goto L3539;

 L3535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L3536;
  goto L3539;

 L3536: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L3537;
  goto L3539;

 L3537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3538;
  goto L3539;

 L3538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 31
      && (reload_completed && TARGET_SPLIT_CALLS && (operands[4] = insn)))
    {
      return gen_split_563 (insn, operands);
    }
  goto L3539;

 L4114: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2
      && XINT (x0, 1) == 22)
    goto L3455;
  goto L3539;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L3456;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      return gen_split_500 (insn, operands);
    }
  goto L3539;

 L3540: ATTRIBUTE_UNUSED_LABEL
  if ((reload_completed))
    {
      return gen_split_569 (insn, operands);
    }
  goto L3541;

 L3542: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, CCV4mode))
    {
      operands[0] = x1;
      goto L3543;
    }
  goto ret0;

 L3543: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCV4mode)
    goto L4166;
  goto ret0;

 L4166: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC)
    goto L4168;
  goto ret0;

 L4168: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 5)
    goto L4170;
  goto ret0;

 L4170: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 201LL:
      goto L3544;
    case 203LL:
      goto L3553;
    default:
      break;
    }
  goto ret0;

 L3544: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3545;
    }
  goto ret0;

 L3545: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3546;
    }
  goto ret0;

 L3546: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3547;
    }
  goto ret0;

 L3547: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L3548;
    }
  goto ret0;

 L3548: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3549;
    }
  goto ret0;

 L3549: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_PAIRED_SINGLE_FLOAT&& reload_completed))
    {
      return gen_split_576 (insn, operands);
    }
  goto ret0;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SFmode))
    {
      operands[1] = x2;
      goto L3554;
    }
  goto ret0;

 L3554: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SFmode))
    {
      operands[2] = x2;
      goto L3555;
    }
  goto ret0;

 L3555: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SFmode))
    {
      operands[3] = x2;
      goto L3556;
    }
  goto ret0;

 L3556: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (register_operand (x2, V2SFmode))
    {
      operands[4] = x2;
      goto L3557;
    }
  goto ret0;

 L3557: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (const_int_operand (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3558;
    }
  goto ret0;

 L3558: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_MIPS3D&& reload_completed))
    {
      return gen_split_577 (insn, operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L4172;
    case SET:
      goto L3218;
    default:
     break;
   }
  goto ret0;

 L4172: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L3129;
    case 2:
      goto L3145;
    default:
      break;
    }
  goto ret0;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3130;
  goto ret0;

 L3130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3131;
    }
  goto ret0;

 L3131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L4174;
  goto ret0;

 L4174: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L3132;
  if (macc_msac_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3207;
    }
  goto ret0;

 L3132: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3133;
    }
  goto ret0;

 L3133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3134;
    }
  goto ret0;

 L3134: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3135;
  goto ret0;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3136;
    }
  goto ret0;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3137;
  goto ret0;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L3138;
  goto ret0;

 L3138: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3139;
  goto ret0;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L3140;
    }
  goto ret0;

 L3140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L3141;
  goto ret0;

 L3141: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3142;
  goto ret0;

 L3142: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && (GENERATE_MULT3_SI && peep2_reg_dead_p (2, operands[0])))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_418 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3207: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3208;
  goto ret0;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3209;
    }
  goto ret0;

 L3209: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L3210;
  goto ret0;

 L3210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SCRATCH)
    goto L3211;
  goto ret0;

 L3211: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3212;
  goto ret0;

 L3212: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3213;
    }
  goto ret0;

 L3213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L3214;
  goto ret0;

 L3214: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3215;
  goto ret0;

 L3215: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_423 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3145: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3146;
  goto ret0;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3147;
    }
  goto ret0;

 L3147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L3148;
  goto ret0;

 L3148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3149;
    }
  goto ret0;

 L3149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3150;
    }
  goto ret0;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3151;
  goto ret0;

 L3151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3152;
    }
  goto ret0;

 L3152: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3153;
  goto ret0;

 L3153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L3154;
    }
  goto ret0;

 L3154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L3155;
  goto ret0;

 L3155: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L3156;
  goto ret0;

 L3156: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[3])
      && (ISA_HAS_MACC && !GENERATE_MULT3_SI))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_419 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L3218: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L4176;
    case DImode:
      goto L4177;
    default:
      break;
    }
  goto ret0;

 L4176: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L3219;
    }
  goto ret0;

 L3219: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SImode))
    {
      operands[2] = x1;
      goto L3220;
    }
  goto ret0;

 L3220: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == PARALLEL
      && XVECLEN (x1, 0) == 3)
    goto L3221;
  goto ret0;

 L3221: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L3222;
  goto ret0;

 L3222: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3223;
    }
 L3234: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[1]))
    goto L3235;
  goto ret0;

 L3223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3224;
    }
  x3 = XEXP (x2, 0);
  goto L3234;

 L3224: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3225;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L3234;

 L3225: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L3226;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L3234;

 L3226: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L3227;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L3234;

 L3227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (GENERATE_MULT3_SI
   && true_regnum (operands[1]) == LO_REGNUM
   && peep2_reg_dead_p (2, operands[1])
   && GP_REG_P (true_regnum (operands[3]))))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_424 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L3234;

 L3235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (macc_msac_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3236;
    }
  goto ret0;

 L3236: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L3237;
  goto ret0;

 L3237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3238;
    }
  goto ret0;

 L3238: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CLOBBER)
    goto L3239;
  goto ret0;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SCRATCH)
    goto L3240;
  goto ret0;

 L3240: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L3241;
  goto ret0;

 L3241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3242;
    }
  goto ret0;

 L3242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 2
      && XINT (x2, 1) == 26)
    goto L3243;
  goto ret0;

 L3243: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3244;
  goto ret0;

 L3244: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (rtx_equal_p (x3, operands[4])
      && (GENERATE_MULT3_SI && peep2_reg_dead_p (3, operands[1])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_425 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;

 L4177: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L3360;
    }
  goto ret0;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == HIGH)
    goto L3361;
  goto ret0;

 L3361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_symbolic_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L3362;
    }
  goto ret0;

 L3362: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if ((TARGET_EXPLICIT_RELOCS && ABI_HAS_64BIT_SYMBOLS))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_471 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

