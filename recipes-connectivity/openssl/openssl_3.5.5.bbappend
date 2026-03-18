FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

SRC_URI:append:imx8s-cpu = " file://customized_openssl.cnf"

RDEPENDS:${PN}-conf:append:imx8s-cpu = " pkcs11-provider optee-client"

do_install:append:imx8s-cpu() {
    # Ensure that the upstream version of openssl.cnf did not change
    ACTUAL=$(md5sum ${B}/apps/openssl.cnf | awk '{print $1}')
    EXPECTED=bfdc30bd205b6ca2c15a46b17721c6f2

    if [ "${ACTUAL}" != "${EXPECTED}" ]; then
        bbfatal "Original OpenSSL config file changed \
(hash mismatch: expected ${EXPECTED}, but found ${ACTUAL}). \
Update the customized version and refresh the expected hash (${B}/apps/openssl.cnf)."
    fi

    install -m 0644 ${WORKDIR}/customized_openssl.cnf ${D}${sysconfdir}/ssl/openssl.cnf
}
