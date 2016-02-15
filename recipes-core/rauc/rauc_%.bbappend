FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://system.conf"

do_install_append() {
	install -d ${D}${sysconfdir}/tmpfiles.d
	echo "d /run/mount/rauc 0644 root root 10d" > ${D}${sysconfdir}/tmpfiles.d/rauc.conf
}
