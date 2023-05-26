# umpf-base: v2023.01.0
# umpf-name: 2023.01.0/customers/skov/imx6
# umpf-version: 2023.01.0/customers/skov/imx6/20230317-1
# umpf-topic: v2023.01.0/customers/skov/imx6
# umpf-hashinfo: 0f121b08ed35a96dd9fa67110ddd78388049b6f9
# umpf-topic-range: 5a01515c0bb8e8c3093c083a1cd2891c706f310d..02282d2ba748b6d8c91b0c081785754ea14f3cdb
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-skov-imx6-Add-new-calibration-values-for-i.MX6Q.patch \
  file://patches/0003-ARM-skov-imx6-Add-new-calibration-values-for-i.MX6S.patch \
  file://patches/0004-ARM-i.MX6-MMDC-Add-register-offset-comments-to-struc.patch \
  file://patches/0005-ARM-skov-imx6-Remove-unused-board-variants.patch \
  file://patches/0006-clk-imx-set-CLK_SET_RATE_NO_REPARENT-for-all-muxes.patch \
  file://patches/0007-clk-mux-forward-round-set-rate-to-parent-if-CLK_SET_.patch \
  file://patches/0008-ARM-i.MX6-skov-refactor-LVDS-parallel-device-tree-fi.patch \
  file://patches/0009-ARM-i.MX6-skov-fix-LVDS-deep-probe.patch \
  file://patches/0010-video-edid-print-debug-message-on-EDID-read-out-erro.patch \
  file://patches/0011-ARM-i.MX-boards-Use-imx6_cpu_lowlevel_init.patch \
  "
# umpf-topic: v2023.01.0/customers/skov/imx8eval
# umpf-hashinfo: c1ff7b2f458192258f272475711d8e19194dee8d
# umpf-topic-range: 02282d2ba748b6d8c91b0c081785754ea14f3cdb..41b6070b916c03754086479637b3c15f579f3c66
SRC_URI += "\
  file://patches/0101-ARM-dts-i.MX8MP-add-state-and-a-temporary-backend-fo.patch \
  file://patches/0102-devfs-do-not-fail-when-detecting-overlapping-partiti.patch \
  file://patches/0103-of-partition-moan-if-adding-a-partition-failed.patch \
  "
# umpf-release: 2023.01.0/customers/skov/imx6/20230317-1
# umpf-topic-range: 41b6070b916c03754086479637b3c15f579f3c66..13fe36a5c79ed296ee6e891cc1f6192124f134dc
SRC_URI += "\
  file://patches/0201-Release-2023.01.0-customers-skov-imx6-20230517-1.patch \
  "
# umpf-end
