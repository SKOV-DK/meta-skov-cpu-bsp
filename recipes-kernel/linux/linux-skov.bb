inherit kernel
require recipes-kernel/linux/linux-dtb.inc

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.9.91"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

require linux-skov/${MACHINE}/patches/series.inc

SRC_URI[md5sum] = "cbf5ec8291d91484a7374126fe5dd26a"
SRC_URI[sha256sum] = "60caa752ec9fa1c426f6a2f37db3f268d0961b67a723b6443949112167b39832"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""

