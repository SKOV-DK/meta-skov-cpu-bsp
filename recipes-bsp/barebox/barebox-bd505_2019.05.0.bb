require barebox-skov.inc

SRC_URI += "\
  file://env/init/sdk3_17_partitions \
  "

BAREBOX_IMG_BASENAME = "${PN}-skov-arm9"
COMPATIBLE_MACHINE = "arm9-cpu"

require barebox-skov-deploy.inc
