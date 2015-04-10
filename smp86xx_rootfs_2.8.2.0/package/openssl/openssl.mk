#############################################################
#
# openssl
#
#############################################################

# TARGETS
OPENSSL_VERSION:=0.9.7e
OPENSSL_SITE:=http://www.openssl.org/source
OPENSSL_SOURCE:=openssl-$(OPENSSL_VERSION).tar.gz
OPENSSL_CAT:=zcat
OPENSSL_DIR:=$(BUILD_DIR)/openssl-$(OPENSSL_VERSION)

OPENSSL_TARGET_ARCH:=
ifeq ($(BR2_i386),y)
ifneq ($(ARCH),i386)
OPENSSL_TARGET_ARCH:=i386-$(ARCH)
endif
ifeq ($(ARCH),i686)
OPENSSL_TARGET_ARCH:=i386-i686/cmov
endif
endif
ifeq ($(OPENSSL_TARGET_ARCH),)
OPENSSL_TARGET_ARCH:=$(ARCH)
endif

ifeq ($(BR2_SOFT_FLOAT),y)
TARGET_SOFT_FLOAT:=-msoft-float
endif

$(DL_DIR)/$(OPENSSL_SOURCE):
	$(WGET) -P $(DL_DIR) $(OPENSSL_SITE)/$(OPENSSL_SOURCE)

openssl-unpack: $(OPENSSL_DIR)/.unpacked
$(OPENSSL_DIR)/.unpacked: $(DL_DIR)/$(OPENSSL_SOURCE)
	$(OPENSSL_CAT) $(DL_DIR)/$(OPENSSL_SOURCE) | tar -C $(BUILD_DIR) $(TAR_OPTIONS) -
	toolchain/patch-kernel.sh $(OPENSSL_DIR) package/openssl/ openssl\*.patch
	# sigh... we have to resort to this just to set a gcc flag.
	# grumble.. and of course make sure to escape any '/' in CFLAGS
	$(SED) 's,/CFLAG=,/CFLAG=$(TARGET_SOFT_FLOAT),g' \
		$(OPENSSL_DIR)/Configure
	$(SED) '/CFLAG=/s,/;, $(shell echo '$(TARGET_CFLAGS)' | sed -e 's/\//\\\\\//g')/;,' \
		$(OPENSSL_DIR)/Configure
	touch $@

$(OPENSSL_DIR)/Makefile: $(OPENSSL_DIR)/.unpacked
	(cd $(OPENSSL_DIR); \
	CFLAGS="-DOPENSSL_NO_KRB5 -DOPENSSL_NO_IDEA -DOPENSSL_NO_MDC2 -DOPENSSL_NO_RC5 $(TARGET_CFLAGS)" \
	PATH=$(TARGET_PATH) \
	./Configure linux-$(OPENSSL_TARGET_ARCH) --prefix=/ \
		--openssldir=/lib/ssl -L$(STAGING_DIR)/lib -ldl \
		-I$(STAGING_DIR)/include $(OPENSSL_OPTS) no-threads \
		shared no-idea no-mdc2 no-rc5)

$(OPENSSL_DIR)/apps/openssl: $(OPENSSL_DIR)/Makefile
	$(MAKE1) CC=$(TARGET_CC) -C $(OPENSSL_DIR) all build-shared
	# Work around openssl build bug to link libssl.so with libcrypto.so.
	-rm $(OPENSSL_DIR)/libssl.so.*.*.*
	$(MAKE1) CC=$(TARGET_CC) -C $(OPENSSL_DIR) do_linux-shared

$(STAGING_DIR)/lib/libcrypto.a: $(OPENSSL_DIR)/apps/openssl
	$(MAKE) CC=$(TARGET_CC) INSTALL_PREFIX=$(STAGING_DIR) -C $(OPENSSL_DIR) install
	cp -fa $(OPENSSL_DIR)/libcrypto.so* $(STAGING_DIR)/lib/
	chmod a-x $(STAGING_DIR)/lib/libcrypto.so.0.9.7
	(cd $(STAGING_DIR)/lib ; \
	 ln -fs libcrypto.so.0.9.7 libcrypto.so ; \
	 ln -fs libcrypto.so.0.9.7 libcrypto.so.0 ; \
	)
	cp -fa $(OPENSSL_DIR)/libssl.so* $(STAGING_DIR)/lib/
	chmod a-x $(STAGING_DIR)/lib/libssl.so.0.9.7
	(cd $(STAGING_DIR)/lib ; \
	 ln -fs libssl.so.0.9.7 libssl.so ; \
	 ln -fs libssl.so.0.9.7 libssl.so.0 ; \
	)
	touch -c $@

$(TARGET_DIR)/lib/libcrypto.so.0.9.7: $(STAGING_DIR)/lib/libcrypto.a
	mkdir -p $(TARGET_DIR)/lib
	cp -fa $(STAGING_DIR)/lib/libcrypto.so* $(TARGET_DIR)/lib/
	cp -fa $(STAGING_DIR)/lib/libssl.so* $(TARGET_DIR)/lib/
	cp -fa $(STAGING_DIR)/bin/openssl  $(TARGET_DIR)/bin/
	-rm $(STAGING_DIR)/bin/openssl
	-$(STRIP) --strip-unneeded $(TARGET_DIR)/lib/libssl.so.0.9.7
	-$(STRIP) --strip-unneeded $(TARGET_DIR)/lib/libcrypto.so.0.9.7

#$(TARGET_DIR)/lib/libssl.a: $(STAGING_DIR)/lib/libcrypto.a
#	mkdir -p $(TARGET_DIR)/include 
#	cp -a $(STAGING_DIR)/include/openssl $(TARGET_DIR)/include/
#	cp -dpf $(STAGING_DIR)/lib/libssl.a $(TARGET_DIR)/lib/
#	cp -dpf $(STAGING_DIR)/lib/libcrypto.a $(TARGET_DIR)/lib/
#	touch -c $@

openssl-headers: $(TARGET_DIR)/lib/libssl.a

openssl: uclibc $(TARGET_DIR)/lib/libcrypto.so.0.9.7

openssl-source: $(DL_DIR)/$(OPENSSL_SOURCE)

openssl-clean: 
	$(MAKE) -C $(OPENSSL_DIR) clean
	rm -f $(STAGING_DIR)/bin/openssl  $(TARGET_DIR)/bin/openssl
	rm -f $(STAGING_DIR)/lib/libcrypto.so* $(TARGET_DIR)/lib/libcrypto.so*
	rm -f $(STAGING_DIR)/lib/libssl.so* $(TARGET_DIR)/lib/libssl.so*
	rm -rf $(STAGING_DIR)/include/openssl $(TARGET_DIR)/include/openssl

openssl-dirclean: 
	rm -rf $(OPENSSL_DIR)
#############################################################
#
# Toplevel Makefile options
#
#############################################################
ifeq ($(strip $(BR2_PACKAGE_OPENSSL)),y)
TARGETS+=openssl
endif
ifeq ($(strip $(BR2_PACKAGE_OPENSSL_TARGET_HEADERS)),y)
TARGETS+=openssl-headers
endif
