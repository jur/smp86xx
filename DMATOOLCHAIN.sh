export HOSTARCH="mipsel"
export HOSTTOOLCHAIN="${HOSTARCH}-linux-uclibc"
export BUILDARCH="$(uname -m)"
export BUILDPREFIX="${SCRIPTDIR}/host-toolchain-${BUILDARCH}"
export BUILDTOOLCHAIN="${HOSTARCH}-unknown-linux-gnu"
export SMP86XXBASE="$(pwd)"
export DESTDIR="${SMP86XXBASE}/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir"
export PREFIX="/"
export PATH="${DESTDIR}${PREFIX}bin:${BUILDPREFIX}/bin:$PATH"
export INCLUDEDIR="${DESTDIR}$PREFIX/mipsel-linux-uclibc/sys-include"
export CROSS_COMPILE="mipsel-linux-"

export BINDIR="${PREFIX}/${PREFIX}${CROSS_COMPILE}bin"
export SBINDIR="${PREFIX}/${PREFIX}${CROSS_COMPILE}sbin"

export CC="${CROSS_COMPILE}gcc"
export LD="${CROSS_COMPILE}ld"
export AR="${CROSS_COMPILE}ar"
export RANLIB="${CROSS_COMPILE}ranlib"
export AS="${CROSS_COMPILE}as"
export OBJDUMP="${CROSS_COMPILE}objdump"
export OBJCOPY="${CROSS_COMPILE}objcopy"
export STRIP="${CROSS_COMPILE}strip"

export PKG_CONFIG_DIR=
export PKG_CONFIG_LIBDIR="${DESTDIR}${PREFIX}/lib/pkgconfig:${DESTDIR}${PREFIX}/share/pkgconfig"
export PKG_CONFIG_SYSROOT_DIR="${DESTDIR}${PREFIX}"

export OPENSSLDIR="${PREFIX}/etc/ssl"
