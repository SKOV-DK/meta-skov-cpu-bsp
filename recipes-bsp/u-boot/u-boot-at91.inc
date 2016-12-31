DESCRIPTION = "U-Boot - the Universal Boot Loader"
HOMEPAGE = "http://www.denx.de/wiki/U-Boot/WebHome"
SECTION = "bootloaders"
PROVIDES = "virtual/bootloader"

inherit deploy

EXTRA_OEMAKE = 'CROSS_COMPILE=${TARGET_PREFIX} CC="${TARGET_PREFIX}gcc ${TOOLCHAIN_OPTIONS}"'

# Allow setting an additional version string that will be picked up by the
# u-boot build system and appended to the u-boot version.  If the .scmversion
# file already exists it will not be overwritten.
PR = "r0"

S = "${WORKDIR}/u-boot-${PV}"

require files/patches/series.inc

do_compile () {
	if [ ! -e ${S}/.scmversion ]
	then
		echo "-${PR}" > ${S}/.scmversion
	fi

        unset CFLAGS CPPFLAGS LDFLAGS
	oe_runmake arm9-cpu
}

do_deploy() {
	install -d ${DEPLOYDIR}
        install ${S}/u-boot.bin ${DEPLOYDIR}/u-boot.bin
}

addtask deploy after do_compile
