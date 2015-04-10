# Generated automatically from Makefile.in by configure.
# $Id: Makefile.in,v 1.35 2000/10/14 17:57:02 Johnny.C.Lam Exp $
##############################################################################
# Copyright (c) 1998-2000 Free Software Foundation, Inc.                     #
#                                                                            #
# Permission is hereby granted, free of charge, to any person obtaining a    #
# copy of this software and associated documentation files (the "Software"), #
# to deal in the Software without restriction, including without limitation  #
# the rights to use, copy, modify, merge, publish, distribute, distribute    #
# with modifications, sublicense, and/or sell copies of the Software, and to #
# permit persons to whom the Software is furnished to do so, subject to the  #
# following conditions:                                                      #
#                                                                            #
# The above copyright notice and this permission notice shall be included in #
# all copies or substantial portions of the Software.                        #
#                                                                            #
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR #
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   #
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    #
# THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      #
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING    #
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER        #
# DEALINGS IN THE SOFTWARE.                                                  #
#                                                                            #
# Except as contained in this notice, the name(s) of the above copyright     #
# holders shall not be used in advertising or otherwise to promote the sale, #
# use or other dealings in this Software without prior written               #
# authorization.                                                             #
##############################################################################
#
# Author: Thomas E. Dickey <dickey@clark.net> 1996,1997
#
# Makefile for panels source code.
#
# This makes the following:
#	libraries (normal/debug/profile/shared)
#
# The variable 'srcdir' refers to the source-distribution, and can be set with
# the configure script by "--srcdir=DIR".
#
# The rules are organized to produce the libraries for the configured models,

# turn off _all_ suffix rules; we'll generate our own
.SUFFIXES:

SHELL		= /bin/sh
THIS		= Makefile

MODEL		= shared
DESTDIR		= 
srcdir		= .
prefix		= /usr
exec_prefix	= /usr
libdir		= /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/lib
includedir	= ${prefix}/include
datadir		= /usr/share

LIBTOOL		= 

INSTALL		= /usr/bin/install -c
INSTALL_LIB	= /usr/bin/install -c -m 644
INSTALL_DATA	= ${INSTALL} -m 644

AR		= /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin/mipsel-linux-uclibc-ar
AR_OPTS		= rv
AWK		= gawk
LD		= /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin/mipsel-linux-uclibc-ld
LN_S		= ln -s

CC		= /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin/mipsel-linux-uclibc-gcc
CPP		= /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin/mipsel-linux-uclibc-gcc -E
CFLAGS		= -Os -mips32r2 -pipe  -L/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/lib -I/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/include 

CPPFLAGS	=  -DNDEBUG -I. -I../include \
		  -DHAVE_CONFIG_H

CCFLAGS		= $(CPPFLAGS) $(CFLAGS)

CFLAGS_LIBTOOL	= $(CCFLAGS)
CFLAGS_NORMAL	= $(CCFLAGS)
CFLAGS_DEBUG	= $(CCFLAGS) -g -DTRACE
CFLAGS_PROFILE	= $(CCFLAGS) -pg
CFLAGS_SHARED	= $(CCFLAGS) -fPIC

CFLAGS_DEFAULT	= $(CFLAGS_SHARED)

LINK		= $(LIBTOOL) $(CC)
LDFLAGS		=   

SHLIB_DIRS	= -L../lib -L$(libdir)
SHLIB_LIST	= $(SHLIB_DIRS) -lncurses 

MK_SHARED_LIB	= $(CC) -shared -Wl,-soname,`basename $@ .$(REL_VERSION)`.$(ABI_VERSION),-stats,-lc -o $@

NCURSES_MAJOR	= 5
NCURSES_MINOR	= 2
REL_VERSION	= 5.2
ABI_VERSION	= 5

RANLIB		= /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin/mipsel-linux-uclibc-ranlib

LIBRARIES	=  ../lib/libpanel.so.$(REL_VERSION) ../lib/libpanel.a

LINT		= 
LINT_OPTS	= 
LINT_LIBS	= -lpanel -lncurses 

AUTO_SRC	= \
		../include/panel.h

################################################################################
all \
libs \
install ::	$(AUTO_SRC) $(LIBRARIES)

sources:	$(AUTO_SRC)

$(DESTDIR)$(libdir) :
	$(srcdir)/../mkinstalldirs $@

# make a copy to simplify include-paths while still keeping panel's include
# file in this directory.
../include/panel.h : $(srcdir)/panel.h
	-rm -f $@
	cp $(srcdir)/panel.h $@

PANEL_PRIV_H = \
	$(srcdir)/panel.priv.h \
	$(srcdir)/panel.h

tags:
	ctags *.[ch]

#TAGS:
#	etags *.[ch]

mostlyclean ::
	-rm -f core tags TAGS *~ *.ln *.atac trace

clean :: mostlyclean
	-rm -f $(AUTO_SRC)

distclean :: clean
	-rm -f Makefile

realclean :: distclean

###############################################################################
# The remainder of this file is automatically generated during configuration
###############################################################################

# generated by mk-0th.awk

.SUFFIXES: .c .h .i
.c.i :
	$(CPP) $(CPPFLAGS) $< >$@
.h.i :
	$(CPP) $(CPPFLAGS) $< >$@

C_SRC = \
	$(srcdir)/panel.c \
	$(srcdir)/p_above.c \
	$(srcdir)/p_below.c \
	$(srcdir)/p_bottom.c \
	$(srcdir)/p_delete.c \
	$(srcdir)/p_hide.c \
	$(srcdir)/p_hidden.c \
	$(srcdir)/p_move.c \
	$(srcdir)/p_new.c \
	$(srcdir)/p_replace.c \
	$(srcdir)/p_show.c \
	$(srcdir)/p_top.c \
	$(srcdir)/p_update.c \
	$(srcdir)/p_user.c \
	$(srcdir)/p_win.c

# Producing llib-lpanel is time-consuming, so there's no direct-dependency for
# it in the lintlib rule.  We'll only remove in the cleanest setup.
clean ::
	rm -f llib-lpanel.*

realclean ::
	rm -f llib-lpanel

llib-lpanel : $(C_SRC)
	cproto -a -l -DLINT $(CPPFLAGS) $(C_SRC) >$@

lintlib :
	$(srcdir)/../misc/makellib panel $(CPPFLAGS)
lint :
	$(LINT) $(LINT_OPTS) $(CPPFLAGS) $(C_SRC) $(LINT_LIBS)

# generated by mk-1st.awk

SHARED_OBJS = \
	../obj_s/panel.o \
	../obj_s/p_above.o \
	../obj_s/p_below.o \
	../obj_s/p_bottom.o \
	../obj_s/p_delete.o \
	../obj_s/p_hide.o \
	../obj_s/p_hidden.o \
	../obj_s/p_move.o \
	../obj_s/p_new.o \
	../obj_s/p_replace.o \
	../obj_s/p_show.o \
	../obj_s/p_top.o \
	../obj_s/p_update.o \
	../obj_s/p_user.o \
	../obj_s/p_win.o

$(SHARED_OBJS) : ../include/ncurses_cfg.h ./panel.priv.h

../lib/libpanel.so.$(REL_VERSION) : $(SHARED_OBJS)
	-@rm -f $@
	$(MK_SHARED_LIB) $(SHARED_OBJS) $(SHLIB_LIST)
	cd ../lib && (rm -f libpanel.so.$(ABI_VERSION); $(LN_S) libpanel.so.$(REL_VERSION) libpanel.so.$(ABI_VERSION); rm -f libpanel.so; $(LN_S) libpanel.so.$(ABI_VERSION) libpanel.so; )

install \
install.libs \
install.panel :: $(DESTDIR)$(libdir) ../lib/libpanel.so.$(REL_VERSION)
	@echo installing ../lib/libpanel.so.$(REL_VERSION) as $(DESTDIR)$(libdir)/libpanel.so.$(REL_VERSION)
	-@rm -f $(DESTDIR)$(libdir)/libpanel.so.$(REL_VERSION)
	$(INSTALL_LIB) ../lib/libpanel.so.$(REL_VERSION) $(DESTDIR)$(libdir)/libpanel.so.$(REL_VERSION)
	cd $(DESTDIR)$(libdir) && (rm -f libpanel.so.$(ABI_VERSION); $(LN_S) libpanel.so.$(REL_VERSION) libpanel.so.$(ABI_VERSION); rm -f libpanel.so; $(LN_S) libpanel.so.$(ABI_VERSION) libpanel.so; )
	- test -z "$(DESTDIR)" && /sbin/ldconfig

uninstall \
uninstall.libs \
uninstall.panel ::
	@echo uninstalling $(DESTDIR)$(libdir)/libpanel.so.$(REL_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libpanel.so.$(REL_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libpanel.so.$(ABI_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libpanel.so

clean ::
	-rm -f ../lib/libpanel.so.$(REL_VERSION)
	-rm -f ../lib/libpanel.so.$(ABI_VERSION)
	-rm -f ../lib/libpanel.so

mostlyclean::
	-rm -f $(SHARED_OBJS)

# generated by mk-2nd.awk


../obj_s/panel.o :	$(srcdir)/panel.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/panel.c

../obj_s/p_above.o :	$(srcdir)/p_above.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_above.c

../obj_s/p_below.o :	$(srcdir)/p_below.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_below.c

../obj_s/p_bottom.o :	$(srcdir)/p_bottom.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_bottom.c

../obj_s/p_delete.o :	$(srcdir)/p_delete.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_delete.c

../obj_s/p_hide.o :	$(srcdir)/p_hide.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_hide.c

../obj_s/p_hidden.o :	$(srcdir)/p_hidden.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_hidden.c

../obj_s/p_move.o :	$(srcdir)/p_move.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_move.c

../obj_s/p_new.o :	$(srcdir)/p_new.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_new.c

../obj_s/p_replace.o :	$(srcdir)/p_replace.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_replace.c

../obj_s/p_show.o :	$(srcdir)/p_show.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_show.c

../obj_s/p_top.o :	$(srcdir)/p_top.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_top.c

../obj_s/p_update.o :	$(srcdir)/p_update.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_update.c

../obj_s/p_user.o :	$(srcdir)/p_user.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_user.c

../obj_s/p_win.o :	$(srcdir)/p_win.c \
			$(PANEL_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../panel/p_win.c


# generated by mk-1st.awk

NORMAL_OBJS = \
	../objects/panel.o \
	../objects/p_above.o \
	../objects/p_below.o \
	../objects/p_bottom.o \
	../objects/p_delete.o \
	../objects/p_hide.o \
	../objects/p_hidden.o \
	../objects/p_move.o \
	../objects/p_new.o \
	../objects/p_replace.o \
	../objects/p_show.o \
	../objects/p_top.o \
	../objects/p_update.o \
	../objects/p_user.o \
	../objects/p_win.o

$(NORMAL_OBJS) : ../include/ncurses_cfg.h ./panel.priv.h

../lib/libpanel.a : $(NORMAL_OBJS)
	$(AR) $(AR_OPTS) $@ $?
	$(RANLIB) $@

install \
install.libs \
install.panel :: $(DESTDIR)$(libdir) ../lib/libpanel.a
	@echo installing ../lib/libpanel.a as $(DESTDIR)$(libdir)/libpanel.a
	$(INSTALL_DATA) ../lib/libpanel.a $(DESTDIR)$(libdir)/libpanel.a
	$(RANLIB) $(DESTDIR)$(libdir)/libpanel.a

uninstall \
uninstall.libs \
uninstall.panel ::
	@echo uninstalling $(DESTDIR)$(libdir)/libpanel.a
	-@rm -f $(DESTDIR)$(libdir)/libpanel.a

clean ::
	-rm -f ../lib/libpanel.a
	-rm -f ../lib/
	-rm -f ../lib/libpanel.a

mostlyclean::
	-rm -f $(NORMAL_OBJS)

# generated by mk-2nd.awk


../objects/panel.o :	$(srcdir)/panel.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/panel.c

../objects/p_above.o :	$(srcdir)/p_above.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_above.c

../objects/p_below.o :	$(srcdir)/p_below.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_below.c

../objects/p_bottom.o :	$(srcdir)/p_bottom.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_bottom.c

../objects/p_delete.o :	$(srcdir)/p_delete.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_delete.c

../objects/p_hide.o :	$(srcdir)/p_hide.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_hide.c

../objects/p_hidden.o :	$(srcdir)/p_hidden.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_hidden.c

../objects/p_move.o :	$(srcdir)/p_move.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_move.c

../objects/p_new.o :	$(srcdir)/p_new.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_new.c

../objects/p_replace.o :	$(srcdir)/p_replace.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_replace.c

../objects/p_show.o :	$(srcdir)/p_show.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_show.c

../objects/p_top.o :	$(srcdir)/p_top.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_top.c

../objects/p_update.o :	$(srcdir)/p_update.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_update.c

../objects/p_user.o :	$(srcdir)/p_user.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_user.c

../objects/p_win.o :	$(srcdir)/p_win.c \
			$(PANEL_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../panel/p_win.c

$(DESTDIR)$(includedir) :
	$(srcdir)/../mkinstalldirs $@

install \
install.libs \
install.includes :: $(AUTO_SRC) $(DESTDIR)$(includedir) \
		$(srcdir)/panel.h
	@ (cd $(DESTDIR)$(includedir) && rm -f panel.h) ; ../headers.sh $(INSTALL_DATA) $(DESTDIR)$(includedir) $(srcdir) $(srcdir)/panel.h

uninstall \
uninstall.libs \
uninstall.includes ::
	-@ (cd $(DESTDIR)$(includedir) && rm -f panel.h)
