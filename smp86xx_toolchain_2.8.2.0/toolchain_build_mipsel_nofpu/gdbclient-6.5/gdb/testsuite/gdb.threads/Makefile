VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.threads
srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.threads

EXECUTABLES = pthreads

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *~ *.o a.out xgdb *.x *.ci *.tmp core* $(EXECUTABLES)

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log config.h
