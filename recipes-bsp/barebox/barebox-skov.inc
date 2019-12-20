require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

require files/patches/series.inc
require files/${MACHINE}/env/env.inc

# for barebox >= v2019.04.0 (commit 0bb285926777)
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"

DEPENDS += "coreutils-native"

SRC_URI[md5sum] = "2d25158ccffaa843c9e4943bbe820ce2"
SRC_URI[sha256sum] = "fb77afc5c1a9783b8e1a9bb6c617973f5c0ed4c6f8e079f96cb7e7e0818a7a90"
