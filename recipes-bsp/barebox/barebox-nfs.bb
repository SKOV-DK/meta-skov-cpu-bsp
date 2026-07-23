require barebox-skov.inc

SRC_URI += "\
  file://env/boot/nfs \
  "

COMPATIBLE_MACHINE = "imx6-cpu"

require barebox-skov-deploy.inc
