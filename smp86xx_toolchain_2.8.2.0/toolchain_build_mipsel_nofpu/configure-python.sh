#!/bin/bash
set -x
cd "$(dirname $0)" || exit 1
SCRIPTDIR="$(pwd)"
cd ../.. || exit 1
if [ ! -e DMATOOLCHAIN.sh ]; then
	exit 1
fi
. DMATOOLCHAIN.sh
cd "$SCRIPTDIR" || exit 1
if [ ! -d "Python-2.7.8" ]; then
	tar -xJf ../dl/Python-2.7.8.tar.xz || exit 1
fi
cd Python-2.7.8 || exit 1
export LANG=C
export ac_cv_file__dev_ptmx=yes
export ac_cv_file__dev_ptc=no
export ac_cv_have_long_long_format=yes
export PYTHON_FOR_BUILD="${BUILDPREFIX}/bin/python2.7"
export _PYTHON_HOST_PLATFORM="linux2-${HOSTARCH}"
export PYTHONHOME="${BUILDPREFIX}"
export PYTHONPATH="${SCRIPTDIR}/Python-2.7.8/build/lib.linux2-mipsel-2.7/sysconfigdata/"
export HOSTPGEN="${BUILDPREFIX}/bin/pgen"
export PATH="$DESTDIR/$HOSTTOOLCHAIN/bin:$DESTDIR/libexec/gcc/mipsel-linux-uclibc/4.0.4:$PATH"

# TBD: Fix path
export PREFIX="/usr/python"

if [ -e Makefile ]; then
	make distclean || exit 1
fi
# --bindir="${BINDIR}"
./configure --prefix="${PREFIX}" \
	--exec-prefix="${PREFIX}" \
	--sysconfdir=/etc \
	--disable-gtk-doc \
	--disable-doc \
	--disable-docs \
	--disable-documentation \
	--with-xmlto=no \
	--with-fop=no \
	--disable-nls \
	--enable-ipv6 \
	--enable-static \
	--enable-shared \
	--disable-curses \
	--disable-bsddb \
	--disable-sqlite3 \
	--disable-codecs-cjk \
	--disable-ssl \
	--disable-bz2 \
	--without-cxx-main \
	--without-doc-strings \
	--disable-pydoc \
	--disable-test-modules \
	--disable-lib2to3 \
	--disable-gdbm \
	--disable-tk \
	--disable-nis \
	--disable-dbm \
	--disable-pyo-build \
	--with-expat=no \
	--with-system-ffi=no \
	--host="${HOSTTOOLCHAIN}" \
	--target="${HOSTTOOLCHAIN}" \
	--build="${BUILDTOOLCHAIN}" \
	|| exit 1

make DESTDIR="${DESTDIR}" PYTHON_FOR_BUILD="${PYTHON_FOR_BUILD}" HOSTPGEN="${HOSTPGEN}" || exit 1
make DESTDIR="${DESTDIR}" PYTHON_FOR_BUILD="${PYTHON_FOR_BUILD}" HOSTPGEN="${HOSTPGEN}" install || exit 1
