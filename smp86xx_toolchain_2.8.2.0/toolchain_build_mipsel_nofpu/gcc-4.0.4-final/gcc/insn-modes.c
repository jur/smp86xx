/* Generated automatically from machmode.def and config/mips/mips-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "machmode.h"
#include "real.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CCV2",
  "CCV4",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "SF",
  "DF",
  "TF",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "SC",
  "DC",
  "TC",
  "V2SF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CCV2 */
  MODE_CC,                 /* CCV4 */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* TF */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_FLOAT,       /* V2SF */
};

const unsigned short mode_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CCV2 */
  4*BITS_PER_UNIT,         /* CCV4 */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  16*BITS_PER_UNIT,        /* TF */
  2*BITS_PER_UNIT,         /* CQI */
  4*BITS_PER_UNIT,         /* CHI */
  8*BITS_PER_UNIT,         /* CSI */
  16*BITS_PER_UNIT,        /* CDI */
  32*BITS_PER_UNIT,        /* CTI */
  8*BITS_PER_UNIT,         /* SC */
  16*BITS_PER_UNIT,        /* DC */
  32*BITS_PER_UNIT,        /* TC */
  8*BITS_PER_UNIT,         /* V2SF */
};

unsigned char mode_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCV2 */
  4,                       /* CCV4 */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  2,                       /* CQI */
  4,                       /* CHI */
  8,                       /* CSI */
  16,                      /* CDI */
  32,                      /* CTI */
  8,                       /* SC */
  16,                      /* DC */
  32,                      /* TC */
  8,                       /* V2SF */
};

const unsigned char mode_nunits[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  1,                       /* CC */
  1,                       /* CCV2 */
  1,                       /* CCV4 */
  1,                       /* BI */
  1,                       /* QI */
  1,                       /* HI */
  1,                       /* SI */
  1,                       /* DI */
  1,                       /* TI */
  1,                       /* SF */
  1,                       /* DF */
  1,                       /* TF */
  2,                       /* CQI */
  2,                       /* CHI */
  2,                       /* CSI */
  2,                       /* CDI */
  2,                       /* CTI */
  2,                       /* SC */
  2,                       /* DC */
  2,                       /* TC */
  2,                       /* V2SF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCV2 */
  VOIDmode,                /* CCV4 */
  QImode,                  /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  DFmode,                  /* SF */
  TFmode,                  /* DF */
  VOIDmode,                /* TF */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  TCmode,                  /* DC */
  VOIDmode,                /* TC */
  VOIDmode,                /* V2SF */
};

const unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] =
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? ~(unsigned HOST_WIDE_INT) 0              \
   : ((unsigned HOST_WIDE_INT) 1 << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCV2 */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCV4 */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* TF */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (32*BITS_PER_UNIT),    /* TC */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
#undef MODE_MASK
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCV2 */
  VOIDmode,                /* CCV4 */
  VOIDmode,                /* BI */
  VOIDmode,                /* QI */
  VOIDmode,                /* HI */
  VOIDmode,                /* SI */
  VOIDmode,                /* DI */
  VOIDmode,                /* TI */
  VOIDmode,                /* SF */
  VOIDmode,                /* DF */
  VOIDmode,                /* TF */
  QImode,                  /* CQI */
  HImode,                  /* CHI */
  SImode,                  /* CSI */
  DImode,                  /* CDI */
  TImode,                  /* CTI */
  SFmode,                  /* SC */
  DFmode,                  /* DC */
  TFmode,                  /* TC */
  SFmode,                  /* V2SF */
};

unsigned char mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCV2 */
  4,                       /* CCV4 */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* TC */
  8,                       /* V2SF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_FLOAT,          /* SF */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* SC */
  MIN_MODE_VECTOR_INT,     /* VOID */
  MIN_MODE_VECTOR_FLOAT,   /* V2SF */
};

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1] =
{
  &mips_single_format,     /* SF */
  &mips_double_format,     /* DF */
  &mips_quad_format,       /* TF */
};

void
init_adjust_machine_modes (void)
{
  size_t s ATTRIBUTE_UNUSED;

  /* config/mips/mips-modes.def:38 */
  s = 16;
  mode_size[CCV4mode] = s;
  mode_base_align[CCV4mode] = s & (~s + 1);

  /* config/mips/mips-modes.def:34 */
  s = 8;
  mode_size[CCV2mode] = s;
  mode_base_align[CCV2mode] = s & (~s + 1);

  /* config/mips/mips-modes.def:39 */
  s = 16;
  mode_base_align[CCV4mode] = s;

  /* config/mips/mips-modes.def:35 */
  s = 8;
  mode_base_align[CCV2mode] = s;
}
