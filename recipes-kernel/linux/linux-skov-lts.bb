require linux-skov-common.inc

SRC_URI[sha256sum] = "3c2f44ef6acc021a7ad444d9a2e6ec1ef488ff09368793d0004a6080f69d621e"

require linux-skov-lts/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require linux-skov-lts/patches-skov/series.inc
