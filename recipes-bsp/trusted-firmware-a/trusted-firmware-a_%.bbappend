FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

require files/patches/series.inc
PV = "${UMPF_PV}"

COMPATIBLE_MACHINE:imx8-cpu = "imx8-cpu"
TFA_PLATFORM:imx8-cpu = "imx8mp"
TFA_BUILD_TARGET:imx8-cpu = "bl31"
