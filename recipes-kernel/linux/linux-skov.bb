inherit kernel

SECTION = "kernel"

KERNEL_CONFIG_COMMAND = "oe_runmake_call -C ${S} CC="${KERNEL_CC}" O=${B} olddefconfig || oe_runmake -C ${S} O=${B} CC="${KERNEL_CC}" oldnoconfig"

LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"
DEPENDS += "nativesdk-flex nativesdk-lzop lzop-native"
RDEPENDS:${PN} = "flex lzop"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "6.6"

SRC_URI = " \
    https://www.kernel.org/pub/linux/kernel/v6.x/linux-${LINUX_VERSION}.tar.xz \
    file://defconfig \
"

require linux-skov/patches/series.inc
SRC_URI[sha256sum] = "d926a06c63dd8ac7df3f86ee1ffc2ce2a3b81a2d168484e76b5b389aba8e56d0"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu|imx8eval|imx8-cpu"

# do not install kernel images to the rootfs
RDEPENDS:${KERNEL_PACKAGE_NAME}-base = ""
