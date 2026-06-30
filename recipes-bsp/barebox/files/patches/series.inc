# umpf-base: v2026.06.0
# umpf-name: 2026.06.0/customers/skov/imx6
# umpf-version: 2026.06.0/customers/skov/imx6/20260703-1
# umpf-topic: v2025.02.0/customers/skov/imx6
# umpf-hashinfo: 455885ffe06014703bfa4394caf5d7e9a3cef32e
# umpf-topic-range: 87f49b49fdd06c0de492bd2c1cd6b8c93e393029..2c6a88c8801769b60433f46c202dd4a5fee70a3b
UMPF_SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-boards-skov-imx6-fix-device-tree-path-of-state-n.patch \
  "
# umpf-topic: v2026.06.0/customers/skov/imx8mp
# umpf-hashinfo: 578f831147e54b5d841e54bd77c65f1bb10b22d5
# umpf-topic-range: 2c6a88c8801769b60433f46c202dd4a5fee70a3b..7528f69e5e59c5824b2f43461d9a506e88ce905a
UMPF_SRC_URI += "\
  file://patches/0101-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0102-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0103-optee-device-report-correct-command-in-enumeration-e.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/arm9cpu
# umpf-hashinfo: e534542da7f998677e29802bb8b067ca99ccbbe0
# umpf-topic-range: 7528f69e5e59c5824b2f43461d9a506e88ce905a..c223083133dfe055b36b90d8d564fb5b8426faf9
UMPF_SRC_URI += "\
  file://patches/0201-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0202-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2026.06.0/topic/imx6-clk
# umpf-hashinfo: 09dfe9cd98f93e2fa6d6c09d51bb443300ed831e
# umpf-topic-range: c223083133dfe055b36b90d8d564fb5b8426faf9..1af1a6f40d64b7799bdeb4c35336a82871c2c930
UMPF_SRC_URI += "\
  file://patches/0301-video-IPUv3-LDB-fix-LVDS-serial-clock-configuration.patch \
  "
# umpf-release: 2026.06.0/customers/skov/imx6/20260703-1
# umpf-topic-range: 1af1a6f40d64b7799bdeb4c35336a82871c2c930..a770f8c76741866f3ca81810a44c068a8698481a
UMPF_SRC_URI += "\
  file://patches/0401-Release-2026.06.0-customers-skov-imx6-20260703-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2026.06.0"
UMPF_VERSION = "20260703-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
