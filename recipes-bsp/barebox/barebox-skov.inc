SUMMARY = "barebox is a bootloader designed for embedded systems. It runs on a variety of architectures including x86, ARM, MIPS, PowerPC and others."
DESCRIPTION = "barebox aims to be a versatile and flexible bootloader not only for booting embedded Linux systems, \
but also for initial hardware bringup and development. \
Users should feel right at home with a shell with UNIX-like virtual file system access to hardware, \
Linux kernel driver API for making driver porting easier, \
and a subset of the POSIX C library for writing more command-line utilities."

require barebox-common.inc
inherit kernel-arch deploy cml1 pkgconfig

LICENSE ?= "GPL-2.0-only"

PROVIDES += "virtual/bootloader"

PACKAGE_ARCH = "${MACHINE_ARCH}"

DEPENDS += "bison-native flex-native lz4-native"

S = "${WORKDIR}/barebox-${PV}"
B = "${WORKDIR}/build"
KBUILD_OUTPUT = "${B}"
OE_TERMINAL_EXPORTS += "KBUILD_OUTPUT"

require conf/image-uefi.conf

# For some platforms and configuration, the barebox build process will require
# additional host tools that can be activated/deactivated here.
PACKAGECONFIG ??= "openssl libusb fit"

PACKAGECONFIG[openssl] = ",,openssl-native"
PACKAGECONFIG[libusb] = ",,libusb1-native"
PACKAGECONFIG[fit] = ",,u-boot-tools-native dtc-native"

export KBUILD_BUILD_USER ?= "oe-user"
export KBUILD_BUILD_HOST ?= "oe-host"

# unlike the kernel, barebox may build against host tools like openssl
export HOST_EXTRACFLAGS

def get_layer_rev(path):
    try:
        rev, _ = bb.process.run("git describe --match='' --always --dirty --broken", cwd=path)
    except bb.process.ExecutionError:
        rev = ""
    return rev.strip()

BAREBOX_BUILDSYSTEM_VERSION[doc] = "Build system version to add to the barebox image. By default this is the git description of the containing layer."
BAREBOX_BUILDSYSTEM_VERSION ??= "${@get_layer_rev(os.path.dirname(d.getVar('FILE')))}"

BAREBOX_FIRMWARE_DIR[doc] = "Overwrite barebox' firmware blobs search directory (CONFIG_EXTRA_FIRMWARE_DIR) with this path, default ${B}/firmware"
BAREBOX_FIRMWARE_DIR ??= "${B}/firmware"

EXTRA_OEMAKE = " \
  CROSS_COMPILE=${TARGET_PREFIX} -C ${S} O=${B} \
  BUILDSYSTEM_VERSION=${BAREBOX_BUILDSYSTEM_VERSION} \
  CONFIG_EXTRA_FIRMWARE_DIR=${BAREBOX_FIRMWARE_DIR} \
  PKG_CONFIG=pkg-config-native \
  CROSS_PKG_CONFIG=pkg-config \
"

BAREBOX_CONFIG[doc] = "The barebox kconfig defconfig file. Not used if a file called defconfig is added to the SRC_URI."
BAREBOX_CONFIG ?= ""

# set sensible default configs for some of oe-core's QEMU MACHINEs
BAREBOX_CONFIG:qemuarm = "multi_v7_defconfig"
BAREBOX_CONFIG:qemuarm64 = "multi_v8_defconfig"
BAREBOX_CONFIG:qemux86-64 = "efi_defconfig"

# prevent from acting as non-buildable provider
python () {
    bareboxconfig = d.getVar('BAREBOX_CONFIG')
    bareboxdefconfig = 'file://defconfig' in d.getVar('SRC_URI')

    if not bareboxconfig and not bareboxdefconfig:
        raise bb.parse.SkipRecipe("BAREBOX_CONFIG must be set in the %s machine configuration or file://defconfig must be given in SRC_URI." % d.getVar("MACHINE"))
}

do_configure() {
	if [ -e ${UNPACKDIR}/defconfig ]; then
		cp ${UNPACKDIR}/defconfig ${B}/.config
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

BAREBOX_ENV_DIR[doc] = "Overlay the barebox built-in environment with the environment provided by the BSP if specified."
BAREBOX_ENV_DIR ??= "${UNPACKDIR}/env/"

do_compile () {
	export userccflags="${TARGET_LDFLAGS}${HOST_CC_ARCH}${TOOLCHAIN_OPTIONS}"
	unset LDFLAGS
	unset CFLAGS
	unset CPPFLAGS
	unset CXXFLAGS
	unset MACHINE
	# Allow to use ${UNPACKDIR} in kconfig options to include additionally fetched files
	export UNPACKDIR=${UNPACKDIR}

	if [ -d ${BAREBOX_ENV_DIR} ]; then
		BAREBOX_DEFAULT_ENV="$(grep ^CONFIG_DEFAULT_ENVIRONMENT_PATH .config | cut -d '=' -f 2 | tr -d '"')"
		oe_runmake CONFIG_DEFAULT_ENVIRONMENT_PATH="\"${BAREBOX_DEFAULT_ENV} ${BAREBOX_ENV_DIR}\""
	else
		oe_runmake
	fi
}

BAREBOX_BINARY[doc] = "Specify the barebox binary to install. If not specified all barebox artifacts are installed."
BAREBOX_BINARY ??= "${@'barebox.efi' if d.getVar('EFI_PROVIDER') == 'barebox' else ''}"
BAREBOX_SUFFIX[doc] = "Specify the suffix for ${BAREBOX_IMAGE}."
BAREBOX_SUFFIX ??= "img"
BAREBOX_IMAGE[doc] = "A unique barebox image name. Unused if ${BAREBOX_BINARY} is not set."
BAREBOX_IMAGE_DEFAULT ?= "${PN}-${MACHINE}-${PV}-${PR}.${BAREBOX_SUFFIX}"
BAREBOX_IMAGE ?= "${@'${EFI_BOOT_IMAGE}' if d.getVar('EFI_PROVIDER') == 'barebox' else '${BAREBOX_IMAGE_DEFAULT}'}"

BAREBOX_INSTALL_PATH ?= "${@'${EFI_FILES_PATH}' if d.getVar('EFI_PROVIDER') == 'barebox' else '/boot'}"

do_install() {
	if [ -n "${BAREBOX_BINARY}" ]; then

		BAREBOX_BIN=${B}/${BAREBOX_BINARY}
		if [ ! -f "${BAREBOX_BIN}" ]; then
			BAREBOX_BIN=${B}/images/${BAREBOX_BINARY}
		fi
		if [ ! -f "${BAREBOX_BIN}" ]; then
			bbfatal "Failed to locate ${BAREBOX_BINARY}"
		fi

		install -D -m 644 ${BAREBOX_BIN} ${D}${BAREBOX_INSTALL_PATH}/${BAREBOX_IMAGE}
		ln -sf ${BAREBOX_IMAGE} ${D}${BAREBOX_INSTALL_PATH}/${BAREBOX_BINARY}
	else
		install -d ${D}${BAREBOX_INSTALL_PATH}/
		for image in $(cat ${B}/barebox-flash-images); do
			install -m 644 ${B}/${image} ${D}${BAREBOX_INSTALL_PATH}/
		done
	fi
}
FILES:${PN} = "${BAREBOX_INSTALL_PATH}"

do_deploy () {
	if [ -n "${BAREBOX_BINARY}" ]; then

		BAREBOX_BIN=${B}/${BAREBOX_BINARY}
		if [ ! -f "${BAREBOX_BIN}" ]; then
			BAREBOX_BIN=${B}/images/${BAREBOX_BINARY}
		fi

		install -D -m 644 ${BAREBOX_BIN} ${DEPLOYDIR}/${BAREBOX_IMAGE}
		ln -sf ${BAREBOX_IMAGE} ${DEPLOYDIR}/${BAREBOX_BINARY}
	else
		for image in $(cat ${B}/barebox-flash-images); do
			cp ${B}/${image} ${DEPLOYDIR}
		done
	fi
}
addtask deploy after do_compile

SRC_URI += "file://defconfig"

require files/${MACHINE}/env/env.inc

DEPENDS += "coreutils-native lzop-native"

# Allow autoboot_timeout adjustment for automation from local.conf or
# environment via BAREBOX_AUTOBOOT_TIMEOUT
do_compile:prepend () {
	if [ -n "${BAREBOX_AUTOBOOT_TIMEOUT}" ]; then
		mkdir -p ${BAREBOX_ENV_DIR}/nv
		printf "${BAREBOX_AUTOBOOT_TIMEOUT}\n" > ${BAREBOX_ENV_DIR}/nv/autoboot_timeout
	fi
}

# Backport UNPACKDIR from wrynose's bitbake.conf so the class-style BAREBOX_ENV_DIR
# default also works on scarthgap.
# Drop this compatibility code once the branch moves to wrynose or newer.
UNPACKDIR ??= "${WORKDIR}/sources"

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

DEPENDS += "${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'virtual/fit-signing', '', d)}"

PACKAGECONFIG = "libusb ${@bb.utils.contains('MACHINE_FEATURES', 'habv4', 'openssl', '', d)} fit"

# On scarthgap, do_unpack places file://env sources in ${WORKDIR}/env. Copy them to
# ${BAREBOX_ENV_DIR} in a do_unpack postfunc for compatibility with the class-style
# environment layout. Likewise, copy barebox' defconfig from ${WORKDIR} to ${UNPACKDIR}.
# Drop this compatibility code once the branch moves to wrynose or newer.
copy_to_unpack_dir() {
	if [ -d "${WORKDIR}/env" ]; then
                mkdir -p "${BAREBOX_ENV_DIR}"
                cp -r "${WORKDIR}/env/." "${BAREBOX_ENV_DIR}"
	fi

	if [ -f "${WORKDIR}/defconfig" ]; then
                cp "${WORKDIR}/defconfig" "${UNPACKDIR}"
	fi
}
do_unpack[postfuncs] += "copy_to_unpack_dir"

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
