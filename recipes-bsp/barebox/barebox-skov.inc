require recipes-bsp/barebox/barebox.inc

SRC_URI += "file://defconfig"

SRC_URI += "file://0001-script-introduce-SCRIPT_CC.patch"

require files/patches/series.inc

SRC_URI += "\
  file://env/nv/autoboot_timeout \
  file://env/nv/linux.bootargs.base \
  file://env/nv/boot.default \
  file://env/init/bootargs \
  "

PACKAGES += "${PN}-bareboxenv ${PN}-bareboxcrc32 ${PN}-kernel-install \
         ${PN}-bareboximd"

do_configure() {
	if [ -e ${WORKDIR}/defconfig ]; then
		cp ${WORKDIR}/defconfig ${S}/.config
	else
		bbwarn "No defconfig given"
	fi

	cml1_do_configure
}

do_compile () {
	# If there is an 'env' directory, append its content
	# to the compiled environment
	if [ -d ${WORKDIR}/env/ ]; then \
		mkdir -p ${S}/.yocto-defaultenv
		cp -r ${WORKDIR}/env/* ${S}/.yocto-defaultenv/; \
	        sed -i -e "s,^\(CONFIG_DEFAULT_ENVIRONMENT_PATH=.*\)\"$,\1 .yocto-defaultenv\"," \
		                ${B}/.config; \

	fi

	# Barebox uses pkg-config only for building native tools
	export PKG_CONFIG_LIBDIR="${STAGING_DIR_NATIVE}${libdir}/pkgconfig:${STAGING_DIR_NATIVE}/usr/share/pkgconfig"
	export PKG_CONFIG_SYSROOT_DIR=

	unset LDFLAGS
	unset CFLAGS
	unset CPPFLAGS
	unset CXXFLAGS
	unset MACHINE

	oe_runmake CC="${KERNEL_CC}" LD="${KERNEL_LD}" SCRIPT_CC="${CC}"
}

do_install() {
	install -d ${D}${bindir}
	if grep "CONFIG_BAREBOXENV_TARGET=y" ${B}/.config; then
		install -m 0755 ${B}/scripts/bareboxenv-target ${D}${bindir}
	fi
	if grep "CONFIG_BAREBOXCRC32_TARGET=y" ${B}/.config; then
		install -m 0755 ${B}/scripts/bareboxcrc32-target ${D}${bindir}
	fi
	if grep "CONFIG_KERNEL_INSTALL_TARGET=y" ${B}/.config; then
		install -m 0755 ${B}/scripts/kernel-install-target ${D}${bindir}
	fi
	if grep "CONFIG_IMD_TARGET=y" ${B}/.config; then
		install -m 0755 ${B}/scripts/bareboximd-target ${D}${bindir}
	fi
}


FILES_${PN} = ""
FILES_${PN}-bareboxenv = "${bindir}/bareboxenv-target"
FILES_${PN}-bareboxcrc32 = "${bindir}/bareboxcrc32-target"
FILES_${PN}-kernel-install-target = "${bindir}/kernel-install-target"
FILES_${PN}-bareboximd-target = "${bindir}/bareboximd-target"

COMPATIBLE_MACHINE = "imx6-cpu"

do_deploy[vardepsexclude] = "DATETIME"
