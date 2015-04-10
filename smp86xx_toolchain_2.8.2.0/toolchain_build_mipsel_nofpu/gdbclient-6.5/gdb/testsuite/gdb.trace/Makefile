VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.trace
srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.trace

.PHONY: all clean mostlyclean distclean realclean

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f actions circ collection limits
	-rm -f *.o *.diff *~ *.bad core sh3 hppa mn10300

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log
