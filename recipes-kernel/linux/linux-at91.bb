inherit kernel

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "3.2.86"

SRC_URI = "https://cdn.kernel.org/pub/linux/kernel/v3.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI[md5sum] = "a7c1b6b6a434b08452d0e63ab5f2ddad"
SRC_URI[sha256sum] = "c5a4494cdf27421d8cf05039937f7a0410ec83b649730d46a01beef6257c72d9"

SRC_URI += "file://defconfig"

require linux-at91/patches/series.inc


S = "${WORKDIR}/linux-${LINUX_VERSION}"

COMPATIBLE_MACHINE = "arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""

