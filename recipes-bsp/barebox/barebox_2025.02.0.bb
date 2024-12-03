require barebox-skov.inc

COMPATIBLE_MACHINE = "imx6-cpu|imx8-cpu"

do_install:append () {
	install -d ${D}/boot/
	install -m 0644 ${B}/images/${BAREBOX_IMAGE} ${D}/boot/
}

FILES:${PN} += "/boot/${BAREBOX_IMAGE}"
