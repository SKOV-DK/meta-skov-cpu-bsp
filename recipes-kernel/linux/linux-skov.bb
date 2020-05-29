inherit kernel

SECTION = "kernel"

KERNEL_CONFIG_COMMAND = "oe_runmake_call -C ${S} CC="${KERNEL_CC}" O=${B} olddefconfig || oe_runmake -C ${S} O=${B} CC="${KERNEL_CC}" oldnoconfig"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "5.4.43"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v5.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig \
"

require linux-skov/patches/series.inc

SRC_URI[md5sum] = "5bfc6716f00841486f82d54f0b0d5606"
SRC_URI[sha256sum] = "2667b90a42d42557aca9e3d37bba1b4e71809b9523958e6870ada311c4790744"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""
