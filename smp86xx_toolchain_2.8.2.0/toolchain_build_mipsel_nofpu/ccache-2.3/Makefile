srcdir=/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/ccache-2.3
VPATH=/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/ccache-2.3

prefix=/usr
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
mandir=${prefix}/man
INSTALLCMD=/usr/bin/install -c

CC=gcc
CFLAGS=-g -O2 -Wall -W -I.
EXEEXT=

OBJS= ccache.o mdfour.o hash.o execute.o util.o args.o stats.o \
	cleanup.o snprintf.o unify.o
HEADERS = ccache.h mdfour.h

all: ccache$(EXEEXT)

docs: ccache.1 web/ccache-man.html

ccache$(EXEEXT): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

ccache.1: ccache.yo
	-yodl2man -o ccache.1 ccache.yo

web/ccache-man.html: ccache.yo
	mkdir -p man
	yodl2html -o web/ccache-man.html ccache.yo

install: ccache$(EXEEXT) ccache.1
	${INSTALLCMD} -d $(DESTDIR)${bindir}
	${INSTALLCMD} -m 755 ccache$(EXEEXT) $(DESTDIR)${bindir}
	${INSTALLCMD} -d $(DESTDIR)${mandir}/man1
	${INSTALLCMD} -m 644 ${srcdir}/ccache.1 $(DESTDIR)${mandir}/man1/

clean:
	/bin/rm -f $(OBJS) *~ ccache$(EXEEXT)

test: test.sh
	./test.sh

check: test.sh
	./test.sh

distclean: clean
	/bin/rm -f Makefile config.h config.sub config.log build-stamp config.status

# FIXME: To fix this, test.sh needs to be able to take ccache from the
# installed prefix, not from the source dir.
installcheck: 
	@echo "WARNING!  This is not really \"installcheck\" yet."
	$(MAKE) check
