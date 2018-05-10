inherit kernel
require recipes-kernel/linux/linux-dtb.inc

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.9.99"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

require linux-skov/${MACHINE}/patches/series.inc

SRC_URI[md5sum] = "aecc1118040df0c18dbca9f1f163ef84"
SRC_URI[sha256sum] = "3dc3eb8c918bca444c8e6c061d534b1a8a5ac60a5b5d7065141f7b8e204213df"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""

