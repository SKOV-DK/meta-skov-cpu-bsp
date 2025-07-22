FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

require files/patches/series.inc
PV = "${UMPF_PV}"

COMPATIBLE_MACHINE = "imx8-cpu|imx8s-cpu"

TFA_PLATFORM:mx8m-generic-bsp = "imx8mp"
TFA_BUILD_TARGET:mx8m-generic-bsp = "bl31"
