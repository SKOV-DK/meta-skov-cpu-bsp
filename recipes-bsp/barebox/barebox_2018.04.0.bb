require barebox-skov.inc

SRC_URI[md5sum] = "c89db974b639ecdb60ba5b3b87cdc7ac"
SRC_URI[sha256sum] = "cdfdddab5e4c27813c8946bddbb7405b47485d4016746bb3017b5b72394342c1"

do_install_append () {
	install -d ${D}/boot/
	install -m 0644 ${S}/images/barebox-skov-imx6.img ${D}/boot/
}

FILES_${PN} += "/boot/barebox-skov-imx6.img"
