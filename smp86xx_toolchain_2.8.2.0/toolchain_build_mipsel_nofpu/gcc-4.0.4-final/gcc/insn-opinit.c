/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  if (HAVE_addsf3)
    addv_optab->handlers[SFmode].insn_code =
    add_optab->handlers[SFmode].insn_code = CODE_FOR_addsf3;
  if (HAVE_adddf3)
    addv_optab->handlers[DFmode].insn_code =
    add_optab->handlers[DFmode].insn_code = CODE_FOR_adddf3;
  if (HAVE_addv2sf3)
    addv_optab->handlers[V2SFmode].insn_code =
    add_optab->handlers[V2SFmode].insn_code = CODE_FOR_addv2sf3;
  if (HAVE_subsf3)
    subv_optab->handlers[SFmode].insn_code =
    sub_optab->handlers[SFmode].insn_code = CODE_FOR_subsf3;
  if (HAVE_subdf3)
    subv_optab->handlers[DFmode].insn_code =
    sub_optab->handlers[DFmode].insn_code = CODE_FOR_subdf3;
  if (HAVE_subv2sf3)
    subv_optab->handlers[V2SFmode].insn_code =
    sub_optab->handlers[V2SFmode].insn_code = CODE_FOR_subv2sf3;
  sub_optab->handlers[SImode].insn_code = CODE_FOR_subsi3;
  if (HAVE_subdi3)
    sub_optab->handlers[DImode].insn_code = CODE_FOR_subdi3;
  if (HAVE_mulv2sf3)
    smulv_optab->handlers[V2SFmode].insn_code =
    smul_optab->handlers[V2SFmode].insn_code = CODE_FOR_mulv2sf3;
  if (HAVE_smuldi3_highpart)
    smul_highpart_optab->handlers[DImode].insn_code = CODE_FOR_smuldi3_highpart;
  if (HAVE_umuldi3_highpart)
    umul_highpart_optab->handlers[DImode].insn_code = CODE_FOR_umuldi3_highpart;
  if (HAVE_divmodsi4)
    sdivmod_optab->handlers[SImode].insn_code = CODE_FOR_divmodsi4;
  if (HAVE_divmoddi4)
    sdivmod_optab->handlers[DImode].insn_code = CODE_FOR_divmoddi4;
  udivmod_optab->handlers[SImode].insn_code = CODE_FOR_udivmodsi4;
  if (HAVE_udivmoddi4)
    udivmod_optab->handlers[DImode].insn_code = CODE_FOR_udivmoddi4;
  if (HAVE_sqrtsf2)
    sqrt_optab->handlers[SFmode].insn_code = CODE_FOR_sqrtsf2;
  if (HAVE_sqrtdf2)
    sqrt_optab->handlers[DFmode].insn_code = CODE_FOR_sqrtdf2;
  if (HAVE_sqrtv2sf2)
    sqrt_optab->handlers[V2SFmode].insn_code = CODE_FOR_sqrtv2sf2;
  if (HAVE_abssi2)
    abs_optab->handlers[SImode].insn_code = CODE_FOR_abssi2;
  if (HAVE_absdi2)
    abs_optab->handlers[DImode].insn_code = CODE_FOR_absdi2;
  if (HAVE_abssf2)
    absv_optab->handlers[SFmode].insn_code =
    abs_optab->handlers[SFmode].insn_code = CODE_FOR_abssf2;
  if (HAVE_absdf2)
    absv_optab->handlers[DFmode].insn_code =
    abs_optab->handlers[DFmode].insn_code = CODE_FOR_absdf2;
  if (HAVE_absv2sf2)
    absv_optab->handlers[V2SFmode].insn_code =
    abs_optab->handlers[V2SFmode].insn_code = CODE_FOR_absv2sf2;
  if (HAVE_ffssi2)
    ffs_optab->handlers[SImode].insn_code = CODE_FOR_ffssi2;
  if (HAVE_ffsdi2)
    ffs_optab->handlers[DImode].insn_code = CODE_FOR_ffsdi2;
  if (HAVE_clzsi2)
    clz_optab->handlers[SImode].insn_code = CODE_FOR_clzsi2;
  if (HAVE_clzdi2)
    clz_optab->handlers[DImode].insn_code = CODE_FOR_clzdi2;
  neg_optab->handlers[SImode].insn_code = CODE_FOR_negsi2;
  if (HAVE_negdi2)
    neg_optab->handlers[DImode].insn_code = CODE_FOR_negdi2;
  if (HAVE_negsf2)
    negv_optab->handlers[SFmode].insn_code =
    neg_optab->handlers[SFmode].insn_code = CODE_FOR_negsf2;
  if (HAVE_negdf2)
    negv_optab->handlers[DFmode].insn_code =
    neg_optab->handlers[DFmode].insn_code = CODE_FOR_negdf2;
  if (HAVE_negv2sf2)
    negv_optab->handlers[V2SFmode].insn_code =
    neg_optab->handlers[V2SFmode].insn_code = CODE_FOR_negv2sf2;
  one_cmpl_optab->handlers[SImode].insn_code = CODE_FOR_one_cmplsi2;
  if (HAVE_one_cmpldi2)
    one_cmpl_optab->handlers[DImode].insn_code = CODE_FOR_one_cmpldi2;
  if (HAVE_truncdfsf2)
    trunc_optab->handlers[SFmode][DFmode].insn_code = CODE_FOR_truncdfsf2;
  if (HAVE_truncdisi2)
    trunc_optab->handlers[SImode][DImode].insn_code = CODE_FOR_truncdisi2;
  if (HAVE_truncdihi2)
    trunc_optab->handlers[HImode][DImode].insn_code = CODE_FOR_truncdihi2;
  if (HAVE_truncdiqi2)
    trunc_optab->handlers[QImode][DImode].insn_code = CODE_FOR_truncdiqi2;
  if (HAVE_zero_extendsidi2)
    zext_optab->handlers[DImode][SImode].insn_code = CODE_FOR_zero_extendsidi2;
  if (HAVE_extendsidi2)
    sext_optab->handlers[DImode][SImode].insn_code = CODE_FOR_extendsidi2;
  sext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_extendqihi2;
  if (HAVE_extendsfdf2)
    sext_optab->handlers[DFmode][SFmode].insn_code = CODE_FOR_extendsfdf2;
  if (HAVE_fix_truncdfdi2)
    sfixtrunc_optab->handlers[DImode][DFmode].insn_code = CODE_FOR_fix_truncdfdi2;
  if (HAVE_fix_truncsfdi2)
    sfixtrunc_optab->handlers[DImode][SFmode].insn_code = CODE_FOR_fix_truncsfdi2;
  if (HAVE_floatsidf2)
    sfloat_optab->handlers[DFmode][SImode].insn_code = CODE_FOR_floatsidf2;
  if (HAVE_floatdidf2)
    sfloat_optab->handlers[DFmode][DImode].insn_code = CODE_FOR_floatdidf2;
  if (HAVE_floatsisf2)
    sfloat_optab->handlers[SFmode][SImode].insn_code = CODE_FOR_floatsisf2;
  if (HAVE_floatdisf2)
    sfloat_optab->handlers[SFmode][DImode].insn_code = CODE_FOR_floatdisf2;
  if (HAVE_movcc)
    mov_optab->handlers[CCmode].insn_code = CODE_FOR_movcc;
  if (HAVE_rotrsi3)
    rotr_optab->handlers[SImode].insn_code = CODE_FOR_rotrsi3;
  if (HAVE_rotrdi3)
    rotr_optab->handlers[DImode].insn_code = CODE_FOR_rotrdi3;
  if (HAVE_vec_extractv2sf)
    vec_extract_optab->handlers[V2SFmode].insn_code = CODE_FOR_vec_extractv2sf;
  add_optab->handlers[SImode].insn_code = CODE_FOR_addsi3;
  if (HAVE_adddi3)
    add_optab->handlers[DImode].insn_code = CODE_FOR_adddi3;
  if (HAVE_mulsf3)
    smulv_optab->handlers[SFmode].insn_code =
    smul_optab->handlers[SFmode].insn_code = CODE_FOR_mulsf3;
  if (HAVE_muldf3)
    smulv_optab->handlers[DFmode].insn_code =
    smul_optab->handlers[DFmode].insn_code = CODE_FOR_muldf3;
  smul_optab->handlers[SImode].insn_code = CODE_FOR_mulsi3;
  if (HAVE_muldi3)
    smul_optab->handlers[DImode].insn_code = CODE_FOR_muldi3;
  if (HAVE_mulsidi3)
    smul_widen_optab->handlers[DImode].insn_code = CODE_FOR_mulsidi3;
  if (HAVE_umulsidi3)
    umul_widen_optab->handlers[DImode].insn_code = CODE_FOR_umulsidi3;
  if (HAVE_smulsi3_highpart)
    smul_highpart_optab->handlers[SImode].insn_code = CODE_FOR_smulsi3_highpart;
  if (HAVE_umulsi3_highpart)
    umul_highpart_optab->handlers[SImode].insn_code = CODE_FOR_umulsi3_highpart;
  if (HAVE_divsf3)
    sdiv_optab->handlers[SFmode].insn_code = CODE_FOR_divsf3;
  if (HAVE_divdf3)
    sdiv_optab->handlers[DFmode].insn_code = CODE_FOR_divdf3;
  if (HAVE_divv2sf3)
    sdiv_optab->handlers[V2SFmode].insn_code = CODE_FOR_divv2sf3;
  and_optab->handlers[SImode].insn_code = CODE_FOR_andsi3;
  if (HAVE_anddi3)
    and_optab->handlers[DImode].insn_code = CODE_FOR_anddi3;
  ior_optab->handlers[SImode].insn_code = CODE_FOR_iorsi3;
  if (HAVE_iordi3)
    ior_optab->handlers[DImode].insn_code = CODE_FOR_iordi3;
  xor_optab->handlers[SImode].insn_code = CODE_FOR_xorsi3;
  if (HAVE_xordi3)
    xor_optab->handlers[DImode].insn_code = CODE_FOR_xordi3;
  zext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_zero_extendqisi2;
  if (HAVE_zero_extendqidi2)
    zext_optab->handlers[DImode][QImode].insn_code = CODE_FOR_zero_extendqidi2;
  zext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_zero_extendhisi2;
  if (HAVE_zero_extendhidi2)
    zext_optab->handlers[DImode][HImode].insn_code = CODE_FOR_zero_extendhidi2;
  zext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_zero_extendqihi2;
  sext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_extendqisi2;
  if (HAVE_extendqidi2)
    sext_optab->handlers[DImode][QImode].insn_code = CODE_FOR_extendqidi2;
  sext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_extendhisi2;
  if (HAVE_extendhidi2)
    sext_optab->handlers[DImode][HImode].insn_code = CODE_FOR_extendhidi2;
  if (HAVE_fix_truncdfsi2)
    sfixtrunc_optab->handlers[SImode][DFmode].insn_code = CODE_FOR_fix_truncdfsi2;
  if (HAVE_fix_truncsfsi2)
    sfixtrunc_optab->handlers[SImode][SFmode].insn_code = CODE_FOR_fix_truncsfsi2;
  if (HAVE_fixuns_truncdfsi2)
    ufixtrunc_optab->handlers[SImode][DFmode].insn_code = CODE_FOR_fixuns_truncdfsi2;
  if (HAVE_fixuns_truncdfdi2)
    ufixtrunc_optab->handlers[DImode][DFmode].insn_code = CODE_FOR_fixuns_truncdfdi2;
  if (HAVE_fixuns_truncsfsi2)
    ufixtrunc_optab->handlers[SImode][SFmode].insn_code = CODE_FOR_fixuns_truncsfsi2;
  if (HAVE_fixuns_truncsfdi2)
    ufixtrunc_optab->handlers[DImode][SFmode].insn_code = CODE_FOR_fixuns_truncsfdi2;
  mov_optab->handlers[DImode].insn_code = CODE_FOR_movdi;
  mov_optab->handlers[SImode].insn_code = CODE_FOR_movsi;
  if (HAVE_reload_incc)
    reload_in_optab[CCmode] = CODE_FOR_reload_incc;
  if (HAVE_reload_outcc)
    reload_out_optab[CCmode] = CODE_FOR_reload_outcc;
  mov_optab->handlers[HImode].insn_code = CODE_FOR_movhi;
  mov_optab->handlers[QImode].insn_code = CODE_FOR_movqi;
  mov_optab->handlers[SFmode].insn_code = CODE_FOR_movsf;
  mov_optab->handlers[DFmode].insn_code = CODE_FOR_movdf;
  if (HAVE_movv2sf)
    mov_optab->handlers[V2SFmode].insn_code = CODE_FOR_movv2sf;
  if (HAVE_movmemsi)
    movmem_optab[SImode] = CODE_FOR_movmemsi;
  ashl_optab->handlers[SImode].insn_code = CODE_FOR_ashlsi3;
  ashr_optab->handlers[SImode].insn_code = CODE_FOR_ashrsi3;
  lshr_optab->handlers[SImode].insn_code = CODE_FOR_lshrsi3;
  if (HAVE_ashldi3)
    ashl_optab->handlers[DImode].insn_code = CODE_FOR_ashldi3;
  if (HAVE_ashrdi3)
    ashr_optab->handlers[DImode].insn_code = CODE_FOR_ashrdi3;
  if (HAVE_lshrdi3)
    lshr_optab->handlers[DImode].insn_code = CODE_FOR_lshrdi3;
  cmp_optab->handlers[SImode].insn_code = CODE_FOR_cmpsi;
  if (HAVE_cmpdi)
    cmp_optab->handlers[DImode].insn_code = CODE_FOR_cmpdi;
  if (HAVE_cmpsf)
    cmp_optab->handlers[SFmode].insn_code = CODE_FOR_cmpsf;
  if (HAVE_cmpdf)
    cmp_optab->handlers[DFmode].insn_code = CODE_FOR_cmpdf;
  bcc_gen_fctn[UNORDERED] = gen_bunordered;
  bcc_gen_fctn[ORDERED] = gen_bordered;
  bcc_gen_fctn[UNLT] = gen_bunlt;
  bcc_gen_fctn[UNGE] = gen_bunge;
  bcc_gen_fctn[UNEQ] = gen_buneq;
  bcc_gen_fctn[LTGT] = gen_bltgt;
  bcc_gen_fctn[UNLE] = gen_bunle;
  bcc_gen_fctn[UNGT] = gen_bungt;
  bcc_gen_fctn[EQ] = gen_beq;
  bcc_gen_fctn[NE] = gen_bne;
  bcc_gen_fctn[GT] = gen_bgt;
  bcc_gen_fctn[GE] = gen_bge;
  bcc_gen_fctn[LT] = gen_blt;
  bcc_gen_fctn[LE] = gen_ble;
  bcc_gen_fctn[GTU] = gen_bgtu;
  bcc_gen_fctn[GEU] = gen_bgeu;
  bcc_gen_fctn[LTU] = gen_bltu;
  bcc_gen_fctn[LEU] = gen_bleu;
  setcc_gen_code[EQ] = CODE_FOR_seq;
  if (HAVE_sne)
    setcc_gen_code[NE] = CODE_FOR_sne;
  setcc_gen_code[GT] = CODE_FOR_sgt;
  setcc_gen_code[GE] = CODE_FOR_sge;
  setcc_gen_code[LT] = CODE_FOR_slt;
  setcc_gen_code[LE] = CODE_FOR_sle;
  setcc_gen_code[GTU] = CODE_FOR_sgtu;
  setcc_gen_code[GEU] = CODE_FOR_sgeu;
  setcc_gen_code[LTU] = CODE_FOR_sltu;
  setcc_gen_code[LEU] = CODE_FOR_sleu;
  if (HAVE_movsicc)
    movcc_gen_code[SImode] = CODE_FOR_movsicc;
  if (HAVE_movdicc)
    movcc_gen_code[DImode] = CODE_FOR_movdicc;
  if (HAVE_movsfcc)
    movcc_gen_code[SFmode] = CODE_FOR_movsfcc;
  if (HAVE_movdfcc)
    movcc_gen_code[DFmode] = CODE_FOR_movdfcc;
  if (HAVE_movv2sfcc)
    movcc_gen_code[V2SFmode] = CODE_FOR_movv2sfcc;
  if (HAVE_vec_initv2sf)
    vec_init_optab->handlers[V2SFmode].insn_code = CODE_FOR_vec_initv2sf;
  if (HAVE_vec_setv2sf)
    vec_set_optab->handlers[V2SFmode].insn_code = CODE_FOR_vec_setv2sf;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      ufixtrunc_optab->handlers[i][j].insn_code
      = sfixtrunc_optab->handlers[i][j].insn_code;
#endif
}
