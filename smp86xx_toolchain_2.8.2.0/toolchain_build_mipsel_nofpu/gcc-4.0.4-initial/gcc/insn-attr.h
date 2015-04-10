/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_got
enum attr_got {GOT_UNSET, GOT_XGOT_HIGH, GOT_LOAD};
extern enum attr_got get_attr_got (rtx);

#define HAVE_ATTR_jal
enum attr_jal {JAL_UNSET, JAL_DIRECT, JAL_INDIRECT};
extern enum attr_jal get_attr_jal (rtx);

#define HAVE_ATTR_jal_macro
enum attr_jal_macro {JAL_MACRO_NO, JAL_MACRO_YES};
extern enum attr_jal_macro get_attr_jal_macro (rtx);

#define HAVE_ATTR_type
enum attr_type {TYPE_UNKNOWN, TYPE_BRANCH, TYPE_JUMP, TYPE_CALL, TYPE_LOAD, TYPE_FPLOAD, TYPE_FPIDXLOAD, TYPE_STORE, TYPE_FPSTORE, TYPE_FPIDXSTORE, TYPE_PREFETCH, TYPE_PREFETCHX, TYPE_CONDMOVE, TYPE_XFER, TYPE_MTHILO, TYPE_MFHILO, TYPE_CONST, TYPE_ARITH, TYPE_SHIFT, TYPE_SLT, TYPE_CLZ, TYPE_TRAP, TYPE_IMUL, TYPE_IMADD, TYPE_IDIV, TYPE_FMOVE, TYPE_FADD, TYPE_FMUL, TYPE_FMADD, TYPE_FDIV, TYPE_FRDIV, TYPE_FRDIV1, TYPE_FRDIV2, TYPE_FABS, TYPE_FNEG, TYPE_FCMP, TYPE_FCVT, TYPE_FSQRT, TYPE_FRSQRT, TYPE_FRSQRT1, TYPE_FRSQRT2, TYPE_MULTI, TYPE_NOP};
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_mode
enum attr_mode {MODE_UNKNOWN, MODE_NONE, MODE_QI, MODE_HI, MODE_SI, MODE_DI, MODE_SF, MODE_DF, MODE_FPSW};
extern enum attr_mode get_attr_mode (rtx);

#define HAVE_ATTR_extended_mips16
enum attr_extended_mips16 {EXTENDED_MIPS16_NO, EXTENDED_MIPS16_YES};
extern enum attr_extended_mips16 get_attr_extended_mips16 (rtx);

#define HAVE_ATTR_length
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_cpu
enum attr_cpu {CPU_DEFAULT, CPU_4KC, CPU_5KC, CPU_20KC, CPU_M4K, CPU_R3000, CPU_R3900, CPU_R6000, CPU_R4000, CPU_R4100, CPU_R4111, CPU_R4120, CPU_R4130, CPU_R4300, CPU_R4600, CPU_R4650, CPU_R5000, CPU_R5400, CPU_R5500, CPU_R7000, CPU_R8000, CPU_R9000, CPU_SB1, CPU_SR71000};
extern enum attr_cpu get_attr_cpu (void);

#define HAVE_ATTR_hazard
enum attr_hazard {HAZARD_NONE, HAZARD_DELAY, HAZARD_HILO};
extern enum attr_hazard get_attr_hazard (rtx);

#define HAVE_ATTR_single_insn
enum attr_single_insn {SINGLE_INSN_NO, SINGLE_INSN_YES};
extern enum attr_single_insn get_attr_single_insn (rtx);

#define HAVE_ATTR_can_delay
enum attr_can_delay {CAN_DELAY_NO, CAN_DELAY_YES};
extern enum attr_can_delay get_attr_can_delay (rtx);

#define HAVE_ATTR_branch_likely
enum attr_branch_likely {BRANCH_LIKELY_NO, BRANCH_LIKELY_YES};
extern enum attr_branch_likely get_attr_branch_likely (void);

#define HAVE_ATTR_may_clobber_hilo
enum attr_may_clobber_hilo {MAY_CLOBBER_HILO_NO, MAY_CLOBBER_HILO_YES};
extern enum attr_may_clobber_hilo get_attr_may_clobber_hilo (rtx);

#define HAVE_ATTR_vr4130_class
enum attr_vr4130_class {VR4130_CLASS_MUL, VR4130_CLASS_MEM, VR4130_CLASS_ALU};
extern enum attr_vr4130_class get_attr_vr4130_class (rtx);

#define HAVE_ATTR_sb1_fp_pipes
enum attr_sb1_fp_pipes {SB1_FP_PIPES_ONE, SB1_FP_PIPES_TWO};
extern enum attr_sb1_fp_pipes get_attr_sb1_fp_pipes (rtx);

#define DELAY_SLOTS
extern int num_delay_slots (rtx);
extern int eligible_for_delay (rtx, int, rtx, int);

extern int const_num_delay_slots (rtx);

#define ANNUL_IFFALSE_SLOTS
extern int eligible_for_annul_false (rtx, int, rtx, int);

#define INSN_SCHEDULING

/* DFA based pipeline interface.  */
#ifndef AUTOMATON_ALTS
#define AUTOMATON_ALTS 0
#endif


#ifndef AUTOMATON_STATE_ALTS
#define AUTOMATON_STATE_ALTS 0
#endif

#ifndef CPU_UNITS_QUERY
#define CPU_UNITS_QUERY 0
#endif

extern int max_dfa_issue_rate;

/* The following macro value is calculated from the
   automaton based pipeline description and is equal to
   maximal number of all insns described in constructions
   `define_insn_reservation' which can be issued on the
   same processor cycle. */
#define MAX_DFA_ISSUE_RATE max_dfa_issue_rate

/* Insn latency time defined in define_insn_reservation. */
extern int insn_default_latency (rtx);

/* Return nonzero if there is a bypass for given insn
   which is a data producer.  */
extern int bypass_p (rtx);

/* Insn latency time on data consumed by the 2nd insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int insn_latency (rtx, rtx);


#if AUTOMATON_ALTS
/* The following function returns number of alternative
   reservations of given insn.  It may be used for better
   insns scheduling heuristics. */
extern int insn_alts (rtx);

#endif

/* Maximal possible number of insns waiting results being
   produced by insns whose execution is not finished. */
extern int max_insn_queue_index;

/* Pointer to data describing current state of DFA.  */
typedef void *state_t;

/* Size of the data in bytes.  */
extern int state_size (void);

/* Initiate given DFA state, i.e. Set up the state
   as all functional units were not reserved.  */
extern void state_reset (state_t);
/* The following function returns negative value if given
   insn can be issued in processor state described by given
   DFA state.  In this case, the DFA state is changed to
   reflect the current and future reservations by given
   insn.  Otherwise the function returns minimal time
   delay to issue the insn.  This delay may be zero
   for superscalar or VLIW processors.  If the second
   parameter is NULL the function changes given DFA state
   as new processor cycle started.  */
extern int state_transition (state_t, rtx);

#if AUTOMATON_STATE_ALTS
/* The following function returns number of possible
   alternative reservations of given insn in given
   DFA state.  It may be used for better insns scheduling
   heuristics.  By default the function is defined if
   macro AUTOMATON_STATE_ALTS is defined because its
   implementation may require much memory.  */
extern int state_alts (state_t, rtx);
#endif

extern int min_issue_delay (state_t, rtx);
/* The following function returns nonzero if no one insn
   can be issued in current DFA state. */
extern int state_dead_lock_p (state_t);
/* The function returns minimal delay of issue of the 2nd
   insn after issuing the 1st insn in given DFA state.
   The 1st insn should be issued in given state (i.e.
    state_transition should return negative value for
    the insn and the state).  Data dependencies between
    the insns are ignored by the function.  */
extern int min_insn_conflict_delay (state_t, rtx, rtx);
/* The following function outputs reservations for given
   insn as they are described in the corresponding
   define_insn_reservation.  */
extern void print_reservation (FILE *, rtx);

#if CPU_UNITS_QUERY
/* The following function returns code of functional unit
   with given name (see define_cpu_unit). */
extern int get_cpu_unit_code (const char *);
/* The following function returns nonzero if functional
   unit with given code is currently reserved in given
   DFA state.  */
extern int cpu_unit_reservation_p (state_t, int);
#endif

/* Clean insn code cache.  It should be called if there
   is a chance that condition value in a
   define_insn_reservation will be changed after
   last call of dfa_start.  */
extern void dfa_clean_insn_cache (void);

/* Initiate and finish work with DFA.  They should be
   called as the first and the last interface
   functions.  */
extern void dfa_start (void);
extern void dfa_finish (void);

#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */
