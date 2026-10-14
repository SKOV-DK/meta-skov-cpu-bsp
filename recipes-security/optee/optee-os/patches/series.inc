# umpf-base: 4.10.0
# umpf-flags: upstreamstatus=insert
# umpf-name: v4.10/customers/skov/imx6
# umpf-version: v4.10/customers/skov/imx6/20260820-1
# umpf-topic: 4.10.0/customers/skov/imx8mp
# umpf-hashinfo: f7589be5aa646d9f6a5b3d9e1a3d180fa4788f4b
# umpf-topic-range: 753afbbee1682f5d16fd30e87b31058a4fd4f4b8..8a0beb51391560a0ad91988eea71f8b2e35bdf28
UMPF_SRC_URI += "\
  file://patches/0001-core-pta-add-manufacturing-pta.patch \
  file://patches/0002-core-pta-manufacturing-make-glitching-harder.patch \
  file://patches/0003-core-rpmb_fs-make-tee_rpmb_key_gen-function-public.patch \
  file://patches/0004-core-pta-manufacturing-extend-with-rpmb-key-get.patch \
  file://patches/0005-plat-imx-add-state-implementation-for-rpmb-pta-based.patch \
  "
# umpf-topic: 4.10.0/topic/caam
# umpf-hashinfo: f7667e815292c3988253636a26f274eec3c344d7
# umpf-topic-range: 8a0beb51391560a0ad91988eea71f8b2e35bdf28..29fb26609059491d50713992535f9b28e485be26
UMPF_SRC_URI += "\
  file://patches/0101-drivers-caam-split-nsjobring-release-into-boot_final.patch \
  "
# umpf-topic: 4.10.0/topic/system-data-ta
# umpf-hashinfo: ab0416054a4e8c7d859372abc073cb9e9d8ab1b6
# umpf-topic-range: 29fb26609059491d50713992535f9b28e485be26..bb11e7562f0b3d9d8aef12be3648c7cd6c1d9be9
UMPF_SRC_URI += "\
  file://patches/0201-ta-system-data-add-new-trusted-application.patch \
  "
# umpf-release: v4.10/customers/skov/imx6/20260820-1
# umpf-topic-range: bb11e7562f0b3d9d8aef12be3648c7cd6c1d9be9..3c171cedf446e1887e935b41f80a657651b7528d
UMPF_SRC_URI += "\
  file://patches/0301-Release-v4.10-customers-skov-imx6-20260820-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "4.10.0"
UMPF_VERSION = "20260820-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
