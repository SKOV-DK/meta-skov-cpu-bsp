require barebox-skov.inc

COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

SRC_URI[md5sum] = "248e825bd454e7d5a5d07ffc71434628"
SRC_URI[sha256sum] = "0b7b81d3ee2a75e8258336a97da3e9e036c5affec5f58400b28b280bae68f4c6"

do_install_append () {
	install -d ${D}/boot/
	install -m 0644 ${S}/images/${BAREBOX_IMAGE} ${D}/boot/
}

FILES_${PN} += "/boot/${BAREBOX_IMAGE}"
