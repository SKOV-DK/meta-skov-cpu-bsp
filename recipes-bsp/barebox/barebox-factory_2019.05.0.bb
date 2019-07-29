require barebox-skov.inc

SRC_URI += "\
  file://env/bin/init \
  "

PROVIDES_remove = "virtual/bootloader"
COMPATIBLE_MACHINE = "imx6-cpu"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-imx6
	install -m 644 -T ${S}/images/barebox-skov-imx6.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
