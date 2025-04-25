FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

require files/patches/series.inc
PV = "${UMPF_PV}"

COMPATIBLE_MACHINE = "imx8-cpu|imx8s-cpu"

TFA_PLATFORM:imx8-cpu = "imx8mp"
TFA_BUILD_TARGET:imx8-cpu = "bl31"

TFA_PLATFORM:imx8s-cpu = "imx8mp"
TFA_BUILD_TARGET:imx8s-cpu = "bl31"
