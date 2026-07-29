SUMMARY = "Barebox - a bootloader that inherits the best of U-Boot and the Linux kernel"
HOMEPAGE = "http://www.barebox.org/"
SECTION = "bootloaders"

inherit kernel-arch deploy cml1 pkgconfig

LICENSE ?= "GPL-2.0-only"

PROVIDES += "virtual/bootloader"

PACKAGE_ARCH = "${MACHINE_ARCH}"

DEPENDS = "libusb1-native lzop-native bison-native flex-native"

PACKAGES += "${PN}-bareboxenv ${PN}-bareboxcrc32 ${PN}-kernel-install \
         ${PN}-bareboximd"

SRC_URI = "http://barebox.org/download/barebox-${PV}.tar.bz2"

S = "${WORKDIR}/barebox-${PV}"
B = "${WORKDIR}/build"

BAREBOX_CONFIG ?= ""

def find_cfgs(d):
    sources=src_patches(d, True)
    sources_list=[]
    for s in sources:
        if s.endswith('.cfg'):
            sources_list.append(s)

    return sources_list

def get_layer_rev(path):
    try:
        rev, _ = bb.process.run("git describe --match='' --always --dirty --broken", cwd=path)
    except bb.process.ExecutionError:
        rev = ""
    return rev.strip()

BAREBOX_BUILDSYSTEM_VERSION ??= "${@get_layer_rev(os.path.dirname(d.getVar('FILE')))}"

EXTRA_OEMAKE = " \
  CROSS_COMPILE=${TARGET_PREFIX} -C ${S} O=${B} \
  BUILDSYSTEM_VERSION=${BAREBOX_BUILDSYSTEM_VERSION} \
  CONFIG_EXTRA_FIRMWARE_DIR=${BAREBOX_FIRMWARE_DIR} \
"

do_configure() {
	if [ -e ${WORKDIR}/defconfig ]; then
		cp ${WORKDIR}/defconfig ${B}/.config
	else
		if [ -n "${BAREBOX_CONFIG}" ]; then
			oe_runmake ${BAREBOX_CONFIG}
		else
			bbfatal "No defconfig given. Either add file 'file://defconfig' to SRC_URI or set BAREBOX_CONFIG"
		fi
	fi

	${S}/scripts/kconfig/merge_config.sh -m .config ${@" ".join(find_cfgs(d))}
	cml1_do_configure
}

BAREBOX_FIRMWARE_DIR[doc] = "Overwrite barebox' firmware blobs search directory (CONFIG_EXTRA_FIRMWARE_DIR) with this path, default ${B}/firmware"
BAREBOX_FIRMWARE_DIR ??= "${B}/firmware"

do_compile () {
	# If there is an 'env' directory, append its content
	# to the compiled environment
	if [ -d ${WORKDIR}/env/ ]; then \
		mkdir -p ${S}/.yocto-defaultenv
		cp -r ${WORKDIR}/env/* ${S}/.yocto-defaultenv/; \
		grep -q .yocto-defaultenv ${B}/.config || \
	        sed -i -e "s,^\(CONFIG_DEFAULT_ENVIRONMENT_PATH=.*\)\"$,\1 .yocto-defaultenv\"," \
		                ${B}/.config; \

	fi

	# Barebox uses pkg-config only for building native tools
	export PKG_CONFIG_LIBDIR="${STAGING_DIR_NATIVE}${libdir}/pkgconfig:${STAGING_DIR_NATIVE}/usr/share/pkgconfig"
	export PKG_CONFIG_SYSROOT_DIR=
	export PKG_CONFIG_PATH="${STAGING_DIR_NATIVE}"

	export userccflags="${TARGET_LDFLAGS}${HOST_CC_ARCH}${TOOLCHAIN_OPTIONS}"
	unset LDFLAGS
	unset CFLAGS
	unset CPPFLAGS
	unset CXXFLAGS
	unset MACHINE

	oe_runmake
}

do_install() {
	if grep "CONFIG_BAREBOXENV_TARGET=y" ${B}/.config; then
		install -d ${D}${bindir}
		install -m 0755 ${B}/scripts/bareboxenv-target ${D}${bindir}/bareboxenv
	fi
	if grep "CONFIG_BAREBOXCRC32_TARGET=y" ${B}/.config; then
		install -d ${D}${bindir}
		install -m 0755 ${B}/scripts/bareboxcrc32-target ${D}${bindir}/bareboxcrc32
	fi
	if grep "CONFIG_KERNEL_INSTALL_TARGET=y" ${B}/.config; then
		install -d ${D}${bindir}
		install -m 0755 ${B}/scripts/kernel-install-target ${D}${bindir}/kernel-install
	fi
	if grep "CONFIG_IMD_TARGET=y" ${B}/.config; then
		install -d ${D}${bindir}
		install -m 0755 ${B}/scripts/bareboximd-target ${D}${bindir}/bareboximd
	fi
}

# Suffix that allows to create different barebox images in one BSP
BAREBOX_IMAGE_SUFFIX ?= ""
# This allows a machine.conf to specify the required images to install instead
# of installing all found images
BAREBOX_IMAGES ??= "*.img"
BAREBOX_IMAGES_TO_DEPLOY = "${@' '.join('${B}/images/%s' % i for i in d.getVar('BAREBOX_IMAGES').split())}"

do_deploy[cleandirs] = "${DEPLOYDIR}"
do_deploy[vardepsexclude] = "DATETIME"
do_deploy () {
	install -d ${DEPLOYDIR}
	if [ -e ${B}/barebox-flash-image ]; then
		install -m 644 -t ${DEPLOYDIR}/ ${B}/barebox-flash-image
	fi
	if [ -e ${B}/barebox.efi ]; then
		install -m 644 -t ${DEPLOYDIR}/ ${B}/barebox.efi
	fi
	for IMAGE in ${BAREBOX_IMAGES_TO_DEPLOY}; do
		if [ -e ${IMAGE} ]; then
			BAREBOX_IMG_BASENAME=$(basename ${IMAGE} .img)${BAREBOX_IMAGE_SUFFIX}
			install -m 644 -T ${IMAGE} ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}-${DATETIME}.img
			ln -sf ${BAREBOX_IMG_BASENAME}-${DATETIME}.img ${DEPLOYDIR}/${BAREBOX_IMG_BASENAME}.img
		else
			# Throw an error if the user specified image(s) can't be installed
			[ "${BAREBOX_IMAGES}" != "*.img" ] && bberror "Image ${IMAGE} not found" || true
		fi
	done
}

FILES:${PN} = ""
FILES:${PN}-bareboxenv = "${bindir}/bareboxenv"
FILES:${PN}-bareboxcrc32 = "${bindir}/bareboxcrc32"
FILES:${PN}-kernel-install = "${bindir}/kernel-install"
FILES:${PN}-bareboximd = "${bindir}/bareboximd"

addtask deploy before do_build after do_compile

COMPATIBLE_MACHINE = "imx6-cpu|imx8-cpu|imx8s-cpu"

SRC_URI += "file://defconfig"

# Maintained by Pengutronix
require files/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require files/patches-skov/series.inc
require files/${MACHINE}/env/env.inc

PV = "${UMPF_BASE}"
DEPENDS += "coreutils-native lz4-native"

LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"
SRC_URI[sha256sum] = "521b427efe4d5199641fd6440ed77226fed3ba7088ee2f6361b510187f700f09"

# Allow autoboot_timeout adjustment for automation from local.conf or
# environment via BAREBOX_AUTOBOOT_TIMEOUT
do_compile:prepend () {
	if [ -n "${BAREBOX_AUTOBOOT_TIMEOUT}" ]; then
		mkdir -p ${WORKDIR}/env/nv
		printf "${BAREBOX_AUTOBOOT_TIMEOUT}\n" > ${WORKDIR}/env/nv/autoboot_timeout
	fi
}

BAREBOX_ENV_DIR[doc] = "Overlay the barebox built-in environment with the environment provided by the BSP if specified."
BAREBOX_ENV_DIR = "${B}"

BAREBOX_FIRMWARE_DEP = ""
BAREBOX_FIRMWARE_DEP:mx8m-generic-bsp = "trusted-firmware-a:do_deploy imx-boot-firmware-files:do_deploy"
BAREBOX_FIRMWARE_DEP:append:imx8s-cpu = " optee-os:do_deploy"

do_compile[depends] += "${BAREBOX_FIRMWARE_DEP}"

BAREBOX_TFA_BIN:imx8-cpu = "imx8mp-bl31.bin"
BAREBOX_TFA_BIN:imx8s-cpu = "imx8mp-bl31.bin-optee"

do_compile:prepend:mx8m-generic-bsp() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        ## ---- Copy runtime Firmware (BL31): TF-A ----
        cp -L ${DEPLOY_DIR_IMAGE}/${BAREBOX_TFA_BIN} ${BAREBOX_FIRMWARE_DIR}

        # copy imx-firmware
        for ddr_firmware in ${DDR_FIRMWARE_NAME}; do
                cp ${DEPLOY_DIR_IMAGE}/${ddr_firmware} ${BAREBOX_FIRMWARE_DIR}
        done
}

do_compile:prepend:imx8s-cpu() {
        mkdir -p ${BAREBOX_FIRMWARE_DIR}

        ## ---- Copy secure OS (BL32): OP-TEE ----
        cp ${DEPLOY_DIR_IMAGE}/optee/tee.bin ${BAREBOX_FIRMWARE_DIR}/imx8mp-bl32.bin
}

inherit barebox-habv4

# Remember to keep the value of barebox' CONFIG_CRYPTO_PUBLIC_KEYS in sync!
FITIMAGE_SIGNING_KEY_ROLE ?= "fit"

DEPENDS += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', ' \
                   virtual/fit-signing \
                   openssl-native \
                   ', '' , d)}"

export HOST_EXTRACFLAGS

python __anonymous() {
    if not bb.utils.contains("MACHINE_FEATURES", "habv4", True, False, d):
        return

    # Add OP-TEE sanity check as prefunc.
    d.appendVarFlag("do_compile", "prefuncs", " barebox_optee_check")
}

python barebox_optee_check() {
    # Retrieve CONFIG_OPTEE_SIZE & CONFIG_OPTEE_SHM_SIZE from barebox config.
    config_optee_size, _ = bb.process.run(f"{d.getVar('S')}/scripts/config --file {d.getVar('B')}/.config --state OPTEE_SIZE")
    config_optee_size = int(config_optee_size, base=16)
    config_optee_shm_size, _ = bb.process.run(f"{d.getVar('S')}/scripts/config --file {d.getVar('B')}/.config --state OPTEE_SHM_SIZE")
    config_optee_shm_size = int(config_optee_shm_size, base=16)

    expected_optee_shm_size = int(d.getVar("OPTEE_SHMEM_SIZE"), base=16)
    expected_optee_size = int(d.getVar("OPTEE_CORE_SIZE"), base=16) + expected_optee_shm_size

    if config_optee_size != expected_optee_size:
        bb.fatal(f"Unexpected CONFIG_OPTEE_SIZE, expected '{hex(expected_optee_size)}', got '{hex(config_optee_size)}'")
    if config_optee_shm_size != expected_optee_shm_size:
        bb.fatal(f"Unexpected CONFIG_OPTEE_SHM_SIZE, expected '{hex(expected_optee_shm_size)}', got '{hex(config_optee_shm_size)}'")
}

do_compile:prepend() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        signing_prepare

        # Prepare the installation of imx-srk-fuse.bin into barebox' environment
        # to simplify burning it
        mkdir -p "${WORKDIR}/env"
        cp "${BAREBOX_ENV_DIR}/imx-srk-fuse.bin" "${WORKDIR}/env"

        signing_use_role "${FITIMAGE_SIGNING_KEY_ROLE}"
        export PKCS11_FIT_URI="${PKCS11_URI}"
    fi
}

do_install:append() {
    if ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'true', 'false', d)}; then
        install -d ${D}/boot/
        install -m 0644 ${BAREBOX_ENV_DIR}/imx-srk-fuse.bin ${D}/boot/
    fi
}

FILES:${PN} += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', '/boot/imx-srk-fuse.bin', '' , d)}"
