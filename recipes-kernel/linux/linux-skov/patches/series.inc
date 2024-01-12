# umpf-base: v6.7
# umpf-name: 6.7/customers/skov/imx6
# umpf-version: 6.7/customers/skov/imx6/20240118-1
# umpf-topic: v6.7/topic/drm-sched-accounting
# umpf-hashinfo: 8d5b9eede881aab0bc6c265060ee44e9a0aa2bdb
# umpf-topic-range: 0dd3ee31125508cd67f7e7172247f05b7fd1753a..fa41452d6309dc71769adf51b49e82a4361024c0
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.7/topic/dw-hdmi
# umpf-hashinfo: 3e222ca66906b717fae20f92198570eab32282b1
# umpf-topic-range: fa41452d6309dc71769adf51b49e82a4361024c0..462a400b30b2aa7c477bc88831c2be1147ee5866
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.7/topic/etnaviv
# umpf-hashinfo: edf8543200a832d7ed0c150ad606ac49274cb4bf
# umpf-topic-range: 462a400b30b2aa7c477bc88831c2be1147ee5866..ee8c9416dd8ac4e60f4e645674406aff64022aed
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-disable-MLCG-and-pulse-eater-on-GPU-rese.patch \
  file://patches/0203-drm-etnaviv-Expose-a-few-more-chipspecs-to-userspace.patch \
  "
# umpf-topic: v6.7/topic/imx-drm
# umpf-hashinfo: d5c5a85371667f91d017b8a5516d3c0c9b83f8d1
# umpf-topic-range: ee8c9416dd8ac4e60f4e645674406aff64022aed..cc9d188958669332f9aab7ca71434d07d759344f
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.7/topic/imx-gpcv2
# umpf-hashinfo: 70e57300f5d6aabf9afaa86d39a4f8dbaa7c4d56
# umpf-topic-range: cc9d188958669332f9aab7ca71434d07d759344f..2a0eed6574018e81dd075bac1eb03d53e9e43424
SRC_URI += "\
  file://patches/0401-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0402-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0403-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.7/topic/imx-sdma
# umpf-hashinfo: ffc2303afa95890b29b34d7c52b756a4f18e490c
# umpf-topic-range: 2a0eed6574018e81dd075bac1eb03d53e9e43424..3671e281aac1ee0a0ae711c4b804ef5af2f66884
SRC_URI += "\
  file://patches/0501-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0502-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.7/topic/imx8mp-dt
# umpf-hashinfo: f1e34c8682540264dfac0a8a3e8feebf6022d0af
# umpf-topic-range: 3671e281aac1ee0a0ae711c4b804ef5af2f66884..b25c1a06ff7d67a38fc6ceee99f4f536d8d79038
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0602-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0603-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0604-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0605-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.7/topic/imx8mp-hdmi
# umpf-hashinfo: dd70d58be20ffa67b9bb0fc06c163edb1b87683e
# umpf-topic-range: b25c1a06ff7d67a38fc6ceee99f4f536d8d79038..3b544fc0d664e266c55dbf1c2cdb07f8eb93fd66
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.7/topic/imx8mp-skov-dts
# umpf-hashinfo: 108fdd8e9fe4c202decde615d9c05056dd9fe6b1
# umpf-topic-range: 3b544fc0d664e266c55dbf1c2cdb07f8eb93fd66..9bb3c0bb013eaa8f51b4231f25a94a9aeba86c18
SRC_URI += "\
  file://patches/0801-dt-bindings-arm-Add-compatible-for-SKOV-i.MX8MP-RevB.patch \
  file://patches/0802-arm64-dts-freescale-Add-SKOV-IMX8MP-CPU-revB-board.patch \
  file://patches/0803-arm64-dts-freescale-imx8mp-skov-nodes-which-are-curr.patch \
  file://patches/0804-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/0805-arm64-dts-freescale-imx8mp-skov-add-pstore-support.patch \
  file://patches/0806-arm64-dts-freescale-fixes.patch \
  file://patches/0807-arm64-dts-freescale-imx8mp-skov-increase-I2C-clock-f.patch \
  file://patches/0808-arm64-dts-freescale-remove-pstore.patch \
  file://patches/0809-arm64-dts-freescale-imx8mp-skov-add-PSCR-node.patch \
  "
# umpf-topic: v6.7/topic/drm-fsl-ldb
# umpf-hashinfo: a3b0b0bc12a90fdc308e5d5d4418e995153f06b3
# umpf-topic-range: 9bb3c0bb013eaa8f51b4231f25a94a9aeba86c18..8b902d7681652c4eea8e5a0539fa6636a0ca29d2
SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.7/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 48b919ca1606d343a03e77c82068ba5fdded3a6b
# umpf-topic-range: 8b902d7681652c4eea8e5a0539fa6636a0ca29d2..bb569fb8c71b2ea7199c819d8710e0882854ca17
SRC_URI += "\
  file://patches/1001-regulator-dt-bindings-Add-system-critical-regulator-.patch \
  file://patches/1002-regulator-Introduce-handling-for-system-critical-und.patch \
  file://patches/1003-regulator-dt-bindings-Allow-system-critical-marking-.patch \
  file://patches/1004-regulator-dt-bindings-Add-regulator-uv-less-critical.patch \
  file://patches/1005-regulator-Implement-uv_survival_time-for-handling-un.patch \
  file://patches/1006-WIP-mmc-core-shut-down-storage-as-early-as-possible.patch \
  file://patches/1007-rtc-pcf85063-fix-stack-corruption-in-PCF85063-NVMEM-.patch \
  file://patches/1008-dt-bindings-power-reset-add-generic-PSCR-binding-tra.patch \
  file://patches/1009-power-reset-Introduce-PSCR-Tracking-Framework-for-No.patch \
  file://patches/1010-dt-bindings-power-reset-add-bindings-for-NVMEM-hardw.patch \
  file://patches/1011-nvmem-provide-consumer-access-to-cell-size-metrics.patch \
  file://patches/1012-power-reset-add-PSCR-NVMEM-Driver-for-Storing-Power-.patch \
  file://patches/1013-regulator-set-Power-State-Change-Reason-before-hw_pr.patch \
  file://patches/1014-thermal-core-set-Power-State-Change-Reason-before-hw.patch \
  "
# umpf-topic: v6.7/topic/gic-v3-its
# umpf-hashinfo: dbdc0d11fb7c93b5ec85e7c0ef8635c4fd1d1c86
# umpf-topic-range: bb569fb8c71b2ea7199c819d8710e0882854ca17..03a54adf43d7936941173c11afa41d85552f2366
SRC_URI += "\
  file://patches/1101-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.7/topic/pca9450
# umpf-hashinfo: 18bb45fd4a680cae0c376407b0f957dddece060c
# umpf-topic-range: 03a54adf43d7936941173c11afa41d85552f2366..7fbaf6e8639b2f3a38dcd9683c8063278997ab26
SRC_URI += "\
  file://patches/1201-WIP-regulator-pca9450-add-support-for-software-trigg.patch \
  file://patches/1202-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  file://patches/1203-WIP-regulator-pca9450-fix-build-with-kernel-v6.7.patch \
  "
# umpf-topic: v6.7/topic/imx6q-dt
# umpf-hashinfo: ea7f9ce9ae8ea7754f69ea6c2abd05074dbd1424
# umpf-topic-range: 7fbaf6e8639b2f3a38dcd9683c8063278997ab26..57ce821c58839383843f250a117fd3484b3fed67
SRC_URI += "\
  file://patches/1301-ARM-dts-imx6-skov-add-aliases-for-all-ethernet-nodes.patch \
  "
# umpf-topic: v6.7/topic/net-ksz8-switch
# umpf-hashinfo: ef8b7e816eb19edb3659ca3a0e1bf324c4959c02
# umpf-topic-range: 57ce821c58839383843f250a117fd3484b3fed67..c7c7eff318d3e25a25f39b87a8461a226d5d1a46
SRC_URI += "\
  file://patches/1401-net-dsa-microchip-ksz8-move-BMCR-specific-code-to-se.patch \
  file://patches/1402-net-dsa-microchip-Remove-redundant-optimization-in-k.patch \
  file://patches/1403-net-dsa-microchip-implement-PHY-loopback-configurati.patch \
  file://patches/1404-net-dsa-microchip-Remove-unused-FDB-timestamp-suppor.patch \
  file://patches/1405-net-dsa-microchip-Make-ksz8_r_dyn_mac_table-static.patch \
  file://patches/1406-net-dsa-microchip-ksz8-Refactor-ksz8_fdb_dump.patch \
  file://patches/1407-net-dsa-microchip-ksz8-Refactor-ksz8_r_dyn_mac_table.patch \
  file://patches/1408-net-dsa-microchip-ksz8-Unify-variable-naming-in-ksz8.patch \
  file://patches/1409-net-dsa-microchip-ksz8_r_dyn_mac_table-ksz-do-not-re.patch \
  file://patches/1410-net-dsa-microchip-ksz8_r_dyn_mac_table-return-read-w.patch \
  file://patches/1411-net-dsa-microchip-ksz8_r_dyn_mac_table-use-entries-v.patch \
  file://patches/1412-net-dsa-microchip-ksz8-Make-flow-control-speed-and-d.patch \
  file://patches/1413-net-dsa-microchip-ksz8-Add-function-to-configure-por.patch \
  file://patches/1414-net-dsa-microchip-make-phylink_mac_link_up-not-optio.patch \
  "
# umpf-release: 6.7/customers/skov/imx6/20240118-1
# umpf-topic-range: c7c7eff318d3e25a25f39b87a8461a226d5d1a46..d6006eb5156a29c10a833256b7f07b08d68ba078
SRC_URI += "\
  file://patches/1501-Release-6.7-customers-skov-imx6-20240118-1.patch \
  "
# umpf-end
