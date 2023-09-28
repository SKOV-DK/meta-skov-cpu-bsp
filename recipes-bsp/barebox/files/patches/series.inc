# umpf-base: v2023.09.0
# umpf-name: 2023.09.0/customers/skov/imx6
# umpf-version: 2023.09.0/customers/skov/imx6/20230928-1
# umpf-topic: v2023.09.0/customers/skov/imx6
# umpf-hashinfo: 6c68475e297a98a4312b66cd46559b352abc17f6
# umpf-topic-range: ce40a01f804a50433ace02c43cbc6c24dfe4d458..19be1278abf41c0d99faaa05c38d5247d963b7ee
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-i.MX6-MMDC-Add-register-offset-comments-to-struc.patch \
  file://patches/0003-ARM-skov-imx6-Remove-unused-board-variants.patch \
  file://patches/0004-video-edid-print-debug-message-on-EDID-read-out-erro.patch \
  "
# umpf-topic: v2023.09.0/topic/skov-imx8mp
# umpf-hashinfo: 80faa5068641a24f2f4459e5a43b4f415cd38779
# umpf-topic-range: 19be1278abf41c0d99faaa05c38d5247d963b7ee..33cc2a6923ba4e5cbe252f04d2607c30ad6329d8
SRC_URI += "\
  file://patches/0101-arm-dts-imx8mp-skov-Add-reserved-memory-for-ramoops-.patch \
  file://patches/0102-arm-dts-imx8mp-skov-Add-pins-for-hardware-variant-de.patch \
  file://patches/0103-arm-dts-imx8mp-skov-Switch-to-GPT-for-eMMC-partition.patch \
  file://patches/0104-arm-dts-imx8mp-skov-Simplify-SD-partition-definition.patch \
  file://patches/0105-arm-dts-imx8mp-skov-Add-barebox-state-backend-in-DTS.patch \
  file://patches/0106-ARM-i.MX8MP-skov-refactor-bootsource-and-BBU-handler.patch \
  file://patches/0107-ARM-i.MX8MP-skov-Add-hardware-variant-support.patch \
  "
# umpf-release: 2023.09.0/customers/skov/imx6/20230928-1
# umpf-topic-range: 33cc2a6923ba4e5cbe252f04d2607c30ad6329d8..cf6975294f35d0385d2c4adcd3860bcfd75cb119
SRC_URI += "\
  file://patches/0201-Release-2023.09.0-customers-skov-imx6-20230928-1.patch \
  "
# umpf-end
