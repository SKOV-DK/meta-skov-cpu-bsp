inherit kernel

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.19.8"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

require linux-skov/patches/series.inc

SRC_URI[md5sum] = "52f552cea1863c928cb8b9dd09cdaf29"
SRC_URI[sha256sum] = "d540d066f307f13f0cfe7e097373cd1af2cc4866b5e36a503775b4e69167e171"

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu|arm9-cpu"

# do not install kernel images to the rootfs
RDEPENDS_${KERNEL_PACKAGE_NAME}-base = ""
