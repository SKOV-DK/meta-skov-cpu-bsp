FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://system.conf \
	    file://dhcp.system.conf \
"
PACKAGES =+ "${PN}-dhcp"

do_install_append() {
	install -d ${D}${sysconfdir}/tmpfiles.d
	echo "d /run/mount/rauc 0644 root root 10d" > ${D}${sysconfdir}/tmpfiles.d/rauc.conf
	install -d ${D}${sysconfdir}/rauc
	install -m 0644 ${WORKDIR}/dhcp.system.conf ${D}${sysconfdir}/rauc/
}

FILES_${PN}-dhcp = "${sysconfdir}/rauc/dhcp.system.conf"

pkg_postinst_${PN}-dhcp() {
    mkdir -p $D/${sysconfdir}/rauc/
    mv $D/${sysconfdir}/rauc/dhcp.system.conf $D/${sysconfdir}/rauc/system.conf
}

#rauc-dhcp need to be installed after rauc, so the overwrite can happen
RDEPENDS_${PN}-dhcp = "${PN}"
