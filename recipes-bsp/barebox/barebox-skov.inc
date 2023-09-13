require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[sha256sum] = "3f2f1e3b28dd35d49c2b08cd194df3910c1e322a8372574273c073ca6ddafe7e"
