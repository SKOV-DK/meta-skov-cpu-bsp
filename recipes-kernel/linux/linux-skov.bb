inherit kernel

SECTION = "kernel"

KERNEL_CONFIG_COMMAND = "oe_runmake_call -C ${S} CC="${KERNEL_CC}" O=${B} olddefconfig || oe_runmake -C ${S} O=${B} CC="${KERNEL_CC}" oldnoconfig"

LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"
DEPENDS += "nativesdk-flex nativesdk-lzop lzop-native"
RDEPENDS:${PN} = "flex lzop"

PR = "r0"
PV = "${LINUX_VERSION}"

#SRC_URI = "https://git.kernel.org/torvalds/t/linux-${LINUX_VERSION}.tar.gz"
SRC_URI = "https://www.kernel.org/pub/linux/kernel/v6.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI[sha256sum] = "24fa01fb989c7a3e28453f117799168713766e119c5381dac30115f18f268149"
FETCHCMD_wget = "/usr/bin/env wget -t 2 -T 300 --passive-ftp"

SRC_URI += "file://defconfig"

require linux-skov/patches/series.inc

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu|imx8eval|imx8-cpu"

# do not install kernel images to the rootfs
RDEPENDS:${KERNEL_PACKAGE_NAME}-base = ""
