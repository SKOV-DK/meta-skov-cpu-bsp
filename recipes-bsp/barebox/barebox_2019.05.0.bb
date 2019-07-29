require barebox-skov.inc

COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

do_install_append () {
	install -d ${D}/boot/
	install -m 0644 ${S}/images/${BAREBOX_IMAGE} ${D}/boot/
}

FILES_${PN} += "/boot/${BAREBOX_IMAGE}"
