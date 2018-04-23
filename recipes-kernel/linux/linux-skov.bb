inherit kernel

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.16.4"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

require linux-skov/${MACHINE}/patches/series.inc

SRC_URI[md5sum] = "4f8469f8d10bcf7876edf7cd708d5790"
SRC_URI[sha256sum] = "9ab56da21230da8d9455aaf108f0e9c95fa9213bc2bd5d3b9aceaf1dea26896c"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""
