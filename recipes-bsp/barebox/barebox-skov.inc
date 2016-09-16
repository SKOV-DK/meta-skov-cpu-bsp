require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc

SRC_URI += "\
  file://env/nv/autoboot_timeout  \
  file://env/nv/linux.bootargs.base \
  file://env/nv/boot.default \
  file://env/nv/bootchooser.retry \
  file://env/nv/bootchooser.system0.default_attempts \
  file://env/nv/bootchooser.system0.default_priority \
  file://env/nv/bootchooser.last_chosen \
  file://env/nv/bootchooser.state_prefix \
  file://env/nv/bootchooser.system0.priority \
  file://env/nv/bootchooser.system0.remaining_attempts \
  file://env/nv/bootchooser.system1.default_attempts \
  file://env/nv/bootchooser.system1.default_priority \
  file://env/nv/bootchooser.system1.priority \
  file://env/nv/bootchooser.system1.remaining_attempts \
  file://env/nv/bootchooser.targets \
  file://env/nv/bootchooser.system0.boot \
  file://env/nv/bootchooser.system1.boot \
  file://env/init/bootargs \
  "

COMPATIBLE_MACHINE = "imx6-cpu"

do_deploy[vardepsexclude] = "DATETIME"
