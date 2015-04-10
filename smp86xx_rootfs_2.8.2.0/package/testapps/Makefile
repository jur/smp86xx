ifneq "$(filter -DEM86XX_CHIP=EM86XX_CHIPID_TANGO2,$(RMCFLAGS))" ""
GCC := mipsel-linux-gcc
LD  := mipsel-linux-ld
AR  := mipsel-linux-ar
else
GCC := arm-elf-gcc
LD  := arm-elf-ld
AR  := arm-elf-ar
endif

ifndef UCLINUX_KERNEL
UCLINUX_KERNEL := ../../mambo-2.4.20-uc0/
endif

ifneq "$(filter -DEM86XX_CHIP=EM86XX_CHIPID_TANGO2,$(RMCFLAGS))" ""
COMMON_FLAGS := -Wall -Wstrict-prototypes -Wno-trigraphs -O2 -fno-strict-aliasing -fno-common -pipe -mabi=32 -mips32r2 -march=mips32r2 -Wa,-32 -Wa,-march=mips32r2 -Wa,-mips32r2 -Wa,--trap -finline-limit=100000 
CFLAGS       := $(COMMON_FLAGS) $(USER_EXTRA_CFLAGS) 
else
COMMON_FLAGS := -Wall -Wstrict-prototypes -O2 -msoft-float
CFLAGS       := $(COMMON_FLAGS) $(USER_EXTRA_CFLAGS) 
KFLAGS       := $(COMMON_FLAGS) $(KERNEL_EXTRA_CFLAGS) -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -pipe -mapcs-32 -march=armv4 -mtune=arm7tdmi -mshort-load-bytes 
ifndef EXTRA_LDFLAGS
EXTRA_LDFLAGS := -Wl,-elf2flt=\"-s32768\"
endif
endif

CFLAGS += -I$(UCLINUX_KERNEL)/include
LDFLAGS := $(EXTRA_LDFLAGS)

TARGETS := iruser fipuser scuser fiplib.a

.PHONY: all
all: $(TARGETS)

iruser: iruser.c Makefile
	$(GCC) $(CFLAGS) $(LDFLAGS) -o $@ $<

scuser: scuser.c Makefile
	$(GCC) $(CFLAGS) $(LDFLAGS) -o $@ $<

fipuser: fipuser.c fiplib.h fiplib.a Makefile
	$(GCC) $(CFLAGS) $(LDFLAGS) -o fipuser fipuser.c fiplib.a

fiplib.a: fiplib.o
	$(AR) rcs fiplib.a fiplib.o

fiplib.o: fiplib.c fiplib.h Makefile
	$(GCC) $(CFLAGS) -c -o fiplib.o fiplib.c

.PHONY: clean
clean:
	rm -f $(TARGETS) *.o *.gdb

