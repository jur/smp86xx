#############################################################
#
# wireless-tools - Wireless Tools
#
#############################################################

# This Makefile only work with the multicall version of Wireless Tools,
# which is available in 28-pre3 and later...
# Jean II
# v28.pre3 -> earliest possible
WIRELESS_TOOLS_VER:=28
WIRELESS_TOOLS_SUBVER:=.pre3

#WIRELESS_TOOLS_SOURCE_URL:=http://www.hpl.hp.com/personal/Jean_Tourrilhes/Linux
WIRELESS_TOOLS_SOURCE_URL := $(DOWNLOAD_SITE)
WIRELESS_TOOLS_SOURCE:=wireless_tools.$(WIRELESS_TOOLS_VER)$(WIRELESS_TOOLS_SUBVER).tar.gz
WIRELESS_TOOLS_BUILD_DIR=$(BUILD_DIR)/wireless_tools.$(WIRELESS_TOOLS_VER)

$(DL_DIR)/$(WIRELESS_TOOLS_SOURCE):
	 $(WGET) -P $(DL_DIR) $(WIRELESS_TOOLS_SOURCE_URL)/$(WIRELESS_TOOLS_SOURCE)

$(WIRELESS_TOOLS_BUILD_DIR)/.unpacked: $(DL_DIR)/$(WIRELESS_TOOLS_SOURCE)
	zcat $(DL_DIR)/$(WIRELESS_TOOLS_SOURCE) | tar -C $(BUILD_DIR) $(TAR_OPTIONS) -
	sed -i -e s:'strip':'$(STRIP)':g $(WIRELESS_TOOLS_BUILD_DIR)/Makefile
	touch $(WIRELESS_TOOLS_BUILD_DIR)/.unpacked

$(WIRELESS_TOOLS_BUILD_DIR)/.configured: $(WIRELESS_TOOLS_BUILD_DIR)/.unpacked
	touch  $(WIRELESS_TOOLS_BUILD_DIR)/.configured

$(WIRELESS_TOOLS_BUILD_DIR)/iwmulticall: $(WIRELESS_TOOLS_BUILD_DIR)/.configured
	$(MAKE) -C $(WIRELESS_TOOLS_BUILD_DIR) \
		CC=$(TARGET_CC) CFLAGS="$(TARGET_CFLAGS)" \
		iwmulticall

$(TARGET_DIR)/sbin/iwconfig: $(WIRELESS_TOOLS_BUILD_DIR)/iwmulticall
	$(MAKE) -C $(WIRELESS_TOOLS_BUILD_DIR) \
		PREFIX="$(TARGET_DIR)" \
		CC=$(TARGET_CC) CFLAGS="$(TARGET_CFLAGS)" \
		install-iwmulticall

wireless-tools: $(TARGET_DIR)/sbin/iwconfig

wireless-tools-source: $(DL_DIR)/$(WIRELESS_TOOLS_SOURCE)

wireless-tools-clean:
	$(MAKE) DESTDIR=$(TARGET_DIR) CC=$(TARGET_CC) -C $(WIRELESS_TOOLS_BUILD_DIR) uninstall
	-$(MAKE) -C $(WIRELESS_TOOLS_BUILD_DIR) clean

wireless-tools-dirclean:
	rm -rf $(WIRELESS_TOOLS_BUILD_DIR)
#############################################################
#
# Toplevel Makefile options
#
#############################################################
ifeq ($(strip $(BR2_PACKAGE_WIRELESS_TOOLS)),y)
TARGETS+=wireless-tools
endif
