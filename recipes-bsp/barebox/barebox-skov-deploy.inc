PROVIDES_remove = "virtual/bootloader"

do_deploy () {
	install -d ${DEPLOYDIR}
	install -m 644 -T ${B}/images/${BAREBOX_IMAGE} ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
