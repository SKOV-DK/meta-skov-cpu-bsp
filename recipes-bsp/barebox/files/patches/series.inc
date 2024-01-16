# umpf-base: v2023.09.0
# umpf-name: 2023.09.0/customers/skov/imx6
# umpf-version: 2023.09.0/customers/skov/imx6/20231006-1
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
# umpf-hashinfo: f6825f81a92cbfa927354c8ec068860002a62ffd
# umpf-topic-range: 19be1278abf41c0d99faaa05c38d5247d963b7ee..bb88243dc99f2886b257d3600f91acb3000c5c2b
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
  "
# umpf-release: 2023.09.0/customers/skov/imx6/20231006-1
# umpf-topic-range: bb88243dc99f2886b257d3600f91acb3000c5c2b..2e99100ca56c48112be0927ff263e2d6db4ef5ff
SRC_URI += "\
  file://patches/0201-Release-2023.09.0-customers-skov-imx6-20231006-1.patch \
  "
# umpf-end
# SAN patch for alternative SAMSUNG ram "
SRC_URI += "\
  file://patches/0302-imx8-cpu-samsung-ram-timings.patch \
"
# San patch for boot sd card without enviroment
SRC_URI += "\
  file://patches/0303-imx8-cpu-sd-boot-lvds.patch \
"
