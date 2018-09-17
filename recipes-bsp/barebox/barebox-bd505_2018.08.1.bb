require barebox-skov.inc

SRC_URI += "\
  file://env/init/sdk3_17_partitions \
  "

PROVIDES_remove = "virtual/bootloader"
COMPATIBLE_MACHINE = "arm9-cpu"

SRC_URI[md5sum] = "248e825bd454e7d5a5d07ffc71434628"
SRC_URI[sha256sum] = "0b7b81d3ee2a75e8258336a97da3e9e036c5affec5f58400b28b280bae68f4c6"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-arm9
	install -m 644 -T ${S}/images/${BAREBOX_IMAGE} ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}
