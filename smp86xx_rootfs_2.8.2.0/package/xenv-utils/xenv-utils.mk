genxenv             := genxenv
setxenv             := setxenv
unsetxenv           := unsetxenv

genxenv_dir         := $(BASE_DIR)/tools/genxenv
genxenv_install_dir := $(TARGET_DIR)/bin

genxenv_bin         := $(genxenv_dir)/$(genxenv)
genxenv_target      := $(genxenv_install_dir)/$(genxenv)
setxenv_bin         := $(genxenv_dir)/$(setxenv)
setxenv_target      := $(genxenv_install_dir)/$(setxenv)

$(genxenv_bin) $(setxenv_bin): FORCE
# Set RMCFLAGS to tango2 standalone to force the cross-compilation of genxenv and setxenv
	RMCFLAGS="-DEM86XX_CHIP=EM86XX_CHIPID_TANGO2 -DEM86XX_MODE=EM86XX_MODEID_STANDALONE -DEM86XX_REVISION=4" COMPILKIND=release $(MAKE) -C $(@D)

$(genxenv_target): $(genxenv_bin)
	mkdir -p $(@D)
	cp $< $@

$(setxenv_target): $(setxenv_bin)
	mkdir -p $(@D)
	cp $< $@
	ln -s $(setxenv) $(genxenv_install_dir)/$(unsetxenv)

.PHONY: genxenv setxenv
genxenv: $(genxenv_target)
setxenv: $(setxenv_target)

.PHONY: genxenv-clean setxenv-clean
genxenv-clean setxenv-clean:
	-rm $(genxenv_target) $(setxenv_target)
	$(MAKE) -C $(genxenv_dir) clean

.PHONY: genxenv-dirclean setxenv-dirclean
genxenv-dirclean: genxenv-clean 
setxenv-dirclean: setxenv-clean 

xbins := \
    tobin.bash
xbin_dir         := $(BASE_DIR)/xbin
xbin_install_dir := $(TARGET_DIR)/bin

xbin_scripts     := $(xbins:%=$(xbin_dir)/%)
xbin_targets     := $(xbins:%=$(xbin_install_dir)/%)

$(xbin_targets): $(xbin_install_dir)/%: $(xbin_dir)/%
	mkdir -p $(@D)
	cp $< $@

.PHONY: xbin
xbin: $(xbin_targets)

.PHONY: xbin-clean
xbin-clean:
	-rm $(xbin_targets)

.PHONY: xbin-dirclean
xbin-dirclean: xbin-clean

.PHONY: xenv-utils
xenv-utils: genxenv setxenv xbin

.PHONY: xenv-utils-clean
xenv-utils-clean: genxenv-clean setxenv-clean xbin-clean

.PHONY: xenv-utils-dirclean
xenv-utils-dirclean: genxenv-dirclean setxenv-dirclean xbin-dirclean

#############################################################
#
# Toplevel Makefile options
#
#############################################################
ifeq '$(strip $(BR2_PACKAGE_XENV_UTILS))' 'y'
TARGETS += xenv-utils
endif
