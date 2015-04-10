/* Generated automatically from machmode.def and config/mips/mips-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:146 */
  BLKmode,                 /* machmode.def:150 */
  CCmode,                  /* machmode.def:178 */
  CCV2mode,                /* config/mips/mips-modes.def:33 */
  CCV4mode,                /* config/mips/mips-modes.def:37 */
  BImode,                  /* machmode.def:153 */
  QImode,                  /* machmode.def:158 */
  HImode,                  /* machmode.def:159 */
  SImode,                  /* machmode.def:160 */
  DImode,                  /* machmode.def:161 */
  TImode,                  /* machmode.def:162 */
  SFmode,                  /* machmode.def:173 */
  DFmode,                  /* machmode.def:174 */
  TFmode,                  /* config/mips/mips-modes.def:27 */
  CQImode,                 /* machmode.def:186 */
  CHImode,                 /* machmode.def:186 */
  CSImode,                 /* machmode.def:186 */
  CDImode,                 /* machmode.def:186 */
  CTImode,                 /* machmode.def:186 */
  SCmode,                  /* machmode.def:187 */
  DCmode,                  /* machmode.def:187 */
  TCmode,                  /* machmode.def:187 */
  V2SFmode,                /* config/mips/mips-modes.def:30 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCV4mode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = VOIDmode,
  MAX_MODE_VECTOR_INT = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V2SFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE
#define CONST_MODE_BASE_ALIGN

#endif /* insn-modes.h */
