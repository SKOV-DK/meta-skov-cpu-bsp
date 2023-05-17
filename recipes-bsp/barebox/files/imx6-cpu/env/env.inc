# All files added to barebox environment,
# or replacing files from the default environment

SRC_URI += "\
  file://env/nv/autoboot_timeout  \
  file://env/nv/linux.bootargs.base \
  file://env/nv/linux.bootargs.platsch \
  file://env/nv/boot.default \
  file://env/nv/boot.watchdog_timeout \
  file://env/nv/bootm.provide_machine_id \
  file://env/nv/bootchooser.disable_on_zero_attempts \
  file://env/nv/bootchooser.reset_attempts \
  file://env/nv/bootchooser.reset_priorities \
  file://env/nv/bootchooser.retry \
  file://env/nv/bootchooser.system0.default_attempts \
  file://env/nv/bootchooser.system0.default_priority \
  file://env/nv/bootchooser.last_chosen \
  file://env/nv/bootchooser.state_prefix \
  file://env/nv/bootchooser.system1.default_attempts \
  file://env/nv/bootchooser.system1.default_priority \
  file://env/nv/bootchooser.targets \
  file://env/nv/bootchooser.system0.boot \
  file://env/nv/bootchooser.system1.boot \
  file://env/init/bootargs \
  file://env/init/display \
  file://env/init/splash \
  file://env/splash.png \
  file://env/splash1280.png \
  "

