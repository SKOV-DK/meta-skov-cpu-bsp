require linux-skov-common.inc

SRC_URI[sha256sum] = "81764a545072d160748beff4d9de2e7d95aa9f16e8261110288f067a2cc61d71"

require linux-skov-stable/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require linux-skov-stable/patches-skov/series.inc
