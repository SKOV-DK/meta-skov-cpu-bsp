require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[sha256sum] = "9f570d4ae089560bd6c17b2b7d21cdb6557ecb00612c77ecee72ac47575a6b74"
