
obj-y := initramfs_data.o

hostprogs-y  := gen_init_cpio

clean-files := initramfs_data.cpio.gz initramfs_list

# initramfs_data.o contains the initramfs_data.cpio.gz image.
# The image is included using .incbin, a dependency which is not
# tracked automatically.
$(obj)/initramfs_data.o: $(obj)/initramfs_data.cpio.gz FORCE

ifdef CONFIG_INITRAMFS_ROOT_UID
gen_initramfs_args += -u $(CONFIG_INITRAMFS_ROOT_UID)
endif

ifdef CONFIG_INITRAMFS_ROOT_GID
gen_initramfs_args += -g $(CONFIG_INITRAMFS_ROOT_GID)
endif

# The $(shell echo $(CONFIG_INITRAMFS_SOURCE)) is to remove the
# gratuitous begin and end quotes from the Kconfig string type.
# Internal, escaped quotes in the Kconfig string will loose the
# escape and become active quotes.
quotefixed_initramfs_source := $(shell echo $(CONFIG_INITRAMFS_SOURCE))

ifneq '$(quotefixed_initramfs_source)' '' # if the INITRAMFS option is set
ifeq '$(wildcard $(quotefixed_initramfs_source))' '' # but it does not exist in the file system
$(warning                                                                    )
$(warning Error: cannot find the initramfs source $(CONFIG_INITRAMFS_SOURCE) )
$(warning If you are using integration with the Sigma Designs MIPSutils      )
$(warning rootfs package, please make sure you have sourced 'rootfs-path.env')
$(warning in the rootfs package dir, or that you have adequately defined the )
$(warning 'SMP86XX_ROOTFS_PATH' environment variable.                        )
$(warning                                                                    )
$(error   Error: $(CONFIG_INITRAMFS_SOURCE) not found.)
endif
endif

filechk_initramfs_list = $(CONFIG_SHELL) \
 $(srctree)/scripts/gen_initramfs_list.sh $(gen_initramfs_args) $(quotefixed_initramfs_source)

$(obj)/initramfs_list: $(obj)/Makefile FORCE
	$(call filechk,initramfs_list)
	cat $(srctree)/usr/initramfs_default_node_list >> $@

quiet_cmd_cpio = CPIO    $@
      cmd_cpio = ./$< $(obj)/initramfs_list > $@


# Check if the INITRAMFS_SOURCE is a cpio archive
ifneq (,$(findstring .cpio,$(quotefixed_initramfs_source)))

# INITRAMFS_SOURCE has a cpio archive - verify that it's a single file
ifneq (1,$(words $(quotefixed_initramfs_source)))
$(error Only a single file may be specified in CONFIG_INITRAMFS_SOURCE (="$(quotefixed_initramfs_source)") when a cpio archive is directly specified.)
endif
# Now use the cpio archive directly
initramfs_data_cpio = $(quotefixed_initramfs_source)
targets += $(quotefixed_initramfs_source)

else

# INITRAMFS_SOURCE is not a cpio archive - create one
$(obj)/initramfs_data.cpio: $(obj)/gen_init_cpio \
                            $(initramfs-y) $(obj)/initramfs_list FORCE
	$(call if_changed,cpio)

targets += initramfs_data.cpio
initramfs_data_cpio = $(obj)/initramfs_data.cpio

endif


$(obj)/initramfs_data.cpio.gz: $(initramfs_data_cpio) FORCE
	$(call if_changed,gzip)

targets += initramfs_data.cpio.gz

is_gawk_installed := $(shell if gawk --version > /dev/null 2>& 1; then echo yes; fi)
ifneq '$(is_gawk_installed)' 'yes'
$(warning The 'gawk' utility is not installed on your system\; however it is a )
$(warning pre-requisite of the SMP86xx dev kit. Please install it before       )
$(warning proceeding.                                                          )
$(warning                                                                      )
$(warning Depending on the specifics of your Linux distribution, you can       )
$(warning consider the following ways of installing 'gawk' onto your system:   )
$(warning  - use a package manager, such as apt-get (apt-get install gawk) or  )
$(warning    yum (yum install gawk).                                           )
$(warning  - google for the package in rpm form ('gawk rpm download').         )
$(warning                                                                      )
$(error Error: 'gawk' not installed.)
endif
