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
if [ ! -d "json-c-0.11" ]; then
	tar -xzf ../dl/json-c-0.11.tar.gz || exit 1
fi
cd json-c-0.11 || exit 1
export export ac_cv_func_malloc_0_nonnull=yes
export export ac_cv_func_realloc_0_nonnull=yes
./configure --prefix="${PREFIX}" --host="${HOSTTOOLCHAIN}" --bindir="${BINDIR}" || exit 1
make || exit 1
make DESTDIR="${DESTDIR}" install || exit 1
