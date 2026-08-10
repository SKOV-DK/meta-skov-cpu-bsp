# umpf-base: 4.10.0
# umpf-name: v4.10/customers/skov/imx6
# umpf-version: v4.10/customers/skov/imx6/20260716-1
# umpf-topic: 4.10.0/customers/skov/imx8mp
# umpf-hashinfo: f7589be5aa646d9f6a5b3d9e1a3d180fa4788f4b
# umpf-topic-range: 753afbbee1682f5d16fd30e87b31058a4fd4f4b8..339a0827bf316738cfd01eac0e6d5e08bad0955b
UMPF_SRC_URI += "\
  file://patches/0001-core-pta-add-manufacturing-pta.patch \
  file://patches/0002-core-pta-manufacturing-make-glitching-harder.patch \
  file://patches/0003-core-rpmb_fs-make-tee_rpmb_key_gen-function-public.patch \
  file://patches/0004-core-pta-manufacturing-extend-with-rpmb-key-get.patch \
  file://patches/0005-plat-imx-add-state-implementation-for-rpmb-pta-based.patch \
  "
# umpf-topic: 4.10.0/topic/caam
# umpf-hashinfo: f7667e815292c3988253636a26f274eec3c344d7
# umpf-topic-range: 339a0827bf316738cfd01eac0e6d5e08bad0955b..9b9ead3391d1795fb38999de098f18603af52b93
UMPF_SRC_URI += "\
  file://patches/0101-drivers-caam-split-nsjobring-release-into-boot_final.patch \
  "
# umpf-release: v4.10/customers/skov/imx6/20260716-1
# umpf-topic-range: 9b9ead3391d1795fb38999de098f18603af52b93..bb95f170cdb83d9dfda840ab50ddc0e9674c8744
#UMPF_SRC_URI += "\
#  file://patches/0201-Release-v4.10-customers-skov-imx6-20260716-1.patch \
#  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "4.10.0"
UMPF_VERSION = "20260716-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
