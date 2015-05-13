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
if [ ! -d "libpng-1.6.12" ]; then
	tar -xJf ../dl/libpng-1.6.12.tar.xz || exit 1
fi
cd libpng-1.6.12 || exit 1
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
