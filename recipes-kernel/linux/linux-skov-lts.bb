require linux-skov-common.inc

SRC_URI[sha256sum] = "2b69564f7d4fea0c859b1959ba33709ee6e9139bd100e30a853b57159a8221b8"

require linux-skov-lts/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require linux-skov-lts/patches-skov/series.inc
