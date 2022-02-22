require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[md5sum] = "07d55c37401642c24047ef4094b8e0e2"
SRC_URI[sha256sum] = "8f0ebb7492da83770dc56fe742c00d7b81f14caf562b9f97ff9953064aab609b"
