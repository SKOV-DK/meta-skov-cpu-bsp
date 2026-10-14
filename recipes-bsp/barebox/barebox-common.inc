HOMEPAGE = "https://barebox.org/"
SECTION = "bootloaders"

LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"

COMPATIBLE_MACHINE = "imx6-cpu|imx8-cpu|imx8s-cpu"

PV = "${UMPF_BASE}"
SRC_URI = "https://barebox.org/download/barebox-${PV}.tar.bz2"
SRC_URI[sha256sum] = "491b504c8a79b5a4e30c419b824916b7329bad8abfe34987ba066bafa1fbcfc5"

# Maintained by Pengutronix
require files/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require files/patches-skov/series.inc
