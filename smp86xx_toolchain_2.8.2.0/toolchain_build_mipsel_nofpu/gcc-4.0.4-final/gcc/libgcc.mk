srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc
VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc
EQ = =
objects = $(filter %.o,$^)

# Dependencies are accumulated as we go.
all: stmp-dirs
dirs = libgcc

vis_hide := $(strip $(subst @,-,\
    $(shell if echo 'void foo(void); void foo(void) {}' | \
          $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fvisibility=hidden -Werror \
          -c -xc - -o vis_temp_file$$$$.o 2> /dev/null; \
          then echo @fvisibility=hidden @DHIDE_EXPORTS; \
          rm vis_temp_file$$$$.o 2> /dev/null; \
          fi)))

ifneq (,$(vis_hide))
define gen-hide-list
$(NM_FOR_TARGET) -pg $< | \
  $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }' > $@T
mv -f $@T $@
endef
else
gen-hide-list = echo > $@
endif


#
# ml: .;
# dir: .
# flags:
# libgcc_a: ./libgcc.a
# libgcov_a: ./libgcov.a
# libgcc_eh_a: ./libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: ./libgcc_s.so
# libunwind_so:
#

libgcc/./_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3_s.o
libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
./libgcc.a: libgcc/./_muldi3.o
./libgcc_s.so: libgcc/./_muldi3_s.o
libgcc/./libgcc.map: libgcc/./_muldi3_s.o
libgcc/./_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2_s.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
./libgcc.a: libgcc/./_negdi2.o
./libgcc_s.so: libgcc/./_negdi2_s.o
libgcc/./libgcc.map: libgcc/./_negdi2_s.o
libgcc/./_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3_s.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
./libgcc.a: libgcc/./_lshrdi3.o
./libgcc_s.so: libgcc/./_lshrdi3_s.o
libgcc/./libgcc.map: libgcc/./_lshrdi3_s.o
libgcc/./_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3_s.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
./libgcc.a: libgcc/./_ashldi3.o
./libgcc_s.so: libgcc/./_ashldi3_s.o
libgcc/./libgcc.map: libgcc/./_ashldi3_s.o
libgcc/./_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3_s.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
./libgcc.a: libgcc/./_ashrdi3.o
./libgcc_s.so: libgcc/./_ashrdi3_s.o
libgcc/./libgcc.map: libgcc/./_ashrdi3_s.o
libgcc/./_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2_s.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
./libgcc.a: libgcc/./_cmpdi2.o
./libgcc_s.so: libgcc/./_cmpdi2_s.o
libgcc/./libgcc.map: libgcc/./_cmpdi2_s.o
libgcc/./_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2_s.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
./libgcc.a: libgcc/./_ucmpdi2.o
./libgcc_s.so: libgcc/./_ucmpdi2_s.o
libgcc/./libgcc.map: libgcc/./_ucmpdi2_s.o
libgcc/./_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf_s.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
./libgcc.a: libgcc/./_floatdidf.o
./libgcc_s.so: libgcc/./_floatdidf_s.o
libgcc/./libgcc.map: libgcc/./_floatdidf_s.o
libgcc/./_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf_s.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
./libgcc.a: libgcc/./_floatdisf.o
./libgcc_s.so: libgcc/./_floatdisf_s.o
libgcc/./libgcc.map: libgcc/./_floatdisf_s.o
libgcc/./_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi_s.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
./libgcc.a: libgcc/./_fixunsdfsi.o
./libgcc_s.so: libgcc/./_fixunsdfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfsi_s.o
libgcc/./_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi_s.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
./libgcc.a: libgcc/./_fixunssfsi.o
./libgcc_s.so: libgcc/./_fixunssfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfsi_s.o
libgcc/./_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi_s.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
./libgcc.a: libgcc/./_fixunsdfdi.o
./libgcc_s.so: libgcc/./_fixunsdfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfdi_s.o
libgcc/./_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi_s.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
./libgcc.a: libgcc/./_fixdfdi.o
./libgcc_s.so: libgcc/./_fixdfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixdfdi_s.o
libgcc/./_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi_s.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
./libgcc.a: libgcc/./_fixunssfdi.o
./libgcc_s.so: libgcc/./_fixunssfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfdi_s.o
libgcc/./_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi_s.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixsfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
./libgcc.a: libgcc/./_fixsfdi.o
./libgcc_s.so: libgcc/./_fixsfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixsfdi_s.o
libgcc/./_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi_s.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
./libgcc.a: libgcc/./_fixxfdi.o
./libgcc_s.so: libgcc/./_fixxfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixxfdi_s.o
libgcc/./_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi_s.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
./libgcc.a: libgcc/./_fixunsxfdi.o
./libgcc_s.so: libgcc/./_fixunsxfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfdi_s.o
libgcc/./_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf_s.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
./libgcc.a: libgcc/./_floatdixf.o
./libgcc_s.so: libgcc/./_floatdixf_s.o
libgcc/./libgcc.map: libgcc/./_floatdixf_s.o
libgcc/./_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi_s.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
./libgcc.a: libgcc/./_fixunsxfsi.o
./libgcc_s.so: libgcc/./_fixunsxfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfsi_s.o
libgcc/./_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi_s.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixtfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
./libgcc.a: libgcc/./_fixtfdi.o
./libgcc_s.so: libgcc/./_fixtfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixtfdi_s.o
libgcc/./_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi_s.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunstfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
./libgcc.a: libgcc/./_fixunstfdi.o
./libgcc_s.so: libgcc/./_fixunstfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunstfdi_s.o
libgcc/./_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf_s.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
./libgcc.a: libgcc/./_floatditf.o
./libgcc_s.so: libgcc/./_floatditf_s.o
libgcc/./libgcc.map: libgcc/./_floatditf_s.o
libgcc/./_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache_s.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
./libgcc.a: libgcc/./_clear_cache.o
./libgcc_s.so: libgcc/./_clear_cache_s.o
libgcc/./libgcc.map: libgcc/./_clear_cache_s.o
libgcc/./_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack_s.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
./libgcc.a: libgcc/./_enable_execute_stack.o
./libgcc_s.so: libgcc/./_enable_execute_stack_s.o
libgcc/./libgcc.map: libgcc/./_enable_execute_stack_s.o
libgcc/./_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline_s.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
./libgcc.a: libgcc/./_trampoline.o
./libgcc_s.so: libgcc/./_trampoline_s.o
libgcc/./libgcc.map: libgcc/./_trampoline_s.o
libgcc/./__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main_s.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
./libgcc.a: libgcc/./__main.o
./libgcc_s.so: libgcc/./__main_s.o
libgcc/./libgcc.map: libgcc/./__main_s.o
libgcc/./_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2_s.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
./libgcc.a: libgcc/./_absvsi2.o
./libgcc_s.so: libgcc/./_absvsi2_s.o
libgcc/./libgcc.map: libgcc/./_absvsi2_s.o
libgcc/./_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2_s.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
./libgcc.a: libgcc/./_absvdi2.o
./libgcc_s.so: libgcc/./_absvdi2_s.o
libgcc/./libgcc.map: libgcc/./_absvdi2_s.o
libgcc/./_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3_s.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
./libgcc.a: libgcc/./_addvsi3.o
./libgcc_s.so: libgcc/./_addvsi3_s.o
libgcc/./libgcc.map: libgcc/./_addvsi3_s.o
libgcc/./_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3_s.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
./libgcc.a: libgcc/./_addvdi3.o
./libgcc_s.so: libgcc/./_addvdi3_s.o
libgcc/./libgcc.map: libgcc/./_addvdi3_s.o
libgcc/./_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3_s.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
./libgcc.a: libgcc/./_subvsi3.o
./libgcc_s.so: libgcc/./_subvsi3_s.o
libgcc/./libgcc.map: libgcc/./_subvsi3_s.o
libgcc/./_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3_s.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
./libgcc.a: libgcc/./_subvdi3.o
./libgcc_s.so: libgcc/./_subvdi3_s.o
libgcc/./libgcc.map: libgcc/./_subvdi3_s.o
libgcc/./_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3_s.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
./libgcc.a: libgcc/./_mulvsi3.o
./libgcc_s.so: libgcc/./_mulvsi3_s.o
libgcc/./libgcc.map: libgcc/./_mulvsi3_s.o
libgcc/./_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3_s.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
./libgcc.a: libgcc/./_mulvdi3.o
./libgcc_s.so: libgcc/./_mulvdi3_s.o
libgcc/./libgcc.map: libgcc/./_mulvdi3_s.o
libgcc/./_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2_s.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
./libgcc.a: libgcc/./_negvsi2.o
./libgcc_s.so: libgcc/./_negvsi2_s.o
libgcc/./libgcc.map: libgcc/./_negvsi2_s.o
libgcc/./_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2_s.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
./libgcc.a: libgcc/./_negvdi2.o
./libgcc_s.so: libgcc/./_negvdi2_s.o
libgcc/./libgcc.map: libgcc/./_negvdi2_s.o
libgcc/./_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors_s.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
./libgcc.a: libgcc/./_ctors.o
./libgcc_s.so: libgcc/./_ctors_s.o
libgcc/./libgcc.map: libgcc/./_ctors_s.o
libgcc/./_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2_s.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
./libgcc.a: libgcc/./_ffssi2.o
./libgcc_s.so: libgcc/./_ffssi2_s.o
libgcc/./libgcc.map: libgcc/./_ffssi2_s.o
libgcc/./_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2_s.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
./libgcc.a: libgcc/./_ffsdi2.o
./libgcc_s.so: libgcc/./_ffsdi2_s.o
libgcc/./libgcc.map: libgcc/./_ffsdi2_s.o
libgcc/./_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz_s.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
./libgcc.a: libgcc/./_clz.o
./libgcc_s.so: libgcc/./_clz_s.o
libgcc/./libgcc.map: libgcc/./_clz_s.o
libgcc/./_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2_s.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
./libgcc.a: libgcc/./_clzsi2.o
./libgcc_s.so: libgcc/./_clzsi2_s.o
libgcc/./libgcc.map: libgcc/./_clzsi2_s.o
libgcc/./_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2_s.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
./libgcc.a: libgcc/./_clzdi2.o
./libgcc_s.so: libgcc/./_clzdi2_s.o
libgcc/./libgcc.map: libgcc/./_clzdi2_s.o
libgcc/./_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2_s.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
./libgcc.a: libgcc/./_ctzsi2.o
./libgcc_s.so: libgcc/./_ctzsi2_s.o
libgcc/./libgcc.map: libgcc/./_ctzsi2_s.o
libgcc/./_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2_s.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
./libgcc.a: libgcc/./_ctzdi2.o
./libgcc_s.so: libgcc/./_ctzdi2_s.o
libgcc/./libgcc.map: libgcc/./_ctzdi2_s.o
libgcc/./_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab_s.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
./libgcc.a: libgcc/./_popcount_tab.o
./libgcc_s.so: libgcc/./_popcount_tab_s.o
libgcc/./libgcc.map: libgcc/./_popcount_tab_s.o
libgcc/./_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2_s.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
./libgcc.a: libgcc/./_popcountsi2.o
./libgcc_s.so: libgcc/./_popcountsi2_s.o
libgcc/./libgcc.map: libgcc/./_popcountsi2_s.o
libgcc/./_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2_s.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
./libgcc.a: libgcc/./_popcountdi2.o
./libgcc_s.so: libgcc/./_popcountdi2_s.o
libgcc/./libgcc.map: libgcc/./_popcountdi2_s.o
libgcc/./_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2_s.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
./libgcc.a: libgcc/./_paritysi2.o
./libgcc_s.so: libgcc/./_paritysi2_s.o
libgcc/./libgcc.map: libgcc/./_paritysi2_s.o
libgcc/./_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2_s.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
./libgcc.a: libgcc/./_paritydi2.o
./libgcc_s.so: libgcc/./_paritydi2_s.o
libgcc/./libgcc.map: libgcc/./_paritydi2_s.o
libgcc/./_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2_s.o
libgcc/./_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2.o
./libgcc.a: libgcc/./_powisf2.o
./libgcc_s.so: libgcc/./_powisf2_s.o
libgcc/./libgcc.map: libgcc/./_powisf2_s.o
libgcc/./_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2_s.o
libgcc/./_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2.o
./libgcc.a: libgcc/./_powidf2.o
./libgcc_s.so: libgcc/./_powidf2_s.o
libgcc/./libgcc.map: libgcc/./_powidf2_s.o
libgcc/./_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2_s.o
libgcc/./_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2.o
./libgcc.a: libgcc/./_powixf2.o
./libgcc_s.so: libgcc/./_powixf2_s.o
libgcc/./libgcc.map: libgcc/./_powixf2_s.o
libgcc/./_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2_s.o
libgcc/./_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2.o
./libgcc.a: libgcc/./_powitf2.o
./libgcc_s.so: libgcc/./_powitf2_s.o
libgcc/./libgcc.map: libgcc/./_powitf2_s.o
libgcc/./_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3_s.o
libgcc/./_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3.o
./libgcc.a: libgcc/./_mulsc3.o
./libgcc_s.so: libgcc/./_mulsc3_s.o
libgcc/./libgcc.map: libgcc/./_mulsc3_s.o
libgcc/./_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3_s.o
libgcc/./_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3.o
./libgcc.a: libgcc/./_muldc3.o
./libgcc_s.so: libgcc/./_muldc3_s.o
libgcc/./libgcc.map: libgcc/./_muldc3_s.o
libgcc/./_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3_s.o
libgcc/./_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3.o
./libgcc.a: libgcc/./_mulxc3.o
./libgcc_s.so: libgcc/./_mulxc3_s.o
libgcc/./libgcc.map: libgcc/./_mulxc3_s.o
libgcc/./_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/./_multc3_s.o
libgcc/./_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_multc3.o
./libgcc.a: libgcc/./_multc3.o
./libgcc_s.so: libgcc/./_multc3_s.o
libgcc/./libgcc.map: libgcc/./_multc3_s.o
libgcc/./_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3_s.o
libgcc/./_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3.o
./libgcc.a: libgcc/./_divsc3.o
./libgcc_s.so: libgcc/./_divsc3_s.o
libgcc/./libgcc.map: libgcc/./_divsc3_s.o
libgcc/./_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3_s.o
libgcc/./_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3.o
./libgcc.a: libgcc/./_divdc3.o
./libgcc_s.so: libgcc/./_divdc3_s.o
libgcc/./libgcc.map: libgcc/./_divdc3_s.o
libgcc/./_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3_s.o
libgcc/./_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3.o
./libgcc.a: libgcc/./_divxc3.o
./libgcc_s.so: libgcc/./_divxc3_s.o
libgcc/./libgcc.map: libgcc/./_divxc3_s.o
libgcc/./_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3_s.o
libgcc/./_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3.o
./libgcc.a: libgcc/./_divtc3.o
./libgcc_s.so: libgcc/./_divtc3_s.o
libgcc/./libgcc.map: libgcc/./_divtc3_s.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
./libgcc.a: libgcc/./_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
./libgcc.a: libgcc/./__gcc_bcmp.o
libgcc/./_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_divdi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3_s.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divdi3 $(vis_hide) -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3.o
./libgcc.a: libgcc/./_divdi3.o
./libgcc_s.so: libgcc/./_divdi3_s.o
libgcc/./libgcc.map: libgcc/./_divdi3_s.o
libgcc/./_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_moddi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3_s.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_moddi3 $(vis_hide) -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3.o
./libgcc.a: libgcc/./_moddi3.o
./libgcc_s.so: libgcc/./_moddi3_s.o
libgcc/./libgcc.map: libgcc/./_moddi3_s.o
libgcc/./_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_udivdi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3_s.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udivdi3 $(vis_hide) -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3.o
./libgcc.a: libgcc/./_udivdi3.o
./libgcc_s.so: libgcc/./_udivdi3_s.o
libgcc/./libgcc.map: libgcc/./_udivdi3_s.o
libgcc/./_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_umoddi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3_s.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_umoddi3 $(vis_hide) -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3.o
./libgcc.a: libgcc/./_umoddi3.o
./libgcc_s.so: libgcc/./_umoddi3_s.o
libgcc/./libgcc.map: libgcc/./_umoddi3_s.o
libgcc/./_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_udiv_w_sdiv -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv_s.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udiv_w_sdiv $(vis_hide) -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv.o
./libgcc.a: libgcc/./_udiv_w_sdiv.o
./libgcc_s.so: libgcc/./_udiv_w_sdiv_s.o
libgcc/./libgcc.map: libgcc/./_udiv_w_sdiv_s.o
libgcc/./_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DL_udivmoddi4 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4_s.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udivmoddi4 $(vis_hide) -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4.o
./libgcc.a: libgcc/./_udivmoddi4.o
./libgcc_s.so: libgcc/./_udivmoddi4_s.o
libgcc/./libgcc.map: libgcc/./_udivmoddi4_s.o
libgcc/./_pack_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_pack_sf -c fp-bit.c -o libgcc/./_pack_sf_s.o
libgcc/./_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_sf $(vis_hide) -c fp-bit.c -o libgcc/./_pack_sf.o
./libgcc.a: libgcc/./_pack_sf.o
./libgcc_s.so: libgcc/./_pack_sf_s.o
libgcc/./libgcc.map: libgcc/./_pack_sf_s.o
libgcc/./_unpack_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_unpack_sf -c fp-bit.c -o libgcc/./_unpack_sf_s.o
libgcc/./_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_sf $(vis_hide) -c fp-bit.c -o libgcc/./_unpack_sf.o
./libgcc.a: libgcc/./_unpack_sf.o
./libgcc_s.so: libgcc/./_unpack_sf_s.o
libgcc/./libgcc.map: libgcc/./_unpack_sf_s.o
libgcc/./_addsub_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_addsub_sf -c fp-bit.c -o libgcc/./_addsub_sf_s.o
libgcc/./_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_sf $(vis_hide) -c fp-bit.c -o libgcc/./_addsub_sf.o
./libgcc.a: libgcc/./_addsub_sf.o
./libgcc_s.so: libgcc/./_addsub_sf_s.o
libgcc/./libgcc.map: libgcc/./_addsub_sf_s.o
libgcc/./_mul_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_mul_sf -c fp-bit.c -o libgcc/./_mul_sf_s.o
libgcc/./_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_sf $(vis_hide) -c fp-bit.c -o libgcc/./_mul_sf.o
./libgcc.a: libgcc/./_mul_sf.o
./libgcc_s.so: libgcc/./_mul_sf_s.o
libgcc/./libgcc.map: libgcc/./_mul_sf_s.o
libgcc/./_div_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_div_sf -c fp-bit.c -o libgcc/./_div_sf_s.o
libgcc/./_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_sf $(vis_hide) -c fp-bit.c -o libgcc/./_div_sf.o
./libgcc.a: libgcc/./_div_sf.o
./libgcc_s.so: libgcc/./_div_sf_s.o
libgcc/./libgcc.map: libgcc/./_div_sf_s.o
libgcc/./_fpcmp_parts_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/./_fpcmp_parts_sf_s.o
libgcc/./_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_sf $(vis_hide) -c fp-bit.c -o libgcc/./_fpcmp_parts_sf.o
./libgcc.a: libgcc/./_fpcmp_parts_sf.o
./libgcc_s.so: libgcc/./_fpcmp_parts_sf_s.o
libgcc/./libgcc.map: libgcc/./_fpcmp_parts_sf_s.o
libgcc/./_compare_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_compare_sf -c fp-bit.c -o libgcc/./_compare_sf_s.o
libgcc/./_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_sf $(vis_hide) -c fp-bit.c -o libgcc/./_compare_sf.o
./libgcc.a: libgcc/./_compare_sf.o
./libgcc_s.so: libgcc/./_compare_sf_s.o
libgcc/./libgcc.map: libgcc/./_compare_sf_s.o
libgcc/./_eq_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_eq_sf -c fp-bit.c -o libgcc/./_eq_sf_s.o
libgcc/./_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_sf $(vis_hide) -c fp-bit.c -o libgcc/./_eq_sf.o
./libgcc.a: libgcc/./_eq_sf.o
./libgcc_s.so: libgcc/./_eq_sf_s.o
libgcc/./libgcc.map: libgcc/./_eq_sf_s.o
libgcc/./_ne_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_ne_sf -c fp-bit.c -o libgcc/./_ne_sf_s.o
libgcc/./_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_sf $(vis_hide) -c fp-bit.c -o libgcc/./_ne_sf.o
./libgcc.a: libgcc/./_ne_sf.o
./libgcc_s.so: libgcc/./_ne_sf_s.o
libgcc/./libgcc.map: libgcc/./_ne_sf_s.o
libgcc/./_gt_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_gt_sf -c fp-bit.c -o libgcc/./_gt_sf_s.o
libgcc/./_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_sf $(vis_hide) -c fp-bit.c -o libgcc/./_gt_sf.o
./libgcc.a: libgcc/./_gt_sf.o
./libgcc_s.so: libgcc/./_gt_sf_s.o
libgcc/./libgcc.map: libgcc/./_gt_sf_s.o
libgcc/./_ge_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_ge_sf -c fp-bit.c -o libgcc/./_ge_sf_s.o
libgcc/./_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_sf $(vis_hide) -c fp-bit.c -o libgcc/./_ge_sf.o
./libgcc.a: libgcc/./_ge_sf.o
./libgcc_s.so: libgcc/./_ge_sf_s.o
libgcc/./libgcc.map: libgcc/./_ge_sf_s.o
libgcc/./_lt_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_lt_sf -c fp-bit.c -o libgcc/./_lt_sf_s.o
libgcc/./_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_sf $(vis_hide) -c fp-bit.c -o libgcc/./_lt_sf.o
./libgcc.a: libgcc/./_lt_sf.o
./libgcc_s.so: libgcc/./_lt_sf_s.o
libgcc/./libgcc.map: libgcc/./_lt_sf_s.o
libgcc/./_le_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_le_sf -c fp-bit.c -o libgcc/./_le_sf_s.o
libgcc/./_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_sf $(vis_hide) -c fp-bit.c -o libgcc/./_le_sf.o
./libgcc.a: libgcc/./_le_sf.o
./libgcc_s.so: libgcc/./_le_sf_s.o
libgcc/./libgcc.map: libgcc/./_le_sf_s.o
libgcc/./_unord_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_unord_sf -c fp-bit.c -o libgcc/./_unord_sf_s.o
libgcc/./_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_sf $(vis_hide) -c fp-bit.c -o libgcc/./_unord_sf.o
./libgcc.a: libgcc/./_unord_sf.o
./libgcc_s.so: libgcc/./_unord_sf_s.o
libgcc/./libgcc.map: libgcc/./_unord_sf_s.o
libgcc/./_si_to_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_si_to_sf -c fp-bit.c -o libgcc/./_si_to_sf_s.o
libgcc/./_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_sf $(vis_hide) -c fp-bit.c -o libgcc/./_si_to_sf.o
./libgcc.a: libgcc/./_si_to_sf.o
./libgcc_s.so: libgcc/./_si_to_sf_s.o
libgcc/./libgcc.map: libgcc/./_si_to_sf_s.o
libgcc/./_sf_to_si_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_sf_to_si -c fp-bit.c -o libgcc/./_sf_to_si_s.o
libgcc/./_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_si $(vis_hide) -c fp-bit.c -o libgcc/./_sf_to_si.o
./libgcc.a: libgcc/./_sf_to_si.o
./libgcc_s.so: libgcc/./_sf_to_si_s.o
libgcc/./libgcc.map: libgcc/./_sf_to_si_s.o
libgcc/./_negate_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_negate_sf -c fp-bit.c -o libgcc/./_negate_sf_s.o
libgcc/./_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_sf $(vis_hide) -c fp-bit.c -o libgcc/./_negate_sf.o
./libgcc.a: libgcc/./_negate_sf.o
./libgcc_s.so: libgcc/./_negate_sf_s.o
libgcc/./libgcc.map: libgcc/./_negate_sf_s.o
libgcc/./_make_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_make_sf -c fp-bit.c -o libgcc/./_make_sf_s.o
libgcc/./_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_sf $(vis_hide) -c fp-bit.c -o libgcc/./_make_sf.o
./libgcc.a: libgcc/./_make_sf.o
./libgcc_s.so: libgcc/./_make_sf_s.o
libgcc/./libgcc.map: libgcc/./_make_sf_s.o
libgcc/./_sf_to_df_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_sf_to_df -c fp-bit.c -o libgcc/./_sf_to_df_s.o
libgcc/./_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_df $(vis_hide) -c fp-bit.c -o libgcc/./_sf_to_df.o
./libgcc.a: libgcc/./_sf_to_df.o
./libgcc_s.so: libgcc/./_sf_to_df_s.o
libgcc/./libgcc.map: libgcc/./_sf_to_df_s.o
libgcc/./_sf_to_tf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_sf_to_tf -c fp-bit.c -o libgcc/./_sf_to_tf_s.o
libgcc/./_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_tf $(vis_hide) -c fp-bit.c -o libgcc/./_sf_to_tf.o
./libgcc.a: libgcc/./_sf_to_tf.o
./libgcc_s.so: libgcc/./_sf_to_tf_s.o
libgcc/./libgcc.map: libgcc/./_sf_to_tf_s.o
libgcc/./_thenan_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_thenan_sf -c fp-bit.c -o libgcc/./_thenan_sf_s.o
libgcc/./_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_sf $(vis_hide) -c fp-bit.c -o libgcc/./_thenan_sf.o
./libgcc.a: libgcc/./_thenan_sf.o
./libgcc_s.so: libgcc/./_thenan_sf_s.o
libgcc/./libgcc.map: libgcc/./_thenan_sf_s.o
libgcc/./_sf_to_usi_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_sf_to_usi -c fp-bit.c -o libgcc/./_sf_to_usi_s.o
libgcc/./_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_usi $(vis_hide) -c fp-bit.c -o libgcc/./_sf_to_usi.o
./libgcc.a: libgcc/./_sf_to_usi.o
./libgcc_s.so: libgcc/./_sf_to_usi_s.o
libgcc/./libgcc.map: libgcc/./_sf_to_usi_s.o
libgcc/./_usi_to_sf_s.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_usi_to_sf -c fp-bit.c -o libgcc/./_usi_to_sf_s.o
libgcc/./_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_sf $(vis_hide) -c fp-bit.c -o libgcc/./_usi_to_sf.o
./libgcc.a: libgcc/./_usi_to_sf.o
./libgcc_s.so: libgcc/./_usi_to_sf_s.o
libgcc/./libgcc.map: libgcc/./_usi_to_sf_s.o
libgcc/./_pack_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_pack_df -c dp-bit.c -o libgcc/./_pack_df_s.o
libgcc/./_pack_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_df $(vis_hide) -c dp-bit.c -o libgcc/./_pack_df.o
./libgcc.a: libgcc/./_pack_df.o
./libgcc_s.so: libgcc/./_pack_df_s.o
libgcc/./libgcc.map: libgcc/./_pack_df_s.o
libgcc/./_unpack_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_unpack_df -c dp-bit.c -o libgcc/./_unpack_df_s.o
libgcc/./_unpack_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_df $(vis_hide) -c dp-bit.c -o libgcc/./_unpack_df.o
./libgcc.a: libgcc/./_unpack_df.o
./libgcc_s.so: libgcc/./_unpack_df_s.o
libgcc/./libgcc.map: libgcc/./_unpack_df_s.o
libgcc/./_addsub_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_addsub_df -c dp-bit.c -o libgcc/./_addsub_df_s.o
libgcc/./_addsub_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_df $(vis_hide) -c dp-bit.c -o libgcc/./_addsub_df.o
./libgcc.a: libgcc/./_addsub_df.o
./libgcc_s.so: libgcc/./_addsub_df_s.o
libgcc/./libgcc.map: libgcc/./_addsub_df_s.o
libgcc/./_mul_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_mul_df -c dp-bit.c -o libgcc/./_mul_df_s.o
libgcc/./_mul_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_df $(vis_hide) -c dp-bit.c -o libgcc/./_mul_df.o
./libgcc.a: libgcc/./_mul_df.o
./libgcc_s.so: libgcc/./_mul_df_s.o
libgcc/./libgcc.map: libgcc/./_mul_df_s.o
libgcc/./_div_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_div_df -c dp-bit.c -o libgcc/./_div_df_s.o
libgcc/./_div_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_df $(vis_hide) -c dp-bit.c -o libgcc/./_div_df.o
./libgcc.a: libgcc/./_div_df.o
./libgcc_s.so: libgcc/./_div_df_s.o
libgcc/./libgcc.map: libgcc/./_div_df_s.o
libgcc/./_fpcmp_parts_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_df -c dp-bit.c -o libgcc/./_fpcmp_parts_df_s.o
libgcc/./_fpcmp_parts_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_df $(vis_hide) -c dp-bit.c -o libgcc/./_fpcmp_parts_df.o
./libgcc.a: libgcc/./_fpcmp_parts_df.o
./libgcc_s.so: libgcc/./_fpcmp_parts_df_s.o
libgcc/./libgcc.map: libgcc/./_fpcmp_parts_df_s.o
libgcc/./_compare_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_compare_df -c dp-bit.c -o libgcc/./_compare_df_s.o
libgcc/./_compare_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_df $(vis_hide) -c dp-bit.c -o libgcc/./_compare_df.o
./libgcc.a: libgcc/./_compare_df.o
./libgcc_s.so: libgcc/./_compare_df_s.o
libgcc/./libgcc.map: libgcc/./_compare_df_s.o
libgcc/./_eq_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_eq_df -c dp-bit.c -o libgcc/./_eq_df_s.o
libgcc/./_eq_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_df $(vis_hide) -c dp-bit.c -o libgcc/./_eq_df.o
./libgcc.a: libgcc/./_eq_df.o
./libgcc_s.so: libgcc/./_eq_df_s.o
libgcc/./libgcc.map: libgcc/./_eq_df_s.o
libgcc/./_ne_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_ne_df -c dp-bit.c -o libgcc/./_ne_df_s.o
libgcc/./_ne_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_df $(vis_hide) -c dp-bit.c -o libgcc/./_ne_df.o
./libgcc.a: libgcc/./_ne_df.o
./libgcc_s.so: libgcc/./_ne_df_s.o
libgcc/./libgcc.map: libgcc/./_ne_df_s.o
libgcc/./_gt_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_gt_df -c dp-bit.c -o libgcc/./_gt_df_s.o
libgcc/./_gt_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_df $(vis_hide) -c dp-bit.c -o libgcc/./_gt_df.o
./libgcc.a: libgcc/./_gt_df.o
./libgcc_s.so: libgcc/./_gt_df_s.o
libgcc/./libgcc.map: libgcc/./_gt_df_s.o
libgcc/./_ge_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_ge_df -c dp-bit.c -o libgcc/./_ge_df_s.o
libgcc/./_ge_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_df $(vis_hide) -c dp-bit.c -o libgcc/./_ge_df.o
./libgcc.a: libgcc/./_ge_df.o
./libgcc_s.so: libgcc/./_ge_df_s.o
libgcc/./libgcc.map: libgcc/./_ge_df_s.o
libgcc/./_lt_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_lt_df -c dp-bit.c -o libgcc/./_lt_df_s.o
libgcc/./_lt_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_df $(vis_hide) -c dp-bit.c -o libgcc/./_lt_df.o
./libgcc.a: libgcc/./_lt_df.o
./libgcc_s.so: libgcc/./_lt_df_s.o
libgcc/./libgcc.map: libgcc/./_lt_df_s.o
libgcc/./_le_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_le_df -c dp-bit.c -o libgcc/./_le_df_s.o
libgcc/./_le_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_df $(vis_hide) -c dp-bit.c -o libgcc/./_le_df.o
./libgcc.a: libgcc/./_le_df.o
./libgcc_s.so: libgcc/./_le_df_s.o
libgcc/./libgcc.map: libgcc/./_le_df_s.o
libgcc/./_unord_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_unord_df -c dp-bit.c -o libgcc/./_unord_df_s.o
libgcc/./_unord_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_df $(vis_hide) -c dp-bit.c -o libgcc/./_unord_df.o
./libgcc.a: libgcc/./_unord_df.o
./libgcc_s.so: libgcc/./_unord_df_s.o
libgcc/./libgcc.map: libgcc/./_unord_df_s.o
libgcc/./_si_to_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_si_to_df -c dp-bit.c -o libgcc/./_si_to_df_s.o
libgcc/./_si_to_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_df $(vis_hide) -c dp-bit.c -o libgcc/./_si_to_df.o
./libgcc.a: libgcc/./_si_to_df.o
./libgcc_s.so: libgcc/./_si_to_df_s.o
libgcc/./libgcc.map: libgcc/./_si_to_df_s.o
libgcc/./_df_to_si_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_df_to_si -c dp-bit.c -o libgcc/./_df_to_si_s.o
libgcc/./_df_to_si.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_si $(vis_hide) -c dp-bit.c -o libgcc/./_df_to_si.o
./libgcc.a: libgcc/./_df_to_si.o
./libgcc_s.so: libgcc/./_df_to_si_s.o
libgcc/./libgcc.map: libgcc/./_df_to_si_s.o
libgcc/./_negate_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_negate_df -c dp-bit.c -o libgcc/./_negate_df_s.o
libgcc/./_negate_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_df $(vis_hide) -c dp-bit.c -o libgcc/./_negate_df.o
./libgcc.a: libgcc/./_negate_df.o
./libgcc_s.so: libgcc/./_negate_df_s.o
libgcc/./libgcc.map: libgcc/./_negate_df_s.o
libgcc/./_make_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_make_df -c dp-bit.c -o libgcc/./_make_df_s.o
libgcc/./_make_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_df $(vis_hide) -c dp-bit.c -o libgcc/./_make_df.o
./libgcc.a: libgcc/./_make_df.o
./libgcc_s.so: libgcc/./_make_df_s.o
libgcc/./libgcc.map: libgcc/./_make_df_s.o
libgcc/./_df_to_sf_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_df_to_sf -c dp-bit.c -o libgcc/./_df_to_sf_s.o
libgcc/./_df_to_sf.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_sf $(vis_hide) -c dp-bit.c -o libgcc/./_df_to_sf.o
./libgcc.a: libgcc/./_df_to_sf.o
./libgcc_s.so: libgcc/./_df_to_sf_s.o
libgcc/./libgcc.map: libgcc/./_df_to_sf_s.o
libgcc/./_df_to_tf_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_df_to_tf -c dp-bit.c -o libgcc/./_df_to_tf_s.o
libgcc/./_df_to_tf.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_tf $(vis_hide) -c dp-bit.c -o libgcc/./_df_to_tf.o
./libgcc.a: libgcc/./_df_to_tf.o
./libgcc_s.so: libgcc/./_df_to_tf_s.o
libgcc/./libgcc.map: libgcc/./_df_to_tf_s.o
libgcc/./_thenan_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_thenan_df -c dp-bit.c -o libgcc/./_thenan_df_s.o
libgcc/./_thenan_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_df $(vis_hide) -c dp-bit.c -o libgcc/./_thenan_df.o
./libgcc.a: libgcc/./_thenan_df.o
./libgcc_s.so: libgcc/./_thenan_df_s.o
libgcc/./libgcc.map: libgcc/./_thenan_df_s.o
libgcc/./_df_to_usi_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_df_to_usi -c dp-bit.c -o libgcc/./_df_to_usi_s.o
libgcc/./_df_to_usi.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_usi $(vis_hide) -c dp-bit.c -o libgcc/./_df_to_usi.o
./libgcc.a: libgcc/./_df_to_usi.o
./libgcc_s.so: libgcc/./_df_to_usi_s.o
libgcc/./libgcc.map: libgcc/./_df_to_usi_s.o
libgcc/./_usi_to_df_s.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -DFINE_GRAINED_LIBRARIES -DL_usi_to_df -c dp-bit.c -o libgcc/./_usi_to_df_s.o
libgcc/./_usi_to_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_df $(vis_hide) -c dp-bit.c -o libgcc/./_usi_to_df.o
./libgcc.a: libgcc/./_usi_to_df.o
./libgcc_s.so: libgcc/./_usi_to_df_s.o
libgcc/./libgcc.map: libgcc/./_usi_to_df_s.o
libgcc/./unwind-dw2.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(vis_hide) -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
./libgcc_eh.a: libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2-fde.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(vis_hide) -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2-fde.c -o libgcc/./unwind-dw2-fde.o
./libgcc_eh.a: libgcc/./unwind-dw2-fde.o
libgcc/./unwind-sjlj.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(vis_hide) -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
./libgcc_eh.a: libgcc/./unwind-sjlj.o
libgcc/./gthr-gnat.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/gthr-gnat.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(vis_hide) -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/gthr-gnat.c -o libgcc/./gthr-gnat.o
./libgcc_eh.a: libgcc/./gthr-gnat.o
libgcc/./unwind-c.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(vis_hide) -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-c.c -o libgcc/./unwind-c.o
./libgcc_eh.a: libgcc/./unwind-c.o
libgcc/./unwind-dw2_s.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2.c -o libgcc/./unwind-dw2_s.o
./libgcc_s.so: libgcc/./unwind-dw2_s.o
libgcc/./libgcc.map: libgcc/./unwind-dw2_s.o
libgcc/./unwind-dw2-fde_s.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2-fde.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2-fde.c -o libgcc/./unwind-dw2-fde_s.o
./libgcc_s.so: libgcc/./unwind-dw2-fde_s.o
libgcc/./libgcc.map: libgcc/./unwind-dw2-fde_s.o
libgcc/./unwind-sjlj_s.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj_s.o
./libgcc_s.so: libgcc/./unwind-sjlj_s.o
libgcc/./libgcc.map: libgcc/./unwind-sjlj_s.o
libgcc/./gthr-gnat_s.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/gthr-gnat.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/gthr-gnat.c -o libgcc/./gthr-gnat_s.o
./libgcc_s.so: libgcc/./gthr-gnat_s.o
libgcc/./libgcc.map: libgcc/./gthr-gnat_s.o
libgcc/./unwind-c_s.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-c.c -o libgcc/./unwind-c_s.o
./libgcc_s.so: libgcc/./unwind-c_s.o
libgcc/./libgcc.map: libgcc/./unwind-c_s.o
libgcc/./_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/./_gcov.o
./libgcov.a: libgcc/./_gcov.o
libgcc/./_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_add.o
./libgcov.a: libgcc/./_gcov_merge_add.o
libgcc/./_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_single.o
./libgcov.a: libgcc/./_gcov_merge_single.o
libgcc/./_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_delta.o
./libgcov.a: libgcc/./_gcov_merge_delta.o
libgcc/./_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/./_gcov_fork.o
./libgcov.a: libgcc/./_gcov_fork.o
libgcc/./_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execl.o
./libgcov.a: libgcc/./_gcov_execl.o
libgcc/./_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execlp.o
./libgcov.a: libgcc/./_gcov_execlp.o
libgcc/./_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execle.o
./libgcov.a: libgcc/./_gcov_execle.o
libgcc/./_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execv.o
./libgcov.a: libgcc/./_gcov_execv.o
libgcc/./_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execvp.o
./libgcov.a: libgcc/./_gcov_execvp.o
libgcc/./_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execve.o
./libgcov.a: libgcc/./_gcov_execve.o

libgcc/./libgcc.map: /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/mkmap-symver.awk /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -E -xassembler-with-cpp -; \
	} | $(AWK) -f /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/mkmap-symver.awk  > libgcc/./tmp-libgcc.map
	mv 'libgcc/./tmp-libgcc.map' $@
./libgcc_s.so: libgcc/./libgcc.map

./libgcc.a: stmp-dirs
	-rm -f ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcc.a
all: ./libgcc.a

./libgcov.a: stmp-dirs
	-rm -f ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcov.a
all: ./libgcov.a

./libgcc_eh.a: stmp-dirs
	-rm -f ./libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) ./libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcc_eh.a
all: ./libgcc_eh.a

./libgcc_s.so: stmp-dirs 
	/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4-final/gcc/xgcc -B/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4-final/gcc/ -B/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/mipsel-linux-uclibc/bin/ -B/opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/mipsel-linux-uclibc/lib/ -isystem /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/mipsel-linux-uclibc/include -isystem /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir/mipsel-linux-uclibc/sys-include -O2  -DIN_GCC -DCROSS_COMPILE   -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -isystem ./include  -fPIC -g -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED -Dinhibit_libc -shared -nodefaultlibs -Wl,--soname=libgcc_s.so.1 -Wl,--version-script=libgcc/./libgcc.map -o ./libgcc_s.so.1.tmp  $(objects) -lc && rm -f ./libgcc_s.so && if [ -f ./libgcc_s.so.1 ]; then mv -f ./libgcc_s.so.1 ./libgcc_s.so.1.backup; else true; fi && mv ./libgcc_s.so.1.tmp ./libgcc_s.so.1 && ln -s libgcc_s.so.1 ./libgcc_s.so
all: ./libgcc_s.so

libgcc-stage-start:
	for dir in $(dirs); do \
	  if [ -d $(stage)/$$dir ]; then :; \
	  else /bin/sh /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/../mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in $(dirs); do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  mv $$dir/*.vis $(stage)/$$dir; \
    mv $$dir/*.map $(stage)/$$dir; \
	  test ! -f $$dir/libgcc.a || mv $$dir/lib* $(stage)/$$dir; \
	done

stmp-dirs:
	for d in $(dirs); do \
	  if [ -d $$d ]; then true; else /bin/sh /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/../mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi

install: all
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
	$(INSTALL_DATA) ./libgcc_eh.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(mkinstalldirs) $(DESTDIR)$(slibdir); /usr/bin/install -c -m 644 ./libgcc_s.so.1 $(DESTDIR)$(slibdir)/libgcc_s.so.1; rm -f $(DESTDIR)$(slibdir)/libgcc_s.so; ln -s libgcc_s.so.1 $(DESTDIR)$(slibdir)/libgcc_s.so
.PHONY: all install
