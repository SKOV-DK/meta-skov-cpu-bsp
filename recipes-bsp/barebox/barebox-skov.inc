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
        imx-boot-firmware-files \
        trusted-firmware-a \
"

DEPENDS:append:imx8s-cpu = "\
        imx-boot-firmware-files \
        trusted-firmware-a \
"

BAREBOX_FIRMWARE_DEP = ""
BAREBOX_FIRMWARE_DEP:imx8-cpu = "imx-boot-firmware-files:do_deploy"
BAREBOX_FIRMWARE_DEP:imx8s-cpu = "imx-boot-firmware-files:do_deploy"

do_configure[depends] += "${BAREBOX_FIRMWARE_DEP}"

BAREBOX_FIRMWARE_DIR:imx8-cpu = "${S}/firmware"
BAREBOX_FIRMWARE_DIR:imx8s-cpu = "${S}/firmware"

do_compile:prepend:imx8-cpu() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        # copy tf-a
        cp ${STAGING_DIR_TARGET}/firmware/bl31-imx8mp.bin ${BAREBOX_FIRMWARE_DIR}/imx8mp-bl31.bin

        # copy imx-firmware
        for ddr_firmware in ${DDR_FIRMWARE_NAME}; do
                cp ${DEPLOY_DIR_IMAGE}/${ddr_firmware} ${BAREBOX_FIRMWARE_DIR}
        done
}

do_compile:prepend:imx8s-cpu() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        # copy tf-a
        cp ${STAGING_DIR_TARGET}/firmware/bl31-imx8mp.bin ${BAREBOX_FIRMWARE_DIR}/imx8mp-bl31.bin

        # copy imx-firmware
        for ddr_firmware in ${DDR_FIRMWARE_NAME}; do
                cp ${DEPLOY_DIR_IMAGE}/${ddr_firmware} ${BAREBOX_FIRMWARE_DIR}
        done
}

#inherit signing
inherit ${@'signing' if d.getVar('MACHINE') == 'imx8s-cpu' else ''}

BAREBOX_HABV4_SIGNING_KEY_ROLE[doc] = "The i.MX HABv4 key role to use for signing barebox. Must be one of 'imx_habv4_srk{1,2,3,4}'"
BAREBOX_HABV4_SIGNING_KEY_ROLE ?= "imx_habv4_srk1"

FITIMAGE_SIGNING_KEY_ROLE ?= "fit"

DEPENDS:append:imx8s-cpu = "\
        virtual/imx-hab-signing \
        virtual/fit-signing \
        extract-cert-native \
        imx-cst-native \
        openssl-native \
        openssl \
"

export HOST_EXTRACFLAGS

python __anonymous() {
    key_role = d.getVar("BAREBOX_HABV4_SIGNING_KEY_ROLE")
    if key_role[:-1] != "imx_habv4_srk" or key_role[-1] not in "1234":
        bb.fatal("Unexpected BAREBOX_HABV4_SIGNING_KEY_ROLE, expected 'imx_habv4_srk{1,2,3,4}', got '%s'" % key_role)
    key_index = key_role[-1]

    # set which SRK the ROM code should validate against
    d.setVar("BAREBOX_SRK_INDEX", str(int(key_index) - 1))
    d.setVar("BAREBOX_SRK_INDEX_CSF_IMG", key_index)
}

# Citation from the sed info page [1]: To include a literal \, &, or newline in
# the final replacement, be sure to precede the desired \, &, or newline in the
# REPLACEMENT with a \.
#
# As PKCS#11-URIs potentially contain ampersands they need to be escaped
# accordingly.
#
# [1] https://www.gnu.org/software/sed/manual/sed.html#The-_0022s_0022-Command
escape_as_sed_replacement() {
        # The first three sed-statements read all input lines into sed's pattern
        # space (to be compatible with non-GNU sed-implementations they need to
        # be split into single '-e' options). The final s///-commands do the
        # real work and at first escape existing backslashes to not touch those
        # inserted by escaping ampersands or newlines.
        printf "%s" "$*" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\\/\\\\/g; s/&/\\&/g; s/\n/\\n/g'
}

# Enforce export of the function to run.do_compile
# (presumably at least required until Yocto's styhead release)
do_compile[vardeps] += "escape_as_sed_replacement"

do_compile:prepend:imx8s-cpu() {
        signing_prepare

        # ---- HAB bootloader signing ----
        for i in 1 2 3 4; do
            signing_use_role "imx_habv4_srk${i}"
            extract-cert "${PKCS11_URI}" "${B}/srk${i}.der"
        done

        srktool --hab_ver 4 \
            --table "${B}/imx-srk-table.bin" \
            --efuses "${B}/imx-srk-fuse.bin" \
            --digest sha256 \
            --certs "${B}/srk1.der,${B}/srk2.der,${B}/srk3.der,${B}/srk4.der"

        # Prepare the installation of imx-srk-fuse.bin into barebox' environment
        # to simplify burning it
        mkdir -p "${WORKDIR}/env"
        cp "${B}/imx-srk-fuse.bin" "${WORKDIR}/env"

        signing_use_role imx_habv4_csf"${BAREBOX_SRK_INDEX_CSF_IMG}"
        export CSF_URI="${PKCS11_URI}"

        signing_use_role imx_habv4_img"${BAREBOX_SRK_INDEX_CSF_IMG}"
        export IMG_URI="${PKCS11_URI}"

        # Switch cst's backend to PKCS#11
        export CST_EXTRA_CMDLINE_OPTIONS="-b pkcs11"

        signing_use_role "${FITIMAGE_SIGNING_KEY_ROLE}"
        FIT_URI="$(escape_as_sed_replacement "${PKCS11_URI}")"

        # Adjust barebox' configuration by setting the SRK index, SRK table and
        # CSF/IMG certificates. See the CST patch for the __ENV__ trick. We
        # can't use CONFIG_HAB_CERTS_ENV due to shell/gcc & PKCS#11-URI escaping
        # issues.
        sed -e "s,^\(CONFIG_HABV4_SRK_INDEX=\).*$,\1${BAREBOX_SRK_INDEX}," \
            -e "s,^\(CONFIG_HABV4_TABLE_BIN=\"\).*\"$,\1${B}/imx-srk-table.bin\"," \
            -e "s,^\(CONFIG_HABV4_CSF_CRT_PEM=\"\).*\"$,\1__ENV__CSF_URI\"," \
            -e "s,^\(CONFIG_HABV4_IMG_CRT_PEM=\"\).*\"$,\1__ENV__IMG_URI\"," \
            -e "s,^\(CONFIG_CRYPTO_PUBLIC_KEYS=\"\).*\"$,\1${FITIMAGE_SIGNING_KEY_ROLE}:${FIT_URI}\"," \
            -i ${B}/.config
}

do_install:append:imx8s-cpu() {
        install -d ${D}/boot/
        install -m 0644 ${B}/imx-srk-fuse.bin ${D}/boot/
}

IMX_SRK_FUSE_BIN = ""
IMX_SRK_FUSE_BIN:imx8s-cpu = "/boot/imx-srk-fuse.bin"
FILES:${PN} += "${IMX_SRK_FUSE_BIN}"
