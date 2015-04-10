/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_trap 1
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_adddf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_addv2sf3 (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_subdf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_subv2sf3 (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_subsi3 1
#define HAVE_subdi3 (TARGET_64BIT)
#define HAVE_mulv2sf3 (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mulsi3_mult3 (GENERATE_MULT3_SI)
#define HAVE_muldi3_mult3 (TARGET_64BIT && GENERATE_MULT3_DI)
#define HAVE_mulsi3_internal (!TARGET_FIX_R4000)
#define HAVE_muldi3_internal ((!TARGET_FIX_R4000) && (TARGET_64BIT))
#define HAVE_mulsi3_r4000 (TARGET_FIX_R4000)
#define HAVE_muldi3_r4000 ((TARGET_FIX_R4000) && (TARGET_64BIT))
#define HAVE_mulsidi3_32bit_internal (!TARGET_64BIT && !TARGET_FIX_R4000)
#define HAVE_umulsidi3_32bit_internal (!TARGET_64BIT && !TARGET_FIX_R4000)
#define HAVE_mulsidi3_32bit_r4000 (!TARGET_64BIT && TARGET_FIX_R4000)
#define HAVE_umulsidi3_32bit_r4000 (!TARGET_64BIT && TARGET_FIX_R4000)
#define HAVE_smulsi3_highpart_internal (!ISA_HAS_MULHI && !TARGET_FIX_R4000)
#define HAVE_umulsi3_highpart_internal (!ISA_HAS_MULHI && !TARGET_FIX_R4000)
#define HAVE_smulsi3_highpart_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_umulsi3_highpart_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_smuldi3_highpart (TARGET_64BIT && !TARGET_FIX_R4000 \
   && !(SIGN_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
#define HAVE_umuldi3_highpart (TARGET_64BIT && !TARGET_FIX_R4000 \
   && !(ZERO_EXTEND == ZERO_EXTEND && TARGET_FIX_VR4120))
#define HAVE_madsi (TARGET_MAD)
#define HAVE_divmodsi4 (!TARGET_FIX_VR4120)
#define HAVE_divmoddi4 ((!TARGET_FIX_VR4120) && (TARGET_64BIT))
#define HAVE_udivmodsi4 1
#define HAVE_udivmoddi4 (TARGET_64BIT)
#define HAVE_sqrtsf2 ((!ISA_MIPS1) && (TARGET_HARD_FLOAT))
#define HAVE_sqrtdf2 ((!ISA_MIPS1) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_sqrtv2sf2 ((TARGET_SB1) && (TARGET_PAIRED_SINGLE_FLOAT))
#define HAVE_abssi2 (!TARGET_MIPS16)
#define HAVE_absdi2 ((!TARGET_MIPS16) && (TARGET_64BIT))
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_absdf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_absv2sf2 (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_ffssi2 (!TARGET_MIPS16)
#define HAVE_ffsdi2 ((!TARGET_MIPS16) && (TARGET_64BIT))
#define HAVE_clzsi2 (ISA_HAS_CLZ_CLO)
#define HAVE_clzdi2 ((ISA_HAS_CLZ_CLO) && (TARGET_64BIT))
#define HAVE_negsi2 1
#define HAVE_negdi2 (TARGET_64BIT && !TARGET_MIPS16)
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_negdf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_negv2sf2 (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmpldi2 (TARGET_64BIT)
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_truncdisi2 (TARGET_64BIT)
#define HAVE_truncdihi2 (TARGET_64BIT)
#define HAVE_truncdiqi2 (TARGET_64BIT)
#define HAVE_zero_extendsidi2 (TARGET_64BIT)
#define HAVE_extendsidi2 (TARGET_64BIT)
#define HAVE_extendqihi2 1
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncdfsi2_insn (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && ISA_HAS_TRUNC_W)
#define HAVE_fix_truncdfsi2_macro (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !ISA_HAS_TRUNC_W)
#define HAVE_fix_truncsfsi2_insn (TARGET_HARD_FLOAT && ISA_HAS_TRUNC_W)
#define HAVE_fix_truncsfsi2_macro (TARGET_HARD_FLOAT && !ISA_HAS_TRUNC_W)
#define HAVE_fix_truncdfdi2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncsfdi2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_floatsidf2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_floatdidf2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatdisf2 (TARGET_HARD_FLOAT && TARGET_FLOAT64 && TARGET_DOUBLE_FLOAT)
#define HAVE_mov_lwl (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
#define HAVE_mov_ldl ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT))
#define HAVE_mov_lwr (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[1]))
#define HAVE_mov_ldr ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT))
#define HAVE_mov_swl (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
#define HAVE_mov_sdl ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT))
#define HAVE_mov_swr (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
#define HAVE_mov_sdr ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT))
#define HAVE_movcc (ISA_HAS_8CC && TARGET_HARD_FLOAT)
#define HAVE_movv2sf_hardfloat_64bit (TARGET_PAIRED_SINGLE_FLOAT \
   && TARGET_64BIT \
   && (register_operand (operands[0], V2SFmode) \
       || reg_or_0_operand (operands[1], V2SFmode)))
#define HAVE_load_df_low (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
#define HAVE_load_df_high (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
#define HAVE_store_df_high (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && !TARGET_64BIT)
#define HAVE_loadgp (TARGET_ABICALLS && TARGET_NEWABI)
#define HAVE_loadgp_blockage 1
#define HAVE_cprestore 1
#define HAVE_rotrsi3 (ISA_HAS_ROTR_SI)
#define HAVE_rotrdi3 ((ISA_HAS_ROTR_DI) && (TARGET_64BIT))
#define HAVE_branch_fp (TARGET_HARD_FLOAT)
#define HAVE_branch_fp_inverted (TARGET_HARD_FLOAT)
#define HAVE_sunordered_sf (TARGET_HARD_FLOAT)
#define HAVE_suneq_sf (TARGET_HARD_FLOAT)
#define HAVE_sunlt_sf (TARGET_HARD_FLOAT)
#define HAVE_sunle_sf (TARGET_HARD_FLOAT)
#define HAVE_seq_sf (TARGET_HARD_FLOAT)
#define HAVE_slt_sf (TARGET_HARD_FLOAT)
#define HAVE_sle_sf (TARGET_HARD_FLOAT)
#define HAVE_sunordered_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_suneq_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunlt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunle_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_seq_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_slt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sle_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sge_sf (TARGET_HARD_FLOAT)
#define HAVE_sgt_sf (TARGET_HARD_FLOAT)
#define HAVE_sunge_sf (TARGET_HARD_FLOAT)
#define HAVE_sungt_sf (TARGET_HARD_FLOAT)
#define HAVE_sge_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sgt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sunge_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_sungt_df (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_jump (!TARGET_MIPS16)
#define HAVE_indirect_jumpsi (Pmode == SImode)
#define HAVE_indirect_jumpdi (Pmode == DImode)
#define HAVE_tablejumpsi (Pmode == SImode)
#define HAVE_tablejumpdi (Pmode == DImode)
#define HAVE_blockage 1
#define HAVE_return (mips_can_use_return_insn ())
#define HAVE_return_internal 1
#define HAVE_eh_set_lr_si (! TARGET_64BIT)
#define HAVE_eh_set_lr_di (TARGET_64BIT)
#define HAVE_exception_receiver (TARGET_ABICALLS && TARGET_OLDABI)
#define HAVE_load_callsi ((TARGET_ABICALLS) && (Pmode == SImode))
#define HAVE_load_calldi ((TARGET_ABICALLS) && (Pmode == DImode))
#define HAVE_sibcall_internal (TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_internal (TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_multiple_internal (TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_call_internal 1
#define HAVE_call_split (TARGET_SPLIT_CALLS)
#define HAVE_call_value_internal 1
#define HAVE_call_value_split (TARGET_SPLIT_CALLS)
#define HAVE_call_value_multiple_internal 1
#define HAVE_call_value_multiple_split (TARGET_SPLIT_CALLS)
#define HAVE_prefetch (ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
#define HAVE_nop 1
#define HAVE_hazard_nop 1
#define HAVE_consttable_int (TARGET_MIPS16)
#define HAVE_consttable_float (TARGET_MIPS16)
#define HAVE_align 1
#define HAVE_mips_cond_move_tf_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_pul_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_puu_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_pll_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_plu_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_vec_initv2sf_internal (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_vec_extractv2sf (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_alnv_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_addr_ps (TARGET_MIPS3D)
#define HAVE_mips_cvt_pw_ps (TARGET_MIPS3D)
#define HAVE_mips_cvt_ps_pw (TARGET_MIPS3D)
#define HAVE_mips_mulr_ps (TARGET_MIPS3D)
#define HAVE_mips_cabs_cond_s ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT))
#define HAVE_mips_cabs_cond_d ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_mips_c_cond_4s (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_cabs_cond_4s (TARGET_MIPS3D)
#define HAVE_mips_c_cond_ps (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_cabs_cond_ps (TARGET_MIPS3D)
#define HAVE_bc1any4t (TARGET_MIPS3D)
#define HAVE_bc1any4f (TARGET_MIPS3D)
#define HAVE_bc1any2t (TARGET_MIPS3D)
#define HAVE_bc1any2f (TARGET_MIPS3D)
#define HAVE_mips_rsqrt1_s ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT))
#define HAVE_mips_rsqrt1_d ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_mips_rsqrt1_ps ((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT))
#define HAVE_mips_rsqrt2_s ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT))
#define HAVE_mips_rsqrt2_d ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_mips_rsqrt2_ps ((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT))
#define HAVE_mips_recip1_s ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT))
#define HAVE_mips_recip1_d ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_mips_recip1_ps ((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT))
#define HAVE_mips_recip2_s ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT))
#define HAVE_mips_recip2_d ((TARGET_MIPS3D) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_mips_recip2_ps ((TARGET_MIPS3D) && (TARGET_PAIRED_SINGLE_FLOAT))
#define HAVE_conditional_trap (ISA_HAS_COND_TRAP)
#define HAVE_addsi3 1
#define HAVE_adddi3 (TARGET_64BIT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_muldf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_mulsi3 1
#define HAVE_muldi3 (TARGET_64BIT)
#define HAVE_mulsidi3 (!TARGET_64BIT || !TARGET_FIX_R4000)
#define HAVE_umulsidi3 (!TARGET_64BIT || !TARGET_FIX_R4000)
#define HAVE_smulsi3_highpart (ISA_HAS_MULHI || !TARGET_FIX_R4000)
#define HAVE_umulsi3_highpart (ISA_HAS_MULHI || !TARGET_FIX_R4000)
#define HAVE_divsf3 ((!TARGET_FIX_SB1 || flag_unsafe_math_optimizations) && (TARGET_HARD_FLOAT))
#define HAVE_divdf3 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_divv2sf3 ((TARGET_SB1 && (!TARGET_FIX_SB1 || flag_unsafe_math_optimizations)) && (TARGET_PAIRED_SINGLE_FLOAT))
#define HAVE_andsi3 1
#define HAVE_anddi3 (TARGET_64BIT)
#define HAVE_iorsi3 1
#define HAVE_iordi3 (TARGET_64BIT)
#define HAVE_xorsi3 1
#define HAVE_xordi3 (TARGET_64BIT)
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqidi2 (TARGET_64BIT)
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendhidi2 (TARGET_64BIT)
#define HAVE_zero_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqidi2 (TARGET_64BIT)
#define HAVE_extendhisi2 1
#define HAVE_extendhidi2 (TARGET_64BIT)
#define HAVE_fix_truncdfsi2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncdfsi2 (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_fixuns_truncdfdi2 (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
#define HAVE_fixuns_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2 (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
#define HAVE_extv (!TARGET_MIPS16)
#define HAVE_extzv (!TARGET_MIPS16)
#define HAVE_insv (!TARGET_MIPS16)
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_reload_incc (ISA_HAS_8CC && TARGET_HARD_FLOAT)
#define HAVE_reload_outcc (ISA_HAS_8CC && TARGET_HARD_FLOAT)
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movv2sf (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mfhilo_si 1
#define HAVE_mfhilo_di (TARGET_64BIT)
#define HAVE_movmemsi (!TARGET_MIPS16 && !TARGET_MEMCPY)
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashldi3 (TARGET_64BIT)
#define HAVE_ashrdi3 (TARGET_64BIT)
#define HAVE_lshrdi3 (TARGET_64BIT)
#define HAVE_cmpsi 1
#define HAVE_cmpdi (TARGET_64BIT)
#define HAVE_cmpsf (TARGET_HARD_FLOAT)
#define HAVE_cmpdf (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
#define HAVE_bunordered 1
#define HAVE_bordered 1
#define HAVE_bunlt 1
#define HAVE_bunge 1
#define HAVE_buneq 1
#define HAVE_bltgt 1
#define HAVE_bunle 1
#define HAVE_bungt 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bgt 1
#define HAVE_bge 1
#define HAVE_blt 1
#define HAVE_ble 1
#define HAVE_bgtu 1
#define HAVE_bgeu 1
#define HAVE_bltu 1
#define HAVE_bleu 1
#define HAVE_seq 1
#define HAVE_sne (!TARGET_MIPS16)
#define HAVE_sgt 1
#define HAVE_sge 1
#define HAVE_slt 1
#define HAVE_sle 1
#define HAVE_sgtu 1
#define HAVE_sgeu 1
#define HAVE_sltu 1
#define HAVE_sleu 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_builtin_setjmp_setup (TARGET_ABICALLS)
#define HAVE_builtin_longjmp (TARGET_ABICALLS)
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_eh_return 1
#define HAVE_sibcall (TARGET_SIBCALLS)
#define HAVE_sibcall_value (TARGET_SIBCALLS)
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_movsicc (ISA_HAS_CONDMOVE)
#define HAVE_movdicc ((ISA_HAS_CONDMOVE) && (TARGET_64BIT))
#define HAVE_movsfcc ((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT))
#define HAVE_movdfcc ((ISA_HAS_CONDMOVE) && (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT))
#define HAVE_movv2sfcc (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_vec_initv2sf (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_vec_setv2sf (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_cvt_ps_s (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_cvt_s_pl (TARGET_PAIRED_SINGLE_FLOAT)
#define HAVE_mips_cvt_s_pu (TARGET_PAIRED_SINGLE_FLOAT)
extern rtx        gen_trap                            (void);
extern rtx        gen_addsf3                          (rtx, rtx, rtx);
extern rtx        gen_adddf3                          (rtx, rtx, rtx);
extern rtx        gen_addv2sf3                        (rtx, rtx, rtx);
extern rtx        gen_subsf3                          (rtx, rtx, rtx);
extern rtx        gen_subdf3                          (rtx, rtx, rtx);
extern rtx        gen_subv2sf3                        (rtx, rtx, rtx);
extern rtx        gen_subsi3                          (rtx, rtx, rtx);
extern rtx        gen_subdi3                          (rtx, rtx, rtx);
extern rtx        gen_mulv2sf3                        (rtx, rtx, rtx);
extern rtx        gen_mulsi3_mult3                    (rtx, rtx, rtx);
extern rtx        gen_muldi3_mult3                    (rtx, rtx, rtx);
extern rtx        gen_mulsi3_internal                 (rtx, rtx, rtx);
extern rtx        gen_muldi3_internal                 (rtx, rtx, rtx);
extern rtx        gen_mulsi3_r4000                    (rtx, rtx, rtx);
extern rtx        gen_muldi3_r4000                    (rtx, rtx, rtx);
extern rtx        gen_mulsidi3_32bit_internal         (rtx, rtx, rtx);
extern rtx        gen_umulsidi3_32bit_internal        (rtx, rtx, rtx);
extern rtx        gen_mulsidi3_32bit_r4000            (rtx, rtx, rtx);
extern rtx        gen_umulsidi3_32bit_r4000           (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_internal       (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_internal       (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_mulhi_internal (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_mulhi_internal (rtx, rtx, rtx);
extern rtx        gen_smuldi3_highpart                (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                (rtx, rtx, rtx);
extern rtx        gen_madsi                           (rtx, rtx, rtx);
extern rtx        gen_divmodsi4                       (rtx, rtx, rtx, rtx);
extern rtx        gen_divmoddi4                       (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmoddi4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                         (rtx, rtx);
extern rtx        gen_sqrtdf2                         (rtx, rtx);
extern rtx        gen_sqrtv2sf2                       (rtx, rtx);
extern rtx        gen_abssi2                          (rtx, rtx);
extern rtx        gen_absdi2                          (rtx, rtx);
extern rtx        gen_abssf2                          (rtx, rtx);
extern rtx        gen_absdf2                          (rtx, rtx);
extern rtx        gen_absv2sf2                        (rtx, rtx);
extern rtx        gen_ffssi2                          (rtx, rtx);
extern rtx        gen_ffsdi2                          (rtx, rtx);
extern rtx        gen_clzsi2                          (rtx, rtx);
extern rtx        gen_clzdi2                          (rtx, rtx);
extern rtx        gen_negsi2                          (rtx, rtx);
extern rtx        gen_negdi2                          (rtx, rtx);
extern rtx        gen_negsf2                          (rtx, rtx);
extern rtx        gen_negdf2                          (rtx, rtx);
extern rtx        gen_negv2sf2                        (rtx, rtx);
extern rtx        gen_one_cmplsi2                     (rtx, rtx);
extern rtx        gen_one_cmpldi2                     (rtx, rtx);
extern rtx        gen_truncdfsf2                      (rtx, rtx);
extern rtx        gen_truncdisi2                      (rtx, rtx);
extern rtx        gen_truncdihi2                      (rtx, rtx);
extern rtx        gen_truncdiqi2                      (rtx, rtx);
extern rtx        gen_zero_extendsidi2                (rtx, rtx);
extern rtx        gen_extendsidi2                     (rtx, rtx);
extern rtx        gen_extendqihi2                     (rtx, rtx);
extern rtx        gen_extendsfdf2                     (rtx, rtx);
extern rtx        gen_fix_truncdfsi2_insn             (rtx, rtx);
extern rtx        gen_fix_truncdfsi2_macro            (rtx, rtx);
extern rtx        gen_fix_truncsfsi2_insn             (rtx, rtx);
extern rtx        gen_fix_truncsfsi2_macro            (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                  (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                  (rtx, rtx);
extern rtx        gen_floatsidf2                      (rtx, rtx);
extern rtx        gen_floatdidf2                      (rtx, rtx);
extern rtx        gen_floatsisf2                      (rtx, rtx);
extern rtx        gen_floatdisf2                      (rtx, rtx);
extern rtx        gen_mov_lwl                         (rtx, rtx, rtx);
extern rtx        gen_mov_ldl                         (rtx, rtx, rtx);
extern rtx        gen_mov_lwr                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_ldr                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_swl                         (rtx, rtx, rtx);
extern rtx        gen_mov_sdl                         (rtx, rtx, rtx);
extern rtx        gen_mov_swr                         (rtx, rtx, rtx);
extern rtx        gen_mov_sdr                         (rtx, rtx, rtx);
extern rtx        gen_movcc                           (rtx, rtx);
extern rtx        gen_movv2sf_hardfloat_64bit         (rtx, rtx);
extern rtx        gen_load_df_low                     (rtx, rtx);
extern rtx        gen_load_df_high                    (rtx, rtx, rtx);
extern rtx        gen_store_df_high                   (rtx, rtx);
extern rtx        gen_loadgp                          (rtx, rtx);
extern rtx        gen_loadgp_blockage                 (void);
extern rtx        gen_cprestore                       (rtx);
extern rtx        gen_rotrsi3                         (rtx, rtx, rtx);
extern rtx        gen_rotrdi3                         (rtx, rtx, rtx);
extern rtx        gen_branch_fp                       (rtx, rtx, rtx);
extern rtx        gen_branch_fp_inverted              (rtx, rtx, rtx);
extern rtx        gen_sunordered_sf                   (rtx, rtx, rtx);
extern rtx        gen_suneq_sf                        (rtx, rtx, rtx);
extern rtx        gen_sunlt_sf                        (rtx, rtx, rtx);
extern rtx        gen_sunle_sf                        (rtx, rtx, rtx);
extern rtx        gen_seq_sf                          (rtx, rtx, rtx);
extern rtx        gen_slt_sf                          (rtx, rtx, rtx);
extern rtx        gen_sle_sf                          (rtx, rtx, rtx);
extern rtx        gen_sunordered_df                   (rtx, rtx, rtx);
extern rtx        gen_suneq_df                        (rtx, rtx, rtx);
extern rtx        gen_sunlt_df                        (rtx, rtx, rtx);
extern rtx        gen_sunle_df                        (rtx, rtx, rtx);
extern rtx        gen_seq_df                          (rtx, rtx, rtx);
extern rtx        gen_slt_df                          (rtx, rtx, rtx);
extern rtx        gen_sle_df                          (rtx, rtx, rtx);
extern rtx        gen_sge_sf                          (rtx, rtx, rtx);
extern rtx        gen_sgt_sf                          (rtx, rtx, rtx);
extern rtx        gen_sunge_sf                        (rtx, rtx, rtx);
extern rtx        gen_sungt_sf                        (rtx, rtx, rtx);
extern rtx        gen_sge_df                          (rtx, rtx, rtx);
extern rtx        gen_sgt_df                          (rtx, rtx, rtx);
extern rtx        gen_sunge_df                        (rtx, rtx, rtx);
extern rtx        gen_sungt_df                        (rtx, rtx, rtx);
extern rtx        gen_jump                            (rtx);
extern rtx        gen_indirect_jumpsi                 (rtx);
extern rtx        gen_indirect_jumpdi                 (rtx);
extern rtx        gen_tablejumpsi                     (rtx, rtx);
extern rtx        gen_tablejumpdi                     (rtx, rtx);
extern rtx        gen_blockage                        (void);
extern rtx        gen_return                          (void);
extern rtx        gen_return_internal                 (rtx);
extern rtx        gen_eh_set_lr_si                    (rtx);
extern rtx        gen_eh_set_lr_di                    (rtx);
extern rtx        gen_exception_receiver              (void);
extern rtx        gen_load_callsi                     (rtx, rtx, rtx);
extern rtx        gen_load_calldi                     (rtx, rtx, rtx);
extern rtx        gen_sibcall_internal                (rtx, rtx);
extern rtx        gen_sibcall_value_internal          (rtx, rtx, rtx);
extern rtx        gen_sibcall_value_multiple_internal (rtx, rtx, rtx, rtx);
extern rtx        gen_call_internal                   (rtx, rtx);
extern rtx        gen_call_split                      (rtx, rtx);
extern rtx        gen_call_value_internal             (rtx, rtx, rtx);
extern rtx        gen_call_value_split                (rtx, rtx, rtx);
extern rtx        gen_call_value_multiple_internal    (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_multiple_split       (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch                        (rtx, rtx, rtx);
extern rtx        gen_nop                             (void);
extern rtx        gen_hazard_nop                      (void);
extern rtx        gen_consttable_int                  (rtx, rtx);
extern rtx        gen_consttable_float                (rtx);
extern rtx        gen_align                           (rtx);
extern rtx        gen_mips_cond_move_tf_ps            (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_pul_ps                     (rtx, rtx, rtx);
extern rtx        gen_mips_puu_ps                     (rtx, rtx, rtx);
extern rtx        gen_mips_pll_ps                     (rtx, rtx, rtx);
extern rtx        gen_mips_plu_ps                     (rtx, rtx, rtx);
extern rtx        gen_vec_initv2sf_internal           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2sf                 (rtx, rtx, rtx);
extern rtx        gen_mips_alnv_ps                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_addr_ps                    (rtx, rtx, rtx);
extern rtx        gen_mips_cvt_pw_ps                  (rtx, rtx);
extern rtx        gen_mips_cvt_ps_pw                  (rtx, rtx);
extern rtx        gen_mips_mulr_ps                    (rtx, rtx, rtx);
extern rtx        gen_mips_cabs_cond_s                (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_cabs_cond_d                (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_c_cond_4s                  (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mips_cabs_cond_4s               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mips_c_cond_ps                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_cabs_cond_ps               (rtx, rtx, rtx, rtx);
extern rtx        gen_bc1any4t                        (rtx, rtx);
extern rtx        gen_bc1any4f                        (rtx, rtx);
extern rtx        gen_bc1any2t                        (rtx, rtx);
extern rtx        gen_bc1any2f                        (rtx, rtx);
extern rtx        gen_mips_rsqrt1_s                   (rtx, rtx);
extern rtx        gen_mips_rsqrt1_d                   (rtx, rtx);
extern rtx        gen_mips_rsqrt1_ps                  (rtx, rtx);
extern rtx        gen_mips_rsqrt2_s                   (rtx, rtx, rtx);
extern rtx        gen_mips_rsqrt2_d                   (rtx, rtx, rtx);
extern rtx        gen_mips_rsqrt2_ps                  (rtx, rtx, rtx);
extern rtx        gen_mips_recip1_s                   (rtx, rtx);
extern rtx        gen_mips_recip1_d                   (rtx, rtx);
extern rtx        gen_mips_recip1_ps                  (rtx, rtx);
extern rtx        gen_mips_recip2_s                   (rtx, rtx, rtx);
extern rtx        gen_mips_recip2_d                   (rtx, rtx, rtx);
extern rtx        gen_mips_recip2_ps                  (rtx, rtx, rtx);
extern rtx        gen_conditional_trap                (rtx, rtx);
extern rtx        gen_addsi3                          (rtx, rtx, rtx);
extern rtx        gen_adddi3                          (rtx, rtx, rtx);
extern rtx        gen_mulsf3                          (rtx, rtx, rtx);
extern rtx        gen_muldf3                          (rtx, rtx, rtx);
extern rtx        gen_mulsi3                          (rtx, rtx, rtx);
extern rtx        gen_muldi3                          (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                        (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                       (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                (rtx, rtx, rtx);
extern rtx        gen_divsf3                          (rtx, rtx, rtx);
extern rtx        gen_divdf3                          (rtx, rtx, rtx);
extern rtx        gen_divv2sf3                        (rtx, rtx, rtx);
extern rtx        gen_andsi3                          (rtx, rtx, rtx);
extern rtx        gen_anddi3                          (rtx, rtx, rtx);
extern rtx        gen_iorsi3                          (rtx, rtx, rtx);
extern rtx        gen_iordi3                          (rtx, rtx, rtx);
extern rtx        gen_xorsi3                          (rtx, rtx, rtx);
extern rtx        gen_xordi3                          (rtx, rtx, rtx);
extern rtx        gen_zero_extendqisi2                (rtx, rtx);
extern rtx        gen_zero_extendqidi2                (rtx, rtx);
extern rtx        gen_zero_extendhisi2                (rtx, rtx);
extern rtx        gen_zero_extendhidi2                (rtx, rtx);
extern rtx        gen_zero_extendqihi2                (rtx, rtx);
extern rtx        gen_extendqisi2                     (rtx, rtx);
extern rtx        gen_extendqidi2                     (rtx, rtx);
extern rtx        gen_extendhisi2                     (rtx, rtx);
extern rtx        gen_extendhidi2                     (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                  (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2               (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2               (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2               (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2               (rtx, rtx);
extern rtx        gen_extv                            (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                           (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi                           (rtx, rtx);
extern rtx        gen_movsi                           (rtx, rtx);
extern rtx        gen_reload_incc                     (rtx, rtx, rtx);
extern rtx        gen_reload_outcc                    (rtx, rtx, rtx);
extern rtx        gen_movhi                           (rtx, rtx);
extern rtx        gen_movqi                           (rtx, rtx);
extern rtx        gen_movsf                           (rtx, rtx);
extern rtx        gen_movdf                           (rtx, rtx);
extern rtx        gen_movv2sf                         (rtx, rtx);
extern rtx        gen_mfhilo_si                       (rtx, rtx, rtx);
extern rtx        gen_mfhilo_di                       (rtx, rtx, rtx);
extern rtx        gen_movmemsi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                         (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                         (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                         (rtx, rtx, rtx);
extern rtx        gen_ashldi3                         (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                         (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                         (rtx, rtx, rtx);
extern rtx        gen_cmpsi                           (rtx, rtx);
extern rtx        gen_cmpdi                           (rtx, rtx);
extern rtx        gen_cmpsf                           (rtx, rtx);
extern rtx        gen_cmpdf                           (rtx, rtx);
extern rtx        gen_bunordered                      (rtx);
extern rtx        gen_bordered                        (rtx);
extern rtx        gen_bunlt                           (rtx);
extern rtx        gen_bunge                           (rtx);
extern rtx        gen_buneq                           (rtx);
extern rtx        gen_bltgt                           (rtx);
extern rtx        gen_bunle                           (rtx);
extern rtx        gen_bungt                           (rtx);
extern rtx        gen_beq                             (rtx);
extern rtx        gen_bne                             (rtx);
extern rtx        gen_bgt                             (rtx);
extern rtx        gen_bge                             (rtx);
extern rtx        gen_blt                             (rtx);
extern rtx        gen_ble                             (rtx);
extern rtx        gen_bgtu                            (rtx);
extern rtx        gen_bgeu                            (rtx);
extern rtx        gen_bltu                            (rtx);
extern rtx        gen_bleu                            (rtx);
extern rtx        gen_seq                             (rtx);
extern rtx        gen_sne                             (rtx);
extern rtx        gen_sgt                             (rtx);
extern rtx        gen_sge                             (rtx);
extern rtx        gen_slt                             (rtx);
extern rtx        gen_sle                             (rtx);
extern rtx        gen_sgtu                            (rtx);
extern rtx        gen_sgeu                            (rtx);
extern rtx        gen_sltu                            (rtx);
extern rtx        gen_sleu                            (rtx);
extern rtx        gen_indirect_jump                   (rtx);
extern rtx        gen_tablejump                       (rtx, rtx);
extern rtx        gen_builtin_setjmp_setup            (rtx);
extern rtx        gen_builtin_longjmp                 (rtx);
extern rtx        gen_prologue                        (void);
extern rtx        gen_epilogue                        (void);
extern rtx        gen_sibcall_epilogue                (void);
extern rtx        gen_eh_return                       (rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C), (D))
extern rtx        gen_sibcall                         (rtx, rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D))
extern rtx        gen_sibcall_value                   (rtx, rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C), (D))
extern rtx        gen_call                            (rtx, rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                      (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                    (rtx, rtx, rtx);
extern rtx        gen_movsicc                         (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                         (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                         (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                         (rtx, rtx, rtx, rtx);
extern rtx        gen_movv2sfcc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_initv2sf                    (rtx, rtx);
extern rtx        gen_vec_setv2sf                     (rtx, rtx, rtx);
extern rtx        gen_mips_cvt_ps_s                   (rtx, rtx, rtx);
extern rtx        gen_mips_cvt_s_pl                   (rtx, rtx);
extern rtx        gen_mips_cvt_s_pu                   (rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
