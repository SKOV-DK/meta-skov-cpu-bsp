inherit kernel

SECTION = "kernel"

KERNEL_CONFIG_COMMAND = "oe_runmake_call -C ${S} CC="${KERNEL_CC}" O=${B} olddefconfig || oe_runmake -C ${S} O=${B} CC="${KERNEL_CC}" oldnoconfig"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"
DEPENDS += "nativesdk-flex nativesdk-lzop lzop-native"
RDEPENDS:${PN} = "flex lzop"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "6.6-rc5"

SRC_URI = " \
    https://git.kernel.org/torvalds/t/linux-${LINUX_VERSION}.tar.gz \
    file://defconfig \
"

require linux-skov/patches/series.inc
SRC_URI[sha256sum] = "76ba46811ee81567ce7db778d92d5e5cce905b8d847d8508365265a0358ffcac"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu|imx8eval|imx8-cpu"

# do not install kernel images to the rootfs
RDEPENDS:${KERNEL_PACKAGE_NAME}-base = ""
