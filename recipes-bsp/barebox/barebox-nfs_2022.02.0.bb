require barebox-skov.inc

SRC_URI += "\
  file://env/boot/nfs \
  "

BAREBOX_IMG_BASENAME = "${PN}-skov-imx6"
COMPATIBLE_MACHINE = "imx6-cpu"

require barebox-skov-deploy.inc
