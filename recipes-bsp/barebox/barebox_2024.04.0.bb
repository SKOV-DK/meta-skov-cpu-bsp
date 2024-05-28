require barebox-skov.inc

COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu|imx8-cpu"

do_install:append () {
	install -d ${D}/boot/
	install -m 0644 ${B}/images/${BAREBOX_IMAGE} ${D}/boot/
}

DEPENDS:append:imx8-cpu = "\
        imx-boot-firmware-files \
        trusted-firmware-a \
"

BAREBOX_FIRMWARE_DEP = ""
BAREBOX_FIRMWARE_DEP:imx8-cpu = "imx-boot-firmware-files:do_deploy"

do_configure[depends] += "${BAREBOX_FIRMWARE_DEP}"

BAREBOX_FIRMWARE_DIR:imx8-cpu = "${S}/firmware"

do_compile:prepend:imx8-cpu() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        # copy tf-a
        cp ${STAGING_DIR_TARGET}/firmware/bl31-imx8mp.bin ${BAREBOX_FIRMWARE_DIR}/imx8mp-bl31.bin

        # copy imx-firmware
        for ddr_firmware in ${DDR_FIRMWARE_NAME}; do
                cp ${DEPLOY_DIR_IMAGE}/${ddr_firmware} ${BAREBOX_FIRMWARE_DIR}
        done
}

FILES:${PN} += "/boot/${BAREBOX_IMAGE}"
