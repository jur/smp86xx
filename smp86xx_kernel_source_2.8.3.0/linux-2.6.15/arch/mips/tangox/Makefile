#
# Makefile for SigmaDesigns Tango2/Tango3 board
#
# Note! Dependencies are done automagically by 'make dep', which also
# removes any old dependencies. DON'T put your own dependencies here
# unless it's something special (ie not a .c file).
#

ifneq ($(CONFIG_TANGOX_FREQUENCY_CONTROL),)
FC_MADE := $(shell $(MAKE) -C $(TOPDIR)/arch/mips/tangox/fctrl/lib TOP_DIR=$(TOPDIR) WITH_IR=$(CONFIG_TANGOX_STANDBY_WAKEUP_IR) WITH_FIP=$(CONFIG_TANGOX_STANDBY_WAKEUP_FIP) WITH_ETH=$(CONFIG_TANGOX_STANDBY_WAKEUP_ETH) INPUT_TABLE_SIZE=$(CONFIG_TANGOX_STANDBY_INPUT_TABLE_SIZE) )
endif

obj-y += irq.o setup.o prom.o gbus.o tangoxIRQ.o xenv_config.o delay.o

obj-$(CONFIG_TANGOX_PROM_CONSOLE) += console.o

obj-$(CONFIG_TANGOX_XENV_READ) += sha.o xenv.o

obj-y += gpio.o

obj-y += mbus.o

obj-$(CONFIG_TANGOX_FREQUENCY_CONTROL) += fctrl/

clean-files += $(shell $(MAKE) -C $(TOPDIR)/arch/mips/tangox/fctrl/lib/fc clean)

obj-y += cpucache.o

