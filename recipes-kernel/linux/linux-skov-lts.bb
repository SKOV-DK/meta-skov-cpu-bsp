require linux-skov-common.inc

SRC_URI[sha256sum] = "53a55ac9863a5547e292b8e381d4e4c2240dd1127d5428a7c44dbc550be23963"

require linux-skov-lts/patches/series.inc
# Patches not yet folded into the Pengutronix patch stack
require linux-skov-lts/patches-skov/series.inc
