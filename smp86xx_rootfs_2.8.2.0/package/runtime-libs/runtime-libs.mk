ifndef RUNTIME_LIBS_MK
RUNTIME_LIBS_MK := 1

rtlib_list_all := $(shell ls $(SMP86XX_TOOLCHAIN_PATH)/lib/*.so $(SMP86XX_TOOLCHAIN_PATH)/lib/*.so.* )

rtlib_list := $(shell for f in $(rtlib_list_all); do basename $$f; done)
 
toolchain_rtlib_list := $(rtlib_list:%=$(SMP86XX_TOOLCHAIN_PATH)/lib/%)
target_rtlib_list := $(rtlib_list:%=$(TARGET_DIR)/lib/%)

.PHONY: echo-rtlib-debug
echo-rtlib-debug:
	@echo toolchain_rtlib_list = $(toolchain_rtlib_list)
	@echo target_rtlib_list = $(target_rtlib_list)

$(target_rtlib_list): $(toolchain_rtlib_list)
	cp -a $^ $(TARGET_DIR)/lib
	mipsel-linux-strip $(target_rtlib_list)

.PHONY: install-runtime-libs
install-runtime-libs: $(target_rtlib_list)

#############################################################
#
# Toplevel Makefile options
#
#############################################################
TARGETS += install-runtime-libs

endif
