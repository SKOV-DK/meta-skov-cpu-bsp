require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[md5sum] = "eddcd7bc7e9d3836f0d68e3abce210ec"
SRC_URI[sha256sum] = "6b29f2f23d1b0c279f2ee680dcf29900c3d85367fbb107038f54b577d8a616dc"
