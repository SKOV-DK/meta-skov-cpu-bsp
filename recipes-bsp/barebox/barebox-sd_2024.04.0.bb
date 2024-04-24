require barebox-skov.inc

BAREBOX_IMG_BASENAME:imx6-cpu = "${PN}-skov-imx6"
BAREBOX_IMG_BASENAME:imx8-cpu = "${PN}-skov-imx8mp"
COMPATIBLE_MACHINE = "imx6-cpu|imx8-cpu"

require barebox-skov-deploy.inc

DEPENDS:append:imx8-cpu = "\
        firmware-imx-8m \
        trusted-firmware-a \
"

BAREBOX_FIRMWARE_DEP = ""
BAREBOX_FIRMWARE_DEP:imx8-cpu = "firmware-imx-8m:do_deploy"

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
