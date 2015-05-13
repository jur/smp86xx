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
if [ ! -d "jpeg-9a" ]; then
	tar -xzf ../dl/jpegsrc.v9a.tar.gz || exit 1
fi
cd jpeg-9a || exit 1
export cross_compiling=yes
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
