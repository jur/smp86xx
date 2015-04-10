srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc
VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc
EQ = =
objects = $(filter %.o,$^)

# Dependencies are accumulated as we go.
all: stmp-dirs
dirs = libgcc

vis_hide =
gen-hide-list = echo > $@

#
# ml: .;
# dir: .
# flags:
# libgcc_a: ./libgcc.a
# libgcov_a: ./libgcov.a
# libgcc_eh_a:
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so:
# libunwind_so:
#

libgcc/./_muldi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
./libgcc.a: libgcc/./_muldi3.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
./libgcc.a: libgcc/./_negdi2.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
./libgcc.a: libgcc/./_lshrdi3.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
./libgcc.a: libgcc/./_ashldi3.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
./libgcc.a: libgcc/./_ashrdi3.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
./libgcc.a: libgcc/./_cmpdi2.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
./libgcc.a: libgcc/./_ucmpdi2.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
./libgcc.a: libgcc/./_floatdidf.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
./libgcc.a: libgcc/./_floatdisf.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
./libgcc.a: libgcc/./_fixunsdfsi.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
./libgcc.a: libgcc/./_fixunssfsi.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
./libgcc.a: libgcc/./_fixunsdfdi.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
./libgcc.a: libgcc/./_fixdfdi.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
./libgcc.a: libgcc/./_fixunssfdi.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
./libgcc.a: libgcc/./_fixsfdi.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
./libgcc.a: libgcc/./_fixxfdi.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
./libgcc.a: libgcc/./_fixunsxfdi.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
./libgcc.a: libgcc/./_floatdixf.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
./libgcc.a: libgcc/./_fixunsxfsi.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
./libgcc.a: libgcc/./_fixtfdi.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
./libgcc.a: libgcc/./_fixunstfdi.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
./libgcc.a: libgcc/./_floatditf.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
./libgcc.a: libgcc/./_clear_cache.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
./libgcc.a: libgcc/./_enable_execute_stack.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
./libgcc.a: libgcc/./_trampoline.o
libgcc/./__main.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
./libgcc.a: libgcc/./__main.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
./libgcc.a: libgcc/./_absvsi2.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
./libgcc.a: libgcc/./_absvdi2.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
./libgcc.a: libgcc/./_addvsi3.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
./libgcc.a: libgcc/./_addvdi3.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
./libgcc.a: libgcc/./_subvsi3.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
./libgcc.a: libgcc/./_subvdi3.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
./libgcc.a: libgcc/./_mulvsi3.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
./libgcc.a: libgcc/./_mulvdi3.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
./libgcc.a: libgcc/./_negvsi2.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
./libgcc.a: libgcc/./_negvdi2.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
./libgcc.a: libgcc/./_ctors.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
./libgcc.a: libgcc/./_ffssi2.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
./libgcc.a: libgcc/./_ffsdi2.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
./libgcc.a: libgcc/./_clz.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
./libgcc.a: libgcc/./_clzsi2.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
./libgcc.a: libgcc/./_clzdi2.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
./libgcc.a: libgcc/./_ctzsi2.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
./libgcc.a: libgcc/./_ctzdi2.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
./libgcc.a: libgcc/./_popcount_tab.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
./libgcc.a: libgcc/./_popcountsi2.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
./libgcc.a: libgcc/./_popcountdi2.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
./libgcc.a: libgcc/./_paritysi2.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
./libgcc.a: libgcc/./_paritydi2.o
libgcc/./_powisf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2.o
./libgcc.a: libgcc/./_powisf2.o
libgcc/./_powidf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2.o
./libgcc.a: libgcc/./_powidf2.o
libgcc/./_powixf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2.o
./libgcc.a: libgcc/./_powixf2.o
libgcc/./_powitf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2.o
./libgcc.a: libgcc/./_powitf2.o
libgcc/./_mulsc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3.o
./libgcc.a: libgcc/./_mulsc3.o
libgcc/./_muldc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3.o
./libgcc.a: libgcc/./_muldc3.o
libgcc/./_mulxc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3.o
./libgcc.a: libgcc/./_mulxc3.o
libgcc/./_multc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/./_multc3.o
./libgcc.a: libgcc/./_multc3.o
libgcc/./_divsc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3.o
./libgcc.a: libgcc/./_divsc3.o
libgcc/./_divdc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3.o
./libgcc.a: libgcc/./_divdc3.o
libgcc/./_divxc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3.o
./libgcc.a: libgcc/./_divxc3.o
libgcc/./_divtc3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3.o
./libgcc.a: libgcc/./_divtc3.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
./libgcc.a: libgcc/./_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
./libgcc.a: libgcc/./__gcc_bcmp.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divdi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3.o
./libgcc.a: libgcc/./_divdi3.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_moddi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3.o
./libgcc.a: libgcc/./_moddi3.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udivdi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3.o
./libgcc.a: libgcc/./_udivdi3.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_umoddi3 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3.o
./libgcc.a: libgcc/./_umoddi3.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udiv_w_sdiv -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv.o
./libgcc.a: libgcc/./_udiv_w_sdiv.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udivmoddi4 -fexceptions -fnon-call-exceptions -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4.o
./libgcc.a: libgcc/./_udivmoddi4.o
libgcc/./_pack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_sf -c fp-bit.c -o libgcc/./_pack_sf.o
./libgcc.a: libgcc/./_pack_sf.o
libgcc/./_unpack_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_sf -c fp-bit.c -o libgcc/./_unpack_sf.o
./libgcc.a: libgcc/./_unpack_sf.o
libgcc/./_addsub_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_sf -c fp-bit.c -o libgcc/./_addsub_sf.o
./libgcc.a: libgcc/./_addsub_sf.o
libgcc/./_mul_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_sf -c fp-bit.c -o libgcc/./_mul_sf.o
./libgcc.a: libgcc/./_mul_sf.o
libgcc/./_div_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_sf -c fp-bit.c -o libgcc/./_div_sf.o
./libgcc.a: libgcc/./_div_sf.o
libgcc/./_fpcmp_parts_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_sf -c fp-bit.c -o libgcc/./_fpcmp_parts_sf.o
./libgcc.a: libgcc/./_fpcmp_parts_sf.o
libgcc/./_compare_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_sf -c fp-bit.c -o libgcc/./_compare_sf.o
./libgcc.a: libgcc/./_compare_sf.o
libgcc/./_eq_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_sf -c fp-bit.c -o libgcc/./_eq_sf.o
./libgcc.a: libgcc/./_eq_sf.o
libgcc/./_ne_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_sf -c fp-bit.c -o libgcc/./_ne_sf.o
./libgcc.a: libgcc/./_ne_sf.o
libgcc/./_gt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_sf -c fp-bit.c -o libgcc/./_gt_sf.o
./libgcc.a: libgcc/./_gt_sf.o
libgcc/./_ge_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_sf -c fp-bit.c -o libgcc/./_ge_sf.o
./libgcc.a: libgcc/./_ge_sf.o
libgcc/./_lt_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_sf -c fp-bit.c -o libgcc/./_lt_sf.o
./libgcc.a: libgcc/./_lt_sf.o
libgcc/./_le_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_sf -c fp-bit.c -o libgcc/./_le_sf.o
./libgcc.a: libgcc/./_le_sf.o
libgcc/./_unord_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_sf -c fp-bit.c -o libgcc/./_unord_sf.o
./libgcc.a: libgcc/./_unord_sf.o
libgcc/./_si_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_sf -c fp-bit.c -o libgcc/./_si_to_sf.o
./libgcc.a: libgcc/./_si_to_sf.o
libgcc/./_sf_to_si.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_si -c fp-bit.c -o libgcc/./_sf_to_si.o
./libgcc.a: libgcc/./_sf_to_si.o
libgcc/./_negate_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_sf -c fp-bit.c -o libgcc/./_negate_sf.o
./libgcc.a: libgcc/./_negate_sf.o
libgcc/./_make_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_sf -c fp-bit.c -o libgcc/./_make_sf.o
./libgcc.a: libgcc/./_make_sf.o
libgcc/./_sf_to_df.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_df -c fp-bit.c -o libgcc/./_sf_to_df.o
./libgcc.a: libgcc/./_sf_to_df.o
libgcc/./_sf_to_tf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_tf -c fp-bit.c -o libgcc/./_sf_to_tf.o
./libgcc.a: libgcc/./_sf_to_tf.o
libgcc/./_thenan_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_sf -c fp-bit.c -o libgcc/./_thenan_sf.o
./libgcc.a: libgcc/./_thenan_sf.o
libgcc/./_sf_to_usi.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_sf_to_usi -c fp-bit.c -o libgcc/./_sf_to_usi.o
./libgcc.a: libgcc/./_sf_to_usi.o
libgcc/./_usi_to_sf.o: fp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_sf -c fp-bit.c -o libgcc/./_usi_to_sf.o
./libgcc.a: libgcc/./_usi_to_sf.o
libgcc/./_pack_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_pack_df -c dp-bit.c -o libgcc/./_pack_df.o
./libgcc.a: libgcc/./_pack_df.o
libgcc/./_unpack_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unpack_df -c dp-bit.c -o libgcc/./_unpack_df.o
./libgcc.a: libgcc/./_unpack_df.o
libgcc/./_addsub_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_addsub_df -c dp-bit.c -o libgcc/./_addsub_df.o
./libgcc.a: libgcc/./_addsub_df.o
libgcc/./_mul_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_mul_df -c dp-bit.c -o libgcc/./_mul_df.o
./libgcc.a: libgcc/./_mul_df.o
libgcc/./_div_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_div_df -c dp-bit.c -o libgcc/./_div_df.o
./libgcc.a: libgcc/./_div_df.o
libgcc/./_fpcmp_parts_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_fpcmp_parts_df -c dp-bit.c -o libgcc/./_fpcmp_parts_df.o
./libgcc.a: libgcc/./_fpcmp_parts_df.o
libgcc/./_compare_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_compare_df -c dp-bit.c -o libgcc/./_compare_df.o
./libgcc.a: libgcc/./_compare_df.o
libgcc/./_eq_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_eq_df -c dp-bit.c -o libgcc/./_eq_df.o
./libgcc.a: libgcc/./_eq_df.o
libgcc/./_ne_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ne_df -c dp-bit.c -o libgcc/./_ne_df.o
./libgcc.a: libgcc/./_ne_df.o
libgcc/./_gt_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_gt_df -c dp-bit.c -o libgcc/./_gt_df.o
./libgcc.a: libgcc/./_gt_df.o
libgcc/./_ge_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_ge_df -c dp-bit.c -o libgcc/./_ge_df.o
./libgcc.a: libgcc/./_ge_df.o
libgcc/./_lt_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_lt_df -c dp-bit.c -o libgcc/./_lt_df.o
./libgcc.a: libgcc/./_lt_df.o
libgcc/./_le_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_le_df -c dp-bit.c -o libgcc/./_le_df.o
./libgcc.a: libgcc/./_le_df.o
libgcc/./_unord_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_unord_df -c dp-bit.c -o libgcc/./_unord_df.o
./libgcc.a: libgcc/./_unord_df.o
libgcc/./_si_to_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_si_to_df -c dp-bit.c -o libgcc/./_si_to_df.o
./libgcc.a: libgcc/./_si_to_df.o
libgcc/./_df_to_si.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_si -c dp-bit.c -o libgcc/./_df_to_si.o
./libgcc.a: libgcc/./_df_to_si.o
libgcc/./_negate_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_negate_df -c dp-bit.c -o libgcc/./_negate_df.o
./libgcc.a: libgcc/./_negate_df.o
libgcc/./_make_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_make_df -c dp-bit.c -o libgcc/./_make_df.o
./libgcc.a: libgcc/./_make_df.o
libgcc/./_df_to_sf.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_sf -c dp-bit.c -o libgcc/./_df_to_sf.o
./libgcc.a: libgcc/./_df_to_sf.o
libgcc/./_df_to_tf.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_tf -c dp-bit.c -o libgcc/./_df_to_tf.o
./libgcc.a: libgcc/./_df_to_tf.o
libgcc/./_thenan_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_thenan_df -c dp-bit.c -o libgcc/./_thenan_df.o
./libgcc.a: libgcc/./_thenan_df.o
libgcc/./_df_to_usi.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_df_to_usi -c dp-bit.c -o libgcc/./_df_to_usi.o
./libgcc.a: libgcc/./_df_to_usi.o
libgcc/./_usi_to_df.o: dp-bit.c stmp-dirs config.status tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DFINE_GRAINED_LIBRARIES -DL_usi_to_df -c dp-bit.c -o libgcc/./_usi_to_df.o
./libgcc.a: libgcc/./_usi_to_df.o
libgcc/./unwind-dw2.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
./libgcc.a: libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2-fde.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-dw2-fde.c -o libgcc/./unwind-dw2-fde.o
./libgcc.a: libgcc/./unwind-dw2-fde.o
libgcc/./unwind-sjlj.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
./libgcc.a: libgcc/./unwind-sjlj.o
libgcc/./gthr-gnat.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/gthr-gnat.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/gthr-gnat.c -o libgcc/./gthr-gnat.o
./libgcc.a: libgcc/./gthr-gnat.o
libgcc/./unwind-c.o: stmp-dirs /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions $(vis_hide) -c /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gcc-4.0.4/gcc/unwind-c.c -o libgcc/./unwind-c.o
./libgcc.a: libgcc/./unwind-c.o
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
.PHONY: all install
