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
cd SDL-1.2.15 || exit 1
export LDLIBS="-ldcc -lrua -lllad"
./autogen.sh
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --disable-pulseaudio --enable-esd=no --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
