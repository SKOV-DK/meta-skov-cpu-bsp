# The following line partially reverts meta-arm's commit [1], as the recipe
# would otherwise fail to build. It should be removed starting with whinlatter.
# [1] eea748608c82 ("arm: WORKDIR fixes")
S = "${WORKDIR}/git"
OPTEE_SRC_URI_BRANCH_OR_TAG = "branch=master"

COMPATIBLE_MACHINE:imx8s-cpu ?= "imx8s-cpu"
