#############################################################
#
# Setup the kernel headers.  I include a generic package of
# kernel headers here, so you shouldn't need to include your
# own.  Be aware these kernel headers _will_ get blown away
# by a 'make clean' so don't put anything sacred in here...
#
#############################################################
DEFAULT_KERNEL_HEADERS:=$(strip $(subst ",, $(BR2_DEFAULT_KERNEL_HEADERS)))
#"))

ifneq ($(filter $(TARGETS),kernel-headers),)
DEFAULT_KERNEL_HEADERS:=$(strip $(DEFAULT_KERNEL_HEADERS))

LINUX_HEADERS_SITE:=127.0.0.1
LINUX_HEADERS_SOURCE:=unspecified-kernel-headers

ifeq ("$(strip $(DEFAULT_KERNEL_HEADERS))","2.4.29")
VERSION:=2
PATCHLEVEL:=4
SUBLEVEL:=29
LINUX_HEADERS_SITE:=$(DOWNLOAD_SITE)
LINUX_HEADERS_SOURCE:=linux-libc-headers-2.4.29.tar.bz2
LINUX_HEADERS_UNPACK_DIR:=$(TOOL_BUILD_DIR)/linux-libc-headers-2.4.29
else
ifeq ("$(strip $(DEFAULT_KERNEL_HEADERS))","2.6.11.0")
VERSION:=2
PATCHLEVEL:=6
SUBLEVEL:=11
LINUX_HEADERS_SITE:=$(DOWNLOAD_SITE)
LINUX_HEADERS_SOURCE:=linux-libc-headers-2.6.11.0.tar.bz2
LINUX_HEADERS_UNPACK_DIR:=$(TOOL_BUILD_DIR)/linux-libc-headers-2.6.11.0
endif
endif

LINUX_VERSION:=$(VERSION).$(PATCHLEVEL).$(SUBLEVEL)

LINUX_HEADERS_DIR:=$(TOOL_BUILD_DIR)/linux

$(DL_DIR)/$(LINUX_HEADERS_SOURCE):
	mkdir -p $(DL_DIR)
	$(WGET) -P $(DL_DIR) $(LINUX_HEADERS_SITE)/$(LINUX_HEADERS_SOURCE)

$(LINUX_HEADERS_DIR)/.unpacked: $(DL_DIR)/$(LINUX_HEADERS_SOURCE)
	mkdir -p $(TOOL_BUILD_DIR)
	bzcat $(DL_DIR)/$(LINUX_HEADERS_SOURCE) | tar -C $(TOOL_BUILD_DIR) $(TAR_OPTIONS) -
ifneq ($(LINUX_HEADERS_UNPACK_DIR),$(LINUX_HEADERS_DIR))
	mv $(LINUX_HEADERS_UNPACK_DIR) $(LINUX_HEADERS_DIR)
endif
	touch $(LINUX_HEADERS_DIR)/.unpacked

$(LINUX_HEADERS_DIR)/.patched: $(LINUX_HEADERS_DIR)/.unpacked
	toolchain/patch-kernel.sh $(LINUX_HEADERS_DIR) toolchain/kernel-headers linux-libc-headers-$(LINUX_VERSION)\*.patch
	touch $(LINUX_HEADERS_DIR)/.patched

$(LINUX_HEADERS_DIR)/.configured: $(LINUX_HEADERS_DIR)/.patched
	rm -f $(LINUX_HEADERS_DIR)/include/asm
	@if [ ! -f $(LINUX_HEADERS_DIR)/Makefile ] ; then \
	    echo -e "VERSION = $(VERSION)\nPATCHLEVEL = $(PATCHLEVEL)\n" > \
		    $(LINUX_HEADERS_DIR)/Makefile; \
	    echo -e "SUBLEVEL = $(SUBLEVEL)\nEXTRAVERSION =\n" >> \
		    $(LINUX_HEADERS_DIR)/Makefile; \
	    echo -e "KERNELRELEASE=\$$(VERSION).\$$(PATCHLEVEL).\$$(SUBLEVEL)\$$(EXTRAVERSION)" >> \
		    $(LINUX_HEADERS_DIR)/Makefile; \
	fi;
	@if [ "$(ARCH)" = "powerpc" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-ppc$(NOMMU) asm;) \
	elif [ "$(ARCH)" = "mips" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-mips$(NOMMU) asm;) \
	elif [ "$(ARCH)" = "mipsel" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-mips$(NOMMU) asm;) \
	elif [ "$(ARCH)" = "arm" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-arm$(NOMMU) asm; \
	     cd asm; \
	     if [ ! -L proc ] ; then \
	     ln -fs proc-armv proc; \
	     ln -fs arch-ebsa285 arch; fi); \
	elif [ "$(ARCH)" = "armeb" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-arm$(NOMMU) asm; \
	     cd asm; \
	     if [ ! -L proc ] ; then \
	     ln -fs proc-armv proc; \
	     ln -fs arch-ebsa285 arch; fi); \
	elif [ "$(ARCH)" = "cris" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-cris asm;) \
	elif [ "$(ARCH)" = "sh3" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-sh asm; \
	     cd asm; \
	     ln -s cpu-sh3 cpu) \
	elif [ "$(ARCH)" = "sh3eb" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-sh asm; \
	     cd asm; \
	     ln -s cpu-sh3 cpu) \
	elif [ "$(ARCH)" = "sh4" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-sh asm; \
	     cd asm; \
	     ln -s cpu-sh4 cpu) \
	elif [ "$(ARCH)" = "sh4eb" ];then \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-sh asm; \
	     cd asm; \
	     ln -s cpu-sh4 cpu) \
	else \
	    (cd $(LINUX_HEADERS_DIR)/include; ln -fs asm-$(ARCH)$(NOMMU) asm;) \
	fi
	touch $(LINUX_HEADERS_DIR)/include/linux/autoconf.h;
	touch $(LINUX_HEADERS_DIR)/.configured

$(LINUX_KERNEL): $(LINUX_HEADERS_DIR)/.configured

kernel-headers: $(LINUX_HEADERS_DIR)/.configured

kernel-headers-source: $(DL_DIR)/$(LINUX_HEADERS_SOURCE)

kernel-headers-clean: clean
	rm -f $(LINUX_KERNEL)
	rm -rf $(LINUX_HEADERS_DIR)

kernel-headers-dirclean:
	rm -rf $(LINUX_HEADERS_DIR)

endif
