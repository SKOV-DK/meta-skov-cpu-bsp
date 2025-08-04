FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

require ${BPN}/patches/series.inc
PV = "${UMPF_PV}"

# The following line partially reverts meta-arm's commit [1], as the recipe
# would otherwise fail to build. It should be removed starting with whinlatter.
# [1] eea748608c82 ("arm: WORKDIR fixes")
S = "${WORKDIR}/git"

COMPATIBLE_MACHINE:imx8s-cpu ?= "imx8s-cpu"
