
# Customizations (can be passed down by upper level Makefile)
# TOP_DIR=/utils/thirdparty/kernelsrc/linux-mips-2.6.15
# LOCALMEM_BASE=0xa0060010
# WITH_IR=y
# WITH_FIP=y
# WITH_ETH=y
# FCTRL_DEBUG=y
# INPUT_TABLE_SIZE=256

# Default header directory
TOP_DIR ?= $(TOPDIR)
TOP_DIR ?= /utils/thirdparty/kernelsrc/linux-mips-2.6.15

# Default location for loading/executing the switch handler
LOCALMEM_BASE ?= 0xa0060010

HOSTCC = gcc
HOSTCFLAGS = -O2

CROSS = mipsel-linux-
CC = $(CROSS)gcc
LD = $(CROSS)ld
OBJCOPY = $(CROSS)objcopy

CFLAGS = -Wall -Werror -Wstrict-prototypes -Wsign-compare -Os -G 0 -mno-abicalls -fno-pic 
CFLAGS += -fno-builtin -mabi=32 -march=mips32r2 -Wa,-32 -Wa,-march=mips32r2 -Wa,-mips32r2 -Wa,--trap

# Object files to be used
FS_OBJS = fc.o

# To include IR polling, optional
ifeq ($(WITH_IR),y)
CFLAGS += -DWITH_IR
FS_OBJS += ir.o
WITH_INPUT_POLLING = y
endif

# To include FIP polling, optional
ifeq ($(WITH_FIP),y)
CFLAGS += -DWITH_FIP
FS_OBJS += fip.o
WITH_INPUT_POLLING = y
endif

# To include ETH polling, optional
ifeq ($(WITH_ETH),y)
CFLAGS += -DWITH_ETH
FS_OBJS += eth.o
WITH_INPUT_POLLING = y
endif

# To poll from given input, result of previous settings
ifeq ($(WITH_INPUT_POLLING),y)
INPUT_TABLE_SIZE ?= 256
CFLAGS += -DWITH_INPUT_POLLING -DINPUT_TABLE_SIZE=$(INPUT_TABLE_SIZE)
FS_OBJS += poll.o
endif

# Debug enabled? or not?
ifeq ($(FCTRL_DEBUG),y)
CFLAGS += -DFC_DEBUG
endif

all: fcbin.h fcconfig.h

binout: binout.c
	@ $(HOSTCC) $(HOSTCFLAGS) -o $@ $<

fc_bin.tmp: fc.bin binout
	@ ./binout fc.bin > $@

fcbin.h: fc_bin.tmp
	@echo
	@echo "**********************************************************"
	@echo "The following attributes have been defined for this build:"
	@echo "  Include path:" $(TOP_DIR)/include
	@echo "#ifndef __FSBIN_H__" > $@
	@echo "#define __FSBIN_H__" >> $@
	@echo "  LOCALMEM_BASE is defined as" $(LOCALMEM_BASE)
ifeq ($(WITH_IR),y)
	@echo "  WITH_IR is set"
else
	@echo "  WITH_IR is not set"
endif
ifeq ($(WITH_FIP),y)
	@echo "  WITH_FIP is set"
else
	@echo "  WITH_FIP is not set"
endif
ifeq ($(WITH_ETH),y)
	@echo "  WITH_ETH is set"
else
	@echo "  WITH_ETH is not set"
endif
ifeq ($(WITH_INPUT_POLLING),y)
	@echo "  INPUT_POLLING is enabled"
	@echo "  INPUT_TABLE_SIZE is" $(INPUT_TABLE_SIZE)
else
	@echo "  INPUT_POLLING is disabled"
endif
	@cat $< >> $@
	@echo "#endif" >> $@
	@echo "**********************************************************"
	@echo

fcconfig.h: Makefile
	@echo "#ifndef __FSCONFIG_H__" > $@
	@echo "#define __FSCONFIG_H__" >> $@
	@echo "#define LOCALMEM_BASE $(LOCALMEM_BASE)" >> $@
ifeq ($(WITH_IR),y)
	@echo "#define WITH_IR" >> $@
else
	@echo "#undef WITH_IR" >> $@
endif
ifeq ($(WITH_FIP),y)
	@echo "#define WITH_FIP" >> $@
else
	@echo "#undef WITH_FIP" >> $@
endif
ifeq ($(WITH_ETH),y)
	@echo "#define WITH_ETH" >> $@
else
	@echo "#undef WITH_ETH" >> $@
endif
ifeq ($(WITH_INPUT_POLLING),y)
	@echo "#define WITH_INPUT_POLLING" >> $@
	@echo "#define INPUT_TABLE_SIZE" $(INPUT_TABLE_SIZE) >> $@
else
	@echo "#undef WITH_INPUT_POLLING" >> $@
	@echo "#undef INPUT_TABLE_SIZE" >> $@
endif
	@echo "#endif" >> $@

fc.elf: fc.ld.script $(FS_OBJS)
	$(LD) -static -T fc.ld.script -Ttext $(LOCALMEM_BASE) -o $@ $(FS_OBJS) 

fc.bin: fc.elf 
	$(OBJCOPY) -O binary $< $@

fc.o: fc.S Makefile 
	$(CC) $(CFLAGS) -c -I$(TOP_DIR)/include -D__ASSEMBLY__ -o $@ $<

ir.o: ir.c
	$(CC) $(CFLAGS) -I$(TOP_DIR)/include -c -o $@ $<

fip.o: fip.c
	$(CC) $(CFLAGS) -I$(TOP_DIR)/include -c -o $@ $<

eth.o: eth.c
	$(CC) $(CFLAGS) -I$(TOP_DIR)/include -c -o $@ $<

poll.o: poll.c
	$(CC) $(CFLAGS) -I$(TOP_DIR)/include -c -o $@ $<

clean:
	rm -f binout fc_bin.tmp fcbin.h fc.elf fc.bin fc.o fcconfig.h *.o

