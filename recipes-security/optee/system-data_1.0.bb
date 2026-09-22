SUMMARY = "Tool to access the system-data TA from Linux userspace"
DESCRIPTION = "Command-line tool for accessing the OP-TEE system-data TA from \
Linux userspace. It can read and write named binary objects stored in the eMMC \
RPMB via the secure world, select the object storage mode, and handle rollback-\
protected payloads including embedded rollback counters."

LICENSE = "GPL-2.0-only & BSD-2-Clause"
LIC_FILES_CHKSUM = " \
    file://main.c;beginline=1;endline=1;md5=fcab174c20ea2e2bc0be64b493708266 \
    file://tlv.h;beginline=1;endline=1;md5=a9f1449b768f69dcffc44cb5e556b102 \
    file://system_data_ta.h;beginline=1;endline=1;md5=999e469d517ea75c6012ac6639dce016 \
"

COMPATIBLE_MACHINE = "imx8s-cpu"

DEPENDS += "optee-client openssl"

SRC_URI = " \
    file://CMakeLists.txt \
    file://main.c \
    file://system_data_ta.h \
    file://tlv.h \
"

S = "${WORKDIR}"

inherit cmake pkgconfig
