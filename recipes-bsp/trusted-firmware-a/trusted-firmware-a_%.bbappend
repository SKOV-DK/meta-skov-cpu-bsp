FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

require files/patches/series.inc
PV = "${UMPF_PV}"

COMPATIBLE_MACHINE = "imx8-cpu|imx8s-cpu"

TFA_PLATFORM:mx8m-generic-bsp = "imx8mp"
TFA_BUILD_TARGET:mx8m-generic-bsp = "bl31"

# Explicitly direct the TF-A to UART2 which will be initialized by barebox
EXTRA_OEMAKE:append = " IMX_BOOT_UART_BASE=0x30890000"

# Explicitly set the address the TF-A jumps to to enter barebox-proper, see [1]-[2].
# [1] https://review.trustedfirmware.org/plugins/gitiles/TF-A/trusted-firmware-a/+/refs/tags/lts-v2.12.6/plat/imx/imx8m/imx8mp/platform.mk#161
# [2] https://review.trustedfirmware.org/plugins/gitiles/TF-A/trusted-firmware-a/+/refs/tags/lts-v2.12.6/plat/imx/imx8m/imx8mp/include/platform_def.h#66
# [3] https://git.pengutronix.de/cgit/barebox/tree/include/mach/imx/atf.h?h=v2025.06.1#n17
EXTRA_OEMAKE:append:imx8s-cpu = " PRELOADED_BL33_BASE=0x40200000"
EXTRA_OEMAKE:append:imx8s-cpu = " BL32_BASE=${OPTEE_LOADADDR}"

# Enable OP-TEE loading
TFA_SPD:imx8s-cpu = "opteed"

BAREBOX_TFA_BIN:imx8-cpu = "${TFA_PLATFORM}-${TFA_BUILD_TARGET}.bin"
BAREBOX_TFA_BIN:imx8s-cpu = "${TFA_PLATFORM}-${TFA_BUILD_TARGET}.bin-optee"

do_deploy:append:mx8m-generic-bsp() {
    # Provide the TF-A binary under the filename that barebox expects
    ln -s ${TFA_BUILD_TARGET}-${TFA_PLATFORM}.bin ${DEPLOYDIR}/${BAREBOX_TFA_BIN}
}

# The following lines partially revert meta-arm's commit [1], as the recipe would
# otherwise fail to build. They should be removed starting with whinlatter.
# [1] eea748608c82 ("arm: WORKDIR fixes")
S = "${WORKDIR}/git"
BB_GIT_DEFAULT_DESTSUFFIX ?= "git"
