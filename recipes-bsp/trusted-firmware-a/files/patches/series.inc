# umpf-base: lts-v2.12.6
# umpf-flags: upstreamstatus=insert
# umpf-name: 2.12.6/customers/skov/imx8s
# umpf-version: 2.12.6/customers/skov/imx8s/20250901-1
# umpf-topic: v2.12/topic/imx8m-tzasc-fixes
# umpf-hashinfo: ef41b81d9b5ae663d6833188fd5584a189c75415
# umpf-topic-range: 10ae965e520d612c27866796632090222ce9036d..55ac489cbfa741c7377342ed96ffe33e5ec20b3c
UMPF_SRC_URI += "\
  file://patches/0001-fix-imx8m-don-t-reconfigure-default-region0.patch \
  "
# umpf-release: 2.12.6/customers/skov/imx8s/20250901-1
# umpf-topic-range: 55ac489cbfa741c7377342ed96ffe33e5ec20b3c..1222f8d42339e3e8cd8bf5df80052bbf7213966d
UMPF_SRC_URI += "\
  file://patches/0101-Release-2.12.6-customers-skov-imx8s-20250901-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "lts-2.12.6"
UMPF_VERSION = "20250901-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
