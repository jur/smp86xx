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
cd SDL_ttf-2.0.11 || exit 1
export cross_compiling=yes
export FREETYPE_CONFIG="${DESTDIR}${PREFIX}${CROSS_COMPILE}bin/freetype-config"
./autogen.sh || exit 1
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --bindir="${BINDIR}" --with-freetype-prefix="${DESTDIR}${PREFIX}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
