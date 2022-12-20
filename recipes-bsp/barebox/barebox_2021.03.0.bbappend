FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += "file://defconfig"

do_install:append () {
        install -d ${D}/boot/
        install -m 0644 ${B}/barebox-flash-image ${D}/boot/
}

FILES:${PN} += "/boot/barebox-flash-image"