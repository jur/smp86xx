/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, enum machine_mode);
extern int address_operand (rtx, enum machine_mode);
extern int register_operand (rtx, enum machine_mode);
extern int pmode_register_operand (rtx, enum machine_mode);
extern int scratch_operand (rtx, enum machine_mode);
extern int immediate_operand (rtx, enum machine_mode);
extern int const_int_operand (rtx, enum machine_mode);
extern int const_double_operand (rtx, enum machine_mode);
extern int nonimmediate_operand (rtx, enum machine_mode);
extern int nonmemory_operand (rtx, enum machine_mode);
extern int push_operand (rtx, enum machine_mode);
extern int pop_operand (rtx, enum machine_mode);
extern int memory_operand (rtx, enum machine_mode);
extern int indirect_operand (rtx, enum machine_mode);
extern int comparison_operator (rtx, enum machine_mode);
extern int const_uns_arith_operand (rtx, enum machine_mode);
extern int uns_arith_operand (rtx, enum machine_mode);
extern int const_arith_operand (rtx, enum machine_mode);
extern int arith_operand (rtx, enum machine_mode);
extern int sle_operand (rtx, enum machine_mode);
extern int sleu_operand (rtx, enum machine_mode);
extern int const_0_operand (rtx, enum machine_mode);
extern int reg_or_0_operand (rtx, enum machine_mode);
extern int const_1_operand (rtx, enum machine_mode);
extern int reg_or_1_operand (rtx, enum machine_mode);
extern int const_0_or_1_operand (rtx, enum machine_mode);
extern int fpr_operand (rtx, enum machine_mode);
extern int hilo_operand (rtx, enum machine_mode);
extern int lo_operand (rtx, enum machine_mode);
extern int fcc_reload_operand (rtx, enum machine_mode);
extern int pc_or_label_operand (rtx, enum machine_mode);
extern int const_call_insn_operand (rtx, enum machine_mode);
extern int call_insn_operand (rtx, enum machine_mode);
extern int move_operand (rtx, enum machine_mode);
extern int consttable_operand (rtx, enum machine_mode);
extern int symbolic_operand (rtx, enum machine_mode);
extern int general_symbolic_operand (rtx, enum machine_mode);
extern int global_got_operand (rtx, enum machine_mode);
extern int local_got_operand (rtx, enum machine_mode);
extern int stack_operand (rtx, enum machine_mode);
extern int macc_msac_operand (rtx, enum machine_mode);
extern int equality_operator (rtx, enum machine_mode);
extern int extend_operator (rtx, enum machine_mode);
extern int trap_comparison_operator (rtx, enum machine_mode);
extern int small_data_pattern (rtx, enum machine_mode);
#endif /* HAVE_MACHINE_MODES */
#endif /* tm-preds.h */
