/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 393:  /* bc1any2f */
    case 392:  /* bc1any2t */
    case 391:  /* bc1any4f */
    case 390:  /* bc1any4t */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 387:  /* mips_cabs_cond_4s */
    case 386:  /* mips_c_cond_4s */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 378:  /* vec_extractv2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

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
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 352:  /* *prefetch_indexed_di */
    case 351:  /* *prefetch_indexed_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 2));
      break;

    case 350:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 347:  /* call_value_split */
    case 346:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 345:  /* call_split */
    case 344:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 349:  /* call_value_multiple_split */
    case 348:  /* call_value_multiple_internal */
    case 343:  /* sibcall_value_multiple_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 375:  /* mips_pll_ps */
    case 342:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 341:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 337:  /* eh_set_lr_di */
    case 336:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 335:  /* return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 332:  /* tablejumpdi */
    case 331:  /* tablejumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 330:  /* indirect_jumpdi */
    case 329:  /* indirect_jumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 328:  /* *mips.md:4639 */
    case 327:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 270:  /* *branch_equalitydi_mips16 */
    case 269:  /* *branch_equalitysi_mips16 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 268:  /* *branch_equalitydi_inverted */
    case 267:  /* *branch_equalitysi_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 266:  /* *branch_equalitydi */
    case 265:  /* *branch_equalitysi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 264:  /* *branch_zerodi_inverted */
    case 263:  /* *branch_zerosi_inverted */
    case 260:  /* branch_fp_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 262:  /* *branch_zerodi */
    case 261:  /* *branch_zerosi */
    case 259:  /* branch_fp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 369:  /* align */
    case 368:  /* consttable_float */
    case 240:  /* cprestore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 367:  /* consttable_int */
    case 238:  /* loadgp */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 402:  /* mips_recip1_ps */
    case 401:  /* mips_recip1_d */
    case 400:  /* mips_recip1_s */
    case 396:  /* mips_rsqrt1_ps */
    case 395:  /* mips_rsqrt1_d */
    case 394:  /* mips_rsqrt1_s */
    case 382:  /* mips_cvt_ps_pw */
    case 381:  /* mips_cvt_pw_ps */
    case 237:  /* store_df_high */
    case 235:  /* load_df_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 218:  /* *sdxc1_di */
    case 217:  /* *sdxc1_di */
    case 216:  /* *swxc1_di */
    case 215:  /* *sdxc1_si */
    case 214:  /* *sdxc1_si */
    case 213:  /* *swxc1_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      break;

    case 199:  /* *movdi_ra */
    case 198:  /* *movsi_ra */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 230:  /* movv2sf_hardfloat_64bit */
    case 229:  /* *movdf_mips16 */
    case 228:  /* *movdf_softfloat */
    case 227:  /* *movdf_hardfloat_32bit */
    case 226:  /* *movdf_hardfloat_64bit */
    case 225:  /* *movsf_mips16 */
    case 224:  /* *movsf_softfloat */
    case 223:  /* *movsf_hardfloat */
    case 222:  /* *movqi_mips16 */
    case 221:  /* *movqi_internal */
    case 220:  /* *movhi_mips16 */
    case 219:  /* *movhi_internal */
    case 206:  /* movcc */
    case 205:  /* *movsi_mips16 */
    case 204:  /* *movsi_internal */
    case 203:  /* *movdi_64bit_mips16 */
    case 202:  /* *movdi_64bit */
    case 201:  /* *movdi_32bit_mips16 */
    case 200:  /* *movdi_32bit */
    case 189:  /* *got_dispdi */
    case 188:  /* *got_dispsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 183:  /* *lea64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 181:  /* mov_sdr */
    case 180:  /* mov_swr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 389:  /* mips_cabs_cond_ps */
    case 388:  /* mips_c_cond_ps */
    case 385:  /* mips_cabs_cond_d */
    case 384:  /* mips_cabs_cond_s */
    case 379:  /* mips_alnv_ps */
    case 372:  /* mips_cond_move_tf_ps */
    case 177:  /* mov_ldr */
    case 176:  /* mov_lwr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 405:  /* mips_recip2_ps */
    case 404:  /* mips_recip2_d */
    case 403:  /* mips_recip2_s */
    case 399:  /* mips_rsqrt2_ps */
    case 398:  /* mips_rsqrt2_d */
    case 397:  /* mips_rsqrt2_s */
    case 383:  /* mips_mulr_ps */
    case 380:  /* mips_addr_ps */
    case 340:  /* load_calldi */
    case 339:  /* load_callsi */
    case 236:  /* load_df_high */
    case 234:  /* *mfhilo_di_macc */
    case 233:  /* *mfhilo_si_macc */
    case 232:  /* *mfhilo_di */
    case 231:  /* *mfhilo_si */
    case 193:  /* *load_gotdi */
    case 192:  /* *load_gotsi */
    case 179:  /* mov_sdl */
    case 178:  /* mov_swl */
    case 175:  /* mov_ldl */
    case 174:  /* mov_lwl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 167:  /* fix_truncsfsi2_macro */
    case 165:  /* fix_truncdfsi2_macro */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 141:  /* *mips.md:2265 */
    case 140:  /* *mips.md:2256 */
    case 139:  /* *mips.md:2247 */
    case 138:  /* *mips.md:2229 */
    case 137:  /* *mips.md:2214 */
    case 136:  /* *mips.md:2201 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 107:  /* ffsdi2 */
    case 106:  /* ffssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 374:  /* mips_puu_ps */
    case 97:  /* *rsqrtv2sfa */
    case 96:  /* *rsqrtdfa */
    case 95:  /* *rsqrtsfa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 296:  /* *sge_di */
    case 295:  /* *sge_si */
    case 282:  /* *sge_di */
    case 281:  /* *sge_si */
    case 276:  /* *sne_di */
    case 275:  /* *sne_si */
    case 274:  /* *seq_di_mips16 */
    case 273:  /* *seq_si_mips16 */
    case 272:  /* *seq_di */
    case 271:  /* *seq_si */
    case 191:  /* *got_pagedi */
    case 190:  /* *got_pagesi */
    case 185:  /* *xgot_hidi */
    case 184:  /* *xgot_hisi */
    case 182:  /* *lea_high64 */
    case 173:  /* floatdisf2 */
    case 172:  /* floatsisf2 */
    case 171:  /* floatdidf2 */
    case 170:  /* floatsidf2 */
    case 169:  /* fix_truncsfdi2 */
    case 168:  /* fix_truncdfdi2 */
    case 166:  /* fix_truncsfsi2_insn */
    case 164:  /* fix_truncdfsi2_insn */
    case 163:  /* extendsfdf2 */
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
    case 152:  /* *zero_extendqihi2_mips16 */
    case 151:  /* *zero_extendqihi2 */
    case 150:  /* *zero_extendhidi2_mips16 */
    case 149:  /* *zero_extendhisi2_mips16 */
    case 148:  /* *zero_extendqidi2_mips16 */
    case 147:  /* *zero_extendqisi2_mips16 */
    case 146:  /* *zero_extendhidi2 */
    case 145:  /* *zero_extendhisi2 */
    case 144:  /* *zero_extendqidi2 */
    case 143:  /* *zero_extendqisi2 */
    case 142:  /* zero_extendsidi2 */
    case 134:  /* truncdiqi2 */
    case 133:  /* truncdihi2 */
    case 132:  /* truncdisi2 */
    case 131:  /* truncdfsf2 */
    case 116:  /* one_cmpldi2 */
    case 115:  /* one_cmplsi2 */
    case 114:  /* negv2sf2 */
    case 113:  /* negdf2 */
    case 112:  /* negsf2 */
    case 111:  /* negdi2 */
    case 110:  /* negsi2 */
    case 109:  /* clzdi2 */
    case 108:  /* clzsi2 */
    case 105:  /* absv2sf2 */
    case 104:  /* absdf2 */
    case 103:  /* abssf2 */
    case 102:  /* absdi2 */
    case 101:  /* abssi2 */
    case 94:  /* sqrtv2sf2 */
    case 93:  /* sqrtdf2 */
    case 92:  /* sqrtsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 91:  /* udivmoddi4 */
    case 90:  /* udivmodsi4 */
    case 89:  /* divmoddi4 */
    case 88:  /* divmodsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 81:  /* *nmsubv2sf_fastmath */
    case 80:  /* *nmsubdf_fastmath */
    case 79:  /* *nmsubsf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 78:  /* *nmsubv2sf */
    case 77:  /* *nmsubdf */
    case 76:  /* *nmsubsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 75:  /* *nmaddv2sf_fastmath */
    case 74:  /* *nmadddf_fastmath */
    case 73:  /* *nmaddsf_fastmath */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 72:  /* *nmaddv2sf */
    case 71:  /* *nmadddf */
    case 70:  /* *nmaddsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 69:  /* *msubv2sf */
    case 68:  /* *msubdf */
    case 67:  /* *msubsf */
    case 66:  /* *maddv2sf */
    case 65:  /* *madddf */
    case 64:  /* *maddsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 63:  /* *umul_acc_di */
    case 62:  /* *smul_acc_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 61:  /* madsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 58:  /* *umulsi3_highpart_neg_mulhi_internal */
    case 57:  /* *smulsi3_highpart_neg_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 56:  /* umulsi3_highpart_mulhi_internal */
    case 55:  /* smulsi3_highpart_mulhi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 60:  /* umuldi3_highpart */
    case 59:  /* smuldi3_highpart */
    case 54:  /* umulsi3_highpart_internal */
    case 53:  /* smulsi3_highpart_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 52:  /* *msacu_di */
    case 51:  /* *msac_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 50:  /* *mulsu_di */
    case 49:  /* *muls_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 48:  /* *umulsidi3_64bit_parts */
    case 47:  /* *mulsidi3_64bit_parts */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 46:  /* *umulsidi3_64bit */
    case 45:  /* *mulsidi3_64bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 44:  /* umulsidi3_32bit_r4000 */
    case 43:  /* mulsidi3_32bit_r4000 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 376:  /* mips_plu_ps */
    case 130:  /* *nordi3 */
    case 129:  /* *norsi3 */
    case 42:  /* umulsidi3_32bit_internal */
    case 41:  /* mulsidi3_32bit_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 40:  /* *muls */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 38:  /* *msac2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 37:  /* *macc2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 0;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[3] = 0;
      break;

    case 39:  /* *mul_sub_si */
    case 36:  /* *msac_using_macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 35:  /* *msac */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 34:  /* *macc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 33:  /* *mul_acc_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 30:  /* muldi3_internal */
    case 29:  /* mulsi3_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 32:  /* muldi3_r4000 */
    case 31:  /* mulsi3_r4000 */
    case 28:  /* muldi3_mult3 */
    case 27:  /* mulsi3_mult3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 249:  /* *lshrsi3_extend */
    case 248:  /* *ashrsi3_extend */
    case 247:  /* *ashlsi3_extend */
    case 212:  /* *ldxc1_di */
    case 211:  /* *ldxc1_di */
    case 210:  /* *lwxc1_di */
    case 209:  /* *ldxc1_si */
    case 208:  /* *ldxc1_si */
    case 207:  /* *lwxc1_si */
    case 135:  /* *mips.md:2191 */
    case 100:  /* *rsqrtv2sfb */
    case 99:  /* *rsqrtdfb */
    case 98:  /* *rsqrtsfb */
    case 21:  /* *subsi3_extended */
    case 15:  /* *addsi3_extended_mips16 */
    case 14:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 11:  /* *adddi3_sp2 */
    case 10:  /* *addsi3_sp2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9:  /* *adddi3_sp1 */
    case 8:  /* *addsi3_sp1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 377:  /* vec_initv2sf_internal */
    case 373:  /* mips_pul_ps */
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
    case 304:  /* *sleu_di_mips16 */
    case 303:  /* *sleu_si_mips16 */
    case 302:  /* *sleu_di */
    case 301:  /* *sleu_si */
    case 300:  /* *sltu_di_mips16 */
    case 299:  /* *sltu_si_mips16 */
    case 298:  /* *sltu_di */
    case 297:  /* *sltu_si */
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
    case 280:  /* *sgt_di_mips16 */
    case 279:  /* *sgt_si_mips16 */
    case 278:  /* *sgt_di */
    case 277:  /* *sgt_si */
    case 258:  /* rotrdi3 */
    case 257:  /* rotrsi3 */
    case 256:  /* *mips.md:4061 */
    case 255:  /* *lshrdi3_mips16 */
    case 254:  /* *ashrdi3_mips16 */
    case 253:  /* *ashldi3_mips16 */
    case 252:  /* *lshrsi3_mips16 */
    case 251:  /* *ashrsi3_mips16 */
    case 250:  /* *ashlsi3_mips16 */
    case 246:  /* *lshrdi3 */
    case 245:  /* *ashrdi3 */
    case 244:  /* *ashldi3 */
    case 243:  /* *lshrsi3 */
    case 242:  /* *ashrsi3 */
    case 241:  /* *ashlsi3 */
    case 197:  /* *lowdi_mips16 */
    case 196:  /* *lowsi_mips16 */
    case 195:  /* *lowdi */
    case 194:  /* *lowsi */
    case 187:  /* *xgot_lodi */
    case 186:  /* *xgot_losi */
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
    case 87:  /* *recipv2sf3 */
    case 86:  /* *recipdf3 */
    case 85:  /* *recipsf3 */
    case 84:  /* *divv2sf3 */
    case 83:  /* *divdf3 */
    case 82:  /* *divsf3 */
    case 26:  /* mulv2sf3 */
    case 25:  /* *muldf3_r4300 */
    case 24:  /* *mulsf3_r4300 */
    case 23:  /* *muldf3 */
    case 22:  /* *mulsf3 */
    case 20:  /* subdi3 */
    case 19:  /* subsi3 */
    case 18:  /* subv2sf3 */
    case 17:  /* subdf3 */
    case 16:  /* subsf3 */
    case 13:  /* *adddi3_mips16 */
    case 12:  /* *addsi3_mips16 */
    case 7:  /* *adddi3 */
    case 6:  /* *addsi3 */
    case 5:  /* addv2sf3 */
    case 4:  /* adddf3 */
    case 3:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2:  /* *conditional_trapdi */
    case 1:  /* *conditional_trapsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 1));
      break;

    case 354:  /* hazard_nop */
    case 353:  /* nop */
    case 338:  /* exception_receiver */
    case 334:  /* return */
    case 333:  /* blockage */
    case 239:  /* loadgp_blockage */
    case 0:  /* trap */
      break;

    default:
      gcc_unreachable ();
    }
}
