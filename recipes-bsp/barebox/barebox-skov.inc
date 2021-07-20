require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[md5sum] = "df3651a395e1420c2818dd464c63069d"
SRC_URI[sha256sum] = "ce5d9d8953a2e3c21f1e6a72b1499962170bb41c4750ce8129ef44bf7860992d"
