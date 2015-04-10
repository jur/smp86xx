/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:513 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const0_rtx);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:559 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:559 */
rtx
gen_adddf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:559 */
rtx
gen_addv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:798 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:798 */
rtx
gen_subdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:798 */
rtx
gen_subv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:807 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:807 */
rtx
gen_subdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:864 */
rtx
gen_mulv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:935 */
rtx
gen_mulsi3_mult3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:959 */
rtx
gen_muldi3_mult3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:996 */
rtx
gen_mulsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:996 */
rtx
gen_muldi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1006 */
rtx
gen_mulsi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1006 */
rtx
gen_muldi3_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1416 */
rtx
gen_mulsidi3_32bit_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1416 */
rtx
gen_umulsidi3_32bit_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1425 */
rtx
gen_mulsidi3_32bit_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1425 */
rtx
gen_umulsidi3_32bit_r4000 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1548 */
rtx
gen_smulsi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1548 */
rtx
gen_umulsi3_highpart_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1561 */
rtx
gen_smulsi3_highpart_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1561 */
rtx
gen_umulsi3_highpart_mulhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1599 */
rtx
gen_smuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1599 */
rtx
gen_umuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1617 */
rtx
gen_madsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1787 */
rtx
gen_divmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1787 */
rtx
gen_divmoddi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	operand1,
	operand2))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1799 */
rtx
gen_udivmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1799 */
rtx
gen_udivmoddi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1821 */
rtx
gen_sqrtsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1821 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1821 */
rtx
gen_sqrtv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V2SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1884 */
rtx
gen_abssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1884 */
rtx
gen_absdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1898 */
rtx
gen_abssf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1898 */
rtx
gen_absdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1898 */
rtx
gen_absv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1914 */
rtx
gen_ffssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1914 */
rtx
gen_ffsdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1953 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1953 */
rtx
gen_clzdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1968 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1981 */
rtx
gen_negdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1989 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1989 */
rtx
gen_negdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1989 */
rtx
gen_negv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V2SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1997 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1997 */
rtx
gen_one_cmpldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2135 */
rtx
gen_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2156 */
rtx
gen_truncdisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2167 */
rtx
gen_truncdihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2178 */
rtx
gen_truncdiqi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (QImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2283 */
rtx
gen_zero_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2383 */
rtx
gen_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2437 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2449 */
rtx
gen_extendsfdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2476 */
rtx
gen_fix_truncdfsi2_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2485 */
rtx
gen_fix_truncdfsi2_macro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2512 */
rtx
gen_fix_truncsfsi2_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2521 */
rtx
gen_fix_truncsfsi2_macro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2537 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2547 */
rtx
gen_fix_truncsfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2557 */
rtx
gen_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2567 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2577 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2587 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2833 */
rtx
gen_mov_lwl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2833 */
rtx
gen_mov_ldl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2843 */
rtx
gen_mov_lwr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	19));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2843 */
rtx
gen_mov_ldr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	19));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2854 */
rtx
gen_mov_swl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand1,
		operand2),
	20));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2854 */
rtx
gen_mov_sdl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand1,
		operand2),
	20));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2864 */
rtx
gen_mov_swr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	21));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2864 */
rtx
gen_mov_sdr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	21));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3312 */
rtx
gen_movcc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3724 */
rtx
gen_movv2sf_hardfloat_64bit (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3783 */
rtx
gen_load_df_low (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	0));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3797 */
rtx
gen_load_df_high (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3812 */
rtx
gen_store_df_high (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3827 */
rtx
gen_loadgp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	22);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3848 */
rtx
gen_loadgp_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_REG (DImode,
	28)),
	4);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3859 */
rtx
gen_cprestore (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	5);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4075 */
rtx
gen_rotrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4075 */
rtx
gen_rotrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4143 */
rtx
gen_branch_fp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), CCmode,
		operand2,
		const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4163 */
rtx
gen_branch_fp_inverted (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), CCmode,
		operand2,
		const0_rtx),
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sunordered_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_suneq_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sunlt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sunle_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_seq_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_slt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sle_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sunordered_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_suneq_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sunlt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sunle_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_seq_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_slt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
rtx
gen_sle_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sge_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sgt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sunge_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sungt_sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sge_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sgt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sunge_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
rtx
gen_sungt_df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (CCmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4605 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4660 */
rtx
gen_indirect_jumpsi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4660 */
rtx
gen_indirect_jumpdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4689 */
rtx
gen_tablejumpsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4689 */
rtx
gen_tablejumpdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4767 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	4);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4794 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4803 */
rtx
gen_return_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4831 */
rtx
gen_eh_set_lr_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	7),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4837 */
rtx
gen_eh_set_lr_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	7),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4853 */
rtx
gen_exception_receiver (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	28),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	6));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4888 */
rtx
gen_load_callsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (SImode,
	79)),
	23));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4888 */
rtx
gen_load_calldi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (DImode,
	79)),
	23));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4923 */
rtx
gen_sibcall_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4944 */
rtx
gen_sibcall_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4954 */
rtx
gen_sibcall_value_multiple_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5015 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5032 */
rtx
gen_call_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5054 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5073 */
rtx
gen_call_value_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5084 */
rtx
gen_call_value_multiple_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 31)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5106 */
rtx
gen_call_value_multiple_split (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_hard_reg_clobber (SImode, 31),
		gen_hard_reg_clobber (SImode, 28)));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5151 */
rtx
gen_prefetch (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5174 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5182 */
rtx
gen_hazard_nop (void)
{
  return const1_rtx;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5259 */
rtx
gen_consttable_int (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	8);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5271 */
rtx
gen_consttable_float (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	9);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5287 */
rtx
gen_align (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	14);
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:36 */
rtx
gen_mips_cond_move_tf_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	200));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:70 */
rtx
gen_mips_pul_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	operand1,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:82 */
rtx
gen_mips_puu_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	operand1,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:96 */
rtx
gen_mips_pll_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:110 */
rtx
gen_mips_plu_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (2)]));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:137 */
rtx
gen_vec_initv2sf_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:156 */
rtx
gen_vec_extractv2sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2))));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:226 */
rtx
gen_mips_alnv_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	202));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:238 */
rtx
gen_mips_addr_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	204));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:249 */
rtx
gen_mips_cvt_pw_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	205));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:259 */
rtx
gen_mips_cvt_ps_pw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	206));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:269 */
rtx
gen_mips_mulr_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	207));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:283 */
rtx
gen_mips_cabs_cond_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	203));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:283 */
rtx
gen_mips_cabs_cond_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	203));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:299 */
rtx
gen_mips_c_cond_4s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV4mode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	201));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:328 */
rtx
gen_mips_cabs_cond_4s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV4mode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	203));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:362 */
rtx
gen_mips_c_cond_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	201));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:373 */
rtx
gen_mips_cabs_cond_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	203));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:390 */
rtx
gen_bc1any4t (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCV4mode,
	operand0,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:402 */
rtx
gen_bc1any4f (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCV4mode,
	operand0,
	constm1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:414 */
rtx
gen_bc1any2t (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCV2mode,
	operand0,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:426 */
rtx
gen_bc1any2f (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCV2mode,
	operand0,
	constm1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:441 */
rtx
gen_mips_rsqrt1_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	208));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:441 */
rtx
gen_mips_rsqrt1_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	208));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:441 */
rtx
gen_mips_rsqrt1_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	208));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:450 */
rtx
gen_mips_rsqrt2_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	209));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:450 */
rtx
gen_mips_rsqrt2_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	209));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:450 */
rtx
gen_mips_rsqrt2_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	209));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:460 */
rtx
gen_mips_recip1_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	210));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:460 */
rtx
gen_mips_recip1_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	210));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:460 */
rtx
gen_mips_recip1_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	210));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:469 */
rtx
gen_mips_recip2_s (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	211));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:469 */
rtx
gen_mips_recip2_d (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	211));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:469 */
rtx
gen_mips_recip2_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	211));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:526 */
rtx
gen_conditional_trap (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_MODE_CLASS (GET_MODE (cmp_operands[0])) == MODE_INT
      && operands[1] == const0_rtx)
    {
      mips_gen_conditional_trap (operands);
      DONE;
    }
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand2,
		operand3),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:568 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:568 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:640 */
extern rtx gen_split_409 (rtx, rtx *);
rtx
gen_split_409 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val >= 0)
    {
      operands[1] = GEN_INT (0x7f);
      operands[2] = GEN_INT (val - 0x7f);
    }
  else
    {
      operands[1] = GEN_INT (- 0x80);
      operands[2] = GEN_INT (val + 0x80);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:669 */
extern rtx gen_split_410 (rtx, rtx *);
rtx
gen_split_410 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[2]);

  if (val >= 0)
    {
      operands[2] = GEN_INT (0x7);
      operands[3] = GEN_INT (val - 0x7);
    }
  else
    {
      operands[2] = GEN_INT (- 0x8);
      operands[3] = GEN_INT (val + 0x8);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:701 */
extern rtx gen_split_411 (rtx, rtx *);
rtx
gen_split_411 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val >= 0)
    {
      operands[1] = GEN_INT (0xf);
      operands[2] = GEN_INT (val - 0xf);
    }
  else
    {
      operands[1] = GEN_INT (- 0x10);
      operands[2] = GEN_INT (val + 0x10);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:730 */
extern rtx gen_split_412 (rtx, rtx *);
rtx
gen_split_412 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[2]);

  if (val >= 0)
    {
      operands[2] = GEN_INT (0x7);
      operands[3] = GEN_INT (val - 0x7);
    }
  else
    {
      operands[2] = GEN_INT (- 0x8);
      operands[3] = GEN_INT (val + 0x8);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:776 */
extern rtx gen_split_413 (rtx, rtx *);
rtx
gen_split_413 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{ operands[3] = gen_lowpart (SImode, operands[0]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:834 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:834 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:919 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (GENERATE_MULT3_SI)
    emit_insn (gen_mulsi3_mult3 (operands[0], operands[1], operands[2]));
  else if (!TARGET_FIX_R4000)
    emit_insn (gen_mulsi3_internal (operands[0], operands[1],
					operands[2]));
  else
    emit_insn (gen_mulsi3_r4000 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:919 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (GENERATE_MULT3_DI)
    emit_insn (gen_muldi3_mult3 (operands[0], operands[1], operands[2]));
  else if (!TARGET_FIX_R4000)
    emit_insn (gen_muldi3_internal (operands[0], operands[1],
					operands[2]));
  else
    emit_insn (gen_muldi3_r4000 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:979 */
extern rtx gen_peephole2_418 (rtx, rtx *);
rtx
gen_peephole2_418 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1027 */
extern rtx gen_peephole2_419 (rtx, rtx *);
rtx
gen_peephole2_419 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand0))),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)),
	copy_rtx (operand0))),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1085 */
extern rtx gen_split_420 (rtx, rtx *);
rtx
gen_split_420 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand6),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1104 */
extern rtx gen_split_421 (rtx, rtx *);
rtx
gen_split_421 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand6))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand5),
		copy_rtx (operand4)),
	26)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1166 */
extern rtx gen_split_422 (rtx, rtx *);
rtx
gen_split_422 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_NEG (SImode,
	operand3)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand2,
	copy_rtx (operand6)),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1229 */
extern rtx gen_peephole2_423 (rtx, rtx *);
rtx
gen_peephole2_423 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand3,
	copy_rtx (operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1260 */
extern rtx gen_peephole2_424 (rtx, rtx *);
rtx
gen_peephole2_424 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 1, "d", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
{
  operands[6] = XEXP (operands[4], GET_CODE (operands[4]) == PLUS ? 0 : 1);
  operands[7] = gen_rtx_fmt_ee (GET_CODE (operands[4]), SImode,
				operands[2], operands[0]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand6),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand7));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1296 */
extern rtx gen_peephole2_425 (rtx, rtx *);
rtx
gen_peephole2_425 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 2, "d", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
{
  operands[6] = XEXP (operands[4], GET_CODE (operands[4]) == PLUS ? 0 : 1);
  operands[7] = gen_rtx_fmt_ee (GET_CODE (operands[4]), SImode,
				operands[2], operands[0]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand6),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	operand7));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1340 */
extern rtx gen_split_426 (rtx, rtx *);
rtx
gen_split_426 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MULT (SImode,
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	copy_rtx (operand6))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1359 */
extern rtx gen_split_427 (rtx, rtx *);
rtx
gen_split_427 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	gen_rtx_MULT (SImode,
	operand2,
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand6))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand5),
		copy_rtx (operand4)),
	26)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1394 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT)
    {
      if (!TARGET_FIX_R4000)
	emit_insn (gen_mulsidi3_32bit_internal (operands[0], operands[1],
						   operands[2]));
      else
	emit_insn (gen_mulsidi3_32bit_r4000 (operands[0], operands[1],
					        operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1394 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT)
    {
      if (!TARGET_FIX_R4000)
	emit_insn (gen_umulsidi3_32bit_internal (operands[0], operands[1],
						   operands[2]));
      else
	emit_insn (gen_umulsidi3_32bit_r4000 (operands[0], operands[1],
					        operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1436 */
extern rtx gen_split_430 (rtx, rtx *);
rtx
gen_split_430 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2))),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	copy_rtx (operand1)),
	gen_rtx_SIGN_EXTEND (DImode,
	copy_rtx (operand2))),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand3),
		copy_rtx (operand4)),
	26)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand4),
		copy_rtx (operand3)),
	26)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand5),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand5),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (DImode,
	copy_rtx (operand0),
	copy_rtx (operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1436 */
extern rtx gen_split_431 (rtx, rtx *);
rtx
gen_split_431 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2))),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ASHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	copy_rtx (operand1)),
	gen_rtx_ZERO_EXTEND (DImode,
	copy_rtx (operand2))),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand3),
		copy_rtx (operand4)),
	26)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		copy_rtx (operand4),
		copy_rtx (operand3)),
	26)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand5),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand5),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (DImode,
	copy_rtx (operand0),
	copy_rtx (operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1529 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (ISA_HAS_MULHI)
    emit_insn (gen_smulsi3_highpart_mulhi_internal (operands[0],
						       operands[1],
						       operands[2]));
  else
    emit_insn (gen_smulsi3_highpart_internal (operands[0], operands[1],
					         operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1529 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (ISA_HAS_MULHI)
    emit_insn (gen_umulsi3_highpart_mulhi_internal (operands[0],
						       operands[1],
						       operands[2]));
  else
    emit_insn (gen_umulsi3_highpart_internal (operands[0], operands[1],
					         operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1726 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (const_1_operand (operands[1], SFmode))
    if (!(ISA_HAS_FP4 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1726 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (const_1_operand (operands[1], DFmode))
    if (!(ISA_HAS_FP4 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1726 */
rtx
gen_divv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (const_1_operand (operands[1], V2SFmode))
    if (!(ISA_HAS_FP4 && flag_unsafe_math_optimizations))
      operands[1] = force_reg (V2SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V2SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2021 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    operands[2] = force_reg (SImode, operands[2]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2021 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    operands[2] = force_reg (DImode, operands[2]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2051 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    operands[2] = force_reg (SImode, operands[2]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2051 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_MIPS16)
    operands[2] = force_reg (DImode, operands[2]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2081 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2081 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2214 */
extern rtx gen_split_443 (rtx, rtx *);
rtx
gen_split_443 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = gen_lowpart (DImode, operands[0]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (48)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (48)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2229 */
extern rtx gen_split_444 (rtx, rtx *);
rtx
gen_split_444 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = gen_lowpart (DImode, operands[0]); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (56)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (56)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2283 */
extern rtx gen_split_445 (rtx, rtx *);
rtx
gen_split_445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{ operands[1] = gen_lowpart (DImode, operands[1]); }
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && !memory_operand (operands[1], QImode))
    {
      emit_insn (gen_andsi3 (operands[0],
				     gen_lowpart (SImode, operands[1]),
				     force_reg (SImode,
						GEN_INT (0x00ff))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
rtx
gen_zero_extendqidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && !memory_operand (operands[1], QImode))
    {
      emit_insn (gen_anddi3 (operands[0],
				     gen_lowpart (DImode, operands[1]),
				     force_reg (DImode,
						GEN_INT (0x00ff))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && !memory_operand (operands[1], HImode))
    {
      emit_insn (gen_andsi3 (operands[0],
				     gen_lowpart (SImode, operands[1]),
				     force_reg (SImode,
						GEN_INT (0xffff))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
rtx
gen_zero_extendhidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && !memory_operand (operands[1], HImode))
    {
      emit_insn (gen_anddi3 (operands[0],
				     gen_lowpart (DImode, operands[1]),
				     force_reg (DImode,
						GEN_INT (0xffff))));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2334 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16 && !memory_operand (operands[1], QImode))
    {
      emit_insn (gen_zero_extendqisi2 (gen_lowpart (SImode, operands[0]),
				       operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2383 */
extern rtx gen_split_451 (rtx, rtx *);
rtx
gen_split_451 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_note (NOTE_INSN_DELETED);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
rtx
gen_extendqidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
rtx
gen_extendhidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
extern rtx gen_split_456 (rtx, rtx *);
rtx
gen_split_456 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
extern rtx gen_split_457 (rtx, rtx *);
rtx
gen_split_457 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (DImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (DImode)
			 - GET_MODE_BITSIZE (QImode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
extern rtx gen_split_458 (rtx, rtx *);
rtx
gen_split_458 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (SImode)
			 - GET_MODE_BITSIZE (HImode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
extern rtx gen_split_459 (rtx, rtx *);
rtx
gen_split_459 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (DImode, operands[1]);
  operands[2] = GEN_INT (GET_MODE_BITSIZE (DImode)
			 - GET_MODE_BITSIZE (HImode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2437 */
extern rtx gen_split_460 (rtx, rtx *);
rtx
gen_split_460 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{ operands[0] = gen_lowpart (SImode, operands[0]); }
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2464 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!ISA_HAS_TRUNC_W)
    {
      emit_insn (gen_fix_truncdfsi2_macro (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2500 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!ISA_HAS_TRUNC_W)
    {
      emit_insn (gen_fix_truncsfsi2_macro (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2597 */
rtx
gen_fixuns_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 31);

  if (reg1)			/* Turn off complaints about unreached code.  */
    {
      emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, DFmode));
      do_pending_stack_adjust ();

      emit_insn (gen_cmpdf (operands[1], reg1));
      emit_jump_insn (gen_bge (label1));

      emit_insn (gen_fix_truncdfsi2 (operands[0], operands[1]));
      emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
				   gen_rtx_LABEL_REF (VOIDmode, label2)));
      emit_barrier ();

      emit_label (label1);
      emit_move_insn (reg2, gen_rtx_MINUS (DFmode, operands[1], reg1));
      emit_move_insn (reg3, GEN_INT (trunc_int_for_mode
				     (BITMASK_HIGH, SImode)));

      emit_insn (gen_fix_truncdfsi2 (operands[0], reg2));
      emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

      emit_label (label2);

      /* Allow REG_NOTES to be set on last insn (labels don't have enough
	 fields, and can't be used for REG_NOTES anyway).  */
      emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2642 */
rtx
gen_fixuns_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (DFmode);
  rtx reg2 = gen_reg_rtx (DFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 63);

  emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, DFmode));
  do_pending_stack_adjust ();

  emit_insn (gen_cmpdf (operands[1], reg1));
  emit_jump_insn (gen_bge (label1));

  emit_insn (gen_fix_truncdfdi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  emit_move_insn (reg2, gen_rtx_MINUS (DFmode, operands[1], reg1));
  emit_move_insn (reg3, GEN_INT (BITMASK_HIGH));
  emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

  emit_insn (gen_fix_truncdfdi2 (operands[0], reg2));
  emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2684 */
rtx
gen_fixuns_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (SImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 31);

  emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, SFmode));
  do_pending_stack_adjust ();

  emit_insn (gen_cmpsf (operands[1], reg1));
  emit_jump_insn (gen_bge (label1));

  emit_insn (gen_fix_truncsfsi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  emit_move_insn (reg2, gen_rtx_MINUS (SFmode, operands[1], reg1));
  emit_move_insn (reg3, GEN_INT (trunc_int_for_mode
				 (BITMASK_HIGH, SImode)));

  emit_insn (gen_fix_truncsfsi2 (operands[0], reg2));
  emit_insn (gen_iorsi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2726 */
rtx
gen_fixuns_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx reg1 = gen_reg_rtx (SFmode);
  rtx reg2 = gen_reg_rtx (SFmode);
  rtx reg3 = gen_reg_rtx (DImode);
  rtx label1 = gen_label_rtx ();
  rtx label2 = gen_label_rtx ();
  REAL_VALUE_TYPE offset;

  real_2expN (&offset, 63);

  emit_move_insn (reg1, CONST_DOUBLE_FROM_REAL_VALUE (offset, SFmode));
  do_pending_stack_adjust ();

  emit_insn (gen_cmpsf (operands[1], reg1));
  emit_jump_insn (gen_bge (label1));

  emit_insn (gen_fix_truncsfdi2 (operands[0], operands[1]));
  emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx,
			       gen_rtx_LABEL_REF (VOIDmode, label2)));
  emit_barrier ();

  emit_label (label1);
  emit_move_insn (reg2, gen_rtx_MINUS (SFmode, operands[1], reg1));
  emit_move_insn (reg3, GEN_INT (BITMASK_HIGH));
  emit_insn (gen_ashldi3 (reg3, reg3, GEN_INT (32)));

  emit_insn (gen_fix_truncsfdi2 (operands[0], reg2));
  emit_insn (gen_iordi3 (operands[0], operands[0], reg3));

  emit_label (label2);

  /* Allow REG_NOTES to be set on last insn (labels don't have enough
     fields, and can't be used for REG_NOTES anyway).  */
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FIX (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2776 */
rtx
gen_extv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if (mips_expand_unaligned_load (operands[0], operands[1],
				  INTVAL (operands[2]),
				  INTVAL (operands[3])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (VOIDmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2791 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if (mips_expand_unaligned_load (operands[0], operands[1],
				  INTVAL (operands[2]),
				  INTVAL (operands[3])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2806 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if (mips_expand_unaligned_store (operands[0], operands[3],
				   INTVAL (operands[1]),
				   INTVAL (operands[2])))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2890 */
extern rtx gen_split_470 (rtx, rtx *);
rtx
gen_split_470 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = mips_unspec_address (operands[1], SYMBOL_64_HIGH);
  operands[3] = mips_unspec_address (operands[1], SYMBOL_64_MID);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand0),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2915 */
extern rtx gen_peephole2_471 (rtx, rtx *);
rtx
gen_peephole2_471 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (1, 1, "d", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
{
  operands[3] = mips_unspec_address (operands[2], SYMBOL_64_HIGH);
  operands[4] = mips_unspec_address (operands[2], SYMBOL_64_LOW);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_HIGH (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand1),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2943 */
extern rtx gen_split_472 (rtx, rtx *);
rtx
gen_split_472 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  operands[3] = mips_unspec_address (operands[1], SYMBOL_64_HIGH);
  operands[4] = mips_unspec_address (operands[1], SYMBOL_64_LOW);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_HIGH (DImode,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand0),
	copy_rtx (operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_LO_SUM (DImode,
	copy_rtx (operand2),
	copy_rtx (operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2964 */
extern rtx gen_split_473 (rtx, rtx *);
rtx
gen_split_473 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_GLOBAL);
  operands[3] = pic_offset_table_rtx;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2964 */
extern rtx gen_split_474 (rtx, rtx *);
rtx
gen_split_474 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_GLOBAL);
  operands[3] = pic_offset_table_rtx;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2979 */
extern rtx gen_split_475 (rtx, rtx *);
rtx
gen_split_475 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{ operands[3] = mips_unspec_address (operands[2], SYMBOL_GOTOFF_GLOBAL); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2979 */
extern rtx gen_split_476 (rtx, rtx *);
rtx
gen_split_476 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{ operands[3] = mips_unspec_address (operands[2], SYMBOL_GOTOFF_GLOBAL); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand3),
	24)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2994 */
extern rtx gen_split_477 (rtx, rtx *);
rtx
gen_split_477 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = pic_offset_table_rtx;
  operands[3] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_GLOBAL);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	24)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2994 */
extern rtx gen_split_478 (rtx, rtx *);
rtx
gen_split_478 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = pic_offset_table_rtx;
  operands[3] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_GLOBAL);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	24)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3011 */
extern rtx gen_split_479 (rtx, rtx *);
rtx
gen_split_479 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = pic_offset_table_rtx;
  operands[3] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_PAGE);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	24)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3011 */
extern rtx gen_split_480 (rtx, rtx *);
rtx
gen_split_480 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = pic_offset_table_rtx;
  operands[3] = mips_unspec_address (operands[1], SYMBOL_GOTOFF_PAGE);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	24)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3070 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (DImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3152 */
extern rtx gen_split_482 (rtx, rtx *);
rtx
gen_split_482 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else if (val >= 32 * 8)
    {
      int off = val & 7;

      operands[1] = GEN_INT (0x8 + off);
      operands[2] = GEN_INT (val - off - 0x8);
    }
  else
    {
      int off = val & 7;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3197 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (SImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3247 */
extern rtx gen_split_484 (rtx, rtx *);
rtx
gen_split_484 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else if (val >= 32 * 4)
    {
      int off = val & 3;

      operands[1] = GEN_INT (0x7c + off);
      operands[2] = GEN_INT (val - off - 0x7c);
    }
  else
    {
      int off = val & 3;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3289 */
extern rtx gen_split_485 (rtx, rtx *);
rtx
gen_split_485 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  int val = INTVAL (operands[1]);

  operands[1] = GEN_INT (0xff);
  operands[2] = GEN_INT (val - 0xff);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3335 */
rtx
gen_reload_incc (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  mips_emit_fcc_reload (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3345 */
rtx
gen_reload_outcc (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  mips_emit_fcc_reload (operands[0], operands[1], operands[2]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3393 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (HImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3455 */
extern rtx gen_split_489 (rtx, rtx *);
rtx
gen_split_489 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else if (val >= 32 * 2)
    {
      int off = val & 1;

      operands[1] = GEN_INT (0x7e + off);
      operands[2] = GEN_INT (val - off - 0x7e);
    }
  else
    {
      int off = val & 1;

      operands[1] = GEN_INT (off);
      operands[2] = GEN_INT (val - off);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (HImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3500 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (QImode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3550 */
extern rtx gen_split_491 (rtx, rtx *);
rtx
gen_split_491 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT val = INTVAL (operands[1]);

  if (val < 0)
    operands[2] = const0_rtx;
  else
    {
      operands[1] = GEN_INT (0x7f);
      operands[2] = GEN_INT (val - 0x7f);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (QImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3578 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (SFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3623 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (DFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3676 */
extern rtx gen_split_494 (rtx, rtx *);
rtx
gen_split_494 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_split_64bit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3687 */
extern rtx gen_split_495 (rtx, rtx *);
rtx
gen_split_495 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_split_64bit_move (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3700 */
extern rtx gen_split_496 (rtx, rtx *);
rtx
gen_split_496 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = gen_lowpart (SImode, operands[0]);
  operands[3] = GEN_INT (-INTVAL (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3715 */
rtx
gen_movv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (mips_legitimize_move (V2SFmode, operands[0], operands[1]))
    DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3747 */
rtx
gen_mfhilo_si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	26));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3747 */
rtx
gen_mfhilo_di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	26));
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3827 */
extern rtx gen_split_500 (rtx, rtx *);
rtx
gen_split_500 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = pic_offset_table_rtx;
  operands[3] = gen_rtx_HIGH (Pmode, operands[0]);
  operands[4] = gen_rtx_PLUS (Pmode, operands[2], operands[1]);
  operands[5] = gen_rtx_LO_SUM (Pmode, operands[2], operands[0]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3878 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if (mips_expand_block_move (operands[0], operands[1], operands[2]))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_ashlsi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashlsi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_ashrsi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashrsi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (SImode);

      emit_insn (gen_lshrsi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_lshrsi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (DImode);

      emit_insn (gen_ashldi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashldi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (DImode);

      emit_insn (gen_ashrdi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_ashrdi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  /* On the mips16, a shift of more than 8 is a four byte instruction,
     so, for a shift between 8 and 16, it is just as fast to do two
     shifts of 8 or less.  If there is a lot of shifting going on, we
     may win in CSE.  Otherwise combine will put the shifts back
     together again.  This can be called by function_arg, so we must
     be careful not to allocate a new register if we've reached the
     reload pass.  */
  if (TARGET_MIPS16
      && optimize
      && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 8
      && INTVAL (operands[2]) <= 16
      && !reload_in_progress
      && !reload_completed)
    {
      rtx temp = gen_reg_rtx (DImode);

      emit_insn (gen_lshrdi3 (temp, operands[1], GEN_INT (8)));
      emit_insn (gen_lshrdi3 (operands[0], temp,
				     GEN_INT (INTVAL (operands[2]) - 8)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
extern rtx gen_split_508 (rtx, rtx *);
rtx
gen_split_508 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
extern rtx gen_split_509 (rtx, rtx *);
rtx
gen_split_509 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
extern rtx gen_split_510 (rtx, rtx *);
rtx
gen_split_510 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
extern rtx gen_split_511 (rtx, rtx *);
rtx
gen_split_511 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
extern rtx gen_split_512 (rtx, rtx *);
rtx
gen_split_512 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
extern rtx gen_split_513 (rtx, rtx *);
rtx
gen_split_513 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 8); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4061 */
extern rtx gen_split_514 (rtx, rtx *);
rtx
gen_split_514 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4112 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  cmp_operands[0] = operands[0];
  cmp_operands[1] = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4112 */
rtx
gen_cmpdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  cmp_operands[0] = operands[0];
  cmp_operands[1] = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4123 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  cmp_operands[0] = operands[0];
  cmp_operands[1] = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4123 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  cmp_operands[0] = operands[0];
  cmp_operands[1] = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNORDERED);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNORDERED (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, ORDERED);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_ORDERED (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNLT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNGE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_buneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNEQ);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNEQ (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LTGT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTGT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNLE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, UNGT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_beq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, EQ);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, NE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_blt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LT);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_ble (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GTU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, GEU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LTU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
rtx
gen_bleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  gen_conditional_branch (operands, LEU);
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (CCmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4317 */
rtx
gen_seq (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (EQ, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4345 */
rtx
gen_sne (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (NE, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4361 */
rtx
gen_sgt (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (GT, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4386 */
rtx
gen_sge (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (GE, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4402 */
rtx
gen_slt (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (LT, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4432 */
rtx
gen_sle (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (LE, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4466 */
rtx
gen_sgtu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (GTU, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4491 */
rtx
gen_sgeu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (GEU, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4507 */
rtx
gen_sltu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (LTU, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4537 */
rtx
gen_sleu (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
{ if (mips_emit_scc (LEU, operands[0])) DONE; else FAIL; }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4648 */
rtx
gen_indirect_jump (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  operands[0] = force_reg (Pmode, operands[0]);
  if (Pmode == SImode)
    emit_jump_insn (gen_indirect_jumpsi (operands[0]));
  else
    emit_jump_insn (gen_indirect_jumpdi (operands[0]));
  DONE;
}
    operand0 = operands[0];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4667 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_MIPS16)
    operands[0] = expand_binop (Pmode, add_optab,
				convert_to_mode (Pmode, operands[0], false),
				gen_rtx_LABEL_REF (Pmode, operands[1]),
				0, 0, OPTAB_WIDEN);
  else if (TARGET_GPWORD)
    operands[0] = expand_binop (Pmode, add_optab, operands[0],
				pic_offset_table_rtx, 0, 0, OPTAB_WIDEN);

  if (Pmode == SImode)
    emit_jump_insn (gen_tablejumpsi (operands[0], operands[1]));
  else
    emit_jump_insn (gen_tablejumpdi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4703 */
rtx
gen_builtin_setjmp_setup (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  rtx addr;

  addr = plus_constant (operands[0], GET_MODE_SIZE (Pmode) * 3);
  emit_move_insn (gen_rtx_MEM (Pmode, addr), pic_offset_table_rtx);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4718 */
rtx
gen_builtin_longjmp (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  /* The elements of the buffer are, in order:  */
  int W = GET_MODE_SIZE (Pmode);
  rtx fp = gen_rtx_MEM (Pmode, operands[0]);
  rtx lab = gen_rtx_MEM (Pmode, plus_constant (operands[0], 1*W));
  rtx stack = gen_rtx_MEM (Pmode, plus_constant (operands[0], 2*W));
  rtx gpv = gen_rtx_MEM (Pmode, plus_constant (operands[0], 3*W));
  rtx pv = gen_rtx_REG (Pmode, PIC_FUNCTION_ADDR_REGNUM);
  /* Use gen_raw_REG to avoid being given pic_offset_table_rtx.
     The target is bound to be using $28 as the global pointer
     but the current function might not be.  */
  rtx gp = gen_raw_REG (Pmode, GLOBAL_POINTER_REGNUM);

  /* This bit is similar to expand_builtin_longjmp except that it
     restores $gp as well.  */
  emit_move_insn (hard_frame_pointer_rtx, fp);
  emit_move_insn (pv, lab);
  emit_stack_restore (SAVE_NONLOCAL, stack, NULL_RTX);
  emit_move_insn (gp, gpv);
  emit_insn (gen_rtx_USE (VOIDmode, hard_frame_pointer_rtx));
  emit_insn (gen_rtx_USE (VOIDmode, stack_pointer_rtx));
  emit_insn (gen_rtx_USE (VOIDmode, gp));
  emit_indirect_jump (pv);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4755 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
{
  mips_expand_prologue ();
  DONE;
}
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4775 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
{
  mips_expand_epilogue (false);
  DONE;
}
  }
  emit_insn (const_int_rtx[MAX_SAVED_CONST_INT + (2)]);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4783 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
{
  mips_expand_epilogue (true);
  DONE;
}
  }
  emit_insn (const_int_rtx[MAX_SAVED_CONST_INT + (2)]);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4812 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  enum machine_mode gpr_mode = TARGET_64BIT ? DImode : SImode;

  if (GET_MODE (operands[0]) != gpr_mode)
    operands[0] = convert_to_mode (gpr_mode, operands[0], 0);
  if (TARGET_64BIT)
    emit_insn (gen_eh_set_lr_di (operands[0]));
  else
    emit_insn (gen_eh_set_lr_si (operands[0]));

  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4843 */
extern rtx gen_split_555 (rtx, rtx *);
rtx
gen_split_555 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_set_return_address (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4853 */
extern rtx gen_split_556 (rtx, rtx *);
rtx
gen_split_556 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4912 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (0, XEXP (operands[0], 0), operands[1], operands[2], true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4932 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (operands[0], XEXP (operands[1], 0),
		    operands[2], operands[3], true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4967 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (0, XEXP (operands[0], 0), operands[1], operands[2], false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5015 */
extern rtx gen_split_560 (rtx, rtx *);
rtx
gen_split_560 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_call_insn (gen_call_split (operands[0], operands[1]));
  if (!find_reg_note (operands[2], REG_NORETURN, 0))
    mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5041 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  mips_expand_call (operands[0], XEXP (operands[1], 0),
		    operands[2], operands[3], false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5054 */
extern rtx gen_split_562 (rtx, rtx *);
rtx
gen_split_562 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_call_insn (gen_call_value_split (operands[0], operands[1],
					operands[2]));
  if (!find_reg_note (operands[3], REG_NORETURN, 0))
    mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5084 */
extern rtx gen_split_563 (rtx, rtx *);
rtx
gen_split_563 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
{
  emit_call_insn (gen_call_value_multiple_split (operands[0], operands[1],
						 operands[2], operands[3]));
  if (!find_reg_note (operands[4], REG_NORETURN, 0))
    mips_restore_gp ();
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5121 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  int i;

  emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, const0_rtx));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  emit_insn (gen_blockage ());
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5227 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5227 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5239 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5239 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5293 */
extern rtx gen_split_569 (rtx, rtx *);
rtx
gen_split_569 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
{ operands[0] = mips_rewrite_small_data (operands[0]); }
  operand0 = operands[0];
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:49 */
rtx
gen_movv2sfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* We can only support MOVN.PS and MOVZ.PS.
     NOTE: MOVT.PS and MOVF.PS have different semantics from MOVN.PS and 
	   MOVZ.PS.  MOVT.PS and MOVF.PS depend on two CC values and move 
	   each item independently.  */

  if (GET_MODE_CLASS (GET_MODE (cmp_operands[0])) != MODE_INT)
    FAIL;

  gen_conditional_move (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V2SFmode,
	operand5,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:126 */
rtx
gen_vec_initv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx op0 = force_reg (SFmode, XVECEXP (operands[1], 0, 0));
  rtx op1 = force_reg (SFmode, XVECEXP (operands[1], 0, 1));
  emit_insn (gen_vec_initv2sf_internal (operands[0], op0, op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:174 */
rtx
gen_vec_setv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx temp;

  /* We don't have an insert instruction, so we duplicate the float, and
     then use a PUL instruction.  */
  temp = gen_reg_rtx (V2SFmode);
  emit_insn (gen_mips_cvt_ps_s (temp, operands[1], operands[1]));
  if (INTVAL (operands[2]) == !BYTES_BIG_ENDIAN)
    emit_insn (gen_mips_pul_ps (operands[0], temp, operands[0]));
  else
    emit_insn (gen_mips_pul_ps (operands[0], operands[0], temp));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:194 */
rtx
gen_mips_cvt_ps_s (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (BYTES_BIG_ENDIAN)
    emit_insn (gen_vec_initv2sf_internal (operands[0], operands[1],
	       operands[2]));
  else
    emit_insn (gen_vec_initv2sf_internal (operands[0], operands[2],
	       operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:210 */
rtx
gen_mips_cvt_s_pl (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{ operands[2] = GEN_INT (BYTES_BIG_ENDIAN); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:218 */
rtx
gen_mips_cvt_s_pu (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{ operands[2] = GEN_INT (!BYTES_BIG_ENDIAN); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:299 */
extern rtx gen_split_576 (rtx, rtx *);
rtx
gen_split_576 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
{
  operands[6] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 0);
  operands[7] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand5),
	201)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand3,
		operand4,
		copy_rtx (operand5)),
	201)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:328 */
extern rtx gen_split_577 (rtx, rtx *);
rtx
gen_split_577 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
{
  operands[6] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 0);
  operands[7] = simplify_gen_subreg (CCV2mode, operands[0], CCV4mode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand5),
	203)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (CCV2mode,
	gen_rtvec (3,
		operand3,
		operand4,
		copy_rtx (operand5)),
	203)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 349:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 31);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 28);
      break;

    case 348:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 31);
      break;

    case 347:
    case 345:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 31);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 28);
      break;

    case 346:
    case 344:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 31);
      break;

    case 167:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      break;

    case 165:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 46:
    case 45:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 38:
    case 37:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 39:
    case 36:
    case 33:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 337:
    case 183:
    case 60:
    case 59:
    case 44:
    case 43:
    case 30:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 336:
    case 61:
    case 54:
    case 53:
    case 29:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 107:
    case 32:
    case 28:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 106:
    case 58:
    case 57:
    case 56:
    case 55:
    case 40:
    case 35:
    case 34:
    case 31:
    case 27:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 167:
    case 165:
    case 46:
    case 45:
    case 38:
    case 37:
    case 39:
    case 36:
    case 33:
    case 337:
    case 183:
    case 60:
    case 59:
    case 44:
    case 43:
    case 30:
    case 336:
    case 61:
    case 54:
    case 53:
    case 29:
    case 107:
    case 32:
    case 28:
    case 106:
    case 58:
    case 57:
    case 56:
    case 55:
    case 40:
    case 35:
    case 34:
    case 31:
    case 27:
      return 0;

    case 349:
    case 348:
    case 347:
    case 345:
    case 346:
    case 344:
      return 1;

    default:
      gcc_unreachable ();
    }
}
