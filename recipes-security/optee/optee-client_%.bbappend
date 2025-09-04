# The following line partially reverts meta-arm's commit [1], as the recipe
# would otherwise fail to build. It should be removed starting with whinlatter.
# [1] eea748608c82 ("arm: WORKDIR fixes")
S = "${WORKDIR}/git"

SKOV_OPTEE_DEVEL ?= "0"
SKOV_OPTEE_DEVEL[doc] = "Set to 1 to have OP-TEE send debugging output to the console."

do_configure[vardeps] += "SKOV_OPTEE_DEVEL"

EXTRA_OECMAKE += " \
	-DCFG_TEE_CLIENT_LOG_LEVEL=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', '4', '1', d)}  \
	-DCFG_TEE_SUPP_LOG_LEVEL=${@oe.utils.vartrue('SKOV_OPTEE_DEVEL', '4', '1', d)}  \
	-DRPMB_EMU=n \
	-DCFG_TEE_SUPPL_USER=root \
"
