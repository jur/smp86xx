export SMP86XXBASE="$(pwd)"
export PREFIX="$SMP86XXBASE/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir"
export PATH="$PREFIX/bin:$PATH"
export INCLUDEDIR="$PREFIX/mipsel-linux-uclibc/sys-include"
export CROSS_COMPILE="mipsel-linux-"

export CC="${CROSS_COMPILE}gcc"
export LD="${CROSS_COMPILE}ld"
export AR="${CROSS_COMPILE}ar"
export RANLIB="${CROSS_COMPILE}ranlib"
export AS="${CROSS_COMPILE}as"
export OBJDUMP="${CROSS_COMPILE}objdump"
export OBJCOPY="${CROSS_COMPILE}objcopy"
export STRIP="${CROSS_COMPILE}strip"

export PKG_CONFIG_DIR=
export PKG_CONFIG_LIBDIR=/lib/pkgconfig:/share/pkgconfig
export PKG_CONFIG_SYSROOT_DIR=${PREFIX}
