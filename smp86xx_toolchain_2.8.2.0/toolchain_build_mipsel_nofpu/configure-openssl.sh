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
export CROSS_COMPILE=
if [ ! -d "openssl-1.0.1h" ]; then
	tar -xzf ../dl/openssl-1.0.1h.tar.gz || exit 1
fi
cd openssl-1.0.1h || exit 1
./Configure --prefix="${PREFIX}" --openssldir="${OPENSSLDIR}" shared linux-generic32 || exit 1
make || exit 1
make INSTALL_PREFIX="${DESTDIR}" install || exit 1
