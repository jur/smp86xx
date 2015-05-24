#!/bin/bash
set -x
cd "$(dirname $0)" || exit 1
SCRIPTDIR="$(pwd)"
cd "$SCRIPTDIR" || exit 1
HOSTARCH="$(uname -m)"
HOSTPREFIX="${SCRIPTDIR}/host-toolchain-${HOSTARCH}"
if [ ! -d "Python-2.7.8" ]; then
	tar -xJf ../dl/Python-2.7.8.tar.xz || exit 1
fi
cd Python-2.7.8 || exit 1
export LANG=C
if [ -e Makefile ]; then
	make distclean || exit 1
fi
./configure --prefix="${HOSTPREFIX}" || exit 1
make || exit 1
make Parser/pgen || exit 1
make install || exit 1
cp Parser/pgen "${HOSTPREFIX}/bin" || exit 1
make distclean || exit 1
