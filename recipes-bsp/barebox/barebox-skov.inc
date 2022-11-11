require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[sha256sum] = "d026885b8b541def59b44d691b8c52ff4d19c61ba5d0de96afee9b93a19ecffe"