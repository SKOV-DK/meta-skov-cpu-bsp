require barebox-skov.inc

require barebox-skov-deploy.inc

SRC_URI += "\
  file://env/boot/nfs \
  "

COMPATIBLE_MACHINE = "imx6-cpu"
