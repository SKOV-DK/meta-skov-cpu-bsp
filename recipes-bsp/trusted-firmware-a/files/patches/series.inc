# umpf-base: lts-v2.10.9
# umpf-flags: upstreamstatus=insert
# umpf-name: 2.10.9/customers/skov/imx8
# umpf-version: 2.10.9/customers/skov/imx8/20241110-1
# umpf-topic: v2.10/topic/imx8m-csu
# umpf-hashinfo: d40d911f2d2bd4c04eb6b8fa1221bbb790a293dc
# umpf-topic-range: 7e63213601425c7a6d83e47dc936b264deb9df2b..dbcdfbd7277e2f5207b3a7c072347d3303736302
SRC_URI += "\
  file://patches/0001-fix-imx8m-fix-CSU_SA_REG-to-work-with-all-sa-registe.patch \
  file://patches/0002-feat-imx8m-add-imx-csu_sa-enum-type-defines-for-imx8.patch \
  file://patches/0003-feat-imx8m-add-defines-for-csu_sa-access-security.patch \
  file://patches/0004-feat-imx8mm-set-and-lock-almost-all-peripherals-as-n.patch \
  file://patches/0005-feat-imx8mm-restrict-peripheral-access-to-secure-wor.patch \
  file://patches/0006-feat-imx8mp-set-and-lock-almost-all-peripherals-as-n.patch \
  file://patches/0007-feat-imx8mp-restrict-peripheral-access-to-secure-wor.patch \
  file://patches/0008-style-imx8m-add-parenthesis-to-CSU_HP_REG.patch \
  "
# umpf-release: 2.10.9/customers/skov/imx8/20241110-1
# umpf-topic-range: dbcdfbd7277e2f5207b3a7c072347d3303736302..10897de8b60596824d61c8a77083825885ae0b40
SRC_URI += "\
  file://patches/0101-Release-2.10.9-customers-skov-imx8-20241110-1.patch \
  "
UMPF_BASE = "lts-2.10.9"
UMPF_VERSION = "20241110-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
