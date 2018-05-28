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
LIC_FILES_CHKSUM = "file://main.c;endline=27;md5=a2a70db58191379e2550cbed95449fbd"
DEPENDS += "bc-native"

inherit cml1 deploy

EXTRA_OEMAKE = 'CROSS_COMPILE=${TARGET_PREFIX} CC="${TARGET_PREFIX}gcc ${TOOLCHAIN_OPTIONS}"'

# at91 bootstarp source code
SRC_URI = "https://github.com/linux4sam/at91bootstrap/archive/v${PV}.tar.gz;name=tarball"


# patches for at91bootstrap
require files/patches/series.inc

S = "${WORKDIR}/at91bootstrap-${PV}"
defconfig = "${S}/contrib/board/skov/arm9_cpu/arm9_cpu_defconfig"
REVISION = "v2"

do_configure() {
	if [ -e ${defconfig} ]; then
		cp ${defconfig} ${S}/.config
	else
		bbfatal "No defconfig given - not found in ${defconfig}"
	fi

	cml1_do_configure
}

do_compile() {
	unset CFLAGS CPPFLAGS LDFLAGS
	oe_runmake REVISION=${REVISION}
}

AT91BOOTSTRAP_BINARY = "arm9_cpu-flashboot-bareboxskovarm9cpu-${PV}-${REVISION}.bin"

do_deploy () {
	install -d ${DEPLOYDIR}
	install ${S}/binaries/${AT91BOOTSTRAP_BINARY} ${DEPLOYDIR}/BOOT.BIN
}

addtask deploy after do_compile
