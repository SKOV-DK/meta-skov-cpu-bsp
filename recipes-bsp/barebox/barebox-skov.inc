require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

# Maintained by Pengutronix
require files/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require files/patches-skov/series.inc
require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native"

SRC_URI[sha256sum] = "c7c00f99dfe9d43b4619b34196ae1cd107136ea917c998ee0ab696c1e5b4edbf"

# Allow autoboot_timeout adjustment for automation from local.conf or
# environment via BAREBOX_AUTOBOOT_TIMEOUT
do_compile:prepend () {
	if [ -n "${BAREBOX_AUTOBOOT_TIMEOUT}" ]; then
		mkdir -p ${WORKDIR}/env/nv
		printf "${BAREBOX_AUTOBOOT_TIMEOUT}\n" > ${WORKDIR}/env/nv/autoboot_timeout
	fi
}
