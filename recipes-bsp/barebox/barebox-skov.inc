require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[sha256sum] = "1b31c1bf52f73f8a5f4f82169765ecd5b1bccc8abe9221537a0716004983bdb3"
