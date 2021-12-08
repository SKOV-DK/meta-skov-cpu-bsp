require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[md5sum] = "e7f7629701e9e8b9566b6799b422de5e"
SRC_URI[sha256sum] = "34fbd33e17d052a7d8d64918183170675008768fe7618c31c16b9f5c92803c6a"
