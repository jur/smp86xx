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
if [ ! -d "SDL_image-1.2.12" ]; then
	tar -xzf ../dl/SDL_image-1.2.12.tar.gz || exit 1
fi
cd SDL_image-1.2.12 || exit 1
export LDLIBS="-ldcc -lrua -lllad"
export cross_compiling=yes
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="$DESTDIR" install || exit 1
