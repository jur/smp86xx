# Generated automatically from Makefile.in by configure.
# $Id: Makefile.in,v 1.31 2000/10/14 17:57:02 Johnny.C.Lam Exp $
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
# Makefile for form source code.
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

LIBRARIES	=  ../lib/libform.so.$(REL_VERSION) ../lib/libform.a

LINT		= 
LINT_OPTS	= 
LINT_LIBS	= -lform -lncurses 

AUTO_SRC	= \
		../include/form.h  

################################################################################
all \
libs \
install ::	$(AUTO_SRC) $(LIBRARIES)

sources :	$(AUTO_SRC)

$(DESTDIR)$(libdir) :
	$(srcdir)/../mkinstalldirs $@

# make copies to simplify include-paths while still keeping form's include
# file in this directory.
../include/form.h : $(srcdir)/form.h
	-rm -f $@
	cp $(srcdir)/form.h $@

FORM_PRIV_H = \
	$(srcdir)/form.priv.h \
	$(srcdir)/form.h \
	../include/mf_common.h \
	../include/curses.h \
	../include/eti.h

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

../include/mf_common.h \
../include/eti.h :
	cd ../menu && $(MAKE) $@

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
	$(srcdir)/fld_arg.c \
	$(srcdir)/fld_attr.c \
	$(srcdir)/fld_current.c \
	$(srcdir)/fld_def.c \
	$(srcdir)/fld_dup.c \
	$(srcdir)/fld_ftchoice.c \
	$(srcdir)/fld_ftlink.c \
	$(srcdir)/fld_info.c \
	$(srcdir)/fld_just.c \
	$(srcdir)/fld_link.c \
	$(srcdir)/fld_max.c \
	$(srcdir)/fld_move.c \
	$(srcdir)/fld_newftyp.c \
	$(srcdir)/fld_opts.c \
	$(srcdir)/fld_pad.c \
	$(srcdir)/fld_page.c \
	$(srcdir)/fld_stat.c \
	$(srcdir)/fld_type.c \
	$(srcdir)/fld_user.c \
	$(srcdir)/frm_cursor.c \
	$(srcdir)/frm_data.c \
	$(srcdir)/frm_def.c \
	$(srcdir)/frm_driver.c \
	$(srcdir)/frm_hook.c \
	$(srcdir)/frm_opts.c \
	$(srcdir)/frm_page.c \
	$(srcdir)/frm_post.c \
	$(srcdir)/frm_req_name.c \
	$(srcdir)/frm_scale.c \
	$(srcdir)/frm_sub.c \
	$(srcdir)/frm_user.c \
	$(srcdir)/frm_win.c \
	$(srcdir)/fty_alnum.c \
	$(srcdir)/fty_alpha.c \
	$(srcdir)/fty_enum.c \
	$(srcdir)/fty_int.c \
	$(srcdir)/fty_ipv4.c \
	$(srcdir)/fty_num.c \
	$(srcdir)/fty_regex.c

# Producing llib-lform is time-consuming, so there's no direct-dependency for
# it in the lintlib rule.  We'll only remove in the cleanest setup.
clean ::
	rm -f llib-lform.*

realclean ::
	rm -f llib-lform

llib-lform : $(C_SRC)
	cproto -a -l -DLINT $(CPPFLAGS) $(C_SRC) >$@

lintlib :
	$(srcdir)/../misc/makellib form $(CPPFLAGS)
lint :
	$(LINT) $(LINT_OPTS) $(CPPFLAGS) $(C_SRC) $(LINT_LIBS)

# generated by mk-1st.awk

SHARED_OBJS = \
	../obj_s/fld_arg.o \
	../obj_s/fld_attr.o \
	../obj_s/fld_current.o \
	../obj_s/fld_def.o \
	../obj_s/fld_dup.o \
	../obj_s/fld_ftchoice.o \
	../obj_s/fld_ftlink.o \
	../obj_s/fld_info.o \
	../obj_s/fld_just.o \
	../obj_s/fld_link.o \
	../obj_s/fld_max.o \
	../obj_s/fld_move.o \
	../obj_s/fld_newftyp.o \
	../obj_s/fld_opts.o \
	../obj_s/fld_pad.o \
	../obj_s/fld_page.o \
	../obj_s/fld_stat.o \
	../obj_s/fld_type.o \
	../obj_s/fld_user.o \
	../obj_s/frm_cursor.o \
	../obj_s/frm_data.o \
	../obj_s/frm_def.o \
	../obj_s/frm_driver.o \
	../obj_s/frm_hook.o \
	../obj_s/frm_opts.o \
	../obj_s/frm_page.o \
	../obj_s/frm_post.o \
	../obj_s/frm_req_name.o \
	../obj_s/frm_scale.o \
	../obj_s/frm_sub.o \
	../obj_s/frm_user.o \
	../obj_s/frm_win.o \
	../obj_s/fty_alnum.o \
	../obj_s/fty_alpha.o \
	../obj_s/fty_enum.o \
	../obj_s/fty_int.o \
	../obj_s/fty_ipv4.o \
	../obj_s/fty_num.o \
	../obj_s/fty_regex.o

$(SHARED_OBJS) : ../include/ncurses_cfg.h ./form.priv.h

../lib/libform.so.$(REL_VERSION) : $(SHARED_OBJS)
	-@rm -f $@
	$(MK_SHARED_LIB) $(SHARED_OBJS) $(SHLIB_LIST)
	cd ../lib && (rm -f libform.so.$(ABI_VERSION); $(LN_S) libform.so.$(REL_VERSION) libform.so.$(ABI_VERSION); rm -f libform.so; $(LN_S) libform.so.$(ABI_VERSION) libform.so; )

install \
install.libs \
install.form :: $(DESTDIR)$(libdir) ../lib/libform.so.$(REL_VERSION)
	@echo installing ../lib/libform.so.$(REL_VERSION) as $(DESTDIR)$(libdir)/libform.so.$(REL_VERSION)
	-@rm -f $(DESTDIR)$(libdir)/libform.so.$(REL_VERSION)
	$(INSTALL_LIB) ../lib/libform.so.$(REL_VERSION) $(DESTDIR)$(libdir)/libform.so.$(REL_VERSION)
	cd $(DESTDIR)$(libdir) && (rm -f libform.so.$(ABI_VERSION); $(LN_S) libform.so.$(REL_VERSION) libform.so.$(ABI_VERSION); rm -f libform.so; $(LN_S) libform.so.$(ABI_VERSION) libform.so; )
	- test -z "$(DESTDIR)" && /sbin/ldconfig

uninstall \
uninstall.libs \
uninstall.form ::
	@echo uninstalling $(DESTDIR)$(libdir)/libform.so.$(REL_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libform.so.$(REL_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libform.so.$(ABI_VERSION)
	-rm -f $(DESTDIR)$(libdir)/libform.so

clean ::
	-rm -f ../lib/libform.so.$(REL_VERSION)
	-rm -f ../lib/libform.so.$(ABI_VERSION)
	-rm -f ../lib/libform.so

mostlyclean::
	-rm -f $(SHARED_OBJS)

# generated by mk-2nd.awk


../obj_s/fld_arg.o :	$(srcdir)/fld_arg.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_arg.c

../obj_s/fld_attr.o :	$(srcdir)/fld_attr.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_attr.c

../obj_s/fld_current.o :	$(srcdir)/fld_current.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_current.c

../obj_s/fld_def.o :	$(srcdir)/fld_def.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_def.c

../obj_s/fld_dup.o :	$(srcdir)/fld_dup.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_dup.c

../obj_s/fld_ftchoice.o :	$(srcdir)/fld_ftchoice.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_ftchoice.c

../obj_s/fld_ftlink.o :	$(srcdir)/fld_ftlink.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_ftlink.c

../obj_s/fld_info.o :	$(srcdir)/fld_info.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_info.c

../obj_s/fld_just.o :	$(srcdir)/fld_just.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_just.c

../obj_s/fld_link.o :	$(srcdir)/fld_link.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_link.c

../obj_s/fld_max.o :	$(srcdir)/fld_max.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_max.c

../obj_s/fld_move.o :	$(srcdir)/fld_move.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_move.c

../obj_s/fld_newftyp.o :	$(srcdir)/fld_newftyp.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_newftyp.c

../obj_s/fld_opts.o :	$(srcdir)/fld_opts.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_opts.c

../obj_s/fld_pad.o :	$(srcdir)/fld_pad.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_pad.c

../obj_s/fld_page.o :	$(srcdir)/fld_page.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_page.c

../obj_s/fld_stat.o :	$(srcdir)/fld_stat.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_stat.c

../obj_s/fld_type.o :	$(srcdir)/fld_type.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_type.c

../obj_s/fld_user.o :	$(srcdir)/fld_user.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fld_user.c

../obj_s/frm_cursor.o :	$(srcdir)/frm_cursor.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_cursor.c

../obj_s/frm_data.o :	$(srcdir)/frm_data.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_data.c

../obj_s/frm_def.o :	$(srcdir)/frm_def.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_def.c

../obj_s/frm_driver.o :	$(srcdir)/frm_driver.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_driver.c

../obj_s/frm_hook.o :	$(srcdir)/frm_hook.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_hook.c

../obj_s/frm_opts.o :	$(srcdir)/frm_opts.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_opts.c

../obj_s/frm_page.o :	$(srcdir)/frm_page.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_page.c

../obj_s/frm_post.o :	$(srcdir)/frm_post.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_post.c

../obj_s/frm_req_name.o :	$(srcdir)/frm_req_name.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_req_name.c

../obj_s/frm_scale.o :	$(srcdir)/frm_scale.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_scale.c

../obj_s/frm_sub.o :	$(srcdir)/frm_sub.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_sub.c

../obj_s/frm_user.o :	$(srcdir)/frm_user.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_user.c

../obj_s/frm_win.o :	$(srcdir)/frm_win.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/frm_win.c

../obj_s/fty_alnum.o :	$(srcdir)/fty_alnum.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_alnum.c

../obj_s/fty_alpha.o :	$(srcdir)/fty_alpha.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_alpha.c

../obj_s/fty_enum.o :	$(srcdir)/fty_enum.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_enum.c

../obj_s/fty_int.o :	$(srcdir)/fty_int.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_int.c

../obj_s/fty_ipv4.o :	$(srcdir)/fty_ipv4.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_ipv4.c

../obj_s/fty_num.o :	$(srcdir)/fty_num.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_num.c

../obj_s/fty_regex.o :	$(srcdir)/fty_regex.c \
			$(FORM_PRIV_H)
	cd ../obj_s; $(LIBTOOL) $(CC) $(CFLAGS_SHARED) -c ../form/fty_regex.c


# generated by mk-1st.awk

NORMAL_OBJS = \
	../objects/fld_arg.o \
	../objects/fld_attr.o \
	../objects/fld_current.o \
	../objects/fld_def.o \
	../objects/fld_dup.o \
	../objects/fld_ftchoice.o \
	../objects/fld_ftlink.o \
	../objects/fld_info.o \
	../objects/fld_just.o \
	../objects/fld_link.o \
	../objects/fld_max.o \
	../objects/fld_move.o \
	../objects/fld_newftyp.o \
	../objects/fld_opts.o \
	../objects/fld_pad.o \
	../objects/fld_page.o \
	../objects/fld_stat.o \
	../objects/fld_type.o \
	../objects/fld_user.o \
	../objects/frm_cursor.o \
	../objects/frm_data.o \
	../objects/frm_def.o \
	../objects/frm_driver.o \
	../objects/frm_hook.o \
	../objects/frm_opts.o \
	../objects/frm_page.o \
	../objects/frm_post.o \
	../objects/frm_req_name.o \
	../objects/frm_scale.o \
	../objects/frm_sub.o \
	../objects/frm_user.o \
	../objects/frm_win.o \
	../objects/fty_alnum.o \
	../objects/fty_alpha.o \
	../objects/fty_enum.o \
	../objects/fty_int.o \
	../objects/fty_ipv4.o \
	../objects/fty_num.o \
	../objects/fty_regex.o

$(NORMAL_OBJS) : ../include/ncurses_cfg.h ./form.priv.h

../lib/libform.a : $(NORMAL_OBJS)
	$(AR) $(AR_OPTS) $@ $?
	$(RANLIB) $@

install \
install.libs \
install.form :: $(DESTDIR)$(libdir) ../lib/libform.a
	@echo installing ../lib/libform.a as $(DESTDIR)$(libdir)/libform.a
	$(INSTALL_DATA) ../lib/libform.a $(DESTDIR)$(libdir)/libform.a
	$(RANLIB) $(DESTDIR)$(libdir)/libform.a

uninstall \
uninstall.libs \
uninstall.form ::
	@echo uninstalling $(DESTDIR)$(libdir)/libform.a
	-@rm -f $(DESTDIR)$(libdir)/libform.a

clean ::
	-rm -f ../lib/libform.a
	-rm -f ../lib/
	-rm -f ../lib/libform.a

mostlyclean::
	-rm -f $(NORMAL_OBJS)

# generated by mk-2nd.awk


../objects/fld_arg.o :	$(srcdir)/fld_arg.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_arg.c

../objects/fld_attr.o :	$(srcdir)/fld_attr.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_attr.c

../objects/fld_current.o :	$(srcdir)/fld_current.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_current.c

../objects/fld_def.o :	$(srcdir)/fld_def.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_def.c

../objects/fld_dup.o :	$(srcdir)/fld_dup.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_dup.c

../objects/fld_ftchoice.o :	$(srcdir)/fld_ftchoice.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_ftchoice.c

../objects/fld_ftlink.o :	$(srcdir)/fld_ftlink.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_ftlink.c

../objects/fld_info.o :	$(srcdir)/fld_info.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_info.c

../objects/fld_just.o :	$(srcdir)/fld_just.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_just.c

../objects/fld_link.o :	$(srcdir)/fld_link.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_link.c

../objects/fld_max.o :	$(srcdir)/fld_max.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_max.c

../objects/fld_move.o :	$(srcdir)/fld_move.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_move.c

../objects/fld_newftyp.o :	$(srcdir)/fld_newftyp.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_newftyp.c

../objects/fld_opts.o :	$(srcdir)/fld_opts.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_opts.c

../objects/fld_pad.o :	$(srcdir)/fld_pad.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_pad.c

../objects/fld_page.o :	$(srcdir)/fld_page.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_page.c

../objects/fld_stat.o :	$(srcdir)/fld_stat.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_stat.c

../objects/fld_type.o :	$(srcdir)/fld_type.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_type.c

../objects/fld_user.o :	$(srcdir)/fld_user.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fld_user.c

../objects/frm_cursor.o :	$(srcdir)/frm_cursor.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_cursor.c

../objects/frm_data.o :	$(srcdir)/frm_data.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_data.c

../objects/frm_def.o :	$(srcdir)/frm_def.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_def.c

../objects/frm_driver.o :	$(srcdir)/frm_driver.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_driver.c

../objects/frm_hook.o :	$(srcdir)/frm_hook.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_hook.c

../objects/frm_opts.o :	$(srcdir)/frm_opts.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_opts.c

../objects/frm_page.o :	$(srcdir)/frm_page.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_page.c

../objects/frm_post.o :	$(srcdir)/frm_post.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_post.c

../objects/frm_req_name.o :	$(srcdir)/frm_req_name.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_req_name.c

../objects/frm_scale.o :	$(srcdir)/frm_scale.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_scale.c

../objects/frm_sub.o :	$(srcdir)/frm_sub.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_sub.c

../objects/frm_user.o :	$(srcdir)/frm_user.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_user.c

../objects/frm_win.o :	$(srcdir)/frm_win.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/frm_win.c

../objects/fty_alnum.o :	$(srcdir)/fty_alnum.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_alnum.c

../objects/fty_alpha.o :	$(srcdir)/fty_alpha.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_alpha.c

../objects/fty_enum.o :	$(srcdir)/fty_enum.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_enum.c

../objects/fty_int.o :	$(srcdir)/fty_int.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_int.c

../objects/fty_ipv4.o :	$(srcdir)/fty_ipv4.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_ipv4.c

../objects/fty_num.o :	$(srcdir)/fty_num.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_num.c

../objects/fty_regex.o :	$(srcdir)/fty_regex.c \
			$(FORM_PRIV_H)
	cd ../objects; $(LIBTOOL) $(CC) $(CFLAGS_NORMAL) -c ../form/fty_regex.c

$(DESTDIR)$(includedir) :
	$(srcdir)/../mkinstalldirs $@

install \
install.libs \
install.includes :: $(AUTO_SRC) $(DESTDIR)$(includedir) \
		$(srcdir)/form.h
	@ (cd $(DESTDIR)$(includedir) && rm -f form.h) ; ../headers.sh $(INSTALL_DATA) $(DESTDIR)$(includedir) $(srcdir) $(srcdir)/form.h

uninstall \
uninstall.libs \
uninstall.includes ::
	-@ (cd $(DESTDIR)$(includedir) && rm -f form.h)
