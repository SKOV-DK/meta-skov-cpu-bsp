require linux-skov-common.inc

SRC_URI[sha256sum] = "490a7aedf1b355c565d3a6c05333ccccb5da82064eca46b590448a7099d7d651"

require linux-skov-lts/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require linux-skov-lts/patches-skov/series.inc
