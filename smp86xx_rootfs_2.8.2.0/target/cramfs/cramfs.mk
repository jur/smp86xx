#############################################################
#
# mkcramfs to build to target cramfs filesystems
#
#############################################################
CRAMFS_DIR=$(BUILD_DIR)/cramfs-1.1
CRAMFS_SOURCE=cramfs-1.1.tar.gz
#CRAMFS_SITE=http://aleron.dl.sourceforge.net/sourceforge/cramfs
CRAMFS_SITE := $(DOWNLOAD_SITE)

$(DL_DIR)/$(CRAMFS_SOURCE):
	 $(WGET) -P $(DL_DIR) $(CRAMFS_SITE)/$(CRAMFS_SOURCE)

$(CRAMFS_DIR): $(DL_DIR)/$(CRAMFS_SOURCE)
	zcat $(DL_DIR)/$(CRAMFS_SOURCE) | tar -C $(BUILD_DIR) -xvf -
	toolchain/patch-kernel.sh $(CRAMFS_DIR) target/cramfs/ cramfs*.patch

$(CRAMFS_DIR)/mkcramfs: $(CRAMFS_DIR)
	$(MAKE) CFLAGS="-Wall -O2 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64" -C $(CRAMFS_DIR);
	touch -c $(CRAMFS_DIR)/mkcramfs

cramfs: $(CRAMFS_DIR)/mkcramfs

cramfs-source: $(DL_DIR)/$(CRAMFS_SOURCE)

cramfs-clean:
	-$(MAKE) -C $(CRAMFS_DIR) clean

cramfs-dirclean:
	rm -rf $(CRAMFS_DIR)

#############################################################
#
# Build the cramfs root filesystem image
#
#############################################################

cramfsroot: cramfs
	#-@find $(TARGET_DIR)/lib -type f -name \*.so\* | xargs $(STRIP) --strip-unneeded 2>/dev/null || true;
	-@find $(TARGET_DIR) -type f -perm +111 | xargs $(STRIP) 2>/dev/null || true;
	@rm -rf $(TARGET_DIR)/usr/man
	@rm -rf $(TARGET_DIR)/usr/info
	$(CRAMFS_DIR)/mkcramfs -q -D target/generic/device_table.txt $(TARGET_DIR) $(IMAGE).cramfs

cramfsroot-source: cramfs-source

cramfsroot-clean:
	-$(MAKE) -C $(CRAMFS_DIR) clean

cramfsroot-dirclean:
	rm -rf $(CRAMFS_DIR)

#############################################################
#
# Toplevel Makefile options
#
#############################################################
ifeq ($(strip $(BR2_TARGET_ROOTFS_CRAMFS)),y)
TARGETS+=cramfsroot
endif
