require barebox-skov.inc

SRC_URI += "\
  file://env/boot/nfs \
"

PROVIDES_remove = "virtual/bootloader"

SRC_URI[md5sum] = "886fc74cb85130d37beb6a5c8119a357"
SRC_URI[sha256sum] = "98236a0b09cc5fcf8db23f4ed56e36f87202f4f7733c8a6a765b9ecf6c842b2a"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-imx6
	install -m 644 -T ${S}/images/barebox-skov-imx6.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
