require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[sha256sum] = "9d20965dda250c2ca5051898d918917ea61f9f0066c7933830ddd4de5e3d2e4f"
