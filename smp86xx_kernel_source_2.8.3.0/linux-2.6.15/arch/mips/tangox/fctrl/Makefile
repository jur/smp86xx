
NOTINKERNEL = n

ifneq ($(NOTINKERNEL),y)
TOP_DIR ?= $(TOPDIR)
endif

MUM_KI  ?= -I/utils/thirdparty/kernelsrc/linux-mips-2.6.15/include
TOP_DIR ?= $(subst /include,,$(subst -I,,$(MUM_KI)))

# More parameters to be configured
ifeq ($(NOTINKERNEL),y)
WITH_IR		?= n
WITH_FIP	?= n
WITH_ETH        ?= n
INPUT_TABLE_SIZE?= 64
endif

# For debugging purpose
FCTRL_DEBUG     ?= y

ifeq ($(FCTRL_DEBUG),y)
CFLAGS += -DFC_DEBUG
endif

ifeq ($(NOTINKERNEL),y)
obj-m := fctrl.o
else
obj-$(CONFIG_TANGOX_FREQUENCY_CONTROL) := fctrl.o
endif

fctrl-objs := fckernel.o lib/freqctrl.o

.PHONY: all
all: fctrl.ko

lib/freqctrl.o:
	$(MAKE) -C lib WITH_IR=$(WITH_IR) WITH_FIP=$(WITH_FIP) WITH_ETH=$(WITH_ETH) INPUT_TABLE_SIZE=$(INPUT_TABLE_SIZE) FCTRL_DEBUG=$(FCTRL_DEBUG) TOP_DIR=$(TOP_DIR) CONFIG_TANGO2=$(CONFIG_TANGO2)

fctrl.ko: FORCE lib/freqctrl.o
	KBUILD_VERBOSE=1 $(MAKE) -C $(TOP_DIR) M="$$PWD" modules

.PHONY: cleanall clean
cleanall clean:
	$(MAKE) -C lib clean
	KBUILD_VERBOSE=1 $(MAKE) -C $(TOP_DIR) M="$$PWD" clean

.PHONY: FORCE
FORCE:

