require barebox-skov.inc

SRC_URI += "\
  file://splash-bd507-iot.png \
  "

do_compile:prepend () {
	mv ${WORKDIR}/splash-bd507-iot.png ${WORKDIR}/env/splash.png
}

BAREBOX_IMG_BASENAME = "${PN}-skov-imx6"
COMPATIBLE_MACHINE = "imx6-cpu"

require barebox-skov-deploy.inc

do_install:append () {
	install -d ${D}/boot/
	install -m 0644 ${B}/images/${BAREBOX_IMAGE} ${D}/boot/
}

FILES:${PN} += "/boot/${BAREBOX_IMAGE}"
