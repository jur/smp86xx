/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      extract_constrain_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0) - (insn_current_reference_address (insn))) <= (131064)) && (((insn_current_reference_address (insn)) - (INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[1]) == LABEL_REF ? XEXP (operands[1], 0) : operands[1])) : 0)) <= (131068)))
        {
	  return 4;
        }
      else if ((flag_pic) != (0))
        {
	  return 24 /* 0x18 */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 327:  /* jump */
      extract_constrain_insn_cached (insn);
      if (((flag_pic) == (0)) || ((abs ((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - ((insn_current_reference_address (insn)) + (4)))) < (131072)))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
    case 327:  /* jump */
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 348:  /* call_value_multiple_internal */
    case 346:  /* call_value_internal */
    case 344:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_YES))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_YES))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((which_alternative == 1) && ((TARGET_MIPS16) != (0)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else
        {
	  return 4;
        }

    case 229:  /* *movdf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 8;
        }
      else
        {
	  if (which_alternative == 3)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  if (which_alternative == 1)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 227:  /* *movdf_hardfloat_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x1c))
        {
	  if (((1 << which_alternative) & 0x104))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0xe0))
        {
	  return 8;
        }
      else
        {
	  if (((1 << which_alternative) & 0x104))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else
        {
	  if (which_alternative == 3)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 224:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (which_alternative == 1)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1c))
        {
	  if (((1 << which_alternative) & 0x104))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0xe0))
        {
	  return 4;
        }
      else
        {
	  if (((1 << which_alternative) & 0x104))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 222:  /* *movqi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 8;
        }
      else
        {
	  if (which_alternative == 5)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 4)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 8;
	    }
	  else
	    {
	      return 12 /* 0xc */;
	    }
        }
      else
        {
	  if (which_alternative == 5)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (which_alternative == 2)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 4;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 4;
        }
      else
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  if (((1 << which_alternative) & 0x6))
	    {
	      return mips_const_insns (operands[1]) * 4;
	    }
	  else if (((1 << which_alternative) & 0x4088))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 8)
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else if (((1 << which_alternative) & 0x3c00))
        {
	  return 4;
        }
      else if (which_alternative == 14)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 15)
        {
	  return 4;
        }
      else
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 4)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 8;
	    }
	  else
	    {
	      return 12 /* 0xc */;
	    }
        }
      else
        {
	  if (which_alternative == 5)
	    {
	      return mips_const_insns (operands[1]) * 4;
	    }
	  else if (which_alternative == 6)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1e))
        {
	  if (((1 << which_alternative) & 0x6))
	    {
	      return mips_const_insns (operands[1]) * 4;
	    }
	  else if (((1 << which_alternative) & 0x1088))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 8)
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else if (which_alternative == 10)
        {
	  return 4;
        }
      else if (which_alternative == 11)
        {
	  return 8;
        }
      else if (which_alternative == 12)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 13)
        {
	  return 8;
        }
      else
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 8;
        }
      else if (which_alternative == 4)
        {
	  return 12 /* 0xc */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  if (which_alternative == 5)
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else
        {
	  return 8;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  if (((1 << which_alternative) & 0x84))
	    {
	      return mips_fetch_insns (operands[1]) * 4;
	    }
	  else
	    {
	      return mips_fetch_insns (operands[0]) * 4;
	    }
        }
      else if (((1 << which_alternative) & 0x70))
        {
	  return 8;
        }
      else if (which_alternative == 7)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else if (which_alternative == 8)
        {
	  return 8;
        }
      else
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }

    case 199:  /* *movdi_ra */
    case 198:  /* *movsi_ra */
    case 181:  /* mov_sdr */
    case 180:  /* mov_swr */
    case 179:  /* mov_sdl */
    case 178:  /* mov_swl */
      extract_constrain_insn_cached (insn);
      return mips_fetch_insns (operands[0]) * 4;

    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      return mips_fetch_insns (operands[1]) * 4;

    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }
      else
        {
	  return 4;
        }

    case 162:  /* extendqihi2 */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return mips_fetch_insns (operands[1]) * 4;
        }

    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return mips_fetch_insns (operands[0]) * 4;
        }
      else if ((TARGET_MIPS16) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 91:  /* udivmoddi4 */
    case 90:  /* udivmodsi4 */
    case 89:  /* divmoddi4 */
    case 88:  /* divmodsi4 */
      extract_constrain_insn_cached (insn);
      return mips_idiv_insns () * 4;

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 35:  /* *msac */
    case 34:  /* *macc */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_VR4120) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 30:  /* muldi3_internal */
    case 28:  /* muldi3_mult3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_VR4120) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 15:  /* *addsi3_extended_mips16 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 185:  /* *xgot_hidi */
    case 184:  /* *xgot_hisi */
    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
    case 328:  /* *mips.md:4639 */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 197:  /* *lowdi_mips16 */
    case 196:  /* *lowsi_mips16 */
    case 36:  /* *msac_using_macc */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 25:  /* *muldf3_r4300 */
    case 24:  /* *mulsf3_r4300 */
      return 8;

    case 369:  /* align */
      extract_constrain_insn_cached (insn);
      return (1 << INTVAL (operands[0])) - 1;

    case 368:  /* consttable_float */
      extract_constrain_insn_cached (insn);
      return GET_MODE_SIZE (GET_MODE (operands[0]));

    case 367:  /* consttable_int */
      extract_constrain_insn_cached (insn);
      return INTVAL (operands[1]);

    case 338:  /* exception_receiver */
    case 238:  /* loadgp */
    case 102:  /* absdi2 */
    case 101:  /* abssi2 */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
      return 12 /* 0xc */;

    case 333:  /* blockage */
    case 239:  /* loadgp_blockage */
      return 0;

    case 304:  /* *sleu_di_mips16 */
    case 303:  /* *sleu_si_mips16 */
    case 290:  /* *sle_di_mips16 */
    case 289:  /* *sle_si_mips16 */
      extract_insn_cached (insn);
      if (m16_uimm8_m1_1 (operands[2], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 300:  /* *sltu_di_mips16 */
    case 299:  /* *sltu_si_mips16 */
    case 286:  /* *slt_di_mips16 */
    case 285:  /* *slt_si_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 327:  /* jump */
    case 256:  /* *mips.md:4061 */
      return 16 /* 0x10 */;

    case 255:  /* *lshrdi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 253:  /* *ashldi3_mips16 */
    case 252:  /* *lshrsi3_mips16 */
    case 251:  /* *ashrsi3_mips16 */
    case 250:  /* *ashlsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 240:  /* cprestore */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
    case 183:  /* *lea64 */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
      return 24 /* 0x18 */;

    case 182:  /* *lea_high64 */
      return 20 /* 0x14 */;

    case 167:  /* fix_truncsfsi2_macro */
    case 165:  /* fix_truncdfsi2_macro */
      return 36 /* 0x24 */;

    case 128:  /* *mips.md:2099 */
    case 127:  /* *mips.md:2099 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 107:  /* ffsdi2 */
    case 106:  /* ffssi2 */
      return 28 /* 0x1c */;

    case 100:  /* *rsqrtv2sfb */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 99:  /* *rsqrtdfb */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 98:  /* *rsqrtsfb */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 97:  /* *rsqrtv2sfa */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 96:  /* *rsqrtdfa */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 95:  /* *rsqrtsfa */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 94:  /* sqrtv2sf2 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 93:  /* sqrtdf2 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 92:  /* sqrtsf2 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 87:  /* *recipv2sf3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 86:  /* *recipdf3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 85:  /* *recipsf3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 84:  /* *divv2sf3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 83:  /* *divdf3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 82:  /* *divsf3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_SB1) != (0))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 13:  /* *adddi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm5_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 12:  /* *addsi3_mips16 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 4;
	    }
	  else
	    {
	      return 8;
	    }
        }
      else
        {
	  return 4;
        }

    case 11:  /* *adddi3_sp2 */
      extract_insn_cached (insn);
      if (m16_uimm5_4 (operands[1], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 10:  /* *addsi3_sp2 */
      extract_insn_cached (insn);
      if (m16_uimm8_4 (operands[1], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 9:  /* *adddi3_sp1 */
    case 8:  /* *addsi3_sp1 */
      extract_insn_cached (insn);
      if (m16_simm8_8 (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((mips_tune) == (CPU_R5500)))) || ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 1) && (((TARGET_FLOAT64) != (0)) || ((TARGET_FLOAT64) == (0))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 372:  /* mips_cond_move_tf_ps */
    case 371:  /* *movcc_v2sf_di */
    case 370:  /* *movcc_v2sf_si */
    case 366:  /* *movdf_on_cc */
    case 365:  /* *movsf_on_cc */
    case 364:  /* *movdf_on_di */
    case 363:  /* *movsf_on_di */
    case 362:  /* *movdf_on_si */
    case 361:  /* *movsf_on_si */
    case 360:  /* *movdi_on_cc */
    case 359:  /* *movsi_on_cc */
    case 358:  /* *movdi_on_di */
    case 357:  /* *movsi_on_di */
    case 356:  /* *movdi_on_si */
    case 355:  /* *movsi_on_si */
    case 350:  /* prefetch */
    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
      if (((mips_tune) == (CPU_SB1)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xf))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 228:  /* *movdf_softfloat */
    case 224:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x184))) || ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 8) || ((which_alternative == 2) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 2) && ((TARGET_FLOAT64) == (0))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 5)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7))) || (((((mips_tune) == (CPU_SB1))) && (which_alternative == 2)) || ((which_alternative == 7) && (((mips_tune) == (CPU_SB1))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5500))) || ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) || ((TARGET_FLOAT64) == (0)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x86))) || ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 2) || ((which_alternative == 7) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 7) && ((TARGET_FLOAT64) == (0))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x408f))) || ((((mips_tune) == (CPU_SB1))) && ((((((1 << which_alternative) & 0x4008)) || ((which_alternative == 7) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 7) && ((TARGET_FLOAT64) == (0)))) || (which_alternative == 12))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7f))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 6)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x108f))) || ((((mips_tune) == (CPU_SB1))) && ((((((1 << which_alternative) & 0x1008)) || ((which_alternative == 7) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 7) && ((TARGET_FLOAT64) == (0)))) || (which_alternative == 10))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f))) || ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 5) || ((which_alternative == 7) && (! (lo_operand (operands[1], VOIDmode))))) || ((which_alternative == 7) && (lo_operand (operands[1], VOIDmode))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x87))) || ((((mips_tune) == (CPU_SB1))) && ((((((1 << which_alternative) & 0x84)) || ((which_alternative == 5) && (! (lo_operand (operands[1], VOIDmode))))) || ((which_alternative == 5) && (lo_operand (operands[1], VOIDmode)))) || (which_alternative == 4))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((mips_tune) == (CPU_R5500)))) || (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_SB1)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 36:  /* *msac_using_macc */
      if ((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3))) || (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3))) || ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 35:  /* *msac */
    case 34:  /* *macc */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      if ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_SB1)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 197:  /* *lowdi_mips16 */
    case 196:  /* *lowsi_mips16 */
    case 195:  /* *lowdi */
    case 194:  /* *lowsi */
    case 141:  /* *mips.md:2265 */
    case 140:  /* *mips.md:2256 */
    case 139:  /* *mips.md:2247 */
    case 130:  /* *nordi3 */
    case 129:  /* *norsi3 */
    case 128:  /* *mips.md:2099 */
    case 127:  /* *mips.md:2099 */
    case 126:  /* *mips.md:2088 */
    case 125:  /* *mips.md:2088 */
    case 124:  /* *iordi3_mips16 */
    case 123:  /* *iorsi3_mips16 */
    case 122:  /* *iordi3 */
    case 121:  /* *iorsi3 */
    case 120:  /* *anddi3_mips16 */
    case 119:  /* *andsi3_mips16 */
    case 118:  /* *anddi3 */
    case 117:  /* *andsi3 */
    case 116:  /* one_cmpldi2 */
    case 115:  /* one_cmplsi2 */
    case 111:  /* negdi2 */
    case 110:  /* negsi2 */
    case 21:  /* *subsi3_extended */
    case 20:  /* subdi3 */
    case 19:  /* subsi3 */
    case 15:  /* *addsi3_extended_mips16 */
    case 14:  /* *addsi3_extended */
    case 13:  /* *adddi3_mips16 */
    case 12:  /* *addsi3_mips16 */
    case 11:  /* *adddi3_sp2 */
    case 10:  /* *addsi3_sp2 */
    case 9:  /* *adddi3_sp1 */
    case 8:  /* *addsi3_sp1 */
    case 7:  /* *adddi3 */
    case 6:  /* *addsi3 */
      if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 354:  /* hazard_nop */
    case 353:  /* nop */
    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 304:  /* *sleu_di_mips16 */
    case 303:  /* *sleu_si_mips16 */
    case 302:  /* *sleu_di */
    case 301:  /* *sleu_si */
    case 300:  /* *sltu_di_mips16 */
    case 299:  /* *sltu_si_mips16 */
    case 298:  /* *sltu_di */
    case 297:  /* *sltu_si */
    case 296:  /* *sge_di */
    case 295:  /* *sge_si */
    case 294:  /* *sgtu_di_mips16 */
    case 293:  /* *sgtu_si_mips16 */
    case 292:  /* *sgtu_di */
    case 291:  /* *sgtu_si */
    case 290:  /* *sle_di_mips16 */
    case 289:  /* *sle_si_mips16 */
    case 288:  /* *sle_di */
    case 287:  /* *sle_si */
    case 286:  /* *slt_di_mips16 */
    case 285:  /* *slt_si_mips16 */
    case 284:  /* *slt_di */
    case 283:  /* *slt_si */
    case 282:  /* *sge_di */
    case 281:  /* *sge_si */
    case 280:  /* *sgt_di_mips16 */
    case 279:  /* *sgt_si_mips16 */
    case 278:  /* *sgt_di */
    case 277:  /* *sgt_si */
    case 276:  /* *sne_di */
    case 275:  /* *sne_si */
    case 274:  /* *seq_di_mips16 */
    case 273:  /* *seq_si_mips16 */
    case 272:  /* *seq_di */
    case 271:  /* *seq_si */
    case 258:  /* rotrdi3 */
    case 257:  /* rotrsi3 */
    case 256:  /* *mips.md:4061 */
    case 255:  /* *lshrdi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 253:  /* *ashldi3_mips16 */
    case 252:  /* *lshrsi3_mips16 */
    case 251:  /* *ashrsi3_mips16 */
    case 250:  /* *ashlsi3_mips16 */
    case 249:  /* *lshrsi3_extend */
    case 248:  /* *ashrsi3_extend */
    case 247:  /* *ashlsi3_extend */
    case 246:  /* *lshrdi3 */
    case 245:  /* *ashrdi3 */
    case 244:  /* *ashldi3 */
    case 243:  /* *lshrsi3 */
    case 242:  /* *ashrsi3 */
    case 241:  /* *ashlsi3 */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
    case 136:  /* *mips.md:2201 */
    case 135:  /* *mips.md:2191 */
    case 109:  /* clzdi2 */
    case 108:  /* clzsi2 */
    case 2:  /* *conditional_trapdi */
    case 1:  /* *conditional_trapsi */
    case 0:  /* trap */
      if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 405:  /* mips_recip2_ps */
    case 404:  /* mips_recip2_d */
    case 403:  /* mips_recip2_s */
    case 399:  /* mips_rsqrt2_ps */
    case 398:  /* mips_rsqrt2_d */
    case 397:  /* mips_rsqrt2_s */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 8;
        }
      else
        {
	  return 5;
        }

    case 402:  /* mips_recip1_ps */
    case 401:  /* mips_recip1_d */
    case 400:  /* mips_recip1_s */
    case 396:  /* mips_rsqrt1_ps */
    case 395:  /* mips_rsqrt1_d */
    case 394:  /* mips_rsqrt1_s */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else
        {
	  return 5;
        }

    case 372:  /* mips_cond_move_tf_ps */
    case 371:  /* *movcc_v2sf_di */
    case 370:  /* *movcc_v2sf_si */
    case 366:  /* *movdf_on_cc */
    case 365:  /* *movsf_on_cc */
    case 364:  /* *movdf_on_di */
    case 363:  /* *movsf_on_di */
    case 362:  /* *movdf_on_si */
    case 361:  /* *movsf_on_si */
    case 360:  /* *movdi_on_cc */
    case 359:  /* *movsi_on_cc */
    case 358:  /* *movdi_on_di */
    case 357:  /* *movsi_on_di */
    case 356:  /* *movdi_on_si */
    case 355:  /* *movsi_on_si */
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 352:  /* *prefetch_indexed_di */
    case 351:  /* *prefetch_indexed_si */
      if (((mips_tune) == (CPU_SB1)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 389:  /* mips_cabs_cond_ps */
    case 388:  /* mips_c_cond_ps */
    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
    case 385:  /* mips_cabs_cond_d */
    case 384:  /* mips_cabs_cond_s */
    case 326:  /* sungt_df */
    case 325:  /* sunge_df */
    case 324:  /* sgt_df */
    case 323:  /* sge_df */
    case 322:  /* sungt_sf */
    case 321:  /* sunge_sf */
    case 320:  /* sgt_sf */
    case 319:  /* sge_sf */
    case 318:  /* sle_df */
    case 317:  /* slt_df */
    case 316:  /* seq_df */
    case 315:  /* sunle_df */
    case 314:  /* sunlt_df */
    case 313:  /* suneq_df */
    case 312:  /* sunordered_df */
    case 311:  /* sle_sf */
    case 310:  /* slt_sf */
    case 309:  /* seq_sf */
    case 308:  /* sunle_sf */
    case 307:  /* sunlt_sf */
    case 306:  /* suneq_sf */
    case 305:  /* sunordered_sf */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000)))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 3;
        }

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 349:  /* call_value_multiple_split */
    case 348:  /* call_value_multiple_internal */
    case 347:  /* call_value_split */
    case 346:  /* call_value_internal */
    case 345:  /* call_split */
    case 344:  /* call_internal */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 328:  /* *mips.md:4639 */
    case 327:  /* jump */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 0;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 0;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 6;
        }
      else
        {
	  return 1;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if (((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (! (fpr_operand (operands[0], VOIDmode))))) || ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((which_alternative == 1) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || ((((mips_tune) == (CPU_R5000))) || (((which_alternative == 1) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0)))))))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || (((which_alternative == 1) && (((mips_tune) == (CPU_R7000)))) || ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 1) && ((TARGET_FLOAT64) != (0))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 1) && ((TARGET_FLOAT64) == (0))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0)))
        {
	  return 9;
        }
      else if (which_alternative != 0)
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 5;
        }
      else
        {
	  return 1;
        }

    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((which_alternative == 5) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x1a)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1a)))
        {
	  return 2;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R4300))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((which_alternative == 5) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1a)))
        {
	  return 2;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5400))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 2;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R7000))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x5)))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x18))) || ((which_alternative == 5) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x18)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x18)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 3)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4130))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4300))) && (which_alternative == 3)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 3)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 3)) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3)))))
        {
	  return 2;
        }
      else if (((which_alternative == 4) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R5500))))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 2;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 3))
        {
	  return 3;
        }
      else if (((which_alternative == 4) && (((mips_tune) == (CPU_R9000)))) || (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7))) || (((((mips_tune) == (CPU_SB1))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_SB1)))))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3)))
        {
	  return 2;
        }
      else if (((which_alternative == 4) && (((mips_tune) == (CPU_SR71000)))) || (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 224:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 1)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4130))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4300))) && (which_alternative == 1)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 1)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 1)) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 1)))))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5500))))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_R9000)))) || (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_SB1))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_SB1)))))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_SR71000)))) || (which_alternative == 0))
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x166)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 8))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x1ef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x166)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x166)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x62)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x104)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x62)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x167)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x63)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 8))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 2) && ((TARGET_FLOAT64) != (0))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 2) && ((TARGET_FLOAT64) == (0))) || (!((1 << which_alternative) & 0x1ef))) || (which_alternative == 3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 7))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x62)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x62)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 8))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1ef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 3;
        }
      else if (!((1 << which_alternative) & 0x1e7))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 5)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R4130))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4300))) && (which_alternative == 5)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 5)) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5)))))
        {
	  return 2;
        }
      else if (((which_alternative == 6) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R5500))))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if (((which_alternative == 6) && (((mips_tune) == (CPU_R9000)))) || (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f))) || (((((mips_tune) == (CPU_SB1))) && (which_alternative == 5)) || ((which_alternative == 6) && (((mips_tune) == (CPU_SB1)))))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1f))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5)))
        {
	  return 2;
        }
      else if (((which_alternative == 6) && (((mips_tune) == (CPU_SR71000)))) || (((1 << which_alternative) & 0x1f)))
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x34)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 3)) || ((which_alternative == 7) && (((mips_tune) == (CPU_R4130)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x34)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x34)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3))) || ((which_alternative == 7) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R7000))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xb)))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R9000))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x70)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_SB1)))) || ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x30)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x30)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 6;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 218:  /* *sdxc1_di */
    case 217:  /* *sdxc1_di */
    case 216:  /* *swxc1_di */
    case 215:  /* *sdxc1_si */
    case 214:  /* *sdxc1_si */
    case 213:  /* *swxc1_si */
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R5000))) || (((mips_tune) == (CPU_R5400)))))))))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((TARGET_FLOAT64) != (0)))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((TARGET_FLOAT64) == (0)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 9;
        }
      else
        {
	  return 3;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0xb5)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0xb5)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0xb5)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5400))) && (which_alternative == 3)) || ((which_alternative == 8) && (((mips_tune) == (CPU_R5400)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x31)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x31)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x31)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xf5)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x71)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) != (0))))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (((which_alternative == 7) && ((TARGET_FLOAT64) == (0))) || (which_alternative == 3))) || ((which_alternative == 8) && (((mips_tune) == (CPU_SB1)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x31)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x31)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 9;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x31)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x84))
        {
	  return 3;
        }
      else if (!((1 << which_alternative) & 0xf7))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0xedc8)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x4008)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0xefef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0xedc8)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0xedc8)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1007)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1007)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 12))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xfde8)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 12))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xad60)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x4008)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) != (0))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 7) && ((TARGET_FLOAT64) == (0))) || (!((1 << which_alternative) & 0xffef))) || (which_alternative == 9)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 12) || ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))) || ((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0xad40)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0xad40)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x4008)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xffef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 9))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1007)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x4088))
        {
	  return 3;
        }
      else if (!((1 << which_alternative) & 0xfdef))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0xad40))
        {
	  return 2;
        }
      else if (which_alternative == 12)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 6)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R4130))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4300))) && (which_alternative == 6)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 6)) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6)))))
        {
	  return 2;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3f))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f))) || ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3f))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R9000)))) || (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3f))) || (((((mips_tune) == (CPU_SB1))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_SB1)))))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3f))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6)))
        {
	  return 2;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || (((1 << which_alternative) & 0x3f)))
        {
	  return 1;
        }
      else if (which_alternative == 6)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x39c8)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1008)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x3bef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x39c8)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x39c8)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x407)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x407)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 10))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x3de8)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 10))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x2960)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1008)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) != (0))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 7) && ((TARGET_FLOAT64) == (0))) || (!((1 << which_alternative) & 0x3fef))) || (which_alternative == 9)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 10) || ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))) || ((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x2940)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x2940)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1008)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3fef)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 9))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x407)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x1088))
        {
	  return 3;
        }
      else if (!((1 << which_alternative) & 0x3def))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x2940))
        {
	  return 2;
        }
      else if (which_alternative == 10)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 5)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R4130))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4300))) && (which_alternative == 5)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 5)) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5400))) && (which_alternative == 6)) || (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x5f))) || (((which_alternative == 7) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x60)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6)) || (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || (((1 << which_alternative) & 0x1f))))
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x84))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x1c4))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 4))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1c4))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x84))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1c4))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x84))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x140)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x33)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x140)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x13)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 4))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x1d4)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 4))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x173)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 5))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 4))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x140)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x140)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 6;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x33))) || (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x84))
        {
	  return 3;
        }
      else if (!((1 << which_alternative) & 0x1f7))
        {
	  return 1;
        }
      else if (((1 << which_alternative) & 0x140))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 240:  /* cprestore */
    case 199:  /* *movdi_ra */
    case 198:  /* *movsi_ra */
    case 181:  /* mov_sdr */
    case 180:  /* mov_swr */
    case 179:  /* mov_sdl */
    case 178:  /* mov_swl */
      if ((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 171:  /* floatdidf2 */
    case 170:  /* floatsidf2 */
    case 168:  /* fix_truncdfdi2 */
    case 167:  /* fix_truncsfsi2_macro */
    case 166:  /* fix_truncsfsi2_insn */
    case 165:  /* fix_truncdfsi2_macro */
    case 164:  /* fix_truncdfsi2_insn */
    case 163:  /* extendsfdf2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 1;
        }

    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 256:  /* *mips.md:4061 */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R5000))) || (((mips_tune) == (CPU_R5400)))))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4130))))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && ((((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R5400)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_SB1)))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))))
        {
	  return 2;
        }
      else if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4130))))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && ((((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R5400)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_SB1))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 2;
        }
      else if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 0)) || (((which_alternative == 1) && ((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R5400))))) || ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 382:  /* mips_cvt_ps_pw */
    case 381:  /* mips_cvt_pw_ps */
    case 378:  /* vec_extractv2sf */
    case 377:  /* vec_initv2sf_internal */
    case 173:  /* floatdisf2 */
    case 172:  /* floatsisf2 */
    case 169:  /* fix_truncsfdi2 */
    case 131:  /* truncdfsf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R7000))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 1;
        }

    case 379:  /* mips_alnv_ps */
    case 376:  /* mips_plu_ps */
    case 375:  /* mips_pll_ps */
    case 374:  /* mips_puu_ps */
    case 373:  /* mips_pul_ps */
    case 114:  /* negv2sf2 */
    case 113:  /* negdf2 */
    case 112:  /* negsf2 */
    case 105:  /* absv2sf2 */
    case 104:  /* absdf2 */
    case 103:  /* abssf2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))) || (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 99:  /* *rsqrtdfb */
    case 96:  /* *rsqrtdfa */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 118 /* 0x76 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 100:  /* *rsqrtv2sfb */
    case 98:  /* *rsqrtsfb */
    case 97:  /* *rsqrtv2sfa */
    case 95:  /* *rsqrtsfa */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 48 /* 0x30 */;
        }
      else
        {
	  return 54 /* 0x36 */;
        }

    case 93:  /* sqrtdf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 40 /* 0x28 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 122 /* 0x7a */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 94:  /* sqrtv2sf2 */
    case 92:  /* sqrtsf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 28 /* 0x1c */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 62 /* 0x3e */;
        }
      else
        {
	  return 54 /* 0x36 */;
        }

    case 91:  /* udivmoddi4 */
    case 89:  /* divmoddi4 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 74 /* 0x4a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 70 /* 0x46 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 73 /* 0x49 */;
        }
      else
        {
	  return 38 /* 0x26 */;
        }

    case 90:  /* udivmodsi4 */
    case 88:  /* divmodsi4 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 35 /* 0x23 */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 41 /* 0x29 */;
        }
      else
        {
	  return 38 /* 0x26 */;
        }

    case 86:  /* *recipdf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 20 /* 0x14 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 120 /* 0x78 */;
        }
      else
        {
	  return 36 /* 0x24 */;
        }

    case 87:  /* *recipv2sf3 */
    case 85:  /* *recipsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 15 /* 0xf */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 23 /* 0x17 */;
        }

    case 83:  /* *divdf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 120 /* 0x78 */;
        }
      else
        {
	  return 36 /* 0x24 */;
        }

    case 84:  /* *divv2sf3 */
    case 82:  /* *divsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 15 /* 0xf */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 23 /* 0x17 */;
        }

    case 80:  /* *nmsubdf_fastmath */
    case 77:  /* *nmsubdf */
    case 74:  /* *nmadddf_fastmath */
    case 71:  /* *nmadddf */
    case 68:  /* *msubdf */
    case 65:  /* *madddf */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 81:  /* *nmsubv2sf_fastmath */
    case 79:  /* *nmsubsf_fastmath */
    case 78:  /* *nmsubv2sf */
    case 76:  /* *nmsubsf */
    case 75:  /* *nmaddv2sf_fastmath */
    case 73:  /* *nmaddsf_fastmath */
    case 72:  /* *nmaddv2sf */
    case 70:  /* *nmaddsf */
    case 69:  /* *msubv2sf */
    case 67:  /* *msubsf */
    case 66:  /* *maddv2sf */
    case 64:  /* *maddsf */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if (((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))) || (((mips_tune) == (CPU_SR71000))))
        {
	  return 8;
        }
      else
        {
	  return 7;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 0))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_tune) == (CPU_R4000))) && (which_alternative == 0))
        {
	  return 10 /* 0xa */;
        }
      else if ((((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R4130))) && (which_alternative != 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 0))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative != 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative != 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative != 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative != 0)) || ((((mips_tune) == (CPU_SB1))) && (which_alternative != 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 36:  /* *msac_using_macc */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 3;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 35:  /* *msac */
    case 34:  /* *macc */
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5000))) || ((((mips_tune) == (CPU_R5500))) || ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_tune) == (CPU_R4000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x3))) || ((which_alternative == 2) && (((mips_tune) == (CPU_R4130)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x3)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x3)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3)))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((which_alternative == 2) && ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_SR71000)))) || (!((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 32:  /* muldi3_r4000 */
    case 30:  /* muldi3_internal */
    case 28:  /* muldi3_mult3 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R7000))))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 7;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 6;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 31:  /* mulsi3_r4000 */
    case 29:  /* mulsi3_internal */
    case 27:  /* mulsi3_mult3 */
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5500))) || ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 25:  /* *muldf3_r4300 */
    case 23:  /* *muldf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000)))))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 8;
        }

    case 383:  /* mips_mulr_ps */
    case 26:  /* mulv2sf3 */
    case 24:  /* *mulsf3_r4300 */
    case 22:  /* *mulsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 5;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000)))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 7;
        }

    case 197:  /* *lowdi_mips16 */
    case 196:  /* *lowsi_mips16 */
    case 195:  /* *lowdi */
    case 194:  /* *lowsi */
    case 141:  /* *mips.md:2265 */
    case 140:  /* *mips.md:2256 */
    case 139:  /* *mips.md:2247 */
    case 130:  /* *nordi3 */
    case 129:  /* *norsi3 */
    case 128:  /* *mips.md:2099 */
    case 127:  /* *mips.md:2099 */
    case 126:  /* *mips.md:2088 */
    case 125:  /* *mips.md:2088 */
    case 124:  /* *iordi3_mips16 */
    case 123:  /* *iorsi3_mips16 */
    case 122:  /* *iordi3 */
    case 121:  /* *iorsi3 */
    case 120:  /* *anddi3_mips16 */
    case 119:  /* *andsi3_mips16 */
    case 118:  /* *anddi3 */
    case 117:  /* *andsi3 */
    case 116:  /* one_cmpldi2 */
    case 115:  /* one_cmplsi2 */
    case 111:  /* negdi2 */
    case 110:  /* negsi2 */
    case 21:  /* *subsi3_extended */
    case 20:  /* subdi3 */
    case 19:  /* subsi3 */
    case 15:  /* *addsi3_extended_mips16 */
    case 14:  /* *addsi3_extended */
    case 13:  /* *adddi3_mips16 */
    case 12:  /* *addsi3_mips16 */
    case 11:  /* *adddi3_sp2 */
    case 10:  /* *addsi3_sp2 */
    case 9:  /* *adddi3_sp1 */
    case 8:  /* *addsi3_sp1 */
    case 7:  /* *adddi3 */
    case 6:  /* *addsi3 */
      if ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R5400))) || ((((mips_tune) == (CPU_R5500))) || ((((mips_tune) == (CPU_R7000))) || (((mips_tune) == (CPU_R9000)))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 17:  /* subdf3 */
    case 4:  /* adddf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 4;
        }

    case 380:  /* mips_addr_ps */
    case 18:  /* subv2sf3 */
    case 16:  /* subsf3 */
    case 5:  /* addv2sf3 */
    case 3:  /* addsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 6;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))) || ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}


#if AUTOMATON_ALTS
int
insn_alts (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 405:  /* mips_recip2_ps */
    case 404:  /* mips_recip2_d */
    case 403:  /* mips_recip2_s */
    case 402:  /* mips_recip1_ps */
    case 401:  /* mips_recip1_d */
    case 400:  /* mips_recip1_s */
    case 399:  /* mips_rsqrt2_ps */
    case 398:  /* mips_rsqrt2_d */
    case 397:  /* mips_rsqrt2_s */
    case 396:  /* mips_rsqrt1_ps */
    case 395:  /* mips_rsqrt1_d */
    case 394:  /* mips_rsqrt1_s */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 372:  /* mips_cond_move_tf_ps */
    case 371:  /* *movcc_v2sf_di */
    case 370:  /* *movcc_v2sf_si */
    case 366:  /* *movdf_on_cc */
    case 365:  /* *movsf_on_cc */
    case 364:  /* *movdf_on_di */
    case 363:  /* *movsf_on_di */
    case 362:  /* *movdf_on_si */
    case 361:  /* *movsf_on_si */
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 360:  /* *movdi_on_cc */
    case 359:  /* *movsi_on_cc */
    case 358:  /* *movdi_on_di */
    case 357:  /* *movsi_on_di */
    case 356:  /* *movdi_on_si */
    case 355:  /* *movsi_on_si */
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 350:  /* prefetch */
      if (((mips_tune) == (CPU_SB1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 389:  /* mips_cabs_cond_ps */
    case 388:  /* mips_c_cond_ps */
    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
    case 385:  /* mips_cabs_cond_d */
    case 384:  /* mips_cabs_cond_s */
    case 326:  /* sungt_df */
    case 325:  /* sunge_df */
    case 324:  /* sgt_df */
    case 323:  /* sge_df */
    case 322:  /* sungt_sf */
    case 321:  /* sunge_sf */
    case 320:  /* sgt_sf */
    case 319:  /* sge_sf */
    case 318:  /* sle_df */
    case 317:  /* slt_df */
    case 316:  /* seq_df */
    case 315:  /* sunle_df */
    case 314:  /* sunlt_df */
    case 313:  /* suneq_df */
    case 312:  /* sunordered_df */
    case 311:  /* sle_sf */
    case 310:  /* slt_sf */
    case 309:  /* seq_sf */
    case 308:  /* sunle_sf */
    case 307:  /* sunlt_sf */
    case 306:  /* suneq_sf */
    case 305:  /* sunordered_sf */
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 304:  /* *sleu_di_mips16 */
    case 303:  /* *sleu_si_mips16 */
    case 302:  /* *sleu_di */
    case 301:  /* *sleu_si */
    case 300:  /* *sltu_di_mips16 */
    case 299:  /* *sltu_si_mips16 */
    case 298:  /* *sltu_di */
    case 297:  /* *sltu_si */
    case 296:  /* *sge_di */
    case 295:  /* *sge_si */
    case 294:  /* *sgtu_di_mips16 */
    case 293:  /* *sgtu_si_mips16 */
    case 292:  /* *sgtu_di */
    case 291:  /* *sgtu_si */
    case 290:  /* *sle_di_mips16 */
    case 289:  /* *sle_si_mips16 */
    case 288:  /* *sle_di */
    case 287:  /* *sle_si */
    case 286:  /* *slt_di_mips16 */
    case 285:  /* *slt_si_mips16 */
    case 284:  /* *slt_di */
    case 283:  /* *slt_si */
    case 282:  /* *sge_di */
    case 281:  /* *sge_si */
    case 280:  /* *sgt_di_mips16 */
    case 279:  /* *sgt_si_mips16 */
    case 278:  /* *sgt_di */
    case 277:  /* *sgt_si */
    case 276:  /* *sne_di */
    case 275:  /* *sne_si */
    case 274:  /* *seq_di_mips16 */
    case 273:  /* *seq_si_mips16 */
    case 272:  /* *seq_di */
    case 271:  /* *seq_si */
      if ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 349:  /* call_value_multiple_split */
    case 348:  /* call_value_multiple_internal */
    case 347:  /* call_value_split */
    case 346:  /* call_value_internal */
    case 345:  /* call_split */
    case 344:  /* call_internal */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 328:  /* *mips.md:4639 */
    case 327:  /* jump */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      if ((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R5400))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) || (((mips_tune) == (CPU_R9000))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_R5400)))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 1;
        }

    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || (((which_alternative == 1) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || ((((mips_tune) == (CPU_R5000))) || ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 1) && (((TARGET_FLOAT64) != (0)) || ((TARGET_FLOAT64) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if (((which_alternative == 1) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0)))
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 1;
        }

    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 1)) || (((which_alternative == 5) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x1a)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x6))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1a))) || (((which_alternative == 5) && (((mips_tune) == (CPU_R4300)))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 1)) || (((which_alternative == 5) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1a))) || (((which_alternative == 5) && (((mips_tune) == (CPU_R5000)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x6))))))))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x19))) || ((which_alternative == 5) && (((mips_tune) == (CPU_R5400)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x19)))
        {
	  return 2;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x6)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 4;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x18))) || ((which_alternative == 5) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 2))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))) || ((((1 << which_alternative) & 0x18)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x18)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x6)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 8;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 3)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 3)) || (((which_alternative == 4) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 3)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 3)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 3)) || (((((mips_tune) == (CPU_R5400))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R5400))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3)))
        {
	  return 2;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_SB1))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3)) || ((which_alternative == 4) && (((mips_tune) == (CPU_SR71000)))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 224:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 1)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 1)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 1)) || (((which_alternative == 2) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 1)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 1)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 1)) || (((((mips_tune) == (CPU_R5400))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SB1))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1)) || ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000)))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x105))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x166))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 7))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0xef))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x167))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x105))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x167))) || ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xe3)))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xe3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xe3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xe2)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 7))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xe3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xe3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 7))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x63)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 8) || ((which_alternative == 2) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 2) && ((TARGET_FLOAT64) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 7))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 0) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))) || ((((1 << which_alternative) & 0x62)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x62)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xef)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 5)) || (((which_alternative == 6) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 5)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R5400))) && (which_alternative == 5)) || ((which_alternative == 6) && (((mips_tune) == (CPU_R5400))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 5)) || ((which_alternative == 6) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 5)) || ((which_alternative == 6) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 5)) || ((which_alternative == 6) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 5)))
        {
	  return 2;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_SB1))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5)) || ((which_alternative == 6) && (((mips_tune) == (CPU_SR71000)))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x44))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x34))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0xc))) || (((which_alternative == 7) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x74))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x44))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x74))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xc))))))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30))) || (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x43)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x33)))
        {
	  return 2;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R5500)))) || ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xc))) || ((which_alternative == 7) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xc)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R9000)))) || ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x70))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 6) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))) || ((((1 << which_alternative) & 0x30)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x30)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xc)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 32 /* 0x20 */;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3))))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 218:  /* *sdxc1_di */
    case 217:  /* *sdxc1_di */
    case 216:  /* *swxc1_di */
    case 215:  /* *sdxc1_si */
    case 214:  /* *sdxc1_si */
    case 213:  /* *swxc1_si */
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 1;
        }

    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R5000))) || ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) || ((TARGET_FLOAT64) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 64 /* 0x40 */;
        }
      else
        {
	  return 1;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0xc4))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0xb5))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0xc))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0xf5))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0xc4))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0xf5))) || (((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x8c))) || ((which_alternative == 8) && (((mips_tune) == (CPU_R5400)))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x33)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x31)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x73)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x71)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((which_alternative == 2) || ((which_alternative == 7) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 7) && ((TARGET_FLOAT64) == (0)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_SB1))) && (which_alternative == 3)) || ((which_alternative == 8) && (((mips_tune) == (CPU_SB1)))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 6) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))) || ((((1 << which_alternative) & 0x31)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x31)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xc)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 64 /* 0x40 */;
        }
      else if (((which_alternative == 8) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x31))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x40a8))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0xedc8))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0xafe7))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0xede8))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x40a8))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0xede8))) || ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xbd67)))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xbd67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xbd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xad47)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1020)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xad67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xbd67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xbd60)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((((1 << which_alternative) & 0x4008)) || ((which_alternative == 7) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 7) && ((TARGET_FLOAT64) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 12))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))) || ((((1 << which_alternative) & 0xad40)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0xad40)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xbfe7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xaf40)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1007)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 6)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (which_alternative == 6)) || (((which_alternative == 7) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 6)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 6)) || (((((mips_tune) == (CPU_R5400))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_R5400))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R5500))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_R9000)))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3f))) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 6)))
        {
	  return 2;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SB1))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6)) || ((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x10a8))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x39c8))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x2be7))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x39e8))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x10a8))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x39e8))) || ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x2d67)))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x2d67)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x2d67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2947)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x420)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x2967)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x2d67)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x2d60)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((((1 << which_alternative) & 0x1008)) || ((which_alternative == 7) && ((TARGET_FLOAT64) != (0)))) || ((which_alternative == 7) && ((TARGET_FLOAT64) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 10))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))) || ((((1 << which_alternative) & 0x2940)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x2940)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x2fe7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x2b40)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x407)))
        {
	  return 8;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x60))) || (((which_alternative == 7) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 5)) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 5)) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x60))))))))
        {
	  return 1;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_R5400)))) || ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 4;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x60))) || ((which_alternative == 7) && (((mips_tune) == (CPU_R7000)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x60)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 2;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 5))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 6))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 7))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x60)))
        {
	  return 4;
        }
      else if (((which_alternative == 7) && (((mips_tune) == (CPU_SR71000)))) || ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f))))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x84))) || (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x1c4))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x143))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1c4))) || ((((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x84))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1c4))) || ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x173)))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x173)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x173)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x143)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x30)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x143)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x173)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x170)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x84)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 3;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((((1 << which_alternative) & 0x30)) || ((((1 << which_alternative) & 0x140)) && (fpr_operand (operands[0], VOIDmode)))) || ((((1 << which_alternative) & 0x140)) && (! (fpr_operand (operands[0], VOIDmode))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x173)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x33)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 240:  /* cprestore */
    case 199:  /* *movdi_ra */
    case 198:  /* *movsi_ra */
    case 181:  /* mov_sdr */
    case 180:  /* mov_swr */
    case 179:  /* mov_sdl */
    case 178:  /* mov_swl */
      if ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) || (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 256:  /* *mips.md:4061 */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R5000))) || ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R4300)))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R5400)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || ((which_alternative == 1) && (((mips_tune) == (CPU_SB1)))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) || ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))) || (((((mips_tune) == (CPU_R4130))) && (which_alternative == 0)) || (((which_alternative == 1) && (((((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R4300)))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))) || (((mips_tune) == (CPU_R5000)))) || (((mips_tune) == (CPU_R5400))))) || (((((mips_tune) == (CPU_R5400))) && (which_alternative == 0)) || (((which_alternative == 1) && (((mips_tune) == (CPU_R5500)))) || ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0)))))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative == 0)) || (((which_alternative == 1) && (((mips_tune) == (CPU_R9000)))) || (((((mips_tune) == (CPU_R9000))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0)))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 354:  /* hazard_nop */
    case 353:  /* nop */
    case 258:  /* rotrdi3 */
    case 257:  /* rotrsi3 */
    case 255:  /* *lshrdi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 253:  /* *ashldi3_mips16 */
    case 252:  /* *lshrsi3_mips16 */
    case 251:  /* *ashrsi3_mips16 */
    case 250:  /* *ashlsi3_mips16 */
    case 249:  /* *lshrsi3_extend */
    case 248:  /* *ashrsi3_extend */
    case 247:  /* *ashlsi3_extend */
    case 246:  /* *lshrdi3 */
    case 245:  /* *ashrdi3 */
    case 244:  /* *ashldi3 */
    case 243:  /* *lshrsi3 */
    case 242:  /* *ashrsi3 */
    case 241:  /* *ashlsi3 */
    case 136:  /* *mips.md:2201 */
    case 135:  /* *mips.md:2191 */
      if ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R4130))) || (((mips_tune) == (CPU_R5400)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 4;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case 382:  /* mips_cvt_ps_pw */
    case 381:  /* mips_cvt_pw_ps */
    case 378:  /* vec_extractv2sf */
    case 377:  /* vec_initv2sf_internal */
    case 173:  /* floatdisf2 */
    case 172:  /* floatsisf2 */
    case 171:  /* floatdidf2 */
    case 170:  /* floatsidf2 */
    case 169:  /* fix_truncsfdi2 */
    case 168:  /* fix_truncdfdi2 */
    case 167:  /* fix_truncsfsi2_macro */
    case 166:  /* fix_truncsfsi2_insn */
    case 165:  /* fix_truncdfsi2_macro */
    case 164:  /* fix_truncdfsi2_insn */
    case 163:  /* extendsfdf2 */
    case 131:  /* truncdfsf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 379:  /* mips_alnv_ps */
    case 376:  /* mips_plu_ps */
    case 375:  /* mips_pll_ps */
    case 374:  /* mips_puu_ps */
    case 373:  /* mips_pul_ps */
    case 114:  /* negv2sf2 */
    case 113:  /* negdf2 */
    case 112:  /* negsf2 */
    case 105:  /* absv2sf2 */
    case 104:  /* absdf2 */
    case 103:  /* abssf2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 100:  /* *rsqrtv2sfb */
    case 99:  /* *rsqrtdfb */
    case 98:  /* *rsqrtsfb */
    case 97:  /* *rsqrtv2sfa */
    case 96:  /* *rsqrtdfa */
    case 95:  /* *rsqrtsfa */
    case 94:  /* sqrtv2sf2 */
    case 93:  /* sqrtdf2 */
    case 92:  /* sqrtsf2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 91:  /* udivmoddi4 */
    case 90:  /* udivmodsi4 */
    case 89:  /* divmoddi4 */
    case 88:  /* divmodsi4 */
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4000))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 86:  /* *recipdf3 */
    case 83:  /* *divdf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4000))) && (which_alternative == 0)) || ((((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 0)) || ((((mips_tune) == (CPU_R4130))) || (((((mips_tune) == (CPU_R4300))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4600))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R4650))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R5000))) && (which_alternative == 0)) || (((((mips_tune) == (CPU_R5400))) && (which_alternative != 0)) || (((mips_tune) == (CPU_R5500))))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 2;
        }
      else if (((((mips_tune) == (CPU_R7000))) && (which_alternative != 0)) || ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1)))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 35:  /* *msac */
    case 34:  /* *macc */
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4000))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || ((((mips_tune) == (CPU_R5000))) || (((mips_tune) == (CPU_R5500)))))))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if ((((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x3))) || (((((mips_tune) == (CPU_R4000))) && (((1 << which_alternative) & 0x3))) || ((((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x3))) || (((which_alternative == 2) && (((mips_tune) == (CPU_R4130)))) || (((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3))) || (((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x3))) || (((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x3))) || (((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x3))) || (((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x3))) || (((which_alternative == 2) && (((mips_tune) == (CPU_R5400)))) || (((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3))) || ((which_alternative == 2) && (((mips_tune) == (CPU_R5500)))))))))))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 2;
        }
      else if (((which_alternative == 2) && (((mips_tune) == (CPU_R7000)))) || (((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3))) || (((which_alternative == 2) && ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))) || ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3))))))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4000))) || ((((mips_tune) == (CPU_R4100))) || ((((mips_tune) == (CPU_R4120))) || ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R9000))) || (((mips_tune) == (CPU_SB1))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 80:  /* *nmsubdf_fastmath */
    case 77:  /* *nmsubdf */
    case 74:  /* *nmadddf_fastmath */
    case 71:  /* *nmadddf */
    case 68:  /* *msubdf */
    case 65:  /* *madddf */
    case 25:  /* *muldf3_r4300 */
    case 23:  /* *muldf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4300))) || (((mips_tune) == (CPU_R5000))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 383:  /* mips_mulr_ps */
    case 87:  /* *recipv2sf3 */
    case 85:  /* *recipsf3 */
    case 84:  /* *divv2sf3 */
    case 82:  /* *divsf3 */
    case 81:  /* *nmsubv2sf_fastmath */
    case 79:  /* *nmsubsf_fastmath */
    case 78:  /* *nmsubv2sf */
    case 76:  /* *nmsubsf */
    case 75:  /* *nmaddv2sf_fastmath */
    case 73:  /* *nmaddsf_fastmath */
    case 72:  /* *nmaddv2sf */
    case 70:  /* *nmaddsf */
    case 69:  /* *msubv2sf */
    case 67:  /* *msubsf */
    case 66:  /* *maddv2sf */
    case 64:  /* *maddsf */
    case 26:  /* mulv2sf3 */
    case 24:  /* *mulsf3_r4300 */
    case 22:  /* *mulsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || ((((mips_tune) == (CPU_R4300))) || ((((mips_tune) == (CPU_R4600))) || ((((mips_tune) == (CPU_R4650))) || (((mips_tune) == (CPU_R5000))))))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 380:  /* mips_addr_ps */
    case 18:  /* subv2sf3 */
    case 17:  /* subdf3 */
    case 16:  /* subsf3 */
    case 5:  /* addv2sf3 */
    case 4:  /* adddf3 */
    case 3:  /* addsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || ((((mips_tune) == (CPU_R3900))) || (((mips_tune) == (CPU_R4300)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_R5500))) || (((mips_tune) == (CPU_R6000))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 2;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 109:  /* clzdi2 */
    case 108:  /* clzsi2 */
    case 2:  /* *conditional_trapdi */
    case 1:  /* *conditional_trapsi */
    case 0:  /* trap */
      if ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 369:  /* align */
    case 368:  /* consttable_float */
    case 367:  /* consttable_int */
    case 352:  /* *prefetch_indexed_di */
    case 351:  /* *prefetch_indexed_si */
    case 337:  /* eh_set_lr_di */
    case 336:  /* eh_set_lr_si */
    case 333:  /* blockage */
    case 239:  /* loadgp_blockage */
    case 238:  /* loadgp */
    case 185:  /* *xgot_hidi */
    case 184:  /* *xgot_hisi */
    case 183:  /* *lea64 */
    case 182:  /* *lea_high64 */
    case 138:  /* *mips.md:2229 */
    case 137:  /* *mips.md:2214 */
    case 107:  /* ffsdi2 */
    case 106:  /* ffssi2 */
    case 102:  /* absdi2 */
    case 101:  /* abssi2 */
    case 36:  /* *msac_using_macc */
      return 1;

    default:
      if ((((mips_tune) == (CPU_R4130))) || ((((mips_tune) == (CPU_R5400))) || (((mips_tune) == (CPU_R5500)))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 8;
        }
      else
        {
	  return 1;
        }

    }
}

#endif

static int
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 405:  /* mips_recip2_ps */
    case 404:  /* mips_recip2_d */
    case 403:  /* mips_recip2_s */
    case 399:  /* mips_rsqrt2_ps */
    case 398:  /* mips_rsqrt2_d */
    case 397:  /* mips_rsqrt2_s */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 186 /* 0xba */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 187 /* 0xbb */;
        }
      else
        {
	  return 257 /* 0x101 */;
        }

    case 402:  /* mips_recip1_ps */
    case 401:  /* mips_recip1_d */
    case 400:  /* mips_recip1_s */
    case 396:  /* mips_rsqrt1_ps */
    case 395:  /* mips_rsqrt1_d */
    case 394:  /* mips_rsqrt1_s */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else
        {
	  return 257 /* 0x101 */;
        }

    case 372:  /* mips_cond_move_tf_ps */
    case 371:  /* *movcc_v2sf_di */
    case 370:  /* *movcc_v2sf_si */
    case 366:  /* *movdf_on_cc */
    case 365:  /* *movsf_on_cc */
    case 364:  /* *movdf_on_di */
    case 363:  /* *movsf_on_di */
    case 362:  /* *movdf_on_si */
    case 361:  /* *movsf_on_si */
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 65 /* 0x41 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 91 /* 0x5b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 155 /* 0x9b */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 175 /* 0xaf */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 215 /* 0xd7 */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 360:  /* *movdi_on_cc */
    case 359:  /* *movsi_on_cc */
    case 358:  /* *movdi_on_di */
    case 357:  /* *movsi_on_di */
    case 356:  /* *movdi_on_si */
    case 355:  /* *movsi_on_si */
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 65 /* 0x41 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 91 /* 0x5b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 146 /* 0x92 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 175 /* 0xaf */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 215 /* 0xd7 */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 354:  /* hazard_nop */
    case 353:  /* nop */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 175 /* 0xaf */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 238 /* 0xee */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 352:  /* *prefetch_indexed_di */
    case 351:  /* *prefetch_indexed_si */
      if (((mips_tune) == (CPU_SB1)))
        {
	  return 170 /* 0xaa */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 350:  /* prefetch */
      if (((mips_tune) == (CPU_SB1)))
        {
	  return 165 /* 0xa5 */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 389:  /* mips_cabs_cond_ps */
    case 388:  /* mips_c_cond_ps */
    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
    case 385:  /* mips_cabs_cond_d */
    case 384:  /* mips_cabs_cond_s */
    case 326:  /* sungt_df */
    case 325:  /* sunge_df */
    case 324:  /* sgt_df */
    case 323:  /* sge_df */
    case 322:  /* sungt_sf */
    case 321:  /* sunge_sf */
    case 320:  /* sgt_sf */
    case 319:  /* sge_sf */
    case 318:  /* sle_df */
    case 317:  /* slt_df */
    case 316:  /* seq_df */
    case 315:  /* sunle_df */
    case 314:  /* sunlt_df */
    case 313:  /* suneq_df */
    case 312:  /* sunordered_df */
    case 311:  /* sle_sf */
    case 310:  /* slt_sf */
    case 309:  /* seq_sf */
    case 308:  /* sunle_sf */
    case 307:  /* sunlt_sf */
    case 306:  /* suneq_sf */
    case 305:  /* sunordered_sf */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 33 /* 0x21 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 82 /* 0x52 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 109 /* 0x6d */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 115 /* 0x73 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 133 /* 0x85 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 154 /* 0x9a */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 190 /* 0xbe */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 231 /* 0xe7 */;
        }
      else
        {
	  return 249 /* 0xf9 */;
        }

    case 304:  /* *sleu_di_mips16 */
    case 303:  /* *sleu_si_mips16 */
    case 302:  /* *sleu_di */
    case 301:  /* *sleu_si */
    case 300:  /* *sltu_di_mips16 */
    case 299:  /* *sltu_si_mips16 */
    case 298:  /* *sltu_di */
    case 297:  /* *sltu_si */
    case 296:  /* *sge_di */
    case 295:  /* *sge_si */
    case 294:  /* *sgtu_di_mips16 */
    case 293:  /* *sgtu_si_mips16 */
    case 292:  /* *sgtu_di */
    case 291:  /* *sgtu_si */
    case 290:  /* *sle_di_mips16 */
    case 289:  /* *sle_si_mips16 */
    case 288:  /* *sle_di */
    case 287:  /* *sle_si */
    case 286:  /* *slt_di_mips16 */
    case 285:  /* *slt_si_mips16 */
    case 284:  /* *slt_di */
    case 283:  /* *slt_si */
    case 282:  /* *sge_di */
    case 281:  /* *sge_si */
    case 280:  /* *sgt_di_mips16 */
    case 279:  /* *sgt_si_mips16 */
    case 278:  /* *sgt_di */
    case 277:  /* *sgt_si */
    case 276:  /* *sne_di */
    case 275:  /* *sne_si */
    case 274:  /* *seq_di_mips16 */
    case 273:  /* *seq_si_mips16 */
    case 272:  /* *seq_di */
    case 271:  /* *seq_si */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 176 /* 0xb0 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 219 /* 0xdb */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 349:  /* call_value_multiple_split */
    case 348:  /* call_value_multiple_internal */
    case 347:  /* call_value_split */
    case 346:  /* call_value_internal */
    case 345:  /* call_split */
    case 344:  /* call_internal */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 328:  /* *mips.md:4639 */
    case 327:  /* jump */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 27 /* 0x1b */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 88 /* 0x58 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 132 /* 0x84 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 161 /* 0xa1 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 164 /* 0xa4 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 210 /* 0xd2 */;
        }
      else
        {
	  return 243 /* 0xf3 */;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 0))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 50 /* 0x32 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 92 /* 0x5c */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 131 /* 0x83 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 153 /* 0x99 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 172 /* 0xac */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 217 /* 0xd9 */;
        }
      else if (which_alternative != 0)
        {
	  return 241 /* 0xf1 */;
        }
      else
        {
	  return 242 /* 0xf2 */;
        }

    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 11 /* 0xb */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))
        {
	  return 43 /* 0x2b */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 92 /* 0x5c */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 131 /* 0x83 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 1) && ((TARGET_FLOAT64) != (0))))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 1) && ((TARGET_FLOAT64) == (0))))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 217 /* 0xd9 */;
        }
      else if (which_alternative != 0)
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 242 /* 0xf2 */;
        }

    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
      extract_insn_cached (insn);
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 20 /* 0x14 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 95 /* 0x5f */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 130 /* 0x82 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 151 /* 0x97 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (! (lo_operand (operands[1], VOIDmode))))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (lo_operand (operands[1], VOIDmode)))
        {
	  return 178 /* 0xb2 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 218 /* 0xda */;
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 1))
        {
	  return 0;
        }
      else if ((which_alternative == 5) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x1a)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 2))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1a)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R4300))))
        {
	  return 33 /* 0x21 */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 1))
        {
	  return 43 /* 0x2b */;
        }
      else if ((which_alternative == 5) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1a)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5000))))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 1))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x18)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 68 /* 0x44 */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5400))))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x18)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R5500))))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R7000))))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 2))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_R9000))))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 2))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x18)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x18)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x18)))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 219 /* 0xdb */;
        }
      else if ((which_alternative == 5) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 230 /* 0xe6 */;
        }
      else if (which_alternative == 0)
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 1)
        {
	  return 240 /* 0xf0 */;
        }
      else if (which_alternative == 2)
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 242 /* 0xf2 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 3))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 3))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 3))
        {
	  return 18 /* 0x12 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R4130))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 3))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 3))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 3))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 62 /* 0x3e */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R5400))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R5500))))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 122 /* 0x7a */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R7000))))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 3))
        {
	  return 143 /* 0x8f */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_R9000))))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_SB1))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((which_alternative == 4) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 219 /* 0xdb */;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 3)
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 224:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 1))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 1))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 18 /* 0x12 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4130))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 1))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 1))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 1))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 1))
        {
	  return 62 /* 0x3e */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5500))))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 122 /* 0x7a */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 143 /* 0x8f */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R9000))))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SB1))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 219 /* 0xdb */;
        }
      else if (which_alternative == 0)
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 1)
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 0))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x166)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 7))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 8))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x1ef)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x166)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 33 /* 0x21 */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x104)))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 0))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x166)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x104)))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x1ef)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x62)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 7))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x104)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x62)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 7))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 7))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x104)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x1e7)))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 7))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 8))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 2) && ((TARGET_FLOAT64) != (0))))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 2) && ((TARGET_FLOAT64) == (0))))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x1ef)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3))
        {
	  return 172 /* 0xac */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 7))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 0) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x62)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x62)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 8))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1ef)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x62)))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 230 /* 0xe6 */;
        }
      else if (which_alternative == 7)
        {
	  return 239 /* 0xef */;
        }
      else if (((1 << which_alternative) & 0x104))
        {
	  return 240 /* 0xf0 */;
        }
      else if (!((1 << which_alternative) & 0x1e7))
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0x62))
        {
	  return 242 /* 0xf2 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 5))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 5))
        {
	  return 18 /* 0x12 */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R4130))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 5))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 5))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 62 /* 0x3e */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R5400))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R5500))))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 122 /* 0x7a */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R7000))))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 143 /* 0x8f */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_R9000))))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 5))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_SB1))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((which_alternative == 6) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 219 /* 0xdb */;
        }
      else if (((1 << which_alternative) & 0x1f))
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 5)
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 2))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x34)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 2))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 3))
        {
	  return 19 /* 0x13 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R4130))))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x34)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 6))
        {
	  return 33 /* 0x21 */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 2))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x34)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 6))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 2))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5400))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 2))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 3))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x30)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 2))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 3))
        {
	  return 123 /* 0x7b */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R7000))))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 2))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 3))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R9000))))
        {
	  return 152 /* 0x98 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 2))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 174 /* 0xae */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SB1))))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x30)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x30)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 218 /* 0xda */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 230 /* 0xe6 */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 2)
        {
	  return 240 /* 0xf0 */;
        }
      else if (which_alternative == 3)
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 242 /* 0xf2 */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 244 /* 0xf4 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 218:  /* *sdxc1_di */
    case 217:  /* *sdxc1_di */
    case 216:  /* *swxc1_di */
    case 215:  /* *sdxc1_si */
    case 214:  /* *sdxc1_si */
    case 213:  /* *swxc1_si */
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 64 /* 0x40 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 90 /* 0x5a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 123 /* 0x7b */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 173 /* 0xad */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 214 /* 0xd6 */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 11 /* 0xb */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 43 /* 0x2b */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 50 /* 0x32 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 62 /* 0x3e */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 89 /* 0x59 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 122 /* 0x7a */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((TARGET_FLOAT64) != (0)))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((TARGET_FLOAT64) == (0)))
        {
	  return 169 /* 0xa9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 213 /* 0xd5 */;
        }
      else
        {
	  return 240 /* 0xf0 */;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x84)))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0xb5)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 1))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 2))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 3))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0xb5)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 6))
        {
	  return 33 /* 0x21 */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x84)))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0xb5)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 6))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x84)))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 3))
        {
	  return 63 /* 0x3f */;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_R5400))))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x31)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 1))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x31)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 1))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 1))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x31)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xf7)))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 1))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x31)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 2))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) != (0))))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) == (0))))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 3))
        {
	  return 171 /* 0xab */;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_SB1))))
        {
	  return 172 /* 0xac */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 1))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 6) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x31)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x31)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 2))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 3))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((which_alternative == 8) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x31)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 1))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 230 /* 0xe6 */;
        }
      else if (which_alternative == 1)
        {
	  return 239 /* 0xef */;
        }
      else if (((1 << which_alternative) & 0x84))
        {
	  return 240 /* 0xf0 */;
        }
      else if (!((1 << which_alternative) & 0xf7))
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0x31))
        {
	  return 242 /* 0xf2 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0xedc8)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x4008)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0xffef)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 12))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0xedc8)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 5))
        {
	  return 33 /* 0x21 */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0xedc8)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 5))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0xffef)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 9))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 12))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 12))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 12))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x4088)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0xfdef)))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 12))
        {
	  return 152 /* 0x98 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x4008)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) != (0))))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) == (0))))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0xffef)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 9))
        {
	  return 172 /* 0xac */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 12))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0xad40)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0xad40)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x4008)))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0xffef)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 9))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0xad40)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 12))
        {
	  return 218 /* 0xda */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 230 /* 0xe6 */;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 239 /* 0xef */;
        }
      else if (((1 << which_alternative) & 0x4088))
        {
	  return 240 /* 0xf0 */;
        }
      else if (!((1 << which_alternative) & 0xfdef))
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0xad40))
        {
	  return 242 /* 0xf2 */;
        }
      else if (which_alternative == 12)
        {
	  return 244 /* 0xf4 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 6))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 6))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 6))
        {
	  return 18 /* 0x12 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R4130))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 6))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 6))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 6))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 62 /* 0x3e */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5400))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 89 /* 0x59 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 122 /* 0x7a */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R7000))))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 143 /* 0x8f */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R9000))))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 6))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SB1))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3f)))
        {
	  return 219 /* 0xdb */;
        }
      else if (((1 << which_alternative) & 0x3f))
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 6)
        {
	  return 240 /* 0xf0 */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5))
        {
	  return 3;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x39c8)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x7)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1008)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x3fef)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 10))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x39c8)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 5))
        {
	  return 33 /* 0x21 */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 43 /* 0x2b */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x39c8)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 5))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x3fef)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 9))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 10))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x7)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x7)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 10))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 10))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1088)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x3def)))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 10))
        {
	  return 152 /* 0x98 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1008)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) != (0))))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && ((TARGET_FLOAT64) == (0))))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x3fef)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 9))
        {
	  return 172 /* 0xac */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x7)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 10))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0))))))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x2940)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x2940)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1008)))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x3fef)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 7))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 9))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x2940)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 10))
        {
	  return 218 /* 0xda */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x7)))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 230 /* 0xe6 */;
        }
      else if (((1 << which_alternative) & 0x7))
        {
	  return 239 /* 0xef */;
        }
      else if (((1 << which_alternative) & 0x1088))
        {
	  return 240 /* 0xf0 */;
        }
      else if (!((1 << which_alternative) & 0x3def))
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0x2940))
        {
	  return 242 /* 0xf2 */;
        }
      else if (which_alternative == 10)
        {
	  return 244 /* 0xf4 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 5))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 5))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 5))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 6))
        {
	  return 19 /* 0x13 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R4130))))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 5))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (which_alternative == 5))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 5))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 5))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 6))
        {
	  return 63 /* 0x3f */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5400))))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 6))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R5500))))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 6))
        {
	  return 123 /* 0x7b */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R7000))))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 6))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_R9000))))
        {
	  return 151 /* 0x97 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 5))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 6))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && (! (lo_operand (operands[1], VOIDmode)))))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 7) && (lo_operand (operands[1], VOIDmode))))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 5))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 6))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((which_alternative == 7) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 218 /* 0xda */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x1f)))
        {
	  return 219 /* 0xdb */;
        }
      else if (((1 << which_alternative) & 0x1f))
        {
	  return 239 /* 0xef */;
        }
      else if (which_alternative == 5)
        {
	  return 240 /* 0xf0 */;
        }
      else if (which_alternative == 6)
        {
	  return 241 /* 0xf1 */;
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x84)))
        {
	  return 0;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x1c4)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x84)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 5))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 4))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x1c4)))
        {
	  return 28 /* 0x1c */;
        }
      else if (((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))) && (((1 << which_alternative) & 0x84)))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x1c4)))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x84)))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x140)))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x30)))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (((1 << which_alternative) & 0x3)))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x84)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x140)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 4))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 5))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 4))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 5))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 145 /* 0x91 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 5))
        {
	  return 151 /* 0x97 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 4))
        {
	  return 152 /* 0x98 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 153 /* 0x99 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x84)))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 174 /* 0xae */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (! (lo_operand (operands[1], VOIDmode)))))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((which_alternative == 5) && (lo_operand (operands[1], VOIDmode))))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 4))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x140)) && (fpr_operand (operands[0], VOIDmode))))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((((1 << which_alternative) & 0x140)) && (! (fpr_operand (operands[0], VOIDmode)))))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x84)))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (!((1 << which_alternative) & 0x1f7)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x140)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x30)))
        {
	  return 218 /* 0xda */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 219 /* 0xdb */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 239 /* 0xef */;
        }
      else if (((1 << which_alternative) & 0x84))
        {
	  return 240 /* 0xf0 */;
        }
      else if (!((1 << which_alternative) & 0x1f7))
        {
	  return 241 /* 0xf1 */;
        }
      else if (((1 << which_alternative) & 0x140))
        {
	  return 242 /* 0xf2 */;
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 240:  /* cprestore */
    case 199:  /* *movdi_ra */
    case 198:  /* *movsi_ra */
    case 181:  /* mov_sdr */
    case 180:  /* mov_swr */
    case 179:  /* mov_sdl */
    case 178:  /* mov_swl */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 63 /* 0x3f */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 90 /* 0x5a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 123 /* 0x7b */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 171 /* 0xab */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 212 /* 0xd4 */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 171:  /* floatdidf2 */
    case 170:  /* floatsidf2 */
    case 168:  /* fix_truncdfdi2 */
    case 167:  /* fix_truncsfsi2_macro */
    case 166:  /* fix_truncsfsi2_insn */
    case 165:  /* fix_truncdfsi2_macro */
    case 164:  /* fix_truncdfsi2_insn */
    case 163:  /* extendsfdf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 83 /* 0x53 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 111 /* 0x6f */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 135 /* 0x87 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 232 /* 0xe8 */;
        }
      else
        {
	  return 247 /* 0xf7 */;
        }

    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 256:  /* *mips.md:4061 */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 0;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 11 /* 0xb */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 18 /* 0x12 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 43 /* 0x2b */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 50 /* 0x32 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 62 /* 0x3e */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 89 /* 0x59 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 122 /* 0x7a */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 143 /* 0x8f */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 165 /* 0xa5 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 211 /* 0xd3 */;
        }
      else
        {
	  return 240 /* 0xf0 */;
        }

    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 17 /* 0x11 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4130))))
        {
	  return 18 /* 0x12 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4300))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))
        {
	  return 43 /* 0x2b */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5000))))
        {
	  return 50 /* 0x32 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 68 /* 0x44 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 121 /* 0x79 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 122 /* 0x7a */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 145 /* 0x91 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 174 /* 0xae */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 219 /* 0xdb */;
        }
      else if (which_alternative == 0)
        {
	  return 239 /* 0xef */;
        }
      else
        {
	  return 240 /* 0xf0 */;
        }

    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))))
        {
	  return 0;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 16 /* 0x10 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4130))))
        {
	  return 18 /* 0x12 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4300))))
        {
	  return 28 /* 0x1c */;
        }
      else if ((which_alternative == 1) && ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650)))))
        {
	  return 43 /* 0x2b */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5000))))
        {
	  return 50 /* 0x32 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 86 /* 0x56 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 114 /* 0x72 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 142 /* 0x8e */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 143 /* 0x8f */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 237 /* 0xed */;
        }
      else if (which_alternative == 0)
        {
	  return 239 /* 0xef */;
        }
      else
        {
	  return 240 /* 0xf0 */;
        }

    case 369:  /* align */
    case 368:  /* consttable_float */
    case 367:  /* consttable_int */
    case 337:  /* eh_set_lr_di */
    case 336:  /* eh_set_lr_si */
    case 333:  /* blockage */
    case 239:  /* loadgp_blockage */
    case 238:  /* loadgp */
    case 185:  /* *xgot_hidi */
    case 184:  /* *xgot_hisi */
    case 183:  /* *lea64 */
    case 182:  /* *lea_high64 */
    case 138:  /* *mips.md:2229 */
    case 137:  /* *mips.md:2214 */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 87 /* 0x57 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 142 /* 0x8e */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 162 /* 0xa2 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 163 /* 0xa3 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 209 /* 0xd1 */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 258:  /* rotrdi3 */
    case 257:  /* rotrsi3 */
    case 255:  /* *lshrdi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 253:  /* *ashldi3_mips16 */
    case 252:  /* *lshrsi3_mips16 */
    case 251:  /* *ashrsi3_mips16 */
    case 250:  /* *ashlsi3_mips16 */
    case 249:  /* *lshrsi3_extend */
    case 248:  /* *ashrsi3_extend */
    case 247:  /* *ashlsi3_extend */
    case 246:  /* *lshrdi3 */
    case 245:  /* *ashrdi3 */
    case 244:  /* *ashldi3 */
    case 243:  /* *lshrsi3 */
    case 242:  /* *ashrsi3 */
    case 241:  /* *ashlsi3 */
    case 136:  /* *mips.md:2201 */
    case 135:  /* *mips.md:2191 */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 175 /* 0xaf */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 219 /* 0xdb */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 17 /* 0x11 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R4130))))
        {
	  return 19 /* 0x13 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5400))))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative == 0))
        {
	  return 68 /* 0x44 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R5500))))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative == 0))
        {
	  return 121 /* 0x79 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R7000))))
        {
	  return 123 /* 0x7b */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_R9000))))
        {
	  return 144 /* 0x90 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 145 /* 0x91 */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SB1))))
        {
	  return 171 /* 0xab */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 175 /* 0xaf */;
        }
      else if ((which_alternative == 1) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 219 /* 0xdb */;
        }
      else if (which_alternative == 0)
        {
	  return 239 /* 0xef */;
        }
      else
        {
	  return 241 /* 0xf1 */;
        }

    case 382:  /* mips_cvt_ps_pw */
    case 381:  /* mips_cvt_pw_ps */
    case 378:  /* vec_extractv2sf */
    case 377:  /* vec_initv2sf_internal */
    case 173:  /* floatdisf2 */
    case 172:  /* floatsisf2 */
    case 169:  /* fix_truncsfdi2 */
    case 131:  /* truncdfsf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 83 /* 0x53 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 110 /* 0x6e */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 135 /* 0x87 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 232 /* 0xe8 */;
        }
      else
        {
	  return 247 /* 0xf7 */;
        }

    case 379:  /* mips_alnv_ps */
    case 376:  /* mips_plu_ps */
    case 375:  /* mips_pll_ps */
    case 374:  /* mips_puu_ps */
    case 373:  /* mips_pul_ps */
    case 114:  /* negv2sf2 */
    case 113:  /* negdf2 */
    case 112:  /* negsf2 */
    case 105:  /* absv2sf2 */
    case 104:  /* absdf2 */
    case 103:  /* abssf2 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 3;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 44 /* 0x2c */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 55 /* 0x37 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 81 /* 0x51 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 108 /* 0x6c */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 133 /* 0x85 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 154 /* 0x9a */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 230 /* 0xe6 */;
        }
      else
        {
	  return 248 /* 0xf8 */;
        }

    case 99:  /* *rsqrtdfb */
    case 96:  /* *rsqrtdfa */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 49 /* 0x31 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 85 /* 0x55 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 113 /* 0x71 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 138 /* 0x8a */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 208 /* 0xd0 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 236 /* 0xec */;
        }
      else
        {
	  return 256 /* 0x100 */;
        }

    case 100:  /* *rsqrtv2sfb */
    case 98:  /* *rsqrtsfb */
    case 97:  /* *rsqrtv2sfa */
    case 95:  /* *rsqrtsfa */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 48 /* 0x30 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 58 /* 0x3a */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 84 /* 0x54 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 112 /* 0x70 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 139 /* 0x8b */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 206 /* 0xce */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 235 /* 0xeb */;
        }
      else
        {
	  return 255 /* 0xff */;
        }

    case 93:  /* sqrtdf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 49 /* 0x31 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 59 /* 0x3b */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 80 /* 0x50 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 107 /* 0x6b */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 136 /* 0x88 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 204 /* 0xcc */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 234 /* 0xea */;
        }
      else
        {
	  return 256 /* 0x100 */;
        }

    case 94:  /* sqrtv2sf2 */
    case 92:  /* sqrtsf2 */
      extract_constrain_insn_cached (insn);
      if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 48 /* 0x30 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 58 /* 0x3a */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 79 /* 0x4f */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 106 /* 0x6a */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 137 /* 0x89 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 202 /* 0xca */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 233 /* 0xe9 */;
        }
      else
        {
	  return 255 /* 0xff */;
        }

    case 91:  /* udivmoddi4 */
    case 89:  /* divmoddi4 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 15 /* 0xf */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 26 /* 0x1a */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 32 /* 0x20 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 40 /* 0x28 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 54 /* 0x36 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 73 /* 0x49 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 100 /* 0x64 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 125 /* 0x7d */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 150 /* 0x96 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 183 /* 0xb7 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 223 /* 0xdf */;
        }
      else
        {
	  return 246 /* 0xf6 */;
        }

    case 90:  /* udivmodsi4 */
    case 88:  /* divmodsi4 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 2;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 14 /* 0xe */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 25 /* 0x19 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 40 /* 0x28 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 53 /* 0x35 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 72 /* 0x48 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 99 /* 0x63 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 124 /* 0x7c */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 149 /* 0x95 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 182 /* 0xb6 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 222 /* 0xde */;
        }
      else
        {
	  return 246 /* 0xf6 */;
        }

    case 86:  /* *recipdf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 47 /* 0x2f */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 80 /* 0x50 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 107 /* 0x6b */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 120 /* 0x78 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 136 /* 0x88 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 200 /* 0xc8 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 229 /* 0xe5 */;
        }
      else
        {
	  return 254 /* 0xfe */;
        }

    case 87:  /* *recipv2sf3 */
    case 85:  /* *recipsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 7;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 46 /* 0x2e */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 58 /* 0x3a */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 79 /* 0x4f */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 106 /* 0x6a */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 119 /* 0x77 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 137 /* 0x89 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 198 /* 0xc6 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 228 /* 0xe4 */;
        }
      else
        {
	  return 253 /* 0xfd */;
        }

    case 83:  /* *divdf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 8;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 47 /* 0x2f */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 80 /* 0x50 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 107 /* 0x6b */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 120 /* 0x78 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 136 /* 0x88 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 160 /* 0xa0 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 196 /* 0xc4 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 229 /* 0xe5 */;
        }
      else
        {
	  return 254 /* 0xfe */;
        }

    case 84:  /* *divv2sf3 */
    case 82:  /* *divsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 7;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 46 /* 0x2e */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 58 /* 0x3a */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 79 /* 0x4f */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 106 /* 0x6a */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 119 /* 0x77 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 137 /* 0x89 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 159 /* 0x9f */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 194 /* 0xc2 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 228 /* 0xe4 */;
        }
      else
        {
	  return 253 /* 0xfd */;
        }

    case 80:  /* *nmsubdf_fastmath */
    case 77:  /* *nmsubdf */
    case 74:  /* *nmadddf_fastmath */
    case 71:  /* *nmadddf */
    case 68:  /* *msubdf */
    case 65:  /* *madddf */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 57 /* 0x39 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 78 /* 0x4e */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 105 /* 0x69 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 118 /* 0x76 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 141 /* 0x8d */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 189 /* 0xbd */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 227 /* 0xe3 */;
        }
      else
        {
	  return 252 /* 0xfc */;
        }

    case 81:  /* *nmsubv2sf_fastmath */
    case 79:  /* *nmsubsf_fastmath */
    case 78:  /* *nmsubv2sf */
    case 76:  /* *nmsubsf */
    case 75:  /* *nmaddv2sf_fastmath */
    case 73:  /* *nmaddsf_fastmath */
    case 72:  /* *nmaddv2sf */
    case 70:  /* *nmaddsf */
    case 69:  /* *msubv2sf */
    case 67:  /* *msubsf */
    case 66:  /* *maddv2sf */
    case 64:  /* *maddsf */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 45 /* 0x2d */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 56 /* 0x38 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 77 /* 0x4d */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 104 /* 0x68 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 117 /* 0x75 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 140 /* 0x8c */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 189 /* 0xbd */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 226 /* 0xe2 */;
        }
      else
        {
	  return 251 /* 0xfb */;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (which_alternative == 0))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4000))) && (which_alternative == 0))
        {
	  return 9;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (which_alternative == 0))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative != 0))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (which_alternative == 0))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (which_alternative == 0))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (which_alternative == 0))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (which_alternative == 0))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (which_alternative == 0))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((mips_tune) == (CPU_R5400))) && (which_alternative != 0))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative == 0))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (which_alternative != 0))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((which_alternative == 0) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (which_alternative != 0))
        {
	  return 142 /* 0x8e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative == 0))
        {
	  return 147 /* 0x93 */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (which_alternative != 0))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative != 0))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (which_alternative == 0))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative == 0))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (which_alternative != 0))
        {
	  return 237 /* 0xed */;
        }
      else if (which_alternative != 0)
        {
	  return 239 /* 0xef */;
        }
      else
        {
	  return 245 /* 0xf5 */;
        }

    case 36:  /* *msac_using_macc */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 9;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 39 /* 0x27 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 41 /* 0x29 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 98 /* 0x62 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 147 /* 0x93 */;
        }
      else
        {
	  return 245 /* 0xf5 */;
        }

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 35:  /* *msac */
    case 34:  /* *macc */
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 29 /* 0x1d */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 39 /* 0x27 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 41 /* 0x29 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 51 /* 0x33 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 127 /* 0x7f */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 180 /* 0xb4 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 220 /* 0xdc */;
        }
      else
        {
	  return 245 /* 0xf5 */;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 1;
        }
      else if ((((mips_tune) == (CPU_R4000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 9;
        }
      else if (((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120)))) && (((1 << which_alternative) & 0x3)))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R4130))))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((mips_tune) == (CPU_R4130))) && (((1 << which_alternative) & 0x3)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((mips_tune) == (CPU_R4300))) && (((1 << which_alternative) & 0x3)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((mips_tune) == (CPU_R4600))) && (((1 << which_alternative) & 0x3)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((mips_tune) == (CPU_R4650))) && (((1 << which_alternative) & 0x3)))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((mips_tune) == (CPU_R5000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 51 /* 0x33 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5400))))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((mips_tune) == (CPU_R5500))) && (((1 << which_alternative) & 0x3)))
        {
	  return 98 /* 0x62 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R5500))))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (hilo_operand (operands[0], VOIDmode))))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && ((((1 << which_alternative) & 0x3)) && (! (hilo_operand (operands[0], VOIDmode)))))
        {
	  return 127 /* 0x7f */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R7000))))
        {
	  return 142 /* 0x8e */;
        }
      else if ((((mips_tune) == (CPU_R9000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 147 /* 0x93 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_R9000))))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SB1))))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((1 << which_alternative) & 0x3)))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((mips_tune) == (CPU_SR71000))) && (((1 << which_alternative) & 0x3)))
        {
	  return 220 /* 0xdc */;
        }
      else if ((which_alternative == 2) && (((mips_tune) == (CPU_SR71000))))
        {
	  return 237 /* 0xed */;
        }
      else if (!((1 << which_alternative) & 0x3))
        {
	  return 239 /* 0xef */;
        }
      else
        {
	  return 245 /* 0xf5 */;
        }

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 32:  /* muldi3_r4000 */
    case 30:  /* muldi3_internal */
    case 28:  /* muldi3_mult3 */
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 13 /* 0xd */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 23 /* 0x17 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 30 /* 0x1e */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 39 /* 0x27 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 41 /* 0x29 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 52 /* 0x34 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 70 /* 0x46 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 97 /* 0x61 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 128 /* 0x80 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 181 /* 0xb5 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 221 /* 0xdd */;
        }
      else
        {
	  return 245 /* 0xf5 */;
        }

    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 31:  /* mulsi3_r4000 */
    case 29:  /* mulsi3_internal */
    case 27:  /* mulsi3_mult3 */
      extract_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 1;
        }
      else if (((mips_tune) == (CPU_R4000)))
        {
	  return 9;
        }
      else if ((((mips_tune) == (CPU_R4100))) || (((mips_tune) == (CPU_R4120))))
        {
	  return 12 /* 0xc */;
        }
      else if (((mips_tune) == (CPU_R4130)))
        {
	  return 22 /* 0x16 */;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 29 /* 0x1d */;
        }
      else if (((mips_tune) == (CPU_R4600)))
        {
	  return 39 /* 0x27 */;
        }
      else if (((mips_tune) == (CPU_R4650)))
        {
	  return 41 /* 0x29 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 51 /* 0x33 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 96 /* 0x60 */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (hilo_operand (operands[0], VOIDmode)))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((mips_tune) == (CPU_R7000))) && (! (hilo_operand (operands[0], VOIDmode))))
        {
	  return 127 /* 0x7f */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 180 /* 0xb4 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 220 /* 0xdc */;
        }
      else
        {
	  return 245 /* 0xf5 */;
        }

    case 25:  /* *muldf3_r4300 */
    case 23:  /* *muldf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 6;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 57 /* 0x39 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 76 /* 0x4c */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 103 /* 0x67 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 118 /* 0x76 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 141 /* 0x8d */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 158 /* 0x9e */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 227 /* 0xe3 */;
        }
      else
        {
	  return 252 /* 0xfc */;
        }

    case 383:  /* mips_mulr_ps */
    case 26:  /* mulv2sf3 */
    case 24:  /* *mulsf3_r4300 */
    case 22:  /* *mulsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 5;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((mips_tune) == (CPU_R4600))) || (((mips_tune) == (CPU_R4650))))
        {
	  return 45 /* 0x2d */;
        }
      else if (((mips_tune) == (CPU_R5000)))
        {
	  return 56 /* 0x38 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 75 /* 0x4b */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 102 /* 0x66 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 117 /* 0x75 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 140 /* 0x8c */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 157 /* 0x9d */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 226 /* 0xe2 */;
        }
      else
        {
	  return 251 /* 0xfb */;
        }

    case 17:  /* subdf3 */
    case 4:  /* adddf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 34 /* 0x22 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 74 /* 0x4a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 101 /* 0x65 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 116 /* 0x74 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 134 /* 0x86 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 225 /* 0xe1 */;
        }
      else
        {
	  return 250 /* 0xfa */;
        }

    case 380:  /* mips_addr_ps */
    case 18:  /* subv2sf3 */
    case 16:  /* subsf3 */
    case 5:  /* addv2sf3 */
    case 3:  /* addsf3 */
      extract_constrain_insn_cached (insn);
      if ((((mips_tune) == (CPU_R3000))) || (((mips_tune) == (CPU_R3900))))
        {
	  return 4;
        }
      else if (((mips_tune) == (CPU_R4300)))
        {
	  return 34 /* 0x22 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 74 /* 0x4a */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 101 /* 0x65 */;
        }
      else if (((mips_tune) == (CPU_R6000)))
        {
	  return 116 /* 0x74 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 134 /* 0x86 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 156 /* 0x9c */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0))))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((mips_tune) == (CPU_SB1))) && ((! ((TARGET_FLOAT64) != (0))) || (! ((TARGET_FP_EXCEPTIONS) == (0)))))
        {
	  return 185 /* 0xb9 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 224 /* 0xe0 */;
        }
      else
        {
	  return 250 /* 0xfa */;
        }

    case 109:  /* clzdi2 */
    case 108:  /* clzsi2 */
    case 2:  /* *conditional_trapdi */
    case 1:  /* *conditional_trapsi */
    case 0:  /* trap */
      if (((mips_tune) == (CPU_R5400)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 176 /* 0xb0 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 219 /* 0xdb */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 107:  /* ffsdi2 */
    case 106:  /* ffssi2 */
    case 102:  /* absdi2 */
    case 101:  /* abssi2 */
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 86 /* 0x56 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 114 /* 0x72 */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 142 /* 0x8e */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 162 /* 0xa2 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 163 /* 0xa3 */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 237 /* 0xed */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    default:
      if (((mips_tune) == (CPU_R4130)))
        {
	  return 17 /* 0x11 */;
        }
      else if (((mips_tune) == (CPU_R5400)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_tune) == (CPU_R5500)))
        {
	  return 93 /* 0x5d */;
        }
      else if (((mips_tune) == (CPU_R7000)))
        {
	  return 121 /* 0x79 */;
        }
      else if (((mips_tune) == (CPU_R9000)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((mips_tune) == (CPU_SB1)))
        {
	  return 174 /* 0xae */;
        }
      else if (((mips_tune) == (CPU_SR71000)))
        {
	  return 219 /* 0xdb */;
        }
      else
        {
	  return 239 /* 0xef */;
        }

    }
}

int
num_delay_slots (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 348:  /* call_value_multiple_internal */
    case 346:  /* call_value_internal */
    case 344:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_NO))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_NO))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 349:  /* call_value_multiple_split */
    case 347:  /* call_value_split */
    case 345:  /* call_split */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 327:  /* jump */
      return 1;

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 328:  /* *mips.md:4639 */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) == (0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_can_delay
get_attr_can_delay (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 389:  /* mips_cabs_cond_ps */
    case 388:  /* mips_c_cond_ps */
    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
    case 385:  /* mips_cabs_cond_d */
    case 384:  /* mips_cabs_cond_s */
    case 326:  /* sungt_df */
    case 325:  /* sunge_df */
    case 324:  /* sgt_df */
    case 323:  /* sge_df */
    case 322:  /* sungt_sf */
    case 321:  /* sunge_sf */
    case 320:  /* sgt_sf */
    case 319:  /* sge_sf */
    case 318:  /* sle_df */
    case 317:  /* slt_df */
    case 316:  /* seq_df */
    case 315:  /* sunle_df */
    case 314:  /* sunlt_df */
    case 313:  /* suneq_df */
    case 312:  /* sunordered_df */
    case 311:  /* sle_sf */
    case 310:  /* slt_sf */
    case 309:  /* seq_sf */
    case 308:  /* sunle_sf */
    case 307:  /* sunlt_sf */
    case 306:  /* suneq_sf */
    case 305:  /* sunordered_sf */
      extract_constrain_insn_cached (insn);
      if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
      extract_constrain_insn_cached (insn);
      if ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if ((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x62)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x31)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if ((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xad40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if ((((!((1 << which_alternative) & 0x1088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x2940)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((which_alternative != 5) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 256:  /* *mips.md:4061 */
    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 224:  /* *movsf_softfloat */
    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      extract_constrain_insn_cached (insn);
      if ((! ((TARGET_FIX_R4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 349:  /* call_value_multiple_split */
    case 348:  /* call_value_multiple_internal */
    case 347:  /* call_value_split */
    case 346:  /* call_value_internal */
    case 345:  /* call_split */
    case 344:  /* call_internal */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 328:  /* *mips.md:4639 */
    case 327:  /* jump */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      return CAN_DELAY_NO;

    default:
      extract_constrain_insn_cached (insn);
      if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
        {
	  return CAN_DELAY_YES;
        }
      else
        {
	  return CAN_DELAY_NO;
        }

    }
}

enum attr_extended_mips16
get_attr_extended_mips16 (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 132:  /* truncdisi2 */
    case 133:  /* truncdihi2 */
    case 134:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_YES;
        }
      else
        {
	  return EXTENDED_MIPS16_NO;
        }

    case 344:  /* call_internal */
    case 346:  /* call_value_internal */
    case 348:  /* call_value_multiple_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return EXTENDED_MIPS16_NO;
        }
      else
        {
	  return EXTENDED_MIPS16_YES;
        }

    case 15:  /* *addsi3_extended_mips16 */
      return EXTENDED_MIPS16_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return EXTENDED_MIPS16_NO;

    }
}

enum attr_got
get_attr_got (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 186:  /* *xgot_losi */
    case 187:  /* *xgot_lodi */
    case 188:  /* *got_dispsi */
    case 189:  /* *got_dispdi */
    case 190:  /* *got_pagesi */
    case 191:  /* *got_pagedi */
      return GOT_LOAD;

    case 184:  /* *xgot_hisi */
    case 185:  /* *xgot_hidi */
      return GOT_XGOT_HIGH;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return GOT_UNSET;

    }
}

enum attr_hazard
get_attr_hazard (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 389:  /* mips_cabs_cond_ps */
    case 388:  /* mips_c_cond_ps */
    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
    case 385:  /* mips_cabs_cond_d */
    case 384:  /* mips_cabs_cond_s */
    case 326:  /* sungt_df */
    case 325:  /* sunge_df */
    case 324:  /* sgt_df */
    case 323:  /* sge_df */
    case 322:  /* sungt_sf */
    case 321:  /* sunge_sf */
    case 320:  /* sgt_sf */
    case 319:  /* sge_sf */
    case 318:  /* sle_df */
    case 317:  /* slt_df */
    case 316:  /* seq_df */
    case 315:  /* sunle_df */
    case 314:  /* sunlt_df */
    case 313:  /* suneq_df */
    case 312:  /* sunordered_df */
    case 311:  /* sle_sf */
    case 310:  /* slt_sf */
    case 309:  /* seq_sf */
    case 308:  /* sunle_sf */
    case 307:  /* sunlt_sf */
    case 306:  /* suneq_sf */
    case 305:  /* sunordered_sf */
      extract_constrain_insn_cached (insn);
      if ((ISA_HAS_FCMP_DELAY) != (0))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((ISA_HAS_XFER_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 236:  /* load_df_high */
    case 235:  /* load_df_low */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((which_alternative == 0) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
      extract_constrain_insn_cached (insn);
      if ((ISA_HAS_HILO_INTERLOCKS) == (0))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x18)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x104)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x62)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x30)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x84)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x31)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x4088)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0xad40)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 6) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x1088)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x2940)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 7) && ((ISA_HAS_HILO_INTERLOCKS) == (0)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((((1 << which_alternative) & 0x84)) && ((ISA_HAS_LOAD_DELAY) != (0))) || ((((1 << which_alternative) & 0x140)) && ((ISA_HAS_XFER_DELAY) != (0))))
        {
	  return HAZARD_DELAY;
        }
      else if ((which_alternative == 5) && ((ISA_HAS_HILO_INTERLOCKS) == (0)))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 256:  /* *mips.md:4061 */
    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      extract_constrain_insn_cached (insn);
      if ((ISA_HAS_LOAD_DELAY) != (0))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 224:  /* *movsf_softfloat */
    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((ISA_HAS_LOAD_DELAY) != (0)))
        {
	  return HAZARD_DELAY;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      extract_constrain_insn_cached (insn);
      if ((TARGET_FIX_R4000) != (0))
        {
	  return HAZARD_HILO;
        }
      else
        {
	  return HAZARD_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return HAZARD_NONE;

    }
}

enum attr_jal_macro
get_attr_jal_macro (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 348:  /* call_value_multiple_internal */
    case 346:  /* call_value_internal */
    case 344:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return TARGET_ABICALLS != 0;
        }
      else
        {
	  return (TARGET_ABICALLS && !TARGET_NEWABI) != 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return JAL_MACRO_NO;

    }
}

enum attr_jal
get_attr_jal (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 344:  /* call_internal */
    case 346:  /* call_value_internal */
    case 348:  /* call_value_multiple_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return JAL_INDIRECT;
        }
      else
        {
	  return JAL_DIRECT;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return JAL_UNSET;

    }
}

enum attr_may_clobber_hilo
get_attr_may_clobber_hilo (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7f))
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 12)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 10)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return MAY_CLOBBER_HILO_YES;
        }
      else
        {
	  return MAY_CLOBBER_HILO_NO;
        }

    case 91:  /* udivmoddi4 */
    case 90:  /* udivmodsi4 */
    case 89:  /* divmoddi4 */
    case 88:  /* divmodsi4 */
    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 36:  /* *msac_using_macc */
    case 35:  /* *msac */
    case 34:  /* *macc */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      return MAY_CLOBBER_HILO_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return MAY_CLOBBER_HILO_NO;

    }
}

enum attr_mode
get_attr_mode (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 305:  /* sunordered_sf */
    case 306:  /* suneq_sf */
    case 307:  /* sunlt_sf */
    case 308:  /* sunle_sf */
    case 309:  /* seq_sf */
    case 310:  /* slt_sf */
    case 311:  /* sle_sf */
    case 312:  /* sunordered_df */
    case 313:  /* suneq_df */
    case 314:  /* sunlt_df */
    case 315:  /* sunle_df */
    case 316:  /* seq_df */
    case 317:  /* slt_df */
    case 318:  /* sle_df */
    case 319:  /* sge_sf */
    case 320:  /* sgt_sf */
    case 321:  /* sunge_sf */
    case 322:  /* sungt_sf */
    case 323:  /* sge_df */
    case 324:  /* sgt_df */
    case 325:  /* sunge_df */
    case 326:  /* sungt_df */
    case 384:  /* mips_cabs_cond_s */
    case 385:  /* mips_cabs_cond_d */
    case 386:  /* mips_c_cond_4s */
    case 387:  /* mips_cabs_cond_4s */
    case 388:  /* mips_c_cond_ps */
    case 389:  /* mips_cabs_cond_ps */
      return MODE_FPSW;

    case 4:  /* adddf3 */
    case 17:  /* subdf3 */
    case 23:  /* *muldf3 */
    case 25:  /* *muldf3_r4300 */
    case 65:  /* *madddf */
    case 68:  /* *msubdf */
    case 71:  /* *nmadddf */
    case 74:  /* *nmadddf_fastmath */
    case 77:  /* *nmsubdf */
    case 80:  /* *nmsubdf_fastmath */
    case 83:  /* *divdf3 */
    case 86:  /* *recipdf3 */
    case 93:  /* sqrtdf2 */
    case 96:  /* *rsqrtdfa */
    case 99:  /* *rsqrtdfb */
    case 104:  /* absdf2 */
    case 113:  /* negdf2 */
    case 163:  /* extendsfdf2 */
    case 164:  /* fix_truncdfsi2_insn */
    case 165:  /* fix_truncdfsi2_macro */
    case 166:  /* fix_truncsfsi2_insn */
    case 167:  /* fix_truncsfsi2_macro */
    case 168:  /* fix_truncdfdi2 */
    case 170:  /* floatsidf2 */
    case 171:  /* floatdidf2 */
    case 208:  /* *ldxc1_si */
    case 211:  /* *ldxc1_di */
    case 214:  /* *sdxc1_si */
    case 217:  /* *sdxc1_di */
    case 226:  /* *movdf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 228:  /* *movdf_softfloat */
    case 229:  /* *movdf_mips16 */
    case 362:  /* *movdf_on_si */
    case 364:  /* *movdf_on_di */
    case 366:  /* *movdf_on_cc */
    case 395:  /* mips_rsqrt1_d */
    case 398:  /* mips_rsqrt2_d */
    case 401:  /* mips_recip1_d */
    case 404:  /* mips_recip2_d */
      return MODE_DF;

    case 3:  /* addsf3 */
    case 5:  /* addv2sf3 */
    case 16:  /* subsf3 */
    case 18:  /* subv2sf3 */
    case 22:  /* *mulsf3 */
    case 24:  /* *mulsf3_r4300 */
    case 26:  /* mulv2sf3 */
    case 64:  /* *maddsf */
    case 66:  /* *maddv2sf */
    case 67:  /* *msubsf */
    case 69:  /* *msubv2sf */
    case 70:  /* *nmaddsf */
    case 72:  /* *nmaddv2sf */
    case 73:  /* *nmaddsf_fastmath */
    case 75:  /* *nmaddv2sf_fastmath */
    case 76:  /* *nmsubsf */
    case 78:  /* *nmsubv2sf */
    case 79:  /* *nmsubsf_fastmath */
    case 81:  /* *nmsubv2sf_fastmath */
    case 82:  /* *divsf3 */
    case 84:  /* *divv2sf3 */
    case 85:  /* *recipsf3 */
    case 87:  /* *recipv2sf3 */
    case 92:  /* sqrtsf2 */
    case 94:  /* sqrtv2sf2 */
    case 95:  /* *rsqrtsfa */
    case 97:  /* *rsqrtv2sfa */
    case 98:  /* *rsqrtsfb */
    case 100:  /* *rsqrtv2sfb */
    case 103:  /* abssf2 */
    case 105:  /* absv2sf2 */
    case 112:  /* negsf2 */
    case 114:  /* negv2sf2 */
    case 131:  /* truncdfsf2 */
    case 169:  /* fix_truncsfdi2 */
    case 172:  /* floatsisf2 */
    case 173:  /* floatdisf2 */
    case 207:  /* *lwxc1_si */
    case 209:  /* *ldxc1_si */
    case 210:  /* *lwxc1_di */
    case 212:  /* *ldxc1_di */
    case 213:  /* *swxc1_si */
    case 215:  /* *sdxc1_si */
    case 216:  /* *swxc1_di */
    case 218:  /* *sdxc1_di */
    case 223:  /* *movsf_hardfloat */
    case 224:  /* *movsf_softfloat */
    case 225:  /* *movsf_mips16 */
    case 230:  /* movv2sf_hardfloat_64bit */
    case 235:  /* load_df_low */
    case 236:  /* load_df_high */
    case 237:  /* store_df_high */
    case 361:  /* *movsf_on_si */
    case 363:  /* *movsf_on_di */
    case 365:  /* *movsf_on_cc */
    case 370:  /* *movcc_v2sf_si */
    case 371:  /* *movcc_v2sf_di */
    case 372:  /* mips_cond_move_tf_ps */
    case 373:  /* mips_pul_ps */
    case 374:  /* mips_puu_ps */
    case 375:  /* mips_pll_ps */
    case 376:  /* mips_plu_ps */
    case 377:  /* vec_initv2sf_internal */
    case 378:  /* vec_extractv2sf */
    case 379:  /* mips_alnv_ps */
    case 380:  /* mips_addr_ps */
    case 381:  /* mips_cvt_pw_ps */
    case 382:  /* mips_cvt_ps_pw */
    case 383:  /* mips_mulr_ps */
    case 394:  /* mips_rsqrt1_s */
    case 396:  /* mips_rsqrt1_ps */
    case 397:  /* mips_rsqrt2_s */
    case 399:  /* mips_rsqrt2_ps */
    case 400:  /* mips_recip1_s */
    case 402:  /* mips_recip1_ps */
    case 403:  /* mips_recip2_s */
    case 405:  /* mips_recip2_ps */
      return MODE_SF;

    case 7:  /* *adddi3 */
    case 9:  /* *adddi3_sp1 */
    case 11:  /* *adddi3_sp2 */
    case 13:  /* *adddi3_mips16 */
    case 20:  /* subdi3 */
    case 21:  /* *subsi3_extended */
    case 28:  /* muldi3_mult3 */
    case 30:  /* muldi3_internal */
    case 32:  /* muldi3_r4000 */
    case 59:  /* smuldi3_highpart */
    case 60:  /* umuldi3_highpart */
    case 89:  /* divmoddi4 */
    case 91:  /* udivmoddi4 */
    case 102:  /* absdi2 */
    case 107:  /* ffsdi2 */
    case 109:  /* clzdi2 */
    case 111:  /* negdi2 */
    case 116:  /* one_cmpldi2 */
    case 118:  /* *anddi3 */
    case 120:  /* *anddi3_mips16 */
    case 122:  /* *iordi3 */
    case 124:  /* *iordi3_mips16 */
    case 126:  /* *mips.md:2088 */
    case 128:  /* *mips.md:2099 */
    case 130:  /* *nordi3 */
    case 142:  /* zero_extendsidi2 */
    case 144:  /* *zero_extendqidi2 */
    case 146:  /* *zero_extendhidi2 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 153:  /* extendsidi2 */
    case 155:  /* *extendqidi2 */
    case 157:  /* *extendhidi2 */
    case 159:  /* *extendqidi2_seb */
    case 161:  /* *extendhidi2_seh */
    case 175:  /* mov_ldl */
    case 177:  /* mov_ldr */
    case 179:  /* mov_sdl */
    case 181:  /* mov_sdr */
    case 185:  /* *xgot_hidi */
    case 187:  /* *xgot_lodi */
    case 189:  /* *got_dispdi */
    case 191:  /* *got_pagedi */
    case 193:  /* *load_gotdi */
    case 195:  /* *lowdi */
    case 197:  /* *lowdi_mips16 */
    case 199:  /* *movdi_ra */
    case 200:  /* *movdi_32bit */
    case 201:  /* *movdi_32bit_mips16 */
    case 202:  /* *movdi_64bit */
    case 203:  /* *movdi_64bit_mips16 */
    case 232:  /* *mfhilo_di */
    case 234:  /* *mfhilo_di_macc */
    case 244:  /* *ashldi3 */
    case 245:  /* *ashrdi3 */
    case 246:  /* *lshrdi3 */
    case 253:  /* *ashldi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 255:  /* *lshrdi3_mips16 */
    case 258:  /* rotrdi3 */
    case 272:  /* *seq_di */
    case 274:  /* *seq_di_mips16 */
    case 276:  /* *sne_di */
    case 278:  /* *sgt_di */
    case 280:  /* *sgt_di_mips16 */
    case 282:  /* *sge_di */
    case 284:  /* *slt_di */
    case 286:  /* *slt_di_mips16 */
    case 288:  /* *sle_di */
    case 290:  /* *sle_di_mips16 */
    case 292:  /* *sgtu_di */
    case 294:  /* *sgtu_di_mips16 */
    case 296:  /* *sge_di */
    case 298:  /* *sltu_di */
    case 300:  /* *sltu_di_mips16 */
    case 302:  /* *sleu_di */
    case 304:  /* *sleu_di_mips16 */
    case 340:  /* load_calldi */
    case 356:  /* *movdi_on_si */
    case 358:  /* *movdi_on_di */
    case 360:  /* *movdi_on_cc */
      return MODE_DI;

    case 141:  /* *mips.md:2265 */
    case 151:  /* *zero_extendqihi2 */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 219:  /* *movhi_internal */
    case 220:  /* *movhi_mips16 */
      return MODE_HI;

    case 221:  /* *movqi_internal */
    case 222:  /* *movqi_mips16 */
      return MODE_QI;

    case 239:  /* loadgp_blockage */
    case 259:  /* branch_fp */
    case 260:  /* branch_fp_inverted */
    case 261:  /* *branch_zerosi */
    case 262:  /* *branch_zerodi */
    case 263:  /* *branch_zerosi_inverted */
    case 264:  /* *branch_zerodi_inverted */
    case 265:  /* *branch_equalitysi */
    case 266:  /* *branch_equalitydi */
    case 267:  /* *branch_equalitysi_inverted */
    case 268:  /* *branch_equalitydi_inverted */
    case 269:  /* *branch_equalitysi_mips16 */
    case 270:  /* *branch_equalitydi_mips16 */
    case 327:  /* jump */
    case 328:  /* *mips.md:4639 */
    case 329:  /* indirect_jumpsi */
    case 330:  /* indirect_jumpdi */
    case 331:  /* tablejumpsi */
    case 332:  /* tablejumpdi */
    case 333:  /* blockage */
    case 334:  /* return */
    case 335:  /* return_internal */
    case 353:  /* nop */
    case 390:  /* bc1any4t */
    case 391:  /* bc1any4f */
    case 392:  /* bc1any2t */
    case 393:  /* bc1any2f */
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 0:  /* trap */
    case 1:  /* *conditional_trapsi */
    case 2:  /* *conditional_trapdi */
    case 36:  /* *msac_using_macc */
    case 137:  /* *mips.md:2214 */
    case 138:  /* *mips.md:2229 */
    case 182:  /* *lea_high64 */
    case 183:  /* *lea64 */
    case 238:  /* loadgp */
    case 240:  /* cprestore */
    case 336:  /* eh_set_lr_si */
    case 337:  /* eh_set_lr_di */
    case 338:  /* exception_receiver */
    case 341:  /* sibcall_internal */
    case 342:  /* sibcall_value_internal */
    case 343:  /* sibcall_value_multiple_internal */
    case 344:  /* call_internal */
    case 345:  /* call_split */
    case 346:  /* call_value_internal */
    case 347:  /* call_value_split */
    case 348:  /* call_value_multiple_internal */
    case 349:  /* call_value_multiple_split */
    case 350:  /* prefetch */
    case 351:  /* *prefetch_indexed_si */
    case 352:  /* *prefetch_indexed_di */
    case 354:  /* hazard_nop */
    case 367:  /* consttable_int */
    case 368:  /* consttable_float */
    case 369:  /* align */
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_sb1_fp_pipes
get_attr_sb1_fp_pipes (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      if (((TARGET_FLOAT64) != (0)) && ((TARGET_FP_EXCEPTIONS) == (0)))
        {
	  return SB1_FP_PIPES_TWO;
        }
      else
        {
	  return SB1_FP_PIPES_ONE;
        }

    }
}

enum attr_single_insn
get_attr_single_insn (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      extract_constrain_insn_cached (insn);
      return get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4);

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_FMOVE;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FMOVE;
        }
      else
        {
	  return TYPE_MTHILO;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_FMOVE;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPLOAD;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FMOVE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_FPSTORE;
        }
      else if (((1 << which_alternative) & 0xc00))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_MTHILO;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 14)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 15)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_CONST;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_CONST;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FMOVE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MTHILO;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 13)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_MFHILO;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MTHILO;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_MFHILO;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMADD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_IMADD;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 132:  /* truncdisi2 */
    case 133:  /* truncdihi2 */
    case 134:  /* truncdiqi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SHIFT;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 142:  /* zero_extendsidi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 143:  /* *zero_extendqisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 146:  /* *zero_extendhidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 153:  /* extendsidi2 */
    case 154:  /* *extendqisi2 */
    case 155:  /* *extendqidi2 */
    case 156:  /* *extendhisi2 */
    case 157:  /* *extendhidi2 */
    case 158:  /* *extendqisi2_seb */
    case 159:  /* *extendqidi2_seb */
    case 160:  /* *extendhisi2_seh */
    case 161:  /* *extendhidi2_seh */
    case 162:  /* extendqihi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 224:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 235:  /* load_df_low */
    case 236:  /* load_df_high */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_FPLOAD;
        }

    case 237:  /* store_df_high */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_FPSTORE;
        }

    case 353:  /* nop */
    case 354:  /* hazard_nop */
      return TYPE_NOP;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 101:  /* abssi2 */
    case 102:  /* absdi2 */
    case 106:  /* ffssi2 */
    case 107:  /* ffsdi2 */
      return TYPE_MULTI;

    case 397:  /* mips_rsqrt2_s */
    case 398:  /* mips_rsqrt2_d */
    case 399:  /* mips_rsqrt2_ps */
      return TYPE_FRSQRT2;

    case 394:  /* mips_rsqrt1_s */
    case 395:  /* mips_rsqrt1_d */
    case 396:  /* mips_rsqrt1_ps */
      return TYPE_FRSQRT1;

    case 95:  /* *rsqrtsfa */
    case 96:  /* *rsqrtdfa */
    case 97:  /* *rsqrtv2sfa */
    case 98:  /* *rsqrtsfb */
    case 99:  /* *rsqrtdfb */
    case 100:  /* *rsqrtv2sfb */
      return TYPE_FRSQRT;

    case 92:  /* sqrtsf2 */
    case 93:  /* sqrtdf2 */
    case 94:  /* sqrtv2sf2 */
      return TYPE_FSQRT;

    case 131:  /* truncdfsf2 */
    case 163:  /* extendsfdf2 */
    case 164:  /* fix_truncdfsi2_insn */
    case 165:  /* fix_truncdfsi2_macro */
    case 166:  /* fix_truncsfsi2_insn */
    case 167:  /* fix_truncsfsi2_macro */
    case 168:  /* fix_truncdfdi2 */
    case 169:  /* fix_truncsfdi2 */
    case 170:  /* floatsidf2 */
    case 171:  /* floatdidf2 */
    case 172:  /* floatsisf2 */
    case 173:  /* floatdisf2 */
    case 377:  /* vec_initv2sf_internal */
    case 378:  /* vec_extractv2sf */
    case 381:  /* mips_cvt_pw_ps */
    case 382:  /* mips_cvt_ps_pw */
      return TYPE_FCVT;

    case 305:  /* sunordered_sf */
    case 306:  /* suneq_sf */
    case 307:  /* sunlt_sf */
    case 308:  /* sunle_sf */
    case 309:  /* seq_sf */
    case 310:  /* slt_sf */
    case 311:  /* sle_sf */
    case 312:  /* sunordered_df */
    case 313:  /* suneq_df */
    case 314:  /* sunlt_df */
    case 315:  /* sunle_df */
    case 316:  /* seq_df */
    case 317:  /* slt_df */
    case 318:  /* sle_df */
    case 319:  /* sge_sf */
    case 320:  /* sgt_sf */
    case 321:  /* sunge_sf */
    case 322:  /* sungt_sf */
    case 323:  /* sge_df */
    case 324:  /* sgt_df */
    case 325:  /* sunge_df */
    case 326:  /* sungt_df */
    case 384:  /* mips_cabs_cond_s */
    case 385:  /* mips_cabs_cond_d */
    case 386:  /* mips_c_cond_4s */
    case 387:  /* mips_cabs_cond_4s */
    case 388:  /* mips_c_cond_ps */
    case 389:  /* mips_cabs_cond_ps */
      return TYPE_FCMP;

    case 112:  /* negsf2 */
    case 113:  /* negdf2 */
    case 114:  /* negv2sf2 */
      return TYPE_FNEG;

    case 103:  /* abssf2 */
    case 104:  /* absdf2 */
    case 105:  /* absv2sf2 */
      return TYPE_FABS;

    case 403:  /* mips_recip2_s */
    case 404:  /* mips_recip2_d */
    case 405:  /* mips_recip2_ps */
      return TYPE_FRDIV2;

    case 400:  /* mips_recip1_s */
    case 401:  /* mips_recip1_d */
    case 402:  /* mips_recip1_ps */
      return TYPE_FRDIV1;

    case 85:  /* *recipsf3 */
    case 86:  /* *recipdf3 */
    case 87:  /* *recipv2sf3 */
      return TYPE_FRDIV;

    case 82:  /* *divsf3 */
    case 83:  /* *divdf3 */
    case 84:  /* *divv2sf3 */
      return TYPE_FDIV;

    case 64:  /* *maddsf */
    case 65:  /* *madddf */
    case 66:  /* *maddv2sf */
    case 67:  /* *msubsf */
    case 68:  /* *msubdf */
    case 69:  /* *msubv2sf */
    case 70:  /* *nmaddsf */
    case 71:  /* *nmadddf */
    case 72:  /* *nmaddv2sf */
    case 73:  /* *nmaddsf_fastmath */
    case 74:  /* *nmadddf_fastmath */
    case 75:  /* *nmaddv2sf_fastmath */
    case 76:  /* *nmsubsf */
    case 77:  /* *nmsubdf */
    case 78:  /* *nmsubv2sf */
    case 79:  /* *nmsubsf_fastmath */
    case 80:  /* *nmsubdf_fastmath */
    case 81:  /* *nmsubv2sf_fastmath */
      return TYPE_FMADD;

    case 22:  /* *mulsf3 */
    case 23:  /* *muldf3 */
    case 24:  /* *mulsf3_r4300 */
    case 25:  /* *muldf3_r4300 */
    case 26:  /* mulv2sf3 */
    case 383:  /* mips_mulr_ps */
      return TYPE_FMUL;

    case 3:  /* addsf3 */
    case 4:  /* adddf3 */
    case 5:  /* addv2sf3 */
    case 16:  /* subsf3 */
    case 17:  /* subdf3 */
    case 18:  /* subv2sf3 */
    case 380:  /* mips_addr_ps */
      return TYPE_FADD;

    case 373:  /* mips_pul_ps */
    case 374:  /* mips_puu_ps */
    case 375:  /* mips_pll_ps */
    case 376:  /* mips_plu_ps */
    case 379:  /* mips_alnv_ps */
      return TYPE_FMOVE;

    case 88:  /* divmodsi4 */
    case 89:  /* divmoddi4 */
    case 90:  /* udivmodsi4 */
    case 91:  /* udivmoddi4 */
      return TYPE_IDIV;

    case 34:  /* *macc */
    case 35:  /* *msac */
    case 36:  /* *msac_using_macc */
    case 37:  /* *macc2 */
    case 38:  /* *msac2 */
    case 51:  /* *msac_di */
    case 52:  /* *msacu_di */
    case 61:  /* madsi */
    case 62:  /* *smul_acc_di */
    case 63:  /* *umul_acc_di */
      return TYPE_IMADD;

    case 27:  /* mulsi3_mult3 */
    case 28:  /* muldi3_mult3 */
    case 29:  /* mulsi3_internal */
    case 30:  /* muldi3_internal */
    case 31:  /* mulsi3_r4000 */
    case 32:  /* muldi3_r4000 */
    case 40:  /* *muls */
    case 41:  /* mulsidi3_32bit_internal */
    case 42:  /* umulsidi3_32bit_internal */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 45:  /* *mulsidi3_64bit */
    case 46:  /* *umulsidi3_64bit */
    case 47:  /* *mulsidi3_64bit_parts */
    case 48:  /* *umulsidi3_64bit_parts */
    case 49:  /* *muls_di */
    case 50:  /* *mulsu_di */
    case 53:  /* smulsi3_highpart_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 59:  /* smuldi3_highpart */
    case 60:  /* umuldi3_highpart */
      return TYPE_IMUL;

    case 0:  /* trap */
    case 1:  /* *conditional_trapsi */
    case 2:  /* *conditional_trapdi */
      return TYPE_TRAP;

    case 108:  /* clzsi2 */
    case 109:  /* clzdi2 */
      return TYPE_CLZ;

    case 271:  /* *seq_si */
    case 272:  /* *seq_di */
    case 273:  /* *seq_si_mips16 */
    case 274:  /* *seq_di_mips16 */
    case 275:  /* *sne_si */
    case 276:  /* *sne_di */
    case 277:  /* *sgt_si */
    case 278:  /* *sgt_di */
    case 279:  /* *sgt_si_mips16 */
    case 280:  /* *sgt_di_mips16 */
    case 281:  /* *sge_si */
    case 282:  /* *sge_di */
    case 283:  /* *slt_si */
    case 284:  /* *slt_di */
    case 285:  /* *slt_si_mips16 */
    case 286:  /* *slt_di_mips16 */
    case 287:  /* *sle_si */
    case 288:  /* *sle_di */
    case 289:  /* *sle_si_mips16 */
    case 290:  /* *sle_di_mips16 */
    case 291:  /* *sgtu_si */
    case 292:  /* *sgtu_di */
    case 293:  /* *sgtu_si_mips16 */
    case 294:  /* *sgtu_di_mips16 */
    case 295:  /* *sge_si */
    case 296:  /* *sge_di */
    case 297:  /* *sltu_si */
    case 298:  /* *sltu_di */
    case 299:  /* *sltu_si_mips16 */
    case 300:  /* *sltu_di_mips16 */
    case 301:  /* *sleu_si */
    case 302:  /* *sleu_di */
    case 303:  /* *sleu_si_mips16 */
    case 304:  /* *sleu_di_mips16 */
      return TYPE_SLT;

    case 135:  /* *mips.md:2191 */
    case 136:  /* *mips.md:2201 */
    case 241:  /* *ashlsi3 */
    case 242:  /* *ashrsi3 */
    case 243:  /* *lshrsi3 */
    case 244:  /* *ashldi3 */
    case 245:  /* *ashrdi3 */
    case 246:  /* *lshrdi3 */
    case 247:  /* *ashlsi3_extend */
    case 248:  /* *ashrsi3_extend */
    case 249:  /* *lshrsi3_extend */
    case 250:  /* *ashlsi3_mips16 */
    case 251:  /* *ashrsi3_mips16 */
    case 252:  /* *lshrsi3_mips16 */
    case 253:  /* *ashldi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 255:  /* *lshrdi3_mips16 */
    case 257:  /* rotrsi3 */
    case 258:  /* rotrdi3 */
      return TYPE_SHIFT;

    case 231:  /* *mfhilo_si */
    case 232:  /* *mfhilo_di */
    case 233:  /* *mfhilo_si_macc */
    case 234:  /* *mfhilo_di_macc */
      return TYPE_MFHILO;

    case 355:  /* *movsi_on_si */
    case 356:  /* *movdi_on_si */
    case 357:  /* *movsi_on_di */
    case 358:  /* *movdi_on_di */
    case 359:  /* *movsi_on_cc */
    case 360:  /* *movdi_on_cc */
    case 361:  /* *movsf_on_si */
    case 362:  /* *movdf_on_si */
    case 363:  /* *movsf_on_di */
    case 364:  /* *movdf_on_di */
    case 365:  /* *movsf_on_cc */
    case 366:  /* *movdf_on_cc */
    case 370:  /* *movcc_v2sf_si */
    case 371:  /* *movcc_v2sf_di */
    case 372:  /* mips_cond_move_tf_ps */
      return TYPE_CONDMOVE;

    case 351:  /* *prefetch_indexed_si */
    case 352:  /* *prefetch_indexed_di */
      return TYPE_PREFETCHX;

    case 350:  /* prefetch */
      return TYPE_PREFETCH;

    case 213:  /* *swxc1_si */
    case 214:  /* *sdxc1_si */
    case 215:  /* *sdxc1_si */
    case 216:  /* *swxc1_di */
    case 217:  /* *sdxc1_di */
    case 218:  /* *sdxc1_di */
      return TYPE_FPIDXSTORE;

    case 178:  /* mov_swl */
    case 179:  /* mov_sdl */
    case 180:  /* mov_swr */
    case 181:  /* mov_sdr */
    case 198:  /* *movsi_ra */
    case 199:  /* *movdi_ra */
    case 240:  /* cprestore */
      return TYPE_STORE;

    case 207:  /* *lwxc1_si */
    case 208:  /* *ldxc1_si */
    case 209:  /* *ldxc1_si */
    case 210:  /* *lwxc1_di */
    case 211:  /* *ldxc1_di */
    case 212:  /* *ldxc1_di */
      return TYPE_FPIDXLOAD;

    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 147:  /* *zero_extendqisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 174:  /* mov_lwl */
    case 175:  /* mov_ldl */
    case 176:  /* mov_lwr */
    case 177:  /* mov_ldr */
    case 192:  /* *load_gotsi */
    case 193:  /* *load_gotdi */
    case 256:  /* *mips.md:4061 */
    case 338:  /* exception_receiver */
    case 339:  /* load_callsi */
    case 340:  /* load_calldi */
      return TYPE_LOAD;

    case 348:  /* call_value_multiple_internal */
    case 346:  /* call_value_internal */
    case 344:  /* call_internal */
    case 341:  /* sibcall_internal */
    case 342:  /* sibcall_value_internal */
    case 343:  /* sibcall_value_multiple_internal */
    case 345:  /* call_split */
    case 347:  /* call_value_split */
    case 349:  /* call_value_multiple_split */
      return TYPE_CALL;

    case 327:  /* jump */
    case 329:  /* indirect_jumpsi */
    case 330:  /* indirect_jumpdi */
    case 331:  /* tablejumpsi */
    case 332:  /* tablejumpdi */
    case 334:  /* return */
    case 335:  /* return_internal */
      return TYPE_JUMP;

    case 259:  /* branch_fp */
    case 260:  /* branch_fp_inverted */
    case 261:  /* *branch_zerosi */
    case 262:  /* *branch_zerodi */
    case 263:  /* *branch_zerosi_inverted */
    case 264:  /* *branch_zerodi_inverted */
    case 265:  /* *branch_equalitysi */
    case 266:  /* *branch_equalitydi */
    case 267:  /* *branch_equalitysi_inverted */
    case 268:  /* *branch_equalitydi_inverted */
    case 269:  /* *branch_equalitysi_mips16 */
    case 270:  /* *branch_equalitydi_mips16 */
    case 328:  /* *mips.md:4639 */
    case 390:  /* bc1any4t */
    case 391:  /* bc1any4f */
    case 392:  /* bc1any2t */
    case 393:  /* bc1any2f */
      return TYPE_BRANCH;

    case 369:  /* align */
    case 368:  /* consttable_float */
    case 367:  /* consttable_int */
    case 337:  /* eh_set_lr_di */
    case 336:  /* eh_set_lr_si */
    case 238:  /* loadgp */
    case 185:  /* *xgot_hidi */
    case 184:  /* *xgot_hisi */
    case 183:  /* *lea64 */
    case 182:  /* *lea_high64 */
    case 138:  /* *mips.md:2229 */
    case 137:  /* *mips.md:2214 */
    case 239:  /* loadgp_blockage */
    case 333:  /* blockage */
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

enum attr_vr4130_class
get_attr_vr4130_class (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 228:  /* *movdf_softfloat */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x6))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 229:  /* *movdf_mips16 */
    case 225:  /* *movsf_mips16 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 230:  /* movv2sf_hardfloat_64bit */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 223:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xef))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 222:  /* *movqi_mips16 */
    case 220:  /* *movhi_mips16 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1f))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 221:  /* *movqi_internal */
    case 219:  /* *movhi_internal */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xc))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 206:  /* movcc */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xc))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 204:  /* *movsi_internal */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xbfe7))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (which_alternative == 12)
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 205:  /* *movsi_mips16 */
    case 203:  /* *movdi_64bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3f))
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 202:  /* *movdi_64bit */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x2fe7))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (which_alternative == 10)
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 201:  /* *movdi_32bit_mips16 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x60))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 200:  /* *movdi_32bit */
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x173))
        {
	  return VR4130_CLASS_MEM;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 224:  /* *movsf_softfloat */
    case 162:  /* extendqihi2 */
    case 161:  /* *extendhidi2_seh */
    case 160:  /* *extendhisi2_seh */
    case 159:  /* *extendqidi2_seb */
    case 158:  /* *extendqisi2_seb */
    case 157:  /* *extendhidi2 */
    case 156:  /* *extendhisi2 */
    case 155:  /* *extendqidi2 */
    case 154:  /* *extendqisi2 */
    case 153:  /* extendsidi2 */
    case 151:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
    case 142:  /* zero_extendsidi2 */
    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return VR4130_CLASS_MEM;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 39:  /* *mul_sub_si */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 33:  /* *mul_acc_si */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return VR4130_CLASS_MUL;
        }
      else
        {
	  return VR4130_CLASS_ALU;
        }

    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 338:  /* exception_receiver */
    case 256:  /* *mips.md:4061 */
    case 240:  /* cprestore */
    case 199:  /* *movdi_ra */
    case 198:  /* *movsi_ra */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
    case 181:  /* mov_sdr */
    case 180:  /* mov_swr */
    case 179:  /* mov_sdl */
    case 178:  /* mov_swl */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
    case 152:  /* *zero_extendqihi2_mips16 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
      return VR4130_CLASS_MEM;

    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
    case 91:  /* udivmoddi4 */
    case 90:  /* udivmodsi4 */
    case 89:  /* divmoddi4 */
    case 88:  /* divmodsi4 */
    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
    case 61:  /* madsi */
    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
    case 40:  /* *muls */
    case 38:  /* *msac2 */
    case 37:  /* *macc2 */
    case 36:  /* *msac_using_macc */
    case 35:  /* *msac */
    case 34:  /* *macc */
    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      return VR4130_CLASS_MUL;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return VR4130_CLASS_ALU;

    }
}

int
eligible_for_delay (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 348:  /* call_value_multiple_internal */
    case 346:  /* call_value_internal */
    case 344:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_NO))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_NO))))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 349:  /* call_value_multiple_split */
    case 347:  /* call_value_split */
    case 345:  /* call_split */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
      slot += 3 * 1;
      break;
      break;

    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 327:  /* jump */
      slot += 2 * 1;
      break;
      break;

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 328:  /* *mips.md:4639 */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) == (0))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case 389:  /* mips_cabs_cond_ps */
        case 388:  /* mips_c_cond_ps */
        case 387:  /* mips_cabs_cond_4s */
        case 386:  /* mips_c_cond_4s */
        case 385:  /* mips_cabs_cond_d */
        case 384:  /* mips_cabs_cond_s */
        case 326:  /* sungt_df */
        case 325:  /* sunge_df */
        case 324:  /* sgt_df */
        case 323:  /* sge_df */
        case 322:  /* sungt_sf */
        case 321:  /* sunge_sf */
        case 320:  /* sgt_sf */
        case 319:  /* sge_sf */
        case 318:  /* sle_df */
        case 317:  /* slt_df */
        case 316:  /* seq_df */
        case 315:  /* sunle_df */
        case 314:  /* sunlt_df */
        case 313:  /* suneq_df */
        case 312:  /* sunordered_df */
        case 311:  /* sle_sf */
        case 310:  /* slt_sf */
        case 309:  /* seq_sf */
        case 308:  /* sunle_sf */
        case 307:  /* sunlt_sf */
        case 306:  /* suneq_sf */
        case 305:  /* sunordered_sf */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:  /* store_df_high */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:  /* load_df_high */
        case 235:  /* load_df_low */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 234:  /* *mfhilo_di_macc */
        case 233:  /* *mfhilo_si_macc */
        case 232:  /* *mfhilo_di */
        case 231:  /* *mfhilo_si */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:  /* *movdf_softfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 229:  /* *movdf_mips16 */
        case 225:  /* *movsf_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 230:  /* movv2sf_hardfloat_64bit */
        case 227:  /* *movdf_hardfloat_32bit */
        case 226:  /* *movdf_hardfloat_64bit */
        case 223:  /* *movsf_hardfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x62)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 222:  /* *movqi_mips16 */
        case 220:  /* *movhi_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 221:  /* *movqi_internal */
        case 219:  /* *movhi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 206:  /* movcc */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x31)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:  /* *movsi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xad40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 205:  /* *movsi_mips16 */
        case 203:  /* *movdi_64bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:  /* *movdi_64bit */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x1088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x2940)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 201:  /* *movdi_32bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:  /* *movdi_32bit */
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((which_alternative != 5) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 340:  /* load_calldi */
        case 339:  /* load_callsi */
        case 338:  /* exception_receiver */
        case 256:  /* *mips.md:4061 */
        case 212:  /* *ldxc1_di */
        case 211:  /* *ldxc1_di */
        case 210:  /* *lwxc1_di */
        case 209:  /* *ldxc1_si */
        case 208:  /* *ldxc1_si */
        case 207:  /* *lwxc1_si */
        case 193:  /* *load_gotdi */
        case 192:  /* *load_gotsi */
        case 191:  /* *got_pagedi */
        case 190:  /* *got_pagesi */
        case 189:  /* *got_dispdi */
        case 188:  /* *got_dispsi */
        case 187:  /* *xgot_lodi */
        case 186:  /* *xgot_losi */
        case 177:  /* mov_ldr */
        case 176:  /* mov_lwr */
        case 175:  /* mov_ldl */
        case 174:  /* mov_lwl */
        case 152:  /* *zero_extendqihi2_mips16 */
        case 150:  /* *zero_extendhidi2_mips16 */
        case 149:  /* *zero_extendhisi2_mips16 */
        case 148:  /* *zero_extendqidi2_mips16 */
        case 147:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 224:  /* *movsf_softfloat */
        case 162:  /* extendqihi2 */
        case 161:  /* *extendhidi2_seh */
        case 160:  /* *extendhisi2_seh */
        case 159:  /* *extendqidi2_seb */
        case 158:  /* *extendqisi2_seb */
        case 157:  /* *extendhidi2 */
        case 156:  /* *extendhisi2 */
        case 155:  /* *extendqidi2 */
        case 154:  /* *extendqisi2 */
        case 153:  /* extendsidi2 */
        case 151:  /* *zero_extendqihi2 */
        case 146:  /* *zero_extendhidi2 */
        case 145:  /* *zero_extendhisi2 */
        case 144:  /* *zero_extendqidi2 */
        case 143:  /* *zero_extendqisi2 */
        case 142:  /* zero_extendsidi2 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 60:  /* umuldi3_highpart */
        case 59:  /* smuldi3_highpart */
        case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
        case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
        case 56:  /* umulsi3_highpart_mulhi_internal */
        case 55:  /* smulsi3_highpart_mulhi_internal */
        case 54:  /* umulsi3_highpart_internal */
        case 53:  /* smulsi3_highpart_internal */
        case 50:  /* *mulsu_di */
        case 49:  /* *muls_di */
        case 48:  /* *umulsidi3_64bit_parts */
        case 47:  /* *mulsidi3_64bit_parts */
        case 46:  /* *umulsidi3_64bit */
        case 45:  /* *mulsidi3_64bit */
        case 44:  /* umulsidi3_32bit_r4000 */
        case 43:  /* mulsidi3_32bit_r4000 */
        case 42:  /* umulsidi3_32bit_internal */
        case 41:  /* mulsidi3_32bit_internal */
        case 40:  /* *muls */
        case 32:  /* muldi3_r4000 */
        case 31:  /* mulsi3_r4000 */
        case 30:  /* muldi3_internal */
        case 29:  /* mulsi3_internal */
        case 28:  /* muldi3_mult3 */
        case 27:  /* mulsi3_mult3 */
	  extract_constrain_insn_cached (insn);
	  if ((! ((TARGET_FIX_R4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 393:  /* bc1any2f */
        case 392:  /* bc1any2t */
        case 391:  /* bc1any4f */
        case 390:  /* bc1any4t */
        case 349:  /* call_value_multiple_split */
        case 348:  /* call_value_multiple_internal */
        case 347:  /* call_value_split */
        case 346:  /* call_value_internal */
        case 345:  /* call_split */
        case 344:  /* call_internal */
        case 343:  /* sibcall_value_multiple_internal */
        case 342:  /* sibcall_value_internal */
        case 341:  /* sibcall_internal */
        case 335:  /* return_internal */
        case 334:  /* return */
        case 332:  /* tablejumpdi */
        case 331:  /* tablejumpsi */
        case 330:  /* indirect_jumpdi */
        case 329:  /* indirect_jumpsi */
        case 328:  /* *mips.md:4639 */
        case 327:  /* jump */
        case 270:  /* *branch_equalitydi_mips16 */
        case 269:  /* *branch_equalitysi_mips16 */
        case 268:  /* *branch_equalitydi_inverted */
        case 267:  /* *branch_equalitysi_inverted */
        case 266:  /* *branch_equalitydi */
        case 265:  /* *branch_equalitysi */
        case 264:  /* *branch_zerodi_inverted */
        case 263:  /* *branch_zerosi_inverted */
        case 262:  /* *branch_zerodi */
        case 261:  /* *branch_zerosi */
        case 260:  /* branch_fp_inverted */
        case 259:  /* branch_fp */
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 389:  /* mips_cabs_cond_ps */
        case 388:  /* mips_c_cond_ps */
        case 387:  /* mips_cabs_cond_4s */
        case 386:  /* mips_c_cond_4s */
        case 385:  /* mips_cabs_cond_d */
        case 384:  /* mips_cabs_cond_s */
        case 326:  /* sungt_df */
        case 325:  /* sunge_df */
        case 324:  /* sgt_df */
        case 323:  /* sge_df */
        case 322:  /* sungt_sf */
        case 321:  /* sunge_sf */
        case 320:  /* sgt_sf */
        case 319:  /* sge_sf */
        case 318:  /* sle_df */
        case 317:  /* slt_df */
        case 316:  /* seq_df */
        case 315:  /* sunle_df */
        case 314:  /* sunlt_df */
        case 313:  /* suneq_df */
        case 312:  /* sunordered_df */
        case 311:  /* sle_sf */
        case 310:  /* slt_sf */
        case 309:  /* seq_sf */
        case 308:  /* sunle_sf */
        case 307:  /* sunlt_sf */
        case 306:  /* suneq_sf */
        case 305:  /* sunordered_sf */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:  /* store_df_high */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:  /* load_df_high */
        case 235:  /* load_df_low */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 234:  /* *mfhilo_di_macc */
        case 233:  /* *mfhilo_si_macc */
        case 232:  /* *mfhilo_di */
        case 231:  /* *mfhilo_si */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:  /* *movdf_softfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 229:  /* *movdf_mips16 */
        case 225:  /* *movsf_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 230:  /* movv2sf_hardfloat_64bit */
        case 227:  /* *movdf_hardfloat_32bit */
        case 226:  /* *movdf_hardfloat_64bit */
        case 223:  /* *movsf_hardfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x62)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 222:  /* *movqi_mips16 */
        case 220:  /* *movhi_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 221:  /* *movqi_internal */
        case 219:  /* *movhi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 206:  /* movcc */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x31)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:  /* *movsi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xad40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 205:  /* *movsi_mips16 */
        case 203:  /* *movdi_64bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:  /* *movdi_64bit */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x1088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x2940)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 201:  /* *movdi_32bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:  /* *movdi_32bit */
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((which_alternative != 5) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 340:  /* load_calldi */
        case 339:  /* load_callsi */
        case 338:  /* exception_receiver */
        case 256:  /* *mips.md:4061 */
        case 212:  /* *ldxc1_di */
        case 211:  /* *ldxc1_di */
        case 210:  /* *lwxc1_di */
        case 209:  /* *ldxc1_si */
        case 208:  /* *ldxc1_si */
        case 207:  /* *lwxc1_si */
        case 193:  /* *load_gotdi */
        case 192:  /* *load_gotsi */
        case 191:  /* *got_pagedi */
        case 190:  /* *got_pagesi */
        case 189:  /* *got_dispdi */
        case 188:  /* *got_dispsi */
        case 187:  /* *xgot_lodi */
        case 186:  /* *xgot_losi */
        case 177:  /* mov_ldr */
        case 176:  /* mov_lwr */
        case 175:  /* mov_ldl */
        case 174:  /* mov_lwl */
        case 152:  /* *zero_extendqihi2_mips16 */
        case 150:  /* *zero_extendhidi2_mips16 */
        case 149:  /* *zero_extendhisi2_mips16 */
        case 148:  /* *zero_extendqidi2_mips16 */
        case 147:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 224:  /* *movsf_softfloat */
        case 162:  /* extendqihi2 */
        case 161:  /* *extendhidi2_seh */
        case 160:  /* *extendhisi2_seh */
        case 159:  /* *extendqidi2_seb */
        case 158:  /* *extendqisi2_seb */
        case 157:  /* *extendhidi2 */
        case 156:  /* *extendhisi2 */
        case 155:  /* *extendqidi2 */
        case 154:  /* *extendqisi2 */
        case 153:  /* extendsidi2 */
        case 151:  /* *zero_extendqihi2 */
        case 146:  /* *zero_extendhidi2 */
        case 145:  /* *zero_extendhisi2 */
        case 144:  /* *zero_extendqidi2 */
        case 143:  /* *zero_extendqisi2 */
        case 142:  /* zero_extendsidi2 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 60:  /* umuldi3_highpart */
        case 59:  /* smuldi3_highpart */
        case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
        case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
        case 56:  /* umulsi3_highpart_mulhi_internal */
        case 55:  /* smulsi3_highpart_mulhi_internal */
        case 54:  /* umulsi3_highpart_internal */
        case 53:  /* smulsi3_highpart_internal */
        case 50:  /* *mulsu_di */
        case 49:  /* *muls_di */
        case 48:  /* *umulsidi3_64bit_parts */
        case 47:  /* *mulsidi3_64bit_parts */
        case 46:  /* *umulsidi3_64bit */
        case 45:  /* *mulsidi3_64bit */
        case 44:  /* umulsidi3_32bit_r4000 */
        case 43:  /* mulsidi3_32bit_r4000 */
        case 42:  /* umulsidi3_32bit_internal */
        case 41:  /* mulsidi3_32bit_internal */
        case 40:  /* *muls */
        case 32:  /* muldi3_r4000 */
        case 31:  /* mulsi3_r4000 */
        case 30:  /* muldi3_internal */
        case 29:  /* mulsi3_internal */
        case 28:  /* muldi3_mult3 */
        case 27:  /* mulsi3_mult3 */
	  extract_constrain_insn_cached (insn);
	  if ((! ((TARGET_FIX_R4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 393:  /* bc1any2f */
        case 392:  /* bc1any2t */
        case 391:  /* bc1any4f */
        case 390:  /* bc1any4t */
        case 349:  /* call_value_multiple_split */
        case 348:  /* call_value_multiple_internal */
        case 347:  /* call_value_split */
        case 346:  /* call_value_internal */
        case 345:  /* call_split */
        case 344:  /* call_internal */
        case 343:  /* sibcall_value_multiple_internal */
        case 342:  /* sibcall_value_internal */
        case 341:  /* sibcall_internal */
        case 335:  /* return_internal */
        case 334:  /* return */
        case 332:  /* tablejumpdi */
        case 331:  /* tablejumpsi */
        case 330:  /* indirect_jumpdi */
        case 329:  /* indirect_jumpsi */
        case 328:  /* *mips.md:4639 */
        case 327:  /* jump */
        case 270:  /* *branch_equalitydi_mips16 */
        case 269:  /* *branch_equalitysi_mips16 */
        case 268:  /* *branch_equalitydi_inverted */
        case 267:  /* *branch_equalitysi_inverted */
        case 266:  /* *branch_equalitydi */
        case 265:  /* *branch_equalitysi */
        case 264:  /* *branch_zerodi_inverted */
        case 263:  /* *branch_zerosi_inverted */
        case 262:  /* *branch_zerodi */
        case 261:  /* *branch_zerosi */
        case 260:  /* branch_fp_inverted */
        case 259:  /* branch_fp */
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 389:  /* mips_cabs_cond_ps */
        case 388:  /* mips_c_cond_ps */
        case 387:  /* mips_cabs_cond_4s */
        case 386:  /* mips_c_cond_4s */
        case 385:  /* mips_cabs_cond_d */
        case 384:  /* mips_cabs_cond_s */
        case 326:  /* sungt_df */
        case 325:  /* sunge_df */
        case 324:  /* sgt_df */
        case 323:  /* sge_df */
        case 322:  /* sungt_sf */
        case 321:  /* sunge_sf */
        case 320:  /* sgt_sf */
        case 319:  /* sge_sf */
        case 318:  /* sle_df */
        case 317:  /* slt_df */
        case 316:  /* seq_df */
        case 315:  /* sunle_df */
        case 314:  /* sunlt_df */
        case 313:  /* suneq_df */
        case 312:  /* sunordered_df */
        case 311:  /* sle_sf */
        case 310:  /* slt_sf */
        case 309:  /* seq_sf */
        case 308:  /* sunle_sf */
        case 307:  /* sunlt_sf */
        case 306:  /* suneq_sf */
        case 305:  /* sunordered_sf */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:  /* store_df_high */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:  /* load_df_high */
        case 235:  /* load_df_low */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 234:  /* *mfhilo_di_macc */
        case 233:  /* *mfhilo_si_macc */
        case 232:  /* *mfhilo_di */
        case 231:  /* *mfhilo_si */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:  /* *movdf_softfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 229:  /* *movdf_mips16 */
        case 225:  /* *movsf_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 230:  /* movv2sf_hardfloat_64bit */
        case 227:  /* *movdf_hardfloat_32bit */
        case 226:  /* *movdf_hardfloat_64bit */
        case 223:  /* *movsf_hardfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x62)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 222:  /* *movqi_mips16 */
        case 220:  /* *movhi_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 221:  /* *movqi_internal */
        case 219:  /* *movhi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 206:  /* movcc */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x31)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:  /* *movsi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xad40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 205:  /* *movsi_mips16 */
        case 203:  /* *movdi_64bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:  /* *movdi_64bit */
	  extract_constrain_insn_cached (insn);
	  if ((((!((1 << which_alternative) & 0x1088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x2940)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 201:  /* *movdi_32bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:  /* *movdi_32bit */
	  extract_constrain_insn_cached (insn);
	  if (((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((which_alternative != 5) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 340:  /* load_calldi */
        case 339:  /* load_callsi */
        case 338:  /* exception_receiver */
        case 256:  /* *mips.md:4061 */
        case 212:  /* *ldxc1_di */
        case 211:  /* *ldxc1_di */
        case 210:  /* *lwxc1_di */
        case 209:  /* *ldxc1_si */
        case 208:  /* *ldxc1_si */
        case 207:  /* *lwxc1_si */
        case 193:  /* *load_gotdi */
        case 192:  /* *load_gotsi */
        case 191:  /* *got_pagedi */
        case 190:  /* *got_pagesi */
        case 189:  /* *got_dispdi */
        case 188:  /* *got_dispsi */
        case 187:  /* *xgot_lodi */
        case 186:  /* *xgot_losi */
        case 177:  /* mov_ldr */
        case 176:  /* mov_lwr */
        case 175:  /* mov_ldl */
        case 174:  /* mov_lwl */
        case 152:  /* *zero_extendqihi2_mips16 */
        case 150:  /* *zero_extendhidi2_mips16 */
        case 149:  /* *zero_extendhisi2_mips16 */
        case 148:  /* *zero_extendqidi2_mips16 */
        case 147:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 224:  /* *movsf_softfloat */
        case 162:  /* extendqihi2 */
        case 161:  /* *extendhidi2_seh */
        case 160:  /* *extendhisi2_seh */
        case 159:  /* *extendqidi2_seb */
        case 158:  /* *extendqisi2_seb */
        case 157:  /* *extendhidi2 */
        case 156:  /* *extendhisi2 */
        case 155:  /* *extendqidi2 */
        case 154:  /* *extendqisi2 */
        case 153:  /* extendsidi2 */
        case 151:  /* *zero_extendqihi2 */
        case 146:  /* *zero_extendhidi2 */
        case 145:  /* *zero_extendhisi2 */
        case 144:  /* *zero_extendqidi2 */
        case 143:  /* *zero_extendqisi2 */
        case 142:  /* zero_extendsidi2 */
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 60:  /* umuldi3_highpart */
        case 59:  /* smuldi3_highpart */
        case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
        case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
        case 56:  /* umulsi3_highpart_mulhi_internal */
        case 55:  /* smulsi3_highpart_mulhi_internal */
        case 54:  /* umulsi3_highpart_internal */
        case 53:  /* smulsi3_highpart_internal */
        case 50:  /* *mulsu_di */
        case 49:  /* *muls_di */
        case 48:  /* *umulsidi3_64bit_parts */
        case 47:  /* *mulsidi3_64bit_parts */
        case 46:  /* *umulsidi3_64bit */
        case 45:  /* *mulsidi3_64bit */
        case 44:  /* umulsidi3_32bit_r4000 */
        case 43:  /* mulsidi3_32bit_r4000 */
        case 42:  /* umulsidi3_32bit_internal */
        case 41:  /* mulsidi3_32bit_internal */
        case 40:  /* *muls */
        case 32:  /* muldi3_r4000 */
        case 31:  /* mulsi3_r4000 */
        case 30:  /* muldi3_internal */
        case 29:  /* mulsi3_internal */
        case 28:  /* muldi3_mult3 */
        case 27:  /* mulsi3_mult3 */
	  extract_constrain_insn_cached (insn);
	  if ((! ((TARGET_FIX_R4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 393:  /* bc1any2f */
        case 392:  /* bc1any2t */
        case 391:  /* bc1any4f */
        case 390:  /* bc1any4t */
        case 349:  /* call_value_multiple_split */
        case 348:  /* call_value_multiple_internal */
        case 347:  /* call_value_split */
        case 346:  /* call_value_internal */
        case 345:  /* call_split */
        case 344:  /* call_internal */
        case 343:  /* sibcall_value_multiple_internal */
        case 342:  /* sibcall_value_internal */
        case 341:  /* sibcall_internal */
        case 335:  /* return_internal */
        case 334:  /* return */
        case 332:  /* tablejumpdi */
        case 331:  /* tablejumpsi */
        case 330:  /* indirect_jumpdi */
        case 329:  /* indirect_jumpsi */
        case 328:  /* *mips.md:4639 */
        case 327:  /* jump */
        case 270:  /* *branch_equalitydi_mips16 */
        case 269:  /* *branch_equalitysi_mips16 */
        case 268:  /* *branch_equalitydi_inverted */
        case 267:  /* *branch_equalitysi_inverted */
        case 266:  /* *branch_equalitydi */
        case 265:  /* *branch_equalitysi */
        case 264:  /* *branch_zerodi_inverted */
        case 263:  /* *branch_zerosi_inverted */
        case 262:  /* *branch_zerodi */
        case 261:  /* *branch_zerosi */
        case 260:  /* branch_fp_inverted */
        case 259:  /* branch_fp */
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_false (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx insn;

  gcc_assert (slot < 1);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 348:  /* call_value_multiple_internal */
    case 346:  /* call_value_internal */
    case 344:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((TARGET_ABICALLS != 0) == (JAL_MACRO_NO))) || ((which_alternative == 0) && (((TARGET_ABICALLS && !TARGET_NEWABI) != 0) == (JAL_MACRO_NO))))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 349:  /* call_value_multiple_split */
    case 347:  /* call_value_split */
    case 345:  /* call_split */
    case 343:  /* sibcall_value_multiple_internal */
    case 342:  /* sibcall_value_internal */
    case 341:  /* sibcall_internal */
      slot += 3 * 1;
      break;
      break;

    case 335:  /* return_internal */
    case 334:  /* return */
    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
    case 327:  /* jump */
      slot += 2 * 1;
      break;
      break;

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
    case 328:  /* *mips.md:4639 */
    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 260:  /* branch_fp_inverted */
    case 259:  /* branch_fp */
      extract_constrain_insn_cached (insn);
      if ((TARGET_MIPS16) == (0))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  gcc_assert (slot >= 1);

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 389:  /* mips_cabs_cond_ps */
        case 388:  /* mips_c_cond_ps */
        case 387:  /* mips_cabs_cond_4s */
        case 386:  /* mips_c_cond_4s */
        case 385:  /* mips_cabs_cond_d */
        case 384:  /* mips_cabs_cond_s */
        case 326:  /* sungt_df */
        case 325:  /* sunge_df */
        case 324:  /* sgt_df */
        case 323:  /* sge_df */
        case 322:  /* sungt_sf */
        case 321:  /* sunge_sf */
        case 320:  /* sgt_sf */
        case 319:  /* sge_sf */
        case 318:  /* sle_df */
        case 317:  /* slt_df */
        case 316:  /* seq_df */
        case 315:  /* sunle_df */
        case 314:  /* sunlt_df */
        case 313:  /* suneq_df */
        case 312:  /* sunordered_df */
        case 311:  /* sle_sf */
        case 310:  /* slt_sf */
        case 309:  /* seq_sf */
        case 308:  /* sunle_sf */
        case 307:  /* sunlt_sf */
        case 306:  /* suneq_sf */
        case 305:  /* sunordered_sf */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((ISA_HAS_FCMP_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:  /* store_df_high */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:  /* load_df_high */
        case 235:  /* load_df_low */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 0) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 234:  /* *mfhilo_di_macc */
        case 233:  /* *mfhilo_si_macc */
        case 232:  /* *mfhilo_di */
        case 231:  /* *mfhilo_si */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((ISA_HAS_HILO_INTERLOCKS) == (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:  /* *movdf_softfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x18)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 229:  /* *movdf_mips16 */
        case 225:  /* *movsf_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 3) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 230:  /* movv2sf_hardfloat_64bit */
        case 227:  /* *movdf_hardfloat_32bit */
        case 226:  /* *movdf_hardfloat_64bit */
        case 223:  /* *movsf_hardfloat */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((!((1 << which_alternative) & 0x104)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x62)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 222:  /* *movqi_mips16 */
        case 220:  /* *movhi_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 221:  /* *movqi_internal */
        case 219:  /* *movhi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 2) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x30)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 206:  /* movcc */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x31)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:  /* *movsi_internal */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((!((1 << which_alternative) & 0x4088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0xad40)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 205:  /* *movsi_mips16 */
        case 203:  /* *movdi_64bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 6) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 202:  /* *movdi_64bit */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((!((1 << which_alternative) & 0x1088)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x2940)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 201:  /* *movdi_32bit_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 5) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((which_alternative != 7) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 200:  /* *movdi_32bit */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((!((1 << which_alternative) & 0x84)) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((!((1 << which_alternative) & 0x140)) || (! ((ISA_HAS_XFER_DELAY) != (0))))) && ((which_alternative != 5) || (! ((ISA_HAS_HILO_INTERLOCKS) == (0))))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 340:  /* load_calldi */
        case 339:  /* load_callsi */
        case 338:  /* exception_receiver */
        case 256:  /* *mips.md:4061 */
        case 212:  /* *ldxc1_di */
        case 211:  /* *ldxc1_di */
        case 210:  /* *lwxc1_di */
        case 209:  /* *ldxc1_si */
        case 208:  /* *ldxc1_si */
        case 207:  /* *lwxc1_si */
        case 193:  /* *load_gotdi */
        case 192:  /* *load_gotsi */
        case 191:  /* *got_pagedi */
        case 190:  /* *got_pagesi */
        case 189:  /* *got_dispdi */
        case 188:  /* *got_dispsi */
        case 187:  /* *xgot_lodi */
        case 186:  /* *xgot_losi */
        case 177:  /* mov_ldr */
        case 176:  /* mov_lwr */
        case 175:  /* mov_ldl */
        case 174:  /* mov_lwl */
        case 152:  /* *zero_extendqihi2_mips16 */
        case 150:  /* *zero_extendhidi2_mips16 */
        case 149:  /* *zero_extendhisi2_mips16 */
        case 148:  /* *zero_extendqidi2_mips16 */
        case 147:  /* *zero_extendqisi2_mips16 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((ISA_HAS_LOAD_DELAY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 224:  /* *movsf_softfloat */
        case 162:  /* extendqihi2 */
        case 161:  /* *extendhidi2_seh */
        case 160:  /* *extendhisi2_seh */
        case 159:  /* *extendqidi2_seb */
        case 158:  /* *extendqisi2_seb */
        case 157:  /* *extendhidi2 */
        case 156:  /* *extendhisi2 */
        case 155:  /* *extendqidi2 */
        case 154:  /* *extendqisi2 */
        case 153:  /* extendsidi2 */
        case 151:  /* *zero_extendqihi2 */
        case 146:  /* *zero_extendhidi2 */
        case 145:  /* *zero_extendhisi2 */
        case 144:  /* *zero_extendqidi2 */
        case 143:  /* *zero_extendqisi2 */
        case 142:  /* zero_extendsidi2 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 1) || (! ((ISA_HAS_LOAD_DELAY) != (0)))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 60:  /* umuldi3_highpart */
        case 59:  /* smuldi3_highpart */
        case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
        case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
        case 56:  /* umulsi3_highpart_mulhi_internal */
        case 55:  /* smulsi3_highpart_mulhi_internal */
        case 54:  /* umulsi3_highpart_internal */
        case 53:  /* smulsi3_highpart_internal */
        case 50:  /* *mulsu_di */
        case 49:  /* *muls_di */
        case 48:  /* *umulsidi3_64bit_parts */
        case 47:  /* *mulsidi3_64bit_parts */
        case 46:  /* *umulsidi3_64bit */
        case 45:  /* *mulsidi3_64bit */
        case 44:  /* umulsidi3_32bit_r4000 */
        case 43:  /* mulsidi3_32bit_r4000 */
        case 42:  /* umulsidi3_32bit_internal */
        case 41:  /* mulsidi3_32bit_internal */
        case 40:  /* *muls */
        case 32:  /* muldi3_r4000 */
        case 31:  /* mulsi3_r4000 */
        case 30:  /* muldi3_internal */
        case 29:  /* mulsi3_internal */
        case 28:  /* muldi3_mult3 */
        case 27:  /* mulsi3_mult3 */
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((TARGET_FIX_R4000) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 393:  /* bc1any2f */
        case 392:  /* bc1any2t */
        case 391:  /* bc1any4f */
        case 390:  /* bc1any4t */
        case 349:  /* call_value_multiple_split */
        case 348:  /* call_value_multiple_internal */
        case 347:  /* call_value_split */
        case 346:  /* call_value_internal */
        case 345:  /* call_split */
        case 344:  /* call_internal */
        case 343:  /* sibcall_value_multiple_internal */
        case 342:  /* sibcall_value_internal */
        case 341:  /* sibcall_internal */
        case 335:  /* return_internal */
        case 334:  /* return */
        case 332:  /* tablejumpdi */
        case 331:  /* tablejumpsi */
        case 330:  /* indirect_jumpdi */
        case 329:  /* indirect_jumpsi */
        case 328:  /* *mips.md:4639 */
        case 327:  /* jump */
        case 270:  /* *branch_equalitydi_mips16 */
        case 269:  /* *branch_equalitysi_mips16 */
        case 268:  /* *branch_equalitydi_inverted */
        case 267:  /* *branch_equalitysi_inverted */
        case 266:  /* *branch_equalitydi */
        case 265:  /* *branch_equalitysi */
        case 264:  /* *branch_zerodi_inverted */
        case 263:  /* *branch_zerosi_inverted */
        case 262:  /* *branch_zerodi */
        case 261:  /* *branch_zerosi */
        case 260:  /* branch_fp_inverted */
        case 259:  /* branch_fp */
	  return 0;

        default:
	  extract_constrain_insn_cached (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((get_attr_length (insn) == (TARGET_MIPS16 ? 2 : 4)) == (SINGLE_INSN_YES)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

      }
    default:
      gcc_unreachable ();
    }
}


int max_dfa_issue_rate = 6;
/* Vector translating external insn codes to internal ones.*/
static const unsigned char alu_translate[] ATTRIBUTE_UNUSED = {
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     0,     0,     0,     1,     1,     1,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     2};

/* Vector for state transitions.  */
static const unsigned char alu_transitions[] ATTRIBUTE_UNUSED = {
    1,     0,     0,     2,     1,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char alu_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     0,     1,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char alu_min_issue_delay[] ATTRIBUTE_UNUSED = {
   16};

/* Vector for locked state flags.  */
static const unsigned char alu_dead_lock[] = {
    0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char alu_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char imuldiv_translate[] ATTRIBUTE_UNUSED = {
    0,     1,     2,     0,     0,     0,     0,     0,     0,     3,
    4,     0,     5,     6,     2,     7,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
    9,    10,     4,     5,    11,     8,     9,    12,    13,     3,
   14,     6,    15,     0,     0,     0,     0,     0,     0,     0,
    0,     8,    16,    15,    17,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,    11,    18,    19,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,    20};

/* Comb vector for state transitions.  */
static const unsigned char imuldiv_transitions[] ATTRIBUTE_UNUSED = {
    0,    27,     4,    29,    69,    38,    35,    40,    34,    31,
    2,    36,    10,    49,    65,     3,    30,    39,    22,     1,
    0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,     2,     3,     4,     5,     6,     7,     8,     9,    10,
   11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
   21,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    22,    23,    24,    25,    26,    27,    28,    29,    30,
   31,    32,    33,    34,    35,    36,    37,    38,     0,    40,
   41,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    42,    43,    44,    45,    46,    47,    48,    49,    50,
   51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
   61,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
   70,    62,    63,    64,    65,    66,    67,    68,     1,    39,
};

/* Check vector for state transitions.  */
static const unsigned char imuldiv_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
   70,    61,    62,    63,    64,    65,    66,    67,    68,    69,
};

/* Base vector for state transitions.  */
static const unsigned char imuldiv_base[] = {
    0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
   80,   101,   102,   103,   104,   105,   106,   107,   108,   109,
  110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
  120,   141,   142,   143,   144,   145,   146,   147,   148,   149,
};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char imuldiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
};

/* Check vector for state insn alternatives.  */
static const unsigned char imuldiv_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
   70,    61,    62,    63,    64,    65,    66,    67,    68,    69,
};

/* Base vector for state insn alternatives.  */
static const unsigned char imuldiv_base_state_alts[] = {
    0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
   80,   101,   102,   103,   104,   105,   106,   107,   108,   109,
  110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
  120,   141,   142,   143,   144,   145,   146,   147,   148,   149,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char imuldiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,    38,    38,    38,    38,    38,    38,    38,    38,
   38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
   38,     0,     0,    37,    37,    37,    37,    37,    37,    37,
   37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
   37,    37,     0,     0,    36,    36,    36,    36,    36,    36,
   36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
   36,    36,    36,     0,     0,    35,    35,    35,    35,    35,
   35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
   35,    35,    35,    35,     0,     0,    34,    34,    34,    34,
   34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
   34,    34,    34,    34,    34,     0,     0,    33,    33,    33,
   33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
   33,    33,    33,    33,    33,    33,     0,     0,    32,    32,
   32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
   32,    32,    32,    32,    32,    32,    32,     0,     0,    31,
   31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
   31,    31,    31,    31,    31,    31,    31,    31,     0,     0,
   30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
   30,    30,    30,    30,    30,    30,    30,    30,    30,     0,
    0,    29,    29,    29,    29,    29,    29,    29,    29,    29,
   29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
    0,     0,    28,    28,    28,    28,    28,    28,    28,    28,
   28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
   28,     0,     0,    27,    27,    27,    27,    27,    27,    27,
   27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
   27,    27,     0,     0,    26,    26,    26,    26,    26,    26,
   26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
   26,    26,    26,     0,     0,    25,    25,    25,    25,    25,
   25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
   25,    25,    25,    25,     0,     0,    24,    24,    24,    24,
   24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
   24,    24,    24,    24,    24,     0,     0,    23,    23,    23,
   23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
   23,    23,    23,    23,    23,    23,     0,     0,    22,    22,
   22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
   22,    22,    22,    22,    22,    22,    22,     0,     0,    21,
   21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
   21,    21,    21,    21,    21,    21,    21,    21,     0,     0,
   20,    20,    20,    20,    20,    20,    20,    20,    20,    20,
   20,    20,    20,    20,    20,    20,    20,    20,    20,     0,
    0,    19,    19,    19,    19,    19,    19,    19,    19,    19,
   19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
    0,     0,    18,    18,    18,    18,    18,    18,    18,    18,
   18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
   18,     0,     0,    17,    17,    17,    17,    17,    17,    17,
   17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
   17,    17,     0,     0,    16,    16,    16,    16,    16,    16,
   16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
   16,    16,    16,     0,     0,    15,    15,    15,    15,    15,
   15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
   15,    15,    15,    15,     0,     0,    14,    14,    14,    14,
   14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
   14,    14,    14,    14,    14,     0,     0,    13,    13,    13,
   13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
   13,    13,    13,    13,    13,    13,     0,     0,    12,    12,
   12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
   12,    12,    12,    12,    12,    12,    12,     0,     0,    11,
   11,    11,    11,    11,    11,    11,    11,    11,    11,    11,
   11,    11,    11,    11,    11,    11,    11,    11,     0,     0,
   10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
   10,    10,    10,    10,    10,    10,    10,    10,    10,     0,
    0,     9,     9,     9,     9,     9,     9,     9,     9,     9,
    9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
    0,     0,     8,     8,     8,     8,     8,     8,     8,     8,
    8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
    8,     0,     0,     7,     7,     7,     7,     7,     7,     7,
    7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
    7,     7,     0,     0,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     0,     0,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     0,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     0,     0,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     0,     0,     2,     2,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     2,     2,     2,     0,     0,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
   68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
   68,    68,    68,    68,    68,    68,    68,    68,    68,     0,
    0,    67,    67,    67,    67,    67,    67,    67,    67,    67,
   67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
    0,     0,    66,    66,    66,    66,    66,    66,    66,    66,
   66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
   66,     0,     0,    65,    65,    65,    65,    65,    65,    65,
   65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
   65,    65,     0,     0,    64,    64,    64,    64,    64,    64,
   64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
   64,    64,    64,     0,     0,    63,    63,    63,    63,    63,
   63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
   63,    63,    63,    63,     0,     0,    62,    62,    62,    62,
   62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
   62,    62,    62,    62,    62,     0,     0,    61,    61,    61,
   61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
   61,    61,    61,    61,    61,    61,     0,     0,    60,    60,
   60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
   60,    60,    60,    60,    60,    60,    60,     0,     0,    59,
   59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
   59,    59,    59,    59,    59,    59,    59,    59,     0,     0,
   58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
   58,    58,    58,    58,    58,    58,    58,    58,    58,     0,
    0,    57,    57,    57,    57,    57,    57,    57,    57,    57,
   57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
    0,     0,    56,    56,    56,    56,    56,    56,    56,    56,
   56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
   56,     0,     0,    55,    55,    55,    55,    55,    55,    55,
   55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
   55,    55,     0,     0,    54,    54,    54,    54,    54,    54,
   54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
   54,    54,    54,     0,     0,    53,    53,    53,    53,    53,
   53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
   53,    53,    53,    53,     0,     0,    52,    52,    52,    52,
   52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
   52,    52,    52,    52,    52,     0,     0,    51,    51,    51,
   51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
   51,    51,    51,    51,    51,    51,     0,     0,    50,    50,
   50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
   50,    50,    50,    50,    50,    50,    50,     0,     0,    49,
   49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
   49,    49,    49,    49,    49,    49,    49,    49,     0,     0,
   48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
   48,    48,    48,    48,    48,    48,    48,    48,    48,     0,
    0,    47,    47,    47,    47,    47,    47,    47,    47,    47,
   47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
    0,     0,    46,    46,    46,    46,    46,    46,    46,    46,
   46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
   46,     0,     0,    45,    45,    45,    45,    45,    45,    45,
   45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
   45,    45,     0,     0,    44,    44,    44,    44,    44,    44,
   44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
   44,    44,    44,     0,     0,    43,    43,    43,    43,    43,
   43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
   43,    43,    43,    43,     0,     0,    42,    42,    42,    42,
   42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
   42,    42,    42,    42,    42,     0,     0,    41,    41,    41,
   41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
   41,    41,    41,    41,    41,    41,     0,     0,    40,    40,
   40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
   40,    40,    40,    40,    40,    40,    40,     0,     0,    39,
   39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
   39,    39,    39,    39,    39,    39,    39,    39,     0,     0,
   69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
   69,    69,    69,    69,    69,    69,    69,    69,    69,     0,
};

/* Vector for locked state flags.  */
static const unsigned char imuldiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char imuldiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr4130_main_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     2,     3,     3,
    0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     4};

/* Vector for state transitions.  */
static const unsigned char vr4130_main_transitions[] ATTRIBUTE_UNUSED = {
    0,     3,     4,     1,     0,     1,     6,     2,     6,     0,
    2,     6,     3,     6,     0,     3,     6,     6,     6,     0,
    4,     6,     5,     2,     0,     5,     6,     6,     3,     0,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char vr4130_main_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     2,     1,     1,     1,     0,     2,     0,     1,
    1,     0,     1,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     1,     1,     1,     1,     0,     0,     1,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr4130_main_min_issue_delay[] ATTRIBUTE_UNUSED = {
    2,   148,   228,    48};

/* Vector for locked state flags.  */
static const unsigned char vr4130_main_dead_lock[] = {
    0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr4130_main_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr4130_muldiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
    1,     1,     1,     2,     1,     3,     4,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     5};

/* Comb vector for state transitions.  */
static const unsigned char vr4130_muldiv_transitions[] ATTRIBUTE_UNUSED = {
    0,    72,    70,    37,     1,     0,     1,     2,     3,     4,
    5,     2,     3,     4,     5,     6,     6,     7,     8,     9,
   10,     7,     8,     9,    10,    11,    11,    12,    13,    14,
   15,    12,    13,    14,    15,    16,    16,    17,    18,    19,
   20,    17,    18,    19,    20,    21,    21,    22,    23,    24,
   25,    22,    23,    24,    25,    26,    26,    27,    28,    29,
   30,    27,    28,    29,    30,    31,    31,    32,    33,    34,
   35,    32,    33,    34,    35,    36,    36,    37,    38,    39,
   40,    37,    38,    39,    40,    41,    41,    42,    43,    44,
   45,    42,    43,    44,    45,    46,    46,    47,    48,    49,
   50,    47,    48,    49,    50,    51,    51,    52,    53,    54,
   55,    52,    53,    54,    55,    56,    56,    57,    58,    59,
   60,    57,    58,    59,    60,    61,    61,    62,    63,    64,
   65,    62,    63,    64,    65,    66,    66,    67,    68,    69,
   70,    67,    68,    69,    70,    71,    71,    72,    73,    73,
   73,    72,     0};

/* Check vector for state transitions.  */
static const unsigned char vr4130_muldiv_check[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    66,    67,    68,    69,    70,    71,    72,    73,    73,
   73,    71,    72};

/* Base vector for state transitions.  */
static const unsigned char vr4130_muldiv_base[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138,   139,
  140,   146,   147};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char vr4130_muldiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
    0,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char vr4130_muldiv_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    66,    67,    68,    69,    70,    71,    72,    73,    73,
   73,    71,    72};

/* Base vector for state insn alternatives.  */
static const unsigned char vr4130_muldiv_base_state_alts[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138,   139,
  140,   146,   147};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr4130_muldiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,    72,    72,    72,
   72,     0,     0,    71,    71,    71,    71,     0,     0,    70,
   70,    70,    70,     0,     0,    69,    69,    69,    69,     0,
    0,    68,    68,    68,    68,     0,     0,    67,    67,    67,
   67,     0,     0,    66,    66,    66,    66,     0,     0,    65,
   65,    65,    65,     0,     0,    64,    64,    64,    64,     0,
    0,    63,    63,    63,    63,     0,     0,    62,    62,    62,
   62,     0,     0,    61,    61,    61,    61,     0,     0,    60,
   60,    60,    60,     0,     0,    59,    59,    59,    59,     0,
    0,    58,    58,    58,    58,     0,     0,    57,    57,    57,
   57,     0,     0,    56,    56,    56,    56,     0,     0,    55,
   55,    55,    55,     0,     0,    54,    54,    54,    54,     0,
    0,    53,    53,    53,    53,     0,     0,    52,    52,    52,
   52,     0,     0,    51,    51,    51,    51,     0,     0,    50,
   50,    50,    50,     0,     0,    49,    49,    49,    49,     0,
    0,    48,    48,    48,    48,     0,     0,    47,    47,    47,
   47,     0,     0,    46,    46,    46,    46,     0,     0,    45,
   45,    45,    45,     0,     0,    44,    44,    44,    44,     0,
    0,    43,    43,    43,    43,     0,     0,    42,    42,    42,
   42,     0,     0,    41,    41,    41,    41,     0,     0,    40,
   40,    40,    40,     0,     0,    39,    39,    39,    39,     0,
    0,    38,    38,    38,    38,     0,     0,    37,    37,    37,
   37,     0,     0,    36,    36,    36,    36,     0,     0,    35,
   35,    35,    35,     0,     0,    34,    34,    34,    34,     0,
    0,    33,    33,    33,    33,     0,     0,    32,    32,    32,
   32,     0,     0,    31,    31,    31,    31,     0,     0,    30,
   30,    30,    30,     0,     0,    29,    29,    29,    29,     0,
    0,    28,    28,    28,    28,     0,     0,    27,    27,    27,
   27,     0,     0,    26,    26,    26,    26,     0,     0,    25,
   25,    25,    25,     0,     0,    24,    24,    24,    24,     0,
    0,    23,    23,    23,    23,     0,     0,    22,    22,    22,
   22,     0,     0,    21,    21,    21,    21,     0,     0,    20,
   20,    20,    20,     0,     0,    19,    19,    19,    19,     0,
    0,    18,    18,    18,    18,     0,     0,    17,    17,    17,
   17,     0,     0,    16,    16,    16,    16,     0,     0,    15,
   15,    15,    15,     0,     0,    14,    14,    14,    14,     0,
    0,    13,    13,    13,    13,     0,     0,    12,    12,    12,
   12,     0,     0,    11,    11,    11,    11,     0,     0,    10,
   10,    10,    10,     0,     0,     9,     9,     9,     9,     0,
    0,     8,     8,     8,     8,     0,     0,     7,     7,     7,
    7,     0,     0,     6,     6,     6,     6,     0,     0,     5,
    5,     5,     5,     0,     0,     4,     4,     4,     4,     0,
    0,     3,     3,     3,     3,     0,     0,     2,     2,     2,
    2,     0,     0,     1,     1,     1,     1,     0};

/* Vector for locked state flags.  */
static const unsigned char vr4130_muldiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr4130_muldiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr4130_mulpre_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     1,     2,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     3};

/* Vector for state transitions.  */
static const unsigned char vr4130_mulpre_transitions[] ATTRIBUTE_UNUSED = {
    0,     3,     1,     0,     1,     5,     5,     2,     2,     5,
    5,     3,     3,     5,     5,     4,     4,     5,     5,     0,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char vr4130_mulpre_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr4130_mulpre_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     4,    64,     3,    48,     2,    32,     1,    16,
};

/* Vector for locked state flags.  */
static const unsigned char vr4130_mulpre_dead_lock[] = {
    0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr4130_mulpre_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr54_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     2,     3,     3,     3,     2,     2,     2,     2,     2,
    2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     2,     2,     1,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     5};

/* Vector for state transitions.  */
static const unsigned char vr54_transitions[] ATTRIBUTE_UNUSED = {
    0,     4,    10,     7,     1,     0,     1,    12,     5,     2,
   12,     0,     2,    12,     3,    12,    12,     0,     3,    12,
    4,    12,    12,     0,     4,    12,    12,    12,    12,     0,
    5,    12,     6,     3,    12,     0,     6,    12,    12,     4,
   12,     0,     7,    12,     8,    12,     2,     0,     8,    12,
    9,    12,     3,     0,     9,    12,    12,    12,     4,     0,
   10,    12,    11,     8,     5,     0,    11,    12,    12,     9,
    6,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char vr54_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     2,     1,     1,     1,     1,     0,     2,     1,
    0,     1,     1,     0,     2,     0,     0,     1,     1,     0,
    1,     0,     0,     1,     1,     0,     0,     0,     0,     1,
    1,     0,     1,     1,     0,     1,     1,     0,     0,     1,
    0,     1,     1,     0,     2,     0,     1,     1,     1,     0,
    1,     0,     1,     1,     1,     0,     0,     0,     1,     1,
    1,     0,     1,     1,     1,     1,     1,     0,     0,     1,
    1,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr54_min_issue_delay[] ATTRIBUTE_UNUSED = {
    1,    37,   150,   121,    38,   148,    81,   196,    24};

/* Vector for locked state flags.  */
static const unsigned char vr54_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr54_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char vr55_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
    3,     4,     4,     4,     5,     5,     5,     6,     5,     5,
    5,     7,     5,     5,     5,     5,     5,     5,     7,     7,
    7,     7,     5,     5,     1,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     8};

/* Vector for state transitions.  */
static const unsigned char vr55_transitions[] ATTRIBUTE_UNUSED = {
    0,    10,   119,   117,   109,     5,    97,     1,     0,     1,
  120,    96,    94,    86,     6,     2,   120,     0,     2,   120,
   85,    83,    75,   120,   120,   120,     3,     3,   120,    74,
   72,    64,   120,   120,    52,     4,     4,   120,    51,    49,
   41,   120,   120,    29,     5,     5,   120,    28,    26,    18,
  120,   120,     6,     0,     6,   120,    17,    15,     7,   120,
  120,   120,     0,     7,   120,    14,    12,     8,   120,   120,
  120,     0,     8,   120,    11,     9,   120,   120,   120,   120,
    0,     9,   120,    10,   120,   120,   120,   120,   120,     0,
   10,   120,   120,   120,   120,   120,   120,   120,     0,    11,
  120,   120,    10,   120,   120,   120,   120,     0,    12,   120,
   13,   120,     9,   120,   120,   120,     0,    13,   120,   120,
  120,    10,   120,   120,   120,     0,    14,   120,   120,    13,
   11,   120,   120,   120,     0,    15,   120,    16,   120,    12,
  120,   120,   120,     0,    16,   120,   120,   120,    13,   120,
  120,   120,     0,    17,   120,   120,    16,    14,   120,   120,
  120,     0,    18,   120,    25,    23,    19,   120,   120,     7,
    0,    19,   120,    22,    20,   120,   120,   120,     8,     0,
   20,   120,    21,   120,   120,   120,   120,     9,     0,    21,
  120,   120,   120,   120,   120,   120,    10,     0,    22,   120,
  120,    21,   120,   120,   120,    11,     0,    23,   120,    24,
  120,    20,   120,   120,    12,     0,    24,   120,   120,   120,
   21,   120,   120,    13,     0,    25,   120,   120,    24,    22,
  120,   120,    14,     0,    26,   120,    27,   120,    23,   120,
  120,    15,     0,    27,   120,   120,   120,    24,   120,   120,
   16,     0,    28,   120,   120,    27,    25,   120,   120,    17,
    0,    29,   120,    40,    38,    30,   120,   120,   120,     5,
   30,   120,    37,    35,    31,   120,   120,   120,     5,    31,
  120,    34,    32,   120,   120,   120,   120,     5,    32,   120,
   33,   120,   120,   120,   120,   120,     5,    33,   120,   120,
  120,   120,   120,   120,   120,     5,    34,   120,   120,    33,
  120,   120,   120,   120,     5,    35,   120,    36,   120,    32,
  120,   120,   120,     5,    36,   120,   120,   120,    33,   120,
  120,   120,     5,    37,   120,   120,    36,    34,   120,   120,
  120,     5,    38,   120,    39,   120,    35,   120,   120,   120,
    5,    39,   120,   120,   120,    36,   120,   120,   120,     5,
   40,   120,   120,    39,    37,   120,   120,   120,     5,    41,
  120,    48,    46,    42,   120,   120,    30,     5,    42,   120,
   45,    43,   120,   120,   120,    31,     5,    43,   120,    44,
  120,   120,   120,   120,    32,     5,    44,   120,   120,   120,
  120,   120,   120,    33,     5,    45,   120,   120,    44,   120,
  120,   120,    34,     5,    46,   120,    47,   120,    43,   120,
  120,    35,     5,    47,   120,   120,   120,    44,   120,   120,
   36,     5,    48,   120,   120,    47,    45,   120,   120,    37,
    5,    49,   120,    50,   120,    46,   120,   120,    38,     5,
   50,   120,   120,   120,    47,   120,   120,    39,     5,    51,
  120,   120,    50,    48,   120,   120,    40,     5,    52,   120,
   63,    61,    53,   120,   120,   120,     4,    53,   120,    60,
   58,    54,   120,   120,   120,     4,    54,   120,    57,    55,
  120,   120,   120,   120,     4,    55,   120,    56,   120,   120,
  120,   120,   120,     4,    56,   120,   120,   120,   120,   120,
  120,   120,     4,    57,   120,   120,    56,   120,   120,   120,
  120,     4,    58,   120,    59,   120,    55,   120,   120,   120,
    4,    59,   120,   120,   120,    56,   120,   120,   120,     4,
   60,   120,   120,    59,    57,   120,   120,   120,     4,    61,
  120,    62,   120,    58,   120,   120,   120,     4,    62,   120,
  120,   120,    59,   120,   120,   120,     4,    63,   120,   120,
   62,    60,   120,   120,   120,     4,    64,   120,    71,    69,
   65,   120,   120,    53,     4,    65,   120,    68,    66,   120,
  120,   120,    54,     4,    66,   120,    67,   120,   120,   120,
  120,    55,     4,    67,   120,   120,   120,   120,   120,   120,
   56,     4,    68,   120,   120,    67,   120,   120,   120,    57,
    4,    69,   120,    70,   120,    66,   120,   120,    58,     4,
   70,   120,   120,   120,    67,   120,   120,    59,     4,    71,
  120,   120,    70,    68,   120,   120,    60,     4,    72,   120,
   73,   120,    69,   120,   120,    61,     4,    73,   120,   120,
  120,    70,   120,   120,    62,     4,    74,   120,   120,    73,
   71,   120,   120,    63,     4,    75,   120,    82,    80,    76,
  120,   120,   120,     3,    76,   120,    79,    77,   120,   120,
  120,   120,     3,    77,   120,    78,   120,   120,   120,   120,
  120,     3,    78,   120,   120,   120,   120,   120,   120,   120,
    3,    79,   120,   120,    78,   120,   120,   120,   120,     3,
   80,   120,    81,   120,    77,   120,   120,   120,     3,    81,
  120,   120,   120,    78,   120,   120,   120,     3,    82,   120,
  120,    81,    79,   120,   120,   120,     3,    83,   120,    84,
  120,    80,   120,   120,   120,     3,    84,   120,   120,   120,
   81,   120,   120,   120,     3,    85,   120,   120,    84,    82,
  120,   120,   120,     3,    86,   120,    93,    91,    87,     7,
   75,   120,     0,    87,   120,    90,    88,   120,     8,    76,
  120,     0,    88,   120,    89,   120,   120,     9,    77,   120,
    0,    89,   120,   120,   120,   120,    10,    78,   120,     0,
   90,   120,   120,    89,   120,    11,    79,   120,     0,    91,
  120,    92,   120,    88,    12,    80,   120,     0,    92,   120,
  120,   120,    89,    13,    81,   120,     0,    93,   120,   120,
   92,    90,    14,    82,   120,     0,    94,   120,    95,   120,
   91,    15,    83,   120,     0,    95,   120,   120,   120,    92,
   16,    84,   120,     0,    96,   120,   120,    95,    93,    17,
   85,   120,     0,    97,   120,   108,   106,    98,   120,   120,
    2,     3,    98,   120,   105,   103,    99,   120,   120,    75,
    3,    99,   120,   102,   100,   120,   120,   120,    76,     3,
  100,   120,   101,   120,   120,   120,   120,    77,     3,   101,
  120,   120,   120,   120,   120,   120,    78,     3,   102,   120,
  120,   101,   120,   120,   120,    79,     3,   103,   120,   104,
  120,   100,   120,   120,    80,     3,   104,   120,   120,   120,
  101,   120,   120,    81,     3,   105,   120,   120,   104,   102,
  120,   120,    82,     3,   106,   120,   107,   120,   103,   120,
  120,    83,     3,   107,   120,   120,   120,   104,   120,   120,
   84,     3,   108,   120,   120,   107,   105,   120,   120,    85,
    3,   109,   120,   116,   114,   110,    18,    98,    86,     0,
  110,   120,   113,   111,   120,    19,    99,    87,     0,   111,
  120,   112,   120,   120,    20,   100,    88,     0,   112,   120,
  120,   120,   120,    21,   101,    89,     0,   113,   120,   120,
  112,   120,    22,   102,    90,     0,   114,   120,   115,   120,
  111,    23,   103,    91,     0,   115,   120,   120,   120,   112,
   24,   104,    92,     0,   116,   120,   120,   115,   113,    25,
  105,    93,     0,   117,   120,   118,   120,   114,    26,   106,
   94,     0,   118,   120,   120,   120,   115,    27,   107,    95,
    0,   119,   120,   120,   118,   116,    28,   108,    96,     0,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char vr55_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
    0,     1,     1,     2,     1,     1,     0,     1,     1,     0,
    1,     1,     2,     0,     0,     0,     1,     1,     0,     1,
    1,     2,     0,     0,     1,     1,     1,     0,     1,     1,
    2,     0,     0,     1,     1,     1,     0,     1,     1,     2,
    0,     0,     1,     1,     1,     0,     1,     1,     2,     0,
    0,     0,     1,     1,     0,     1,     1,     1,     0,     0,
    0,     1,     1,     0,     1,     1,     0,     0,     0,     0,
    1,     1,     0,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     0,     1,     1,
    0,     0,     1,     0,     0,     0,     0,     1,     1,     0,
    1,     0,     1,     0,     0,     0,     1,     1,     0,     0,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     0,     0,     2,     0,
    0,     0,     1,     1,     0,     0,     1,     2,     0,     0,
    0,     1,     1,     0,     1,     1,     1,     0,     0,     1,
    1,     1,     0,     1,     1,     0,     0,     0,     1,     1,
    1,     0,     1,     0,     0,     0,     0,     1,     1,     1,
    0,     0,     0,     0,     0,     0,     1,     1,     1,     0,
    0,     1,     0,     0,     0,     1,     1,     1,     0,     1,
    0,     1,     0,     0,     1,     1,     1,     0,     0,     0,
    1,     0,     0,     1,     1,     1,     0,     0,     1,     1,
    0,     0,     1,     1,     1,     0,     1,     0,     2,     0,
    0,     1,     1,     1,     0,     0,     0,     2,     0,     0,
    1,     1,     1,     0,     0,     1,     2,     0,     0,     1,
    1,     1,     0,     1,     1,     2,     0,     0,     0,     1,
    1,     0,     1,     1,     1,     0,     0,     0,     1,     1,
    0,     1,     1,     0,     0,     0,     0,     1,     1,     0,
    1,     0,     0,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     1,
    0,     0,     0,     0,     1,     1,     0,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     1,     1,     0,     0,
    0,     1,     1,     0,     1,     0,     2,     0,     0,     0,
    1,     1,     0,     0,     0,     2,     0,     0,     0,     1,
    1,     0,     0,     1,     2,     0,     0,     0,     1,     1,
    0,     1,     1,     1,     0,     0,     1,     1,     1,     0,
    1,     1,     0,     0,     0,     1,     1,     1,     0,     1,
    0,     0,     0,     0,     1,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     1,     0,     0,     1,     0,
    0,     0,     1,     1,     1,     0,     1,     0,     1,     0,
    0,     1,     1,     1,     0,     0,     0,     1,     0,     0,
    1,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     1,     0,     1,     0,     2,     0,     0,     1,     1,
    1,     0,     0,     0,     2,     0,     0,     1,     1,     1,
    0,     0,     1,     2,     0,     0,     1,     1,     1,     0,
    1,     1,     2,     0,     0,     0,     1,     1,     0,     1,
    1,     1,     0,     0,     0,     1,     1,     0,     1,     1,
    0,     0,     0,     0,     1,     1,     0,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     0,     1,     1,     0,     0,     1,     0,     0,     0,
    0,     1,     1,     0,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     1,     0,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     0,     1,     1,
    0,     1,     0,     2,     0,     0,     0,     1,     1,     0,
    0,     0,     2,     0,     0,     0,     1,     1,     0,     0,
    1,     2,     0,     0,     0,     1,     1,     0,     1,     1,
    1,     0,     0,     1,     1,     1,     0,     1,     1,     0,
    0,     0,     1,     1,     1,     0,     1,     0,     0,     0,
    0,     1,     1,     1,     0,     0,     0,     0,     0,     0,
    1,     1,     1,     0,     0,     1,     0,     0,     0,     1,
    1,     1,     0,     1,     0,     1,     0,     0,     1,     1,
    1,     0,     0,     0,     1,     0,     0,     1,     1,     1,
    0,     0,     1,     1,     0,     0,     1,     1,     1,     0,
    1,     0,     2,     0,     0,     1,     1,     1,     0,     0,
    0,     2,     0,     0,     1,     1,     1,     0,     0,     1,
    2,     0,     0,     1,     1,     1,     0,     1,     1,     1,
    0,     0,     0,     1,     1,     0,     1,     1,     0,     0,
    0,     0,     1,     1,     0,     1,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    1,     1,     0,     0,     1,     0,     0,     0,     0,     1,
    1,     0,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     1,     0,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     0,     1,     1,     0,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     0,     0,
    2,     0,     0,     0,     1,     1,     0,     0,     1,     2,
    0,     0,     0,     1,     1,     0,     1,     1,     1,     1,
    1,     0,     1,     1,     0,     1,     1,     0,     1,     1,
    0,     1,     1,     0,     1,     0,     0,     1,     1,     0,
    1,     1,     0,     0,     0,     0,     1,     1,     0,     1,
    1,     0,     0,     1,     0,     1,     1,     0,     1,     1,
    0,     1,     0,     1,     1,     1,     0,     1,     1,     0,
    0,     0,     1,     1,     1,     0,     1,     1,     0,     0,
    1,     1,     1,     1,     0,     1,     1,     0,     1,     0,
    2,     1,     1,     0,     1,     1,     0,     0,     0,     2,
    1,     1,     0,     1,     1,     0,     0,     1,     2,     1,
    1,     0,     1,     1,     0,     1,     1,     2,     0,     0,
    1,     1,     1,     0,     1,     1,     1,     0,     0,     1,
    1,     1,     0,     1,     1,     0,     0,     0,     1,     1,
    1,     0,     1,     0,     0,     0,     0,     1,     1,     1,
    0,     0,     0,     0,     0,     0,     1,     1,     1,     0,
    0,     1,     0,     0,     0,     1,     1,     1,     0,     1,
    0,     1,     0,     0,     1,     1,     1,     0,     0,     0,
    1,     0,     0,     1,     1,     1,     0,     0,     1,     1,
    0,     0,     1,     1,     1,     0,     1,     0,     2,     0,
    0,     1,     1,     1,     0,     0,     0,     2,     0,     0,
    1,     1,     1,     0,     0,     1,     2,     0,     0,     1,
    1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
    1,     0,     1,     1,     0,     1,     1,     1,     1,     1,
    0,     1,     0,     0,     1,     1,     1,     1,     1,     0,
    0,     0,     0,     1,     1,     1,     1,     1,     0,     0,
    1,     0,     1,     1,     1,     1,     1,     0,     1,     0,
    1,     1,     1,     1,     1,     1,     0,     0,     0,     1,
    1,     1,     1,     1,     1,     0,     0,     1,     1,     1,
    1,     1,     1,     1,     0,     1,     0,     2,     1,     1,
    1,     1,     1,     0,     0,     0,     2,     1,     1,     1,
    1,     1,     0,     0,     1,     2,     1,     1,     1,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char vr55_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,    16,     0,     0,    16,     4,
    0,     4,    65,     0,    48,     0,    51,     0,     2,     0,
    2,    32,     0,    16,     0,    17,     0,     1,     0,     1,
   17,     0,    16,     0,    17,    16,     1,     0,    17,    17,
    0,    16,    17,    17,    16,     1,    17,    17,    17,     0,
   17,     1,    17,    16,     1,     1,     1,    17,     0,    17,
   16,    17,    16,     1,    16,     1,    17,     0,    16,    16,
   17,    16,     1,    17,     1,    17,     0,    17,     0,    17,
   16,     1,     0,     1,    16,     0,    16,     1,    17,     0,
    1,     1,    17,    16,     0,    17,    17,    17,     0,     1,
   16,    17,    16,     0,    16,    16,    17,     0,     1,    17,
    1,    16,     0,    17,     0,    17,     0,     1,     1,     1,
   16,     0,    17,    16,    17,     0,     1,    16,     1,    16,
    0,    32,     0,    34,    16,     2,     0,     2,    33,     0,
   32,     1,    34,    16,     2,     1,    18,    33,     0,    33,
   17,    34,    16,     2,    16,    18,    33,     0,    32,    16,
   34,    16,     2,    17,     2,    33,     0,    33,     0,    34,
   16,     2,     1,     2,    33,     0,    33,    16,    34,    16,
    2,    16,     2,    33,     0,    32,     0,    34,     0,     2,
    0,    18,    32,     0,    32,    17,    34,     0,     2,    17,
   18,    32,     0,    33,     1,    34,     0,     2,     1,     2,
   32,     0,    33,    16,    34,     0,     2,    16,     2,    32,
    0,    32,    16,    34,     0,     2,    17,     2,    32,     0,
   33,     0,    34,     0,     3,     0,     3,    49,     0,    48,
    0,    51,    16,     3,     0,    19,    49,     0,    48,    17,
   51,    16,     3,    17,    19,    49,     0,    49,     1,    51,
   16,     3,     1,     3,    49,     0,    49,    16,    51,    16,
    3,    16,     3,    49,     0,    48,    16,    51,    16,     3,
   17,     3,    49,     0,    49,     0,    51,    16,     3,     0,
    3,    48,     0,    48,     1,    51,     0,     3,     1,    19,
   48,     0,    49,    17,    51,     0,     3,    16,    19,    48,
    0,    48,    16,    51,     0,     3,    17,     3,    48,     0,
   49,     0,    51,     0,     3,     1,     3,    48,     0,    49,
   16,    51,     0,     3,    16,     3,    48,     0,    64,     0,
   68,    16,     4,     0,    20,    65,     0,    64,    17,    68,
   16,     4,    17,    20,    65,     0,    65,     1,    68,    16,
    4,     1,     4,    65,     0,    65,    16,    68,    16,     4,
   16,     4,    65,     0,    64,    16,    68,    16,     4,    17,
    4,    65,     0,    65,     0,    68,    16,     1,     0,     0,
    1,     0,    16,     1,     0,    16,     1,     1,    16,     1,
    0,    17,    17,     0,    16,     1,    16,    16,     1,     0,
   16,    16,     0,    16,     1,    17,     0,     1,     0,    17,
    0,     0,    16,     1,     1,     0,     1,     0,    17,    16,
    0,    16,     1,    16,     0,     1,     0,    64,     0,    68,
    0,     4,     0,     4,    64,     0,    64,     1,    68,     0,
    4,     1,    20,    64,     0,    65,    17,    68,     0,     4,
   16,    20,    64,     0,    64,    16,    68,     0,     4,    17,
    4,    64,     0,    65,     0,    68,     0,     4,     1,     4,
   64,     0,    65,    16,    68,     0,     4,    16,     4,    64,
    0,    16,     0,     0,     0,     1,     0,    16,     0,     0,
   16,    17,     0,     0,     1,    17,    16,     0,     0,    17,
    1,     0,     0,     1,     1,     0,     0,     0,    17,    16,
    0,     0,     1,    16,     0,     0,     0,    16,    16,     0,
    0,     1,    17,     0,     0,     0,    17,     0,     0,     0,
};

/* Vector for locked state flags.  */
static const unsigned char vr55_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char vr55_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm7000_other_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     2,     2,     3,     3,     3,     3,     3,     3,
    3,     1,     4,     3,     3,     3,     3,     3,     3,     3,
    3,     3,     5,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     6};

/* Vector for state transitions.  */
static const unsigned char rm7000_other_transitions[] ATTRIBUTE_UNUSED = {
    0,     3,     3,     2,     1,     1,     0,     1,     4,     4,
    4,     4,     4,     0,     2,     1,     1,     4,     4,     4,
    0,     3,     1,     4,     1,     1,     4,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm7000_other_state_alts[] ATTRIBUTE_UNUSED = {
    1,     4,     2,     2,     2,     1,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     1,     1,     0,     0,     0,
    1,     1,     1,     0,     1,     1,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm7000_other_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,   248,   113,    32};

/* Vector for locked state flags.  */
static const unsigned char rm7000_other_dead_lock[] = {
    0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm7000_other_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm7000_fdiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     6,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     7};

/* Vector for state transitions.  */
static const unsigned char rm7000_fdiv_transitions[] ATTRIBUTE_UNUSED = {
    0,     5,    20,   206,   145,     2,     1,     0,     1,   111,
   81,   205,   146,   207,   207,     2,     2,   112,    82,   115,
    3,   207,   207,     0,     3,   207,   207,   207,   207,   207,
  207,     4,     4,   207,   207,   207,   207,   114,   113,     5,
    5,   207,   207,   207,   207,   112,   111,     6,     6,   207,
  207,   207,   207,   110,   109,     7,     7,   207,   207,   207,
  207,   108,   107,     8,     8,   207,   207,   207,   207,   106,
  105,     9,     9,   207,   207,   207,   207,   104,   103,    10,
   10,   207,   207,   207,   207,   102,   101,    11,    11,   207,
  207,   207,   207,   100,    99,    12,    12,   207,   207,   207,
  207,    98,    97,    13,    13,   207,   207,   207,   207,    96,
   95,    14,    14,   207,   207,   207,   207,    94,    93,    15,
   15,   207,   207,   207,   207,    92,    91,    16,    16,   207,
  207,   207,   207,    90,    89,    17,    17,   207,   207,   207,
  207,    88,    87,    18,    18,   207,   207,   207,   207,    86,
   85,    19,    19,   207,   207,   207,   207,    84,    83,    20,
   20,   207,   207,   207,   207,    82,    81,    21,    21,   207,
  207,   207,   207,    80,    79,    22,    22,   207,   207,   207,
  207,    78,    77,    23,    23,   207,   207,   207,   207,    76,
   75,    24,    24,   207,   207,   207,   207,    74,    73,    25,
   25,   207,   207,   207,   207,    72,    71,    26,    26,   207,
  207,   207,   207,    70,    69,    27,    27,   207,   207,   207,
  207,    68,    67,    28,    28,   207,   207,   207,   207,    66,
   65,    29,    29,   207,   207,   207,   207,    64,    63,    30,
   30,   207,   207,   207,   207,    62,    61,    31,    31,   207,
  207,   207,   207,    60,    59,    32,    32,   207,   207,   207,
  207,    58,    57,    33,    33,   207,   207,   207,   207,    56,
   55,    34,    34,   207,   207,   207,   207,    54,    53,    35,
   35,   207,   207,   207,   207,    52,    51,    36,    36,   207,
  207,   207,   207,    50,    49,    37,    37,   207,   207,   207,
  207,    48,    47,    38,    38,   207,   207,   207,   207,    46,
   45,    39,    39,   207,   207,   207,   207,    44,    43,    40,
   40,   207,   207,   207,   207,    42,    41,     0,    41,   207,
  207,   207,   207,   207,   207,     2,    42,   207,   207,   207,
  207,   207,   207,     0,    43,   207,   207,   207,   207,   207,
  207,    42,    44,   207,   207,   207,   207,   207,   207,    40,
   45,   207,   207,   207,   207,   207,   207,    44,    46,   207,
  207,   207,   207,   207,   207,    39,    47,   207,   207,   207,
  207,   207,   207,    46,    48,   207,   207,   207,   207,   207,
  207,    38,    49,   207,   207,   207,   207,   207,   207,    48,
   50,   207,   207,   207,   207,   207,   207,    37,    51,   207,
  207,   207,   207,   207,   207,    50,    52,   207,   207,   207,
  207,   207,   207,    36,    53,   207,   207,   207,   207,   207,
  207,    52,    54,   207,   207,   207,   207,   207,   207,    35,
   55,   207,   207,   207,   207,   207,   207,    54,    56,   207,
  207,   207,   207,   207,   207,    34,    57,   207,   207,   207,
  207,   207,   207,    56,    58,   207,   207,   207,   207,   207,
  207,    33,    59,   207,   207,   207,   207,   207,   207,    58,
   60,   207,   207,   207,   207,   207,   207,    32,    61,   207,
  207,   207,   207,   207,   207,    60,    62,   207,   207,   207,
  207,   207,   207,    31,    63,   207,   207,   207,   207,   207,
  207,    62,    64,   207,   207,   207,   207,   207,   207,    30,
   65,   207,   207,   207,   207,   207,   207,    64,    66,   207,
  207,   207,   207,   207,   207,    29,    67,   207,   207,   207,
  207,   207,   207,    66,    68,   207,   207,   207,   207,   207,
  207,    28,    69,   207,   207,   207,   207,   207,   207,    68,
   70,   207,   207,   207,   207,   207,   207,    27,    71,   207,
  207,   207,   207,   207,   207,    70,    72,   207,   207,   207,
  207,   207,   207,    26,    73,   207,   207,   207,   207,   207,
  207,    72,    74,   207,   207,   207,   207,   207,   207,    25,
   75,   207,   207,   207,   207,   207,   207,    74,    76,   207,
  207,   207,   207,   207,   207,    24,    77,   207,   207,   207,
  207,   207,   207,    76,    78,   207,   207,   207,   207,   207,
  207,    23,    79,   207,   207,   207,   207,   207,   207,    78,
   80,   207,   207,   207,   207,   207,   207,    22,    81,   207,
  207,   207,   207,   207,   207,    80,    82,   207,   207,   207,
  207,   207,   207,    21,    83,   207,   207,   207,   207,   207,
  207,    82,    84,   207,   207,   207,   207,   207,   207,    20,
   85,   207,   207,   207,   207,   207,   207,    84,    86,   207,
  207,   207,   207,   207,   207,    19,    87,   207,   207,   207,
  207,   207,   207,    86,    88,   207,   207,   207,   207,   207,
  207,    18,    89,   207,   207,   207,   207,   207,   207,    88,
   90,   207,   207,   207,   207,   207,   207,    17,    91,   207,
  207,   207,   207,   207,   207,    90,    92,   207,   207,   207,
  207,   207,   207,    16,    93,   207,   207,   207,   207,   207,
  207,    92,    94,   207,   207,   207,   207,   207,   207,    15,
   95,   207,   207,   207,   207,   207,   207,    94,    96,   207,
  207,   207,   207,   207,   207,    14,    97,   207,   207,   207,
  207,   207,   207,    96,    98,   207,   207,   207,   207,   207,
  207,    13,    99,   207,   207,   207,   207,   207,   207,    98,
  100,   207,   207,   207,   207,   207,   207,    12,   101,   207,
  207,   207,   207,   207,   207,   100,   102,   207,   207,   207,
  207,   207,   207,    11,   103,   207,   207,   207,   207,   207,
  207,   102,   104,   207,   207,   207,   207,   207,   207,    10,
  105,   207,   207,   207,   207,   207,   207,   104,   106,   207,
  207,   207,   207,   207,   207,     9,   107,   207,   207,   207,
  207,   207,   207,   106,   108,   207,   207,   207,   207,   207,
  207,     8,   109,   207,   207,   207,   207,   207,   207,   108,
  110,   207,   207,   207,   207,   207,   207,     7,   111,   207,
  207,   207,   207,   207,   207,   110,   112,   207,   207,   207,
  207,   207,   207,     6,   113,   207,   207,   207,   207,   207,
  207,   112,   114,   207,   207,   207,   207,   207,   207,     5,
  115,   207,   207,   207,   207,   207,   207,   116,   116,   207,
  207,   207,   207,   204,   203,   117,   117,   207,   207,   207,
  207,   202,   201,   118,   118,   207,   207,   207,   207,   200,
  199,   119,   119,   207,   207,   207,   207,   198,   197,   120,
  120,   207,   207,   207,   207,   196,   195,   121,   121,   207,
  207,   207,   207,   194,   193,   122,   122,   207,   207,   207,
  207,   192,   191,   123,   123,   207,   207,   207,   207,   190,
  189,   124,   124,   207,   207,   207,   207,   188,   187,   125,
  125,   207,   207,   207,   207,   186,   185,   126,   126,   207,
  207,   207,   207,   184,   183,   127,   127,   207,   207,   207,
  207,   182,   181,   128,   128,   207,   207,   207,   207,   180,
  179,   129,   129,   207,   207,   207,   207,   178,   177,   130,
  130,   207,   207,   207,   207,   176,   175,   131,   131,   207,
  207,   207,   207,   174,   173,   132,   132,   207,   207,   207,
  207,   172,   171,   133,   133,   207,   207,   207,   207,   170,
  169,   134,   134,   207,   207,   207,   207,   168,   167,   135,
  135,   207,   207,   207,   207,   166,   165,   136,   136,   207,
  207,   207,   207,   164,   163,   137,   137,   207,   207,   207,
  207,   162,   161,   138,   138,   207,   207,   207,   207,   160,
  159,   139,   139,   207,   207,   207,   207,   158,   157,   140,
  140,   207,   207,   207,   207,   156,   155,   141,   141,   207,
  207,   207,   207,   154,   153,   142,   142,   207,   207,   207,
  207,   152,   151,   143,   143,   207,   207,   207,   207,   150,
  149,   144,   144,   207,   207,   207,   207,   148,   147,   145,
  145,   207,   207,   207,   207,     3,   146,     4,   146,   207,
  207,   207,   207,   207,   207,   114,   147,   207,   207,   207,
  207,   207,   207,     3,   148,   207,   207,   207,   207,   207,
  207,   145,   149,   207,   207,   207,   207,   207,   207,   148,
  150,   207,   207,   207,   207,   207,   207,   144,   151,   207,
  207,   207,   207,   207,   207,   150,   152,   207,   207,   207,
  207,   207,   207,   143,   153,   207,   207,   207,   207,   207,
  207,   152,   154,   207,   207,   207,   207,   207,   207,   142,
  155,   207,   207,   207,   207,   207,   207,   154,   156,   207,
  207,   207,   207,   207,   207,   141,   157,   207,   207,   207,
  207,   207,   207,   156,   158,   207,   207,   207,   207,   207,
  207,   140,   159,   207,   207,   207,   207,   207,   207,   158,
  160,   207,   207,   207,   207,   207,   207,   139,   161,   207,
  207,   207,   207,   207,   207,   160,   162,   207,   207,   207,
  207,   207,   207,   138,   163,   207,   207,   207,   207,   207,
  207,   162,   164,   207,   207,   207,   207,   207,   207,   137,
  165,   207,   207,   207,   207,   207,   207,   164,   166,   207,
  207,   207,   207,   207,   207,   136,   167,   207,   207,   207,
  207,   207,   207,   166,   168,   207,   207,   207,   207,   207,
  207,   135,   169,   207,   207,   207,   207,   207,   207,   168,
  170,   207,   207,   207,   207,   207,   207,   134,   171,   207,
  207,   207,   207,   207,   207,   170,   172,   207,   207,   207,
  207,   207,   207,   133,   173,   207,   207,   207,   207,   207,
  207,   172,   174,   207,   207,   207,   207,   207,   207,   132,
  175,   207,   207,   207,   207,   207,   207,   174,   176,   207,
  207,   207,   207,   207,   207,   131,   177,   207,   207,   207,
  207,   207,   207,   176,   178,   207,   207,   207,   207,   207,
  207,   130,   179,   207,   207,   207,   207,   207,   207,   178,
  180,   207,   207,   207,   207,   207,   207,   129,   181,   207,
  207,   207,   207,   207,   207,   180,   182,   207,   207,   207,
  207,   207,   207,   128,   183,   207,   207,   207,   207,   207,
  207,   182,   184,   207,   207,   207,   207,   207,   207,   127,
  185,   207,   207,   207,   207,   207,   207,   184,   186,   207,
  207,   207,   207,   207,   207,   126,   187,   207,   207,   207,
  207,   207,   207,   186,   188,   207,   207,   207,   207,   207,
  207,   125,   189,   207,   207,   207,   207,   207,   207,   188,
  190,   207,   207,   207,   207,   207,   207,   124,   191,   207,
  207,   207,   207,   207,   207,   190,   192,   207,   207,   207,
  207,   207,   207,   123,   193,   207,   207,   207,   207,   207,
  207,   192,   194,   207,   207,   207,   207,   207,   207,   122,
  195,   207,   207,   207,   207,   207,   207,   194,   196,   207,
  207,   207,   207,   207,   207,   121,   197,   207,   207,   207,
  207,   207,   207,   196,   198,   207,   207,   207,   207,   207,
  207,   120,   199,   207,   207,   207,   207,   207,   207,   198,
  200,   207,   207,   207,   207,   207,   207,   119,   201,   207,
  207,   207,   207,   207,   207,   200,   202,   207,   207,   207,
  207,   207,   207,   118,   203,   207,   207,   207,   207,   207,
  207,   202,   204,   207,   207,   207,   207,   207,   207,   117,
  205,   207,   207,   207,   207,   207,   207,   204,   206,   207,
  207,   207,   207,   115,   205,   116};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm7000_fdiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     2,     2,     1,     1,     2,
    2,     2,     2,     0,     0,     1,     1,     2,     2,     2,
    2,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     2,     2,     1,     1,     0,     0,     0,
    0,     2,     2,     1,     1,     0,     0,     0,     0,     2,
    2,     1,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     0,     0,     0,     0,     2,     2,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     2,     2,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm7000_fdiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     2,     2,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,    38,    38,    38,    38,     1,
    1,     0,     0,    37,    37,    37,    37,     0,     0,     0,
    0,    36,    36,    36,    36,     0,     0,     0,     0,    35,
   35,    35,    35,     0,     0,     0,     0,    34,    34,    34,
   34,     0,     0,     0,     0,    33,    33,    33,    33,     0,
    0,     0,     0,    32,    32,    32,    32,     0,     0,     0,
    0,    31,    31,    31,    31,     0,     0,     0,     0,    30,
   30,    30,    30,     0,     0,     0,     0,    29,    29,    29,
   29,     0,     0,     0,     0,    28,    28,    28,    28,     0,
    0,     0,     0,    27,    27,    27,    27,     0,     0,     0,
    0,    26,    26,    26,    26,     0,     0,     0,     0,    25,
   25,    25,    25,     0,     0,     0,     0,    24,    24,    24,
   24,     0,     0,     0,     0,    23,    23,    23,    23,     0,
    0,     0,     0,    22,    22,    22,    22,     0,     0,     0,
    0,    21,    21,    21,    21,     0,     0,     0,     0,    20,
   20,    20,    20,     0,     0,     0,     0,    19,    19,    19,
   19,     0,     0,     0,     0,    18,    18,    18,    18,     0,
    0,     0,     0,    17,    17,    17,    17,     0,     0,     0,
    0,    16,    16,    16,    16,     0,     0,     0,     0,    15,
   15,    15,    15,     0,     0,     0,     0,    14,    14,    14,
   14,     0,     0,     0,     0,    13,    13,    13,    13,     0,
    0,     0,     0,    12,    12,    12,    12,     0,     0,     0,
    0,    11,    11,    11,    11,     0,     0,     0,     0,    10,
   10,    10,    10,     0,     0,     0,     0,     9,     9,     9,
    9,     0,     0,     0,     0,     8,     8,     8,     8,     0,
    0,     0,     0,     7,     7,     7,     7,     0,     0,     0,
    0,     6,     6,     6,     6,     0,     0,     0,     0,     5,
    5,     5,     5,     0,     0,     0,     0,     4,     4,     4,
    4,     0,     0,     0,     0,     3,     3,     3,     3,     0,
    0,     0,     0,     2,     2,     2,     2,     0,     0,     0,
    0,     1,     1,     1,     1,     0,     0,     0,     0,     1,
    1,     1,     1,     2,     2,     0,     0,     1,     1,     1,
    1,     1,     1,     0,     0,     2,     2,     2,     2,     2,
    2,     0,     0,     2,     2,     2,     2,     1,     1,     0,
    0,     3,     3,     3,     3,     2,     2,     0,     0,     3,
    3,     3,     3,     1,     1,     0,     0,     4,     4,     4,
    4,     2,     2,     0,     0,     4,     4,     4,     4,     1,
    1,     0,     0,     5,     5,     5,     5,     2,     2,     0,
    0,     5,     5,     5,     5,     1,     1,     0,     0,     6,
    6,     6,     6,     2,     2,     0,     0,     6,     6,     6,
    6,     1,     1,     0,     0,     7,     7,     7,     7,     2,
    2,     0,     0,     7,     7,     7,     7,     1,     1,     0,
    0,     8,     8,     8,     8,     2,     2,     0,     0,     8,
    8,     8,     8,     1,     1,     0,     0,     9,     9,     9,
    9,     2,     2,     0,     0,     9,     9,     9,     9,     1,
    1,     0,     0,    10,    10,    10,    10,     2,     2,     0,
    0,    10,    10,    10,    10,     1,     1,     0,     0,    11,
   11,    11,    11,     2,     2,     0,     0,    11,    11,    11,
   11,     1,     1,     0,     0,    12,    12,    12,    12,     2,
    2,     0,     0,    12,    12,    12,    12,     1,     1,     0,
    0,    13,    13,    13,    13,     2,     2,     0,     0,    13,
   13,    13,    13,     1,     1,     0,     0,    14,    14,    14,
   14,     2,     2,     0,     0,    14,    14,    14,    14,     1,
    1,     0,     0,    15,    15,    15,    15,     2,     2,     0,
    0,    15,    15,    15,    15,     1,     1,     0,     0,    16,
   16,    16,    16,     2,     2,     0,     0,    16,    16,    16,
   16,     1,     1,     0,     0,    17,    17,    17,    17,     2,
    2,     0,     0,    17,    17,    17,    17,     1,     1,     0,
    0,    18,    18,    18,    18,     2,     2,     0,     0,    18,
   18,    18,    18,     1,     1,     0,     0,    19,    19,    19,
   19,     2,     2,     0,     0,    19,    19,    19,    19,     1,
    1,     0,     0,    20,    20,    20,    20,     2,     2,     0,
    0,    20,    20,    20,    20,     1,     1,     0,     0,    21,
   21,    21,    21,     2,     2,     0,     0,    21,    21,    21,
   21,     1,     1,     0,     0,    22,    22,    22,    22,     2,
    2,     0,     0,    22,    22,    22,    22,     1,     1,     0,
    0,    23,    23,    23,    23,     2,     2,     0,     0,    23,
   23,    23,    23,     1,     1,     0,     0,    24,    24,    24,
   24,     2,     2,     0,     0,    24,    24,    24,    24,     1,
    1,     0,     0,    25,    25,    25,    25,     2,     2,     0,
    0,    25,    25,    25,    25,     1,     1,     0,     0,    26,
   26,    26,    26,     2,     2,     0,     0,    26,    26,    26,
   26,     1,     1,     0,     0,    27,    27,    27,    27,     2,
    2,     0,     0,    27,    27,    27,    27,     1,     1,     0,
    0,    28,    28,    28,    28,     2,     2,     0,     0,    28,
   28,    28,    28,     1,     1,     0,     0,    29,    29,    29,
   29,     2,     2,     0,     0,    29,    29,    29,    29,     1,
    1,     0,     0,    30,    30,    30,    30,     2,     2,     0,
    0,    30,    30,    30,    30,     1,     1,     0,     0,    31,
   31,    31,    31,     2,     2,     0,     0,    31,    31,    31,
   31,     1,     1,     0,     0,    32,    32,    32,    32,     2,
    2,     0,     0,    32,    32,    32,    32,     1,     1,     0,
    0,    33,    33,    33,    33,     2,     2,     0,     0,    33,
   33,    33,    33,     1,     1,     0,     0,    34,    34,    34,
   34,     2,     2,     0,     0,    34,    34,    34,    34,     1,
    1,     0,     0,    35,    35,    35,    35,     2,     2,     0,
    0,    35,    35,    35,    35,     1,     1,     0,     0,    36,
   36,    36,    36,     2,     2,     0,     0,    36,    36,    36,
   36,     1,     1,     0,     0,    37,    37,    37,    37,     2,
    2,     0,     0,    37,    37,    37,    37,     1,     1,     0,
    0,    68,    68,    68,    68,     1,     1,     0,     0,    67,
   67,    67,    67,     0,     0,     0,     0,    66,    66,    66,
   66,     0,     0,     0,     0,    65,    65,    65,    65,     0,
    0,     0,     0,    64,    64,    64,    64,     0,     0,     0,
    0,    63,    63,    63,    63,     0,     0,     0,     0,    62,
   62,    62,    62,     0,     0,     0,     0,    61,    61,    61,
   61,     0,     0,     0,     0,    60,    60,    60,    60,     0,
    0,     0,     0,    59,    59,    59,    59,     0,     0,     0,
    0,    58,    58,    58,    58,     0,     0,     0,     0,    57,
   57,    57,    57,     0,     0,     0,     0,    56,    56,    56,
   56,     0,     0,     0,     0,    55,    55,    55,    55,     0,
    0,     0,     0,    54,    54,    54,    54,     0,     0,     0,
    0,    53,    53,    53,    53,     0,     0,     0,     0,    52,
   52,    52,    52,     0,     0,     0,     0,    51,    51,    51,
   51,     0,     0,     0,     0,    50,    50,    50,    50,     0,
    0,     0,     0,    49,    49,    49,    49,     0,     0,     0,
    0,    48,    48,    48,    48,     0,     0,     0,     0,    47,
   47,    47,    47,     0,     0,     0,     0,    46,    46,    46,
   46,     0,     0,     0,     0,    45,    45,    45,    45,     0,
    0,     0,     0,    44,    44,    44,    44,     0,     0,     0,
    0,    43,    43,    43,    43,     0,     0,     0,     0,    42,
   42,    42,    42,     0,     0,     0,     0,    41,    41,    41,
   41,     0,     0,     0,     0,    40,    40,    40,    40,     0,
    0,     0,     0,    39,    39,    39,    39,     0,     0,     0,
    0,    38,    38,    38,    38,     0,     0,     0,     0,    38,
   38,    38,    38,     2,     2,     0,     0,    39,    39,    39,
   39,     2,     2,     0,     0,    39,    39,    39,    39,     1,
    1,     0,     0,    40,    40,    40,    40,     2,     2,     0,
    0,    40,    40,    40,    40,     1,     1,     0,     0,    41,
   41,    41,    41,     2,     2,     0,     0,    41,    41,    41,
   41,     1,     1,     0,     0,    42,    42,    42,    42,     2,
    2,     0,     0,    42,    42,    42,    42,     1,     1,     0,
    0,    43,    43,    43,    43,     2,     2,     0,     0,    43,
   43,    43,    43,     1,     1,     0,     0,    44,    44,    44,
   44,     2,     2,     0,     0,    44,    44,    44,    44,     1,
    1,     0,     0,    45,    45,    45,    45,     2,     2,     0,
    0,    45,    45,    45,    45,     1,     1,     0,     0,    46,
   46,    46,    46,     2,     2,     0,     0,    46,    46,    46,
   46,     1,     1,     0,     0,    47,    47,    47,    47,     2,
    2,     0,     0,    47,    47,    47,    47,     1,     1,     0,
    0,    48,    48,    48,    48,     2,     2,     0,     0,    48,
   48,    48,    48,     1,     1,     0,     0,    49,    49,    49,
   49,     2,     2,     0,     0,    49,    49,    49,    49,     1,
    1,     0,     0,    50,    50,    50,    50,     2,     2,     0,
    0,    50,    50,    50,    50,     1,     1,     0,     0,    51,
   51,    51,    51,     2,     2,     0,     0,    51,    51,    51,
   51,     1,     1,     0,     0,    52,    52,    52,    52,     2,
    2,     0,     0,    52,    52,    52,    52,     1,     1,     0,
    0,    53,    53,    53,    53,     2,     2,     0,     0,    53,
   53,    53,    53,     1,     1,     0,     0,    54,    54,    54,
   54,     2,     2,     0,     0,    54,    54,    54,    54,     1,
    1,     0,     0,    55,    55,    55,    55,     2,     2,     0,
    0,    55,    55,    55,    55,     1,     1,     0,     0,    56,
   56,    56,    56,     2,     2,     0,     0,    56,    56,    56,
   56,     1,     1,     0,     0,    57,    57,    57,    57,     2,
    2,     0,     0,    57,    57,    57,    57,     1,     1,     0,
    0,    58,    58,    58,    58,     2,     2,     0,     0,    58,
   58,    58,    58,     1,     1,     0,     0,    59,    59,    59,
   59,     2,     2,     0,     0,    59,    59,    59,    59,     1,
    1,     0,     0,    60,    60,    60,    60,     2,     2,     0,
    0,    60,    60,    60,    60,     1,     1,     0,     0,    61,
   61,    61,    61,     2,     2,     0,     0,    61,    61,    61,
   61,     1,     1,     0,     0,    62,    62,    62,    62,     2,
    2,     0,     0,    62,    62,    62,    62,     1,     1,     0,
    0,    63,    63,    63,    63,     2,     2,     0,     0,    63,
   63,    63,    63,     1,     1,     0,     0,    64,    64,    64,
   64,     2,     2,     0,     0,    64,    64,    64,    64,     1,
    1,     0,     0,    65,    65,    65,    65,     2,     2,     0,
    0,    65,    65,    65,    65,     1,     1,     0,     0,    66,
   66,    66,    66,     2,     2,     0,     0,    66,    66,    66,
   66,     1,     1,     0,     0,    67,    67,    67,    67,     2,
    2,     0,     0,    67,    67,    67,    67,     1,     1,     0,
    0,    68,    68,    68,    68,     2,     2,     0,     0,    68,
   68,    68,    68,     0,     0,     0};

/* Vector for locked state flags.  */
static const unsigned char rm7000_fdiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm7000_fdiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm7000_idiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     1,     2,     3,     0,     4,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     5};

/* Comb vector for state transitions.  */
static const unsigned char rm7000_idiv_transitions[] ATTRIBUTE_UNUSED = {
    0,    41,     9,     6,     1,     0,     1,     2,     3,     4,
    5,     2,     3,     4,     5,     6,     6,     7,     8,     9,
   10,     7,     8,     0,    10,    11,    11,    12,    13,    14,
   15,    12,    13,    14,    15,    16,    16,    17,    18,    19,
   20,    17,    18,    19,    20,    21,    21,    22,    23,    24,
   25,    22,    23,    24,    25,    26,    26,    27,    28,    29,
   30,    27,    28,    29,    30,    31,    31,    32,    33,    34,
   35,    32,    33,    34,    35,    36,    36,    37,    38,    39,
   40,    37,    38,    39,    40,    41,    41,    42,    43,    44,
   45,    42,    43,    44,    45,    46,    46,    47,    48,    49,
   50,    47,    48,    49,    50,    51,    51,    52,    53,    54,
   55,    52,    53,    54,    55,    56,    56,    57,    58,    59,
   60,    57,    58,    59,    60,    61,    61,    62,    63,    64,
   65,    62,    63,    64,    65,    66,    66,    67,    68,    69,
   69,    67,    68,     1};

/* Check vector for state transitions.  */
static const unsigned char rm7000_idiv_check[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   69,    66,    67,    68};

/* Base vector for state transitions.  */
static const unsigned char rm7000_idiv_base[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char rm7000_idiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     1,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char rm7000_idiv_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   69,    66,    67,    68};

/* Base vector for state insn alternatives.  */
static const unsigned char rm7000_idiv_base_state_alts[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm7000_idiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     8,     8,     8,
    8,     0,     0,     7,     7,     7,     7,     0,     0,     6,
    6,     6,     6,     0,     0,     5,     5,     5,     5,     0,
    0,     4,     4,     4,     4,     0,     0,     3,     3,     3,
    3,     0,     0,     2,     2,     2,     2,     0,     0,     1,
    1,     1,     1,     0,     0,    68,    68,    68,    68,     0,
    0,    67,    67,    67,    67,     0,     0,    66,    66,    66,
   66,     0,     0,    65,    65,    65,    65,     0,     0,    64,
   64,    64,    64,     0,     0,    63,    63,    63,    63,     0,
    0,    62,    62,    62,    62,     0,     0,    61,    61,    61,
   61,     0,     0,    60,    60,    60,    60,     0,     0,    59,
   59,    59,    59,     0,     0,    58,    58,    58,    58,     0,
    0,    57,    57,    57,    57,     0,     0,    56,    56,    56,
   56,     0,     0,    55,    55,    55,    55,     0,     0,    54,
   54,    54,    54,     0,     0,    53,    53,    53,    53,     0,
    0,    52,    52,    52,    52,     0,     0,    51,    51,    51,
   51,     0,     0,    50,    50,    50,    50,     0,     0,    49,
   49,    49,    49,     0,     0,    48,    48,    48,    48,     0,
    0,    47,    47,    47,    47,     0,     0,    46,    46,    46,
   46,     0,     0,    45,    45,    45,    45,     0,     0,    44,
   44,    44,    44,     0,     0,    43,    43,    43,    43,     0,
    0,    42,    42,    42,    42,     0,     0,    41,    41,    41,
   41,     0,     0,    40,    40,    40,    40,     0,     0,    39,
   39,    39,    39,     0,     0,    38,    38,    38,    38,     0,
    0,    37,    37,    37,    37,     0,     0,    36,    36,    36,
   36,     0,     0,    35,    35,    35,    35,     0,     0,    34,
   34,    34,    34,     0,     0,    33,    33,    33,    33,     0,
    0,    32,    32,    32,    32,     0,     0,    31,    31,    31,
   31,     0,     0,    30,    30,    30,    30,     0,     0,    29,
   29,    29,    29,     0,     0,    28,    28,    28,    28,     0,
    0,    27,    27,    27,    27,     0,     0,    26,    26,    26,
   26,     0,     0,    25,    25,    25,    25,     0,     0,    24,
   24,    24,    24,     0,     0,    23,    23,    23,    23,     0,
    0,    22,    22,    22,    22,     0,     0,    21,    21,    21,
   21,     0,     0,    20,    20,    20,    20,     0,     0,    19,
   19,    19,    19,     0,     0,    18,    18,    18,    18,     0,
    0,    17,    17,    17,    17,     0,     0,    16,    16,    16,
   16,     0,     0,    15,    15,    15,    15,     0,     0,    14,
   14,    14,    14,     0,     0,    13,    13,    13,    13,     0,
    0,    12,    12,    12,    12,     0,     0,    11,    11,    11,
   11,     0,     0,    10,    10,    10,    10,     0,     0,     9,
    9,     9,     9,     0};

/* Vector for locked state flags.  */
static const unsigned char rm7000_idiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm7000_idiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm9k_main_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     1,     2,     2,     3,     3,     3,
    3,     3,     3,     1,     3,     1,     3,     3,     4,     3,
    3,     2,     5,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     6};

/* Vector for state transitions.  */
static const unsigned char rm9k_main_transitions[] ATTRIBUTE_UNUSED = {
    0,    23,    19,     4,     2,     1,     0,     1,    24,    24,
   24,    24,    24,     0,     2,    18,    14,    24,    24,    24,
    3,     3,    13,     9,    24,    24,    24,     4,     4,     5,
    7,    24,    24,    24,     0,     5,    24,     6,    24,    24,
   24,     0,     6,    24,     1,    24,    24,    24,     0,     7,
    6,     8,    24,    24,    24,     0,     8,     1,    24,    24,
   24,    24,     0,     9,    12,    10,    24,    24,    24,     4,
   10,    11,    24,    24,    24,    24,     4,    11,    24,    24,
   24,    24,    24,     4,    12,    24,    11,    24,    24,    24,
    4,    13,    24,    12,    24,    24,    24,     4,    14,    17,
   15,    24,    24,    24,     3,    15,    16,    24,    24,    24,
   24,     3,    16,    24,    24,    24,    24,    24,     3,    17,
   24,    16,    24,    24,    24,     3,    18,    24,    17,    24,
   24,    24,     3,    19,    22,    20,     7,    14,    24,     0,
   20,    21,    24,     8,    15,    24,     0,    21,    24,    24,
    1,    16,    24,     0,    22,    24,    21,     6,    17,    24,
    0,    23,    24,    22,     5,    18,    24,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm9k_main_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     2,     1,     1,     1,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     1,     2,     0,     0,     0,
    1,     1,     1,     2,     0,     0,     0,     1,     1,     1,
    2,     0,     0,     0,     1,     1,     0,     2,     0,     0,
    0,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    1,     1,     0,     0,     0,     1,     1,     1,     0,     0,
    0,     0,     1,     1,     1,     1,     0,     0,     0,     1,
    1,     1,     0,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     2,     0,     0,     0,     1,     1,     1,
    1,     0,     0,     0,     1,     1,     1,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     1,     1,     1,     1,     0,     1,
    1,     1,     0,     1,     1,     0,     1,     1,     0,     0,
    1,     1,     0,     1,     1,     0,     1,     1,     1,     0,
    1,     1,     0,     2,     1,     1,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm9k_main_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,    85,    64,    63,     0,   168,     1,    80,    69,
   65,    21,     0,    84,     5,    80,    10,   128,   106,     5,
  168,    18,   160,    74,   128,    63,     1,   252,    23,   240,
   79,   193,    63,     0,     4,     4,    16,    80,    65,     1,
    4,     4};

/* Vector for locked state flags.  */
static const unsigned char rm9k_main_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm9k_main_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm9k_imul_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
    3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     4};

/* Vector for state transitions.  */
static const unsigned char rm9k_imul_transitions[] ATTRIBUTE_UNUSED = {
    0,    64,    33,     1,     0,     1,    71,    71,    71,     2,
    2,    71,    71,    71,     3,     3,    71,    71,    71,     4,
    4,    71,    71,    71,     5,     5,    71,    71,    71,     6,
    6,    71,    71,    71,     7,     7,    71,    71,    71,     8,
    8,    71,    71,    71,     9,     9,    71,    71,    71,    10,
   10,    71,    71,    71,    11,    11,    71,    71,    71,    12,
   12,    71,    71,    71,    13,    13,    71,    71,    71,    14,
   14,    71,    71,    71,    15,    15,    71,    71,    71,    16,
   16,    71,    71,    71,    17,    17,    71,    71,    71,    18,
   18,    71,    71,    71,    19,    19,    71,    71,    71,    20,
   20,    71,    71,    71,    21,    21,    71,    71,    71,    22,
   22,    71,    71,    71,    23,    23,    71,    71,    71,    24,
   24,    71,    71,    71,    25,    25,    71,    71,    71,    26,
   26,    71,    71,    71,    27,    27,    71,    71,    71,    28,
   28,    71,    71,    71,    29,    29,    71,    71,    71,    30,
   30,    71,    71,    71,    31,    31,    71,    71,    71,    32,
   32,    71,    71,    71,    33,    33,    71,    71,    71,    34,
   34,    71,    71,    71,    35,    35,    71,    71,    71,    36,
   36,    71,    71,    71,    37,    37,    71,    71,    71,    38,
   38,    71,    71,    71,    39,    39,    71,    71,    71,    40,
   40,    71,    71,    71,    41,    41,    71,    71,    71,    42,
   42,    71,    71,    71,    43,    43,    71,    71,    71,    44,
   44,    71,    71,    71,    45,    45,    71,    71,    71,    46,
   46,    71,    71,    71,    47,    47,    71,    71,    71,    48,
   48,    71,    71,    71,    49,    49,    71,    71,    71,    50,
   50,    71,    71,    71,    51,    51,    71,    71,    71,    52,
   52,    71,    71,    71,    53,    53,    71,    71,    71,    54,
   54,    71,    71,    71,    55,    55,    71,    71,    71,    56,
   56,    71,    71,    71,    57,    57,    71,    71,    71,    58,
   58,    71,    71,    71,    59,    59,    71,    71,    71,    60,
   60,    71,    71,    71,    61,    61,    71,    71,    71,    62,
   62,    71,    71,    71,    63,    63,    71,    71,    71,    64,
   64,    71,    71,    71,    65,    65,    71,    71,    71,    66,
   66,    71,    71,    71,    67,    67,    71,    71,    71,    68,
   68,    71,    71,    71,    69,    69,    71,    71,    71,    70,
   70,    71,    71,    71,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm9k_imul_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm9k_imul_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,    70,    70,    70,     0,
    0,    69,    69,    69,     0,     0,    68,    68,    68,     0,
    0,    67,    67,    67,     0,     0,    66,    66,    66,     0,
    0,    65,    65,    65,     0,     0,    64,    64,    64,     0,
    0,    63,    63,    63,     0,     0,    62,    62,    62,     0,
    0,    61,    61,    61,     0,     0,    60,    60,    60,     0,
    0,    59,    59,    59,     0,     0,    58,    58,    58,     0,
    0,    57,    57,    57,     0,     0,    56,    56,    56,     0,
    0,    55,    55,    55,     0,     0,    54,    54,    54,     0,
    0,    53,    53,    53,     0,     0,    52,    52,    52,     0,
    0,    51,    51,    51,     0,     0,    50,    50,    50,     0,
    0,    49,    49,    49,     0,     0,    48,    48,    48,     0,
    0,    47,    47,    47,     0,     0,    46,    46,    46,     0,
    0,    45,    45,    45,     0,     0,    44,    44,    44,     0,
    0,    43,    43,    43,     0,     0,    42,    42,    42,     0,
    0,    41,    41,    41,     0,     0,    40,    40,    40,     0,
    0,    39,    39,    39,     0,     0,    38,    38,    38,     0,
    0,    37,    37,    37,     0,     0,    36,    36,    36,     0,
    0,    35,    35,    35,     0,     0,    34,    34,    34,     0,
    0,    33,    33,    33,     0,     0,    32,    32,    32,     0,
    0,    31,    31,    31,     0,     0,    30,    30,    30,     0,
    0,    29,    29,    29,     0,     0,    28,    28,    28,     0,
    0,    27,    27,    27,     0,     0,    26,    26,    26,     0,
    0,    25,    25,    25,     0,     0,    24,    24,    24,     0,
    0,    23,    23,    23,     0,     0,    22,    22,    22,     0,
    0,    21,    21,    21,     0,     0,    20,    20,    20,     0,
    0,    19,    19,    19,     0,     0,    18,    18,    18,     0,
    0,    17,    17,    17,     0,     0,    16,    16,    16,     0,
    0,    15,    15,    15,     0,     0,    14,    14,    14,     0,
    0,    13,    13,    13,     0,     0,    12,    12,    12,     0,
    0,    11,    11,    11,     0,     0,    10,    10,    10,     0,
    0,     9,     9,     9,     0,     0,     8,     8,     8,     0,
    0,     7,     7,     7,     0,     0,     6,     6,     6,     0,
    0,     5,     5,     5,     0,     0,     4,     4,     4,     0,
    0,     3,     3,     3,     0,     0,     2,     2,     2,     0,
    0,     1,     1,     1,     0};

/* Vector for locked state flags.  */
static const unsigned char rm9k_imul_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm9k_imul_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char rm9k_fdiv_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     3};

/* Vector for state transitions.  */
static const unsigned char rm9k_fdiv_transitions[] ATTRIBUTE_UNUSED = {
    0,    16,     1,     0,     1,    38,    38,     2,     2,    38,
   38,     3,     3,    38,    38,     4,     4,    38,    38,     5,
    5,    38,    38,     6,     6,    38,    38,     7,     7,    38,
   38,     8,     8,    38,    38,     9,     9,    38,    38,    10,
   10,    38,    38,    11,    11,    38,    38,    12,    12,    38,
   38,    13,    13,    38,    38,    14,    14,    38,    38,    15,
   15,    38,    38,    16,    16,    38,    38,    17,    17,    38,
   38,    18,    18,    38,    38,    19,    19,    38,    38,    20,
   20,    38,    38,    21,    21,    38,    38,    22,    22,    38,
   38,    23,    23,    38,    38,    24,    24,    38,    38,    25,
   25,    38,    38,    26,    26,    38,    38,    27,    27,    38,
   38,    28,    28,    38,    38,    29,    29,    38,    38,    30,
   30,    38,    38,    31,    31,    38,    38,    32,    32,    38,
   38,    33,    33,    38,    38,    34,    34,    38,    38,    35,
   35,    38,    38,    36,    36,    38,    38,    37,    37,    38,
   38,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char rm9k_fdiv_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char rm9k_fdiv_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,    37,    37,     0,     0,    36,
   36,     0,     0,    35,    35,     0,     0,    34,    34,     0,
    0,    33,    33,     0,     0,    32,    32,     0,     0,    31,
   31,     0,     0,    30,    30,     0,     0,    29,    29,     0,
    0,    28,    28,     0,     0,    27,    27,     0,     0,    26,
   26,     0,     0,    25,    25,     0,     0,    24,    24,     0,
    0,    23,    23,     0,     0,    22,    22,     0,     0,    21,
   21,     0,     0,    20,    20,     0,     0,    19,    19,     0,
    0,    18,    18,     0,     0,    17,    17,     0,     0,    16,
   16,     0,     0,    15,    15,     0,     0,    14,    14,     0,
    0,    13,    13,     0,     0,    12,    12,     0,     0,    11,
   11,     0,     0,    10,    10,     0,     0,     9,     9,     0,
    0,     8,     8,     0,     0,     7,     7,     0,     0,     6,
    6,     0,     0,     5,     5,     0,     0,     4,     4,     0,
    0,     3,     3,     0,     0,     2,     2,     0,     0,     1,
    1,     0};

/* Vector for locked state flags.  */
static const unsigned char rm9k_fdiv_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char rm9k_fdiv_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sb1_cpu_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     2,     3,     3,     3,     4,     4,
    4,     5,     5,     6,     7,     8,     2,     9,     9,     9,
   10,    11,     9,     9,     8,     9,     8,     9,     8,     9,
    9,     2,     2,     8,     9,     8,     9,     8,     9,     8,
    9,     8,     9,     8,     9,     8,     9,     8,     9,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,    12};

/* Vector for state transitions.  */
static const unsigned char sb1_cpu_transitions[] ATTRIBUTE_UNUSED = {
    0,     4,     1,    31,    29,    15,    17,    29,    14,    14,
   14,    25,     0,     1,    32,    32,     2,    22,    10,    12,
   22,    13,    13,    13,    24,     0,     2,    32,    32,     3,
    3,     4,     4,     3,    10,    10,    10,    21,     0,     3,
   32,    32,    32,    32,    32,    32,     4,     4,     4,     4,
    5,     0,     4,    32,    32,    32,    32,    32,    32,    32,
   32,    32,    32,    32,     0,     5,    32,    32,    32,    32,
   32,    32,    32,    32,    32,    32,    32,     6,     6,     4,
    7,    20,    18,    15,    17,    18,    14,    14,    32,    32,
    0,     7,    32,    32,     8,    11,    10,    12,    11,    13,
   13,    32,    32,     0,     8,    32,    32,     9,     9,     4,
    4,     9,    10,    10,    32,    32,     0,     9,    32,    32,
   32,    32,    32,    32,     4,     4,     4,    32,    32,     0,
   10,    32,    32,     4,     4,    32,    32,     4,    32,    32,
   32,    32,     0,    11,    32,    32,     9,    32,     4,    32,
   12,    12,    12,    32,    32,     0,    12,    32,    32,     4,
   32,    32,    32,    32,    32,    32,    32,    32,     0,    13,
   32,    32,    10,    12,    32,    32,    12,    32,    32,    32,
   32,     0,    14,    32,    13,    15,    17,    10,    12,    17,
   13,    32,    32,    32,     0,    15,    32,    10,    16,    16,
    4,     4,    16,    10,    32,    32,    32,     0,    16,    32,
    4,    32,    32,    32,    32,     4,     4,    32,    32,    32,
    0,    17,    32,    12,    16,    32,     4,    32,    12,    12,
   32,    32,    32,     0,    18,    32,    11,    19,    32,    16,
   32,    17,    17,    17,    32,    32,     0,    19,    32,     9,
   32,    32,    32,    32,    16,    16,    16,    32,    32,     0,
   20,    32,     8,    19,    19,    16,    16,    19,    15,    15,
   32,    32,     0,    21,    32,    32,     5,     5,    32,    32,
    5,    32,    32,    32,    32,     6,    22,    32,    32,     3,
   32,     4,    32,    12,    12,    12,    12,    23,     0,    23,
   32,    32,     5,    32,    32,    32,    32,    32,    32,    32,
   32,     6,    24,    32,    32,    21,    23,    32,    32,    23,
   32,    32,    32,    32,     6,    25,    32,    24,    28,    26,
   21,    23,    26,    24,    32,    32,    32,     6,    26,    32,
   23,    27,    32,     5,    32,    23,    23,    32,    32,    32,
    6,    27,    32,     5,    32,    32,    32,    32,     5,     5,
   32,    32,    32,     6,    28,    32,    21,    27,    27,     5,
    5,    27,    21,    32,    32,    32,     6,    29,    32,    22,
   30,    32,    16,    32,    17,    17,    17,    17,    26,     0,
   30,    32,     3,    32,    32,    32,    32,    16,    16,    16,
   16,    27,     0,    31,    32,     2,    30,    30,    16,    16,
   30,    15,    15,    15,    28,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sb1_cpu_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     2,     1,     4,     2,     3,     2,     1,
    1,     1,     1,     1,     0,     0,     2,     1,     2,     1,
    2,     1,     1,     1,     1,     1,     1,     0,     0,     1,
    1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
    0,     0,     0,     0,     0,     0,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     1,     1,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     1,     1,
    1,     2,     1,     4,     2,     3,     2,     1,     0,     0,
    1,     1,     0,     0,     2,     1,     2,     1,     2,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     1,
    1,     2,     1,     1,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     0,     1,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     0,     0,
    0,     0,     1,     1,     0,     0,     1,     0,     1,     0,
    1,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    0,     0,     0,     0,     0,     0,     0,     0,     1,     1,
    0,     0,     2,     1,     0,     0,     1,     0,     0,     0,
    0,     1,     1,     0,     1,     2,     1,     2,     1,     2,
    1,     0,     0,     0,     1,     1,     0,     1,     1,     1,
    1,     1,     2,     1,     0,     0,     0,     1,     1,     0,
    1,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    1,     1,     0,     1,     1,     0,     1,     0,     1,     1,
    0,     0,     0,     1,     1,     0,     1,     1,     0,     2,
    0,     2,     2,     1,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     0,     2,     2,     1,     0,     0,     1,
    1,     0,     1,     1,     1,     2,     2,     3,     2,     1,
    0,     0,     1,     1,     0,     0,     1,     1,     0,     0,
    1,     0,     0,     0,     0,     1,     1,     0,     0,     1,
    0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
    0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     0,     0,     2,     1,     0,     0,     1,
    0,     0,     0,     0,     1,     1,     0,     1,     2,     1,
    2,     1,     2,     1,     0,     0,     0,     1,     1,     0,
    1,     1,     0,     1,     0,     1,     1,     0,     0,     0,
    1,     1,     0,     1,     0,     0,     0,     0,     1,     1,
    0,     0,     0,     1,     1,     0,     1,     1,     1,     1,
    1,     2,     1,     0,     0,     0,     1,     1,     0,     1,
    1,     0,     2,     0,     2,     2,     1,     1,     1,     1,
    1,     0,     1,     0,     0,     0,     0,     2,     2,     1,
    1,     1,     1,     1,     0,     1,     1,     1,     2,     2,
    3,     2,     1,     1,     1,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sb1_cpu_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     5,     0,     0,     1,    64,     0,     0,
   85,    80,     0,    21,    85,    85,     5,    85,    86,   128,
    0,     0,    80,    80,     0,    20,    20,     0,     5,     5,
   85,     1,    65,    65,    69,    80,    81,    16,    20,    20,
   85,    85,     5,     5,    21,    65,     0,     1,    80,    64,
    0,    84,    17,    84,    21,     4,    17,     5,    65,     4,
   64,    80,    69,    80,    20,    16,     0,     5,     5,     5,
   22,   129,    68,    64,     0,    81,    85,   104,    20,    20,
   90,     4,     0,     6,   129,     4,    65,   160,    69,    80,
  104,    16,     0,    26,     4,    17,     0,     1,    21,    64,
    0,    64,     0,     0};

/* Vector for locked state flags.  */
static const unsigned char sb1_cpu_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sb1_cpu_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sb1_cpu_div_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     1,     2,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     3};

/* Vector for state transitions.  */
static const unsigned char sb1_cpu_div_transitions[] ATTRIBUTE_UNUSED = {
    0,    33,     1,     0,     1,    65,    65,     2,     2,    65,
   65,     3,     3,    65,    65,     4,     4,    65,    65,     5,
    5,    65,    65,     6,     6,    65,    65,     7,     7,    65,
   65,     8,     8,    65,    65,     9,     9,    65,    65,    10,
   10,    65,    65,    11,    11,    65,    65,    12,    12,    65,
   65,    13,    13,    65,    65,    14,    14,    65,    65,    15,
   15,    65,    65,    16,    16,    65,    65,    17,    17,    65,
   65,    18,    18,    65,    65,    19,    19,    65,    65,    20,
   20,    65,    65,    21,    21,    65,    65,    22,    22,    65,
   65,    23,    23,    65,    65,    24,    24,    65,    65,    25,
   25,    65,    65,    26,    26,    65,    65,    27,    27,    65,
   65,    28,    28,    65,    65,    29,    29,    65,    65,    30,
   30,    65,    65,    31,    31,    65,    65,    32,    32,    65,
   65,    33,    33,    65,    65,    34,    34,    65,    65,    35,
   35,    65,    65,    36,    36,    65,    65,    37,    37,    65,
   65,    38,    38,    65,    65,    39,    39,    65,    65,    40,
   40,    65,    65,    41,    41,    65,    65,    42,    42,    65,
   65,    43,    43,    65,    65,    44,    44,    65,    65,    45,
   45,    65,    65,    46,    46,    65,    65,    47,    47,    65,
   65,    48,    48,    65,    65,    49,    49,    65,    65,    50,
   50,    65,    65,    51,    51,    65,    65,    52,    52,    65,
   65,    53,    53,    65,    65,    54,    54,    65,    65,    55,
   55,    65,    65,    56,    56,    65,    65,    57,    57,    65,
   65,    58,    58,    65,    65,    59,    59,    65,    65,    60,
   60,    65,    65,    61,    61,    65,    65,    62,    62,    65,
   65,    63,    63,    65,    65,    64,    64,    65,    65,     0,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sb1_cpu_div_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
    1,     0,     0,     1,     1,     0,     0,     1,     1,     0,
    0,     1,     1,     0,     0,     1,     1,     0,     0,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sb1_cpu_div_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,    64,    64,     0,     0,    63,
   63,     0,     0,    62,    62,     0,     0,    61,    61,     0,
    0,    60,    60,     0,     0,    59,    59,     0,     0,    58,
   58,     0,     0,    57,    57,     0,     0,    56,    56,     0,
    0,    55,    55,     0,     0,    54,    54,     0,     0,    53,
   53,     0,     0,    52,    52,     0,     0,    51,    51,     0,
    0,    50,    50,     0,     0,    49,    49,     0,     0,    48,
   48,     0,     0,    47,    47,     0,     0,    46,    46,     0,
    0,    45,    45,     0,     0,    44,    44,     0,     0,    43,
   43,     0,     0,    42,    42,     0,     0,    41,    41,     0,
    0,    40,    40,     0,     0,    39,    39,     0,     0,    38,
   38,     0,     0,    37,    37,     0,     0,    36,    36,     0,
    0,    35,    35,     0,     0,    34,    34,     0,     0,    33,
   33,     0,     0,    32,    32,     0,     0,    31,    31,     0,
    0,    30,    30,     0,     0,    29,    29,     0,     0,    28,
   28,     0,     0,    27,    27,     0,     0,    26,    26,     0,
    0,    25,    25,     0,     0,    24,    24,     0,     0,    23,
   23,     0,     0,    22,    22,     0,     0,    21,    21,     0,
    0,    20,    20,     0,     0,    19,    19,     0,     0,    18,
   18,     0,     0,    17,    17,     0,     0,    16,    16,     0,
    0,    15,    15,     0,     0,    14,    14,     0,     0,    13,
   13,     0,     0,    12,    12,     0,     0,    11,    11,     0,
    0,    10,    10,     0,     0,     9,     9,     0,     0,     8,
    8,     0,     0,     7,     7,     0,     0,     6,     6,     0,
    0,     5,     5,     0,     0,     4,     4,     0,     0,     3,
    3,     0,     0,     2,     2,     0,     0,     1,     1,     0,
};

/* Vector for locked state flags.  */
static const unsigned char sb1_cpu_div_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sb1_cpu_div_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cpu_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    2,     2,     2,     3,     4,     2,     4,     3,     2,     2,
    2,     2,     2,     2,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     5,     5,     1,     2,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     6};

/* Vector for state transitions.  */
static const unsigned char sr71_cpu_transitions[] ATTRIBUTE_UNUSED = {
    0,    19,    12,   158,   155,     1,     0,     1,   160,    13,
  152,   154,   153,     2,     2,   160,    64,   152,   151,     3,
    0,     3,   160,    65,   160,   160,   160,     4,     4,   160,
   75,   150,    10,     5,     0,     5,   160,     6,   160,   160,
  160,     2,     6,   160,     7,   160,   160,   160,     2,     7,
  160,     8,   160,   160,   160,     2,     8,   160,     9,   160,
  160,   160,     2,     9,   160,   160,   160,   160,   160,     2,
   10,   160,    76,   160,   160,   160,    11,    11,   160,    73,
  149,   148,   147,    12,    12,   160,    45,   145,    42,    13,
    0,    13,   160,    39,    31,    23,    14,     2,    14,   160,
   20,   160,   160,   160,    15,    15,   160,    16,   160,   160,
  160,     0,    16,   160,    17,   160,   160,   160,     0,    17,
  160,    18,   160,   160,   160,     0,    18,   160,    19,   160,
  160,   160,     0,    19,   160,   160,   160,   160,   160,     0,
   20,   160,    21,   160,   160,   160,    15,    21,   160,    22,
  160,   160,   160,    15,    22,   160,   160,   160,   160,   160,
   15,    23,   160,    29,   160,   160,   160,    24,    24,   160,
   25,   160,   160,   160,    12,    25,   160,    26,   160,   160,
  160,    12,    26,   160,    27,   160,   160,   160,    12,    27,
  160,    28,   160,   160,   160,    12,    28,   160,   160,   160,
  160,   160,    12,    29,   160,    30,   160,   160,   160,    24,
   30,   160,   160,   160,   160,   160,    24,    31,   160,    32,
  160,   160,   160,    34,    32,   160,    33,   160,   160,   160,
   34,    33,   160,   160,   160,   160,   160,    34,    34,   160,
   35,   160,   160,   160,    13,    35,   160,    36,   160,   160,
  160,    13,    36,   160,    37,   160,   160,   160,    13,    37,
  160,    38,   160,   160,   160,    13,    38,   160,   160,   160,
  160,   160,    13,    39,   160,    40,    32,    29,    20,     2,
   40,   160,    41,    33,    30,    21,     2,    41,   160,   160,
  160,   160,    22,     2,    42,   160,    46,   144,    43,    23,
   11,    43,   160,    47,   160,   160,   160,    44,    44,   160,
  140,   160,   160,   160,    45,    45,   160,   138,    55,    46,
   39,     0,    46,   160,    54,    48,    47,    29,    11,    47,
  160,   160,   160,   160,   160,    44,    48,   160,   160,   160,
  160,   160,    49,    49,   160,    50,   160,   160,   160,    39,
   50,   160,    51,   160,   160,   160,    39,    51,   160,    52,
  160,   160,   160,    39,    52,   160,    53,   160,   160,   160,
   39,    53,   160,   160,   160,   160,   160,    39,    54,   160,
  160,   160,   160,    30,    11,    55,   160,   137,   131,    48,
   32,    56,    56,   160,    94,   130,    62,    57,    13,    57,
  160,    58,   160,   160,   160,     6,    58,   160,    59,   160,
  160,   160,     6,    59,   160,    60,   160,   160,   160,     6,
   60,   160,    61,   160,   160,   160,     6,    61,   160,   160,
  160,   160,   160,     6,    62,   160,    95,   160,   160,   160,
   63,    63,   160,   111,   160,   160,   160,    64,    64,   160,
  127,    31,    69,    65,     0,    65,   160,    66,   160,   160,
  160,     4,    66,   160,    67,   160,   160,   160,     4,    67,
  160,    68,   160,   160,   160,     4,    68,   160,   160,   160,
  160,   160,     4,    69,   160,   125,   160,   160,   160,    70,
   70,   160,    89,   124,    72,    71,    12,    71,   160,    63,
  160,   160,   160,    64,    72,   160,    90,   160,   160,   160,
   73,    73,   160,   121,   118,    88,    74,    12,    74,   160,
   85,   160,   160,   160,    75,    75,   160,    82,    79,    76,
    6,     0,    76,   160,    77,   160,   160,   160,    11,    77,
  160,    78,   160,   160,   160,    11,    78,   160,   160,   160,
  160,   160,    11,    79,   160,    80,   160,   160,   160,    56,
   80,   160,    81,   160,   160,   160,    56,    81,   160,   160,
  160,   160,   160,    56,    82,   160,    83,    80,    77,     7,
    0,    83,   160,    84,    81,    78,     8,     0,    84,   160,
  160,   160,   160,     9,     0,    85,   160,    86,   160,   160,
  160,    75,    86,   160,    87,   160,   160,   160,    75,    87,
  160,   160,   160,   160,   160,    75,    88,   160,   116,   160,
  160,   160,    89,    89,   160,   110,    93,    90,    63,    12,
   90,   160,    91,   160,   160,   160,    73,    91,   160,    92,
  160,   160,   160,    73,    92,   160,   160,   160,   160,   160,
   73,    93,   160,   108,   160,   160,   160,    94,    94,   160,
  105,    98,    95,    58,    13,    95,   160,    96,   160,   160,
  160,    63,    96,   160,    97,   160,   160,   160,    63,    97,
  160,   160,   160,   160,   160,    63,    98,   160,   103,   160,
  160,   160,    99,    99,   160,   100,   160,   160,   160,    65,
  100,   160,   101,   160,   160,   160,    65,   101,   160,   102,
  160,   160,   160,    65,   102,   160,   160,   160,   160,   160,
   65,   103,   160,   104,   160,   160,   160,    99,   104,   160,
  160,   160,   160,   160,    99,   105,   160,   106,   103,    96,
   59,    13,   106,   160,   107,   104,    97,    60,    13,   107,
  160,   160,   160,   160,    61,    13,   108,   160,   109,   160,
  160,   160,    94,   109,   160,   160,   160,   160,   160,    94,
  110,   160,   114,   108,    91,   111,    12,   111,   160,   112,
  160,   160,   160,    64,   112,   160,   113,   160,   160,   160,
   64,   113,   160,   160,   160,   160,   160,    64,   114,   160,
  115,   109,    92,   112,    12,   115,   160,   160,   160,   160,
  113,    12,   116,   160,   117,   160,   160,   160,    89,   117,
  160,   160,   160,   160,   160,    89,   118,   160,   119,   160,
  160,   160,    35,   119,   160,   120,   160,   160,   160,    35,
  120,   160,   160,   160,   160,   160,    35,   121,   160,   122,
  119,   116,    85,    12,   122,   160,   123,   120,   117,    86,
   12,   123,   160,   160,   160,   160,    87,    12,   124,   160,
   93,   160,   160,   160,    94,   125,   160,   126,   160,   160,
  160,    70,   126,   160,   160,   160,   160,   160,    70,   127,
  160,   128,    32,   125,    66,     0,   128,   160,   129,    33,
  126,    67,     0,   129,   160,   160,   160,   160,    68,     0,
  130,   160,    98,   160,   160,   160,    99,   131,   160,   160,
  160,   160,   160,   132,   132,   160,   133,   160,   160,   160,
   20,   133,   160,   134,   160,   160,   160,    20,   134,   160,
  135,   160,   160,   160,    20,   135,   160,   136,   160,   160,
  160,    20,   136,   160,   160,   160,   160,   160,    20,   137,
  160,   160,   160,   160,    33,    56,   138,   160,   139,   137,
   54,    40,     0,   139,   160,   160,   160,   160,    41,     0,
  140,   160,   141,   160,   160,   160,    45,   141,   160,   142,
  160,   160,   160,    45,   142,   160,   143,   160,   160,   160,
   45,   143,   160,   160,   160,   160,   160,    45,   144,   160,
   48,   160,   160,   160,    49,   145,   160,    55,   146,   144,
   31,    56,   146,   160,   131,   160,   160,   160,   132,   147,
  160,    74,   160,   160,   160,    75,   148,   160,    88,   160,
  160,   160,    89,   149,   160,   118,   160,   160,   160,    35,
  150,   160,    79,   160,   160,   160,    56,   151,   160,    69,
  160,   160,   160,    70,   152,   160,    31,   160,   160,   160,
   34,   153,   160,    14,   160,   160,   160,    15,   154,   160,
   23,   160,   160,   160,    24,   155,   160,    42,   157,   156,
  154,    11,   156,   160,    43,   160,   160,   160,    44,   157,
  160,   144,   160,   160,   160,    49,   158,   160,   145,   159,
  157,   152,    56,   159,   160,   146,   160,   160,   160,   132,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cpu_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     4,    64,    32,     2,     1,     1,     0,     4,
   32,    16,     1,     1,     1,     0,     4,    32,    16,     1,
    1,     1,     0,     4,     0,     0,     0,     1,     1,     0,
    4,    32,    16,     1,     1,     1,     0,     4,     0,     0,
    0,     1,     1,     0,     3,     0,     0,     0,     1,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     4,
   32,    16,     1,     1,     1,     0,     3,    48,    24,     2,
    1,     1,     0,     3,    24,    12,     1,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     4,     0,     0,
    0,     1,     1,     0,     3,     0,     0,     0,     1,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     2,     0,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     0,     2,     0,     0,     0,     1,     1,     0,
    4,     0,     0,     0,     1,     1,     0,     3,     0,     0,
    0,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    4,     0,     0,     0,     1,     1,     0,     3,     0,     0,
    0,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     2,    16,     8,     1,     1,
    1,     0,     1,     8,     4,     1,     1,     1,     0,     0,
    0,     0,     1,     1,     1,     0,     2,    12,     6,     1,
    1,     1,     0,     1,     0,     0,     0,     1,     1,     0,
    4,     0,     0,     0,     1,     1,     0,     2,    32,    16,
    2,     1,     1,     0,     1,     6,     3,     1,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     4,     0,     0,     0,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     1,     1,     1,     0,     1,     3,     3,
    1,     1,     1,     0,     4,    16,    16,     1,     1,     1,
    0,     4,     0,     0,     0,     1,     1,     0,     3,     0,
    0,     0,     1,     1,     0,     2,     0,     0,     0,     1,
    1,     0,     1,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     3,     0,     0,     0,
    1,     1,     0,     3,     0,     0,     0,     1,     1,     0,
    3,    24,    12,     1,     1,     1,     0,     3,     0,     0,
    0,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     2,     0,     0,     0,     1,
    1,     0,     4,    32,    16,     1,     1,     1,     0,     4,
    0,     0,     0,     1,     1,     0,     3,     0,     0,     0,
    1,     1,     0,     3,    24,    12,     1,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     3,    24,    12,
    1,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     1,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     2,     0,     0,     0,     1,
    1,     0,     1,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     2,    16,     8,     1,
    1,     1,     0,     1,     8,     4,     1,     1,     1,     0,
    0,     0,     0,     1,     1,     1,     0,     2,     0,     0,
    0,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     0,     3,    24,    12,     1,     1,
    1,     0,     2,     0,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     0,     2,     0,     0,     0,     1,     1,     0,
    3,    12,    12,     1,     1,     1,     0,     2,     0,     0,
    0,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     0,     3,     0,     0,     0,     1,
    1,     0,     2,     0,     0,     0,     1,     1,     0,     1,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     0,
    1,     1,     0,     1,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     0,     1,     1,     0,     2,     8,     8,
    1,     1,     1,     0,     1,     4,     4,     1,     1,     1,
    0,     0,     0,     0,     1,     1,     1,     0,     1,     0,
    0,     0,     1,     1,     0,     0,     0,     0,     0,     1,
    1,     0,     2,    16,     8,     1,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    1,     8,     4,     1,     1,     1,     0,     0,     0,     0,
    1,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     0,     1,     1,     0,     2,     0,
    0,     0,     1,     1,     0,     1,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     0,     1,     1,     0,     2,
   16,     8,     1,     1,     1,     0,     1,     8,     4,     1,
    1,     1,     0,     0,     0,     0,     1,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     1,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     2,    16,     8,     1,     1,     1,     0,     1,     8,
    4,     1,     1,     1,     0,     0,     0,     0,     1,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     0,
    0,     0,     0,     1,     1,     0,     4,     0,     0,     0,
    1,     1,     0,     3,     0,     0,     0,     1,     1,     0,
    2,     0,     0,     0,     1,     1,     0,     1,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     0,     0,     0,     1,     1,     1,     0,     1,    16,
    8,     2,     1,     1,     0,     0,     0,     0,     2,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     2,
    0,     0,     0,     1,     1,     0,     1,     0,     0,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    1,     0,     0,     0,     1,     1,     0,     2,     6,     6,
    1,     1,     1,     0,     1,     0,     0,     0,     1,     1,
    0,     4,     0,     0,     0,     1,     1,     0,     3,     0,
    0,     0,     1,     1,     0,     3,     0,     0,     0,     1,
    1,     0,     3,     0,     0,     0,     1,     1,     0,     3,
    0,     0,     0,     1,     1,     0,     3,     0,     0,     0,
    1,     1,     0,     4,     0,     0,     0,     1,     1,     0,
    3,     0,     0,     0,     1,     1,     0,     3,    18,     9,
    1,     1,     1,     0,     2,     0,     0,     0,     1,     1,
    0,     2,     0,     0,     0,     1,     1,     0,     3,     9,
    9,     1,     1,     1,     0,     2,     0,     0,     0,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cpu_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,    32,     0,     0,     1,     0,     0,
    0,    32,    17,    16,     1,     0,     0,     0,    32,    17,
   16,     2,     1,    17,     0,    32,    17,    16,     2,     1,
   17,     0,    33,    17,    16,     3,     1,    17,     0,    32,
    0,     0,     1,     0,     0,     0,    32,     0,     0,     2,
    2,    34,     0,    16,    17,    16,     1,     1,    17,     0,
   16,    17,    16,     1,     1,    17,     0,    17,    17,    16,
    2,     2,    34,     0,    32,    34,    32,     2,    18,    34,
    0,    48,    34,    32,     2,     1,    17,     0,    32,    17,
   16,     2,     1,    17,     0,    32,    17,    16,     2,    17,
   17,     0,    48,    34,    32,     3,    18,    34,     0,    64,
   34,    32,     4,     2,    34,     0,    65,    34,    32,     3,
    1,    17,     0,    48,    17,    16,     3,     1,    17,     0,
   48,    17,    16,     3,    17,    17,     0,    32,     0,     0,
    2,     0,     0,     0,    33,    17,     0,     3,     0,     0,
    0,    48,    34,    32,     2,     1,    17,     0,    16,     0,
    0,     3,     0,     0,     0,    49,    34,    32,     4,    18,
   34,     0,    48,    17,    16,     3,     1,    17,     0,    48,
   17,    16,     3,     1,    17,     0,    49,    17,    16,     3,
   17,    16,     0,    64,     0,     0,     3,     0,     0,     0,
   48,    34,    32,     3,     2,    34,     0,    48,    34,    32,
    3,     2,    34,     0,    49,    34,    32,     3,     2,    34,
    0,    32,    17,    16,     1,     0,     0,     0,    32,    17,
   16,     2,     1,    17,     0,    32,    17,    16,     2,    17,
   17,     0,    48,    17,    16,     2,     0,     0,     0,    32,
   17,    16,     3,     1,    17,     0,    32,     0,     0,     2,
    1,    17,     0,    16,     0,     0,     3,     1,    17,     0,
   48,    17,    16,     3,    17,    17,     0,    64,    17,    16,
    4,     1,    17,     0,    65,    17,    16,     1,     0,     0,
    0,    16,     0,     0,     1,    17,    16,     0,    32,    17,
   16,     2,     1,    17,     0,    33,    17,    16,     3,     1,
   17,     0,    32,     0,     0,     3,     1,    17,     0,    48,
   17,    16,     3,    17,    17,     0,    64,    17,    16,     3,
    0,     0,     0,    48,    34,    32,     3,     2,    34,     0,
   49,    34,    32,     4,     3,    51,     0,    48,    34,    32,
    3,     2,    34,     0,    48,    34,    32,     3,    18,    34,
    0,    64,    51,    48,     4,    19,    51,     0,    48,     0,
    0,     3,     0,     0,     0,    49,    17,     0,     4,     1,
   17,     0,    65,    17,    16,     2,     0,     0,     0,    32,
   17,    16,     2,     1,    17,     0,    33,    17,    16,     2,
    0,     0,     0,    33,    17,     0,     3,     1,    17,     0,
   49,    17,    16,     4,     2,    34,     0,    64,    34,    32,
    4,    18,    34,     0,    32,     0,     0,     2,     0,     0,
    0,    33,    17,     0,     4,     1,    17,     0,    48,    17,
   16,     3,    17,    17,     0,    16,     0,     0,     1,     0,
    0,     0,    17,    17,     0,     4,     3,    51,     0,    65,
   68,    64,     3,     3,    51,     0,    48,    51,    48,     3,
    3,    51,     0,    48,    51,    48,     3,    19,    51,     0,
   65,    17,     0,     1,     0,     0,     0,    17,    17,     0,
    2,     1,    17,     0,    32,    17,    16,     2,     1,    17,
    0,    33,    17,    16,     4,     2,    34,     0,    64,     0,
    0,     4,     4,    68,     0,    32,    17,    16,     3,     1,
   17,     0,    64,    34,    32,     4,     1,    17,     0,    48,
   17,    16,     4,     2,    34,     0,    32,    34,    32,     3,
    2,    34,     0,    48,     0,     0,     3,     2,    34,     0,
   64,    34,    32,     4,     0,     0,     0,    64,    68,    64,
};

/* Vector for locked state flags.  */
static const unsigned char sr71_cpu_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cpu_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cpu1_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     2,     2,     3,     3,     4,     3,     3,     4,     4,
    5,     5,     5,     5,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     6};

/* Vector for state transitions.  */
static const unsigned char sr71_cpu1_transitions[] ATTRIBUTE_UNUSED = {
    0,    79,     6,    77,     2,     1,     0,     1,    76,     7,
   74,    70,    80,     2,     2,    69,    15,    67,     3,    80,
    0,     3,    66,    16,     4,    80,    80,     0,     4,    65,
   17,    80,    80,    80,     5,     5,    64,    13,    62,    10,
   54,     6,     6,    53,    80,    51,    15,     7,     0,     7,
   50,    80,    48,     8,    80,     2,     8,    47,    80,     9,
   80,    80,     2,     9,    46,    80,    80,    80,    80,    10,
   10,    45,    25,    43,    11,    80,     6,    11,    42,    26,
   12,    80,    80,     6,    12,    41,    27,    80,    80,    80,
   13,    13,    40,    80,    38,    25,    14,     6,    14,    37,
   80,    35,    23,    80,    15,    15,    22,    80,    20,    16,
   80,     0,    16,    19,    80,    17,    80,    80,     0,    17,
   18,    80,    80,    80,    80,     5,    18,    80,    80,    80,
   80,    80,     5,    19,    80,    80,    18,    80,    80,     0,
   20,    21,    80,    80,    17,    80,     5,    21,    80,    80,
   80,    18,    80,     5,    22,    80,    80,    21,    19,    80,
    0,    23,    34,    80,    24,    80,    80,    15,    24,    33,
   80,    80,    80,    80,    25,    25,    32,    80,    30,    26,
   80,     6,    26,    29,    80,    27,    80,    80,     6,    27,
   28,    80,    80,    80,    80,    13,    28,    80,    80,    80,
   80,    80,    13,    29,    80,    80,    28,    80,    80,     6,
   30,    31,    80,    80,    27,    80,    13,    31,    80,    80,
   80,    28,    80,    13,    32,    80,    80,    31,    29,    80,
    6,    33,    80,    80,    80,    80,    80,    25,    34,    80,
   80,    33,    80,    80,    15,    35,    36,    80,    80,    24,
   80,    25,    36,    80,    80,    80,    33,    80,    25,    37,
   80,    80,    36,    34,    80,    15,    38,    39,    80,    80,
   30,    35,    13,    39,    80,    80,    80,    31,    36,    13,
   40,    80,    80,    39,    32,    37,     6,    41,    80,    28,
   80,    80,    80,    13,    42,    80,    29,    41,    80,    80,
    6,    43,    44,    30,    80,    12,    80,    13,    44,    80,
   31,    80,    41,    80,    13,    45,    80,    32,    44,    42,
   80,     6,    46,    80,    80,    80,    80,    80,    10,    47,
   80,    80,    46,    80,    80,     2,    48,    49,    80,    80,
    9,    80,    10,    49,    80,    80,    80,    46,    80,    10,
   50,    80,    80,    49,    47,    80,     2,    51,    52,    80,
   80,    20,    48,     5,    52,    80,    80,    80,    21,    49,
    5,    53,    80,    80,    52,    22,    50,     0,    54,    61,
   14,    59,    55,    80,    15,    55,    58,    23,    56,    80,
   80,    15,    56,    57,    24,    80,    80,    80,    25,    57,
   80,    33,    80,    80,    80,    25,    58,    80,    34,    57,
   80,    80,    15,    59,    60,    35,    80,    56,    80,    25,
   60,    80,    36,    80,    57,    80,    25,    61,    80,    37,
   60,    58,    80,    15,    62,    63,    38,    80,    43,    59,
   13,    63,    80,    39,    80,    44,    60,    13,    64,    80,
   40,    63,    45,    61,     6,    65,    80,    18,    80,    80,
   80,     5,    66,    80,    19,    65,    80,    80,     0,    67,
   68,    20,    80,     4,    80,     5,    68,    80,    21,    80,
   65,    80,     5,    69,    80,    22,    68,    66,    80,     0,
   70,    73,     8,    71,    80,    80,     2,    71,    72,     9,
   80,    80,    80,    10,    72,    80,    46,    80,    80,    80,
   10,    73,    80,    47,    72,    80,    80,     2,    74,    75,
   48,    80,    71,    80,    10,    75,    80,    49,    80,    72,
   80,    10,    76,    80,    50,    75,    73,    80,     2,    77,
   78,    51,    80,    67,    74,     5,    78,    80,    52,    80,
   68,    75,     5,    79,    80,    53,    78,    69,    76,     0,
};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cpu1_state_alts[] ATTRIBUTE_UNUSED = {
    1,     4,     4,    64,     8,     4,     1,     1,     4,     4,
   64,     4,     0,     1,     1,     4,     4,    64,     4,     0,
    1,     1,     4,     4,    64,     0,     0,     1,     1,     4,
    4,     0,     0,     0,     1,     1,     4,     4,    64,     8,
    4,     1,     1,     4,     0,    64,     8,     4,     1,     1,
    4,     0,    64,     4,     0,     1,     1,     4,     0,    64,
    0,     0,     1,     1,     4,     0,     0,     0,     0,     1,
    1,     4,     4,    64,     4,     0,     1,     1,     4,     4,
   64,     0,     0,     1,     1,     4,     4,     0,     0,     0,
    1,     1,     4,     0,    64,     8,     4,     1,     1,     4,
    0,    64,     4,     0,     1,     1,     4,     0,    64,     4,
    0,     1,     1,     4,     0,    64,     0,     0,     1,     1,
    4,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     0,    64,     0,     0,     1,
    1,     4,     0,     0,     4,     0,     1,     1,     0,     0,
    0,     4,     0,     1,     1,     0,     0,    64,     4,     0,
    1,     1,     4,     0,    64,     0,     0,     1,     1,     4,
    0,     0,     0,     0,     1,     1,     4,     0,    64,     4,
    0,     1,     1,     4,     0,    64,     0,     0,     1,     1,
    4,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     0,     1,     1,     0,     0,    64,     0,     0,     1,
    1,     4,     0,     0,     4,     0,     1,     1,     0,     0,
    0,     4,     0,     1,     1,     0,     0,    64,     4,     0,
    1,     1,     0,     0,     0,     0,     0,     1,     1,     0,
    0,    64,     0,     0,     1,     1,     4,     0,     0,     4,
    0,     1,     1,     0,     0,     0,     4,     0,     1,     1,
    0,     0,    64,     4,     0,     1,     1,     4,     0,     0,
    8,     4,     1,     1,     0,     0,     0,     8,     4,     1,
    1,     0,     0,    64,     8,     4,     1,     1,     0,     4,
    0,     0,     0,     1,     1,     0,     4,    64,     0,     0,
    1,     1,     4,     4,     0,     4,     0,     1,     1,     0,
    4,     0,     4,     0,     1,     1,     0,     4,    64,     4,
    0,     1,     1,     0,     0,     0,     0,     0,     1,     1,
    0,     0,    64,     0,     0,     1,     1,     4,     0,     0,
    4,     0,     1,     1,     0,     0,     0,     4,     0,     1,
    1,     0,     0,    64,     4,     0,     1,     1,     4,     0,
    0,     8,     4,     1,     1,     0,     0,     0,     8,     4,
    1,     1,     0,     0,    64,     8,     4,     1,     1,     4,
    4,    64,     4,     0,     1,     1,     4,     4,    64,     0,
    0,     1,     1,     4,     4,     0,     0,     0,     1,     1,
    0,     4,     0,     0,     0,     1,     1,     0,     4,    64,
    0,     0,     1,     1,     4,     4,     0,     4,     0,     1,
    1,     0,     4,     0,     4,     0,     1,     1,     0,     4,
   64,     4,     0,     1,     1,     4,     4,     0,     8,     4,
    1,     1,     0,     4,     0,     8,     4,     1,     1,     0,
    4,    64,     8,     4,     1,     1,     0,     4,     0,     0,
    0,     1,     1,     0,     4,    64,     0,     0,     1,     1,
    4,     4,     0,     4,     0,     1,     1,     0,     4,     0,
    4,     0,     1,     1,     0,     4,    64,     4,     0,     1,
    1,     4,     4,    64,     0,     0,     1,     1,     4,     4,
    0,     0,     0,     1,     1,     0,     4,     0,     0,     0,
    1,     1,     0,     4,    64,     0,     0,     1,     1,     4,
    4,     0,     4,     0,     1,     1,     0,     4,     0,     4,
    0,     1,     1,     0,     4,    64,     4,     0,     1,     1,
    4,     4,     0,     8,     4,     1,     1,     0,     4,     0,
    8,     4,     1,     1,     0,     4,    64,     8,     4,     1,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cpu1_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,   128,     1,     0,    20,     1,    80,     0,
    0,    64,     1,     8,     4,    96,    21,   128,     1,     0,
   20,     1,    80,    32,     0,   130,     1,     4,     4,    80,
   21,    65,    85,     5,    20,     5,    16,    84,    65,    65,
    2,    24,    13,    96,    32,    64,   133,     3,    84,    29,
   80,    97,    64,   209,     7,    68,    24,    16,   117,   129,
  134,     3,    72,    29,    32,    96,   128,   208,     7,    64,
   24,     0,    69,    65,     5,     0,    68,    17,    16,    64,
   65,    86,     5,    24,     5,    32,    84,   129,    66,     1,
   64,    21,     0,    80,     0,     2,     0,    24,     1,    96,
   69,   129,     6,     0,    72,    17,    32,    64,   128,    16,
    4,    64,    16,     0,    69,    65,     5,     0,    68,    17,
   16,    64,    64,     6,     0,    88,    17,    96,    65,   128,
   18,     4,    72,    16,    32,     4,     1,    16,     4,     0,
};

/* Vector for locked state flags.  */
static const unsigned char sr71_cpu1_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cpu1_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cp1_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     2,     0,     2,     1,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     3};

/* Vector for state transitions.  */
static const unsigned char sr71_cp1_transitions[] ATTRIBUTE_UNUSED = {
    0,     1,     3,     0,     1,     4,     2,     0,     2,     4,
    4,     0,     3,     2,     4,     0};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cp1_state_alts[] ATTRIBUTE_UNUSED = {
    1,    64,    32,     1,     1,     0,    32,     1,     1,     0,
    0,     1,     1,    64,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cp1_min_issue_delay[] ATTRIBUTE_UNUSED = {
    4,    98};

/* Vector for locked state flags.  */
static const unsigned char sr71_cp1_dead_lock[] = {
    0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cp1_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_cp2_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     1,     1,     1,     2,     3,     3,
    1,     1,     4,     3,     3,     3,     3,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     5};

/* Vector for state transitions.  */
static const unsigned char sr71_cp2_transitions[] ATTRIBUTE_UNUSED = {
    0,     4,     6,     5,     1,     0,     1,     8,     8,     8,
    8,     2,     2,     8,     8,     8,     8,     3,     3,     8,
    8,     8,     8,     4,     4,     8,     8,     8,     8,     5,
    5,     8,     8,     8,     8,     0,     6,     8,     8,     8,
    8,     7,     7,     8,     8,     8,     8,     1};


#if AUTOMATON_STATE_ALTS
/* Vector for state insn alternatives.  */
static const unsigned char sr71_cp2_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     1,     1,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     1,     1,     0,
    0,     0,     0,     1,     1,     0,     0,     0,     0,     1,
    1,     0,     0,     0,     0,     1,     1,     0,     0,     0,
    0,     1,     1,     0,     0,     0,     0,     1};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_cp2_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     5,    85,    80,     4,    68,    64,     3,
   51,    48,     2,    34,    32,     1,    17,    16,     7,   119,
  112,     6,   102,    96};

/* Vector for locked state flags.  */
static const unsigned char sr71_cp2_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_cp2_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_fextra_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
    0,     0,     0,     3,     4,     5,     6,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     7};

/* Comb vector for state transitions.  */
static const unsigned char sr71_fextra_transitions[] ATTRIBUTE_UNUSED = {
    0,   179,   121,   177,   119,   191,     1,     0,     1,     2,
    3,     4,     5,     6,     7,     2,     3,     4,     5,     6,
    7,     8,     8,     9,    10,    11,    12,    13,    14,     9,
   10,    11,    12,    13,    14,    15,    15,    16,    17,    18,
   19,    20,    21,    16,    17,    18,    19,    20,    21,    22,
   22,    23,    24,    25,    26,    27,    28,    23,    24,    25,
   26,    27,    28,    29,    29,    30,    31,    32,    33,    34,
   35,    30,    31,    32,    33,    34,    35,    36,    36,    37,
   38,    39,    40,    41,    42,    37,    38,    39,    40,    41,
   42,    43,    43,    44,    45,    46,    47,    48,    49,    44,
   45,    46,    47,    48,    49,    50,    50,    51,    52,    53,
   54,    55,    56,    51,    52,    53,    54,    55,    56,    57,
   57,    58,    59,    60,    61,    62,    63,    58,    59,    60,
   61,    62,    63,    64,    64,    65,    66,    67,    68,    69,
   70,    65,    66,    67,    68,    69,    70,    71,    71,    72,
   73,    74,    75,    76,    77,    72,    73,    74,    75,    76,
   77,    78,    78,    79,    80,    81,    82,    83,    84,    79,
   80,    81,    82,    83,    84,    85,    85,    86,    87,    88,
   89,    90,    91,    86,    87,    88,    89,    90,    91,    92,
   92,    93,    94,    95,    96,    97,    98,    93,    94,    95,
   96,    97,    98,    99,    99,   100,   101,   102,   103,   104,
  105,   100,   101,   102,   103,   104,   105,   106,   106,   107,
  108,   109,   110,   111,   112,   107,   108,   109,   110,   111,
  112,   113,   113,   114,   115,   116,   117,   118,   119,   114,
  115,   116,   117,   118,   119,   120,   120,   121,   122,   123,
  124,   125,   126,   121,   122,   123,   124,   125,   126,   127,
  127,   128,   129,   130,   131,   132,   133,   128,   129,   130,
  131,   132,   133,   134,   134,   135,   136,   137,   138,   139,
  140,   135,   136,   137,   138,   139,   140,   141,   141,   142,
  143,   144,   145,   146,   147,   142,   143,   144,   145,   146,
  147,   148,   148,   149,   150,   151,   152,   153,   154,   149,
  150,   151,   152,   153,   154,   155,   155,   156,   157,   158,
  159,   160,   161,   156,   157,   158,   159,   160,   161,   162,
  162,   163,   164,   165,   166,   167,   168,   163,   164,   165,
  166,   167,   168,   169,   169,   170,   171,   172,   173,   174,
  175,   170,   171,   172,   173,   174,   175,   176,   176,   177,
  178,   179,   180,   181,   182,   177,   178,   179,   180,   181,
  182,   183,   183,   184,   185,   186,   187,   188,   189,   184,
  185,   186,   187,   188,   189,   190,   190,   191,   192,   193,
  194,   195,   196,   191,   192,   193,   194,   195,   196,   197,
  197,   198,   199,   200,   201,   202,   203,   198,   199,   200,
  201,   202,   203,   204,   204,   205,   206,   207,   208,   209,
  210,   205,   206,   207,   208,   209,   210,   211,   211,   212,
  213,   214,   215,   216,   217,   212,   213,   214,   215,   216,
  217,   218,   218,   219,   220,   221,   222,   223,   224,   219,
  220,   221,   222,   223,   224,   225,   225,   226,   227,   228,
  229,   230,   230,   226,   227,   228,   229,     0};

/* Check vector for state transitions.  */
static const unsigned char sr71_fextra_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
    3,     4,     5,     6,     7,     1,     2,     3,     4,     5,
    6,     7,     8,     9,    10,    11,    12,    13,    14,     8,
    9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
   19,    20,    21,    15,    16,    17,    18,    19,    20,    21,
   22,    23,    24,    25,    26,    27,    28,    22,    23,    24,
   25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    29,    30,    31,    32,    33,    34,    35,    36,    37,
   38,    39,    40,    41,    42,    36,    37,    38,    39,    40,
   41,    42,    43,    44,    45,    46,    47,    48,    49,    43,
   44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   54,    55,    56,    50,    51,    52,    53,    54,    55,    56,
   57,    58,    59,    60,    61,    62,    63,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    64,    65,    66,    67,    68,    69,    70,    71,    72,
   73,    74,    75,    76,    77,    71,    72,    73,    74,    75,
   76,    77,    78,    79,    80,    81,    82,    83,    84,    78,
   79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
   89,    90,    91,    85,    86,    87,    88,    89,    90,    91,
   92,    93,    94,    95,    96,    97,    98,    92,    93,    94,
   95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
  105,    99,   100,   101,   102,   103,   104,   105,   106,   107,
  108,   109,   110,   111,   112,   106,   107,   108,   109,   110,
  111,   112,   113,   114,   115,   116,   117,   118,   119,   113,
  114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
  124,   125,   126,   120,   121,   122,   123,   124,   125,   126,
  127,   128,   129,   130,   131,   132,   133,   127,   128,   129,
  130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
  140,   134,   135,   136,   137,   138,   139,   140,   141,   142,
  143,   144,   145,   146,   147,   141,   142,   143,   144,   145,
  146,   147,   148,   149,   150,   151,   152,   153,   154,   148,
  149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  159,   160,   161,   155,   156,   157,   158,   159,   160,   161,
  162,   163,   164,   165,   166,   167,   168,   162,   163,   164,
  165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
  175,   169,   170,   171,   172,   173,   174,   175,   176,   177,
  178,   179,   180,   181,   182,   176,   177,   178,   179,   180,
  181,   182,   183,   184,   185,   186,   187,   188,   189,   183,
  184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
  194,   195,   196,   190,   191,   192,   193,   194,   195,   196,
  197,   198,   199,   200,   201,   202,   203,   197,   198,   199,
  200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
  210,   204,   205,   206,   207,   208,   209,   210,   211,   212,
  213,   214,   215,   216,   217,   211,   212,   213,   214,   215,
  216,   217,   218,   219,   220,   221,   222,   223,   224,   218,
  219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
  229,   230,   230,   225,   226,   227,   228,   229};

/* Base vector for state transitions.  */
static const unsigned short sr71_fextra_base[] = {
    0,     8,     9,    10,    11,    12,    13,    14,    22,    23,
   24,    25,    26,    27,    28,    36,    37,    38,    39,    40,
   41,    42,    50,    51,    52,    53,    54,    55,    56,    64,
   65,    66,    67,    68,    69,    70,    78,    79,    80,    81,
   82,    83,    84,    92,    93,    94,    95,    96,    97,    98,
  106,   107,   108,   109,   110,   111,   112,   120,   121,   122,
  123,   124,   125,   126,   134,   135,   136,   137,   138,   139,
  140,   148,   149,   150,   151,   152,   153,   154,   162,   163,
  164,   165,   166,   167,   168,   176,   177,   178,   179,   180,
  181,   182,   190,   191,   192,   193,   194,   195,   196,   204,
  205,   206,   207,   208,   209,   210,   218,   219,   220,   221,
  222,   223,   224,   232,   233,   234,   235,   236,   237,   238,
  246,   247,   248,   249,   250,   251,   252,   260,   261,   262,
  263,   264,   265,   266,   274,   275,   276,   277,   278,   279,
  280,   288,   289,   290,   291,   292,   293,   294,   302,   303,
  304,   305,   306,   307,   308,   316,   317,   318,   319,   320,
  321,   322,   330,   331,   332,   333,   334,   335,   336,   344,
  345,   346,   347,   348,   349,   350,   358,   359,   360,   361,
  362,   363,   364,   372,   373,   374,   375,   376,   377,   378,
  386,   387,   388,   389,   390,   391,   392,   400,   401,   402,
  403,   404,   405,   406,   414,   415,   416,   417,   418,   419,
  420,   428,   429,   430,   431,   432,   433,   434,   442,   443,
  444,   445,   446,   447,   448,   456,   457,   458,   459,   460,
};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char sr71_fextra_state_alts[] ATTRIBUTE_UNUSED = {
    1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     0,     0,     1,     1,     1,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char sr71_fextra_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
    3,     4,     5,     6,     7,     1,     2,     3,     4,     5,
    6,     7,     8,     9,    10,    11,    12,    13,    14,     8,
    9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
   19,    20,    21,    15,    16,    17,    18,    19,    20,    21,
   22,    23,    24,    25,    26,    27,    28,    22,    23,    24,
   25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    29,    30,    31,    32,    33,    34,    35,    36,    37,
   38,    39,    40,    41,    42,    36,    37,    38,    39,    40,
   41,    42,    43,    44,    45,    46,    47,    48,    49,    43,
   44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   54,    55,    56,    50,    51,    52,    53,    54,    55,    56,
   57,    58,    59,    60,    61,    62,    63,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    64,    65,    66,    67,    68,    69,    70,    71,    72,
   73,    74,    75,    76,    77,    71,    72,    73,    74,    75,
   76,    77,    78,    79,    80,    81,    82,    83,    84,    78,
   79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
   89,    90,    91,    85,    86,    87,    88,    89,    90,    91,
   92,    93,    94,    95,    96,    97,    98,    92,    93,    94,
   95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
  105,    99,   100,   101,   102,   103,   104,   105,   106,   107,
  108,   109,   110,   111,   112,   106,   107,   108,   109,   110,
  111,   112,   113,   114,   115,   116,   117,   118,   119,   113,
  114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
  124,   125,   126,   120,   121,   122,   123,   124,   125,   126,
  127,   128,   129,   130,   131,   132,   133,   127,   128,   129,
  130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
  140,   134,   135,   136,   137,   138,   139,   140,   141,   142,
  143,   144,   145,   146,   147,   141,   142,   143,   144,   145,
  146,   147,   148,   149,   150,   151,   152,   153,   154,   148,
  149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
  159,   160,   161,   155,   156,   157,   158,   159,   160,   161,
  162,   163,   164,   165,   166,   167,   168,   162,   163,   164,
  165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
  175,   169,   170,   171,   172,   173,   174,   175,   176,   177,
  178,   179,   180,   181,   182,   176,   177,   178,   179,   180,
  181,   182,   183,   184,   185,   186,   187,   188,   189,   183,
  184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
  194,   195,   196,   190,   191,   192,   193,   194,   195,   196,
  197,   198,   199,   200,   201,   202,   203,   197,   198,   199,
  200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
  210,   204,   205,   206,   207,   208,   209,   210,   211,   212,
  213,   214,   215,   216,   217,   211,   212,   213,   214,   215,
  216,   217,   218,   219,   220,   221,   222,   223,   224,   218,
  219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
  229,   230,   230,   225,   226,   227,   228,   229};

/* Base vector for state insn alternatives.  */
static const unsigned short sr71_fextra_base_state_alts[] = {
    0,     8,     9,    10,    11,    12,    13,    14,    22,    23,
   24,    25,    26,    27,    28,    36,    37,    38,    39,    40,
   41,    42,    50,    51,    52,    53,    54,    55,    56,    64,
   65,    66,    67,    68,    69,    70,    78,    79,    80,    81,
   82,    83,    84,    92,    93,    94,    95,    96,    97,    98,
  106,   107,   108,   109,   110,   111,   112,   120,   121,   122,
  123,   124,   125,   126,   134,   135,   136,   137,   138,   139,
  140,   148,   149,   150,   151,   152,   153,   154,   162,   163,
  164,   165,   166,   167,   168,   176,   177,   178,   179,   180,
  181,   182,   190,   191,   192,   193,   194,   195,   196,   204,
  205,   206,   207,   208,   209,   210,   218,   219,   220,   221,
  222,   223,   224,   232,   233,   234,   235,   236,   237,   238,
  246,   247,   248,   249,   250,   251,   252,   260,   261,   262,
  263,   264,   265,   266,   274,   275,   276,   277,   278,   279,
  280,   288,   289,   290,   291,   292,   293,   294,   302,   303,
  304,   305,   306,   307,   308,   316,   317,   318,   319,   320,
  321,   322,   330,   331,   332,   333,   334,   335,   336,   344,
  345,   346,   347,   348,   349,   350,   358,   359,   360,   361,
  362,   363,   364,   372,   373,   374,   375,   376,   377,   378,
  386,   387,   388,   389,   390,   391,   392,   400,   401,   402,
  403,   404,   405,   406,   414,   415,   416,   417,   418,   419,
  420,   428,   429,   430,   431,   432,   433,   434,   442,   443,
  444,   445,   446,   447,   448,   456,   457,   458,   459,   460,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_fextra_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
  229,   229,   229,   229,   229,     0,     0,   228,   228,   228,
  228,   228,   228,     0,     0,   227,   227,   227,   227,   227,
  227,     0,     0,   226,   226,   226,   226,   226,   226,     0,
    0,   225,   225,   225,   225,   225,   225,     0,     0,   224,
  224,   224,   224,   224,   224,     0,     0,   223,   223,   223,
  223,   223,   223,     0,     0,   222,   222,   222,   222,   222,
  222,     0,     0,   221,   221,   221,   221,   221,   221,     0,
    0,   220,   220,   220,   220,   220,   220,     0,     0,   219,
  219,   219,   219,   219,   219,     0,     0,   218,   218,   218,
  218,   218,   218,     0,     0,   217,   217,   217,   217,   217,
  217,     0,     0,   216,   216,   216,   216,   216,   216,     0,
    0,   215,   215,   215,   215,   215,   215,     0,     0,   214,
  214,   214,   214,   214,   214,     0,     0,   213,   213,   213,
  213,   213,   213,     0,     0,   212,   212,   212,   212,   212,
  212,     0,     0,   211,   211,   211,   211,   211,   211,     0,
    0,   210,   210,   210,   210,   210,   210,     0,     0,   209,
  209,   209,   209,   209,   209,     0,     0,   208,   208,   208,
  208,   208,   208,     0,     0,   207,   207,   207,   207,   207,
  207,     0,     0,   206,   206,   206,   206,   206,   206,     0,
    0,   205,   205,   205,   205,   205,   205,     0,     0,   204,
  204,   204,   204,   204,   204,     0,     0,   203,   203,   203,
  203,   203,   203,     0,     0,   202,   202,   202,   202,   202,
  202,     0,     0,   201,   201,   201,   201,   201,   201,     0,
    0,   200,   200,   200,   200,   200,   200,     0,     0,   199,
  199,   199,   199,   199,   199,     0,     0,   198,   198,   198,
  198,   198,   198,     0,     0,   197,   197,   197,   197,   197,
  197,     0,     0,   196,   196,   196,   196,   196,   196,     0,
    0,   195,   195,   195,   195,   195,   195,     0,     0,   194,
  194,   194,   194,   194,   194,     0,     0,   193,   193,   193,
  193,   193,   193,     0,     0,   192,   192,   192,   192,   192,
  192,     0,     0,   191,   191,   191,   191,   191,   191,     0,
    0,   190,   190,   190,   190,   190,   190,     0,     0,   189,
  189,   189,   189,   189,   189,     0,     0,   188,   188,   188,
  188,   188,   188,     0,     0,   187,   187,   187,   187,   187,
  187,     0,     0,   186,   186,   186,   186,   186,   186,     0,
    0,   185,   185,   185,   185,   185,   185,     0,     0,   184,
  184,   184,   184,   184,   184,     0,     0,   183,   183,   183,
  183,   183,   183,     0,     0,   182,   182,   182,   182,   182,
  182,     0,     0,   181,   181,   181,   181,   181,   181,     0,
    0,   180,   180,   180,   180,   180,   180,     0,     0,   179,
  179,   179,   179,   179,   179,     0,     0,   178,   178,   178,
  178,   178,   178,     0,     0,   177,   177,   177,   177,   177,
  177,     0,     0,   176,   176,   176,   176,   176,   176,     0,
    0,   175,   175,   175,   175,   175,   175,     0,     0,   174,
  174,   174,   174,   174,   174,     0,     0,   173,   173,   173,
  173,   173,   173,     0,     0,   172,   172,   172,   172,   172,
  172,     0,     0,   171,   171,   171,   171,   171,   171,     0,
    0,   170,   170,   170,   170,   170,   170,     0,     0,   169,
  169,   169,   169,   169,   169,     0,     0,   168,   168,   168,
  168,   168,   168,     0,     0,   167,   167,   167,   167,   167,
  167,     0,     0,   166,   166,   166,   166,   166,   166,     0,
    0,   165,   165,   165,   165,   165,   165,     0,     0,   164,
  164,   164,   164,   164,   164,     0,     0,   163,   163,   163,
  163,   163,   163,     0,     0,   162,   162,   162,   162,   162,
  162,     0,     0,   161,   161,   161,   161,   161,   161,     0,
    0,   160,   160,   160,   160,   160,   160,     0,     0,   159,
  159,   159,   159,   159,   159,     0,     0,   158,   158,   158,
  158,   158,   158,     0,     0,   157,   157,   157,   157,   157,
  157,     0,     0,   156,   156,   156,   156,   156,   156,     0,
    0,   155,   155,   155,   155,   155,   155,     0,     0,   154,
  154,   154,   154,   154,   154,     0,     0,   153,   153,   153,
  153,   153,   153,     0,     0,   152,   152,   152,   152,   152,
  152,     0,     0,   151,   151,   151,   151,   151,   151,     0,
    0,   150,   150,   150,   150,   150,   150,     0,     0,   149,
  149,   149,   149,   149,   149,     0,     0,   148,   148,   148,
  148,   148,   148,     0,     0,   147,   147,   147,   147,   147,
  147,     0,     0,   146,   146,   146,   146,   146,   146,     0,
    0,   145,   145,   145,   145,   145,   145,     0,     0,   144,
  144,   144,   144,   144,   144,     0,     0,   143,   143,   143,
  143,   143,   143,     0,     0,   142,   142,   142,   142,   142,
  142,     0,     0,   141,   141,   141,   141,   141,   141,     0,
    0,   140,   140,   140,   140,   140,   140,     0,     0,   139,
  139,   139,   139,   139,   139,     0,     0,   138,   138,   138,
  138,   138,   138,     0,     0,   137,   137,   137,   137,   137,
  137,     0,     0,   136,   136,   136,   136,   136,   136,     0,
    0,   135,   135,   135,   135,   135,   135,     0,     0,   134,
  134,   134,   134,   134,   134,     0,     0,   133,   133,   133,
  133,   133,   133,     0,     0,   132,   132,   132,   132,   132,
  132,     0,     0,   131,   131,   131,   131,   131,   131,     0,
    0,   130,   130,   130,   130,   130,   130,     0,     0,   129,
  129,   129,   129,   129,   129,     0,     0,   128,   128,   128,
  128,   128,   128,     0,     0,   127,   127,   127,   127,   127,
  127,     0,     0,   126,   126,   126,   126,   126,   126,     0,
    0,   125,   125,   125,   125,   125,   125,     0,     0,   124,
  124,   124,   124,   124,   124,     0,     0,   123,   123,   123,
  123,   123,   123,     0,     0,   122,   122,   122,   122,   122,
  122,     0,     0,   121,   121,   121,   121,   121,   121,     0,
    0,   120,   120,   120,   120,   120,   120,     0,     0,   119,
  119,   119,   119,   119,   119,     0,     0,   118,   118,   118,
  118,   118,   118,     0,     0,   117,   117,   117,   117,   117,
  117,     0,     0,   116,   116,   116,   116,   116,   116,     0,
    0,   115,   115,   115,   115,   115,   115,     0,     0,   114,
  114,   114,   114,   114,   114,     0,     0,   113,   113,   113,
  113,   113,   113,     0,     0,   112,   112,   112,   112,   112,
  112,     0,     0,   111,   111,   111,   111,   111,   111,     0,
    0,   110,   110,   110,   110,   110,   110,     0,     0,   109,
  109,   109,   109,   109,   109,     0,     0,   108,   108,   108,
  108,   108,   108,     0,     0,   107,   107,   107,   107,   107,
  107,     0,     0,   106,   106,   106,   106,   106,   106,     0,
    0,   105,   105,   105,   105,   105,   105,     0,     0,   104,
  104,   104,   104,   104,   104,     0,     0,   103,   103,   103,
  103,   103,   103,     0,     0,   102,   102,   102,   102,   102,
  102,     0,     0,   101,   101,   101,   101,   101,   101,     0,
    0,   100,   100,   100,   100,   100,   100,     0,     0,    99,
   99,    99,    99,    99,    99,     0,     0,    98,    98,    98,
   98,    98,    98,     0,     0,    97,    97,    97,    97,    97,
   97,     0,     0,    96,    96,    96,    96,    96,    96,     0,
    0,    95,    95,    95,    95,    95,    95,     0,     0,    94,
   94,    94,    94,    94,    94,     0,     0,    93,    93,    93,
   93,    93,    93,     0,     0,    92,    92,    92,    92,    92,
   92,     0,     0,    91,    91,    91,    91,    91,    91,     0,
    0,    90,    90,    90,    90,    90,    90,     0,     0,    89,
   89,    89,    89,    89,    89,     0,     0,    88,    88,    88,
   88,    88,    88,     0,     0,    87,    87,    87,    87,    87,
   87,     0,     0,    86,    86,    86,    86,    86,    86,     0,
    0,    85,    85,    85,    85,    85,    85,     0,     0,    84,
   84,    84,    84,    84,    84,     0,     0,    83,    83,    83,
   83,    83,    83,     0,     0,    82,    82,    82,    82,    82,
   82,     0,     0,    81,    81,    81,    81,    81,    81,     0,
    0,    80,    80,    80,    80,    80,    80,     0,     0,    79,
   79,    79,    79,    79,    79,     0,     0,    78,    78,    78,
   78,    78,    78,     0,     0,    77,    77,    77,    77,    77,
   77,     0,     0,    76,    76,    76,    76,    76,    76,     0,
    0,    75,    75,    75,    75,    75,    75,     0,     0,    74,
   74,    74,    74,    74,    74,     0,     0,    73,    73,    73,
   73,    73,    73,     0,     0,    72,    72,    72,    72,    72,
   72,     0,     0,    71,    71,    71,    71,    71,    71,     0,
    0,    70,    70,    70,    70,    70,    70,     0,     0,    69,
   69,    69,    69,    69,    69,     0,     0,    68,    68,    68,
   68,    68,    68,     0,     0,    67,    67,    67,    67,    67,
   67,     0,     0,    66,    66,    66,    66,    66,    66,     0,
    0,    65,    65,    65,    65,    65,    65,     0,     0,    64,
   64,    64,    64,    64,    64,     0,     0,    63,    63,    63,
   63,    63,    63,     0,     0,    62,    62,    62,    62,    62,
   62,     0,     0,    61,    61,    61,    61,    61,    61,     0,
    0,    60,    60,    60,    60,    60,    60,     0,     0,    59,
   59,    59,    59,    59,    59,     0,     0,    58,    58,    58,
   58,    58,    58,     0,     0,    57,    57,    57,    57,    57,
   57,     0,     0,    56,    56,    56,    56,    56,    56,     0,
    0,    55,    55,    55,    55,    55,    55,     0,     0,    54,
   54,    54,    54,    54,    54,     0,     0,    53,    53,    53,
   53,    53,    53,     0,     0,    52,    52,    52,    52,    52,
   52,     0,     0,    51,    51,    51,    51,    51,    51,     0,
    0,    50,    50,    50,    50,    50,    50,     0,     0,    49,
   49,    49,    49,    49,    49,     0,     0,    48,    48,    48,
   48,    48,    48,     0,     0,    47,    47,    47,    47,    47,
   47,     0,     0,    46,    46,    46,    46,    46,    46,     0,
    0,    45,    45,    45,    45,    45,    45,     0,     0,    44,
   44,    44,    44,    44,    44,     0,     0,    43,    43,    43,
   43,    43,    43,     0,     0,    42,    42,    42,    42,    42,
   42,     0,     0,    41,    41,    41,    41,    41,    41,     0,
    0,    40,    40,    40,    40,    40,    40,     0,     0,    39,
   39,    39,    39,    39,    39,     0,     0,    38,    38,    38,
   38,    38,    38,     0,     0,    37,    37,    37,    37,    37,
   37,     0,     0,    36,    36,    36,    36,    36,    36,     0,
    0,    35,    35,    35,    35,    35,    35,     0,     0,    34,
   34,    34,    34,    34,    34,     0,     0,    33,    33,    33,
   33,    33,    33,     0,     0,    32,    32,    32,    32,    32,
   32,     0,     0,    31,    31,    31,    31,    31,    31,     0,
    0,    30,    30,    30,    30,    30,    30,     0,     0,    29,
   29,    29,    29,    29,    29,     0,     0,    28,    28,    28,
   28,    28,    28,     0,     0,    27,    27,    27,    27,    27,
   27,     0,     0,    26,    26,    26,    26,    26,    26,     0,
    0,    25,    25,    25,    25,    25,    25,     0,     0,    24,
   24,    24,    24,    24,    24,     0,     0,    23,    23,    23,
   23,    23,    23,     0,     0,    22,    22,    22,    22,    22,
   22,     0,     0,    21,    21,    21,    21,    21,    21,     0,
    0,    20,    20,    20,    20,    20,    20,     0,     0,    19,
   19,    19,    19,    19,    19,     0,     0,    18,    18,    18,
   18,    18,    18,     0,     0,    17,    17,    17,    17,    17,
   17,     0,     0,    16,    16,    16,    16,    16,    16,     0,
    0,    15,    15,    15,    15,    15,    15,     0,     0,    14,
   14,    14,    14,    14,    14,     0,     0,    13,    13,    13,
   13,    13,    13,     0,     0,    12,    12,    12,    12,    12,
   12,     0,     0,    11,    11,    11,    11,    11,    11,     0,
    0,    10,    10,    10,    10,    10,    10,     0,     0,     9,
    9,     9,     9,     9,     9,     0,     0,     8,     8,     8,
    8,     8,     8,     0,     0,     7,     7,     7,     7,     7,
    7,     0,     0,     6,     6,     6,     6,     6,     6,     0,
    0,     5,     5,     5,     5,     5,     5,     0,     0,     4,
    4,     4,     4,     4,     4,     0,     0,     3,     3,     3,
    3,     3,     3,     0,     0,     2,     2,     2,     2,     2,
    2,     0,     0,     1,     1,     1,     1,     1,     1,     0,
};

/* Vector for locked state flags.  */
static const unsigned char sr71_fextra_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_fextra_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char sr71_imacc_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     2,     3,     4,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     5};

/* Comb vector for state transitions.  */
static const unsigned char sr71_imacc_transitions[] ATTRIBUTE_UNUSED = {
    0,    70,    68,    33,     1,     0,     1,     2,     3,     4,
    5,     2,     3,     4,     5,     6,     6,     7,     8,     9,
   10,     7,     8,     9,    10,    11,    11,    12,    13,    14,
   15,    12,    13,    14,    15,    16,    16,    17,    18,    19,
   20,    17,    18,    19,    20,    21,    21,    22,    23,    24,
   25,    22,    23,    24,    25,    26,    26,    27,    28,    29,
   30,    27,    28,    29,    30,    31,    31,    32,    33,    34,
   35,    32,    33,    34,    35,    36,    36,    37,    38,    39,
   40,    37,    38,    39,    40,    41,    41,    42,    43,    44,
   45,    42,    43,    44,    45,    46,    46,    47,    48,    49,
   50,    47,    48,    49,    50,    51,    51,    52,    53,    54,
   55,    52,    53,    54,    55,    56,    56,    57,    58,    59,
   60,    57,    58,    59,    60,    61,    61,    62,    63,    64,
   65,    62,    63,    64,    65,    66,    66,    67,    68,    69,
   70,    67,    68,    69,    70,     0};

/* Check vector for state transitions.  */
static const unsigned char sr71_imacc_check[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    66,    67,    68,    69,    70};

/* Base vector for state transitions.  */
static const unsigned char sr71_imacc_base[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138,   139,
  140};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char sr71_imacc_state_alts[] ATTRIBUTE_UNUSED = {
    1,     4,     4,     4,     4,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char sr71_imacc_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
    5,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,     6,     7,     8,     9,    10,    11,    12,    13,    14,
   15,    11,    12,    13,    14,    15,    16,    17,    18,    19,
   20,    16,    17,    18,    19,    20,    21,    22,    23,    24,
   25,    21,    22,    23,    24,    25,    26,    27,    28,    29,
   30,    26,    27,    28,    29,    30,    31,    32,    33,    34,
   35,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   45,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    56,    57,    58,    59,    60,    61,    62,    63,    64,
   65,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    66,    67,    68,    69,    70};

/* Base vector for state insn alternatives.  */
static const unsigned char sr71_imacc_base_state_alts[] = {
    0,     6,     7,     8,     9,    10,    16,    17,    18,    19,
   20,    26,    27,    28,    29,    30,    36,    37,    38,    39,
   40,    46,    47,    48,    49,    50,    56,    57,    58,    59,
   60,    66,    67,    68,    69,    70,    76,    77,    78,    79,
   80,    86,    87,    88,    89,    90,    96,    97,    98,    99,
  100,   106,   107,   108,   109,   110,   116,   117,   118,   119,
  120,   126,   127,   128,   129,   130,   136,   137,   138,   139,
  140};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char sr71_imacc_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,    70,    70,    70,
   70,     0,     0,    69,    69,    69,    69,     0,     0,    68,
   68,    68,    68,     0,     0,    67,    67,    67,    67,     0,
    0,    66,    66,    66,    66,     0,     0,    65,    65,    65,
   65,     0,     0,    64,    64,    64,    64,     0,     0,    63,
   63,    63,    63,     0,     0,    62,    62,    62,    62,     0,
    0,    61,    61,    61,    61,     0,     0,    60,    60,    60,
   60,     0,     0,    59,    59,    59,    59,     0,     0,    58,
   58,    58,    58,     0,     0,    57,    57,    57,    57,     0,
    0,    56,    56,    56,    56,     0,     0,    55,    55,    55,
   55,     0,     0,    54,    54,    54,    54,     0,     0,    53,
   53,    53,    53,     0,     0,    52,    52,    52,    52,     0,
    0,    51,    51,    51,    51,     0,     0,    50,    50,    50,
   50,     0,     0,    49,    49,    49,    49,     0,     0,    48,
   48,    48,    48,     0,     0,    47,    47,    47,    47,     0,
    0,    46,    46,    46,    46,     0,     0,    45,    45,    45,
   45,     0,     0,    44,    44,    44,    44,     0,     0,    43,
   43,    43,    43,     0,     0,    42,    42,    42,    42,     0,
    0,    41,    41,    41,    41,     0,     0,    40,    40,    40,
   40,     0,     0,    39,    39,    39,    39,     0,     0,    38,
   38,    38,    38,     0,     0,    37,    37,    37,    37,     0,
    0,    36,    36,    36,    36,     0,     0,    35,    35,    35,
   35,     0,     0,    34,    34,    34,    34,     0,     0,    33,
   33,    33,    33,     0,     0,    32,    32,    32,    32,     0,
    0,    31,    31,    31,    31,     0,     0,    30,    30,    30,
   30,     0,     0,    29,    29,    29,    29,     0,     0,    28,
   28,    28,    28,     0,     0,    27,    27,    27,    27,     0,
    0,    26,    26,    26,    26,     0,     0,    25,    25,    25,
   25,     0,     0,    24,    24,    24,    24,     0,     0,    23,
   23,    23,    23,     0,     0,    22,    22,    22,    22,     0,
    0,    21,    21,    21,    21,     0,     0,    20,    20,    20,
   20,     0,     0,    19,    19,    19,    19,     0,     0,    18,
   18,    18,    18,     0,     0,    17,    17,    17,    17,     0,
    0,    16,    16,    16,    16,     0,     0,    15,    15,    15,
   15,     0,     0,    14,    14,    14,    14,     0,     0,    13,
   13,    13,    13,     0,     0,    12,    12,    12,    12,     0,
    0,    11,    11,    11,    11,     0,     0,    10,    10,    10,
   10,     0,     0,     9,     9,     9,     9,     0,     0,     8,
    8,     8,     8,     0,     0,     7,     7,     7,     7,     0,
    0,     6,     6,     6,     6,     0,     0,     5,     5,     5,
    5,     0,     0,     4,     4,     4,     4,     0,     0,     3,
    3,     3,     3,     0,     0,     2,     2,     2,     2,     0,
    0,     1,     1,     1,     1,     0};

/* Vector for locked state flags.  */
static const unsigned char sr71_imacc_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char sr71_imacc_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */


#define DFA__ADVANCE_CYCLE 258

struct DFA_chip
{
  unsigned char alu_automaton_state;
  unsigned char imuldiv_automaton_state;
  unsigned char vr4130_main_automaton_state;
  unsigned char vr4130_muldiv_automaton_state;
  unsigned char vr4130_mulpre_automaton_state;
  unsigned char vr54_automaton_state;
  unsigned char vr55_automaton_state;
  unsigned char rm7000_other_automaton_state;
  unsigned char rm7000_fdiv_automaton_state;
  unsigned char rm7000_idiv_automaton_state;
  unsigned char rm9k_main_automaton_state;
  unsigned char rm9k_imul_automaton_state;
  unsigned char rm9k_fdiv_automaton_state;
  unsigned char sb1_cpu_automaton_state;
  unsigned char sb1_cpu_div_automaton_state;
  unsigned char sr71_cpu_automaton_state;
  unsigned char sr71_cpu1_automaton_state;
  unsigned char sr71_cp1_automaton_state;
  unsigned char sr71_cp2_automaton_state;
  unsigned char sr71_fextra_automaton_state;
  unsigned char sr71_imacc_automaton_state;
};


int max_insn_queue_index = 255;

static int
internal_min_issue_delay (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;
  int res = -1;

  switch (insn_code)
    {
    case 0: /* r3k_load */
    case 3: /* r3k_fmove */
    case 4: /* r3k_fadd */
    case 5: /* r3k_fmul_single */
    case 6: /* r3k_fmul_double */
    case 7: /* r3k_fdiv_single */
    case 8: /* r3k_fdiv_double */
    case 11: /* r4100_load */
    case 28: /* r4300_load */
    case 43: /* r4600_load */
    case 44: /* r4600_fmove */
    case 45: /* r4600_fmul_single */
    case 46: /* r4600_fdiv_single */
    case 47: /* r4600_fdiv_double */
    case 48: /* r4600_fsqrt_single */
    case 49: /* r4600_fsqrt_double */
    case 50: /* r5k_load */
    case 55: /* r5k_fmove */
    case 56: /* r5k_fmul_single */
    case 57: /* r5k_fmul_double */
    case 58: /* r5k_fdiv_single */
    case 59: /* r5k_fsqrt_double */
    case 115: /* r6k_fcmp */
    case 116: /* r6k_fadd */
    case 117: /* r6k_fmul_single */
    case 118: /* r6k_fmul_double */
    case 119: /* r6k_fdiv_single */
    case 120: /* r6k_fdiv_double */
    case 239: /* generic_alu */
    case 240: /* generic_load */
    case 241: /* generic_store */
    case 242: /* generic_xfer */
    case 243: /* generic_branch */
    case 247: /* generic_fcvt */
    case 248: /* generic_fmove */
    case 249: /* generic_fcmp */
    case 250: /* generic_fadd */
    case 251: /* generic_fmul_single */
    case 252: /* generic_fmul_double */
    case 253: /* generic_fdiv_single */
    case 254: /* generic_fdiv_double */
    case 255: /* generic_fsqrt_single */
    case 256: /* generic_fsqrt_double */
    case 257: /* generic_frecip_fsqrt_step */

      temp = alu_min_issue_delay [(alu_translate [insn_code] + chip->alu_automaton_state * 3) / 8];
      temp = (temp >> (8 - (alu_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 1: /* r3k_imul */
    case 2: /* r3k_idiv */
    case 9: /* r4k_imul */
    case 10: /* r4k_idiv */
    case 12: /* r4100_imul_si */
    case 13: /* r4100_imul_di */
    case 14: /* r4100_idiv_si */
    case 15: /* r4100_idiv_di */
    case 29: /* r4300_imul_si */
    case 30: /* r4300_imul_di */
    case 31: /* r4300_idiv_si */
    case 32: /* r4300_idiv_di */
    case 33: /* r4300_fmove */
    case 34: /* r4300_fadd */
    case 35: /* r4300_fmul_single */
    case 36: /* r4300_fmul_double */
    case 37: /* r4300_fdiv_single */
    case 38: /* r4300_fdiv_double */
    case 39: /* r4600_imul */
    case 40: /* r4600_idiv */
    case 41: /* r4650_imul */
    case 42: /* r4650_idiv */
    case 51: /* r5k_imul_si */
    case 52: /* r5k_imul_di */
    case 53: /* r5k_idiv_si */
    case 54: /* r5k_idiv_di */
    case 244: /* generic_hilo */
    case 245: /* generic_imul */
    case 246: /* generic_idiv */

      temp = imuldiv_min_issue_delay [imuldiv_translate [insn_code] + chip->imuldiv_automaton_state * 21];
      res = temp;
      break;

    case 16: /* vr4130_multi */

      temp = vr4130_muldiv_min_issue_delay [vr4130_muldiv_translate [insn_code] + chip->vr4130_muldiv_automaton_state * 6];
      res = temp;

      temp = vr4130_main_min_issue_delay [(vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5) / 8];
      temp = (temp >> (8 - (vr4130_main_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;

    case 17: /* vr4130_int */
    case 18: /* vr4130_load */
    case 19: /* vr4130_store */
    case 27: /* vr4130_branch */

      temp = vr4130_main_min_issue_delay [(vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5) / 8];
      temp = (temp >> (8 - (vr4130_main_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 20: /* vr4130_mfhilo */
    case 21: /* vr4130_mthilo */
    case 24: /* vr4130_macc */
    case 25: /* vr4130_divsi */
    case 26: /* vr4130_divdi */

      temp = vr4130_muldiv_min_issue_delay [vr4130_muldiv_translate [insn_code] + chip->vr4130_muldiv_automaton_state * 6];
      res = temp;
      break;

    case 22: /* vr4130_mulsi */
    case 23: /* vr4130_muldi */

      temp = vr4130_mulpre_min_issue_delay [(vr4130_mulpre_translate [insn_code] + chip->vr4130_mulpre_automaton_state * 4) / 2];
      temp = (temp >> (8 - (vr4130_mulpre_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;

      temp = vr4130_muldiv_min_issue_delay [vr4130_muldiv_translate [insn_code] + chip->vr4130_muldiv_automaton_state * 6];
      if (temp > res)
        res = temp;
      break;

    case 60: /* ir_vr54_unknown */
    case 61: /* ir_vr54_branch */
    case 62: /* ir_vr54_load */
    case 63: /* ir_vr54_store */
    case 64: /* ir_vr54_fstore */
    case 65: /* ir_vr54_condmove */
    case 66: /* ir_vr54_xfer */
    case 67: /* ir_vr54_hilo */
    case 68: /* ir_vr54_arith */
    case 69: /* ir_vr54_imul_si */
    case 70: /* ir_vr54_imul_di */
    case 71: /* ir_vr54_imadd_si */
    case 72: /* ir_vr54_idiv_si */
    case 73: /* ir_vr54_idiv_di */
    case 74: /* ir_vr54_fadd */
    case 75: /* ir_vr54_fmul_sf */
    case 76: /* ir_vr54_fmul_df */
    case 77: /* ir_vr54_fmadd_sf */
    case 78: /* ir_vr54_fmadd_df */
    case 79: /* ir_vr54_fdiv_sf */
    case 80: /* ir_vr54_fdiv_df */
    case 81: /* ir_vr54_fabs */
    case 82: /* ir_vr54_fcmp */
    case 83: /* ir_vr54_fcvt */
    case 84: /* ir_vr54_frsqrt_sf */
    case 85: /* ir_vr54_frsqrt_df */
    case 86: /* ir_vr54_multi */

      temp = vr54_min_issue_delay [(vr54_translate [insn_code] + chip->vr54_automaton_state * 6) / 8];
      temp = (temp >> (8 - (vr54_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 87: /* ir_vr55_unknown */
    case 88: /* ir_vr55_branch */
    case 89: /* ir_vr55_load */
    case 90: /* ir_vr55_store */
    case 91: /* ir_vr55_condmove */
    case 92: /* ir_vr55_xfer */
    case 93: /* ir_vr55_arith */
    case 94: /* ir_vr55_mthilo */
    case 95: /* ir_vr55_mfhilo */
    case 96: /* ir_vr55_imul_si */
    case 97: /* ir_vr55_imul_di */
    case 98: /* ir_vr55_imadd */
    case 99: /* ir_vr55_idiv_si */
    case 100: /* ir_vr55_idiv_di */
    case 101: /* ir_vr55_fadd */
    case 102: /* ir_vr55_fmul_sf */
    case 103: /* ir_vr55_fmul_df */
    case 104: /* ir_vr55_fmadd_sf */
    case 105: /* ir_vr55_fmadd_df */
    case 106: /* ir_vr55_fdiv_sf */
    case 107: /* ir_vr55_fdiv_df */
    case 108: /* ir_vr55_fabs */
    case 109: /* ir_vr55_fcmp */
    case 110: /* ir_vr55_fcvt_sf */
    case 111: /* ir_vr55_fcvt_df */
    case 112: /* ir_vr55_frsqrt_sf */
    case 113: /* ir_vr55_frsqrt_df */
    case 114: /* ir_vr55_multi */

      temp = vr55_min_issue_delay [(vr55_translate [insn_code] + chip->vr55_automaton_state * 9) / 2];
      temp = (temp >> (8 - (vr55_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;
      break;

    case 121: /* rm7_int_other */
    case 122: /* rm7_ld */
    case 123: /* rm7_st */
    case 127: /* rm7_impy_si_mul */
    case 129: /* rm7_mthilo */
    case 130: /* rm7_mfhilo */
    case 131: /* rm7_ixfer */
    case 132: /* rm7_ibr */
    case 133: /* rm7_fp_quick */
    case 134: /* rm7_fp_other */
    case 135: /* rm7_fp_cvt */
    case 142: /* rm7_unknown */

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;
      break;

    case 124: /* rm7_idiv_si */
    case 125: /* rm7_idiv_di */
    case 126: /* rm7_impy_si_mult */
    case 128: /* rm7_impy_di */

      temp = rm7000_idiv_min_issue_delay [rm7000_idiv_translate [insn_code] + chip->rm7000_idiv_automaton_state * 6];
      res = temp;

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;

    case 136: /* rm7_fp_divsqrt_df */
    case 137: /* rm7_fp_divsqrt_sf */
    case 138: /* rm7_fp_rsqrt_df */
    case 139: /* rm7_fp_rsqrt_sf */
    case 140: /* rm7_fp_mpy_sf */
    case 141: /* rm7_fp_mpy_df */

      temp = rm7000_fdiv_min_issue_delay [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
      res = temp;

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;

    case 143: /* rm9k_load */
    case 144: /* rm9k_store */
    case 145: /* rm9k_int */
    case 146: /* rm9k_int_cmove */
    case 147: /* rm9k_mulsi */
    case 151: /* rm9k_mfhilo */
    case 152: /* rm9k_mthilo */
    case 153: /* rm9k_xfer */
    case 154: /* rm9k_fquick */
    case 155: /* rm9k_fcmove */
    case 156: /* rm9k_fadd */
    case 157: /* rm9k_fmuls */
    case 158: /* rm9k_fmuld */
    case 161: /* rm9k_branch */
    case 162: /* rm9k_unknown */

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      res = temp;
      break;

    case 148: /* rm9k_muldi */
    case 149: /* rm9k_divsi */
    case 150: /* rm9k_divdi */

      temp = rm9k_imul_min_issue_delay [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
      res = temp;

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;
      break;

    case 159: /* rm9k_fdivs */
    case 160: /* rm9k_fdivd */

      temp = rm9k_fdiv_min_issue_delay [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
      res = temp;

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;
      break;

    case 163: /* ir_sb1_unknown */
    case 164: /* ir_sb1_branch */
    case 165: /* ir_sb1_load */
    case 166: /* ir_sb1_fpload */
    case 167: /* ir_sb1_fpload_32bitfp */
    case 168: /* ir_sb1_fpidxload */
    case 169: /* ir_sb1_fpidxload_32bitfp */
    case 170: /* ir_sb1_prefetchx */
    case 171: /* ir_sb1_store */
    case 172: /* ir_sb1_fpstore */
    case 173: /* ir_sb1_fpidxstore */
    case 174: /* ir_sb1_simple_alu */
    case 175: /* ir_sb1_alu */
    case 176: /* ir_sb1_alu_0 */
    case 177: /* ir_sb1_mfhi */
    case 178: /* ir_sb1_mflo */
    case 179: /* ir_sb1_mthilo */
    case 180: /* ir_sb1_mulsi */
    case 181: /* ir_sb1_muldi */
    case 184: /* ir_sb1_fpu_2pipes */
    case 185: /* ir_sb1_fpu_1pipe */
    case 186: /* ir_sb1_fpu_step2_2pipes */
    case 187: /* ir_sb1_fpu_step2_1pipe */
    case 188: /* ir_sb1_fmadd_2pipes */
    case 189: /* ir_sb1_fmadd_1pipe */
    case 190: /* ir_sb1_fcmp */
    case 191: /* ir_sb1_mtxfer */
    case 192: /* ir_sb1_mfxfer */
    case 193: /* ir_sb1_divsf_2pipes */
    case 194: /* ir_sb1_divsf_1pipe */
    case 195: /* ir_sb1_divdf_2pipes */
    case 196: /* ir_sb1_divdf_1pipe */
    case 197: /* ir_sb1_recipsf_2pipes */
    case 198: /* ir_sb1_recipsf_1pipe */
    case 199: /* ir_sb1_recipdf_2pipes */
    case 200: /* ir_sb1_recipdf_1pipe */
    case 201: /* ir_sb1_sqrtsf_2pipes */
    case 202: /* ir_sb1_sqrtsf_1pipe */
    case 203: /* ir_sb1_sqrtdf_2pipes */
    case 204: /* ir_sb1_sqrtdf_1pipe */
    case 205: /* ir_sb1_rsqrtsf_2pipes */
    case 206: /* ir_sb1_rsqrtsf_1pipe */
    case 207: /* ir_sb1_rsqrtdf_2pipes */
    case 208: /* ir_sb1_rsqrtdf_1pipe */

      temp = sb1_cpu_min_issue_delay [(sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13) / 4];
      temp = (temp >> (8 - (sb1_cpu_translate [insn_code] % 4 + 1) * 2)) & 3;
      res = temp;
      break;

    case 182: /* ir_sb1_divsi */
    case 183: /* ir_sb1_divdi */

      temp = sb1_cpu_div_min_issue_delay [sb1_cpu_div_translate [insn_code] + chip->sb1_cpu_div_automaton_state * 4];
      res = temp;

      temp = sb1_cpu_min_issue_delay [(sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13) / 4];
      temp = (temp >> (8 - (sb1_cpu_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;
      break;

    case 209: /* ir_sr70_unknown */
    case 237: /* ir_sr70_multi */

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;
      break;

    case 210: /* ir_sr70_branch */
    case 211: /* ir_sr70_load */
    case 212: /* ir_sr70_store */
    case 215: /* ir_sr70_condmove */
    case 218: /* ir_sr70_hilo */
    case 219: /* ir_sr70_arith */
    case 238: /* ir_sr70_nop */

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 213: /* ir_sr70_fload */
    case 214: /* ir_sr70_fstore */
    case 216: /* ir_sr70_xfer_from */
    case 217: /* ir_sr70_xfer_to */

      temp = sr71_cp1_min_issue_delay [(sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4) / 8];
      temp = (temp >> (8 - (sr71_cp1_translate [insn_code] % 8 + 1) * 1)) & 1;
      res = temp;

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 220: /* ir_sr70_imul_si */
    case 221: /* ir_sr70_imul_di */
    case 222: /* ir_sr70_idiv_si */
    case 223: /* ir_sr70_idiv_di */

      temp = sr71_imacc_min_issue_delay [sr71_imacc_translate [insn_code] + chip->sr71_imacc_automaton_state * 6];
      res = temp;

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 224: /* ir_sr70_fadd_sf */
    case 225: /* ir_sr70_fadd_df */
    case 226: /* ir_sr70_fmul_sf */
    case 227: /* ir_sr70_fmul_df */
    case 230: /* ir_sr70_fabs */
    case 231: /* ir_sr70_fcmp */
    case 232: /* ir_sr70_fcvt */

      temp = sr71_cp2_min_issue_delay [(sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6) / 2];
      temp = (temp >> (8 - (sr71_cp2_translate [insn_code] % 2 + 1) * 4)) & 15;
      res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 228: /* ir_sr70_fdiv_sf */
    case 229: /* ir_sr70_fdiv_df */
    case 233: /* ir_sr70_fsqrt_sf */
    case 234: /* ir_sr70_fsqrt_df */
    case 235: /* ir_sr70_frsqrt_sf */
    case 236: /* ir_sr70_frsqrt_df */

      temp = sr71_fextra_min_issue_delay [sr71_fextra_translate [insn_code] + chip->sr71_fextra_automaton_state * 8];
      res = temp;

      temp = sr71_cp2_min_issue_delay [(sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6) / 2];
      temp = (temp >> (8 - (sr71_cp2_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;
      break;

    case 258: /* $advance_cycle */

      temp = sr71_imacc_min_issue_delay [sr71_imacc_translate [insn_code] + chip->sr71_imacc_automaton_state * 6];
      res = temp;

      temp = sr71_fextra_min_issue_delay [sr71_fextra_translate [insn_code] + chip->sr71_fextra_automaton_state * 8];
      if (temp > res)
        res = temp;

      temp = sr71_cp2_min_issue_delay [(sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6) / 2];
      temp = (temp >> (8 - (sr71_cp2_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = sr71_cp1_min_issue_delay [(sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4) / 8];
      temp = (temp >> (8 - (sr71_cp1_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = sr71_cpu1_min_issue_delay [(sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7) / 4];
      temp = (temp >> (8 - (sr71_cpu1_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = sr71_cpu_min_issue_delay [(sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7) / 2];
      temp = (temp >> (8 - (sr71_cpu_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = sb1_cpu_div_min_issue_delay [sb1_cpu_div_translate [insn_code] + chip->sb1_cpu_div_automaton_state * 4];
      if (temp > res)
        res = temp;

      temp = sb1_cpu_min_issue_delay [(sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13) / 4];
      temp = (temp >> (8 - (sb1_cpu_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = rm9k_fdiv_min_issue_delay [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
      if (temp > res)
        res = temp;

      temp = rm9k_imul_min_issue_delay [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
      if (temp > res)
        res = temp;

      temp = rm9k_main_min_issue_delay [(rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7) / 4];
      temp = (temp >> (8 - (rm9k_main_translate [insn_code] % 4 + 1) * 2)) & 3;
      if (temp > res)
        res = temp;

      temp = rm7000_idiv_min_issue_delay [rm7000_idiv_translate [insn_code] + chip->rm7000_idiv_automaton_state * 6];
      if (temp > res)
        res = temp;

      temp = rm7000_fdiv_min_issue_delay [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
      if (temp > res)
        res = temp;

      temp = rm7000_other_min_issue_delay [(rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7) / 8];
      temp = (temp >> (8 - (rm7000_other_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = vr55_min_issue_delay [(vr55_translate [insn_code] + chip->vr55_automaton_state * 9) / 2];
      temp = (temp >> (8 - (vr55_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = vr54_min_issue_delay [(vr54_translate [insn_code] + chip->vr54_automaton_state * 6) / 8];
      temp = (temp >> (8 - (vr54_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = vr4130_mulpre_min_issue_delay [(vr4130_mulpre_translate [insn_code] + chip->vr4130_mulpre_automaton_state * 4) / 2];
      temp = (temp >> (8 - (vr4130_mulpre_translate [insn_code] % 2 + 1) * 4)) & 15;
      if (temp > res)
        res = temp;

      temp = vr4130_muldiv_min_issue_delay [vr4130_muldiv_translate [insn_code] + chip->vr4130_muldiv_automaton_state * 6];
      if (temp > res)
        res = temp;

      temp = vr4130_main_min_issue_delay [(vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5) / 8];
      temp = (temp >> (8 - (vr4130_main_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;

      temp = imuldiv_min_issue_delay [imuldiv_translate [insn_code] + chip->imuldiv_automaton_state * 21];
      if (temp > res)
        res = temp;

      temp = alu_min_issue_delay [(alu_translate [insn_code] + chip->alu_automaton_state * 3) / 8];
      temp = (temp >> (8 - (alu_translate [insn_code] % 8 + 1) * 1)) & 1;
      if (temp > res)
        res = temp;
      break;


    default:
      res = -1;
      break;
    }
  return res;
}

static int
internal_state_transition (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;

  switch (insn_code)
    {
    case 0: /* r3k_load */
    case 3: /* r3k_fmove */
    case 4: /* r3k_fadd */
    case 5: /* r3k_fmul_single */
    case 6: /* r3k_fmul_double */
    case 7: /* r3k_fdiv_single */
    case 8: /* r3k_fdiv_double */
    case 11: /* r4100_load */
    case 28: /* r4300_load */
    case 43: /* r4600_load */
    case 44: /* r4600_fmove */
    case 45: /* r4600_fmul_single */
    case 46: /* r4600_fdiv_single */
    case 47: /* r4600_fdiv_double */
    case 48: /* r4600_fsqrt_single */
    case 49: /* r4600_fsqrt_double */
    case 50: /* r5k_load */
    case 55: /* r5k_fmove */
    case 56: /* r5k_fmul_single */
    case 57: /* r5k_fmul_double */
    case 58: /* r5k_fdiv_single */
    case 59: /* r5k_fsqrt_double */
    case 115: /* r6k_fcmp */
    case 116: /* r6k_fadd */
    case 117: /* r6k_fmul_single */
    case 118: /* r6k_fmul_double */
    case 119: /* r6k_fdiv_single */
    case 120: /* r6k_fdiv_double */
    case 239: /* generic_alu */
    case 240: /* generic_load */
    case 241: /* generic_store */
    case 242: /* generic_xfer */
    case 243: /* generic_branch */
    case 247: /* generic_fcvt */
    case 248: /* generic_fmove */
    case 249: /* generic_fcmp */
    case 250: /* generic_fadd */
    case 251: /* generic_fmul_single */
    case 252: /* generic_fmul_double */
    case 253: /* generic_fdiv_single */
    case 254: /* generic_fdiv_double */
    case 255: /* generic_fsqrt_single */
    case 256: /* generic_fsqrt_double */
    case 257: /* generic_frecip_fsqrt_step */
      {

        temp = alu_transitions [alu_translate [insn_code] + chip->alu_automaton_state * 3];
        if (temp >= 2)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->alu_automaton_state = temp;
        return -1;
      }
    case 1: /* r3k_imul */
    case 2: /* r3k_idiv */
    case 9: /* r4k_imul */
    case 10: /* r4k_idiv */
    case 12: /* r4100_imul_si */
    case 13: /* r4100_imul_di */
    case 14: /* r4100_idiv_si */
    case 15: /* r4100_idiv_di */
    case 29: /* r4300_imul_si */
    case 30: /* r4300_imul_di */
    case 31: /* r4300_idiv_si */
    case 32: /* r4300_idiv_di */
    case 33: /* r4300_fmove */
    case 34: /* r4300_fadd */
    case 35: /* r4300_fmul_single */
    case 36: /* r4300_fmul_double */
    case 37: /* r4300_fdiv_single */
    case 38: /* r4300_fdiv_double */
    case 39: /* r4600_imul */
    case 40: /* r4600_idiv */
    case 41: /* r4650_imul */
    case 42: /* r4650_idiv */
    case 51: /* r5k_imul_si */
    case 52: /* r5k_imul_di */
    case 53: /* r5k_idiv_si */
    case 54: /* r5k_idiv_di */
    case 244: /* generic_hilo */
    case 245: /* generic_imul */
    case 246: /* generic_idiv */
      {

        temp = imuldiv_base [chip->imuldiv_automaton_state] + imuldiv_translate [insn_code];
        if (imuldiv_check [temp] != chip->imuldiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->imuldiv_automaton_state = imuldiv_transitions [temp];
        return -1;
      }
    case 16: /* vr4130_multi */
      {
        unsigned char _vr4130_muldiv_automaton_state;

        temp = vr4130_muldiv_base [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check [temp] != chip->vr4130_muldiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr4130_muldiv_automaton_state = vr4130_muldiv_transitions [temp];

        temp = vr4130_main_transitions [vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5];
        if (temp >= 6)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr4130_main_automaton_state = temp;
        chip->vr4130_muldiv_automaton_state = _vr4130_muldiv_automaton_state;
        return -1;
      }
    case 17: /* vr4130_int */
    case 18: /* vr4130_load */
    case 19: /* vr4130_store */
    case 27: /* vr4130_branch */
      {

        temp = vr4130_main_transitions [vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5];
        if (temp >= 6)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr4130_main_automaton_state = temp;
        return -1;
      }
    case 20: /* vr4130_mfhilo */
    case 21: /* vr4130_mthilo */
    case 24: /* vr4130_macc */
    case 25: /* vr4130_divsi */
    case 26: /* vr4130_divdi */
      {

        temp = vr4130_muldiv_base [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check [temp] != chip->vr4130_muldiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr4130_muldiv_automaton_state = vr4130_muldiv_transitions [temp];
        return -1;
      }
    case 22: /* vr4130_mulsi */
    case 23: /* vr4130_muldi */
      {
        unsigned char _vr4130_mulpre_automaton_state;

        temp = vr4130_mulpre_transitions [vr4130_mulpre_translate [insn_code] + chip->vr4130_mulpre_automaton_state * 4];
        if (temp >= 5)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr4130_mulpre_automaton_state = temp;

        temp = vr4130_muldiv_base [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check [temp] != chip->vr4130_muldiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr4130_muldiv_automaton_state = vr4130_muldiv_transitions [temp];
        chip->vr4130_mulpre_automaton_state = _vr4130_mulpre_automaton_state;
        return -1;
      }
    case 60: /* ir_vr54_unknown */
    case 61: /* ir_vr54_branch */
    case 62: /* ir_vr54_load */
    case 63: /* ir_vr54_store */
    case 64: /* ir_vr54_fstore */
    case 65: /* ir_vr54_condmove */
    case 66: /* ir_vr54_xfer */
    case 67: /* ir_vr54_hilo */
    case 68: /* ir_vr54_arith */
    case 69: /* ir_vr54_imul_si */
    case 70: /* ir_vr54_imul_di */
    case 71: /* ir_vr54_imadd_si */
    case 72: /* ir_vr54_idiv_si */
    case 73: /* ir_vr54_idiv_di */
    case 74: /* ir_vr54_fadd */
    case 75: /* ir_vr54_fmul_sf */
    case 76: /* ir_vr54_fmul_df */
    case 77: /* ir_vr54_fmadd_sf */
    case 78: /* ir_vr54_fmadd_df */
    case 79: /* ir_vr54_fdiv_sf */
    case 80: /* ir_vr54_fdiv_df */
    case 81: /* ir_vr54_fabs */
    case 82: /* ir_vr54_fcmp */
    case 83: /* ir_vr54_fcvt */
    case 84: /* ir_vr54_frsqrt_sf */
    case 85: /* ir_vr54_frsqrt_df */
    case 86: /* ir_vr54_multi */
      {

        temp = vr54_transitions [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        if (temp >= 12)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr54_automaton_state = temp;
        return -1;
      }
    case 87: /* ir_vr55_unknown */
    case 88: /* ir_vr55_branch */
    case 89: /* ir_vr55_load */
    case 90: /* ir_vr55_store */
    case 91: /* ir_vr55_condmove */
    case 92: /* ir_vr55_xfer */
    case 93: /* ir_vr55_arith */
    case 94: /* ir_vr55_mthilo */
    case 95: /* ir_vr55_mfhilo */
    case 96: /* ir_vr55_imul_si */
    case 97: /* ir_vr55_imul_di */
    case 98: /* ir_vr55_imadd */
    case 99: /* ir_vr55_idiv_si */
    case 100: /* ir_vr55_idiv_di */
    case 101: /* ir_vr55_fadd */
    case 102: /* ir_vr55_fmul_sf */
    case 103: /* ir_vr55_fmul_df */
    case 104: /* ir_vr55_fmadd_sf */
    case 105: /* ir_vr55_fmadd_df */
    case 106: /* ir_vr55_fdiv_sf */
    case 107: /* ir_vr55_fdiv_df */
    case 108: /* ir_vr55_fabs */
    case 109: /* ir_vr55_fcmp */
    case 110: /* ir_vr55_fcvt_sf */
    case 111: /* ir_vr55_fcvt_df */
    case 112: /* ir_vr55_frsqrt_sf */
    case 113: /* ir_vr55_frsqrt_df */
    case 114: /* ir_vr55_multi */
      {

        temp = vr55_transitions [vr55_translate [insn_code] + chip->vr55_automaton_state * 9];
        if (temp >= 120)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->vr55_automaton_state = temp;
        return -1;
      }
    case 121: /* rm7_int_other */
    case 122: /* rm7_ld */
    case 123: /* rm7_st */
    case 127: /* rm7_impy_si_mul */
    case 129: /* rm7_mthilo */
    case 130: /* rm7_mfhilo */
    case 131: /* rm7_ixfer */
    case 132: /* rm7_ibr */
    case 133: /* rm7_fp_quick */
    case 134: /* rm7_fp_other */
    case 135: /* rm7_fp_cvt */
    case 142: /* rm7_unknown */
      {

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm7000_other_automaton_state = temp;
        return -1;
      }
    case 124: /* rm7_idiv_si */
    case 125: /* rm7_idiv_di */
    case 126: /* rm7_impy_si_mult */
    case 128: /* rm7_impy_di */
      {
        unsigned char _rm7000_idiv_automaton_state;

        temp = rm7000_idiv_base [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check [temp] != chip->rm7000_idiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_idiv_automaton_state = rm7000_idiv_transitions [temp];

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm7000_other_automaton_state = temp;
        chip->rm7000_idiv_automaton_state = _rm7000_idiv_automaton_state;
        return -1;
      }
    case 136: /* rm7_fp_divsqrt_df */
    case 137: /* rm7_fp_divsqrt_sf */
    case 138: /* rm7_fp_rsqrt_df */
    case 139: /* rm7_fp_rsqrt_sf */
    case 140: /* rm7_fp_mpy_sf */
    case 141: /* rm7_fp_mpy_df */
      {
        unsigned char _rm7000_fdiv_automaton_state;

        temp = rm7000_fdiv_transitions [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        if (temp >= 207)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_fdiv_automaton_state = temp;

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm7000_other_automaton_state = temp;
        chip->rm7000_fdiv_automaton_state = _rm7000_fdiv_automaton_state;
        return -1;
      }
    case 143: /* rm9k_load */
    case 144: /* rm9k_store */
    case 145: /* rm9k_int */
    case 146: /* rm9k_int_cmove */
    case 147: /* rm9k_mulsi */
    case 151: /* rm9k_mfhilo */
    case 152: /* rm9k_mthilo */
    case 153: /* rm9k_xfer */
    case 154: /* rm9k_fquick */
    case 155: /* rm9k_fcmove */
    case 156: /* rm9k_fadd */
    case 157: /* rm9k_fmuls */
    case 158: /* rm9k_fmuld */
    case 161: /* rm9k_branch */
    case 162: /* rm9k_unknown */
      {

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm9k_main_automaton_state = temp;
        return -1;
      }
    case 148: /* rm9k_muldi */
    case 149: /* rm9k_divsi */
    case 150: /* rm9k_divdi */
      {
        unsigned char _rm9k_imul_automaton_state;

        temp = rm9k_imul_transitions [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        if (temp >= 71)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_imul_automaton_state = temp;

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm9k_main_automaton_state = temp;
        chip->rm9k_imul_automaton_state = _rm9k_imul_automaton_state;
        return -1;
      }
    case 159: /* rm9k_fdivs */
    case 160: /* rm9k_fdivd */
      {
        unsigned char _rm9k_fdiv_automaton_state;

        temp = rm9k_fdiv_transitions [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        if (temp >= 38)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_fdiv_automaton_state = temp;

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->rm9k_main_automaton_state = temp;
        chip->rm9k_fdiv_automaton_state = _rm9k_fdiv_automaton_state;
        return -1;
      }
    case 163: /* ir_sb1_unknown */
    case 164: /* ir_sb1_branch */
    case 165: /* ir_sb1_load */
    case 166: /* ir_sb1_fpload */
    case 167: /* ir_sb1_fpload_32bitfp */
    case 168: /* ir_sb1_fpidxload */
    case 169: /* ir_sb1_fpidxload_32bitfp */
    case 170: /* ir_sb1_prefetchx */
    case 171: /* ir_sb1_store */
    case 172: /* ir_sb1_fpstore */
    case 173: /* ir_sb1_fpidxstore */
    case 174: /* ir_sb1_simple_alu */
    case 175: /* ir_sb1_alu */
    case 176: /* ir_sb1_alu_0 */
    case 177: /* ir_sb1_mfhi */
    case 178: /* ir_sb1_mflo */
    case 179: /* ir_sb1_mthilo */
    case 180: /* ir_sb1_mulsi */
    case 181: /* ir_sb1_muldi */
    case 184: /* ir_sb1_fpu_2pipes */
    case 185: /* ir_sb1_fpu_1pipe */
    case 186: /* ir_sb1_fpu_step2_2pipes */
    case 187: /* ir_sb1_fpu_step2_1pipe */
    case 188: /* ir_sb1_fmadd_2pipes */
    case 189: /* ir_sb1_fmadd_1pipe */
    case 190: /* ir_sb1_fcmp */
    case 191: /* ir_sb1_mtxfer */
    case 192: /* ir_sb1_mfxfer */
    case 193: /* ir_sb1_divsf_2pipes */
    case 194: /* ir_sb1_divsf_1pipe */
    case 195: /* ir_sb1_divdf_2pipes */
    case 196: /* ir_sb1_divdf_1pipe */
    case 197: /* ir_sb1_recipsf_2pipes */
    case 198: /* ir_sb1_recipsf_1pipe */
    case 199: /* ir_sb1_recipdf_2pipes */
    case 200: /* ir_sb1_recipdf_1pipe */
    case 201: /* ir_sb1_sqrtsf_2pipes */
    case 202: /* ir_sb1_sqrtsf_1pipe */
    case 203: /* ir_sb1_sqrtdf_2pipes */
    case 204: /* ir_sb1_sqrtdf_1pipe */
    case 205: /* ir_sb1_rsqrtsf_2pipes */
    case 206: /* ir_sb1_rsqrtsf_1pipe */
    case 207: /* ir_sb1_rsqrtdf_2pipes */
    case 208: /* ir_sb1_rsqrtdf_1pipe */
      {

        temp = sb1_cpu_transitions [sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13];
        if (temp >= 32)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sb1_cpu_automaton_state = temp;
        return -1;
      }
    case 182: /* ir_sb1_divsi */
    case 183: /* ir_sb1_divdi */
      {
        unsigned char _sb1_cpu_div_automaton_state;

        temp = sb1_cpu_div_transitions [sb1_cpu_div_translate [insn_code] + chip->sb1_cpu_div_automaton_state * 4];
        if (temp >= 65)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sb1_cpu_div_automaton_state = temp;

        temp = sb1_cpu_transitions [sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13];
        if (temp >= 32)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sb1_cpu_automaton_state = temp;
        chip->sb1_cpu_div_automaton_state = _sb1_cpu_div_automaton_state;
        return -1;
      }
    case 209: /* ir_sr70_unknown */
    case 237: /* ir_sr70_multi */
      {

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        return -1;
      }
    case 210: /* ir_sr70_branch */
    case 211: /* ir_sr70_load */
    case 212: /* ir_sr70_store */
    case 215: /* ir_sr70_condmove */
    case 218: /* ir_sr70_hilo */
    case 219: /* ir_sr70_arith */
    case 238: /* ir_sr70_nop */
      {
        unsigned char _sr71_cpu1_automaton_state;

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        return -1;
      }
    case 213: /* ir_sr70_fload */
    case 214: /* ir_sr70_fstore */
    case 216: /* ir_sr70_xfer_from */
    case 217: /* ir_sr70_xfer_to */
      {
        unsigned char _sr71_cp1_automaton_state;
        unsigned char _sr71_cpu1_automaton_state;

        temp = sr71_cp1_transitions [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp1_automaton_state = temp;

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_cp1_automaton_state = _sr71_cp1_automaton_state;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        return -1;
      }
    case 220: /* ir_sr70_imul_si */
    case 221: /* ir_sr70_imul_di */
    case 222: /* ir_sr70_idiv_si */
    case 223: /* ir_sr70_idiv_di */
      {
        unsigned char _sr71_imacc_automaton_state;
        unsigned char _sr71_cpu1_automaton_state;

        temp = sr71_imacc_base [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check [temp] != chip->sr71_imacc_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_imacc_automaton_state = sr71_imacc_transitions [temp];

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_imacc_automaton_state = _sr71_imacc_automaton_state;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        return -1;
      }
    case 224: /* ir_sr70_fadd_sf */
    case 225: /* ir_sr70_fadd_df */
    case 226: /* ir_sr70_fmul_sf */
    case 227: /* ir_sr70_fmul_df */
    case 230: /* ir_sr70_fabs */
    case 231: /* ir_sr70_fcmp */
    case 232: /* ir_sr70_fcvt */
      {
        unsigned char _sr71_cp2_automaton_state;

        temp = sr71_cp2_transitions [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        if (temp >= 8)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp2_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_cp2_automaton_state = _sr71_cp2_automaton_state;
        return -1;
      }
    case 228: /* ir_sr70_fdiv_sf */
    case 229: /* ir_sr70_fdiv_df */
    case 233: /* ir_sr70_fsqrt_sf */
    case 234: /* ir_sr70_fsqrt_df */
    case 235: /* ir_sr70_frsqrt_sf */
    case 236: /* ir_sr70_frsqrt_df */
      {
        unsigned char _sr71_fextra_automaton_state;
        unsigned char _sr71_cp2_automaton_state;

        temp = sr71_fextra_base [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check [temp] != chip->sr71_fextra_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_fextra_automaton_state = sr71_fextra_transitions [temp];

        temp = sr71_cp2_transitions [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        if (temp >= 8)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp2_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->sr71_cpu_automaton_state = temp;
        chip->sr71_fextra_automaton_state = _sr71_fextra_automaton_state;
        chip->sr71_cp2_automaton_state = _sr71_cp2_automaton_state;
        return -1;
      }
    case 258: /* $advance_cycle */
      {
        unsigned char _sr71_imacc_automaton_state;
        unsigned char _sr71_fextra_automaton_state;
        unsigned char _sr71_cp2_automaton_state;
        unsigned char _sr71_cp1_automaton_state;
        unsigned char _sr71_cpu1_automaton_state;
        unsigned char _sr71_cpu_automaton_state;
        unsigned char _sb1_cpu_div_automaton_state;
        unsigned char _sb1_cpu_automaton_state;
        unsigned char _rm9k_fdiv_automaton_state;
        unsigned char _rm9k_imul_automaton_state;
        unsigned char _rm9k_main_automaton_state;
        unsigned char _rm7000_idiv_automaton_state;
        unsigned char _rm7000_fdiv_automaton_state;
        unsigned char _rm7000_other_automaton_state;
        unsigned char _vr55_automaton_state;
        unsigned char _vr54_automaton_state;
        unsigned char _vr4130_mulpre_automaton_state;
        unsigned char _vr4130_muldiv_automaton_state;
        unsigned char _vr4130_main_automaton_state;
        unsigned char _imuldiv_automaton_state;

        temp = sr71_imacc_base [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check [temp] != chip->sr71_imacc_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_imacc_automaton_state = sr71_imacc_transitions [temp];

        temp = sr71_fextra_base [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check [temp] != chip->sr71_fextra_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_fextra_automaton_state = sr71_fextra_transitions [temp];

        temp = sr71_cp2_transitions [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        if (temp >= 8)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp2_automaton_state = temp;

        temp = sr71_cp1_transitions [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cp1_automaton_state = temp;

        temp = sr71_cpu1_transitions [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        if (temp >= 80)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu1_automaton_state = temp;

        temp = sr71_cpu_transitions [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        if (temp >= 160)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sr71_cpu_automaton_state = temp;

        temp = sb1_cpu_div_transitions [sb1_cpu_div_translate [insn_code] + chip->sb1_cpu_div_automaton_state * 4];
        if (temp >= 65)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sb1_cpu_div_automaton_state = temp;

        temp = sb1_cpu_transitions [sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13];
        if (temp >= 32)
          return internal_min_issue_delay (insn_code, chip);
        else
          _sb1_cpu_automaton_state = temp;

        temp = rm9k_fdiv_transitions [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        if (temp >= 38)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_fdiv_automaton_state = temp;

        temp = rm9k_imul_transitions [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        if (temp >= 71)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_imul_automaton_state = temp;

        temp = rm9k_main_transitions [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        if (temp >= 24)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm9k_main_automaton_state = temp;

        temp = rm7000_idiv_base [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check [temp] != chip->rm7000_idiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_idiv_automaton_state = rm7000_idiv_transitions [temp];

        temp = rm7000_fdiv_transitions [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        if (temp >= 207)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_fdiv_automaton_state = temp;

        temp = rm7000_other_transitions [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        if (temp >= 4)
          return internal_min_issue_delay (insn_code, chip);
        else
          _rm7000_other_automaton_state = temp;

        temp = vr55_transitions [vr55_translate [insn_code] + chip->vr55_automaton_state * 9];
        if (temp >= 120)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr55_automaton_state = temp;

        temp = vr54_transitions [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        if (temp >= 12)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr54_automaton_state = temp;

        temp = vr4130_mulpre_transitions [vr4130_mulpre_translate [insn_code] + chip->vr4130_mulpre_automaton_state * 4];
        if (temp >= 5)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr4130_mulpre_automaton_state = temp;

        temp = vr4130_muldiv_base [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check [temp] != chip->vr4130_muldiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr4130_muldiv_automaton_state = vr4130_muldiv_transitions [temp];

        temp = vr4130_main_transitions [vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5];
        if (temp >= 6)
          return internal_min_issue_delay (insn_code, chip);
        else
          _vr4130_main_automaton_state = temp;

        temp = imuldiv_base [chip->imuldiv_automaton_state] + imuldiv_translate [insn_code];
        if (imuldiv_check [temp] != chip->imuldiv_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _imuldiv_automaton_state = imuldiv_transitions [temp];

        temp = alu_transitions [alu_translate [insn_code] + chip->alu_automaton_state * 3];
        if (temp >= 2)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->alu_automaton_state = temp;
        chip->sr71_imacc_automaton_state = _sr71_imacc_automaton_state;
        chip->sr71_fextra_automaton_state = _sr71_fextra_automaton_state;
        chip->sr71_cp2_automaton_state = _sr71_cp2_automaton_state;
        chip->sr71_cp1_automaton_state = _sr71_cp1_automaton_state;
        chip->sr71_cpu1_automaton_state = _sr71_cpu1_automaton_state;
        chip->sr71_cpu_automaton_state = _sr71_cpu_automaton_state;
        chip->sb1_cpu_div_automaton_state = _sb1_cpu_div_automaton_state;
        chip->sb1_cpu_automaton_state = _sb1_cpu_automaton_state;
        chip->rm9k_fdiv_automaton_state = _rm9k_fdiv_automaton_state;
        chip->rm9k_imul_automaton_state = _rm9k_imul_automaton_state;
        chip->rm9k_main_automaton_state = _rm9k_main_automaton_state;
        chip->rm7000_idiv_automaton_state = _rm7000_idiv_automaton_state;
        chip->rm7000_fdiv_automaton_state = _rm7000_fdiv_automaton_state;
        chip->rm7000_other_automaton_state = _rm7000_other_automaton_state;
        chip->vr55_automaton_state = _vr55_automaton_state;
        chip->vr54_automaton_state = _vr54_automaton_state;
        chip->vr4130_mulpre_automaton_state = _vr4130_mulpre_automaton_state;
        chip->vr4130_muldiv_automaton_state = _vr4130_muldiv_automaton_state;
        chip->vr4130_main_automaton_state = _vr4130_main_automaton_state;
        chip->imuldiv_automaton_state = _imuldiv_automaton_state;
        return -1;
      }

    default:
      return -1;
    }
}


static int *dfa_insn_codes;

static int dfa_insn_codes_length;

static void
dfa_insn_code_enlarge (int uid)
{
  int i = dfa_insn_codes_length;
  dfa_insn_codes_length = 2 * uid;
  dfa_insn_codes = xrealloc (dfa_insn_codes,
                 dfa_insn_codes_length * sizeof(int));
  for (; i < dfa_insn_codes_length; i++)
    dfa_insn_codes[i] = -1;
}

static inline int
dfa_insn_code (rtx insn)
{
  int uid = INSN_UID (insn);
  int insn_code;

  if (uid >= dfa_insn_codes_length)
    dfa_insn_code_enlarge (uid);

  insn_code = dfa_insn_codes[uid];
  if (insn_code < 0)
    {
      insn_code = internal_dfa_insn_code (insn);
      dfa_insn_codes[uid] = insn_code;
    }
  return insn_code;
}

int
state_transition (state_t state, rtx insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return -1;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_transition (insn_code, state);
}


#if AUTOMATON_STATE_ALTS

static int
internal_state_alts (int insn_code, struct DFA_chip *chip)
{
  int res;

  switch (insn_code)
    {
    case 0: /* r3k_load */
    case 3: /* r3k_fmove */
    case 4: /* r3k_fadd */
    case 5: /* r3k_fmul_single */
    case 6: /* r3k_fmul_double */
    case 7: /* r3k_fdiv_single */
    case 8: /* r3k_fdiv_double */
    case 11: /* r4100_load */
    case 28: /* r4300_load */
    case 43: /* r4600_load */
    case 44: /* r4600_fmove */
    case 45: /* r4600_fmul_single */
    case 46: /* r4600_fdiv_single */
    case 47: /* r4600_fdiv_double */
    case 48: /* r4600_fsqrt_single */
    case 49: /* r4600_fsqrt_double */
    case 50: /* r5k_load */
    case 55: /* r5k_fmove */
    case 56: /* r5k_fmul_single */
    case 57: /* r5k_fmul_double */
    case 58: /* r5k_fdiv_single */
    case 59: /* r5k_fsqrt_double */
    case 115: /* r6k_fcmp */
    case 116: /* r6k_fadd */
    case 117: /* r6k_fmul_single */
    case 118: /* r6k_fmul_double */
    case 119: /* r6k_fdiv_single */
    case 120: /* r6k_fdiv_double */
    case 239: /* generic_alu */
    case 240: /* generic_load */
    case 241: /* generic_store */
    case 242: /* generic_xfer */
    case 243: /* generic_branch */
    case 247: /* generic_fcvt */
    case 248: /* generic_fmove */
    case 249: /* generic_fcmp */
    case 250: /* generic_fadd */
    case 251: /* generic_fmul_single */
    case 252: /* generic_fmul_double */
    case 253: /* generic_fdiv_single */
    case 254: /* generic_fdiv_double */
    case 255: /* generic_fsqrt_single */
    case 256: /* generic_fsqrt_double */
    case 257: /* generic_frecip_fsqrt_step */
      {

        res = alu_state_alts [alu_translate [insn_code] + chip->alu_automaton_state * 3];
        break;
      }

    case 1: /* r3k_imul */
    case 2: /* r3k_idiv */
    case 9: /* r4k_imul */
    case 10: /* r4k_idiv */
    case 12: /* r4100_imul_si */
    case 13: /* r4100_imul_di */
    case 14: /* r4100_idiv_si */
    case 15: /* r4100_idiv_di */
    case 29: /* r4300_imul_si */
    case 30: /* r4300_imul_di */
    case 31: /* r4300_idiv_si */
    case 32: /* r4300_idiv_di */
    case 33: /* r4300_fmove */
    case 34: /* r4300_fadd */
    case 35: /* r4300_fmul_single */
    case 36: /* r4300_fmul_double */
    case 37: /* r4300_fdiv_single */
    case 38: /* r4300_fdiv_double */
    case 39: /* r4600_imul */
    case 40: /* r4600_idiv */
    case 41: /* r4650_imul */
    case 42: /* r4650_idiv */
    case 51: /* r5k_imul_si */
    case 52: /* r5k_imul_di */
    case 53: /* r5k_idiv_si */
    case 54: /* r5k_idiv_di */
    case 244: /* generic_hilo */
    case 245: /* generic_imul */
    case 246: /* generic_idiv */
      {
        int temp;

        temp = imuldiv_base_state_alts [chip->imuldiv_automaton_state] + imuldiv_translate [insn_code];
        if (imuldiv_check_state_alts [temp] != chip->imuldiv_automaton_state)
          return 0;
        else
          res = imuldiv_state_alts [temp];
        break;
      }

    case 16: /* vr4130_multi */
      {
        int temp;

        temp = vr4130_muldiv_base_state_alts [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check_state_alts [temp] != chip->vr4130_muldiv_automaton_state)
          return 0;
        else
          res = vr4130_muldiv_state_alts [temp];
        res += vr4130_main_state_alts [vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5];
        break;
      }

    case 17: /* vr4130_int */
    case 18: /* vr4130_load */
    case 19: /* vr4130_store */
    case 27: /* vr4130_branch */
      {

        res = vr4130_main_state_alts [vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5];
        break;
      }

    case 20: /* vr4130_mfhilo */
    case 21: /* vr4130_mthilo */
    case 24: /* vr4130_macc */
    case 25: /* vr4130_divsi */
    case 26: /* vr4130_divdi */
      {
        int temp;

        temp = vr4130_muldiv_base_state_alts [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check_state_alts [temp] != chip->vr4130_muldiv_automaton_state)
          return 0;
        else
          res = vr4130_muldiv_state_alts [temp];
        break;
      }

    case 22: /* vr4130_mulsi */
    case 23: /* vr4130_muldi */
      {
        int temp;

        res = vr4130_mulpre_state_alts [vr4130_mulpre_translate [insn_code] + chip->vr4130_mulpre_automaton_state * 4];

        temp = vr4130_muldiv_base_state_alts [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check_state_alts [temp] != chip->vr4130_muldiv_automaton_state)
          return 0;
        else
          res += vr4130_muldiv_state_alts [temp];
        break;
      }

    case 60: /* ir_vr54_unknown */
    case 61: /* ir_vr54_branch */
    case 62: /* ir_vr54_load */
    case 63: /* ir_vr54_store */
    case 64: /* ir_vr54_fstore */
    case 65: /* ir_vr54_condmove */
    case 66: /* ir_vr54_xfer */
    case 67: /* ir_vr54_hilo */
    case 68: /* ir_vr54_arith */
    case 69: /* ir_vr54_imul_si */
    case 70: /* ir_vr54_imul_di */
    case 71: /* ir_vr54_imadd_si */
    case 72: /* ir_vr54_idiv_si */
    case 73: /* ir_vr54_idiv_di */
    case 74: /* ir_vr54_fadd */
    case 75: /* ir_vr54_fmul_sf */
    case 76: /* ir_vr54_fmul_df */
    case 77: /* ir_vr54_fmadd_sf */
    case 78: /* ir_vr54_fmadd_df */
    case 79: /* ir_vr54_fdiv_sf */
    case 80: /* ir_vr54_fdiv_df */
    case 81: /* ir_vr54_fabs */
    case 82: /* ir_vr54_fcmp */
    case 83: /* ir_vr54_fcvt */
    case 84: /* ir_vr54_frsqrt_sf */
    case 85: /* ir_vr54_frsqrt_df */
    case 86: /* ir_vr54_multi */
      {

        res = vr54_state_alts [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        break;
      }

    case 87: /* ir_vr55_unknown */
    case 88: /* ir_vr55_branch */
    case 89: /* ir_vr55_load */
    case 90: /* ir_vr55_store */
    case 91: /* ir_vr55_condmove */
    case 92: /* ir_vr55_xfer */
    case 93: /* ir_vr55_arith */
    case 94: /* ir_vr55_mthilo */
    case 95: /* ir_vr55_mfhilo */
    case 96: /* ir_vr55_imul_si */
    case 97: /* ir_vr55_imul_di */
    case 98: /* ir_vr55_imadd */
    case 99: /* ir_vr55_idiv_si */
    case 100: /* ir_vr55_idiv_di */
    case 101: /* ir_vr55_fadd */
    case 102: /* ir_vr55_fmul_sf */
    case 103: /* ir_vr55_fmul_df */
    case 104: /* ir_vr55_fmadd_sf */
    case 105: /* ir_vr55_fmadd_df */
    case 106: /* ir_vr55_fdiv_sf */
    case 107: /* ir_vr55_fdiv_df */
    case 108: /* ir_vr55_fabs */
    case 109: /* ir_vr55_fcmp */
    case 110: /* ir_vr55_fcvt_sf */
    case 111: /* ir_vr55_fcvt_df */
    case 112: /* ir_vr55_frsqrt_sf */
    case 113: /* ir_vr55_frsqrt_df */
    case 114: /* ir_vr55_multi */
      {

        res = vr55_state_alts [vr55_translate [insn_code] + chip->vr55_automaton_state * 9];
        break;
      }

    case 121: /* rm7_int_other */
    case 122: /* rm7_ld */
    case 123: /* rm7_st */
    case 127: /* rm7_impy_si_mul */
    case 129: /* rm7_mthilo */
    case 130: /* rm7_mfhilo */
    case 131: /* rm7_ixfer */
    case 132: /* rm7_ibr */
    case 133: /* rm7_fp_quick */
    case 134: /* rm7_fp_other */
    case 135: /* rm7_fp_cvt */
    case 142: /* rm7_unknown */
      {

        res = rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        break;
      }

    case 124: /* rm7_idiv_si */
    case 125: /* rm7_idiv_di */
    case 126: /* rm7_impy_si_mult */
    case 128: /* rm7_impy_di */
      {
        int temp;

        temp = rm7000_idiv_base_state_alts [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check_state_alts [temp] != chip->rm7000_idiv_automaton_state)
          return 0;
        else
          res = rm7000_idiv_state_alts [temp];
        res += rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        break;
      }

    case 136: /* rm7_fp_divsqrt_df */
    case 137: /* rm7_fp_divsqrt_sf */
    case 138: /* rm7_fp_rsqrt_df */
    case 139: /* rm7_fp_rsqrt_sf */
    case 140: /* rm7_fp_mpy_sf */
    case 141: /* rm7_fp_mpy_df */
      {

        res = rm7000_fdiv_state_alts [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        res += rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        break;
      }

    case 143: /* rm9k_load */
    case 144: /* rm9k_store */
    case 145: /* rm9k_int */
    case 146: /* rm9k_int_cmove */
    case 147: /* rm9k_mulsi */
    case 151: /* rm9k_mfhilo */
    case 152: /* rm9k_mthilo */
    case 153: /* rm9k_xfer */
    case 154: /* rm9k_fquick */
    case 155: /* rm9k_fcmove */
    case 156: /* rm9k_fadd */
    case 157: /* rm9k_fmuls */
    case 158: /* rm9k_fmuld */
    case 161: /* rm9k_branch */
    case 162: /* rm9k_unknown */
      {

        res = rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        break;
      }

    case 148: /* rm9k_muldi */
    case 149: /* rm9k_divsi */
    case 150: /* rm9k_divdi */
      {

        res = rm9k_imul_state_alts [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        res += rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        break;
      }

    case 159: /* rm9k_fdivs */
    case 160: /* rm9k_fdivd */
      {

        res = rm9k_fdiv_state_alts [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        res += rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];
        break;
      }

    case 163: /* ir_sb1_unknown */
    case 164: /* ir_sb1_branch */
    case 165: /* ir_sb1_load */
    case 166: /* ir_sb1_fpload */
    case 167: /* ir_sb1_fpload_32bitfp */
    case 168: /* ir_sb1_fpidxload */
    case 169: /* ir_sb1_fpidxload_32bitfp */
    case 170: /* ir_sb1_prefetchx */
    case 171: /* ir_sb1_store */
    case 172: /* ir_sb1_fpstore */
    case 173: /* ir_sb1_fpidxstore */
    case 174: /* ir_sb1_simple_alu */
    case 175: /* ir_sb1_alu */
    case 176: /* ir_sb1_alu_0 */
    case 177: /* ir_sb1_mfhi */
    case 178: /* ir_sb1_mflo */
    case 179: /* ir_sb1_mthilo */
    case 180: /* ir_sb1_mulsi */
    case 181: /* ir_sb1_muldi */
    case 184: /* ir_sb1_fpu_2pipes */
    case 185: /* ir_sb1_fpu_1pipe */
    case 186: /* ir_sb1_fpu_step2_2pipes */
    case 187: /* ir_sb1_fpu_step2_1pipe */
    case 188: /* ir_sb1_fmadd_2pipes */
    case 189: /* ir_sb1_fmadd_1pipe */
    case 190: /* ir_sb1_fcmp */
    case 191: /* ir_sb1_mtxfer */
    case 192: /* ir_sb1_mfxfer */
    case 193: /* ir_sb1_divsf_2pipes */
    case 194: /* ir_sb1_divsf_1pipe */
    case 195: /* ir_sb1_divdf_2pipes */
    case 196: /* ir_sb1_divdf_1pipe */
    case 197: /* ir_sb1_recipsf_2pipes */
    case 198: /* ir_sb1_recipsf_1pipe */
    case 199: /* ir_sb1_recipdf_2pipes */
    case 200: /* ir_sb1_recipdf_1pipe */
    case 201: /* ir_sb1_sqrtsf_2pipes */
    case 202: /* ir_sb1_sqrtsf_1pipe */
    case 203: /* ir_sb1_sqrtdf_2pipes */
    case 204: /* ir_sb1_sqrtdf_1pipe */
    case 205: /* ir_sb1_rsqrtsf_2pipes */
    case 206: /* ir_sb1_rsqrtsf_1pipe */
    case 207: /* ir_sb1_rsqrtdf_2pipes */
    case 208: /* ir_sb1_rsqrtdf_1pipe */
      {

        res = sb1_cpu_state_alts [sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13];
        break;
      }

    case 182: /* ir_sb1_divsi */
    case 183: /* ir_sb1_divdi */
      {

        res = sb1_cpu_div_state_alts [sb1_cpu_div_translate [insn_code] + chip->sb1_cpu_div_automaton_state * 4];
        res += sb1_cpu_state_alts [sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13];
        break;
      }

    case 209: /* ir_sr70_unknown */
    case 237: /* ir_sr70_multi */
      {

        res = sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 210: /* ir_sr70_branch */
    case 211: /* ir_sr70_load */
    case 212: /* ir_sr70_store */
    case 215: /* ir_sr70_condmove */
    case 218: /* ir_sr70_hilo */
    case 219: /* ir_sr70_arith */
    case 238: /* ir_sr70_nop */
      {

        res = sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 213: /* ir_sr70_fload */
    case 214: /* ir_sr70_fstore */
    case 216: /* ir_sr70_xfer_from */
    case 217: /* ir_sr70_xfer_to */
      {

        res = sr71_cp1_state_alts [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        res += sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 220: /* ir_sr70_imul_si */
    case 221: /* ir_sr70_imul_di */
    case 222: /* ir_sr70_idiv_si */
    case 223: /* ir_sr70_idiv_di */
      {
        int temp;

        temp = sr71_imacc_base_state_alts [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check_state_alts [temp] != chip->sr71_imacc_automaton_state)
          return 0;
        else
          res = sr71_imacc_state_alts [temp];
        res += sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 224: /* ir_sr70_fadd_sf */
    case 225: /* ir_sr70_fadd_df */
    case 226: /* ir_sr70_fmul_sf */
    case 227: /* ir_sr70_fmul_df */
    case 230: /* ir_sr70_fabs */
    case 231: /* ir_sr70_fcmp */
    case 232: /* ir_sr70_fcvt */
      {

        res = sr71_cp2_state_alts [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 228: /* ir_sr70_fdiv_sf */
    case 229: /* ir_sr70_fdiv_df */
    case 233: /* ir_sr70_fsqrt_sf */
    case 234: /* ir_sr70_fsqrt_df */
    case 235: /* ir_sr70_frsqrt_sf */
    case 236: /* ir_sr70_frsqrt_df */
      {
        int temp;

        temp = sr71_fextra_base_state_alts [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check_state_alts [temp] != chip->sr71_fextra_automaton_state)
          return 0;
        else
          res = sr71_fextra_state_alts [temp];
        res += sr71_cp2_state_alts [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        break;
      }

    case 258: /* $advance_cycle */
      {
        int temp;

        temp = sr71_imacc_base_state_alts [chip->sr71_imacc_automaton_state] + sr71_imacc_translate [insn_code];
        if (sr71_imacc_check_state_alts [temp] != chip->sr71_imacc_automaton_state)
          return 0;
        else
          res = sr71_imacc_state_alts [temp];

        temp = sr71_fextra_base_state_alts [chip->sr71_fextra_automaton_state] + sr71_fextra_translate [insn_code];
        if (sr71_fextra_check_state_alts [temp] != chip->sr71_fextra_automaton_state)
          return 0;
        else
          res += sr71_fextra_state_alts [temp];
        res += sr71_cp2_state_alts [sr71_cp2_translate [insn_code] + chip->sr71_cp2_automaton_state * 6];
        res += sr71_cp1_state_alts [sr71_cp1_translate [insn_code] + chip->sr71_cp1_automaton_state * 4];
        res += sr71_cpu1_state_alts [sr71_cpu1_translate [insn_code] + chip->sr71_cpu1_automaton_state * 7];
        res += sr71_cpu_state_alts [sr71_cpu_translate [insn_code] + chip->sr71_cpu_automaton_state * 7];
        res += sb1_cpu_div_state_alts [sb1_cpu_div_translate [insn_code] + chip->sb1_cpu_div_automaton_state * 4];
        res += sb1_cpu_state_alts [sb1_cpu_translate [insn_code] + chip->sb1_cpu_automaton_state * 13];
        res += rm9k_fdiv_state_alts [rm9k_fdiv_translate [insn_code] + chip->rm9k_fdiv_automaton_state * 4];
        res += rm9k_imul_state_alts [rm9k_imul_translate [insn_code] + chip->rm9k_imul_automaton_state * 5];
        res += rm9k_main_state_alts [rm9k_main_translate [insn_code] + chip->rm9k_main_automaton_state * 7];

        temp = rm7000_idiv_base_state_alts [chip->rm7000_idiv_automaton_state] + rm7000_idiv_translate [insn_code];
        if (rm7000_idiv_check_state_alts [temp] != chip->rm7000_idiv_automaton_state)
          return 0;
        else
          res += rm7000_idiv_state_alts [temp];
        res += rm7000_fdiv_state_alts [rm7000_fdiv_translate [insn_code] + chip->rm7000_fdiv_automaton_state * 8];
        res += rm7000_other_state_alts [rm7000_other_translate [insn_code] + chip->rm7000_other_automaton_state * 7];
        res += vr55_state_alts [vr55_translate [insn_code] + chip->vr55_automaton_state * 9];
        res += vr54_state_alts [vr54_translate [insn_code] + chip->vr54_automaton_state * 6];
        res += vr4130_mulpre_state_alts [vr4130_mulpre_translate [insn_code] + chip->vr4130_mulpre_automaton_state * 4];

        temp = vr4130_muldiv_base_state_alts [chip->vr4130_muldiv_automaton_state] + vr4130_muldiv_translate [insn_code];
        if (vr4130_muldiv_check_state_alts [temp] != chip->vr4130_muldiv_automaton_state)
          return 0;
        else
          res += vr4130_muldiv_state_alts [temp];
        res += vr4130_main_state_alts [vr4130_main_translate [insn_code] + chip->vr4130_main_automaton_state * 5];

        temp = imuldiv_base_state_alts [chip->imuldiv_automaton_state] + imuldiv_translate [insn_code];
        if (imuldiv_check_state_alts [temp] != chip->imuldiv_automaton_state)
          return 0;
        else
          res += imuldiv_state_alts [temp];
        res += alu_state_alts [alu_translate [insn_code] + chip->alu_automaton_state * 3];
        break;
      }


    default:
      res = 0;
      break;
    }
  return res;
}

int
state_alts (state, insn)
	state_t state;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_alts (insn_code, state);
}


#endif /* #if AUTOMATON_STATE_ALTS */

int
min_issue_delay (state_t state, rtx insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_min_issue_delay (insn_code, state);
}

static int
internal_state_dead_lock_p (struct DFA_chip *chip)
{
  if (alu_dead_lock [chip->alu_automaton_state])
    return 1/* TRUE */;
  if (imuldiv_dead_lock [chip->imuldiv_automaton_state])
    return 1/* TRUE */;
  if (vr4130_main_dead_lock [chip->vr4130_main_automaton_state])
    return 1/* TRUE */;
  if (vr4130_muldiv_dead_lock [chip->vr4130_muldiv_automaton_state])
    return 1/* TRUE */;
  if (vr4130_mulpre_dead_lock [chip->vr4130_mulpre_automaton_state])
    return 1/* TRUE */;
  if (vr54_dead_lock [chip->vr54_automaton_state])
    return 1/* TRUE */;
  if (vr55_dead_lock [chip->vr55_automaton_state])
    return 1/* TRUE */;
  if (rm7000_other_dead_lock [chip->rm7000_other_automaton_state])
    return 1/* TRUE */;
  if (rm7000_fdiv_dead_lock [chip->rm7000_fdiv_automaton_state])
    return 1/* TRUE */;
  if (rm7000_idiv_dead_lock [chip->rm7000_idiv_automaton_state])
    return 1/* TRUE */;
  if (rm9k_main_dead_lock [chip->rm9k_main_automaton_state])
    return 1/* TRUE */;
  if (rm9k_imul_dead_lock [chip->rm9k_imul_automaton_state])
    return 1/* TRUE */;
  if (rm9k_fdiv_dead_lock [chip->rm9k_fdiv_automaton_state])
    return 1/* TRUE */;
  if (sb1_cpu_dead_lock [chip->sb1_cpu_automaton_state])
    return 1/* TRUE */;
  if (sb1_cpu_div_dead_lock [chip->sb1_cpu_div_automaton_state])
    return 1/* TRUE */;
  if (sr71_cpu_dead_lock [chip->sr71_cpu_automaton_state])
    return 1/* TRUE */;
  if (sr71_cpu1_dead_lock [chip->sr71_cpu1_automaton_state])
    return 1/* TRUE */;
  if (sr71_cp1_dead_lock [chip->sr71_cp1_automaton_state])
    return 1/* TRUE */;
  if (sr71_cp2_dead_lock [chip->sr71_cp2_automaton_state])
    return 1/* TRUE */;
  if (sr71_fextra_dead_lock [chip->sr71_fextra_automaton_state])
    return 1/* TRUE */;
  if (sr71_imacc_dead_lock [chip->sr71_imacc_automaton_state])
    return 1/* TRUE */;
  return 0/* FALSE */;
}

int
state_dead_lock_p (state_t state)
{
  return internal_state_dead_lock_p (state);
}

int
state_size (void)
{
  return sizeof (struct DFA_chip);
}

static inline void
internal_reset (struct DFA_chip *chip)
{
  memset (chip, 0, sizeof (struct DFA_chip));
}

void
state_reset (state_t state)
{
  internal_reset (state);
}

int
min_insn_conflict_delay (state_t state, rtx insn, rtx insn2)
{
  struct DFA_chip DFA_chip;
  int insn_code, insn2_code, transition;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  memcpy (&DFA_chip, state, sizeof (DFA_chip));
  internal_reset (&DFA_chip);
  transition = internal_state_transition (insn_code, &DFA_chip);
  gcc_assert (transition <= 0);
  return internal_min_issue_delay (insn2_code, &DFA_chip);
}

static int
internal_insn_latency (int insn_code ATTRIBUTE_UNUSED,
	int insn2_code ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	rtx insn2 ATTRIBUTE_UNUSED)
{
  static const unsigned char default_latencies[] =
    {
        2,  12,  35,   1,   2,   4,   5,  12,
       19,  10,  69,   2,   1,   4,  35,  67,
        1,   1,   3,   1,   3,   1,   4,   6,
        3,  36,  72,   0,   2,   5,   8,  37,
       69,   1,   3,   5,   8,  29,  58,  10,
       42,   4,  36,   2,   1,   8,  32,  61,
       31,  60,   2,   5,   9,  36,  68,   1,
        4,   5,  21,  36,   1,   3,   2,   1,
        1,   4,   2,   1,   1,   3,   4,   3,
       42,  74,   4,   5,   6,   9,  10,  42,
       72,   2,   2,   6,  61, 121,   1,   1,
        2,   3,   0,   2,   2,   1,   1,   5,
        5,   9,   5,  42,  74,   4,   5,   6,
        9,  10,  30,  59,   2,   2,   4,   6,
       60, 118,   1,   2,   3,   5,   6,  15,
       16,   1,   2,   1,  36,  68,   5,   2,
        9,   3,   1,   2,   3,   4,   4,   4,
       36,  21,  68,  38,   4,   5,   1,   3,
        1,   1,   2,   3,   7,  38,  70,   1,
        5,   2,   2,   2,   6,   6,   9,  22,
       37,   2,   1,   1,   0,   1,   0,   1,
        0,   1,   0,   1,   1,   1,   2,   1,
        1,   1,   1,   4,   3,   4,  36,  68,
        4,   4,   8,   8,   8,   8,   4,   5,
        1,  24,  24,  32,  32,  12,  12,  20,
       20,  28,  28,  40,  40,  16,  16,  28,
       28,   1,   6,   2,   1,   9,   1,   4,
        6,   9,   1,   1,   4,   6,  41,  73,
        8,  10,   8,  16,  60, 120,   4,  10,
       12,  62, 122,  48, 240,   1,   1,   1,
        3,   1,   2,   1,   1,  17,  38,   1,
        2,   3,   4,   7,   8,  23,  36,  54,
      112,   5,
    };
  if (insn_code >= DFA__ADVANCE_CYCLE || insn2_code >= DFA__ADVANCE_CYCLE)
    return 0;
  switch (insn_code)
    {
    case 22:
      switch (insn2_code)
        {
        case 20:
          return 1;
        case 24:
          if (mips_linked_madd_p (insn, insn2))
            return 1;
          break;
        }
      break;
    case 23:
      switch (insn2_code)
        {
        case 20:
          return 3;
        }
      break;
    case 24:
      switch (insn2_code)
        {
        case 20:
          return 1;
        case 24:
          if (mips_linked_madd_p (insn, insn2))
            return 1;
          break;
        }
      break;
    case 89:
      switch (insn2_code)
        {
        case 100:
          return 4;
        case 99:
          return 4;
        case 98:
          return 4;
        case 97:
          return 4;
        case 96:
          return 4;
        case 94:
          return 4;
        }
      break;
    case 93:
      switch (insn2_code)
        {
        case 100:
          return 2;
        case 99:
          return 2;
        case 98:
          return 2;
        case 97:
          return 2;
        case 96:
          return 2;
        case 94:
          return 2;
        }
      break;
    case 96:
      switch (insn2_code)
        {
        case 95:
          return 2;
        case 98:
          if (mips_linked_madd_p (insn, insn2))
            return 1;
          break;
        }
      break;
    case 97:
      switch (insn2_code)
        {
        case 95:
          return 4;
        }
      break;
    case 98:
      switch (insn2_code)
        {
        case 95:
          return 2;
        case 98:
          if (mips_linked_madd_p (insn, insn2))
            return 1;
          break;
        }
      break;
    case 165:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 170:
          return 3;
        case 169:
          return 3;
        case 168:
          return 3;
        case 167:
          return 3;
        case 166:
          return 3;
        case 165:
          return 3;
        }
      break;
    case 166:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 170:
          return 3;
        case 169:
          return 3;
        case 168:
          return 3;
        case 167:
          return 3;
        case 166:
          return 3;
        case 165:
          return 3;
        }
      break;
    case 167:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 170:
          return 3;
        case 169:
          return 3;
        case 168:
          return 3;
        case 167:
          return 3;
        case 166:
          return 3;
        case 165:
          return 3;
        }
      break;
    case 168:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 170:
          return 3;
        case 169:
          return 3;
        case 168:
          return 3;
        case 167:
          return 3;
        case 166:
          return 3;
        case 165:
          return 3;
        }
      break;
    case 169:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 3;
          break;
        case 170:
          return 3;
        case 169:
          return 3;
        case 168:
          return 3;
        case 167:
          return 3;
        case 166:
          return 3;
        case 165:
          return 3;
        }
      break;
    case 175:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 170:
          return 5;
        case 169:
          return 5;
        case 168:
          return 5;
        case 167:
          return 5;
        case 166:
          return 5;
        case 165:
          return 5;
        }
      break;
    case 176:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 170:
          return 5;
        case 169:
          return 5;
        case 168:
          return 5;
        case 167:
          return 5;
        case 166:
          return 5;
        case 165:
          return 5;
        }
      break;
    case 177:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 170:
          return 5;
        case 169:
          return 5;
        case 168:
          return 5;
        case 167:
          return 5;
        case 166:
          return 5;
        case 165:
          return 5;
        }
      break;
    case 178:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 5;
          break;
        case 170:
          return 5;
        case 169:
          return 5;
        case 168:
          return 5;
        case 167:
          return 5;
        case 166:
          return 5;
        case 165:
          return 5;
        }
      break;
    case 179:
      switch (insn2_code)
        {
        case 178:
          return 3;
        case 177:
          return 3;
        }
      break;
    case 180:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 7;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 7;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 7;
          break;
        case 170:
          return 7;
        case 169:
          return 7;
        case 168:
          return 7;
        case 167:
          return 7;
        case 166:
          return 7;
        case 165:
          return 7;
        }
      break;
    case 181:
      switch (insn2_code)
        {
        case 173:
          if (store_data_bypass_p (insn, insn2))
            return 7;
          break;
        case 172:
          if (store_data_bypass_p (insn, insn2))
            return 7;
          break;
        case 171:
          if (store_data_bypass_p (insn, insn2))
            return 7;
          break;
        case 170:
          return 7;
        case 169:
          return 7;
        case 168:
          return 7;
        case 167:
          return 7;
        case 166:
          return 7;
        case 165:
          return 7;
        case 178:
          return 3;
        }
      break;
    }
  return default_latencies[insn_code];
}

int
insn_latency (rtx insn, rtx insn2)
{
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  return internal_insn_latency (insn_code, insn2_code, insn, insn2);
}

void
print_reservation (FILE *f, rtx insn ATTRIBUTE_UNUSED)
{
  static const char *const reservation_names[] =
    {
      "alu",
      "imuldiv*12",
      "imuldiv*35",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "imuldiv*10",
      "imuldiv*69",
      "alu",
      "imuldiv",
      "imuldiv*4",
      "imuldiv*35",
      "imuldiv*67",
      "(vr4130_alu1+vr4130_alu2+vr4130_dcache+vr4130_muldiv)",
      "vr4130_alu1|vr4130_alu2",
      "vr4130_dcache",
      "vr4130_dcache",
      "vr4130_muldiv",
      "vr4130_muldiv",
      "(vr4130_muldiv+vr4130_mulpre*2)",
      "(vr4130_muldiv*3+vr4130_mulpre*4)",
      "vr4130_muldiv",
      "vr4130_muldiv*36",
      "vr4130_muldiv*72",
      "vr4130_alu1|vr4130_alu2",
      "alu",
      "imuldiv*5",
      "imuldiv*8",
      "imuldiv*37",
      "imuldiv*69",
      "imuldiv",
      "imuldiv*3",
      "imuldiv*5",
      "imuldiv*8",
      "imuldiv*29",
      "imuldiv*58",
      "imuldiv*10",
      "imuldiv*42",
      "imuldiv*4",
      "imuldiv*36",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "imuldiv*5",
      "imuldiv*9",
      "imuldiv*36",
      "imuldiv*68",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "(vr54_dp0+vr54_dp1+vr54_mem+vr54_mac)",
      "vr54_dp0|vr54_dp1",
      "vr54_mem",
      "vr54_mem",
      "vr54_mem",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_mac",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "vr54_dp0|vr54_dp1",
      "(vr54_dp0+vr54_dp1+vr54_mem+vr54_mac)",
      "(vr55_dp0+vr55_dp1+vr55_mem+vr55_mac+vr55_fp+vr55_bru)",
      "vr55_bru",
      "vr55_mem",
      "vr55_mem",
      "vr55_dp0|vr55_dp1",
      "vr55_dp0|vr55_dp1",
      "vr55_dp0|vr55_dp1",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac*4",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_fp",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_mac",
      "vr55_fp",
      "vr55_fp",
      "vr55_fp",
      "vr55_fp",
      "vr55_mac",
      "vr55_mac",
      "(vr55_dp0+vr55_dp1+vr55_mem+vr55_mac+vr55_fp+vr55_bru)",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "rm7_iaddsub",
      "rm7_imem",
      "rm7_imem",
      "(rm7_impydiv+rm7_impydiv_iter*36)",
      "(rm7_impydiv+rm7_impydiv_iter*68)",
      "(rm7_impydiv+rm7_impydiv_iter*3)",
      "rm7_impydiv",
      "(rm7_impydiv+rm7_impydiv_iter*8)",
      "rm7_impydiv",
      "rm7_impydiv",
      "rm7_iaddsub",
      "rm7_branch",
      "rm7_fpadd",
      "rm7_fpadd",
      "rm7_fpadd",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*36)",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*21)",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*68)",
      "(rm7_fpdivsqr+rm7_fpdivsqr_iter*38)",
      "(rm7_fpmpy+rm7_fpmpy_iter)",
      "(rm7_fpmpy+rm7_fpmpy_iter*2)",
      "rm7_single_dispatch",
      "rm9k_m",
      "rm9k_m",
      "rm9k_any1|rm9k_any2",
      "rm9k_any1|rm9k_any2",
      "rm9k_f_int",
      "(rm9k_f_int+rm9k_imul*7)",
      "(rm9k_f_int+rm9k_imul*38)",
      "(rm9k_f_int+rm9k_imul*70)",
      "rm9k_f_int",
      "rm9k_f_int",
      "rm9k_m",
      "rm9k_f_float",
      "rm9k_m",
      "rm9k_f_float",
      "rm9k_f_float",
      "rm9k_f_float*3",
      "(rm9k_f_float+rm9k_fdiv*22)",
      "(rm9k_f_float+rm9k_fdiv*37)",
      "rm9k_any1|rm9k_any2",
      "(rm9k_m+rm9k_f_int+rm9k_any1+rm9k_any2)",
      "(sb1_ls0+sb1_ls1+sb1_ex0+sb1_ex1+sb1_fp0+sb1_fp1)",
      "sb1_ex0",
      "sb1_ls0|sb1_ls1",
      "sb1_ls0|sb1_ls1",
      "sb1_ls0|sb1_ls1",
      "sb1_ls1",
      "sb1_ls1",
      "sb1_ls1",
      "(sb1_ls0+sb1_ex1)|(sb1_ls0+sb1_ex0)|(sb1_ls1+sb1_ex1)|(sb1_ls1+sb1_ex0)",
      "(sb1_ls0+sb1_fp1)|(sb1_ls0+sb1_fp0)|(sb1_ls1+sb1_fp1)|(sb1_ls1+sb1_fp0)",
      "(sb1_ls1+sb1_fp1)|(sb1_ls1+sb1_fp0)",
      "sb1_ls1|sb1_ex1|sb1_ex0",
      "sb1_ex1|sb1_ex0",
      "sb1_ex0",
      "sb1_ex1",
      "sb1_ex1",
      "sb1_ex1",
      "(sb1_ex1+sb1_mul)",
      "(sb1_ex1+sb1_mul),sb1_mul",
      "sb1_ex1,nothing*3,sb1_div*32",
      "sb1_ex1,nothing*3,sb1_div*64",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1",
      "sb1_fp0",
      "sb1_fp0",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "sb1_fp1|sb1_fp0",
      "sb1_fp1",
      "serial_dispatch",
      "ri_branch",
      "ri_mem",
      "ri_mem",
      "(cpu_iss+cp1_iss),(ri_mem+rf_ldmem)",
      "(cpu_iss+cp1_iss),(fpu_mov+ri_mem)",
      "ri_insns",
      "(cpu_iss+cp1_iss),(fpu_mov+ri_mem)",
      "(cpu_iss+cp1_iss),(ri_mem+rf_ldmem)",
      "ri_insns",
      "ri_insns",
      "ri_alux,ipu_alux,ipu_macc_iter",
      "ri_alux,ipu_alux,ipu_macc_iter*3",
      "ri_alux,ipu_alux,ipu_macc_iter*38",
      "ri_alux,ipu_alux,ipu_macc_iter*70",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu*6",
      "(rf_multi1+fpu_iter*51)",
      "(rf_multi1+fpu_iter*109)",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu",
      "rf_insn,fpu_fpu*4",
      "(rf_multi1+fpu_iter*53)",
      "(rf_multi1+fpu_iter*111)",
      "(rf_multi1+fpu_iter*39)",
      "(rf_multi1+fpu_iter*229)",
      "serial_dispatch",
      "ri_insns",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "imuldiv*3",
      "imuldiv*17",
      "imuldiv*38",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "alu",
      "nothing"
    };
  int insn_code;

  if (insn == 0)
    insn_code = DFA__ADVANCE_CYCLE;
  else
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        insn_code = DFA__ADVANCE_CYCLE;
    }
  fputs (reservation_names[insn_code], f);
}


#if CPU_UNITS_QUERY

int
get_cpu_unit_code (const char *cpu_unit_name)
{
  struct name_code {const char *name; int code;};
  int cmp, l, m, h;
  static struct name_code name_code_table [] =
    {
    };

  /* The following is binary search: */
  l = 0;
  h = sizeof (name_code_table) / sizeof (struct name_code) - 1;
  while (l <= h)
    {
      m = (l + h) / 2;
      cmp = strcmp (cpu_unit_name, name_code_table [m].name);
      if (cmp < 0)
        h = m - 1;
      else if (cmp > 0)
        l = m + 1;
      else
        return name_code_table [m].code;
    }
  return -1;
}

int
cpu_unit_reservation_p (state_t state, int cpu_unit_code)
{
  gcc_assert (cpu_unit_code >= 0 && cpu_unit_code < 0);
  if ((alu_reserved_units [((struct DFA_chip *) state)->alu_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((imuldiv_reserved_units [((struct DFA_chip *) state)->imuldiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((vr4130_main_reserved_units [((struct DFA_chip *) state)->vr4130_main_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((vr4130_muldiv_reserved_units [((struct DFA_chip *) state)->vr4130_muldiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((vr4130_mulpre_reserved_units [((struct DFA_chip *) state)->vr4130_mulpre_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((vr54_reserved_units [((struct DFA_chip *) state)->vr54_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((vr55_reserved_units [((struct DFA_chip *) state)->vr55_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm7000_other_reserved_units [((struct DFA_chip *) state)->rm7000_other_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm7000_fdiv_reserved_units [((struct DFA_chip *) state)->rm7000_fdiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm7000_idiv_reserved_units [((struct DFA_chip *) state)->rm7000_idiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm9k_main_reserved_units [((struct DFA_chip *) state)->rm9k_main_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm9k_imul_reserved_units [((struct DFA_chip *) state)->rm9k_imul_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((rm9k_fdiv_reserved_units [((struct DFA_chip *) state)->rm9k_fdiv_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sb1_cpu_reserved_units [((struct DFA_chip *) state)->sb1_cpu_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sb1_cpu_div_reserved_units [((struct DFA_chip *) state)->sb1_cpu_div_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cpu_reserved_units [((struct DFA_chip *) state)->sr71_cpu_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cpu1_reserved_units [((struct DFA_chip *) state)->sr71_cpu1_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cp1_reserved_units [((struct DFA_chip *) state)->sr71_cp1_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_cp2_reserved_units [((struct DFA_chip *) state)->sr71_cp2_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_fextra_reserved_units [((struct DFA_chip *) state)->sr71_fextra_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((sr71_imacc_reserved_units [((struct DFA_chip *) state)->sr71_imacc_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  return 0;
}


#endif /* #if CPU_UNITS_QUERY */

void
dfa_clean_insn_cache (void)
{
  int i;

  for (i = 0; i < dfa_insn_codes_length; i++)
    dfa_insn_codes [i] = -1;
}

void
dfa_start (void)
{
  dfa_insn_codes_length = get_max_uid ();
  dfa_insn_codes = xmalloc (dfa_insn_codes_length * sizeof (int));
  dfa_clean_insn_cache ();
}

void
dfa_finish (void)
{
  free (dfa_insn_codes);
}

int
const_num_delay_slots (rtx insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

int length_unit_log = 0;
