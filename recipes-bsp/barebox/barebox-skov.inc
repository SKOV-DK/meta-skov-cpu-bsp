SUMMARY = "barebox is a bootloader designed for embedded systems. It runs on a variety of architectures including x86, ARM, MIPS, PowerPC and others."
DESCRIPTION = "barebox aims to be a versatile and flexible bootloader not only for booting embedded Linux systems, \
but also for initial hardware bringup and development. \
Users should feel right at home with a shell with UNIX-like virtual file system access to hardware, \
Linux kernel driver API for making driver porting easier, \
and a subset of the POSIX C library for writing more command-line utilities."

require barebox-common.inc
inherit barebox

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
