require u-boot-at91.inc

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://README;beginline=1;endline=22;md5=78b195c11cb6ef63e6985140db7d7bab"

SRC_URI += "ftp://ftp.denx.de/pub/u-boot/u-boot-${PV}.tar.bz2;name=tarball"

SRC_URI[tarball.md5sum] = "8655f63b1e5c4647295ac9ce44660be3"
SRC_URI[tarball.sha256sum] = "dddec75070b5faa5df463085e3e1d27c6d058ec3481c666917baa961956d4d17"
