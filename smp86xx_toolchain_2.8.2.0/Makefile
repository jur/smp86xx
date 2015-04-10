# Makefile for buildroot2
#
# Copyright (C) 1999-2005 by Erik Andersen <andersen@codepoet.org>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
#

#--------------------------------------------------------------
# Just run 'make menuconfig', configure stuff, then run 'make'.
# You shouldn't need to mess with anything beyond this point...
#--------------------------------------------------------------
TOPDIR=./
CONFIG_CONFIG_IN = Config.in
CONFIG_DEFCONFIG = .defconfig
CONFIG = package/config

noconfig_targets := menuconfig config oldconfig randconfig \
	defconfig allyesconfig allnoconfig clean distclean \
	release tags

# Pull in the user's configuration file
ifeq ($(filter $(noconfig_targets),$(MAKECMDGOALS)),)
-include $(TOPDIR).config
endif

ifeq ($(BR2_TAR_VERBOSITY),y)
TAR_OPTIONS=-xvf
else
TAR_OPTIONS=-xf
endif

ifeq ($(strip $(BR2_HAVE_DOT_CONFIG)),y)

#############################################################
#
# The list of stuff to build for the target toolchain
# along with the packages to build for the target.
#
##############################################################
DOWNLOAD_SITE := $(strip $(subst ",, $(BR2_DOWNLOAD_SITE)))
#"))
TARGETS := \
    host-sed \
    kernel-headers \
    uclibc-configured \
    binutils \
    gcc \
    uclibc-target-utils \
    genzbf \
    genxenv \
    xbin
include toolchain/Makefile.in
include package/Makefile.in

#############################################################
#
# You should probably leave this stuff alone unless you know
# what you are doing.
#
#############################################################



all:   world

# In this section, we need .config
include .config.cmd

# We also need the various per-package makefiles, which also add
# each selected package to TARGETS if that package was selected
# in the .config file.
include toolchain/*/*.mk
include package/*/*.mk
include tools/*/*.mk
include xbin/*.mk

# target stuff is last so it can override anything else
#include target/Makefile.in

TARGETS_CLEAN:=$(patsubst %,%-clean,$(TARGETS))
TARGETS_SOURCE:=$(patsubst %,%-source,$(TARGETS))
TARGETS_DIRCLEAN:=$(patsubst %,%-dirclean,$(TARGETS))

world: $(DL_DIR) $(BUILD_DIR) $(STAGING_DIR) $(TARGET_DIR) $(TARGETS) toolchain-path.env

.PHONY: all world clean dirclean distclean source $(TARGETS) \
	$(TARGETS_CLEAN) $(TARGETS_DIRCLEAN) $(TARGETS_SOURCE) \
	$(DL_DIR) $(BUILD_DIR) $(TOOL_BUILD_DIR) $(STAGING_DIR)

#############################################################
#
# staging and target directories do NOT list these as
# dependancies anywhere else
#
#############################################################
$(DL_DIR):
	@mkdir -p $(DL_DIR)

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

$(TOOL_BUILD_DIR):
	@mkdir -p $(TOOL_BUILD_DIR)

$(STAGING_DIR):
	@mkdir -p $(STAGING_DIR)/lib
	@mkdir -p $(STAGING_DIR)/include
	@mkdir -p $(STAGING_DIR)/$(REAL_GNU_TARGET_NAME)
	@ln -sf ../lib $(STAGING_DIR)/$(REAL_GNU_TARGET_NAME)/lib

#$(TARGET_DIR):
#	if [ -f "$(TARGET_SKELETON)" ] ; then \
#		zcat $(TARGET_SKELETON) | tar -C $(BUILD_DIR) -xf -; \
#	fi;
#	if [ -d "$(TARGET_SKEL_DIR)" ] ; then \
#		cp -a $(TARGET_SKEL_DIR)/* $(TARGET_DIR)/; \
#	fi;
#	-find $(TARGET_DIR) -type d -name CVS | xargs rm -rf
#	-find $(TARGET_DIR) -type d -name .svn | xargs rm -rf

source: $(TARGETS_SOURCE)

#############################################################
#
# Cleanup and misc junk
#
#############################################################
clean: $(TARGETS_CLEAN)
	rm -rf $(STAGING_DIR) $(TARGET_DIR) $(IMAGE)

dirclean: $(TARGETS_DIRCLEAN)
	rm -rf $(STAGING_DIR) $(TARGET_DIR) $(IMAGE)

distclean:
	rm -rf $(DL_DIR) $(BUILD_DIR) $(LINUX_KERNEL) $(IMAGE)

sourceball:
	rm -rf $(BUILD_DIR)
	set -e; \
	cd ..; \
	rm -f buildroot.tar.bz2; \
	tar -cvf buildroot.tar buildroot; \
	bzip2 -9 buildroot.tar; \

#############################################################
#
# Environment setup file for the toolchain
#
#############################################################
toolchain-path.env:
	@cp .config $(STAGING_DIR)/toolchain.config
	@echo creating $@...
	@echo "# source this script to put your new compiler in the PATH." >  $@
	@echo                                                              >> $@
	@echo "PATH=$(STAGING_DIR)/usr/bin:$(STAGING_DIR)/bin:\$$PATH"     >> $@
	@echo "SMP86XX_TOOLCHAIN_PATH=$(STAGING_DIR)"                      >> $@
	@echo "export SMP86XX_TOOLCHAIN_PATH"                              >> $@
ifeq ($(BR2_CCACHE),y)
	@echo "CCACHE_DIR=$(HOME)/.ccache"                                 >> $@
	@echo "export CCACHE_DIR"                                          >> $@
endif
	@cp toolchain-path.env $(STAGING_DIR)


else # ifeq ($(strip $(BR2_HAVE_DOT_CONFIG)),y)

all: menuconfig

# configuration
# ---------------------------------------------------------------------------

$(CONFIG)/conf:
	$(MAKE) -C $(CONFIG) conf
	-@if [ ! -f .config ] ; then \
		cp $(CONFIG_DEFCONFIG) .config; \
	fi
$(CONFIG)/mconf:
	$(MAKE) -C $(CONFIG) ncurses conf mconf
	-@if [ ! -f .config ] ; then \
		cp $(CONFIG_DEFCONFIG) .config; \
	fi

menuconfig: $(CONFIG)/mconf
	@$(CONFIG)/mconf $(CONFIG_CONFIG_IN)

config: $(CONFIG)/conf
	@$(CONFIG)/conf $(CONFIG_CONFIG_IN)

oldconfig: $(CONFIG)/conf
	@$(CONFIG)/conf -o $(CONFIG_CONFIG_IN)

randconfig: $(CONFIG)/conf
	@$(CONFIG)/conf -r $(CONFIG_CONFIG_IN)

allyesconfig: $(CONFIG)/conf
	#@$(CONFIG)/conf -y $(CONFIG_CONFIG_IN)
	#sed -i -e "s/^CONFIG_DEBUG.*/# CONFIG_DEBUG is not set/" .config
	@$(CONFIG)/conf -o $(CONFIG_CONFIG_IN)

allnoconfig: $(CONFIG)/conf
	@$(CONFIG)/conf -n $(CONFIG_CONFIG_IN)

defconfig: $(CONFIG)/conf
	@$(CONFIG)/conf -d $(CONFIG_CONFIG_IN)

#############################################################
#
# Cleanup and misc junk
#
#############################################################
clean:
	rm -f .config .config.old .config.cmd .tmpconfig.h
	- $(MAKE) -C $(CONFIG) clean

distclean: clean
	rm -rf sources/*

endif # ifeq ($(strip $(BR2_HAVE_DOT_CONFIG)),y)

.PHONY: dummy subdirs release distclean clean config oldconfig \
	menuconfig tags check test depend

.PHONY: FORCE
FORCE:

#############################################################
#
# Test for prerequisites
#
#############################################################
is_flex_installed := $(shell if flex --version > /dev/null 2>& 1; then echo yes; fi)
ifneq '$(is_flex_installed)' 'yes'
$(warning The 'flex' utility is not installed on your system\; however it is a )
$(warning pre-requisite of the SMP86xx dev kit. Please install it before       )
$(warning proceeding.                                                          )
$(warning                                                                      )
$(warning Depending on the specifics of your Linux distribution, you can       )
$(warning consider the following ways of installing 'flex' onto your system:   )
$(warning  - use a package manager, such as apt-get (apt-get install flex) or  )
$(warning    yum (yum install flex).                                           )
$(warning  - google for the package in rpm form ('flex rpm download').         )
$(warning                                                                      )
$(error Error: 'flex' not installed)
endif

is_makeinfo_installed := $(shell if makeinfo --version > /dev/null 2>& 1; then echo yes; fi)
ifneq '$(is_makeinfo_installed)' 'yes'
$(warning The 'makeinfo' utility is not installed on your system\;                )
$(warning however it is a pre-requisite of the SMP86xx dev kit.                   )
$(warning Please install it before proceeding.                                    )
$(warning                                                                         )
$(warning Depending on the specifics of your Linux distribution, you can          )
$(warning install it by installing the 'texinfo' and/or 'makeinfo' package.       )
$(warning Consider the following ways of installing 'texinfo' onto your system:   )
$(warning  - use a package manager, such as apt-get (apt-get install texinfo) or  )
$(warning    yum (yum install texinfo).                                           )
$(warning  - google for the package in rpm form ('texinfo rpm download')          )
$(warning                                                                         )
$(error Error: 'makeinfo/texinfo' not installed                                   )
endif

is_bison_installed := $(shell if bison --version > /dev/null 2>& 1; then echo yes; fi)
ifneq '$(is_bison_installed)' 'yes'
$(warning The 'bison' utility is not installed on your system\; however it is a)
$(warning pre-requisite of the SMP86xx dev kit. Please install it before       )
$(warning proceeding.                                                          )
$(warning                                                                      )
$(warning Depending on the specifics of your Linux distribution, you can       )
$(warning consider the following ways of installing 'bison' onto your system:  )
$(warning  - use a package manager, such as apt-get (apt-get install bison) or )
$(warning    yum (yum install bison).                                          )
$(warning  - google for the package in rpm form ('bison rpm download').        )
$(warning                                                                      )
$(error Error: 'bison' not installed)
endif

is_gettext_installed := $(shell if msgfmt --version > /dev/null 2>& 1; then echo yes; fi)
ifneq '$(is_gettext_installed)' 'yes'
$(warning The 'gettext' utility is not installed on your system\; however it is)
$(warning a pre-requisite of the SMP86xx dev kit. Please install it before     )
$(warning proceeding.                                                          )
$(warning                                                                      )
$(warning Depending on the specifics of your Linux distribution, you can       )
$(warning consider the following ways of installing 'gettext' onto your system:)
$(warning  - use a package manager, such as apt-get (apt-get install gettext)  )
$(warning    or yum (yum install gettext).                                     )
$(warning  - google for the package in rpm form ('gettext rpm download').      )
$(warning                                                                      )
$(error Error: 'gettext' not installed)
endif

is_genromfs_installed := $(shell if genromfs -h > /dev/null 2>& 1; then echo yes; fi)
ifneq '$(is_genromfs_installed)' 'yes'
$(warning The 'genromfs' utility is not installed on your system\; however it  )
$(warning is a pre-requisite of the SMP86xx dev kit. Please install it before  )
$(warning proceeding.                                                          )
$(warning                                                                      )
$(warning Depending on the specifics of your Linux distribution, you can       )
$(warning consider the following ways of installing 'genromfs' onto your       )
$(warning system:                                                              )
$(warning  - use a package manager, such as apt-get (apt-get install genromfs) )
$(warning    or yum (yum install genromfs).                                    )
$(warning  - google for the package in rpm form ('genromfs rpm download').     )
$(warning                                                                      )
$(error Error: 'genromfs' not installed)
endif

