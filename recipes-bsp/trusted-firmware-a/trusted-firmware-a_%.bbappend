FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

require files/patches/series.inc
PV = "${UMPF_PV}"

COMPATIBLE_MACHINE = "imx8-cpu|imx8s-cpu"

TFA_PLATFORM:mx8m-generic-bsp = "imx8mp"
TFA_BUILD_TARGET:mx8m-generic-bsp = "bl31"

# Explicitly direct the TF-A to UART2 which will be initialized by barebox
EXTRA_OEMAKE:append = " IMX_BOOT_UART_BASE=0x30890000"

# The following lines partially revert meta-arm's commit [1], as the recipe would
# otherwise fail to build. They should be removed starting with whinlatter.
# [1] eea748608c82 ("arm: WORKDIR fixes")
S = "${WORKDIR}/git"
BB_GIT_DEFAULT_DESTSUFFIX ?= "git"
