inherit kernel

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.17"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

require linux-skov/${MACHINE}/patches/series.inc

SRC_URI[md5sum] = "5bb13a03274b66b56c85b26682e407d7"
SRC_URI[sha256sum] = "9faa1dd896eaea961dc6e886697c0b3301277102e5bc976b2758f9a62d3ccd13"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""
