require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc

SRC_URI += "\
  file://env/nv/autoboot_timeout \
  file://env/nv/linux.bootargs.base \
  file://env/nv/boot.default \
  file://env/init/bootargs \
  "

COMPATIBLE_MACHINE = "imx6-cpu"

do_deploy[vardepsexclude] = "DATETIME"
