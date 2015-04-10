cmd_archival/gzip.o := gcc -Wp,-MD,archival/.gzip.o.d   -std=gnu99 -Iinclude -Ilibbb  -I/opt/smp86xx/smp86xx_rootfs_2.8.2.0/build_mipsel/busybox-1.5.0/libbb -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D"BB_VER=KBUILD_STR(1.5.0)" -DBB_BT=AUTOCONF_TIMESTAMP  -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Os -fno-builtin-strlen -finline-limit=0 -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -march=i386 -mpreferred-stack-boundary=2 -Wdeclaration-after-statement -Wno-pointer-sign    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(gzip)"  -D"KBUILD_MODNAME=KBUILD_STR(gzip)" -c -o archival/gzip.o archival/gzip.c

deps_archival/gzip.o := \
  archival/gzip.c \
    $(wildcard include/config/ktop.h) \
    $(wildcard include/config/zip.h) \
    $(wildcard include/config/gunzip.h) \
  include/busybox.h \
  include/libbb.h \
    $(wildcard include/config/selinux.h) \
    $(wildcard include/config/locale/support.h) \
    $(wildcard include/config/feature/shadowpasswds.h) \
    $(wildcard include/config/lfs.h) \
    $(wildcard include/config/feature/buffers/go/on/stack.h) \
    $(wildcard include/config/buffer.h) \
    $(wildcard include/config/ubuffer.h) \
    $(wildcard include/config/feature/buffers/go/in/bss.h) \
    $(wildcard include/config/feature/ipv6.h) \
    $(wildcard include/config/getopt/long.h) \
    $(wildcard include/config/route.h) \
    $(wildcard include/config/feature/exec/prefer/applets.h) \
    $(wildcard include/config/busybox/exec/path.h) \
    $(wildcard include/config/feature/editing.h) \
    $(wildcard include/config/feature/editing/history.h) \
    $(wildcard include/config/ture/editing/savehistory.h) \
    $(wildcard include/config/feature/editing/savehistory.h) \
    $(wildcard include/config/feature/tab/completion.h) \
    $(wildcard include/config/feature/username/completion.h) \
    $(wildcard include/config/feature/editing/vi.h) \
    $(wildcard include/config/inux.h) \
    $(wildcard include/config/feature/devfs.h) \
  include/platform.h \
    $(wildcard include/config///.h) \
  /usr/include/byteswap.h \
  /usr/include/bits/byteswap.h \
  /usr/include/endian.h \
    $(wildcard include/config/.h) \
  /usr/include/features.h \
    $(wildcard include/config/c99.h) \
    $(wildcard include/config/ix.h) \
    $(wildcard include/config/ix2.h) \
    $(wildcard include/config/ix199309.h) \
    $(wildcard include/config/ix199506.h) \
    $(wildcard include/config/en.h) \
    $(wildcard include/config/en/extended.h) \
    $(wildcard include/config/x98.h) \
    $(wildcard include/config/en2k.h) \
    $(wildcard include/config/gefile.h) \
    $(wildcard include/config/gefile64.h) \
    $(wildcard include/config/e/offset64.h) \
    $(wildcard include/config/d.h) \
    $(wildcard include/config/c.h) \
    $(wildcard include/config/ile.h) \
    $(wildcard include/config/ntrant.h) \
    $(wildcard include/config/tify/level.h) \
    $(wildcard include/config/i.h) \
    $(wildcard include/config/ern/inlines.h) \
  /usr/include/sys/cdefs.h \
    $(wildcard include/config/espaces.h) \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-32.h \
  /usr/include/bits/endian.h \
  /usr/include/arpa/inet.h \
  /usr/include/netinet/in.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \
  /usr/include/sys/socket.h \
  /usr/include/sys/uio.h \
  /usr/include/sys/types.h \
  /usr/include/bits/types.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h \
  /usr/include/bits/typesizes.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/uio.h \
  /usr/include/bits/socket.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/limits.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/syslimits.h \
  /usr/include/limits.h \
  /usr/include/bits/posix1_lim.h \
  /usr/include/bits/local_lim.h \
  /usr/include/linux/limits.h \
  /usr/include/bits/posix2_lim.h \
  /usr/include/bits/xopen_lim.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sockaddr.h \
  /usr/include/asm/socket.h \
  /usr/include/asm/sockios.h \
  /usr/include/bits/in.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdbool.h \
  /usr/include/sys/mount.h \
  /usr/include/sys/ioctl.h \
  /usr/include/bits/ioctls.h \
  /usr/include/asm/ioctls.h \
  /usr/include/asm/ioctl.h \
  /usr/include/asm-generic/ioctl.h \
  /usr/include/bits/ioctl-types.h \
  /usr/include/sys/ttydefaults.h \
  /usr/include/ctype.h \
  /usr/include/xlocale.h \
  /usr/include/dirent.h \
  /usr/include/bits/dirent.h \
  /usr/include/errno.h \
  /usr/include/bits/errno.h \
  /usr/include/linux/errno.h \
  /usr/include/asm/errno.h \
  /usr/include/asm-generic/errno.h \
  /usr/include/asm-generic/errno-base.h \
  /usr/include/fcntl.h \
  /usr/include/bits/fcntl.h \
  /usr/include/sys/stat.h \
  /usr/include/bits/stat.h \
  /usr/include/inttypes.h \
  /usr/include/netdb.h \
    $(wildcard include/config/3/ascii/rules.h) \
  /usr/include/rpc/netdb.h \
  /usr/include/bits/siginfo.h \
  /usr/include/bits/netdb.h \
  /usr/include/setjmp.h \
  /usr/include/bits/setjmp.h \
  /usr/include/signal.h \
  /usr/include/bits/signum.h \
  /usr/include/bits/sigaction.h \
  /usr/include/bits/sigcontext.h \
  /usr/include/asm/sigcontext.h \
  /usr/include/bits/sigstack.h \
  /usr/include/sys/ucontext.h \
  /usr/include/bits/sigthread.h \
  /usr/include/stdio.h \
  /usr/include/libio.h \
    $(wildcard include/config/a.h) \
    $(wildcard include/config/ar/t.h) \
    $(wildcard include/config//io/file.h) \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/alloca.h \
  /usr/include/string.h \
    $(wildcard include/config/ing/inlines.h) \
  /usr/include/strings.h \
  /usr/include/sys/mman.h \
  /usr/include/bits/mman.h \
  /usr/include/sys/statfs.h \
  /usr/include/bits/statfs.h \
  /usr/include/sys/time.h \
  /usr/include/sys/wait.h \
  /usr/include/sys/resource.h \
  /usr/include/bits/resource.h \
  /usr/include/termios.h \
  /usr/include/bits/termios.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/getopt.h \
  /usr/include/utime.h \
  include/pwd_.h \
    $(wildcard include/config/use/bb/pwd/grp.h) \
  /usr/include/pwd.h \
  include/grp_.h \
  /usr/include/grp.h \
  include/shadow_.h \
    $(wildcard include/config/use/bb/shadow.h) \
  /usr/include/shadow.h \
  /usr/include/paths.h \
  /usr/include/sys/param.h \
  /usr/include/linux/param.h \
  /usr/include/asm/param.h \
  include/xatonum.h \

archival/gzip.o: $(deps_archival/gzip.o)

$(deps_archival/gzip.o):
