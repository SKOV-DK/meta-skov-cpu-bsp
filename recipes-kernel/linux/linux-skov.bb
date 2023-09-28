inherit kernel

SECTION = "kernel"

KERNEL_CONFIG_COMMAND = "oe_runmake_call -C ${S} CC="${KERNEL_CC}" O=${B} olddefconfig || oe_runmake -C ${S} O=${B} CC="${KERNEL_CC}" oldnoconfig"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"
DEPENDS += "nativesdk-flex"
RDEPENDS_${PN} = "flex"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "6.6-rc3"

SRC_URI = " \
    https://git.kernel.org/torvalds/t/linux-${LINUX_VERSION}.tar.gz \
    file://defconfig \
"

require linux-skov/patches/series.inc
SRC_URI[sha256sum] = "0044724ea1991ff1592f5959ea113aa6a9fcd3ac415d5c48e65e592dae864f91"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu|imx8eval|imx8-cpu"

# do not install kernel images to the rootfs
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""
