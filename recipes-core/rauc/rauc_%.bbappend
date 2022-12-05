FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
    file://dhcp.system.conf \
"
PACKAGES =+ "${PN}-dhcp"

do_install:append() {
	install -d ${D}${sysconfdir}/rauc
	install -m 0644 ${WORKDIR}/dhcp.system.conf ${D}${sysconfdir}/rauc/
}

FILES:${PN}-dhcp = "${sysconfdir}/rauc/dhcp.system.conf"

pkg_postinst:${PN}-dhcp() {
    mkdir -p $D/${sysconfdir}/rauc/
    mv $D/${sysconfdir}/rauc/dhcp.system.conf $D/${sysconfdir}/rauc/system.conf
}

#rauc-dhcp need to be installed after rauc, so the overwrite can happen
RDEPENDS:${PN}-dhcp = "${PN}"
