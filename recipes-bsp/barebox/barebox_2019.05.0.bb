require barebox-skov.inc

# for barebox >= v2019.04.0 (commit 0bb285926777)
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"

DEPENDS += "coreutils-native"

COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

SRC_URI[md5sum] = "2e721cce90f1ea1492710ca23680311f"
SRC_URI[sha256sum] = "704bb09b2bf1347e43ebb9138da32a7e1b4d13892fd187be98f4f9dae000501d"

do_install_append () {
	install -d ${D}/boot/
	install -m 0644 ${S}/images/${BAREBOX_IMAGE} ${D}/boot/
}

FILES_${PN} += "/boot/${BAREBOX_IMAGE}"
