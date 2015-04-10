#############################################################
#
# Any custom stuff you feel like doing....
#
#############################################################
CUST_DIR:=package/customize/source

custom_file_list := $(shell find $(CUST_DIR) -not '(' -type d -name CVS -prune ')' -type f)

custom_installed_file_list := $(custom_file_list:$(CUST_DIR)/%=$(TARGET_DIR)/%)

$(custom_installed_file_list): $(TARGET_DIR)/%: $(CUST_DIR)/% FORCE
	@if [ ! -d $(@D) ]; then echo mkdir -p $(@D); mkdir -p $(@D); fi
	cp -df --preserve=mode --preserve=ownership $< $@

customize: $(custom_installed_file_list)

#############################################################
#
# Toplevel Makefile options
#
#############################################################
ifeq ($(strip $(BR2_PACKAGE_CUSTOMIZE)),y)
TARGETS+=customize
endif
