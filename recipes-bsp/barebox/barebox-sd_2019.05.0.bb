require barebox-skov.inc

SRC_URI += "\
  file://env/init/permit_fusing_ocotp \
  "

BAREBOX_IMG_BASENAME = "${PN}-skov-imx6"
COMPATIBLE_MACHINE = "imx6-cpu"

require barebox-skov-deploy.inc
