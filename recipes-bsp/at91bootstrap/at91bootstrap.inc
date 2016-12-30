SUMMARY = "Initial bootstrap for AT91 ARM MPUs"
DESCRIPTION = " \
		at91bootstrap is the second-level bootloader for Atmel AT91  \
		SoCs. It provides a set of algorithms to manage the hardware \
		initialization and to download the main application (or a    \
		third-level bootloader) from specified boot media to         \
		main memory and start it.                                    \
	      "
AUTHOR = "Atmel Corporation"
HOMEPAGE = "http://www.at91.com/linux4sam/bin/view/Linux4SAM/AT91Bootstrap"
BUGTRACKER = "https://github.com/linux4sam/at91bootstrap/issues"
SECTION = "bootloaders"
LICENSE = "ATMEL"
LIC_FILES_CHKSUM = "file://main.c;endline=27;md5=42f86d2f6fd17d1221c5c651b487a07f"

PACKAGE_ARCH = "${MACHINE_ARCH}"
#COMPATIBLE_MACHINE = "arm9-cpuat91sam9m10g45ek"

inherit cml1 deploy

EXTRA_OEMAKE = 'CROSS_COMPILE=${TARGET_PREFIX} CC="${TARGET_PREFIX}gcc ${TOOLCHAIN_OPTIONS}"'

# at91 bootstarp source code
SRC_URI = "https://github.com/linux4sam/at91bootstrap/archive/v${PV}.tar.gz;name=tarball"

# patches for at9bootstrap
SRC_URI += "file://patches/0001-at91-skov.patch"
SRC_URI += "file://patches/skov-version.patch"

# configuration
SRC_URI += "file://defconfig"

do_configure() {
	if [ -e ${WORKDIR}/defconfig ]; then
		cp ${WORKDIR}/defconfig ${WORKDIR}/.config
	else
		
		bbfatal "No defconfig given - not found in ${WORKDIR}"
	fi


	cml1_do_configure
}

do_compile() {
	unset CFLAGS CPPFLAGS LDFLAGS
	oe_runmake
}

do_deploy () {
	#TODO
}
