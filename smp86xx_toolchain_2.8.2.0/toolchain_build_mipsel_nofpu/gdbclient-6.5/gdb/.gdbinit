echo Setting up the environment for debugging gdb.\n

set complaints 1

b internal_error

b info_command
commands
	silent
	return
end

dir /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/../libiberty
dir /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb/../bfd
dir /opt/smp86xx/smp86xx_toolchain_2.8.2.0/toolchain_build_mipsel_nofpu/gdb-6.5/gdb
dir .
set prompt (top-gdb) 
