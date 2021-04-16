require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[md5sum] = "466e436389ab1c771ddfffb5ee16e7b8"
SRC_URI[sha256sum] = "71958a35291ad445224ec2c3b66fa74b4c1abd04f4cb7d25a1f044ccb342e27b"
