LICENSE = "0BSD"
LIC_FILES_CHKSUM = "file://factory-install.sh;beginline=3;endline=15;md5=3175507a15319e01b19e37279acea659"

SRC_URI = " \
    file://factory-install.sh \
    file://factory-install.service \
"

inherit systemd

S = "${WORKDIR}"

COMPATIBLE_MACHINE = "imx8-cpu|imx8s-cpu"

SYSTEMD_SERVICE:${PN} = "factory-install.service"

MEDIUM = "eMMC"
TGT_MMC = "mmcblk2"
PART_NO ?= ""
PART_NO:imx8-cpu = "6"
PART_NO:imx8s-cpu = "9"
RESIZE = "true"
RESIZE:imx8s-cpu = "false"

WIC_IMAGE:imx8-cpu = "${FACTORY_INSTALL_IMAGE}"
WIC_IMAGE:imx8s-cpu = "${FACTORY_INSTALL_IMAGE}-secbootimg"

WIC = "${WIC_IMAGE}-${MACHINE}.rootfs.wic"

BAREBOX_OFFSET ?= "0"
BAREBOX_OFFSET = "${BAREBOX_PADDING_OFFSET}K"
BAREBOX_RENAME ?= "${BAREBOX_IMAGE}"
BAREBOX_RENAME = "${BAREBOX_PADDING_OFFSET}KiB-shaved-${BAREBOX_IMAGE}"

# Ensure that all needed artifacts are available for inclusion
do_compile[depends] += "${WIC_IMAGE}:do_image_complete"
do_compile[depends] += "virtual/bootloader:do_deploy"

DEPENDS = " \
    zstd \
"
RDEPENDS:${PN} = " \
    bash \
    mmc-utils \
    bmaptool \
    util-linux-blkdiscard \
    zstd \
    parted \
    e2fsprogs-resize2fs \
    splash-factory-install \
"

do_compile() {
    zstd -f -k -T0 -c ${ZSTD_COMPRESSION_LEVEL} ${DEPLOY_DIR_IMAGE}/${WIC} > ${B}/${WIC}.zst

    dd if=${DEPLOY_DIR_IMAGE}/${BAREBOX_IMAGE} of=${B}/${BAREBOX_RENAME} \
       iflag=skip_bytes skip=${BAREBOX_OFFSET}
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/factory-install.sh ${D}${bindir}
    sed --expression=s,@MEDIUM@,${MEDIUM}, \
        --expression=s,@TGT_MMC@,${TGT_MMC}, \
        --expression=s,@WIC@,${WIC}, \
        --expression=s,@BAREBOX_RENAME@,${BAREBOX_RENAME}, \
        --expression=s,@DATADIR@,${datadir}/factory-install/, \
        --expression=s,@PART_NO@,${PART_NO}, \
        --expression=s,@RESIZE@,${RESIZE}, \
        --in-place ${D}${bindir}/factory-install.sh

    install -d ${D}${datadir}/factory-install
    install -m 0644 ${B}/${WIC}.zst                         ${D}${datadir}/factory-install
    install -m 0644 ${DEPLOY_DIR_IMAGE}/${WIC}.bmap         ${D}${datadir}/factory-install
    install -m 0644 ${B}/${BAREBOX_RENAME}                  ${D}${datadir}/factory-install

    install -d ${D}${systemd_unitdir}/system
    install -m 0644 ${WORKDIR}/factory-install.service ${D}${systemd_unitdir}/system
}

FILES:${PN} = " \
    ${bindir}/factory-install.sh \
    ${datadir}/factory-install \
    ${systemd_unitdir}/system \
"
