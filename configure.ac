# init prj
AC_INIT([cxx-patterns],[0.1],[cannadayr@gmail.com],[cxx-patterns],[https://github.com/cannadayr/cxx-patterns])

# set macro dir
AC_CONFIG_MACRO_DIR([m4])

# init automake
AM_INIT_AUTOMAKE

# compilers to search for
AC_PROG_CXX([g++ clang++])

# use C++14
AX_CXX_COMPILE_STDCXX(14,[noext],[mandatory])

# check for libpthread
AX_PTHREAD

# Makefiles to output
AC_CONFIG_FILES([Makefile])

# headers to output
AC_CONFIG_HEADERS([config.h])

# flush output
AC_OUTPUT
