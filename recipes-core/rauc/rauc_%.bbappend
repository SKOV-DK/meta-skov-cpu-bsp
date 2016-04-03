FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://system.conf \
	    file://bd507.system.conf \
"

PACKAGES =+ "${PN}-bd507"

do_install_append() {
	install -d ${D}${sysconfdir}/tmpfiles.d
	echo "d /run/mount/rauc 0644 root root 10d" > ${D}${sysconfdir}/tmpfiles.d/rauc.conf
	install -d ${D}${sysconfdir}/rauc
	install -m 0644 ${WORKDIR}/bd507.system.conf ${D}${sysconfdir}/rauc/
}

FILES_${PN}-bd507 = "${sysconfdir}/rauc/bd507.system.conf"

pkg_postinst_${PN}-bd507() {
    mkdir -p $D/${sysconfdir}/rauc/
    mv $D/${sysconfdir}/rauc/bd507.system.conf $D/${sysconfdir}/rauc/system.conf
}

#rauc-bd507 need to be installed after rauc, so the overwrite can happen
RDEPENDS_${PN}-bd507 = "${PN}"
