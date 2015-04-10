/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"

static const char *
output_0 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (ISA_HAS_COND_TRAP)
    return "teq\t$0,$0";
  else if (TARGET_MIPS16)
    return "break 0";
  else
    return "break";
}
}

static const char * const output_6[] = {
  "addu\t%0,%1,%2",
  "addiu\t%0,%1,%2",
};

static const char * const output_7[] = {
  "daddu\t%0,%1,%2",
  "daddiu\t%0,%1,%2",
};

static const char * const output_12[] = {
  "addiu\t%0,%2",
  "addiu\t%0,%1,%2",
  "addu\t%0,%1,%2",
};

static const char * const output_13[] = {
  "daddiu\t%0,%2",
  "daddiu\t%0,%1,%2",
  "daddu\t%0,%1,%2",
};

static const char * const output_14[] = {
  "addu\t%0,%1,%2",
  "addiu\t%0,%1,%2",
};

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 1)
    return "mult\t%1,%2";
  if (TARGET_MAD
      || TARGET_MIPS5400
      || TARGET_MIPS5500
      || TARGET_MIPS7000
      || TARGET_MIPS9000
      || ISA_MIPS32
      || ISA_MIPS32R2
      || ISA_MIPS64)
    return "mul\t%0,%1,%2";
  return "mult\t%0,%1,%2";
}
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  static const char *const madd[] = { "madd\t%1,%2", "madd\t%0,%1,%2" };
  if (which_alternative == 2)
    return "#";
  if (ISA_HAS_MADD_MSUB && which_alternative != 0)
    return "#";
  return madd[which_alternative];
}
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 1)
    return "macc\t%0,%1,%2";
  else if (TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    /* The VR4130 assumes that there is a two-cycle latency between a macc
       that "writes" to $0 and an instruction that reads from it.  We avoid
       this by assigning to $1 instead.  */
    return "%[macc\t%@,%1,%2%]";
}
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 1)
    return "msac\t%0,%2,%3";
  else if (TARGET_MIPS5500)
    return "msub\t%2,%3";
  else
    return "msac\t$0,%2,%3";
}
}

static const char * const output_39[] = {
  "msub\t%2,%3",
  "#",
  "#",
};

static const char * const output_40[] = {
  "muls\t$0,%1,%2",
  "muls\t%0,%1,%2",
};

static const char *
output_51 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS5500)
    return "msub\t%1,%2";
  else
    return "msac\t$0,%1,%2";
}
}

static const char *
output_52 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS5500)
    return "msubu\t%1,%2";
  else
    return "msacu\t$0,%1,%2";
}
}

static const char * const output_55[] = {
  "mult\t%1,%2",
  "mulhi\t%0,%1,%2",
};

static const char * const output_56[] = {
  "multu\t%1,%2",
  "mulhiu\t%0,%1,%2",
};

static const char * const output_57[] = {
  "mulshi\t%.,%1,%2",
  "mulshi\t%0,%1,%2",
};

static const char * const output_58[] = {
  "mulshiu\t%.,%1,%2",
  "mulshiu\t%0,%1,%2",
};

static const char *
output_62 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MAD)
    return "mad\t%1,%2";
  else if (TARGET_MIPS5500)
    return "madd\t%1,%2";
  else
    /* See comment in *macc.  */
    return "%[macc\t%@,%1,%2%]";
}
}

static const char *
output_63 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MAD)
    return "madu\t%1,%2";
  else if (TARGET_MIPS5500)
    return "maddu\t%1,%2";
  else
    /* See comment in *macc.  */
    return "%[maccu\t%@,%1,%2%]";
}
}

static const char *
output_82 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "div.s\t%0,%1,%2\n\tmov.s\t%0,%0";
  else
    return "div.s\t%0,%1,%2";
}
}

static const char *
output_83 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "div.d\t%0,%1,%2\n\tmov.d\t%0,%0";
  else
    return "div.d\t%0,%1,%2";
}
}

static const char *
output_84 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "div.ps\t%0,%1,%2\n\tmov.ps\t%0,%0";
  else
    return "div.ps\t%0,%1,%2";
}
}

static const char *
output_85 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "recip.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "recip.s\t%0,%2";
}
}

static const char *
output_86 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "recip.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "recip.d\t%0,%2";
}
}

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "recip.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "recip.ps\t%0,%2";
}
}

static const char *
output_88 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("div\t$0,%1,%2", operands); }
}

static const char *
output_89 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("ddiv\t$0,%1,%2", operands); }
}

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("divu\t$0,%1,%2", operands); }
}

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_division ("ddivu\t$0,%1,%2", operands); }
}

static const char *
output_92 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "sqrt.s\t%0,%1\n\tmov.s\t%0,%0";
  else
    return "sqrt.s\t%0,%1";
}
}

static const char *
output_93 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "sqrt.d\t%0,%1\n\tmov.d\t%0,%0";
  else
    return "sqrt.d\t%0,%1";
}
}

static const char *
output_94 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "sqrt.ps\t%0,%1\n\tmov.ps\t%0,%0";
  else
    return "sqrt.ps\t%0,%1";
}
}

static const char *
output_95 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_96 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_97 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "rsqrt.ps\t%0,%2";
}
}

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.s\t%0,%2\n\tmov.s\t%0,%0";
  else
    return "rsqrt.s\t%0,%2";
}
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.d\t%0,%2\n\tmov.d\t%0,%0";
  else
    return "rsqrt.d\t%0,%2";
}
}

static const char *
output_100 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_FIX_SB1)
    return "rsqrt.ps\t%0,%2\n\tmov.ps\t%0,%0";
  else
    return "rsqrt.ps\t%0,%2";
}
}

static const char *
output_101 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[0]) == REGNO (operands[1]) && GENERATE_BRANCHLIKELY)
    return "%(bltzl\t%1,1f\n\tsubu\t%0,%.,%0\n%~1:%)";
  else
    return "%(bgez\t%1,1f\n\tmove\t%0,%1\n\tsubu\t%0,%.,%0\n%~1:%)";
}
}

static const char *
output_102 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[0]) == REGNO (operands[1]) && GENERATE_BRANCHLIKELY)
    return "%(bltzl\t%1,1f\n\tdsubu\t%0,%.,%0\n%~1:%)";
  else
    return "%(bgez\t%1,1f\n\tmove\t%0,%1\n\tdsubu\t%0,%.,%0\n%~1:%)";
}
}

static const char *
output_106 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (optimize && find_reg_note (insn, REG_DEAD, operands[1]))
    return "%(move\t%0,%.\n\tbeq\t%1,%.,2f\n%~1:\tand\t%2,%1,0x0001\n\taddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tsrl\t%1,%1,1\n%~2:%)";

  return "%(move\t%0,%.\n\tmove\t%3,%1\n\tbeq\t%3,%.,2f\n%~1:\tand\t%2,%3,0x0001\n\taddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tsrl\t%3,%3,1\n%~2:%)";
}
}

static const char *
output_107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (optimize && find_reg_note (insn, REG_DEAD, operands[1]))
    return "%(move\t%0,%.\n\tbeq\t%1,%.,2f\n%~1:\tand\t%2,%1,0x0001\n\tdaddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tdsrl\t%1,%1,1\n%~2:%)";

  return "%(move\t%0,%.\n\tmove\t%3,%1\n\tbeq\t%3,%.,2f\n%~1:\tand\t%2,%3,0x0001\n\tdaddu\t%0,%0,1\n\tbeq\t%2,%.,1b\n\tdsrl\t%3,%3,1\n%~2:%)";
}
}

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS16)
    return "neg\t%0,%1";
  else
    return "subu\t%0,%.,%1";
}
}

static const char *
output_115 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (TARGET_MIPS16)
    return "not\t%0,%1";
  else
    return "nor\t%0,%.,%1";
}
}

static const char * const output_117[] = {
  "and\t%0,%1,%2",
  "andi\t%0,%1,%x2",
};

static const char * const output_118[] = {
  "and\t%0,%1,%2",
  "andi\t%0,%1,%x2",
};

static const char * const output_121[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_122[] = {
  "or\t%0,%1,%2",
  "ori\t%0,%1,%x2",
};

static const char * const output_125[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_126[] = {
  "xor\t%0,%1,%2",
  "xori\t%0,%1,%x2",
};

static const char * const output_127[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_128[] = {
  "xor\t%0,%2",
  "cmpi\t%1,%2",
  "cmp\t%1,%2",
};

static const char * const output_132[] = {
  "sll\t%0,%1,0",
  "sw\t%1,%0",
};

static const char * const output_133[] = {
  "sll\t%0,%1,0",
  "sh\t%1,%0",
};

static const char * const output_134[] = {
  "sll\t%0,%1,0",
  "sb\t%1,%0",
};

static const char * const output_142[] = {
  "#",
  "lwu\t%0,%1",
};

static const char * const output_143[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_144[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_145[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_146[] = {
  "andi\t%0,%1,0xffff",
  "lhu\t%0,%1",
};

static const char * const output_151[] = {
  "andi\t%0,%1,0x00ff",
  "lbu\t%0,%1",
};

static const char * const output_153[] = {
  "#",
  "lw\t%0,%1",
};

static const char * const output_154[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_155[] = {
  "#",
  "lb\t%0,%1",
};

static const char * const output_156[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_157[] = {
  "#",
  "lh\t%0,%1",
};

static const char * const output_158[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char * const output_159[] = {
  "seb\t%0,%1",
  "lb\t%0,%1",
};

static const char * const output_160[] = {
  "seh\t%0,%1",
  "lh\t%0,%1",
};

static const char * const output_161[] = {
  "seh\t%0,%1",
  "lh\t%0,%1",
};

static const char *
output_165 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (set_nomacro)
    return ".set\tmacro\n\ttrunc.w.d %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.d %0,%1,%2";
}
}

static const char *
output_167 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (set_nomacro)
    return ".set\tmacro\n\ttrunc.w.s %0,%1,%2\n\t.set\tnomacro";
  else
    return "trunc.w.s %0,%1,%2";
}
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char * const output_219[] = {
  "move\t%0,%1",
  "li\t%0,%1",
  "lhu\t%0,%1",
  "sh\t%z1,%0",
  "mfc1\t%0,%1",
  "mtc1\t%1,%0",
  "mov.s\t%0,%1",
  "mt%0\t%1",
};

static const char * const output_220[] = {
  "move\t%0,%1",
  "move\t%0,%1",
  "move\t%0,%1",
  "li\t%0,%1",
  "#",
  "lhu\t%0,%1",
  "sh\t%1,%0",
};

static const char * const output_221[] = {
  "move\t%0,%1",
  "li\t%0,%1",
  "lbu\t%0,%1",
  "sb\t%z1,%0",
  "mfc1\t%0,%1",
  "mtc1\t%1,%0",
  "mov.s\t%0,%1",
  "mt%0\t%1",
};

static const char * const output_222[] = {
  "move\t%0,%1",
  "move\t%0,%1",
  "move\t%0,%1",
  "li\t%0,%1",
  "#",
  "lbu\t%0,%1",
  "sb\t%1,%0",
};

static const char *
output_223 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_224 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_225 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_226 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_227 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return mips_output_move (operands[0], operands[1]); }
}

static const char *
output_233 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[1]) == HI_REGNUM)
    return "macchi\t%0,%.,%.";
  else
    return "macc\t%0,%.,%.";
}
}

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (REGNO (operands[1]) == HI_REGNUM)
    return "dmacchi\t%0,%.,%.";
  else
    return "dmacc\t%0,%.,%.";
}
}

static const char *
output_235 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[0] = mips_subword (operands[0], 0);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[0] = mips_subword (operands[0], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[1] = mips_subword (operands[1], 1);
  return mips_output_move (operands[0], operands[1]);
}
}

static const char *
output_240 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (set_nomacro && which_alternative == 1)
    return ".set\tmacro\n\t.cprestore\t%0\n\t.set\tnomacro";
  else
    return ".cprestore\t%0";
}
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "sll\t%0,%1,%2";
}
}

static const char *
output_242 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "sra\t%0,%1,%2";
}
}

static const char *
output_243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (SImode) - 1));

  return "srl\t%0,%1,%2";
}
}

static const char *
output_244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsll\t%0,%1,%2";
}
}

static const char *
output_245 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsra\t%0,%1,%2";
}
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2])
			   & (GET_MODE_BITSIZE (DImode) - 1));

  return "dsrl\t%0,%1,%2";
}
}

static const char *
output_247 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sll\t%0,%1,%2";
}
}

static const char *
output_248 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "sra\t%0,%1,%2";
}
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);

  return "srl\t%0,%1,%2";
}
}

static const char *
output_250 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "sll\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sll\t%0,%1,%2";
}
}

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "sra\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "sra\t%0,%1,%2";
}
}

static const char *
output_252 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "srl\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x1f);
  return "srl\t%0,%1,%2";
}
}

static const char *
output_253 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    return "dsll\t%0,%2";

  operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);
  return "dsll\t%0,%1,%2";
}
}

static const char *
output_254 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsra\t%0,%2";
}
}

static const char *
output_255 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT (INTVAL (operands[2]) & 0x3f);

  return "dsrl\t%0,%2";
}
}

static const char *
output_257 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    gcc_assert (INTVAL (operands[2]) >= 0
		&& INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode));

  return "ror\t%0,%1,%2";
}
}

static const char *
output_258 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (GET_CODE (operands[2]) == CONST_INT)
    gcc_assert (INTVAL (operands[2]) >= 0
		&& INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode));

  return "dror\t%0,%1,%2";
}
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/1,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_260 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/1,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_261 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_262 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_263 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_264 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/0,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_265 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/0,
					 get_attr_length (insn));
}
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  return mips_output_conditional_branch (insn,
					 operands,
					 /*two_operands_p=*/1,
					 /*float_p=*/0,
					 /*inverted_p=*/1,
					 get_attr_length (insn));
}
}

static const char *
output_269 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[2] != pc_rtx)
    {
      if (which_alternative == 0)
	return "b%C0z\t%1,%2";
      else
	return "bt%C0z\t%2";
    }
  else
    {
      if (which_alternative == 0)
	return "b%N0z\t%1,%3";
      else
	return "bt%N0z\t%3";
    }
}
}

static const char *
output_270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (operands[2] != pc_rtx)
    {
      if (which_alternative == 0)
	return "b%C0z\t%1,%2";
      else
	return "bt%C0z\t%2";
    }
  else
    {
      if (which_alternative == 0)
	return "b%N0z\t%1,%3";
      else
	return "bt%N0z\t%3";
    }
}
}

static const char *
output_287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%0,%1,%2";
}
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "slt\t%1,%2";
}
}

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%0,%1,%2";
}
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_304 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = GEN_INT (INTVAL (operands[2]) + 1);
  return "sltu\t%1,%2";
}
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (flag_pic)
    {
      if (get_attr_length (insn) <= 8)
	return "%*b\t%l0%/";
      else
	{
	  output_asm_insn (mips_output_load_label (), operands);
	  return "%*jr\t%@%/%]";
	}
    }
  else
    return "%*j\t%l0%/";
}
}

static const char * const output_341[] = {
  "%*jr\t%0%/",
  "%*j\t%0%/",
};

static const char * const output_342[] = {
  "%*jr\t%1%/",
  "%*j\t%1%/",
};

static const char * const output_343[] = {
  "%*jr\t%1%/",
  "%*j\t%1%/",
};

static const char *
output_344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return TARGET_SPLIT_CALLS ? "#" : "%*jal\t%0%/"; }
}

static const char *
output_346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return TARGET_SPLIT_CALLS ? "#" : "%*jal\t%1%/"; }
}

static const char *
output_348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{ return TARGET_SPLIT_CALLS ? "#" : "%*jal\t%1%/"; }
}

static const char *
output_350 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[1] = mips_prefetch_cookie (operands[1], operands[2]);
  return "pref\t%1,%a0";
}
}

static const char *
output_351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = mips_prefetch_cookie (operands[2], operands[3]);
  return "prefx\t%2,%1(%0)";
}
}

static const char *
output_352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  operands[2] = mips_prefetch_cookie (operands[2], operands[3]);
  return "prefx\t%2,%1(%0)";
}
}

static const char *
output_354 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
    if (set_noreorder)
      return "nop";
    else
      return "#nop";
  }
}

static const char * const output_355[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_356[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_357[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_358[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_359[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_360[] = {
  "mov%T4\t%0,%z2,%1",
  "mov%t4\t%0,%z3,%1",
};

static const char * const output_361[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_362[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char * const output_363[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_364[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char * const output_365[] = {
  "mov%T4.s\t%0,%2,%1",
  "mov%t4.s\t%0,%3,%1",
};

static const char * const output_366[] = {
  "mov%T4.d\t%0,%2,%1",
  "mov%t4.d\t%0,%3,%1",
};

static const char *
output_367 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  assemble_integer (operands[0], INTVAL (operands[1]),
		    BITS_PER_UNIT * INTVAL (operands[1]), 1);
  return "";
}
}

static const char *
output_368 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  REAL_VALUE_TYPE d;

  gcc_assert (GET_CODE (operands[0]) == CONST_DOUBLE);
  REAL_VALUE_FROM_CONST_DOUBLE (d, operands[0]);
  assemble_real (d, GET_MODE (operands[0]),
		 GET_MODE_BITSIZE (GET_MODE (operands[0])));
  return "";
}
}

static const char * const output_370[] = {
  "mov%T4.ps\t%0,%2,%1",
  "mov%t4.ps\t%0,%3,%1",
};

static const char * const output_371[] = {
  "mov%T4.ps\t%0,%2,%1",
  "mov%t4.ps\t%0,%3,%1",
};

static const char * const output_372[] = {
  "movt.ps\t%0,%1,%3",
  "movf.ps\t%0,%2,%3",
};

static const char *
output_377 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (BYTES_BIG_ENDIAN)
    return "cvt.ps.s\t%0,%1,%2";
  else
    return "cvt.ps.s\t%0,%2,%1";
}
}

static const char *
output_378 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (INTVAL (operands[2]) == !BYTES_BIG_ENDIAN)
    return "cvt.s.pu\t%0,%1";
  else
    return "cvt.s.pl\t%0,%1";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    trap_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    trap_comparison_operator,
    "",
    DImode,
    0,
    0
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    DImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,Q",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "Q,O,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=l,X",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,*d,*d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,*d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,3,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,3",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,1",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=d,d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,*d,*d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,*d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,1,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h,h",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=h",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "+l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=h",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    const_1_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    const_1_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    const_1_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%d,d",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,t,t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,d,d",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0,d,d",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "d,K,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,W",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "d,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=d",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    general_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    stack_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    stack_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*x,*d,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,i,m,d,*J*d,*x,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m,*d",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d,*x",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*f,*d,*m,*x,*B*C*D,*B*C*D,*d,*m",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*f,*d*J,*m,*f,*f,*J*d,*d,*m,*B*C*D,*B*C*D",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,m",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,m,d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,e,d,m,*f,*f,*f,*d,*m,*d,*z,*x,*B*C*D,*B*C*D,*d,*m",
    SImode,
    0,
    1
  },
  {
    move_operand,
    "d,U,T,m,dJ,*f,*d*J,*m,*f,*f,*z,*d,*J*d,*d,*m,*B*C*D,*B*C*D",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,d,m",
    SImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,U,m,d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,*d,*d,*m,*d,*f,*f,*f,*m",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "z,*d,*m,*d,*f,*d,*f,*m,*f",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*d,*f,*f,*x",
    HImode,
    0,
    1
  },
  {
    move_operand,
    "d,I,m,dJ,*f,*d,*f,*d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m",
    HImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,d,m,*d,*f,*f,*x",
    QImode,
    0,
    1
  },
  {
    move_operand,
    "d,I,m,dJ,*f,*d,*f,*d",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,d,d,m",
    QImode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,K,N,m,d",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    SFmode,
    0,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*d,*f,*G*d,*m,*d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m",
    SFmode,
    0,
    1
  },
  {
    move_operand,
    "Gd,m,d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    SFmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "f,G,m,f,G,*d,*f,*d*G,*m,*d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,d,m,d,f,f",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "dG,m,dG,f,d,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,y,d,d,m",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "d,d,y,m,d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,m,*f,*d,*d,*d,*m",
    V2SFmode,
    0,
    1
  },
  {
    move_operand,
    "f,YG,m,f,YG,*d,*f,*d*YG,*m,*d",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "h,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,h",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "h,l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l,h",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "dJ,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "I,i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    SImode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "d,t",
    DImode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pc_or_label_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "dI",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t,t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "d,I",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sle_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sleu_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sleu_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    sleu_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=t",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    sleu_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    pmode_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "j,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c,S",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df,df",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "c",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=df",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "p",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "dJ,0",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "0,dJ",
    DImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    CCmode,
    0,
    0
  },
  {
    consttable_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d,d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "z,z",
    CCV2mode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    const_0_or_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCV4mode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=z",
    CCV2mode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCV4mode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "z",
    CCV2mode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "d",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    macc_msac_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    reg_or_1_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    reg_or_1_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    reg_or_1_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    uns_arith_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "d",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_symbolic_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    global_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    local_got_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    fcc_reload_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=&f",
    TFmode,
    0,
    1
  },
  {
    fcc_reload_operand,
    "=z",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    register_operand,
    "=&f",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    move_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    move_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arith_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_0_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    small_data_pattern,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_0_or_1_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    CCV4mode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:513 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_0 },
#else
    { 0, 0, output_0 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:542 */
  {
    "*conditional_trapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:542 */
  {
    "*conditional_trapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "t%C0\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:559 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:559 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:559 */
  {
    "addv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2sf3,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:574 */
  {
    "*addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[16],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:574 */
  {
    "*adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    0,
    &operand_data[19],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:589 */
  {
    "*addsi3_sp1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%$,%$,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[22],
    1,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:589 */
  {
    "*adddi3_sp1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%$,%$,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    1,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:601 */
  {
    "*addsi3_sp2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%$,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:601 */
  {
    "*adddi3_sp2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%$,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:613 */
  {
    "*addsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    0,
    &operand_data[28],
    3,
    0,
    3,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:613 */
  {
    "*adddi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    0,
    &operand_data[31],
    3,
    0,
    3,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:762 */
  {
    "*addsi3_extended",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    0,
    &operand_data[34],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:776 */
  {
    "*addsi3_extended_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    3,
    0,
    3,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:798 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:798 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:798 */
  {
    "subv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2sf3,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:807 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:807 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:816 */
  {
    "*subsi3_extended",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:841 */
  {
    "*mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:841 */
  {
    "*muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:854 */
  {
    "*mulsf3_r4300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.s\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:854 */
  {
    "*muldf3_r4300",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.d\t%0,%1,%2\n\tnop",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:864 */
  {
    "mulv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv2sf3,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:935 */
  {
    "mulsi3_mult3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    (insn_gen_fn) gen_mulsi3_mult3,
    &operand_data[49],
    5,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:959 */
  {
    "muldi3_mult3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_mult3,
    &operand_data[54],
    5,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:996 */
  {
    "mulsi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_internal,
    &operand_data[59],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:996 */
  {
    "muldi3_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_internal,
    &operand_data[63],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1006 */
  {
    "mulsi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_r4000,
    &operand_data[67],
    5,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1006 */
  {
    "muldi3_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2\n\tmflo\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3_r4000,
    &operand_data[54],
    5,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1061 */
  {
    "*mul_acc_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[72],
    7,
    0,
    3,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1124 */
  {
    "*macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    0,
    &operand_data[79],
    6,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1146 */
  {
    "*msac",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    0,
    &operand_data[85],
    6,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1166 */
  {
    "*msac_using_macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    7,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1192 */
  {
    "*macc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macc\t%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[92],
    5,
    4,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1207 */
  {
    "*msac2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msac\t%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[92],
    5,
    4,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1322 */
  {
    "*mul_sub_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_39 },
#else
    { 0, output_39, 0 },
#endif
    0,
    &operand_data[97],
    7,
    0,
    3,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1379 */
  {
    "*muls",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_40 },
#else
    { 0, output_40, 0 },
#endif
    0,
    &operand_data[104],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1416 */
  {
    "mulsidi3_32bit_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_32bit_internal,
    &operand_data[109],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1416 */
  {
    "umulsidi3_32bit_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_32bit_internal,
    &operand_data[109],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1425 */
  {
    "mulsidi3_32bit_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2\n\tmflo\t%L0;mfhi\t%M0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3_32bit_r4000,
    &operand_data[112],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1425 */
  {
    "umulsidi3_32bit_r4000",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2\n\tmflo\t%L0;mfhi\t%M0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3_32bit_r4000,
    &operand_data[112],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1436 */
  {
    "*mulsidi3_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[116],
    6,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1436 */
  {
    "*umulsidi3_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[116],
    6,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1483 */
  {
    "*mulsidi3_64bit_parts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[122],
    4,
    2,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1483 */
  {
    "*umulsidi3_64bit_parts",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[122],
    4,
    2,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1499 */
  {
    "*muls_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t$0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[109],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1499 */
  {
    "*mulsu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulsu\t$0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[109],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1510 */
  {
    "*msac_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_51 },
#else
    { 0, 0, output_51 },
#endif
    0,
    &operand_data[126],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1510 */
  {
    "*msacu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_52 },
#else
    { 0, 0, output_52 },
#endif
    0,
    &operand_data[126],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1548 */
  {
    "smulsi3_highpart_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_internal,
    &operand_data[130],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1548 */
  {
    "umulsi3_highpart_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "multu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_internal,
    &operand_data[130],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1561 */
  {
    "smulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_55 },
#else
    { 0, output_55, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart_mulhi_internal,
    &operand_data[134],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1561 */
  {
    "umulsi3_highpart_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_56 },
#else
    { 0, output_56, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart_mulhi_internal,
    &operand_data[134],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1578 */
  {
    "*smulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_57 },
#else
    { 0, output_57, 0 },
#endif
    0,
    &operand_data[134],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1578 */
  {
    "*umulsi3_highpart_neg_mulhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_58 },
#else
    { 0, output_58, 0 },
#endif
    0,
    &operand_data[134],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1599 */
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmult\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[139],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1599 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmultu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[139],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1617 */
  {
    "madsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mad\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_madsi,
    &operand_data[143],
    4,
    1,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1628 */
  {
    "*smul_acc_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_62 },
#else
    { 0, 0, output_62 },
#endif
    0,
    &operand_data[126],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1628 */
  {
    "*umul_acc_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_63 },
#else
    { 0, 0, output_63 },
#endif
    0,
    &operand_data[126],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1650 */
  {
    "*maddsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1650 */
  {
    "*madddf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1650 */
  {
    "*maddv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "madd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[155],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1660 */
  {
    "*msubsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1660 */
  {
    "*msubdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1660 */
  {
    "*msubv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "msub.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[155],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1670 */
  {
    "*nmaddsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1670 */
  {
    "*nmadddf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1670 */
  {
    "*nmaddv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[155],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1682 */
  {
    "*nmaddsf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.s\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1682 */
  {
    "*nmadddf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.d\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1682 */
  {
    "*nmaddv2sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmadd.ps\t%0,%3,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[155],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1694 */
  {
    "*nmsubsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1694 */
  {
    "*nmsubdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1694 */
  {
    "*nmsubv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[155],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1706 */
  {
    "*nmsubsf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.s\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[147],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1706 */
  {
    "*nmsubdf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.d\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1706 */
  {
    "*nmsubv2sf_fastmath",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmsub.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[155],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1749 */
  {
    "*divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_82 },
#else
    { 0, 0, output_82 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1749 */
  {
    "*divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_83 },
#else
    { 0, 0, output_83 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1749 */
  {
    "*divv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_84 },
#else
    { 0, 0, output_84 },
#endif
    0,
    &operand_data[13],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1767 */
  {
    "*recipsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_85 },
#else
    { 0, 0, output_85 },
#endif
    0,
    &operand_data[159],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1767 */
  {
    "*recipdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_86 },
#else
    { 0, 0, output_86 },
#endif
    0,
    &operand_data[162],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1767 */
  {
    "*recipv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_87 },
#else
    { 0, 0, output_87 },
#endif
    0,
    &operand_data[165],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1787 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_88 },
#else
    { 0, 0, output_88 },
#endif
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[168],
    4,
    2,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1787 */
  {
    "divmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_89 },
#else
    { 0, 0, output_89 },
#endif
    (insn_gen_fn) gen_divmoddi4,
    &operand_data[172],
    4,
    2,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1799 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_90 },
#else
    { 0, 0, output_90 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[168],
    4,
    2,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1799 */
  {
    "udivmoddi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    (insn_gen_fn) gen_udivmoddi4,
    &operand_data[172],
    4,
    2,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1821 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_92 },
#else
    { 0, 0, output_92 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[7],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1821 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_93 },
#else
    { 0, 0, output_93 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[10],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1821 */
  {
    "sqrtv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_94 },
#else
    { 0, 0, output_94 },
#endif
    (insn_gen_fn) gen_sqrtv2sf2,
    &operand_data[13],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1838 */
  {
    "*rsqrtsfa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_95 },
#else
    { 0, 0, output_95 },
#endif
    0,
    &operand_data[159],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1838 */
  {
    "*rsqrtdfa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_96 },
#else
    { 0, 0, output_96 },
#endif
    0,
    &operand_data[162],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1838 */
  {
    "*rsqrtv2sfa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_97 },
#else
    { 0, 0, output_97 },
#endif
    0,
    &operand_data[165],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1856 */
  {
    "*rsqrtsfb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    0,
    &operand_data[159],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1856 */
  {
    "*rsqrtdfb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    0,
    &operand_data[162],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1856 */
  {
    "*rsqrtv2sfb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_100 },
#else
    { 0, 0, output_100 },
#endif
    0,
    &operand_data[165],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1884 */
  {
    "abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_101 },
#else
    { 0, 0, output_101 },
#endif
    (insn_gen_fn) gen_abssi2,
    &operand_data[40],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1884 */
  {
    "absdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_102 },
#else
    { 0, 0, output_102 },
#endif
    (insn_gen_fn) gen_absdi2,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1898 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1898 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1898 */
  {
    "absv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv2sf2,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1914 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_106 },
#else
    { 0, 0, output_106 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[176],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1914 */
  {
    "ffsdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_107 },
#else
    { 0, 0, output_107 },
#endif
    (insn_gen_fn) gen_ffsdi2,
    &operand_data[180],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1953 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1953 */
  {
    "clzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dclz\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzdi2,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1968 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_110 },
#else
    { 0, 0, output_110 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[40],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1981 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsubu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1989 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1989 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1989 */
  {
    "negv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv2sf2,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1997 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_115 },
#else
    { 0, 0, output_115 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[40],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1997 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_116 },
#else
    { 0, 0, output_116 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2031 */
  {
    "*andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_117 },
#else
    { 0, output_117, 0 },
#endif
    0,
    &operand_data[184],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2031 */
  {
    "*anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_118 },
#else
    { 0, output_118, 0 },
#endif
    0,
    &operand_data[187],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2042 */
  {
    "*andsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[190],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2042 */
  {
    "*anddi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[193],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2061 */
  {
    "*iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_121 },
#else
    { 0, output_121, 0 },
#endif
    0,
    &operand_data[184],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2061 */
  {
    "*iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_122 },
#else
    { 0, output_122, 0 },
#endif
    0,
    &operand_data[187],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2072 */
  {
    "*iorsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[190],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2072 */
  {
    "*iordi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[193],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2088 */
  {
    "*mips.md:2088",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_125 },
#else
    { 0, output_125, 0 },
#endif
    0,
    &operand_data[184],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2088 */
  {
    "*mips.md:2088",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_126 },
#else
    { 0, output_126, 0 },
#endif
    0,
    &operand_data[187],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2099 */
  {
    "*mips.md:2099",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_127 },
#else
    { 0, output_127, 0 },
#endif
    0,
    &operand_data[196],
    3,
    0,
    3,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2099 */
  {
    "*mips.md:2099",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_128 },
#else
    { 0, output_128, 0 },
#endif
    0,
    &operand_data[199],
    3,
    0,
    3,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2117 */
  {
    "*norsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2117 */
  {
    "*nordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2135 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2156 */
  {
    "truncdisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_132 },
#else
    { 0, output_132, 0 },
#endif
    (insn_gen_fn) gen_truncdisi2,
    &operand_data[204],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2167 */
  {
    "truncdihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_133 },
#else
    { 0, output_133, 0 },
#endif
    (insn_gen_fn) gen_truncdihi2,
    &operand_data[206],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2178 */
  {
    "truncdiqi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_134 },
#else
    { 0, output_134, 0 },
#endif
    (insn_gen_fn) gen_truncdiqi2,
    &operand_data[208],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2191 */
  {
    "*mips.md:2191",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2201 */
  {
    "*mips.md:2201",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsra\t%0,%1,32",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2214 */
  {
    "*mips.md:2214",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2229 */
  {
    "*mips.md:2229",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2247 */
  {
    "*mips.md:2247",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2256 */
  {
    "*mips.md:2256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[210],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2265 */
  {
    "*mips.md:2265",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "andi\t%0,%1,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2283 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_142 },
#else
    { 0, output_142, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[215],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2315 */
  {
    "*zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_143 },
#else
    { 0, output_143, 0 },
#endif
    0,
    &operand_data[217],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2315 */
  {
    "*zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_144 },
#else
    { 0, output_144, 0 },
#endif
    0,
    &operand_data[219],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2315 */
  {
    "*zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_145 },
#else
    { 0, output_145, 0 },
#endif
    0,
    &operand_data[221],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2315 */
  {
    "*zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_146 },
#else
    { 0, output_146, 0 },
#endif
    0,
    &operand_data[223],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2326 */
  {
    "*zero_extendqisi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2326 */
  {
    "*zero_extendqidi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[227],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2326 */
  {
    "*zero_extendhisi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2326 */
  {
    "*zero_extendhidi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lhu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2347 */
  {
    "*zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_151 },
#else
    { 0, output_151, 0 },
#endif
    0,
    &operand_data[233],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2357 */
  {
    "*zero_extendqihi2_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lbu\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[235],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2383 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_153 },
#else
    { 0, output_153, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[237],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "*extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_154 },
#else
    { 0, output_154, 0 },
#endif
    0,
    &operand_data[217],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "*extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_155 },
#else
    { 0, output_155, 0 },
#endif
    0,
    &operand_data[219],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "*extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_156 },
#else
    { 0, output_156, 0 },
#endif
    0,
    &operand_data[221],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "*extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_157 },
#else
    { 0, output_157, 0 },
#endif
    0,
    &operand_data[223],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2424 */
  {
    "*extendqisi2_seb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    0,
    &operand_data[217],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2424 */
  {
    "*extendqidi2_seb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[219],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2424 */
  {
    "*extendhisi2_seh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    0,
    &operand_data[221],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2424 */
  {
    "*extendhidi2_seh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_161 },
#else
    { 0, output_161, 0 },
#endif
    0,
    &operand_data[223],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2437 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[233],
    2,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2449 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[239],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2476 */
  {
    "fix_truncdfsi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.d %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_insn,
    &operand_data[241],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2485 */
  {
    "fix_truncdfsi2_macro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_165 },
#else
    { 0, 0, output_165 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_macro,
    &operand_data[241],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2512 */
  {
    "fix_truncsfsi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.w.s %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2_insn,
    &operand_data[244],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2521 */
  {
    "fix_truncsfsi2_macro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_167 },
#else
    { 0, 0, output_167 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2_macro,
    &operand_data[244],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2537 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.d %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[247],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2547 */
  {
    "fix_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "trunc.l.s %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[249],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2557 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[251],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2567 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.d.l\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[253],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2577 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.w\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[255],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2587 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.s.l\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[257],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2833 */
  {
    "mov_lwl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwl\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_lwl,
    &operand_data[259],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2833 */
  {
    "mov_ldl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldl\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_ldl,
    &operand_data[262],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2843 */
  {
    "mov_lwr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwr\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_lwr,
    &operand_data[265],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2843 */
  {
    "mov_ldr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_ldr,
    &operand_data[269],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2854 */
  {
    "mov_swl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swl\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_swl,
    &operand_data[273],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2854 */
  {
    "mov_sdl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdl\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_sdl,
    &operand_data[276],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2864 */
  {
    "mov_swr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swr\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_swr,
    &operand_data[279],
    3,
    1,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2864 */
  {
    "mov_sdr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdr\t%z1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mov_sdr,
    &operand_data[282],
    3,
    1,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2890 */
  {
    "*lea_high64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[285],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2943 */
  {
    "*lea64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[285],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2964 */
  {
    "*xgot_hisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[288],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2964 */
  {
    "*xgot_hidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2979 */
  {
    "*xgot_losi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[292],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2979 */
  {
    "*xgot_lodi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[295],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2994 */
  {
    "*got_dispsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[288],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2994 */
  {
    "*got_dispdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[290],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3011 */
  {
    "*got_pagesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[298],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3011 */
  {
    "*got_pagedi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[300],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3030 */
  {
    "*load_gotsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[302],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3030 */
  {
    "*load_gotdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[305],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3045 */
  {
    "*lowsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[302],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3045 */
  {
    "*lowdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%1,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[305],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3054 */
  {
    "*lowsi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addiu\t%0,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[308],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3054 */
  {
    "*lowdi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "daddiu\t%0,%R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[311],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3083 */
  {
    "*movsi_ra",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sw\t$31,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[314],
    1,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3083 */
  {
    "*movdi_ra",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sd\t$31,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[315],
    1,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3091 */
  {
    "*movdi_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    0,
    &operand_data[316],
    2,
    0,
    10,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3102 */
  {
    "*movdi_32bit_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    0,
    &operand_data[318],
    2,
    0,
    8,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3113 */
  {
    "*movdi_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    0,
    &operand_data[320],
    2,
    0,
    15,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3124 */
  {
    "*movdi_64bit_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    0,
    &operand_data[322],
    2,
    0,
    8,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3209 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[324],
    2,
    0,
    17,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3220 */
  {
    "*movsi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[326],
    2,
    0,
    8,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3312 */
  {
    "movcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    (insn_gen_fn) gen_movcc,
    &operand_data[328],
    2,
    0,
    9,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3368 */
  {
    "*lwxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3368 */
  {
    "*ldxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[333],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3368 */
  {
    "*ldxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3368 */
  {
    "*lwxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[339],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3368 */
  {
    "*ldxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[342],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3368 */
  {
    "*ldxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[345],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3377 */
  {
    "*swxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[348],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3377 */
  {
    "*sdxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[351],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3377 */
  {
    "*sdxc1_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[354],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3377 */
  {
    "*swxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "swxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[357],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3377 */
  {
    "*sdxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[360],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3377 */
  {
    "*sdxc1_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdxc1\t%0,%1(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[363],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3402 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_219 },
#else
    { 0, output_219, 0 },
#endif
    0,
    &operand_data[366],
    2,
    0,
    8,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3421 */
  {
    "*movhi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_220 },
#else
    { 0, output_220, 0 },
#endif
    0,
    &operand_data[368],
    2,
    0,
    7,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3509 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_221 },
#else
    { 0, output_221, 0 },
#endif
    0,
    &operand_data[370],
    2,
    0,
    8,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3528 */
  {
    "*movqi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_222 },
#else
    { 0, output_222, 0 },
#endif
    0,
    &operand_data[372],
    2,
    0,
    7,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3587 */
  {
    "*movsf_hardfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_223 },
#else
    { 0, 0, output_223 },
#endif
    0,
    &operand_data[374],
    2,
    0,
    10,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3598 */
  {
    "*movsf_softfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_224 },
#else
    { 0, 0, output_224 },
#endif
    0,
    &operand_data[376],
    2,
    0,
    3,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3609 */
  {
    "*movsf_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_225 },
#else
    { 0, 0, output_225 },
#endif
    0,
    &operand_data[378],
    2,
    0,
    5,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3632 */
  {
    "*movdf_hardfloat_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_226 },
#else
    { 0, 0, output_226 },
#endif
    0,
    &operand_data[380],
    2,
    0,
    10,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3643 */
  {
    "*movdf_hardfloat_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_227 },
#else
    { 0, 0, output_227 },
#endif
    0,
    &operand_data[380],
    2,
    0,
    10,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3654 */
  {
    "*movdf_softfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    0,
    &operand_data[382],
    2,
    0,
    6,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3665 */
  {
    "*movdf_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    0,
    &operand_data[384],
    2,
    0,
    5,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3724 */
  {
    "movv2sf_hardfloat_64bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    (insn_gen_fn) gen_movv2sf_hardfloat_64bit,
    &operand_data[386],
    2,
    0,
    10,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3753 */
  {
    "*mfhilo_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mf%1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[388],
    3,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3753 */
  {
    "*mfhilo_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mf%1\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[391],
    3,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3763 */
  {
    "*mfhilo_si_macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_233 },
#else
    { 0, 0, output_233 },
#endif
    0,
    &operand_data[388],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3763 */
  {
    "*mfhilo_di_macc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    0,
    &operand_data[391],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3783 */
  {
    "load_df_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_235 },
#else
    { 0, 0, output_235 },
#endif
    (insn_gen_fn) gen_load_df_low,
    &operand_data[394],
    2,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3797 */
  {
    "load_df_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    (insn_gen_fn) gen_load_df_high,
    &operand_data[394],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3812 */
  {
    "store_df_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    (insn_gen_fn) gen_store_df_high,
    &operand_data[397],
    2,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3827 */
  {
    "loadgp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp,
    &operand_data[399],
    2,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3848 */
  {
    "loadgp_blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_loadgp_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3859 */
  {
    "cprestore",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_240 },
#else
    { 0, 0, output_240 },
#endif
    (insn_gen_fn) gen_cprestore,
    &operand_data[401],
    1,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3928 */
  {
    "*ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    0,
    &operand_data[402],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3928 */
  {
    "*ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_242 },
#else
    { 0, 0, output_242 },
#endif
    0,
    &operand_data[402],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3928 */
  {
    "*lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_243 },
#else
    { 0, 0, output_243 },
#endif
    0,
    &operand_data[402],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3928 */
  {
    "*ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_244 },
#else
    { 0, 0, output_244 },
#endif
    0,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3928 */
  {
    "*ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_245 },
#else
    { 0, 0, output_245 },
#endif
    0,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3928 */
  {
    "*lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    0,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3943 */
  {
    "*ashlsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_247 },
#else
    { 0, 0, output_247 },
#endif
    0,
    &operand_data[408],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3943 */
  {
    "*ashrsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_248 },
#else
    { 0, 0, output_248 },
#endif
    0,
    &operand_data[408],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3943 */
  {
    "*lshrsi3_extend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    0,
    &operand_data[408],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3958 */
  {
    "*ashlsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_250 },
#else
    { 0, 0, output_250 },
#endif
    0,
    &operand_data[411],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3958 */
  {
    "*ashrsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    0,
    &operand_data[411],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3958 */
  {
    "*lshrsi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_252 },
#else
    { 0, 0, output_252 },
#endif
    0,
    &operand_data[411],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3980 */
  {
    "*ashldi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_253 },
#else
    { 0, 0, output_253 },
#endif
    0,
    &operand_data[414],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4000 */
  {
    "*ashrdi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_254 },
#else
    { 0, 0, output_254 },
#endif
    0,
    &operand_data[417],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4019 */
  {
    "*lshrdi3_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_255 },
#else
    { 0, 0, output_255 },
#endif
    0,
    &operand_data[417],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4061 */
  {
    "*mips.md:4061",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[420],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4075 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_257 },
#else
    { 0, 0, output_257 },
#endif
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[402],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4075 */
  {
    "rotrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_258 },
#else
    { 0, 0, output_258 },
#endif
    (insn_gen_fn) gen_rotrdi3,
    &operand_data[405],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4143 */
  {
    "branch_fp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    (insn_gen_fn) gen_branch_fp,
    &operand_data[423],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4163 */
  {
    "branch_fp_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_260 },
#else
    { 0, 0, output_260 },
#endif
    (insn_gen_fn) gen_branch_fp_inverted,
    &operand_data[423],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4185 */
  {
    "*branch_zerosi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_261 },
#else
    { 0, 0, output_261 },
#endif
    0,
    &operand_data[426],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4185 */
  {
    "*branch_zerodi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_262 },
#else
    { 0, 0, output_262 },
#endif
    0,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4205 */
  {
    "*branch_zerosi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_263 },
#else
    { 0, 0, output_263 },
#endif
    0,
    &operand_data[426],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4205 */
  {
    "*branch_zerodi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_264 },
#else
    { 0, 0, output_264 },
#endif
    0,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4227 */
  {
    "*branch_equalitysi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_265 },
#else
    { 0, 0, output_265 },
#endif
    0,
    &operand_data[432],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4227 */
  {
    "*branch_equalitydi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    0,
    &operand_data[436],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4247 */
  {
    "*branch_equalitysi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    0,
    &operand_data[432],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4247 */
  {
    "*branch_equalitydi_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_268 },
#else
    { 0, 0, output_268 },
#endif
    0,
    &operand_data[436],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4269 */
  {
    "*branch_equalitysi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_269 },
#else
    { 0, 0, output_269 },
#endif
    0,
    &operand_data[440],
    4,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4269 */
  {
    "*branch_equalitydi_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_270 },
#else
    { 0, 0, output_270 },
#endif
    0,
    &operand_data[444],
    4,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4324 */
  {
    "*seq_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4324 */
  {
    "*seq_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4333 */
  {
    "*seq_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[448],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4333 */
  {
    "*seq_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4352 */
  {
    "*sne_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4352 */
  {
    "*sne_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4368 */
  {
    "*sgt_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4368 */
  {
    "*sgt_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4377 */
  {
    "*sgt_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4377 */
  {
    "*sgt_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[461],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4393 */
  {
    "*sge_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4393 */
  {
    "*sge_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4409 */
  {
    "*slt_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[402],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4409 */
  {
    "*slt_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[464],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4418 */
  {
    "*slt_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4418 */
  {
    "*slt_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "slt\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[470],
    3,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4439 */
  {
    "*sle_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_287 },
#else
    { 0, 0, output_287 },
#endif
    0,
    &operand_data[473],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4439 */
  {
    "*sle_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    0,
    &operand_data[476],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4451 */
  {
    "*sle_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    0,
    &operand_data[479],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4451 */
  {
    "*sle_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    0,
    &operand_data[482],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4473 */
  {
    "*sgtu_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4473 */
  {
    "*sgtu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%z2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4482 */
  {
    "*sgtu_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4482 */
  {
    "*sgtu_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[461],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4498 */
  {
    "*sge_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4498 */
  {
    "*sge_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%.,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4514 */
  {
    "*sltu_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[402],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4514 */
  {
    "*sltu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[464],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4523 */
  {
    "*sltu_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    3,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4523 */
  {
    "*sltu_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sltu\t%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[470],
    3,
    0,
    2,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4544 */
  {
    "*sleu_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    0,
    &operand_data[485],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4544 */
  {
    "*sleu_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_302 },
#else
    { 0, 0, output_302 },
#endif
    0,
    &operand_data[488],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4556 */
  {
    "*sleu_si_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    0,
    &operand_data[491],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4556 */
  {
    "*sleu_di_mips16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_304 },
#else
    { 0, 0, output_304 },
#endif
    0,
    &operand_data[494],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sunordered_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "suneq_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sunlt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sunle_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "seq_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "slt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sle_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sunordered_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.un.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunordered_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "suneq_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ueq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_suneq_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sunlt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunlt_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sunle_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunle_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "seq_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.eq.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_seq_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "slt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_slt_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4578 */
  {
    "sle_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sle_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sge_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sgt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sunge_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sungt_sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.s\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_sf,
    &operand_data[497],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sge_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.le.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sge_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sgt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.lt.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sgt_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sunge_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ule.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sunge_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4587 */
  {
    "sungt_df",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.ult.d\t%Z0%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sungt_df,
    &operand_data[500],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4605 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_327 },
#else
    { 0, 0, output_327 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[399],
    1,
    0,
    0,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4639 */
  {
    "*mips.md:4639",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "b\t%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[399],
    1,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4660 */
  {
    "indirect_jumpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jumpsi,
    &operand_data[41],
    1,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4660 */
  {
    "indirect_jumpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jumpdi,
    &operand_data[44],
    1,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4689 */
  {
    "tablejumpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tablejumpsi,
    &operand_data[503],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4689 */
  {
    "tablejumpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_tablejumpdi,
    &operand_data[505],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4767 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4794 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t$31%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4803 */
  {
    "return_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*j\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_return_internal,
    &operand_data[507],
    1,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4831 */
  {
    "eh_set_lr_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_si,
    &operand_data[177],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4837 */
  {
    "eh_set_lr_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_di,
    &operand_data[181],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4853 */
  {
    "exception_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_exception_receiver,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4888 */
  {
    "load_callsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lw\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_callsi,
    &operand_data[508],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4888 */
  {
    "load_calldi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld\t%0,%R2(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_calldi,
    &operand_data[511],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4923 */
  {
    "sibcall_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_341 },
#else
    { 0, output_341, 0 },
#endif
    (insn_gen_fn) gen_sibcall_internal,
    &operand_data[514],
    2,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4944 */
  {
    "sibcall_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_342 },
#else
    { 0, output_342, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value_internal,
    &operand_data[516],
    3,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4954 */
  {
    "sibcall_value_multiple_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_343 },
#else
    { 0, output_343, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value_multiple_internal,
    &operand_data[516],
    4,
    2,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5015 */
  {
    "call_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_344 },
#else
    { 0, 0, output_344 },
#endif
    (insn_gen_fn) gen_call_internal,
    &operand_data[520],
    2,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5032 */
  {
    "call_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*jalr\t%0%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_call_split,
    &operand_data[522],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5054 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_346 },
#else
    { 0, 0, output_346 },
#endif
    (insn_gen_fn) gen_call_value_internal,
    &operand_data[519],
    3,
    0,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5073 */
  {
    "call_value_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*jalr\t%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_call_value_split,
    &operand_data[524],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5084 */
  {
    "call_value_multiple_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_348 },
#else
    { 0, 0, output_348 },
#endif
    (insn_gen_fn) gen_call_value_multiple_internal,
    &operand_data[527],
    4,
    2,
    2,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5106 */
  {
    "call_value_multiple_split",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*jalr\t%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_call_value_multiple_split,
    &operand_data[531],
    4,
    2,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5151 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_350 },
#else
    { 0, 0, output_350 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[535],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5162 */
  {
    "*prefetch_indexed_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_351 },
#else
    { 0, 0, output_351 },
#endif
    0,
    &operand_data[538],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5162 */
  {
    "*prefetch_indexed_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_352 },
#else
    { 0, 0, output_352 },
#endif
    0,
    &operand_data[542],
    4,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5174 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%(nop%)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5182 */
  {
    "hazard_nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_354 },
#else
    { 0, 0, output_354 },
#endif
    (insn_gen_fn) gen_hazard_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5195 */
  {
    "*movsi_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_355 },
#else
    { 0, output_355, 0 },
#endif
    0,
    &operand_data[546],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5195 */
  {
    "*movdi_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_356 },
#else
    { 0, output_356, 0 },
#endif
    0,
    &operand_data[551],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5195 */
  {
    "*movsi_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_357 },
#else
    { 0, output_357, 0 },
#endif
    0,
    &operand_data[556],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5195 */
  {
    "*movdi_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_358 },
#else
    { 0, output_358, 0 },
#endif
    0,
    &operand_data[561],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5195 */
  {
    "*movsi_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_359 },
#else
    { 0, output_359, 0 },
#endif
    0,
    &operand_data[566],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5195 */
  {
    "*movdi_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_360 },
#else
    { 0, output_360, 0 },
#endif
    0,
    &operand_data[571],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5210 */
  {
    "*movsf_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_361 },
#else
    { 0, output_361, 0 },
#endif
    0,
    &operand_data[576],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5210 */
  {
    "*movdf_on_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_362 },
#else
    { 0, output_362, 0 },
#endif
    0,
    &operand_data[581],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5210 */
  {
    "*movsf_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_363 },
#else
    { 0, output_363, 0 },
#endif
    0,
    &operand_data[586],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5210 */
  {
    "*movdf_on_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_364 },
#else
    { 0, output_364, 0 },
#endif
    0,
    &operand_data[591],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5210 */
  {
    "*movsf_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_365 },
#else
    { 0, output_365, 0 },
#endif
    0,
    &operand_data[596],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5210 */
  {
    "*movdf_on_cc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_366 },
#else
    { 0, output_366, 0 },
#endif
    0,
    &operand_data[601],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5259 */
  {
    "consttable_int",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_367 },
#else
    { 0, 0, output_367 },
#endif
    (insn_gen_fn) gen_consttable_int,
    &operand_data[606],
    2,
    0,
    0,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5271 */
  {
    "consttable_float",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_368 },
#else
    { 0, 0, output_368 },
#endif
    (insn_gen_fn) gen_consttable_float,
    &operand_data[606],
    1,
    0,
    0,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5287 */
  {
    "align",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ".align\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_align,
    &operand_data[607],
    1,
    0,
    0,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:21 */
  {
    "*movcc_v2sf_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_370 },
#else
    { 0, output_370, 0 },
#endif
    0,
    &operand_data[608],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:21 */
  {
    "*movcc_v2sf_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_371 },
#else
    { 0, output_371, 0 },
#endif
    0,
    &operand_data[613],
    5,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:36 */
  {
    "mips_cond_move_tf_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_372 },
#else
    { 0, output_372, 0 },
#endif
    (insn_gen_fn) gen_mips_cond_move_tf_ps,
    &operand_data[618],
    4,
    0,
    2,
    2
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:70 */
  {
    "mips_pul_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pul.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_pul_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:82 */
  {
    "mips_puu_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "puu.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_puu_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:96 */
  {
    "mips_pll_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pll.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_pll_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:110 */
  {
    "mips_plu_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "plu.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_plu_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:137 */
  {
    "vec_initv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_377 },
#else
    { 0, 0, output_377 },
#endif
    (insn_gen_fn) gen_vec_initv2sf_internal,
    &operand_data[622],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:156 */
  {
    "vec_extractv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_378 },
#else
    { 0, 0, output_378 },
#endif
    (insn_gen_fn) gen_vec_extractv2sf,
    &operand_data[625],
    3,
    0,
    1,
    3
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:226 */
  {
    "mips_alnv_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "alnv.ps\t%0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_alnv_ps,
    &operand_data[628],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:238 */
  {
    "mips_addr_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addr.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_addr_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:249 */
  {
    "mips_cvt_pw_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.pw.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_pw_ps,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:259 */
  {
    "mips_cvt_ps_pw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cvt.ps.pw\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_ps_pw,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:269 */
  {
    "mips_mulr_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulr.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_mulr_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:283 */
  {
    "mips_cabs_cond_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_s,
    &operand_data[632],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:283 */
  {
    "mips_cabs_cond_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_d,
    &operand_data[636],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:299 */
  {
    "mips_c_cond_4s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_c_cond_4s,
    &operand_data[640],
    6,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:328 */
  {
    "mips_cabs_cond_4s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_4s,
    &operand_data[640],
    6,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:362 */
  {
    "mips_c_cond_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "c.%Y3.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_c_cond_ps,
    &operand_data[646],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:373 */
  {
    "mips_cabs_cond_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cabs.%Y3.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_cabs_cond_ps,
    &operand_data[646],
    4,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:390 */
  {
    "bc1any4t",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any4t\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any4t,
    &operand_data[650],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:402 */
  {
    "bc1any4f",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any4f\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any4f,
    &operand_data[650],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:414 */
  {
    "bc1any2t",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any2t\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any2t,
    &operand_data[652],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:426 */
  {
    "bc1any2f",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%*bc1any2f\t%0,%1%/",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bc1any2f,
    &operand_data[652],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:441 */
  {
    "mips_rsqrt1_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt1_s,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:441 */
  {
    "mips_rsqrt1_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt1_d,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:441 */
  {
    "mips_rsqrt1_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt1.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt1_ps,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:450 */
  {
    "mips_rsqrt2_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt2_s,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:450 */
  {
    "mips_rsqrt2_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt2_d,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:450 */
  {
    "mips_rsqrt2_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsqrt2.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_rsqrt2_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:460 */
  {
    "mips_recip1_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.s\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip1_s,
    &operand_data[7],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:460 */
  {
    "mips_recip1_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.d\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip1_d,
    &operand_data[10],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:460 */
  {
    "mips_recip1_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip1.ps\t%0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip1_ps,
    &operand_data[13],
    2,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:469 */
  {
    "mips_recip2_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.s\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip2_s,
    &operand_data[7],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:469 */
  {
    "mips_recip2_d",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.d\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip2_d,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:469 */
  {
    "mips_recip2_ps",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "recip2.ps\t%0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mips_recip2_ps,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:526 */
  {
    "conditional_trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_conditional_trap,
    &operand_data[654],
    2,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:568 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[656],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:568 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[659],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:640 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[662],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:669 */
  {
    "adddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[664],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:701 */
  {
    "adddi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[667],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:730 */
  {
    "mulsf3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[669],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:776 */
  {
    "mulsf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[672],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:834 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[675],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:834 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[678],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:919 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[681],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:919 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[684],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:979 */
  {
    "muldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[687],
    5,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1027 */
  {
    "muldi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[687],
    5,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1085 */
  {
    "muldi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[688],
    7,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1104 */
  {
    "muldi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[688],
    7,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1166 */
  {
    "muldi3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[688],
    7,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1229 */
  {
    "mulsidi3-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[695],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1260 */
  {
    "mulsidi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[699],
    6,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1296 */
  {
    "mulsidi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[705],
    6,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1340 */
  {
    "mulsidi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[688],
    7,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1359 */
  {
    "mulsidi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[688],
    7,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1394 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[686],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1394 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[686],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1436 */
  {
    "umulsidi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[711],
    6,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1436 */
  {
    "smulsi3_highpart-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[711],
    6,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1529 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[681],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1529 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[681],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1726 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[717],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1726 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[720],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:1726 */
  {
    "divv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divv2sf3,
    &operand_data[723],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2021 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[726],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2021 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[729],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2051 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[726],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2051 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[729],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2081 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[726],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2081 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[729],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2214 */
  {
    "xordi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[683],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2229 */
  {
    "xordi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[683],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2283 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[732],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[734],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[736],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[738],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2300 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[740],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2334 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[742],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2383 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[732],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[734],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[736],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[738],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2399 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[740],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "extendhidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "extendhidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[736],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "extendhidi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[738],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2404 */
  {
    "fix_truncdfsi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[740],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2437 */
  {
    "fix_truncdfsi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[742],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2464 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[744],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2500 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[746],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2597 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[744],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2642 */
  {
    "fixuns_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfdi2,
    &operand_data[748],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2684 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[746],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2726 */
  {
    "fixuns_truncsfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfdi2,
    &operand_data[750],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2776 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[752],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2791 */
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[752],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2806 */
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[753],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2890 */
  {
    "insv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[757],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2915 */
  {
    "insv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[759],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2943 */
  {
    "insv+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[760],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2964 */
  {
    "insv+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[763],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2964 */
  {
    "insv+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2979 */
  {
    "insv+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[767],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2979 */
  {
    "movdi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[770],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2994 */
  {
    "movdi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[763],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:2994 */
  {
    "movdi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[765],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3011 */
  {
    "movdi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[773],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3011 */
  {
    "movdi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[775],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3070 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[777],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3152 */
  {
    "movdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[667],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3197 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[779],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3247 */
  {
    "movsi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[662],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3289 */
  {
    "reload_incc-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[662],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3335 */
  {
    "reload_incc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_incc,
    &operand_data[781],
    3,
    0,
    1,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3345 */
  {
    "reload_outcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outcc,
    &operand_data[784],
    3,
    0,
    1,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3393 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[787],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3455 */
  {
    "movhi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[789],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3500 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[791],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3550 */
  {
    "movqi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[793],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3578 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[795],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3623 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[797],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3676 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[799],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3687 */
  {
    "movdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[801],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3700 */
  {
    "movv2sf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[803],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3715 */
  {
    "movv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2sf,
    &operand_data[805],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3747 */
  {
    "mfhilo_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mfhilo_si,
    &operand_data[681],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3747 */
  {
    "mfhilo_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mfhilo_di,
    &operand_data[684],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3827 */
  {
    "mfhilo_di+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[399],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3878 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi,
    &operand_data[807],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[656],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[656],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[656],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[811],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[811],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:3898 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[811],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[664],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
  {
    "lshrdi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[664],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
  {
    "lshrdi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[664],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
  {
    "lshrdi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[669],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
  {
    "cmpsi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[669],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4040 */
  {
    "cmpsi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[669],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4061 */
  {
    "cmpsi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[814],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4112 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[817],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4112 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[819],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4123 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[675],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4123 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[678],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4298 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[399],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4317 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4345 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4361 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4386 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4402 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4432 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4466 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4491 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4507 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4537 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[656],
    1,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4648 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[400],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4667 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[821],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4703 */
  {
    "builtin_setjmp_setup",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_setup,
    &operand_data[400],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4718 */
  {
    "builtin_longjmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_longjmp,
    &operand_data[400],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4755 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4775 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4783 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4812 */
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_return,
    &operand_data[823],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4843 */
  {
    "eh_return+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[824],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4853 */
  {
    "sibcall-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4912 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[826],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4932 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[826],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:4967 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[826],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5015 */
  {
    "call+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[830],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5041 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[826],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5054 */
  {
    "call_value+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[832],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5084 */
  {
    "untyped_call-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[832],
    4,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5121 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[826],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5227 */
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[836],
    4,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5227 */
  {
    "movdicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdicc,
    &operand_data[840],
    4,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5239 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[844],
    4,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5239 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[848],
    4,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips.md:5293 */
  {
    "movdfcc+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[852],
    1,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:49 */
  {
    "movv2sfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2sfcc,
    &operand_data[853],
    4,
    2,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:126 */
  {
    "vec_initv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv2sf,
    &operand_data[856],
    2,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:174 */
  {
    "vec_setv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv2sf,
    &operand_data[858],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:194 */
  {
    "mips_cvt_ps_s",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_ps_s,
    &operand_data[861],
    3,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:210 */
  {
    "mips_cvt_s_pl",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_s_pl,
    &operand_data[863],
    2,
    1,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:218 */
  {
    "mips_cvt_s_pu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mips_cvt_s_pu,
    &operand_data[863],
    2,
    1,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:299 */
  {
    "mips_cvt_s_pu+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[865],
    6,
    0,
    0,
    0
  },
  /* /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/config/mips/mips-ps-3d.md:328 */
  {
    "mips_cvt_s_pu+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[865],
    6,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
