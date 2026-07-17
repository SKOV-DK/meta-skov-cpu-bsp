SUMMARY = "Tool for RPMB provisioning and manufacturing lock-down"
DESCRIPTION = "Small userspace helper used during manufacturing to retrieve \
the SoC-specific RPMB authentication key from OP-TEE's \"Manufacturing pTA\", \
write it to the eMMC RPMB, and permanently lock the device by burning the \
SoC's related eFuse.\
"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
LIC_FILES_CHKSUM += "file://cid.c;endline=26;md5=0e1d328f8775df082ad0b1319d3d4839"

COMPATIBLE_MACHINE = "imx8s-cpu"

DEPENDS += "optee-client"

SRC_URI = " \
    file://CMakeLists.txt \
    file://main.c \
    file://pta_manufacturing.h \
    file://manufacturing_helper.h \
    file://cid.c \
"

S = "${WORKDIR}"

RDEPENDS:${PN} += "mmc-utils"

inherit cmake
