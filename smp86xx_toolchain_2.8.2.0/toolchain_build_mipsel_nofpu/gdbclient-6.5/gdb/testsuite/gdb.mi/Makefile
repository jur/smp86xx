VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.mi
srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.mi

PROGS = basics c_variable cpp_variable var-cmd

MISCELLANEOUS = testcmds

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *.ci *.o $(OBJS) $(PROGS) *~ core

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log
