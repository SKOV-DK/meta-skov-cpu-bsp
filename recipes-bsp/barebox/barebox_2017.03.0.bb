require barebox-skov.inc

SRC_URI[md5sum] = "886fc74cb85130d37beb6a5c8119a357"
SRC_URI[sha256sum] = "98236a0b09cc5fcf8db23f4ed56e36f87202f4f7733c8a6a765b9ecf6c842b2a"

do_install_append () {
	install -d ${D}/boot/
	install -m 0644 ${S}/images/barebox-skov-imx6.img ${D}/boot/
}

FILES_${PN} += "/boot/barebox-skov-imx6.img"
