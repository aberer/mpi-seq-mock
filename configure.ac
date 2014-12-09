#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([mpi-mock-seq], [0.0.1], [andre -dot- aberer -at- googlemail -dot- com])
AC_CONFIG_SRCDIR([src/mpi.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

AC_PROG_RANLIB


# Checks for header files.
AC_CHECK_HEADERS([string.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_FUNCS([memmove])

dnl AC_CONFIG_FILES([src/Makefile])
AC_OUTPUT


AM_INIT_AUTOMAKE
AC_OUTPUT([Makefile src/Makefile utils/Makefile])
