require trusted-firmware-a.inc

# Use TF-A for version
SRCREV_FORMAT = "tfa"

SRC_URI = "git://source.codeaurora.org/external/imx/imx-atf;protocol=https;name=tfa;branch=imx_5.4.3_2.0.0"

# TF-A rel_imx_5.4.3_2.0.0
SRCREV_tfa = "f1a195b5cce64365a7227557a9009a4f545aa02d"

LIC_FILES_CHKSUM += "file://license.rst;md5=e927e02bca647e14efd87e9e914b2443"

# mbed TLS v2.24.0
SRC_URI_MBEDTLS = "git://github.com/ARMmbed/mbedtls.git;name=mbedtls;protocol=https;destsuffix=git/mbedtls;branch=master"
SRCREV_mbedtls = "523f0554b6cdc7ace5d360885c3f5bbcc73ec0e8"

LIC_FILES_CHKSUM_MBEDTLS = "file://mbedtls/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"
