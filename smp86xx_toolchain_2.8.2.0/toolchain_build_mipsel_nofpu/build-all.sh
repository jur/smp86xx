#!/bin/bash
set -x
cd "$(dirname $0)" || exit 1
SCRIPTDIR="$(pwd)"

cd "$SCRIPTDIR" || exit 1

./configure-zlib.sh || exit 1
./configure-jpeg.sh || exit 1
./configure-libpng.sh || exit 1
./configure-freetype.sh || exit 1
./configure-openssl.sh || exit 1
./configure-openssh.sh || exit 1
./configure-json.sh || exit 1
./configure-curl.sh || exit 1
./configure-wget.sh || exit 1
./configure-smp86xxsdk.sh || exit 1
./configure-sdl.sh || exit 1
./configure-sdl_image.sh || exit 1
./configure-sdl_ttf.sh || exit 1
./configure-ffmpeg.sh || exit 1
./configure-smp86xxsdk-samples.sh || exit 1
./configure-netcat.sh || exit 1
./configure-python-host.sh || exit 1
./configure-python.sh || exit 1
