deps_config := \
	toolchain/gdb/Config.in \
	toolchain/ccache/Config.in \
	toolchain/gcc/Config.in \
	toolchain/binutils/Config.in \
	toolchain/uClibc/Config.in \
	toolchain/kernel-headers/Config.in \
	toolchain/Config.in \
	Config.in

.config include/config.h: $(deps_config)

$(deps_config):
