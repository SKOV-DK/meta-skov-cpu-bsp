# umpf-base: v2022.09.0
# umpf-name: 2022.09.0/customers/skov/imx6
# umpf-version: 2022.09.0/customers/skov/imx6/20221005-1
# umpf-topic: v2022.09.0/topic/net-dsa-ksz8873
# umpf-hashinfo: cfd6f5cf2dedace822a9006710c0360bb8c1e315
# umpf-topic-range: a9a07aa1cd94b30335e0c82c8d36e9bc7d784e49..61dcb56b1e1b9814934028e67b44308f161cf593
SRC_URI += "\
  file://patches/0001-net-port-support-for-microchip-SMI0-MDIO-bus.patch \
  file://patches/0002-net-add-support-for-MDIO-devices.patch \
  file://patches/0003-net-add-ksz8873-switch-support.patch \
  file://patches/0004-mdio_bus-Configure-pinctrl-for-phy-devices.patch \
  file://patches/0005-mdio_bus-do-reset-only-on-PHY-devices.patch \
  file://patches/0006-driver-add-dev_is_probed-helper-function.patch \
  file://patches/0007-net-ksz8873-add-device-validation-to-be-able-to-dete.patch \
  file://patches/0008-ARM-boards-skov-imx6-free-used-gpio-devices-pins.patch \
  file://patches/0009-ARM-boards-skov-imx6-rework-switch-detection.patch \
  file://patches/0010-ARM-boards-Skov-i.MX6-select-KSZ8873-switch-driver.patch \
  file://patches/0011-ARM-dts-Skov-i.MX6-start-using-mainlined-kernel-dts.patch \
  file://patches/0012-net-dsa-do-not-wait-for-aneg-is-actually-done-on-the.patch \
  "
# umpf-topic: v2022.09.0/customers/skov/imx6
# umpf-hashinfo: b6c9fc33338c5a42c11f36f62d1446f7b52391fd
# umpf-topic-range: 61dcb56b1e1b9814934028e67b44308f161cf593..def7a02048506aed3776eac96278aa90165b86a0
SRC_URI += "\
  file://patches/0101-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0102-ARM-skov-imx6-Add-new-calibration-values-for-i.MX6Q.patch \
  file://patches/0103-ARM-skov-imx6-Add-new-calibration-values-for-i.MX6S.patch \
  file://patches/0104-ARM-i.MX6-MMDC-Add-register-offset-comments-to-struc.patch \
  file://patches/0105-ARM-skov-imx6-Remove-unused-board-variants.patch \
  file://patches/0106-zstd-fix-assert-logic.patch \
  file://patches/0107-Revert-lib-zstd-sync-with-Linux.patch \
  "
# umpf-topic: v2022.09.0/customers/skov/imx8eval
# umpf-hashinfo: 6b2cda46fadd18cefc141791b61a6a468d8cc218
# umpf-topic-range: def7a02048506aed3776eac96278aa90165b86a0..e5178e4a6e1d7a17832475f6372f2e08004c92b1
SRC_URI += "\
  file://patches/0201-ARM-imx-add-state-backend-for-i.MX8MP.patch \
  "
# umpf-release: 2022.09.0/customers/skov/imx6/20221005-1
# umpf-topic-range: e5178e4a6e1d7a17832475f6372f2e08004c92b1..bfd527c9f74923f97ebfd8762ac2f9943ffa3c79
SRC_URI += "\
  file://patches/0301-Release-2022.09.0-customers-skov-imx6-20221005-1.patch \
  "
# umpf-end
