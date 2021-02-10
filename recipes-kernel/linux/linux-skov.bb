inherit kernel

SECTION = "kernel"

KERNEL_CONFIG_COMMAND = "oe_runmake_call -C ${S} CC="${KERNEL_CC}" O=${B} olddefconfig || oe_runmake -C ${S} O=${B} CC="${KERNEL_CC}" oldnoconfig"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "5.4.96"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v5.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig \
"

require linux-skov/patches/series.inc

SRC_URI[md5sum] = "d25a92879dd191f38cf1405fd6a90b58"
SRC_URI[sha256sum] = "f728de695ec5eb17efa15acaecc48fcd7a6c4a912b51704ed137cccf93f9f5e0"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""
