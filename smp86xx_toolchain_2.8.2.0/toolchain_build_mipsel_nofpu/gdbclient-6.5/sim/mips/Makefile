#    Makefile template for Configure for the MIPS simulator.
#    Written by Cygnus Support.

SHELL = /bin/sh

## COMMON_PRE_CONFIG_FRAG
## COMMON_PRE_CONFIG_FRAG

VPATH = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/sim/mips
srcdir = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/sim/mips
srccom = $(srcdir)/../common
srcroot = $(srcdir)/../..

prefix = /opt/smp86xx/smp86xx_toolchain_2.8.2.0/build_mipsel_nofpu/staging_dir
exec_prefix = ${prefix}

host_alias = i386-pc-linux-gnu
target_alias = mipsel-linux-uclibc
program_transform_name = s,^,mipsel-linux-uclibc-,;
bindir = ${exec_prefix}/bin

libdir = ${exec_prefix}/lib
tooldir = $(libdir)/$(target_alias)

datadir = ${prefix}/share
mandir = ${prefix}/man
man1dir = $(mandir)/man1
infodir = ${prefix}/info
includedir = ${prefix}/include

# This can be referenced by the gettext configuration code.
top_builddir = ..

EXEEXT = 
SHELL = /bin/sh

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644

CC = gcc
CC_FOR_BUILD = $(CC)
CFLAGS = -g -O2
SIM_BSWAP = 
SIM_CFLAGS = 
SIM_DEBUG = 
SIM_TRACE = 
SIM_PROFILE = -DPROFILE=1 -DWITH_PROFILE=-1

SIM_ASSERT = 
SIM_ALIGNMENT = -DWITH_ALIGNMENT=NONSTRICT_ALIGNMENT
SIM_BITSIZE =  -DWITH_TARGET_WORD_BITSIZE=32 -DWITH_TARGET_WORD_MSB=31
SIM_DEFAULT_MODEL = 
SIM_ENDIAN = -DWITH_DEFAULT_TARGET_BYTE_ORDER=BIG_ENDIAN
SIM_ENVIRONMENT = 
SIM_FLOAT = -DWITH_FLOATING_POINT=HARD_FLOATING_POINT -DWITH_TARGET_FLOATING_POINT_BITSIZE=32
SIM_HW_CFLAGS = -DWITH_HW=0
SIM_HW_OBJS = 
SIM_HW = 
SIM_HOSTENDIAN = -DWITH_HOST_BYTE_ORDER=LITTLE_ENDIAN
SIM_INLINE = 
SIM_PACKAGES = 
SIM_REGPARM = 
SIM_RESERVED_BITS = -DWITH_RESERVED_BITS=1
SIM_SCACHE = 
SIM_SMP = -DWITH_SMP=0
SIM_STDCALL = 
SIM_XOR_ENDIAN = 
WARN_CFLAGS =  -Wimplicit -Wreturn-type -Wcomment -Wtrigraphs -Wformat -Wparentheses -Wpointer-arith -Wuninitialized
WERROR_CFLAGS = 
SIM_WARN_CFLAGS = $(WARN_CFLAGS)
SIM_WERROR_CFLAGS = $(WERROR_CFLAGS)

HDEFINES = 
TDEFINES =

AR = ar
AR_FLAGS = rc
RANLIB = ranlib
MAKEINFO = makeinfo

DEP = $(srcroot)/mkdep

# Each simulator's Makefile.in defines one or more of these variables
# to override our settings as necessary.  There is no need to define these
# in the simulator's Makefile.in if one is using the default value.  In fact
# it's preferable not to.

# List of object files, less common parts.
SIM_OBJS =
# List of extra dependencies.
# Generally this consists of simulator specific files included by sim-main.h.
SIM_EXTRA_DEPS =
# List of flags to always pass to $(CC).
SIM_EXTRA_CFLAGS =
# List of extra libraries to link with.
SIM_EXTRA_LIBS =
# List of extra program dependencies.
SIM_EXTRA_LIBDEPS =
# List of main object files for `run'.
SIM_RUN_OBJS = run.o
# Dependency of `all' to build any extra files.
SIM_EXTRA_ALL =
# Dependency of `install' to install any extra files.
SIM_EXTRA_INSTALL =
# Dependency of `clean' to clean any extra files.
SIM_EXTRA_CLEAN =
# Likewise `distclean'
SIM_EXTRA_DISTCLEAN =

# Every time a new general purpose source file was added every target's
# Makefile.in needed to be updated to include the file in SIM_OBJS.
# This doesn't scale.
# This variable specifies all the generic stuff common to the newer simulators.
# Things like sim-reason.o can't go here as the cpu may provide its own
# (though hopefully in time that won't be so).  Things like sim-bits.o can go
# here.  Some files are used by all simulators (e.g. callback.o).
# Those files are specified in LIB_OBJS below.

SIM_COMMON_HW_OBJS = \
	hw-alloc.o \
	hw-base.o \
	hw-device.o \
	hw-events.o \
	hw-handles.o \
	hw-instances.o \
	hw-ports.o \
	hw-properties.o \
	hw-tree.o \
	sim-hw.o \

SIM_NEW_COMMON_OBJS = \
	sim-arange.o \
	sim-bits.o \
	sim-config.o \
	sim-core.o \
	sim-endian.o \
	sim-events.o \
	sim-fpu.o \
	sim-io.o \
	sim-info.o \
	sim-load.o \
	sim-memopt.o \
	sim-module.o \
	sim-options.o \
	sim-profile.o \
	sim-signal.o \
	sim-trace.o \
	sim-utils.o \
	sim-watch.o \
	\
	$(SIM_HW_OBJS) \

# Add this to SIM_EXTRA_DEPS.
CGEN_INCLUDE_DEPS = \
	$(srccom)/cgen-cpu.h \
	$(srccom)/cgen-defs.h \
	$(srccom)/cgen-engine.h \
	$(srccom)/cgen-scache.h \
	$(srccom)/cgen-sim.h \
	$(srccom)/cgen-trace.h \
	$(srccom)/cgen-types.h \
	$(srcdir)/../../include/opcode/cgen.h

## End COMMON_PRE_CONFIG_FRAG

srcdir=/opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/sim/mips
srcroot=$(srcdir)/../../

# Object files created by various simulator generators.


SIM_IGEN_OBJ = \
	support.o \
	itable.o \
	semantics.o \
	idecode.o \
	icache.o \
	engine.o \
	irun.o \


SIM_M16_OBJ = \
	m16_support.o \
	m16_semantics.o \
	m16_idecode.o \
	m16_icache.o \
	\
	m32_support.o \
	m32_semantics.o \
	m32_idecode.o \
	m32_icache.o \
	\
	itable.o \
	m16run.o \

SIM_MULTI_OBJ = itable.o 

MIPS_EXTRA_OBJS = 
MIPS_EXTRA_LIBS = 

SIM_OBJS = \
	$(SIM_IGEN_OBJ) \
	$(SIM_NEW_COMMON_OBJS) \
	$(MIPS_EXTRA_OBJS) \
	cp1.o \
	interp.o \
	mdmx.o \
	dsp.o \
	sim-main.o \
	sim-hload.o \
	sim-engine.o \
	sim-stop.o \
	sim-resume.o \
	sim-reason.o \


# List of flags to always pass to $(CC).
SIM_SUBTARGET= -DMIPS_MACH_DEFAULT=bfd_mach_mips8000
SIM_EXTRA_CFLAGS = $(SIM_SUBTARGET)

SIM_EXTRA_CLEAN = clean-extra
SIM_EXTRA_DISTCLEAN = distclean-extra

SIM_EXTRA_ALL = $(SIM_IGEN_ALL)

SIM_EXTRA_LIBS = $(MIPS_EXTRA_LIBS)

# List of main object files for `run'.
SIM_RUN_OBJS = nrun.o



## COMMON_POST_CONFIG_FRAG
## COMMON_POST_CONFIG_FRAG

CONFIG_CFLAGS = \
	-DHAVE_CONFIG_H \
	$(SIM_CFLAGS) \
	$(SIM_DEBUG) \
	$(SIM_DEFAULT_MODEL) \
	$(SIM_TRACE) \
	$(SIM_PROFILE) \
	$(SIM_BSWAP) \
	$(SIM_ASSERT) \
	$(SIM_ALIGNMENT) \
	$(SIM_BITSIZE) \
	$(SIM_ENDIAN) \
	$(SIM_ENVIRONMENT) \
	$(SIM_FLOAT) \
	$(SIM_HW_CFLAGS) \
	$(SIM_HOSTENDIAN) \
	$(SIM_INLINE) \
	$(SIM_PACKAGES) \
	$(SIM_REGPARM) \
	$(SIM_RESERVED_BITS) \
	$(SIM_SCACHE) \
	$(SIM_SMP) \
	$(SIM_STDCALL) \
	$(SIM_WARN_CFLAGS) \
	$(SIM_WERROR_CFLAGS) \
	$(SIM_XOR_ENDIAN) \
	$(SIM_HARDWARE) \
	$(SIM_EXTRA_CFLAGS) \
	$(HDEFINES) $(TDEFINES)
CSEARCH = -I. -I$(srcdir) -I../common -I$(srccom) \
  -I../../include -I$(srcroot)/include \
  -I../../bfd -I$(srcroot)/bfd \
  -I../../opcodes -I$(srcroot)/opcodes \
  -I../../intl -I$(srcroot)/intl
ALL_CFLAGS = $(CONFIG_CFLAGS) $(CSEARCH) $(CFLAGS)
BUILD_CFLAGS = -g -O $(CSEARCH)

COMMON_DEP_CFLAGS = $(CONFIG_CFLAGS) $(CSEARCH)

LIBIBERTY_LIB = ../../libiberty/libiberty.a
BFD_LIB = ../../bfd/libbfd.a
OPCODES_LIB = ../../opcodes/libopcodes.a
INTLLIBS = 
INTLDEPS = 
CONFIG_LIBS = -lm -lnsl 
LIBDEPS = $(BFD_LIB) $(OPCODES_LIB) $(INTLDEPS) $(LIBIBERTY_LIB) \
	$(SIM_EXTRA_LIBDEPS)
EXTRA_LIBS = $(BFD_LIB) $(OPCODES_LIB) $(INTLLIBS) $(LIBIBERTY_LIB) \
	$(CONFIG_LIBS) $(SIM_EXTRA_LIBS)

LIB_OBJS = callback.o syscall.o targ-map.o $(SIM_OBJS)

RUNTESTFLAGS =

callback_h = $(srcroot)/include/gdb/callback.h
remote_sim_h = $(srcroot)/include/gdb/remote-sim.h

all: $(SIM_EXTRA_ALL) libsim.a run$(EXEEXT) .gdbinit

libsim.a: $(LIB_OBJS)
	rm -f libsim.a
	$(AR) $(AR_FLAGS) libsim.a $(LIB_OBJS)
	$(RANLIB) libsim.a

run$(EXEEXT): $(SIM_RUN_OBJS) libsim.a $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) -o run$(EXEEXT) \
	  $(SIM_RUN_OBJS) libsim.a $(EXTRA_LIBS)

run.o: $(srccom)/run.c config.h tconfig.h $(remote_sim_h) $(callback_h)
	$(CC) -c $(srccom)/run.c $(ALL_CFLAGS)

# FIXME: Ideally, callback.o and friends live in a library outside of
# both the gdb and simulator source trees (e.g. devo/remote.  Not
# devo/libremote because this directory would contain more than just
# a library).

callback.o: $(srccom)/callback.c config.h tconfig.h $(callback_h) targ-vals.h
	$(CC) -c $(srccom)/callback.c $(ALL_CFLAGS)

syscall.o: $(srccom)/syscall.c config.h tconfig.h $(callback_h) targ-vals.h
	$(CC) -c $(srccom)/syscall.c $(ALL_CFLAGS)

targ-map.o: targ-map.c targ-vals.h

gentmap: Makefile $(srccom)/gentmap.c targ-vals.def
	$(CC_FOR_BUILD) $(srccom)/gentmap.c -o gentmap $(BUILD_CFLAGS) $(NL_TARGET)

targ-vals.h targ-map.c: stamp-tvals
stamp-tvals: gentmap
	rm -f tmp-tvals.h tmp-tmap.c
	./gentmap -h >tmp-tvals.h
	$(SHELL) $(srcroot)/move-if-change tmp-tvals.h targ-vals.h
	./gentmap -c >tmp-tmap.c
	$(SHELL) $(srcroot)/move-if-change tmp-tmap.c targ-map.c
	touch stamp-tvals

#
# Rules for building sim-* components.  Triggered by listing the corresponding
# .o file in the list of simulator targets.
#

sim_main_headers = \
	sim-main.h \
	$(sim-assert_h) \
	$(sim-base_h) \
	$(sim-cpu_h) \
	$(sim-engine_h) \
	$(sim-events_h) \
	$(sim-memopt_h) \
	$(sim-model_h) \
	$(sim-module_h) \
	$(sim-profile_h) \
	$(sim-trace_h) \
	$(sim-watch_h) \
	$(sim-basics_h) \
	$(SIM_EXTRA_DEPS)

# Exported version of sim_main_headers.
SIM_MAIN_DEPS = \
	$(sim_main_headers)

sim-alu_h = $(srccom)/sim-alu.h
sim-arange_h = $(srccom)/sim-arange.h \
		$(srccom)/sim-arange.c
sim-assert_h = $(srccom)/sim-assert.h
sim-base_h = $(srccom)/sim-base.h \
		$(sim-module_h) \
		$(sim-trace_h) \
		$(sim-core_h) \
		$(sim-events_h) \
		$(sim-profile_h) \
		$(sim-model_h) \
		$(sim-io_h) \
		$(sim-engine_h) \
		$(sim-watch_h) \
		$(sim-memopt_h) \
		$(sim-cpu_h)
sim-basics_h = $(srccom)/sim-basics.h \
		../common/cconfig.h \
		tconfig.h \
		$(sim-config_h) \
		$(callback_h) \
		$(sim-inline_h) \
		$(sim-types_h) \
		$(sim-bits_h) \
		$(sim-endian_h) \
		$(sim-signal_h) \
		$(sim-arange_h) \
		$(sim-utils_h)
sim-bits_h = $(srccom)/sim-bits.h \
		$(srccom)/sim-bits.c
sim-config_h = $(srccom)/sim-config.h
sim-core_h = $(srccom)/sim-core.h
sim-cpu_h = $(srccom)/sim-cpu.h
sim-endian_h = $(srccom)/sim-endian.h \
		$(srccom)/sim-endian.c
sim-engine_h = $(srccom)/sim-engine.h
sim-events_h = $(srccom)/sim-events.h
sim-fpu_h = $(srccom)/sim-fpu.h
sim-hw_h = $(srccom)/sim-hw.h
sim-inline_h = $(srccom)/sim-inline.h
sim-io_h = $(srccom)/sim-io.h
sim-memopt_h = $(srccom)/sim-memopt.h
sim-model_h = $(srccom)/sim-model.h
sim-module_h = $(srccom)/sim-module.h
sim-n-bits_h = $(srccom)/sim-n-bits.h
sim-n-core_h = $(srccom)/sim-n-core.h
sim-n-endian_h = $(srccom)/sim-n-endian.h
sim-options_h = $(srccom)/sim-options.h
sim-profile_h = $(srccom)/sim-profile.h
sim-signal_h = $(srccom)/sim-signal.h
sim-trace_h = $(srccom)/sim-trace.h
sim-types_h = $(srccom)/sim-types.h
sim-utils_h = $(srccom)/sim-utils.h
sim-watch_h = $(srccom)/sim-watch.h

hw-alloc_h = $(srccom)/hw-alloc.h
hw-base_h = $(srccom)/hw-base.h
hw-device_h = $(srccom)/hw-device.h
hw-events_h = $(srccom)/hw-events.h
hw-handles_h = $(srccom)/hw-handles.h
hw-instances_h = $(srccom)/hw-instances.h
hw-ports_h = $(srccom)/hw-ports.h
hw-properties_h = $(srccom)/hw-properties.h
hw-tree_h = $(srccom)/hw-tree.h

hw_main_headers = \
	$(srccom)/hw-main.h \
	$(hw-alloc_h) \
	$(hw-base_h) \
	$(hw-device_h) \
	$(hw-events_h) \
	$(hw-instances_h) \
	$(hw-handles_h) \
	$(hw-ports_h) \
	$(hw-properties_h) \

# FIXME: If this complicated way of building .o files from ../common is
# necessary, the reason should be documented here.

BUILT_SRC_FROM_COMMON= \
	sim-inline.c

sim-abort.o: $(srccom)/sim-abort.c \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-abort.c $(ALL_CFLAGS)

sim-arange.o: $(srccom)/sim-arange.c $(sim-arange_h) $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-arange.c $(ALL_CFLAGS)

sim-bits.o: $(srccom)/sim-bits.c $(sim-bits_h) $(sim-n-bits_h) \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-bits.c $(ALL_CFLAGS)

sim-config.o: $(srccom)/sim-config.c $(sim-config_h) sim-main.h \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-config.c $(ALL_CFLAGS)

sim-core.o: $(srccom)/sim-core.c $(sim_main_headers) \
	  $(sim-core_h) $(sim-n-core_h)
	$(CC) -c $(srccom)/sim-core.c $(ALL_CFLAGS)

sim-cpu.o: $(srccom)/sim-cpu.c $(sim_main_headers)
	$(CC) -c $(srccom)/sim-cpu.c $(ALL_CFLAGS)

sim-endian.o: $(srccom)/sim-endian.c $(sim-endian_h) $(sim-n-endian_h)
	$(CC) -c $(srccom)/sim-endian.c $(ALL_CFLAGS)

sim-engine.o: $(srccom)/sim-engine.c $(sim_main_headers) $(sim-engine_h)
	$(CC) -c $(srccom)/sim-engine.c $(ALL_CFLAGS)

sim-events.o: $(srccom)/sim-events.c $(sim-events_h) sim-main.h \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-events.c $(ALL_CFLAGS)

sim-fpu.o: $(srccom)/sim-fpu.c $(sim-fpu_h) \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-fpu.c $(ALL_CFLAGS)

sim-hload.o: $(srccom)/sim-hload.c $(sim-assert_h) $(remote_sim_h) \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-hload.c $(ALL_CFLAGS)

sim-hrw.o: $(srccom)/sim-hrw.c $(sim-assert_h) $(sim_core_h) $(remote_sim_h) \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-hrw.c $(ALL_CFLAGS)

sim-hw.o: $(srccom)/sim-hw.c $(sim_main_headers)
	$(CC) -c $(srccom)/sim-hw.c $(ALL_CFLAGS)

sim-info.o: $(srccom)/sim-info.c $(sim-assert_h) $(remote_sim_h) \
	  $(SIM_EXTRA_DEPS)
	$(CC) -c $(srccom)/sim-info.c $(ALL_CFLAGS)

sim-inline.c: $(srccom)/sim-inline.c
	rm -f $@ tmp-$@
	echo "# 1 \"$(srccom)/$@\"" > tmp-$@
	cat $(srccom)/$@ >> tmp-$@
	$(SHELL) $(srcdir)/../../move-if-change tmp-$@ $@

sim-io.o: $(srccom)/sim-io.c $(sim_main_headers) $(sim-io_h) $(remote_sim_h) \
	  targ-vals.h
	$(CC) -c $(srccom)/sim-io.c $(ALL_CFLAGS)

sim-memopt.o: $(srccom)/sim-memopt.c $(sim_main_headers) \
	  $(sim-io_h)
	$(CC) -c $(srccom)/sim-memopt.c $(ALL_CFLAGS)

sim-module.o: $(srccom)/sim-module.c $(sim_main_headers) \
	  $(sim-io_h)
	$(CC) -c $(srccom)/sim-module.c $(ALL_CFLAGS)

sim-options.o: $(srccom)/sim-options.c $(sim_main_headers) \
	  $(sim-options_h) $(sim-io_h)
	$(CC) -c $(srccom)/sim-options.c $(ALL_CFLAGS)

sim-reason.o: $(srccom)/sim-reason.c $(sim_main_headers) $(remote_sim_h)
	$(CC) -c $(srccom)/sim-reason.c $(ALL_CFLAGS)

sim-reg.o: $(srccom)/sim-reg.c $(sim_main_headers) $(remote_sim_h)
	$(CC) -c $(srccom)/sim-reg.c $(ALL_CFLAGS)

sim-resume.o: $(srccom)/sim-resume.c $(sim_main_headers) $(remote_sim_h)
	$(CC) -c $(srccom)/sim-resume.c $(ALL_CFLAGS)

sim-run.o: $(srccom)/sim-run.c $(sim_main_headers)
	$(CC) -c $(srccom)/sim-run.c $(ALL_CFLAGS)

sim-signal.o: $(srccom)/sim-signal.c $(sim_main_headers) $(sim-signal_h)
	$(CC) -c $(srccom)/sim-signal.c $(ALL_CFLAGS)

sim-stop.o: $(srccom)/sim-stop.c $(sim_main_headers)
	$(CC) -c $(srccom)/sim-stop.c $(ALL_CFLAGS)

sim-trace.o: $(srccom)/sim-trace.c $(sim_main_headers) \
	  $(sim-options_h) $(sim-io_h)
	$(CC) -c $(srccom)/sim-trace.c $(ALL_CFLAGS)

sim-profile.o: $(srccom)/sim-profile.c $(sim_main_headers) \
	  $(sim-options_h) $(sim-io_h)
	$(CC) -c $(srccom)/sim-profile.c $(ALL_CFLAGS)

sim-model.o: $(srccom)/sim-model.c $(sim_main_headers) \
	  $(sim-io_h)
	$(CC) -c $(srccom)/sim-model.c $(ALL_CFLAGS)

sim-utils.o: $(srccom)/sim-utils.c $(sim_main_headers)
	$(CC) -c $(srccom)/sim-utils.c $(ALL_CFLAGS)

sim-watch.o: $(srccom)/sim-watch.c $(sim_main_headers)
	$(CC) -c $(srccom)/sim-watch.c $(ALL_CFLAGS)

sim-load.o: $(srccom)/sim-load.c $(callback_h) $(sim-basics_h) $(remote_sim_h)
	$(CC) -c $(srccom)/sim-load.c $(ALL_CFLAGS)


# FIXME This is one very simple-minded way of generating the file hw-config.h
hw-config.h: Makefile.in $(srccom)/Make-common.in config.status Makefile
	rm -f tmp-hw.h
	echo "/* generated by Makefile */" > tmp-hw.h
	for hw in $(SIM_HW) ; do \
	  echo "extern const struct hw_descriptor dv_$${hw}_descriptor[];" ; \
	done >> tmp-hw.h
	echo "const struct hw_descriptor *hw_descriptors[] = {" >> tmp-hw.h
	for hw in $(SIM_HW) ; do \
	  echo "  dv_$${hw}_descriptor," ; \
	done >> tmp-hw.h
	echo "  NULL," >> tmp-hw.h
	echo "};" >> tmp-hw.h
	mv tmp-hw.h hw-config.h

hw-alloc.o: $(srccom)/hw-alloc.c $(hw_main_headers)
	$(CC) -c $(srccom)/hw-alloc.c $(ALL_CFLAGS)

hw-base.o: $(srccom)/hw-base.c $(hw_main_headers) hw-config.h
	$(CC) -c $(srccom)/hw-base.c $(ALL_CFLAGS)

hw-device.o: $(srccom)/hw-device.c $(hw_main_headers)
	$(CC) -c $(srccom)/hw-device.c $(ALL_CFLAGS)

hw-events.o: $(srccom)/hw-events.c $(hw_main_headers) $(sim_main_headers)
	$(CC) -c $(srccom)/hw-events.c $(ALL_CFLAGS)

test-hw-events: $(srccom)/hw-events.c libsim.a
	$(CC) $(ALL_CFLAGS) -DMAIN -o test-hw-events$(EXEEXT) \
		$(srccom)/hw-events.c libsim.a $(EXTRA_LIBS)

hw-instances.o: $(srccom)/hw-instances.c $(hw_main_headers)
	$(CC) -c $(srccom)/hw-instances.c $(ALL_CFLAGS)

hw-handles.o: $(srccom)/hw-handles.c $(hw_main_headers)
	$(CC) -c $(srccom)/hw-handles.c $(ALL_CFLAGS)

hw-ports.o: $(srccom)/hw-ports.c $(hw_main_headers)
	$(CC) -c $(srccom)/hw-ports.c $(ALL_CFLAGS)

hw-properties.o: $(srccom)/hw-properties.c $(hw_main_headers)
	$(CC) -c $(srccom)/hw-properties.c $(ALL_CFLAGS)

hw-tree.o: $(srccom)/hw-tree.c $(hw_main_headers) $(hw-tree_h)
	$(CC) -c $(srccom)/hw-tree.c $(ALL_CFLAGS)

# Devices.

dv-core.o: $(srccom)/dv-core.c $(hw_main_headers) $(sim_main_headers)
	$(CC) -c $(srccom)/dv-core.c $(ALL_CFLAGS)

dv-glue.o: $(srccom)/dv-glue.c $(hw_main_headers) $(sim_main_headers)
	$(CC) -c $(srccom)/dv-glue.c $(ALL_CFLAGS)

dv-pal.o: $(srccom)/dv-pal.c $(hw_main_headers) $(sim_main_headers)
	$(CC) -c $(srccom)/dv-pal.c $(ALL_CFLAGS)

dv-sockser.o: $(srccom)/dv-sockser.h $(sim_main_headers)
	$(CC) -c $(srccom)/dv-sockser.c $(ALL_CFLAGS)


nrun.o: $(srccom)/nrun.c config.h tconfig.h $(remote_sim_h) $(callback_h) \
	  $(sim_main_headers)
	$(CC) -c $(srccom)/nrun.c $(ALL_CFLAGS)

# CGEN support.

# For use in Makefile.in for cpu-specific files.
CGEN_MAIN_CPU_DEPS = \
	$(SIM_MAIN_DEPS) \
	$(CGEN_INCLUDE_DEPS) \
	$(srccom)/cgen-ops.h \
	$(srccom)/cgen-mem.h \
	$(srccom)/cgen-par.h \
	$(srccom)/cgen-fpu.h

cgen-run.o: $(srccom)/cgen-run.c $(sim_main_headers)
	$(CC) -c $(srccom)/cgen-run.c $(ALL_CFLAGS)

cgen-scache.o: $(srccom)/cgen-scache.c $(sim_main_headers)
	$(CC) -c $(srccom)/cgen-scache.c $(ALL_CFLAGS)

cgen-trace.o: $(srccom)/cgen-trace.c $(sim_main_headers)
	$(CC) -c $(srccom)/cgen-trace.c $(ALL_CFLAGS)

cgen-fpu.o: $(srccom)/cgen-fpu.c $(sim_main_headers) $(sim-fpu_h)
	$(CC) -c $(srccom)/cgen-fpu.c $(ALL_CFLAGS)

cgen-accfp.o: $(srccom)/cgen-accfp.c $(sim_main_headers) $(sim-fpu_h)
	$(CC) -c $(srccom)/cgen-accfp.c $(ALL_CFLAGS)

cgen-utils.o: $(srccom)/cgen-utils.c $(sim_main_headers) \
	  $(srccom)/cgen-mem.h $(srccom)/cgen-ops.h $(srccom)/cgen-engine.h
	$(CC) -c $(srccom)/cgen-utils.c $(ALL_CFLAGS)

cgen-par.o: $(srccom)/cgen-par.c $(sim_main_headers) \
	  $(srccom)/cgen-mem.h $(srccom)/cgen-par.h
	$(CC) -c $(srccom)/cgen-par.c $(ALL_CFLAGS)

# Support targets.

install: install-common $(SIM_EXTRA_INSTALL)

install-common: installdirs
	n=`echo run | sed '$(program_transform_name)'`; \
	$(INSTALL_PROGRAM) run$(EXEEXT) $(DESTDIR)$(bindir)/$$n$(EXEEXT)
	n=`echo libsim.a | sed s/libsim.a/lib$(target_alias)-sim.a/`; \
	$(INSTALL_DATA) libsim.a $(DESTDIR)$(libdir)/$$n ; \
	( cd $(DESTDIR)$(libdir) ; $(RANLIB) $$n )

installdirs:
	$(SHELL) $(srcdir)/../../mkinstalldirs $(DESTDIR)$(bindir)
	$(SHELL) $(srcdir)/../../mkinstalldirs $(DESTDIR)$(libdir)

check:
	cd ../testsuite && $(MAKE) check RUNTESTFLAGS="$(RUNTESTFLAGS)"

info:
clean-info:
install-info:

.NOEXPORT:
MAKEOVERRIDES=

tags etags: TAGS

# Macros like EXTERN_SIM_CORE confuse tags.
# And the sim-n-foo.h files create functions that can't be found either.
TAGS: force
	cd $(srcdir) && \
	etags --regex '/^\([a-z_]+\) (/\1/' --regex '/^\/[*] TAGS: .*/' \
		*.[ch] ../common/*.[ch]

clean: $(SIM_EXTRA_CLEAN)
	rm -f *.[oa] *~ core
	rm -f run$(EXEEXT) libsim.a
	rm -f gentmap targ-map.c targ-vals.h stamp-tvals
	if [ ! -f Make-common.in ] ; then \
		rm -f $(BUILT_SRC_FROM_COMMON) ; \
	fi
	rm -f tmp-mloop.hin tmp-mloop.h tmp-mloop.cin tmp-mloop.c

distclean mostlyclean maintainer-clean realclean: clean $(SIM_EXTRA_DISTCLEAN)
	rm -f TAGS
	rm -f Makefile config.cache config.log config.status .gdbinit
	rm -f tconfig.h config.h stamp-h
	rm -f targ-vals.def

.c.o:
	$(CC) -c $(ALL_CFLAGS) $<

# Dummy target to force execution of dependent targets.
force:

Makefile: Makefile.in $(srccom)/Make-common.in config.status
	CONFIG_HEADERS= $(SHELL) ./config.status

config.status: configure
	$(SHELL) ./config.status --recheck

config.h: stamp-h ; @true
stamp-h: config.in config.status
	CONFIG_FILES= CONFIG_HEADERS=config.h:config.in $(SHELL) ./config.status

.gdbinit: # config.status $(srccom)/gdbinit.in
	CONFIG_FILES=$@:../common/gdbinit.in CONFIG_HEADERS= $(SHELL) ./config.status


# CGEN support

CGENDIR = @cgendir@
CGEN = "`if [ -f ../../guile/libguile/guile ]; then echo ../../guile/libguile/guile; else echo guile ; fi` -l $(CGENDIR)/guile.scm -s"
CGENFLAGS = -v
CGEN_CPU_DIR = $(CGENDIR)/cpu

CGEN_READ_SCM = $(CGENDIR)/sim.scm
CGEN_ARCH_SCM = $(CGENDIR)/sim-arch.scm
CGEN_CPU_SCM = $(CGENDIR)/sim-cpu.scm $(CGENDIR)/sim-model.scm
CGEN_DECODE_SCM = $(CGENDIR)/sim-decode.scm
CGEN_DESC_SCM = $(CGENDIR)/desc.scm $(CGENDIR)/desc-cpu.scm

# Various choices for which cpu specific files to generate.
CGEN_CPU_EXTR = -E tmp-ext.c1
CGEN_CPU_READ = -R tmp-read.c1
CGEN_CPU_WRITE = -W tmp-write.c1
CGEN_CPU_SEM = -S tmp-sem.c1
CGEN_CPU_SEMSW = -X tmp-semsw.c1

CGEN_FLAGS_TO_PASS = \
	CGEN='$(CGEN)' \
	CGENFLAGS="$(CGENFLAGS)"

# We store the generated files in the source directory until we decide to
# ship a Scheme interpreter with gdb/binutils.  Maybe we never will.

cgen-arch: force
	$(SHELL) $(srccom)/cgen.sh arch $(srcdir) \
		$(CGEN) $(CGENDIR) "$(CGENFLAGS)" \
		$(arch) "$(FLAGS)" ignored "$(isa)" $(mach) ignored \
		$(archfile) ignored

cgen-cpu: force
	$(SHELL) $(srccom)/cgen.sh cpu $(srcdir) \
		$(CGEN) $(CGENDIR) "$(CGENFLAGS)" \
		$(arch) "$(FLAGS)" $(cpu) "$(isa)" $(mach) "$(SUFFIX)" \
		$(archfile) "$(EXTRAFILES)"

cgen-defs: force
	$(SHELL) $(srccom)/cgen.sh defs $(srcdir) \
		$(CGEN) $(CGENDIR) "$(CGENFLAGS)" \
		$(arch) "$(FLAGS)" $(cpu) "$(isa)" $(mach) "$(SUFFIX)" \
		$(archfile) ignored

cgen-decode: force
	$(SHELL) $(srccom)/cgen.sh decode $(srcdir) \
		$(CGEN) $(CGENDIR) "$(CGENFLAGS)" \
		$(arch) "$(FLAGS)" $(cpu) "$(isa)" $(mach) "$(SUFFIX)" \
		$(archfile) "$(EXTRAFILES)"

cgen-cpu-decode: force
	$(SHELL) $(srccom)/cgen.sh cpu-decode $(srcdir) \
		$(CGEN) $(CGENDIR) "$(CGENFLAGS)" \
		$(arch) "$(FLAGS)" $(cpu) "$(isa)" $(mach) "$(SUFFIX)" \
		$(archfile) "$(EXTRAFILES)"

cgen-desc: force
	$(SHELL) $(srccom)/cgen.sh desc $(srcdir) \
		$(CGEN) $(CGENDIR) "$(CGENFLAGS)" \
		$(arch) "$(FLAGS)" $(cpu) "$(isa)" $(mach) "$(SUFFIX)" \
		$(archfile) ignored $(opcfile)

## End COMMON_POST_CONFIG_FRAG

interp.o: $(srcdir)/interp.c config.h sim-main.h itable.h
cp1.o: $(srcdir)/cp1.c config.h sim-main.h

mdmx.o: $(srcdir)/mdmx.c $(srcdir)/sim-main.h

dsp.o: $(srcdir)/dsp.c $(srcdir)/sim-main.h

multi-run.o: multi-include.h tmp-mach-multi

../igen/igen:
	cd ../igen && $(MAKE)

IGEN_TRACE= # -G omit-line-numbers # -G trace-rule-selection -G trace-rule-rejection -G trace-entries # -G trace-all
IGEN_INSN=$(srcdir)/mips.igen
IGEN_DC=$(srcdir)/mips.dc
M16_DC=$(srcdir)/m16.dc
IGEN_INCLUDE=\
	$(srcdir)/m16.igen \
	$(srcdir)/mdmx.igen \
	$(srcdir)/mips3d.igen \
	$(srcdir)/sb1.igen \
	$(srcdir)/tx.igen \
	$(srcdir)/vr.igen \
	$(srcdir)/dsp.igen \

# NB:	Since these can be built by a number of generators, care
#	must be taken to ensure that they are only dependant on
#	one of those generators.
BUILT_SRC_FROM_GEN = \
	itable.h \
	itable.c \

SIM_IGEN_ALL = tmp-igen
SIM_M16_ALL = tmp-m16
SIM_MULTI_ALL = tmp-multi

$(BUILT_SRC_FROM_GEN): $(SIM_IGEN_ALL)



BUILT_SRC_FROM_IGEN = \
	icache.h \
	icache.c \
	idecode.h \
	idecode.c \
	semantics.h \
	semantics.c \
	model.h \
	model.c \
	support.h \
	support.c \
	engine.h \
	engine.c \
	irun.c \

$(BUILT_SRC_FROM_IGEN): tmp-igen

tmp-igen: $(IGEN_INSN) $(IGEN_DC) ../igen/igen $(IGEN_INCLUDE)
	cd ../igen && $(MAKE)
	../igen/igen \
		$(IGEN_TRACE) \
		-I $(srcdir) \
		-Werror \
		-Wnodiscard \
		-F 32,f -M mipsIV -N 0 \
		-G gen-direct-access \
		-G gen-zero-r0 \
		-B 32 \
		-H 31 \
		-i $(IGEN_INSN) \
		-o $(IGEN_DC) \
		-x \
		-n icache.h    -hc tmp-icache.h \
		-n icache.c    -c  tmp-icache.c \
		-n semantics.h -hs tmp-semantics.h \
		-n semantics.c -s  tmp-semantics.c \
		-n idecode.h   -hd tmp-idecode.h \
		-n idecode.c   -d  tmp-idecode.c \
		-n model.h     -hm tmp-model.h \
		-n model.c     -m  tmp-model.c \
		-n support.h   -hf tmp-support.h \
		-n support.c   -f  tmp-support.c \
		-n itable.h    -ht tmp-itable.h \
		-n itable.c    -t  tmp-itable.c \
		-n engine.h    -he tmp-engine.h \
		-n engine.c    -e  tmp-engine.c \
		-n irun.c      -r  tmp-irun.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-icache.h icache.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-icache.c icache.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-idecode.h idecode.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-idecode.c idecode.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-semantics.h semantics.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-semantics.c semantics.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-model.h model.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-model.c model.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-support.h support.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-support.c support.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-itable.h itable.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-itable.c itable.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-engine.h engine.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-engine.c engine.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-irun.c irun.c
	touch tmp-igen

semantics.o: sim-main.h semantics.c $(SIM_EXTRA_DEPS)
engine.o: sim-main.h engine.c $(SIM_EXTRA_DEPS)
support.o: sim-main.h support.c $(SIM_EXTRA_DEPS)
idecode.o: sim-main.h idecode.c $(SIM_EXTRA_DEPS)
itable.o: sim-main.h itable.c $(SIM_EXTRA_DEPS)




BUILT_SRC_FROM_M16 = \
	m16_icache.h \
	m16_icache.c \
	m16_idecode.h \
	m16_idecode.c \
	m16_semantics.h \
	m16_semantics.c \
	m16_model.h \
	m16_model.c \
	m16_support.h \
	m16_support.c \
	\
	m32_icache.h \
	m32_icache.c \
	m32_idecode.h \
	m32_idecode.c \
	m32_semantics.h \
	m32_semantics.c \
	m32_model.h \
	m32_model.c \
	m32_support.h \
	m32_support.c \

$(BUILT_SRC_FROM_M16): tmp-m16

tmp-m16: $(IGEN_INSN) $(IGEN_DC) ../igen/igen $(IGEN_INCLUDE)
	cd ../igen && $(MAKE)
	../igen/igen \
		$(IGEN_TRACE) \
		-I $(srcdir) \
		-Werror \
		-Wnodiscard \
		 -F 16  -M mips16,mipsIII  -N 0 \
		-G gen-direct-access \
		-G gen-zero-r0 \
		-B 16 \
		-H 15 \
		-i $(IGEN_INSN) \
		-o $(M16_DC) \
		-P m16_ \
		-x \
		-n m16_icache.h    -hc tmp-icache.h \
		-n m16_icache.c    -c  tmp-icache.c \
		-n m16_semantics.h -hs tmp-semantics.h \
		-n m16_semantics.c -s  tmp-semantics.c \
		-n m16_idecode.h   -hd tmp-idecode.h \
		-n m16_idecode.c   -d  tmp-idecode.c \
		-n m16_model.h     -hm tmp-model.h \
		-n m16_model.c     -m  tmp-model.c \
		-n m16_support.h   -hf tmp-support.h \
		-n m16_support.c   -f  tmp-support.c \
		#
	$(SHELL) $(srcdir)/../../move-if-change tmp-icache.h m16_icache.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-icache.c m16_icache.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-idecode.h m16_idecode.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-idecode.c m16_idecode.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-semantics.h m16_semantics.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-semantics.c m16_semantics.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-model.h m16_model.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-model.c m16_model.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-support.h m16_support.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-support.c m16_support.c
	../igen/igen \
		$(IGEN_TRACE) \
		-I $(srcdir) \
		-Werror \
		-Wnodiscard \
		-F 32,f -M mipsIV -N 0 \
		-G gen-direct-access \
		-G gen-zero-r0 \
		-B 32 \
		-H 31 \
		-i $(IGEN_INSN) \
		-o $(IGEN_DC) \
		-P m32_ \
		-x \
		-n m32_icache.h    -hc tmp-icache.h \
		-n m32_icache.c    -c  tmp-icache.c \
		-n m32_semantics.h -hs tmp-semantics.h \
		-n m32_semantics.c -s  tmp-semantics.c \
		-n m32_idecode.h   -hd tmp-idecode.h \
		-n m32_idecode.c   -d  tmp-idecode.c \
		-n m32_model.h     -hm tmp-model.h \
		-n m32_model.c     -m  tmp-model.c \
		-n m32_support.h   -hf tmp-support.h \
		-n m32_support.c   -f  tmp-support.c \
		#
	$(SHELL) $(srcdir)/../../move-if-change tmp-icache.h m32_icache.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-icache.c m32_icache.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-idecode.h m32_idecode.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-idecode.c m32_idecode.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-semantics.h m32_semantics.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-semantics.c m32_semantics.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-model.h m32_model.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-model.c m32_model.c
	$(SHELL) $(srcdir)/../../move-if-change tmp-support.h m32_support.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-support.c m32_support.c
	../igen/igen \
		$(IGEN_TRACE) \
		-I $(srcdir) \
		-Werror \
		-Wnodiscard \
		-Wnowidth \
		-F 32,f -M mipsIV -N 0  -F 16  -M mips16,mipsIII  -N 0 \
		-G gen-direct-access \
		-G gen-zero-r0 \
		-i $(IGEN_INSN) \
		-n itable.h    -ht tmp-itable.h \
		-n itable.c    -t  tmp-itable.c \
		#
	$(SHELL) $(srcdir)/../../move-if-change tmp-itable.h itable.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-itable.c itable.c
	touch tmp-m16


BUILT_SRC_FROM_MULTI = doesnt-exist.c
SIM_MULTI_IGEN_CONFIGS = 

$(BUILT_SRC_FROM_MULTI): tmp-multi
tmp-multi: tmp-mach-multi tmp-itable-multi tmp-run-multi targ-vals.h
tmp-mach-multi: $(IGEN_INSN) $(IGEN_DC) ../igen/igen $(IGEN_INCLUDE)
	for t in $(SIM_MULTI_IGEN_CONFIGS); do \
	  p=`echo $${t} | sed -e 's/:.*//'` ; \
	  m=`echo $${t} | sed -e 's/.*:\(.*\):.*/\1/'` ; \
	  f=`echo $${t} | sed -e 's/.*://'` ; \
	  case $${p} in \
	    m16*) e="-B 16 -H 15 -o $(M16_DC) -F 16" ;; \
	    *) e="-B 32 -H 31 -o $(IGEN_DC) -F $${f}" ;; \
	  esac; \
	  ../igen/igen \
		$(IGEN_TRACE) \
		$${e} \
		-I $(srcdir) \
		-Werror \
		-Wnodiscard \
		-N 0 \
		-M $${m} \
		-G gen-direct-access \
		-G gen-zero-r0 \
		-i $(IGEN_INSN) \
		-P $${p}_ \
		-x \
		-n $${p}_icache.h    -hc tmp-icache.h \
		-n $${p}_icache.c    -c  tmp-icache.c \
		-n $${p}_semantics.h -hs tmp-semantics.h \
		-n $${p}_semantics.c -s  tmp-semantics.c \
		-n $${p}_idecode.h   -hd tmp-idecode.h \
		-n $${p}_idecode.c   -d  tmp-idecode.c \
		-n $${p}_model.h     -hm tmp-model.h \
		-n $${p}_model.c     -m  tmp-model.c \
		-n $${p}_support.h   -hf tmp-support.h \
		-n $${p}_support.c   -f  tmp-support.c \
		-n $${p}_engine.h    -he tmp-engine.h \
		-n $${p}_engine.c    -e  tmp-engine.c \
		; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-icache.h $${p}_icache.h ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-icache.c $${p}_icache.c ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-idecode.h $${p}_idecode.h ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-idecode.c $${p}_idecode.c ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-semantics.h $${p}_semantics.h ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-semantics.c $${p}_semantics.c ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-model.h $${p}_model.h ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-model.c $${p}_model.c ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-support.h $${p}_support.h ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-support.c $${p}_support.c ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-engine.h $${p}_engine.h ; \
	  $(SHELL) $(srcdir)/../../move-if-change tmp-engine.c $${p}_engine.c ; \
	done
	touch tmp-mach-multi
tmp-itable-multi: $(IGEN_INSN) $(IGEN_DC) ../igen/igen $(IGEN_INCLUDE)
	../igen/igen \
		$(IGEN_TRACE) \
		-I $(srcdir) \
		-Werror \
		-Wnodiscard \
		-Wnowidth \
		-N 0 \
		 \
		-G gen-direct-access \
		-G gen-zero-r0 \
		-i $(IGEN_INSN) \
		-n itable.h    -ht tmp-itable.h \
		-n itable.c    -t  tmp-itable.c \
		#
	$(SHELL) $(srcdir)/../../move-if-change tmp-itable.h itable.h
	$(SHELL) $(srcdir)/../../move-if-change tmp-itable.c itable.c
	touch tmp-itable-multi
tmp-run-multi: $(srcdir)/m16run.c
	for t in $(SIM_MULTI_IGEN_CONFIGS); do \
	  case $${t} in \
	    m16*) \
	      m=`echo $${t} | sed -e 's/^m16//' -e 's/:.*//'`; \
	      sed <  $(srcdir)/m16run.c > tmp-run \
		    -e "s/^sim_/m16$${m}_/" \
		    -e "s/m16_/m16$${m}_/" \
		    -e "s/m32_/m32$${m}_/" ; \
	      $(SHELL) $(srcdir)/../../move-if-change tmp-run m16$${m}_run.c ; \
	  esac \
	done
	touch tmp-run-multi

clean-extra:
	rm -f $(BUILT_SRC_FROM_GEN)
	rm -f $(BUILT_SRC_FROM_IGEN)
	rm -f $(BUILT_SRC_FROM_M16)
	rm -f $(BUILT_SRC_FROM_MULTI)
	rm -f tmp-*
	rm -f m16*.o m32*.o itable*.o

distclean-extra:
	rm -f multi-include.h multi-run.c
