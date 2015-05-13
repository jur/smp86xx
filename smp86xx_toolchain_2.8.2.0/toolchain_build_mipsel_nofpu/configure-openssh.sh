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
cd openssh-6.6p1 || exit 1
export LD="$CC"
export PATH="${DESTDIR}${PREFIX}/${HOSTTOOLCHAIN}/bin:$PATH"
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --with-hardening=no --bindir="${BINDIR}" --sbindir="${SBINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
