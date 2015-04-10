dnl Check:
dnl * If we have gettimeofday;
dnl * If we have struct timezone for use in calling it;
dnl * If calling it with a timezone pointer actually works -- this is deemed
dnl   obsolete or undefined on some systems which say you should use a null
dnl   pointer -- and undefine HAVE_TIMEZONE if so;
dnl * Whether it only takes one arg.
AC_DEFUN([LIBGFOR_GETTIMEOFDAY], [
  AC_CHECK_FUNCS(gettimeofday)
  if test "$ac_cv_func_gettimeofday" = yes; then
    AC_CACHE_CHECK([for struct timezone], gfor_cv_struct_timezone,
      [AC_TRY_COMPILE([#include <sys/time.h>],
      [struct timezone tz;],
      gfor_cv_struct_timezone=yes, gfor_cv_struct_timezone=no)])
    if test $gfor_cv_struct_timezone = yes; then
      dnl It may be that we can't call gettimeofday with a non-null pointer.
      dnl In that case we'll lie about struct timezone.
      AC_TRY_RUN([
#ifdef TIME_WITH_SYS_TIME
#include <sys/time.h>
#include <time.h>
#else
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#else
#include <time.h>
#endif
#endif
main ()
{
  struct timeval time;
  struct timezone dummy;
  if (gettimeofday (&time, &dummy))
    exit (1);
  else
    exit (0);
}],
        [gfor_have_struct_timezone=yes], [gfor_have_struct_timezone=no],
        [gfor_have_struct_timezone=yes])
      if test $gfor_have_struct_timezone = yes; then
        AC_DEFINE(HAVE_TIMEZONE, 1, [Do we have struct timezone])
      fi
    fi
    AC_REQUIRE([AC_HEADER_TIME])
    AC_CACHE_CHECK([whether gettimeofday can accept two arguments],
      emacs_cv_gettimeofday_two_arguments,
      [AC_TRY_LINK([
#ifdef TIME_WITH_SYS_TIME
#include <sys/time.h>
#include <time.h>
#else
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#else
#include <time.h>
#endif
#endif
      ],
      [
      struct timeval time;
#ifdef HAVE_TIMEZONE
      struct timezone dummy;
#define DUMMY &dummy
#else
#define DUMMY NULL
#endif
      gettimeofday (&time, DUMMY);],
      emacs_cv_gettimeofday_two_arguments=yes,
      emacs_cv_gettimeofday_two_arguments=no)])
    if test $emacs_cv_gettimeofday_two_arguments = no; then
      AC_DEFINE(GETTIMEOFDAY_ONE_ARGUMENT, 1,
        [Does gettimeofday take a single argument])
    fi
  fi])

sinclude(../libtool.m4)
dnl The lines below arrange for aclocal not to bring an installed
dnl libtool.m4 into aclocal.m4, while still arranging for automake to
dnl add a definition of LIBTOOL to Makefile.in.
ifelse(,,,[AC_SUBST(LIBTOOL)
AC_DEFUN([AM_PROG_LIBTOOL])
AC_DEFUN([AC_LIBTOOL_DLOPEN])
AC_DEFUN([AC_PROG_LD])
])

dnl Check whether the target is ILP32.
AC_DEFUN([LIBGFOR_TARGET_ILP32], [
  AC_CACHE_CHECK([whether the target is ILP32], target_ilp32, [
  save_CFLAGS="$CFLAGS"
  CFLAGS="-O2"
  AC_TRY_LINK(,[
if (sizeof(int) == 4 && sizeof(long) == 4 && sizeof(void *) == 4)
  ;
else
  undefined_function ();
               ],
               target_ilp32=yes,
               target_ilp32=no)
  CFLAGS="$save_CFLAGS"])
  if test $target_ilp32 = yes; then
    AC_DEFINE(TARGET_ILP32, 1,
      [Define to 1 if the target is ILP32.])
  fi
  ])

dnl Check whether the target supports hidden visibility.
AC_DEFUN([LIBGFOR_CHECK_ATTRIBUTE_VISIBILITY], [
  AC_CACHE_CHECK([whether the target supports hidden visibility],
		 have_attribute_visibility, [
  save_CFLAGS="$CFLAGS"
  CFLAGS="$CFLAGS -Werror"
  AC_TRY_COMPILE([void __attribute__((visibility("hidden"))) foo(void) { }],
		 [], have_attribute_visibility=yes,
		 have_attribute_visibility=no)
  CFLAGS="$save_CFLAGS"])
  if test $have_attribute_visibility = yes; then
    AC_DEFINE(HAVE_ATTRIBUTE_VISIBILITY, 1,
      [Define to 1 if the target supports __attribute__((visibility(...))).])
  fi])

dnl Check whether the target supports dllexport
AC_DEFUN([LIBGFOR_CHECK_ATTRIBUTE_DLLEXPORT], [
  AC_CACHE_CHECK([whether the target supports dllexport],
		 have_attribute_dllexport, [
  save_CFLAGS="$CFLAGS"
  CFLAGS="$CFLAGS -Werror"
  AC_TRY_COMPILE([void __attribute__((dllexport)) foo(void) { }],
		 [], have_attribute_dllexport=yes,
		 have_attribute_dllexport=no)
  CFLAGS="$save_CFLAGS"])
  if test $have_attribute_dllexport = yes; then
    AC_DEFINE(HAVE_ATTRIBUTE_DLLEXPORT, 1,
      [Define to 1 if the target supports __attribute__((dllexport)).])
  fi])

dnl Check whether the target supports symbol aliases.
AC_DEFUN([LIBGFOR_CHECK_ATTRIBUTE_ALIAS], [
  AC_CACHE_CHECK([whether the target supports symbol aliases],
		 have_attribute_alias, [
  AC_TRY_LINK([
#define ULP	STR1(__USER_LABEL_PREFIX__)
#define STR1(x)	STR2(x)
#define STR2(x)	#x
void foo(void) { }
extern void bar(void) __attribute__((alias(ULP "foo")));],
    [bar();], have_attribute_alias=yes, have_attribute_alias=no)])
  if test $have_attribute_alias = yes; then
    AC_DEFINE(HAVE_ATTRIBUTE_ALIAS, 1,
      [Define to 1 if the target supports __attribute__((alias(...))).])
  fi])

dnl Check whether target can unlink a file still open.
AC_DEFUN([LIBGFOR_CHECK_UNLINK_OPEN_FILE], [
  AC_CACHE_CHECK([whether the target can unlink an open file],
                  have_unlink_open_file, [
  AC_TRY_RUN([
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main ()
{
  int fd;

  fd = open ("testfile", O_RDWR | O_CREAT, S_IWRITE | S_IREAD);
  if (fd <= 0)
    return 0;
  if (unlink ("testfile") == -1)
    return 1;
  write (fd, "This is a test\n", 15);
  close (fd);

  if (open ("testfile", O_RDONLY, S_IWRITE | S_IREAD) == -1 && errno == ENOENT)
    return 0;
  else
    return 1;
}], have_unlink_open_file=yes, have_unlink_open_file=no, [
case "${target}" in
  *mingw*) have_unlink_open_file=no ;;
  *) have_unlink_open_file=yes;;
esac])])
if test x"$have_unlink_open_file" = xyes; then
  AC_DEFINE(HAVE_UNLINK_OPEN_FILE, 1, [Define if target can unlink open files.])
fi])

dnl Check whether CRLF is the line terminator
AC_DEFUN([LIBGFOR_CHECK_CRLF], [
  AC_CACHE_CHECK([whether the target has CRLF as line terminator],
                  have_crlf, [
  AC_TRY_RUN([
/* This test program should exit with status 0 if system uses a CRLF as
   line terminator, and status 1 otherwise.  
   Since it is used to check for mingw systems, and should return 0 in any
   other case, in case of a failure we will not use CRLF.  */
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int main ()
{
#ifndef O_BINARY
  exit(1);
#else
  int fd, bytes;
  char buff[5];

  fd = open ("foo", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
  if (fd < 0)
    exit(1);
  if (write (fd, "\n", 1) < 0)
    perror ("write");
  
  close (fd);
  
  if ((fd = open ("foo", O_RDONLY | O_BINARY, S_IRWXU)) < 0)
    exit(1);
  bytes = read (fd, buff, 5);
  if (bytes == 2 && buff[0] == '\r' && buff[1] == '\n')
    exit(0);
  else
    exit(1);
#endif
}], have_crlf=yes, have_crlf=no, [
case "${target}" in
  *mingw*) have_crlf=yes ;;
  *) have_crlf=no;;
esac])])
if test x"$have_crlf" = xyes; then
  AC_DEFINE(HAVE_CRLF, 1, [Define if CRLF is line terminator.])
fi])
