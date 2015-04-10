cmd_applets/applets.o := gcc -Wp,-MD,applets/.applets.o.d   -std=gnu99 -Iinclude -Ilibbb  -I/opt/smp86xx/smp86xx_rootfs_2.8.2.0/build_mipsel/busybox-1.5.0/libbb -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D"BB_VER=KBUILD_STR(1.5.0)" -DBB_BT=AUTOCONF_TIMESTAMP  -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Os -fno-builtin-strlen -finline-limit=0 -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -march=i386 -mpreferred-stack-boundary=2 -Wdeclaration-after-statement -Wno-pointer-sign    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(applets)"  -D"KBUILD_MODNAME=KBUILD_STR(applets)" -c -o applets/applets.o applets/applets.c

deps_applets/applets.o := \
  applets/applets.c \
    $(wildcard include/config/static.h) \
    $(wildcard include/config/show/usage.h) \
    $(wildcard include/config/feature/compress/usage.h) \
    $(wildcard include/config/feature/suid/config.h) \
    $(wildcard include/config/file.h) \
    $(wildcard include/config/feature/suid.h) \
    $(wildcard include/config/feature/suid/config/quiet.h) \
    $(wildcard include/config/quiet.h) \
  /usr/include/assert.h \
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
    $(wildcard include/config/gunzip.h) \
    $(wildcard include/config/ktop.h) \
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
  include/applets.h \
    $(wildcard include/config/feature/verbose/usage.h) \
    $(wildcard include/config/install/no/usr.h) \
    $(wildcard include/config/t.h) \
    $(wildcard include/config/group.h) \
    $(wildcard include/config/user.h) \
    $(wildcard include/config/timex.h) \
    $(wildcard include/config/applet.h) \
    $(wildcard include/config/ing.h) \
    $(wildcard include/config/ename.h) \
    $(wildcard include/config/onfig.h) \
    $(wildcard include/config/h.h) \
    $(wildcard include/config/zip2.h) \
    $(wildcard include/config/v.h) \
    $(wildcard include/config/ttr.h) \
    $(wildcard include/config/on.h) \
    $(wildcard include/config/rp.h) \
    $(wildcard include/config/od.h) \
    $(wildcard include/config/wn.h) \
    $(wildcard include/config/st.h) \
    $(wildcard include/config/oot.h) \
    $(wildcard include/config/um.h) \
    $(wildcard include/config/ar.h) \
    $(wildcard include/config/m.h) \
    $(wildcard include/config/o.h) \
    $(wildcard include/config/nd.h) \
    $(wildcard include/config/ntab.h) \
    $(wildcard include/config/e.h) \
    $(wildcard include/config/llocvt.h) \
    $(wildcard include/config/fsd.h) \
    $(wildcard include/config//dhcprelay.h) \
    $(wildcard include/config/f.h) \
    $(wildcard include/config/name.h) \
    $(wildcard include/config/sg.h) \
    $(wildcard include/config/2unix.h) \
    $(wildcard include/config/g.h) \
    $(wildcard include/config/g/deb.h) \
    $(wildcard include/config/pkmap.h) \
    $(wildcard include/config//dumpleases.h) \
    $(wildcard include/config/sck.h) \
    $(wildcard include/config/abel.h) \
    $(wildcard include/config/ture/grep/egrep/alias.h) \
    $(wildcard include/config/ct.h) \
    $(wildcard include/config/dir.h) \
    $(wildcard include/config/uidgid.h) \
    $(wildcard include/config/er/wake.h) \
    $(wildcard include/config/r.h) \
    $(wildcard include/config/eidentd.h) \
    $(wildcard include/config/se.h) \
    $(wildcard include/config/et.h) \
    $(wildcard include/config/lush.h) \
    $(wildcard include/config/ormat.h) \
    $(wildcard include/config/sk.h) \
    $(wildcard include/config/ture/grep/fgrep/alias.h) \
    $(wildcard include/config/dfs.h) \
    $(wildcard include/config/eramdisk.h) \
    $(wildcard include/config/k.h) \
    $(wildcard include/config/k/minix.h) \
    $(wildcard include/config/get.h) \
    $(wildcard include/config/put.h) \
    $(wildcard include/config/er.h) \
    $(wildcard include/config/enforce.h) \
    $(wildcard include/config/opt.h) \
    $(wildcard include/config/sebool.h) \
    $(wildcard include/config/ty.h) \
    $(wildcard include/config/p.h) \
    $(wildcard include/config/zip.h) \
    $(wildcard include/config/arm.h) \
    $(wildcard include/config/dump.h) \
    $(wildcard include/config/tid.h) \
    $(wildcard include/config/tname.h) \
    $(wildcard include/config/pd.h) \
    $(wildcard include/config/lock.h) \
    $(wildcard include/config/pdown.h) \
    $(wildcard include/config/td.h) \
    $(wildcard include/config/mod.h) \
    $(wildcard include/config/tall.h) \
    $(wildcard include/config/ddr.h) \
    $(wildcard include/config/alc.h) \
    $(wildcard include/config/rm.h) \
    $(wildcard include/config/s.h) \
    $(wildcard include/config/ink.h) \
    $(wildcard include/config/oute.h) \
    $(wildcard include/config/ule.h) \
    $(wildcard include/config/unnel.h) \
    $(wildcard include/config/l.h) \
    $(wildcard include/config/lall.h) \
    $(wildcard include/config/lall5.h) \
    $(wildcard include/config/gd.h) \
    $(wildcard include/config/gth.h) \
    $(wildcard include/config/arch.h) \
    $(wildcard include/config/ture/initrd.h) \
    $(wildcard include/config/dfont.h) \
    $(wildcard include/config/dkmap.h) \
    $(wildcard include/config/ger.h) \
    $(wildcard include/config/in.h) \
    $(wildcard include/config/read.h) \
    $(wildcard include/config/etup.h) \
    $(wildcard include/config/zma.h) \
    $(wildcard include/config/chpathcon.h) \
    $(wildcard include/config/edevs.h) \
    $(wildcard include/config/sum.h) \
    $(wildcard include/config/ir.h) \
    $(wildcard include/config/2fs.h) \
    $(wildcard include/config/ifo.h) \
    $(wildcard include/config/s/minix.h) \
    $(wildcard include/config/wap.h) \
    $(wildcard include/config/emp.h) \
    $(wildcard include/config/probe.h) \
    $(wildcard include/config/nt.h) \
    $(wildcard include/config/sktop.h) \
    $(wildcard include/config/ntpoint.h) \
    $(wildcard include/config/eif.h) \
    $(wildcard include/config/stat.h) \
    $(wildcard include/config/ter.h) \
    $(wildcard include/config/up.h) \
    $(wildcard include/config/ookup.h) \
    $(wildcard include/config/nvt.h) \
    $(wildcard include/config/swd.h) \
    $(wildcard include/config/ch.h) \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/g6.h) \
    $(wildcard include/config/e/progress.h) \
    $(wildcard include/config/ot/root.h) \
    $(wildcard include/config/ntenv.h) \
    $(wildcard include/config/ntf.h) \
    $(wildcard include/config/dautorun.h) \
    $(wildcard include/config/te.h) \
    $(wildcard include/config/dahead.h) \
    $(wildcard include/config/dlink.h) \
    $(wildcard include/config/dprofile.h) \
    $(wildcard include/config/lpath.h) \
    $(wildcard include/config/ice.h) \
    $(wildcard include/config/ize.h) \
    $(wildcard include/config/2cpio.h) \
    $(wildcard include/config//parts.h) \
    $(wildcard include/config/con.h) \
    $(wildcard include/config/level.h) \
    $(wildcard include/config/sv.h) \
    $(wildcard include/config/svdir.h) \
    $(wildcard include/config/inuxenabled.h) \
    $(wildcard include/config/console.h) \
    $(wildcard include/config/keycodes.h) \
    $(wildcard include/config/logcons.h) \
    $(wildcard include/config/sid.h) \
    $(wildcard include/config/ture/sh/is/ash.h) \
    $(wildcard include/config/ture/sh/is/hush.h) \
    $(wildcard include/config/ture/sh/is/lash.h) \
    $(wildcard include/config/ture/sh/is/msh.h) \
    $(wildcard include/config/1sum.h) \
    $(wildcard include/config/ep.h) \
    $(wildcard include/config/tlimit.h) \
    $(wildcard include/config/rt/stop/daemon.h) \
    $(wildcard include/config/ings.h) \
    $(wildcard include/config/y.h) \
    $(wildcard include/config/ogin.h) \
    $(wildcard include/config/ogd.h) \
    $(wildcard include/config/ponoff.h) \
    $(wildcard include/config/tch/root.h) \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/logd.h) \
    $(wildcard include/config/kset.h) \
    $(wildcard include/config/net.h) \
    $(wildcard include/config/netd.h) \
    $(wildcard include/config/feature/tftp/get.h) \
    $(wildcard include/config/feature/tftp/put.h) \
    $(wildcard include/config/ceroute.h) \
    $(wildcard include/config/e2fs.h) \
    $(wildcard include/config//udhcpc.h) \
    $(wildcard include/config//udhcpd.h) \
    $(wildcard include/config/unt.h) \
    $(wildcard include/config/me.h) \
    $(wildcard include/config/ompress.h) \
    $(wildcard include/config/q.h) \
    $(wildcard include/config/x2dos.h) \
    $(wildcard include/config/ip.h) \
    $(wildcard include/config/ime.h) \
    $(wildcard include/config/eep.h) \
    $(wildcard include/config/ecode.h) \
    $(wildcard include/config/ncode.h) \
    $(wildcard include/config/nfig.h) \
    $(wildcard include/config/ck.h) \
    $(wildcard include/config/chdog.h) \
    $(wildcard include/config/ami.h) \
    $(wildcard include/config/gs.h) \
  include/usage.h \
    $(wildcard include/config/ture/date/isofmt.h) \
    $(wildcard include/config/ture/dd/ibs/obs.h) \
    $(wildcard include/config/fsd/fg/np.h) \
    $(wildcard include/config/ture/human/readable.h) \
    $(wildcard include/config/ature/human/readable.h) \
    $(wildcard include/config/ture/du/default/blocksize/1k.h) \
    $(wildcard include/config/ature/du/default/blocksize/1k.h) \
    $(wildcard include/config/ture/fancy/echo.h) \
    $(wildcard include/config/ture/find/print0.h) \
    $(wildcard include/config/ture/find/type.h) \
    $(wildcard include/config/ture/find/perm.h) \
    $(wildcard include/config/ture/find/mtime.h) \
    $(wildcard include/config/ture/find/mmin.h) \
    $(wildcard include/config/ture/find/newer.h) \
    $(wildcard include/config/ture/find/inum.h) \
    $(wildcard include/config/ture/find/exec.h) \
    $(wildcard include/config/ture/grep/context.h) \
    $(wildcard include/config/ture/hdparm/get/identity.h) \
    $(wildcard include/config/ture/hdparm/hdio/getset/dma.h) \
    $(wildcard include/config/ture/hdparm/hdio/scan/hwif.h) \
    $(wildcard include/config/ture/hdparm/hdio/unregister/hwif.h) \
    $(wildcard include/config/ture/hdparm/hdio/drive/reset.h) \
    $(wildcard include/config/ture/hdparm/hdio/tristate/hwif.h) \
    $(wildcard include/config/ture/fancy/head.h) \
    $(wildcard include/config/ture/httpd/setuid.h) \
    $(wildcard include/config/ture/httpd/basic/auth.h) \
    $(wildcard include/config/ture/httpd/auth/md5.h) \
    $(wildcard include/config/ture/ifconfig/status.h) \
    $(wildcard include/config/status.h) \
    $(wildcard include/config/ture/ipv6.h) \
    $(wildcard include/config/ture/ifconfig/slip.h) \
    $(wildcard include/config/slip.h) \
    $(wildcard include/config/ture/ifconfig/hw.h) \
    $(wildcard include/config/hw.h) \
    $(wildcard include/config/ture/ifconfig/memstart/ioaddr/irq.h) \
    $(wildcard include/config/memstart/ioaddr/irq.h) \
    $(wildcard include/config/ture/insmod/load/map.h) \
    $(wildcard include/config/ture/ipcalc/fancy.h) \
    $(wildcard include/config/ture/ls/timestamps.h) \
    $(wildcard include/config/ture/ls/filetypes.h) \
    $(wildcard include/config/ture/ls/followlinks.h) \
    $(wildcard include/config/ture/ls/recursive.h) \
    $(wildcard include/config/ture/ls/sortfiles.h) \
    $(wildcard include/config/ture/autowidth.h) \
    $(wildcard include/config/ture/ls/color.h) \
    $(wildcard include/config/feature/makedevs/leaf.h) \
    $(wildcard include/config/feature/makedevs/table.h) \
    $(wildcard include/config/ture/md5/sha1/sum/check.h) \
    $(wildcard include/config/ture/mdev/config.h) \
    $(wildcard include/config/ture/mdev/exec.h) \
    $(wildcard include/config/ture/mtab/support.h) \
    $(wildcard include/config/ture/mount/loop.h) \
    $(wildcard include/config/ture/mount/flags.h) \
    $(wildcard include/config/nc/server.h) \
    $(wildcard include/config/nc/extra.h) \
    $(wildcard include/config/extra.h) \
    $(wildcard include/config/server.h) \
    $(wildcard include/config/feature/pidof/single.h) \
    $(wildcard include/config/feature/pidof/omit.h) \
    $(wildcard include/config/ture/pidof/single.h) \
    $(wildcard include/config/ture/pidof/omit.h) \
    $(wildcard include/config/feature/fancy/ping.h) \
    $(wildcard include/config/desktop.h) \
    $(wildcard include/config/feature/ps/wide.h) \
    $(wildcard include/config/ture/ps/wide.h) \
    $(wildcard include/config/ture/readlink/follow.h) \
    $(wildcard include/config/ture/fancy/sleep.h) \
    $(wildcard include/config/ature/fancy/sleep.h) \
    $(wildcard include/config/ture/sort/big.h) \
    $(wildcard include/config/ture/start/stop/daemon/fancy.h) \
    $(wildcard include/config/ture/stat/format.h) \
    $(wildcard include/config/ture/rotate/logfile.h) \
    $(wildcard include/config/ture/remote/log.h) \
    $(wildcard include/config/ture/ipc/syslog.h) \
    $(wildcard include/config/ture/fancy/tail.h) \
    $(wildcard include/config/ture/tar/create.h) \
    $(wildcard include/config/ture/tar/gzip.h) \
    $(wildcard include/config/ture/tar/bzip2.h) \
    $(wildcard include/config/ture/tar/lzma.h) \
    $(wildcard include/config/ture/tar/compress.h) \
    $(wildcard include/config/ture/tar/from.h) \
    $(wildcard include/config/feature/telnet/autologin.h) \
    $(wildcard include/config/ature/telnetd/standalone.h) \
    $(wildcard include/config/ture/telnetd/standalone.h) \
    $(wildcard include/config/ture/tftp/get.h) \
    $(wildcard include/config/ture/tftp/put.h) \
    $(wildcard include/config/ture/tftp/blocksize.h) \
    $(wildcard include/config/lude/susv2.h) \
    $(wildcard include/config/ture/umount/all.h) \
    $(wildcard include/config/ture/xargs/support/confirmation.h) \
    $(wildcard include/config/ture/xargs/support/termopt.h) \
    $(wildcard include/config/ture/xargs/support/zero/term.h) \

applets/applets.o: $(deps_applets/applets.o)

$(deps_applets/applets.o):
