require barebox-skov.inc

do_install:append () {
	install -d ${D}/boot/
	install -m 0644 ${B}/images/${BAREBOX_IMAGE} ${D}/boot/
}

FILES:${PN} += "/boot/${BAREBOX_IMAGE}"
