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
cd ffmpeg-1.2.7 || exit 1
export SDL_CONFIG="${DESTDIR}${PREFIX}/bin/${CROSS_COMPILE}sdl-config"
export DESTDIR="${DESTDIR}"
./configure --prefix="${PREFIX}" --cross-prefix="$CROSS_COMPILE" --enable-cross-compile --arch="${HOSTARCH}" --target-os=linux --disable-mipsdspr2 --disable-mipsdspr1 --disable-mipsfpu --bindir="${BINDIR}" || exit 1
make -j || exit 1
make BINDIR="${DESTDIR}${BINDIR}" install || exit 1
