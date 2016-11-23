require barebox-skov.inc

PROVIDES_remove = "virtual/bootloader"

SRC_URI[md5sum] = "53a04c58562e2aba874b5a1079146eba"
SRC_URI[sha256sum] = "9a670ab785738ce4ef7a15bcac2522564dc3af1c49064440f3fd31d0e7a342db"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-imx6
	install -m 644 -T ${S}/images/barebox-skov-imx6.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
