require recipes-bsp/barebox/barebox.inc

COMPATIBLE_MACHINE = "imx6-cpu|imx8-cpu|imx8s-cpu"

SRC_URI += "file://defconfig"

# Maintained by Pengutronix
require files/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require files/patches-skov/series.inc
require files/${MACHINE}/env/env.inc

PV = "${UMPF_BASE}"
DEPENDS += "coreutils-native lz4-native"

LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"
SRC_URI[sha256sum] = "521b427efe4d5199641fd6440ed77226fed3ba7088ee2f6361b510187f700f09"

# Allow autoboot_timeout adjustment for automation from local.conf or
# environment via BAREBOX_AUTOBOOT_TIMEOUT
do_compile:prepend () {
	if [ -n "${BAREBOX_AUTOBOOT_TIMEOUT}" ]; then
		mkdir -p ${WORKDIR}/env/nv
		printf "${BAREBOX_AUTOBOOT_TIMEOUT}\n" > ${WORKDIR}/env/nv/autoboot_timeout
	fi
}

BAREBOX_ENV_DIR[doc] = "Overlay the barebox built-in environment with the environment provided by the BSP if specified."
BAREBOX_ENV_DIR = "${B}"

BAREBOX_FIRMWARE_DEP = ""
BAREBOX_FIRMWARE_DEP:mx8m-generic-bsp = "trusted-firmware-a:do_deploy imx-boot-firmware-files:do_deploy"
BAREBOX_FIRMWARE_DEP:append:imx8s-cpu = " optee-os:do_deploy"

do_compile[depends] += "${BAREBOX_FIRMWARE_DEP}"

BAREBOX_FIRMWARE_DIR:mx8m-generic-bsp = "${S}/firmware"

BAREBOX_TFA_BIN:imx8-cpu = "imx8mp-bl31.bin"
BAREBOX_TFA_BIN:imx8s-cpu = "imx8mp-bl31.bin-optee"

do_compile:prepend:mx8m-generic-bsp() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        ## ---- Copy runtime Firmware (BL31): TF-A ----
        cp -L ${DEPLOY_DIR_IMAGE}/${BAREBOX_TFA_BIN} ${BAREBOX_FIRMWARE_DIR}

        # copy imx-firmware
        for ddr_firmware in ${DDR_FIRMWARE_NAME}; do
                cp ${DEPLOY_DIR_IMAGE}/${ddr_firmware} ${BAREBOX_FIRMWARE_DIR}
        done
}

do_compile:prepend:imx8s-cpu() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        ## ---- Copy secure OS (BL32): OP-TEE ----
        cp ${DEPLOY_DIR_IMAGE}/optee/tee.bin ${BAREBOX_FIRMWARE_DIR}/imx8mp-bl32.bin
}

inherit barebox-habv4

# Remember to keep the value of barebox' CONFIG_CRYPTO_PUBLIC_KEYS in sync!
FITIMAGE_SIGNING_KEY_ROLE ?= "fit"

DEPENDS += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', ' \
                   virtual/fit-signing \
                   openssl-native \
                   ', '' , d)}"

export HOST_EXTRACFLAGS

python __anonymous() {
    if not bb.utils.contains("MACHINE_FEATURES", "habv4", True, False, d):
        return

    # Add OP-TEE sanity check as prefunc.
    d.appendVarFlag("do_compile", "prefuncs", " barebox_optee_check")
}

python barebox_optee_check() {
    # Retrieve CONFIG_OPTEE_SIZE & CONFIG_OPTEE_SHM_SIZE from barebox config.
    config_optee_size, _ = bb.process.run(f"{d.getVar('S')}/scripts/config --file {d.getVar('B')}/.config --state OPTEE_SIZE")
    config_optee_size = int(config_optee_size, base=16)
    config_optee_shm_size, _ = bb.process.run(f"{d.getVar('S')}/scripts/config --file {d.getVar('B')}/.config --state OPTEE_SHM_SIZE")
    config_optee_shm_size = int(config_optee_shm_size, base=16)

    expected_optee_shm_size = int(d.getVar("OPTEE_SHMEM_SIZE"), base=16)
    expected_optee_size = int(d.getVar("OPTEE_CORE_SIZE"), base=16) + expected_optee_shm_size

    if config_optee_size != expected_optee_size:
        bb.fatal(f"Unexpected CONFIG_OPTEE_SIZE, expected '{hex(expected_optee_size)}', got '{hex(config_optee_size)}'")
    if config_optee_shm_size != expected_optee_shm_size:
        bb.fatal(f"Unexpected CONFIG_OPTEE_SHM_SIZE, expected '{hex(expected_optee_shm_size)}', got '{hex(config_optee_shm_size)}'")
}

do_compile:prepend() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        signing_prepare

        # Prepare the installation of imx-srk-fuse.bin into barebox' environment
        # to simplify burning it
        mkdir -p "${WORKDIR}/env"
        cp "${BAREBOX_ENV_DIR}/imx-srk-fuse.bin" "${WORKDIR}/env"

        signing_use_role "${FITIMAGE_SIGNING_KEY_ROLE}"
        export PKCS11_FIT_URI="${PKCS11_URI}"
    fi
}

do_install:append() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        install -d ${D}/boot/
        install -m 0644 ${BAREBOX_ENV_DIR}/imx-srk-fuse.bin ${D}/boot/
    fi
}

FILES:${PN} += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', '/boot/imx-srk-fuse.bin', '' , d)}"
