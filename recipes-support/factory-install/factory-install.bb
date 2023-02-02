LICENSE = "BSD-0-Clause"
LIC_FILES_CHKSUM = "file://factory-install.sh;beginline=3;endline=15;md5=3175507a15319e01b19e37279acea659"

SRC_URI = " \
    file://factory-install.sh \
    file://factory-install.service \
"

inherit systemd

S = "${WORKDIR}"

SYSTEMD_SERVICE:${PN} = "factory-install.service"

MEDIUM = "${@bb.utils.contains("TARGET_MEDIUM", "SD", "SD-card", "eMMC", d)}"
TGT_DEV = "/dev/${@bb.utils.contains("TARGET_MEDIUM", "SD", "mmcblk1", "mmcblk2", d)}"
SKELETON = "${@bb.utils.contains("TARGET_MEDIUM", "SD", "sd-skeleton-image", "emmc-skeleton-image", d)}"
WIC = "${SKELETON}-${MACHINE}.wic"
PART_NO = "${@bb.utils.contains("TARGET_MEDIUM", "SD", "3", "5", d)}"
BUNDLE = "${FACTORY_INSTALL_BUNDLE}-${MACHINE}.raucb"

# Ensure that all needed artifacts are available for inclusion
do_install[depends] += "${SKELETON}:do_image_complete"
do_install[depends] += "${FACTORY_INSTALL_BUNDLE}:do_deploy"
do_install[depends] += "virtual/bootloader:do_deploy"

RDEPENDS:${PN} = " \
    bash \
    bmap-tools \
    util-linux-blkdiscard \
    procps \
    pbzip2 \
    rauc \
    parted \
    splash-factory-install-success \
    splash-factory-install-failure \
    skovsetup \
"

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/factory-install.sh ${D}${bindir}
    sed --expression=s,@MEDIUM@,${MEDIUM}, \
        --expression=s,@TGT_DEV@,${TGT_DEV}, \
        --expression=s,@WIC@,${WIC}, \
        --expression=s,@DATADIR@,${datadir}/factory-install/, \
        --expression=s,@PART_NO@,${PART_NO}, \
        --expression=s,@BUNDLE@,${BUNDLE}, \
        --expression=s,@BAREBOX_IMAGE@,${BAREBOX_IMAGE}, \
        --in-place ${D}${bindir}/factory-install.sh

    install -d ${D}${datadir}/factory-install
    install -m 0644 ${DEPLOY_DIR_IMAGE}/${BAREBOX_IMAGE}    ${D}${datadir}/factory-install
    install -m 0644 ${DEPLOY_DIR_IMAGE}/${WIC}.bz2          ${D}${datadir}/factory-install
    install -m 0644 ${DEPLOY_DIR_IMAGE}/${WIC}.bmap         ${D}${datadir}/factory-install
    install -m 0644 ${DEPLOY_DIR_IMAGE}/${BUNDLE}           ${D}${datadir}/factory-install

    install -d ${D}${systemd_unitdir}/system
    install -m 0644 ${WORKDIR}/factory-install.service ${D}${systemd_unitdir}/system
}

FILES:${PN} = " \
    ${bindir}/factory-install.sh \
    ${datadir}/factory-install \
    ${systemd_unitdir}/system \
"
