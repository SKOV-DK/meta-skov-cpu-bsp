PROVIDES:remove = "virtual/bootloader"

BAREBOX_BIN_BASENAME:imx6-cpu = "${PN}-skov-imx6"
BAREBOX_BIN_BASENAME:imx8-cpu = "${PN}-skov-imx8mp"
BAREBOX_BIN_BASENAME:imx8s-cpu = "${PN}-skov-imx8mp-s"

do_deploy[cleandirs] = "${DEPLOYDIR}"
do_deploy[vardepsexclude] = "DATETIME"
do_deploy () {
	install -d ${DEPLOYDIR}
	install -m 644 -T ${B}/images/${BAREBOX_BINARY} ${DEPLOYDIR}/${BAREBOX_BIN_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_BIN_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_BIN_BASENAME}.img
}
