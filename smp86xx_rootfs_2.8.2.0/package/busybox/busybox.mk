#############################################################
#
# busybox
#
#############################################################

#ifeq ($(strip $(BR2_PACKAGE_BUSYBOX_SNAPSHOT)),y)
## Be aware that this changes daily....
#BUSYBOX_DIR:=$(BUILD_DIR)/busybox
#BUSYBOX_SOURCE:=busybox-snapshot.tar.bz2
#BUSYBOX_SITE:=http://www.busybox.net/downloads/snapshots
#else
BUSYBOX_VER:=$(shell echo $(BR2_BUSYBOX_VERSION))
BUSYBOX_DIR:=$(BUILD_DIR)/busybox-$(BUSYBOX_VER)
BUSYBOX_SOURCE:=busybox-$(BUSYBOX_VER).tar.bz2
#BUSYBOX_SITE:=http://www.busybox.net/downloads
BUSYBOX_SITE := $(DOWNLOAD_SITE)
#endif
BUSYBOX_UNZIP=bzcat
BUSYBOX_CONFIG_FILE=package/busybox/busybox.config-$(BUSYBOX_VER)

$(DL_DIR)/$(BUSYBOX_SOURCE):
	 $(WGET) -P $(DL_DIR) $(BUSYBOX_SITE)/$(BUSYBOX_SOURCE)

busybox-source: $(DL_DIR)/$(BUSYBOX_SOURCE) $(BUSYBOX_CONFIG_FILE)

$(BUSYBOX_DIR)/.unpacked: $(DL_DIR)/$(BUSYBOX_SOURCE)
	$(BUSYBOX_UNZIP) $(DL_DIR)/$(BUSYBOX_SOURCE) | tar -C $(BUILD_DIR) $(TAR_OPTIONS) -
	# Allow busybox patches. (only on a certain version.)
	toolchain/patch-kernel.sh $(BUSYBOX_DIR) package/busybox busybox-$(BUSYBOX_VER)-\*.patch
	touch $(BUSYBOX_DIR)/.unpacked

$(BUSYBOX_DIR)/.configured: $(BUSYBOX_DIR)/.unpacked $(BUSYBOX_CONFIG_FILE)
	cp $(BUSYBOX_CONFIG_FILE) $(BUSYBOX_DIR)/.config
	$(SED) s,^CONFIG_PREFIX=.*,CONFIG_PREFIX=\"$(TARGET_DIR)\", \
		$(BUSYBOX_DIR)/.config ;
ifeq ($(BR2_ENABLE_LOCALE),y)
	$(SED) "s/^.*CONFIG_LOCALE_SUPPORT.*/CONFIG_LOCALE_SUPPORT=y/;" $(BUSYBOX_DIR)/.config
else
	$(SED) "s/^.*CONFIG_LOCALE_SUPPORT.*/CONFIG_LOCALE_SUPPORT=n/;" $(BUSYBOX_DIR)/.config
endif
ifeq ($(BR2_BUSYBOX_VERSION_1_0_0),y)
	$(SED) "s,^CROSS.*,CROSS=$(TARGET_CROSS)\n\
		PREFIX=$(TARGET_DIR),;" $(BUSYBOX_DIR)/Rules.mak
endif
ifeq ($(BR2_BUSYBOX_VERSION_1_2_2_1),y)
	$(SED) "s,^CROSS.*,CROSS=$(TARGET_CROSS)\n\
		PREFIX=$(TARGET_DIR),;" $(BUSYBOX_DIR)/Rules.mak
endif
ifeq ($(BR2_LARGEFILE),y)
	$(SED) "s/^.*CONFIG_LFS.*/CONFIG_LFS=y/;" $(BUSYBOX_DIR)/.config
else
	$(SED) "s/^.*CONFIG_LFS.*/CONFIG_LFS=n/;" $(BUSYBOX_DIR)/.config
	$(SED) "s/^.*FDISK_SUPPORT_LARGE_DISKS.*/FDISK_SUPPORT_LARGE_DISKS=n/;" $(BUSYBOX_DIR)/.config
endif
	$(MAKE) CC=$(TARGET_CC) CROSS_COMPILE="$(TARGET_CROSS)" CROSS="$(TARGET_CROSS)" -C $(BUSYBOX_DIR) oldconfig
	touch $(BUSYBOX_DIR)/.configured

.PHONY: busybox-configured
busybox-configured: $(BUSYBOX_DIR)/.configured

$(BUSYBOX_DIR)/busybox: $(BUSYBOX_DIR)/.configured
	$(MAKE) CC=$(TARGET_CC) CROSS_COMPILE="$(TARGET_CROSS)" CROSS="$(TARGET_CROSS)" PREFIX="$(TARGET_DIR)" \
		EXTRA_CFLAGS="$(TARGET_CFLAGS)" -C $(BUSYBOX_DIR)

$(TARGET_DIR)/bin/busybox: $(BUSYBOX_DIR)/busybox
	$(MAKE) CC=$(TARGET_CC) CROSS_COMPILE="$(TARGET_CROSS)" CROSS="$(TARGET_CROSS)" PREFIX="$(TARGET_DIR)" \
		EXTRA_CFLAGS="$(TARGET_CFLAGS)" -C $(BUSYBOX_DIR) install
	# for 2.6 kernel support
	ln -sf /bin/busybox $(TARGET_DIR)/init
	# Just in case
	-chmod a+x $(TARGET_DIR)/usr/share/udhcpc/default.script

busybox:  $(TARGET_DIR)/bin/busybox

busybox-clean:
	rm -f $(TARGET_DIR)/bin/busybox
	-$(MAKE) -C $(BUSYBOX_DIR) clean

busybox-dirclean:
	rm -rf $(BUSYBOX_DIR)
#############################################################
#
# Toplevel Makefile options
#
#############################################################
ifeq ($(strip $(BR2_PACKAGE_BUSYBOX)),y)
TARGETS+=busybox
endif
