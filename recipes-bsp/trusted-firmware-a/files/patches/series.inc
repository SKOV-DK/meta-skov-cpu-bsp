# umpf-base: lts-v2.10.18
# umpf-flags: upstreamstatus=insert
# umpf-name: 2.10.18/customers/skov/imx8
# umpf-version: 2.10.18/customers/skov/imx8/20250708-1
# umpf-topic: v2.10/topic/imx8m-csu
# umpf-hashinfo: d40d911f2d2bd4c04eb6b8fa1221bbb790a293dc
# umpf-topic-range: 6768d7a8e2f15dbc1786a902d57368160d485a1f..1ed9a6a9c5d4256dfe4dec2f880807ad2d7b4ace
UMPF_SRC_URI += "\
  file://patches/0001-fix-imx8m-fix-CSU_SA_REG-to-work-with-all-sa-registe.patch \
  file://patches/0002-feat-imx8m-add-imx-csu_sa-enum-type-defines-for-imx8.patch \
  file://patches/0003-feat-imx8m-add-defines-for-csu_sa-access-security.patch \
  file://patches/0004-feat-imx8mm-set-and-lock-almost-all-peripherals-as-n.patch \
  file://patches/0005-feat-imx8mm-restrict-peripheral-access-to-secure-wor.patch \
  file://patches/0006-feat-imx8mp-set-and-lock-almost-all-peripherals-as-n.patch \
  file://patches/0007-feat-imx8mp-restrict-peripheral-access-to-secure-wor.patch \
  file://patches/0008-style-imx8m-add-parenthesis-to-CSU_HP_REG.patch \
  "
# umpf-release: 2.10.18/customers/skov/imx8/20250708-1
# umpf-topic-range: 1ed9a6a9c5d4256dfe4dec2f880807ad2d7b4ace..a66709c993dc5e22edc5ac652fe4b0d454f0dd37
UMPF_SRC_URI += "\
  file://patches/0101-Release-2.10.18-customers-skov-imx8-20250708-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "lts-2.10.18"
UMPF_VERSION = "20250708-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
