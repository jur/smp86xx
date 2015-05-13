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
if [ ! -d "wget-1.15" ]; then
	tar -xJf ../dl/wget-1.15.tar.xz || exit 1
fi
cd wget-1.15 || exit 1
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --enable-ipv6 --with-ssl=openssl --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
