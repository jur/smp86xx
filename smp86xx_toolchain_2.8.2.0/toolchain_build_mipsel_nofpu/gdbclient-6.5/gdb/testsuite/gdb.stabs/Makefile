VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.stabs
srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/testsuite/gdb.stabs

all: 
	@echo "Nothing to be done for all..."

#### host, target, and site specific Makefile frags come in here.

clean mostlyclean:
	-rm -f *.o *~ core tmp.c tmp.s weird.s errs

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log

Makefile: $(srcdir)/Makefile.in $(srcdir)/configure.ac
	$(SHELL) ./config.status --recheck
