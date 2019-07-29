require barebox-skov.inc

SRC_URI += "\
  file://env/init/sdk3_17_partitions \
  "

PROVIDES_remove = "virtual/bootloader"
BAREBOX_IMG_BASENAME = "${PN}-skov-arm9"
COMPATIBLE_MACHINE = "arm9-cpu"

do_deploy () {
	install -d ${DEPLOYDIR}
	install -m 644 -T ${S}/images/${BAREBOX_IMAGE} ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
