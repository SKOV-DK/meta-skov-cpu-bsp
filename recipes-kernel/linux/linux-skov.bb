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
SRC_URI[sha256sum] = "28207ec52bbeaa3507010aeff944f442f7d9f22b286b79caf45ec6df1b24f409"
FETCHCMD_wget = "/usr/bin/env wget -t 2 -T 300 --passive-ftp"

SRC_URI += "file://defconfig"

require linux-skov/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require linux-skov/patches-skov/series.inc
include recipes-kernel/linux/cve-exclusion.inc

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|imx8-cpu|imx8s-cpu"

# do not install kernel images to the rootfs
RDEPENDS:${KERNEL_PACKAGE_NAME}-base = ""

KERNEL_IMAGETYPES:append:imx8-cpu = " Image.gz"
KERNEL_IMAGETYPES:append:imx8s-cpu = " Image.gz"
