inherit kernel
require recipes-kernel/linux/linux-dtb.inc

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.14.10"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI[md5sum] = "cfab8ee2ee4eb6600a1e7da33a2ff275"
SRC_URI[sha256sum] = "86baf1374ca003bdd9a43cae7f59cec02b455a6c38c3705aa46b2b68d91ed110"

SRC_URI += "file://defconfig"

require linux-at91/patches/series.inc

S = "${WORKDIR}/linux-${LINUX_VERSION}"

COMPATIBLE_MACHINE = "arm9-cpu"
UBOOT_ENTRYPOINT := "0x20008000"
KERNEL_EXTRA_ARGS += "LOADADDR=${UBOOT_ENTRYPOINT}"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""
