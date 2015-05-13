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
if [ ! -d "curl-7.37.0" ]; then
	tar -xjf ../dl/curl-7.37.0.tar.bz2 || exit 1
fi
cd curl-7.37.0 || exit 1
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --enable-ipv6 --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
