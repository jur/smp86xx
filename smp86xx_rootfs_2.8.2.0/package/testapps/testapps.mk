testapps := \
    iruser \
    scuser \
    fipuser
testapps_dir    := $(BASE_DIR)/package/testapps
testapps_bin    := $(testapps:%=$(testapps_dir)/%)
testapps_target := $(testapps:%=$(TARGET_DIR)/usr/bin/%)

$(testapps_bin):
	RMCFLAGS=-DEM86XX_CHIP=EM86XX_CHIPID_TANGO2 $(MAKE) -C package/testapps $(@F)
	
$(testapps_target): $(TARGET_DIR)/usr/bin/%: $(testapps_dir)/%
	cp $< $@
	
.PHONY: testapps
testapps: $(testapps_target)

.PHONY: testapps-clean
testapps-clean:
	-rm $(testapps)

.PHONY: testapps-dirclean
testapps-dirclean: testapps-clean

ifeq '$(strip $(SD_PACKAGE_TESTAPPS))' 'y'

ifeq '$(UCLINUX_KERNEL)' ''
$(warning You must define UCLINUX_KERNEL to point to your MIPS kernel source)
$(warning tree in order to build the Sigma Designs test applications.)
$(error Error: UCLINUX_KERNEL not defined.)
endif

TARGETS += testapps
endif
