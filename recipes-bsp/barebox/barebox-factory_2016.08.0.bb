require barebox-skov.inc

SRC_URI += "\
  file://env/bin/init \
  "

PROVIDES_remove = "virtual/bootloader"

SRC_URI[md5sum] = "66b8f79d337fa4a7bb8744b1a7867474"
SRC_URI[sha256sum] = "610d3422137f0e6e9a72f51caad17d1b2c46314ee03b2ae35799a1c5425478ab"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-dol63x
	install -m 644 -T ${S}/images/barebox-skov-dol63x.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}

