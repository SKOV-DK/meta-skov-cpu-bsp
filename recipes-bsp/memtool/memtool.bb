DESCRIPTION = "Memtool"
MAINTAINER = "Soren Andersen <san at skov.dk>"
PR = "r0"
HOMEPAGE = "http://www.skov.dk"
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/GPL-2.0;md5=801f80980d171dd6425610833a22dbe6"

SRC_URI =      "file://Makefile \
		file://memtool.c \
"

SRCREV = "${AUTOREV}"

S = "${WORKDIR}"

do_compile() {
        oe_runmake CROSS_COMPILE=1
}

do_install () {
	install -d ${D}${bindir}
    	install -m 0755 ${B}/memtool ${D}${bindir}/
}

FILES_${PN} += "${bindir}/* \
"
TARGET_CC_ARCH += "${LDFLAGS}" 
