require recipes-bsp/barebox/barebox.inc

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
SRC_URI[sha256sum] = "6db91951143129941adbb5e6b26c7af8be170ea6b5a7b56900ec66029f1d2958"

# Allow autoboot_timeout adjustment for automation from local.conf or
# environment via BAREBOX_AUTOBOOT_TIMEOUT
do_compile:prepend () {
	if [ -n "${BAREBOX_AUTOBOOT_TIMEOUT}" ]; then
		mkdir -p ${WORKDIR}/env/nv
		printf "${BAREBOX_AUTOBOOT_TIMEOUT}\n" > ${WORKDIR}/env/nv/autoboot_timeout
	fi
}

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

inherit ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'signing', '' , d)}

BAREBOX_HABV4_SIGNING_KEY_ROLE[doc] = "The i.MX HABv4 key role to use for signing barebox. Must be one of 'imx_habv4_srk{1,2,3,4}'"
# Remember to keep the value of barebox' CONFIG_HABV4_SRK_INDEX in sync!
BAREBOX_HABV4_SIGNING_KEY_ROLE ?= "imx_habv4_srk1"

# Remember to keep the value of barebox' CONFIG_CRYPTO_PUBLIC_KEYS in sync!
FITIMAGE_SIGNING_KEY_ROLE ?= "fit"

DEPENDS += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', ' \
                   virtual/imx-hab-signing \
                   virtual/fit-signing \
                   extract-cert-native \
                   imx-cst-native \
                   openssl-native \
                   openssl \
                   ', '' , d)}"

export HOST_EXTRACFLAGS

python __anonymous() {
    if not bb.utils.contains("MACHINE_FEATURES", "habv4", True, False, d):
        return

    key_role = d.getVar("BAREBOX_HABV4_SIGNING_KEY_ROLE")
    if key_role[:-1] != "imx_habv4_srk" or key_role[-1] not in "1234":
        bb.fatal(f"Unexpected BAREBOX_HABV4_SIGNING_KEY_ROLE, expected 'imx_habv4_srk{1,2,3,4}', got '{key_role}'")
    key_index = key_role[-1]

    d.setVar("BAREBOX_SRK_INDEX", key_index)

    # Add SRK table generation and check of indices as prefuncs.
    d.appendVarFlag("do_configure", "prefuncs", " barebox_habv4_generate_imx_srk_table")
    d.appendVarFlag("do_compile", "prefuncs", " barebox_habv4_srk_index_check")
    d.appendVarFlag("do_compile", "prefuncs", " barebox_optee_check")
}

python barebox_habv4_srk_index_check() {
    # Retrieve CONFIG_HABV4_SRK_INDEX from barebox config. Counter starts at 0.
    config_key_index, _ = bb.process.run(f"{d.getVar('S')}/scripts/config --file {d.getVar('B')}/.config --state HABV4_SRK_INDEX")
    config_key_index = config_key_index.strip()

    expected_key_index = str(int(d.getVar("BAREBOX_SRK_INDEX")) - 1)
    if config_key_index != expected_key_index:
        bb.fatal(f"Unexpected CONFIG_HABV4_SRK_INDEX, expected '{expected_key_index}', got '{config_key_index}'")
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

barebox_habv4_generate_imx_srk_table() {
    signing_prepare

    for i in 1 2 3 4; do
        signing_use_role "imx_habv4_srk${i}"
        extract-cert "${PKCS11_URI}" "${B}/srk${i}.der"
    done

    srktool --hab_ver 4 \
        --table "${B}/imx-srk-table.bin" \
        --efuses "${B}/imx-srk-fuse.bin" \
        --digest sha256 \
        --certs "${B}/srk1.der,${B}/srk2.der,${B}/srk3.der,${B}/srk4.der"
}
# Make sure no previous key material is accidentally used.
barebox_habv4_generate_imx_srk_table[cleandirs] = "${B}"

do_compile:prepend() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        signing_prepare

        # Prepare the installation of imx-srk-fuse.bin into barebox' environment
        # to simplify burning it
        mkdir -p "${WORKDIR}/env"
        cp "${B}/imx-srk-fuse.bin" "${WORKDIR}/env"

        export CONFIG_HABV4_TABLE_BIN="${B}/imx-srk-table.bin"

        signing_use_role imx_habv4_csf"${BAREBOX_SRK_INDEX}"
        export CONFIG_HABV4_CSF_CRT_PEM="${PKCS11_URI}"

        signing_use_role imx_habv4_img"${BAREBOX_SRK_INDEX}"
        export CONFIG_HABV4_IMG_CRT_PEM="${PKCS11_URI}"

        # Switch cst's backend to PKCS#11
        export CST_EXTRA_CMDLINE_OPTIONS="-b pkcs11"

        signing_use_role "${FITIMAGE_SIGNING_KEY_ROLE}"
        export PKCS11_FIT_URI="${PKCS11_URI}"
    fi
}

do_install:append() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        install -d ${D}/boot/
        install -m 0644 ${B}/imx-srk-fuse.bin ${D}/boot/
    fi
}

FILES:${PN} += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', '/boot/imx-srk-fuse.bin', '' , d)}"
