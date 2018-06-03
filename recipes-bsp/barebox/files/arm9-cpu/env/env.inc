# All files added to barebox environment,
# or replacing files from the default environment

SRC_URI += "file://env/boot/sd"
SRC_URI += "file://env/init/automount"
SRC_URI += "file://env/nv/boot.default"
SRC_URI += "file://env/nv/linux.bootargs.console"
SRC_URI += "file://env/nv/linux.bootargs.base"
