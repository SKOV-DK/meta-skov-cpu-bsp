# umpf-base: 4.10.0
# umpf-name: v4.10/customers/skov/imx6
# umpf-version: v4.10/customers/skov/imx6/20260709-1
# umpf-topic: 4.10.0/customers/skov/imx8mp
# umpf-hashinfo: 6deb531a9b959832a48813d4690292b55172b24a
# umpf-topic-range: 753afbbee1682f5d16fd30e87b31058a4fd4f4b8..a8882c6e48fde7b3408064bd52f66807bec459ba
UMPF_SRC_URI += "\
  file://patches/0001-core-pta-add-manufacturing-pta.patch \
  file://patches/0002-core-pta-manufacturing-make-glitching-harder.patch \
  file://patches/0003-core-rpmb_fs-make-tee_rpmb_key_gen-function-public.patch \
  file://patches/0004-core-pta-manufacturing-extend-with-rpmb-key-get.patch \
  file://patches/0005-plat-imx-add-state-check-for-rpmb-pta-with-fuses.patch \
  "
# umpf-topic: 4.10.0/topic/caam
# umpf-hashinfo: f7667e815292c3988253636a26f274eec3c344d7
# umpf-topic-range: a8882c6e48fde7b3408064bd52f66807bec459ba..c36b7c71f5dbc28bd95eaaccb84fac1c60772b73
UMPF_SRC_URI += "\
  file://patches/0101-drivers-caam-split-nsjobring-release-into-boot_final.patch \
  "
# umpf-release: v4.10/customers/skov/imx6/20260709-1
# umpf-topic-range: c36b7c71f5dbc28bd95eaaccb84fac1c60772b73..66ed4a91cd4862dfe9e4c615ff0dc36ed0e2186d
UMPF_SRC_URI += "\
  file://patches/0201-Release-v4.10-customers-skov-imx6-20260709-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "4.10.0"
UMPF_VERSION = "20260709-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
