VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.arch
srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.arch

EXECUTABLES = altivec-abi altivec-regs

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *~ *.o a.out *.x *.ci *.tmp
	-rm -f core core.coremaker coremaker.core corefile $(EXECUTABLES)

distclean maintainer-clean realclean: clean
	-rm -f *~ core
	-rm -f Makefile config.status config.log
	-rm -f *-init.exp
	-rm -fr *.log summary detail *.plog *.sum *.psum site.*
