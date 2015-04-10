#
# This file is subject to the terms and conditions of the GNU General Public
# License.  See the file "COPYING" in the main directory of this archive
# for more details.
#
# Copyright (C) 1995, 1998, 2001, 2002 by Ralf Baechle
# Copyright (C) 2004  Maciej W. Rozycki
#

#
# Some DECstations need all possible sections of an ECOFF executable
#
ifdef CONFIG_MACH_DECSTATION
  E2EFLAGS = -a
else
  E2EFLAGS =
endif

#
# Drop some uninteresting sections in the kernel.
# This is only relevant for ELF kernels but doesn't hurt a.out
#
drop-sections	= .reginfo .mdebug .comment .note .pdr .options .MIPS.options
strip-flags	= $(addprefix --remove-section=,$(drop-sections))

VMLINUX = vmlinux

all: vmlinux.ecoff vmlinux.srec addinitrd

vmlinux.ecoff: $(obj)/elf2ecoff $(VMLINUX)
	$(obj)/elf2ecoff $(VMLINUX) vmlinux.ecoff $(E2EFLAGS)

$(obj)/elf2ecoff: $(obj)/elf2ecoff.c
	$(HOSTCC) -o $@ $^

vmlinux.bin: $(VMLINUX)
	$(OBJCOPY) -O binary $(strip-flags) $(VMLINUX) $(obj)/vmlinux.bin

vmlinux.srec: $(VMLINUX)
	$(OBJCOPY) -S -O srec $(strip-flags) $(VMLINUX) $(obj)/vmlinux.srec

$(obj)/addinitrd: $(obj)/addinitrd.c
	$(HOSTCC) -o $@ $^

$(obj)/vmlinux.gz: $(obj)/vmlinux.bin
	gzip -c9 $< > $@

ifeq ($(CONFIG_TANGOX),y)
$(obj)/vmlinux.zbf: $(obj)/vmlinux.gz 
	genzbf -l $(loadaddr) -s `$(OBJDUMP) -f $(TOPDIR)/vmlinux | grep start | awk '{ print $$3 }'` -a lzf -o $@ $<

ifdef CONFIG_TANGO2
$(obj)/xrpc_xload_vmlinux_$(certtype).bin: $(obj)/vmlinux.zbf
	sh $(TOPDIR)/scripts/build_cpu_xrpc_xload.bash $(obj)/vmlinux $(certid) $(certtype)
endif

ifdef CONFIG_TANGO3
$(obj)/vmlinux_$(certtype).xload: $(obj)/vmlinux.zbf
	sh $(TOPDIR)/scripts/build_cpu_xload.bash $(obj)/vmlinux $(certid) $(certtype)
endif

ifdef CONFIG_TANGO2
zbimage-linux-xrpc: $(obj)/zbimage-linux-xrpc
endif

ifdef CONFIG_TANGO3
zbimage-linux-xload: $(obj)/zbimage-linux-xload

zbimage-linux-zbf: $(obj)/zbimage-linux-zbf
endif

ifdef CONFIG_TANGO2
$(obj)/zbimage-linux-xrpc: $(obj)/xrpc_xload_vmlinux_$(certtype).bin
endif
ifdef CONFIG_TANGO3
$(obj)/zbimage-linux-xload: $(obj)/vmlinux_$(certtype).xload
endif
	mkdir romfs
	cp -f $< romfs
	genromfs -V MIPS_LINUX_XRPC -d romfs -f $@
	rm -rf romfs

ifdef CONFIG_TANGO3
$(obj)/zbimage-linux-zbf: $(obj)/vmlinux.zbf
	mkdir romfs
	cp -f $< romfs
	genromfs -V MIPS_LINUX_ZBF -d romfs -f $@
	rm -rf romfs
endif

# The choice of .zbf extension is not really the case, simply make it
# work with the build_cpu_x* script which assumes the .zbf extension.
$(obj)/vmlinux_shax.zbf: $(obj)/vmlinux.gz
ifdef CONFIG_TANGO2
	@echo "Using sha1 digest .."
	@tobin.bash `sha1sum -b $< | awk '{ print $$1 }'` > $@
endif
ifdef CONFIG_TANGO3
	@echo "Using sha256 digest .."
	@tobin.bash `sha256sum -b $< | awk '{ print $$1 }'` > $@
endif

ifdef CONFIG_TANGO2
$(obj)/xrpc_xload_vmlinux_shax_$(certtype).bin: $(obj)/vmlinux_shax.zbf
	sh $(TOPDIR)/scripts/build_cpu_xrpc_xload.bash $(obj)/vmlinux_shax $(certid) $(certtype)
endif

ifdef CONFIG_TANGO3
$(obj)/vmlinux_shax_$(certtype).xload: $(obj)/vmlinux_shax.zbf
	sh $(TOPDIR)/scripts/build_cpu_xload.bash $(obj)/vmlinux_shax $(certid) $(certtype)
endif

ifdef CONFIG_TANGO2
$(obj)/vmlinux_enc.bin: $(obj)/xrpc_xload_vmlinux_shax_$(certtype).bin $(obj)/vmlinux.gz
endif
ifdef CONFIG_TANGO3
$(obj)/vmlinux_enc.bin: $(obj)/vmlinux_shax_$(certtype).xload $(obj)/vmlinux.gz
endif
	@cat $^ > $@

$(obj)/vmlinux_enc.zbf: $(obj)/vmlinux_enc.bin 
ifdef CONFIG_TANGO2
	genzbf -l $(loadaddr) -s $(loadaddr) -e `stat --format=%s $(obj)/xrpc_xload_vmlinux_shax_$(certtype).bin` -a lzef -o $@ $<
endif
ifdef CONFIG_TANGO3
	genzbf -l $(loadaddr) -s `$(OBJDUMP) -f $(TOPDIR)/vmlinux | grep start | awk '{ print $$3 }'` -e `stat --format=%s $(obj)/vmlinux_shax_$(certtype).xload` -a lzef -o $@ $<
endif

zbimage-linux-enc: $(obj)/zbimage-linux-enc

$(obj)/zbimage-linux-enc: $(obj)/vmlinux_enc.zbf
	mkdir romfs
	cp -f $< romfs
	genromfs -V MIPS_LINUX_ENC -d romfs -f $@
	rm -rf romfs

$(obj)/vmlinux_encs.zbf: $(obj)/vmlinux_enc.bin 
ifdef CONFIG_TANGO2
	genzbf -l $(loadaddr) -s $(loadaddr) -e `stat --format=%s $(obj)/xrpc_xload_vmlinux_shax_$(certtype).bin` -a lzes -o $@ $<
endif
ifdef CONFIG_TANGO3
	genzbf -l $(loadaddr) -s `$(OBJDUMP) -f $(TOPDIR)/vmlinux | grep start | awk '{ print $$3 }'` -e `stat --format=%s $(obj)/vmlinux_shax_$(certtype).xload` -a lzes -o $@ $<
endif

zbimage-linux-encs: $(obj)/zbimage-linux-encs

$(obj)/zbimage-linux-encs: $(obj)/vmlinux_encs.zbf
	mkdir romfs
	cp -f $< romfs
	genromfs -V MIPS_LINUX_ENC -d romfs -f $@
	rm -rf romfs
endif

archhelp:
	@echo	'* vmlinux.ecoff	- ECOFF boot image'
	@echo	'* vmlinux.srec		- SREC boot image'

clean-files += addinitrd \
	       elf2ecoff \
	       vmlinux.bin \
	       vmlinux.ecoff \
	       vmlinux.srec
