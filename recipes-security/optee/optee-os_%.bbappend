FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

require ${BPN}/patches/series.inc
PV = "${UMPF_PV}"

# The following line partially reverts meta-arm's commit [1], as the recipe
# would otherwise fail to build. It should be removed starting with whinlatter.
# [1] eea748608c82 ("arm: WORKDIR fixes")
S = "${WORKDIR}/git"

COMPATIBLE_MACHINE:imx8s-cpu ?= "imx8s-cpu"

SKOV_OPTEE_DEVEL ?= "0"
SKOV_OPTEE_DEVEL[doc] = "Set to 1 to have OP-TEE send debugging output to the console."

do_configure[vardeps] += "SKOV_OPTEE_DEVEL"

# OP-TEE machine specific options
EXTRA_OEMAKE:append = " \
    CFG_UART_BASE=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', 'UART2_BASE', '0', d)} \
"

# OP-TEE debugging options
EXTRA_OEMAKE:append = " \
    CFG_TEE_CORE_LOG_LEVEL=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', '4', '0', d)} \
    CFG_TEE_TA_LOG_LEVEL=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', '4', '0', d)} \
    CFG_TEE_CORE_DEBUG=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', 'y', 'n', d)} \
    CFG_DEBUG_INFO=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', 'y', 'n', d)} \
    CFG_TEE_CORE_TA_TRACE=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', 'y', 'n', d)} \
    CFG_ENABLE_EMBEDDED_TESTS=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', 'y', 'n', d)} \
    CFG_TA_MBEDTLS_SELF_TEST=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', 'y', 'n', d)} \
"
