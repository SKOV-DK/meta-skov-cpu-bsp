require barebox-skov.inc

SRC_URI += "\
  file://env/bin/init \
  "

PROVIDES_remove = "virtual/bootloader"
COMPATIBLE_MACHINE = "imx6-cpu"

SRC_URI[md5sum] = "c89db974b639ecdb60ba5b3b87cdc7ac"
SRC_URI[sha256sum] = "cdfdddab5e4c27813c8946bddbb7405b47485d4016746bb3017b5b72394342c1"

do_deploy () {
	install -d ${DEPLOYDIR}
	BAREBOX_IMG_BASENAME=${PN}-skov-imx6
	install -m 644 -T ${S}/images/barebox-skov-imx6.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
	ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
}

