/*
 * Automatically generated header file: don't edit
 */

#define AUTOCONF_INCLUDED

/* Version Number */
#define BB_VER "(null)"
#define BB_BT "(null)"

#define BR2_HAVE_DOT_CONFIG 1
#define BR2_mipsel 1
#define BR2_ARCH "mipsel"

/*
 * Build options
 */
#define BR2_WGET "wget --passive-ftp -nd"
#define BR2_SVN "Subversion (svn) checkout command"
#undef BR2_TAR_VERBOSITY
#define BR2_STAGING_DIR "$(BUILD_DIR)/staging_dir"
#define BR2_JLEVEL 1
#define BR2_DOWNLOAD_SITE "ftp://armutils:sigmadesigns@gw.sigmadesigns.com/smp86xx"

/*
 * Toolchain Options
 */

/*
 * Kernel Header Options
 */
#undef BR2_KERNEL_HEADERS_2_4_29
#define BR2_KERNEL_HEADERS_2_6_11_0 1
#define BR2_DEFAULT_KERNEL_HEADERS "2.6.11.0"

/*
 * uClibc Options
 */
#undef BR2_UCLIBC_VERSION_0_9_27
#define BR2_UCLIBC_VERSION_0_9_28 1
#define BR2_UCLIBC_VERSION "0.9.28"

/*
 * Binutils Options
 */
#undef BR2_BINUTILS_VERSION_2_15_91_0_2
#define BR2_BINUTILS_VERSION_2_17 1
#define BR2_BINUTILS_VERSION "2.17"

/*
 * Gcc Options
 */
#undef BR2_GCC_VERSION_3_4_2
#define BR2_GCC_VERSION_4_0_4 1
#define BR2_GCC_VERSION "4.0.4"
#define BR2_GCC_USE_SJLJ_EXCEPTIONS "--enable-sjlj-exceptions"
#define BR2_EXTRA_GCC_CONFIG_OPTIONS ""
#define BR2_INSTALL_LIBSTDCPP 1
#undef BR2_INSTALL_LIBGCJ
#undef BR2_INSTALL_OBJC

/*
 * Ccache Options
 */
#define BR2_CCACHE 1

/*
 * Gdb Options
 */
#define BR2_PACKAGE_GDB_CLIENT 1
#undef BR2_GDB_VERSION_6_3
#define BR2_GDB_VERSION_6_5 1
#define BR2_GDB_VERSION "6.5"

/*
 * Common Toolchain Options
 */
#define BR2_ENABLE_MULTILIB 1
#define BR2_LARGEFILE 1
#define BR2_SOFT_FLOAT 1
#define BR2_TARGET_OPTIMIZATION "-Os -mips32r2 -Wa,-mips32r2 -pipe"
