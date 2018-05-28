inherit kernel

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.17-rc5"

SRC_URI = "https://git.kernel.org/torvalds/t/linux-${LINUX_VERSION}.tar.gz"
SRC_URI += "file://defconfig"

require linux-skov/${MACHINE}/patches/series.inc

SRC_URI[md5sum] = "c2dbbd686d2e8ea1ea5cbcefaace3dd1"
SRC_URI[sha256sum] = "b38757939201684a8ed86697b889049472b619d45569058780049865911e1dce"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""
