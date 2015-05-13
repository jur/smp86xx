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
if [ ! -d "smp86xxsdk" ]; then
	git clone https://github.com/jur/smp86xxsdk.git || exit 1
fi
cd smp86xxsdk || exit 1
make PREFIX="$PREFIX" libraries || exit 1
make DESTDIR="${DESTDIR}" PREFIX="$PREFIX" install-header || exit 1
make DESTDIR="${DESTDIR}" PREFIX="$PREFIX" install-libaries || exit 1
