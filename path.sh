TOOLCHAIN=/opt/smp86xx
WORKPATH=/opt/smp86xx

# toolchain
# source this script to put your new compiler in the PATH.
CCACHE_DIR=$TOOLCHAIN/.ccache
PATH=$TOOLCHAIN/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/usr/bin:$TOOLCHAIN/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/bin:$PATH
SMP86XX_TOOLCHAIN_PATH=$TOOLCHAIN/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir
export CCACHE_DIR
export SMP86XX_TOOLCHAIN_PATH

# CPU_KEYS
export XSDK_ROOT=$TOOLCHAIN/CPU_KEYS_SMP8634_xosMe0-1/signed_items
export PATH=$TOOLCHAIN/CPU_KEYS_SMP8634_xosMe0-1/xbin:$PATH

# rootfs
# source this script for the kernel to pick up your rootfs automatically.
SMP86XX_ROOTFS_PATH=$WORKPATH/smp86xx_rootfs_2.8.2.0
export SMP86XX_ROOTFS_PATH

# for kernel integration
INSTALL_MOD_PATH=$WORKPATH/smp86xx_rootfs_2.8.2.0/build_mipsel/root
export INSTALL_MOD_PATH

# kernel
UCLINUX_KERNEL=$WORKPATH/smp86xx_kernel_source_2.8.3.0/linux-2.6.15
export UCLINUX_KERNEL
