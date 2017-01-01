inherit kernel

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "3.2.84"

SRC_URI = "https://cdn.kernel.org/pub/linux/kernel/v3.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI[md5sum] = "ae4e8ca4823e4c529478c4910a7d2afc"
SRC_URI[sha256sum] = "66e329b56487a88f07274a4fa8ec1dfdab8a3df5c3812dd03589d393941b1d47"

SRC_URI += "file://defconfig"

require linux-at91/patches/series.inc


S = "${WORKDIR}/linux-${LINUX_VERSION}"

COMPATIBLE_MACHINE = "arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""

