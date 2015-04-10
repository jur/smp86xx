bootauth        := boot_auth
bootauth_dir    := $(BASE_DIR)/package/boot_auth
bootauth_bin    := $(bootauth:%=$(bootauth_dir)/%)
bootauth_target := $(bootauth:%=$(TARGET_DIR)/usr/sbin/%)

$(bootauth_bin):
	RMCFLAGS="-DEM86XX_CHIP=EM86XX_CHIPID_TANGO2 -DEM86XX_MODE=EM86XX_MODEID_STANDALONE" $(MAKE) -C $(bootauth_dir) $(@F)

$(bootauth_target): $(TARGET_DIR)/usr/sbin/%: $(bootauth_dir)/%
	cp $< $@

.PHONY: bootauth
bootauth: $(bootauth_target)

.PHONY: bootauth-clean
bootauth-clean:
	-rm -f $(bootauth_bin)
	$(MAKE) -C $(bootauth_dir) clean

.PHONY: bootauth-dirclean
bootauth-dirclean: bootauth-clean

ifeq '$(strip $(SD_PACKAGE_BOOT_AUTH))' 'y'
TARGETS += bootauth
endif

