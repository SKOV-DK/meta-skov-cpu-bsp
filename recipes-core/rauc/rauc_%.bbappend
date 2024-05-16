FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

RDEPENDS:${PN}:append:imx8-cpu = " e2fsprogs-resize2fs"
