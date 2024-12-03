require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

# Maintained by Pengutronix
require files/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require files/patches-skov/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native lz4-native"

SRC_URI[sha256sum] = "6da5f9e98a8c93f6eead3badefe133ed5fd865395b1a3c0192fdbdd9eb4f7311"

# Allow autoboot_timeout adjustment for automation from local.conf or
# environment via BAREBOX_AUTOBOOT_TIMEOUT
do_compile:prepend () {
	if [ -n "${BAREBOX_AUTOBOOT_TIMEOUT}" ]; then
		mkdir -p ${WORKDIR}/env/nv
		printf "${BAREBOX_AUTOBOOT_TIMEOUT}\n" > ${WORKDIR}/env/nv/autoboot_timeout
	fi
}

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
