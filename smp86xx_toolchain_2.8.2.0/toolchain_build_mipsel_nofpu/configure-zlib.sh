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
if [ ! -d "zlib-1.2.8" ]; then
	tar -xJf ../dl/zlib-1.2.8.tar.xz || exit 1
fi
cd zlib-1.2.8 || exit 1
./configure --prefix="${PREFIX}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
