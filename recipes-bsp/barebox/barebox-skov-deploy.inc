PROVIDES:remove = "virtual/bootloader"

BAREBOX_IMG_BASENAME:imx6-cpu = "${PN}-skov-imx6"
BAREBOX_IMG_BASENAME:imx8-cpu = "${PN}-skov-imx8mp"
BAREBOX_IMG_BASENAME:imx8s-cpu = "${PN}-skov-imx8mp-s"

do_deploy () {
	install -d ${DEPLOYDIR}
	install -m 644 -T ${B}/images/${BAREBOX_IMAGE} ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
