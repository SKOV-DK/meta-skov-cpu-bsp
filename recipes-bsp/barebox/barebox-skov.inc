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

DEPENDS:append:mx8m-generic-bsp = "\
        imx-boot-firmware-files \
        trusted-firmware-a \
"

BAREBOX_FIRMWARE_DEP = ""
BAREBOX_FIRMWARE_DEP:mx8m-generic-bsp = "imx-boot-firmware-files:do_deploy"

do_configure[depends] += "${BAREBOX_FIRMWARE_DEP}"

BAREBOX_FIRMWARE_DIR:mx8m-generic-bsp = "${S}/firmware"

do_compile:prepend:mx8m-generic-bsp() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        # copy tf-a
        cp ${STAGING_DIR_TARGET}/firmware/bl31-imx8mp.bin ${BAREBOX_FIRMWARE_DIR}/imx8mp-bl31.bin

        # copy imx-firmware
        for ddr_firmware in ${DDR_FIRMWARE_NAME}; do
                cp ${DEPLOY_DIR_IMAGE}/${ddr_firmware} ${BAREBOX_FIRMWARE_DIR}
        done
}

inherit ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'signing', '' , d)}

BAREBOX_HABV4_SIGNING_KEY_ROLE[doc] = "The i.MX HABv4 key role to use for signing barebox. Must be one of 'imx_habv4_srk{1,2,3,4}'"
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
        bb.fatal("Unexpected BAREBOX_HABV4_SIGNING_KEY_ROLE, expected 'imx_habv4_srk{1,2,3,4}', got '%s'" % key_role)
    key_index = key_role[-1]

    # set which SRK the ROM code should validate against
    d.setVar("BAREBOX_SRK_INDEX", str(int(key_index) - 1))
    d.setVar("BAREBOX_SRK_INDEX_CSF_IMG", key_index)

    # Add SRK table generation as prefunc
    d.appendVarFlag("do_configure", "prefuncs", " barebox_habv4_generate_imx_srk_table")
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
        # kconfig helper
        config="${S}/scripts/config --file ${B}/.config"

        signing_prepare

        # Prepare the installation of imx-srk-fuse.bin into barebox' environment
        # to simplify burning it
        mkdir -p "${WORKDIR}/env"
        cp "${B}/imx-srk-fuse.bin" "${WORKDIR}/env"

        export CONFIG_HABV4_TABLE_BIN="${B}/imx-srk-table.bin"

        signing_use_role imx_habv4_csf"${BAREBOX_SRK_INDEX_CSF_IMG}"
        export CONFIG_HABV4_CSF_CRT_PEM="${PKCS11_URI}"

        signing_use_role imx_habv4_img"${BAREBOX_SRK_INDEX_CSF_IMG}"
        export CONFIG_HABV4_IMG_CRT_PEM="${PKCS11_URI}"

        # Switch cst's backend to PKCS#11
        export CST_EXTRA_CMDLINE_OPTIONS="-b pkcs11"

        signing_use_role "${FITIMAGE_SIGNING_KEY_ROLE}"
        export PKCS11_FIT_URI="${PKCS11_URI}"

        # Adjust barebox' configuration by setting the SRK index.
        ${config} --set-val HABV4_SRK_INDEX  ${BAREBOX_SRK_INDEX}
    fi
}

do_install:append() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        install -d ${D}/boot/
        install -m 0644 ${B}/imx-srk-fuse.bin ${D}/boot/
    fi
}

FILES:${PN} += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', '/boot/imx-srk-fuse.bin', '' , d)}"
