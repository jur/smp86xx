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
if [ ! -d "netcat-0.7.1" ]; then
	tar -xjf ../dl/netcat-0.7.1.tar.bz2 || exit 1
fi
cd netcat-0.7.1 || exit 1
#./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --bindir="${BINDIR}" || exit 1
./configure --prefix="${PREFIX}" --host="mipsel-linux" --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
