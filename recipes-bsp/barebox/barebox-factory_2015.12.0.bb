require barebox-skov.inc

PROVIDES_remove = "virtual/bootloader"

SRC_URI[md5sum] = "1ef8926cd2eadc39ce779b8377e7cfcc"
SRC_URI[sha256sum] = "b0b7df82dafcc7aceeaa6285755855a71f6422c5a278949c717096f4ffd7f315"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-dol63x
	install -m 644 -T ${S}/images/barebox-skov-dol63x.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}

