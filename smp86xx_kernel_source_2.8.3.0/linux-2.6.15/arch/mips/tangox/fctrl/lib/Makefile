
TOP_DIR ?= $(TOPDIR)
MUM_KI  ?= -I/utils/thirdparty/kernelsrc/linux-mips-2.6.15/include
TOP_DIR ?= $(subst /include,,$(subst -I,,$(MUM_KI)))
TOP_DIR 	?= $(subst /include,,$(subst -I,,$(MUM_KI)))
TOP_DIR 	?= /utils/thirdparty/kernelsrc/linux-mips-2.6.15

include $(TOP_DIR)/.config

LOCALMEM_BASE	?= 0xa0060010
WITH_IR		?= $(CONFIG_TANGOX_STANDBY_WAKEUP_IR)
WITH_FIP	?= $(CONFIG_TANGOX_STANDBY_WAKEUP_FIP)
WITH_ETH	?= $(CONFIG_TANGOX_STANDBY_WAKEUP_ETH)
INPUT_TABLE_SIZE?= $(CONFIG_TANGOX_STANDBY_INPUT_TABLE_SIZE)
WITH_IR		?= n
WITH_FIP	?= n
WITH_ETH	?= n
INPUT_TABLE_SIZE?= 128

FCTRL_DEBUG     ?= y

CROSS = mipsel-linux-
CC = $(CROSS)gcc
LD = $(CROSS)ld
AR = $(CROSS)ar
OBJCOPY = $(CROSS)objcopy

FCDIR = fc
CFLAGS = -Wall -Werror -Wstrict-prototypes -Wsign-compare -O2 -G 0 -mno-abicalls -fno-pic 
CFLAGS += -fno-builtin -mabi=32 -march=mips32r2 -Wa,-32 -Wa,-march=mips32r2 -Wa,-mips32r2 -Wa,--trap
CFLAGS += -I$(TOP_DIR)/include -I$(TOP_DIR)/include/asm-mips/mach-tango2 -I$(TOP_DIR)/include/asm-mips/mach-generic
ifdef CONFIG_TANGO2
CFLAGS += -DEM86XX_CHIP=EM86XX_CHIPID_TANGO2 -DEM86XX_REVISION=6 -DCONFIG_TANGO2
else
CFLAGS += -DEM86XX_CHIP=EM86XX_CHIPID_TANGO3 -DEM86XX_REVISION=1 -DCONFIG_TANGO3
endif
CFLAGS += -I$(FCDIR)

ifeq ($(FCTRL_DEBUG),y)
CFLAGS += -DFC_DEBUG
endif

all: freqctrl.a

freqctrl.a: freqctrl.o
	$(AR) rcs $@ $<

$(FCDIR)/fcconfig.h $(FCDIR)/fcbin.h: Makefile
	$(MAKE) -C $(FCDIR) TOP_DIR=$(TOP_DIR) LOCALMEM_BASE=$(LOCALMEM_BASE) WITH_IR=$(WITH_IR) WITH_FIP=$(WITH_FIP) WITH_ETH=$(WITH_ETH) INPUT_TABLE_SIZE=$(INPUT_TABLE_SIZE) FCTRL_DEBUG=$(FCTRL_DEBUG) 

freqctrl.o: freqctrl.c freqctrl.h $(FCDIR)/fcconfig.h $(FCDIR)/fcbin.h Makefile
	$(CC) $(CFLAGS) -D__KERNEL__ -c -o $@ freqctrl.c

clean:
	$(MAKE) -C $(FCDIR) clean
	rm -f freqctrl.a freqctrl.o

