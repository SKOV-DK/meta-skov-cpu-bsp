# umpf-base: v2023.07.1
# umpf-name: 2023.07.1/customers/skov/imx6
# umpf-version: 2023.07.1/customers/skov/imx6/20230821-1
# umpf-topic: v2023.07.1/customers/skov/imx6
# umpf-hashinfo: 258418038886239b6a87d2b40e74e1a792507f86
# umpf-topic-range: 0186c17838e655dbf6a3bcd01fa74821d5e67ae6..9a8989013cbbd8c2b7530610c2c56f63e4b574b0
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-skov-imx6-Add-new-calibration-values-for-i.MX6Q.patch \
  file://patches/0003-ARM-skov-imx6-Add-new-calibration-values-for-i.MX6S.patch \
  file://patches/0004-ARM-i.MX6-MMDC-Add-register-offset-comments-to-struc.patch \
  file://patches/0005-ARM-skov-imx6-Remove-unused-board-variants.patch \
  file://patches/0006-video-edid-print-debug-message-on-EDID-read-out-erro.patch \
  "
# umpf-topic: v2023.07.1/customers/skov/imx8eval
# umpf-hashinfo: b6af5bd6b0335102f3cf34b8140068207ea6cd61
# umpf-topic-range: 9a8989013cbbd8c2b7530610c2c56f63e4b574b0..1a60fbaf4771c9190fb8d7d4e1bb5092621b77f4
SRC_URI += "\
  file://patches/0101-ARM-dts-i.MX8MP-add-state-and-a-temporary-backend-fo.patch \
  "
# umpf-topic: v2023.07.1/topic/skov-imx8mp
# umpf-hashinfo: a041b6e1c12b894db715feccaf46ba4b2895d448
# umpf-topic-range: 1a60fbaf4771c9190fb8d7d4e1bb5092621b77f4..47ae8771c035f0a79734639a5cd2ba22f36ae30f
SRC_URI += "\
  file://patches/0201-ARM-add-Skov-i.MX8MP-based-board-support.patch \
  file://patches/0202-net-ksz9477-add-support-for-ksz9893-switch.patch \
  file://patches/0203-net-ksz9477-do-not-advertise-EEE-support.patch \
  file://patches/0204-net-designware-eqos-initialize-MAC-address-specific-.patch \
  file://patches/0205-net-designware-eqos-fix-non-working-promisc-mode-whe.patch \
  file://patches/0206-net-designware-eqos-add-comment-about-external-clock.patch \
  file://patches/0207-net-designware-eqos-fix-NULL-pointer-dereference-on-.patch \
  file://patches/0208-net-designware-eqos-do-not-receive-pause-frames.patch \
  file://patches/0209-HACK-ARM-i.MX8MP-skov-add-temporary-version.patch \
  "
# umpf-release: 2023.07.1/customers/skov/imx6/20230821-1
# umpf-topic-range: 47ae8771c035f0a79734639a5cd2ba22f36ae30f..9d5f5f58dccfc0c2850ee1b4ad97fc5ee8d83b49
SRC_URI += "\
  file://patches/0301-Release-2023.07.1-customers-skov-imx6-20230821-1.patch \
  "
# umpf-end
