# umpf-base: v2023.09.0
# umpf-name: 2023.09.0/customers/skov/imx6
# umpf-version: 2023.09.0/customers/skov/imx6/20240126-1
# umpf-topic: v2023.09.0/customers/skov/imx6
# umpf-hashinfo: d8e4faeec3b9abcebe8fe9dfada65e7d0faf6c8b
# umpf-topic-range: ce40a01f804a50433ace02c43cbc6c24dfe4d458..29194a09ba2694a64209b23273df395610b48bfb
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-i.MX6-MMDC-Add-register-offset-comments-to-struc.patch \
  file://patches/0003-ARM-skov-imx6-Remove-unused-board-variants.patch \
  file://patches/0004-video-edid-print-debug-message-on-EDID-read-out-erro.patch \
  file://patches/0005-ARM-dts-skov-imx6-switch-barebox-environment-from-MB.patch \
  "
# umpf-topic: v2023.09.0/topic/skov-imx8mp
# umpf-hashinfo: bba4acf5c9be49d4f143739c78a4ef99b3ec529e
# umpf-topic-range: 29194a09ba2694a64209b23273df395610b48bfb..42547e0bb6c7ab50c7728ee4349220f7eec5d5d6
SRC_URI += "\
  file://patches/0101-arm-dts-imx8mp-skov-Add-reserved-memory-for-ramoops-.patch \
  file://patches/0102-arm-dts-imx8mp-skov-Add-pins-for-hardware-variant-de.patch \
  file://patches/0103-arm-dts-imx8mp-skov-Switch-to-GPT-for-eMMC-partition.patch \
  file://patches/0104-arm-dts-imx8mp-skov-Switch-to-GPT-for-SD-partitionin.patch \
  file://patches/0105-arm-dts-imx8mp-skov-Add-barebox-state-backend-in-DTS.patch \
  file://patches/0106-ARM-i.MX8MP-skov-refactor-bootsource-and-BBU-handler.patch \
  file://patches/0107-ARM-i.MX8MP-skov-Add-hardware-variant-support.patch \
  file://patches/0108-ARM-i.MX8MP-skov-fixup-skov-imx8mp-board-version-DT-.patch \
  file://patches/0109-WIP-net-lib-add-ether_addr_inc-helper.patch \
  file://patches/0110-WIP-ARM-i.MX8MP-skov-assign-Ethernet-addresses-to-al.patch \
  file://patches/0111-ARM-i.MX8MP-skov-fix-variant-detection-on-boards-wit.patch \
  file://patches/0112-ARM-i.MX8MP-skov-update-timing-parameters-for-Samsun.patch \
  "
# umpf-release: 2023.09.0/customers/skov/imx6/20240126-1
# umpf-topic-range: 42547e0bb6c7ab50c7728ee4349220f7eec5d5d6..223cfba351e3ed4089fdf680c1d565a643bb9306
SRC_URI += "\
  file://patches/0201-Release-2023.09.0-customers-skov-imx6-20240126-1.patch \
  "
# umpf-end
# SAN EVIL HACK!!!!!!!!!!
SRC_URI += "\
  file://patches/0301-run-buck2-with-850mv.patch \
  "
