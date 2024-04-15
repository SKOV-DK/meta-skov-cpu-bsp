# umpf-base: v6.9-rc6
# umpf-name: 6.9/customers/skov/imx6
# umpf-version: 6.9/customers/skov/imx6/20240502-3
# umpf-topic: v6.9/topic/drm-sched-accounting
# umpf-hashinfo: 9c0e9670990e51859d6c4ece16c12d779229baa2
# umpf-topic-range: e67572cd2204894179d89bd7b984072f19313b03..e7dd0b1054a6b5156e0725779dd0684383f8e238
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.9/topic/dw-hdmi
# umpf-hashinfo: c5693bec87a364e73cf3c1d47d8004c6606527cb
# umpf-topic-range: e7dd0b1054a6b5156e0725779dd0684383f8e238..afaba1a0e3e587bc1d9bbdd53d919adcdd59b792
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.9/topic/etnaviv
# umpf-hashinfo: c334bc83d9db613d6e78eaa706aa5f9b5da7700d
# umpf-topic-range: afaba1a0e3e587bc1d9bbdd53d919adcdd59b792..69774b34338fb23f8e0997f7b0bee36e5d7d0ee5
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-reduce-number-of-ktime_get-calls-in-IRQ-.patch \
  file://patches/0203-drm-etnaviv-add-flight-recorder-mode.patch \
  "
# umpf-topic: v6.9/topic/imx-drm
# umpf-hashinfo: 5fa77275ccefdefbc9eddbd760a4ac9c97d21b22
# umpf-topic-range: 69774b34338fb23f8e0997f7b0bee36e5d7d0ee5..c47b7fb6ee678bf938e13a7902c32c9284dda1d6
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.9/topic/imx-gpc
# umpf-hashinfo: 6a25dc09f6b51ef9495c9d32de39ba667d329038
# umpf-topic-range: c47b7fb6ee678bf938e13a7902c32c9284dda1d6..cd3cbe3d95587b9604b9898a0621d5cf30c2935b
SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.9/topic/imx-gpcv2
# umpf-hashinfo: 493a47f15f8ccdc3e198ed3208e3ed1b340d253e
# umpf-topic-range: cd3cbe3d95587b9604b9898a0621d5cf30c2935b..59362c8865a2b97ddb2dd3ac8246643ed74bf3d1
SRC_URI += "\
  file://patches/0501-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0502-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0503-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.9/topic/imx-sdma
# umpf-hashinfo: d4a7cc12d989ddd7e1279edc08292187cc4ecc29
# umpf-topic-range: 59362c8865a2b97ddb2dd3ac8246643ed74bf3d1..550720b5fd34a0b444d87a18c9b44a37ce0c622b
SRC_URI += "\
  file://patches/0601-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0602-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-dt
# umpf-hashinfo: 051c5eaa658c2a61d7a80c5b4682436b8a99d915
# umpf-topic-range: 550720b5fd34a0b444d87a18c9b44a37ce0c622b..3996da93481c4a00a3f4deebb377294b8f4f25ab
SRC_URI += "\
  file://patches/0701-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0702-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0703-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0704-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0705-WIP-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-hdmi
# umpf-hashinfo: 19ef13dd340c75e40a86dd23a3dd896c40b5a6ae
# umpf-topic-range: 3996da93481c4a00a3f4deebb377294b8f4f25ab..99da382b0200e8705b109ff1b4a5ed25cec6199c
SRC_URI += "\
  file://patches/0801-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0802-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-nominal
# umpf-hashinfo: 4e36ce8ae8d0283b1de2f164f6ed890f6446c1a8
# umpf-topic-range: 99da382b0200e8705b109ff1b4a5ed25cec6199c..19efd8349e361e09ddacbe3bb3467a6e8cfb8e82
SRC_URI += "\
  file://patches/0901-arm64-dts-imx8mp-Align-both-CSI2-pixel-clock.patch \
  file://patches/0902-clk-imx8mp-inform-CCF-of-maximum-frequency-of-clocks.patch \
  file://patches/0903-arm64-dts-imx8mp-Add-optional-nominal-drive-mode-DTS.patch \
  file://patches/0904-arm64-dts-imx8mp-add-fsl-nominal-mode-property-into-.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-skov-dts
# umpf-hashinfo: d83e26e094ae71a2592a044cffd5d0c7717c5ae6
# umpf-topic-range: 19efd8349e361e09ddacbe3bb3467a6e8cfb8e82..0638bcf317cd9d772757cdffbe346a76d9337875
SRC_URI += "\
  file://patches/1001-arm64-dts-freescale-imx8mp-skov-nodes-which-are-curr.patch \
  file://patches/1002-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/1003-arm64-dts-freescale-imx8mp-skov-add-pstore-support.patch \
  file://patches/1004-arm64-dts-freescale-fixes.patch \
  file://patches/1005-arm64-dts-freescale-imx8mp-skov-increase-I2C-clock-f.patch \
  file://patches/1006-arm64-dts-freescale-remove-pstore.patch \
  file://patches/1007-arm64-dts-freescale-imx8mp-skov-add-PSCR-node.patch \
  file://patches/1008-arm64-dts-freescale-imx8mp-skov-add-basic-and-revC-B.patch \
  file://patches/1009-arm64-dts-freescale-imx8mp-skov-reva-correct-PMIC-bo.patch \
  file://patches/1010-arm64-dts-freescale-imx8mp-skov-operate-CPU-at-850-m.patch \
  file://patches/1011-arm64-dts-freescale-imx8mp-skov-operate-SoC-in-nomin.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-dt-npu
# umpf-hashinfo: 93b80787d5aaabfa5a51e74681afce1536561405
# umpf-topic-range: 0638bcf317cd9d772757cdffbe346a76d9337875..aebbf99929ab87fb380d6c14dd0d78147d10b677
SRC_URI += "\
  file://patches/1101-HACK-arm64-dts-imx8mp-Hook-up-MLMIX-reset-to-power-d.patch \
  "
# umpf-topic: v6.8/topic/drm-fsl-ldb
# umpf-hashinfo: 8b41dc23a7e169047e05bd485563734d3396038f
# umpf-topic-range: aebbf99929ab87fb380d6c14dd0d78147d10b677..b7e6615a2877459b07e831881e35112d8139b5d0
SRC_URI += "\
  file://patches/1201-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.9/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 1070e13255533bf8de2992619242dac9daeeff39
# umpf-topic-range: b7e6615a2877459b07e831881e35112d8139b5d0..c316c23d84f7afaa0865c973c9eb9aaf30778dd5
SRC_URI += "\
  file://patches/1301-WIP-mmc-core-shut-down-storage-as-early-as-possible.patch \
  file://patches/1302-rtc-pcf85063-fix-stack-corruption-in-PCF85063-NVMEM-.patch \
  file://patches/1303-power-Extend-power_on_reason.h-for-upcoming-PSCRR-fr.patch \
  file://patches/1304-dt-bindings-power-reset-add-generic-PSCRR-binding-tr.patch \
  file://patches/1305-power-reset-Introduce-PSCR-Recording-Framework-for-N.patch \
  file://patches/1306-dt-bindings-power-reset-add-bindings-for-NVMEM-hardw.patch \
  file://patches/1307-nvmem-provide-consumer-access-to-cell-size-metrics.patch \
  file://patches/1308-power-reset-add-PSCR-NVMEM-Driver-for-Recording-Powe.patch \
  file://patches/1309-regulator-set-Power-State-Change-Reason-before-hw_pr.patch \
  file://patches/1310-thermal-core-Record-PSCR-before-hw_protection_shutdo.patch \
  "
# umpf-topic: v6.8/topic/gic-v3-its
# umpf-hashinfo: fdae192fa61f6e8b20131c838fd1b85f807ab60d
# umpf-topic-range: c316c23d84f7afaa0865c973c9eb9aaf30778dd5..1b7075ba9a12af26180d87e5f3e0e5c20cae6e85
SRC_URI += "\
  file://patches/1401-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.9/topic/pca9450
# umpf-hashinfo: ccc00a3d312af9533150443ef6680715bf5d316f
# umpf-topic-range: 1b7075ba9a12af26180d87e5f3e0e5c20cae6e85..ac1a4f0ebc90e5474a7c5a94df66f17c72ac8b26
SRC_URI += "\
  file://patches/1501-regulator-pca9450-use-dev_err_probe-on-errors-claimi.patch \
  file://patches/1502-WIP-regulator-pca9450-add-support-for-software-trigg.patch \
  file://patches/1503-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  "
# umpf-topic: v6.9/topic/net-ksz8-fdb-dump
# umpf-hashinfo: da5dfccc1f7b38c77c8fa784728d730fe36e9d5a
# umpf-topic-range: ac1a4f0ebc90e5474a7c5a94df66f17c72ac8b26..fa0285dcb86cc993fda5cfd32dc2f2d49d7242a2
SRC_URI += "\
  file://patches/1601-net-dsa-microchip-Remove-unused-FDB-timestamp-suppor.patch \
  file://patches/1602-net-dsa-microchip-Make-ksz8_r_dyn_mac_table-static.patch \
  file://patches/1603-net-dsa-microchip-ksz8-Refactor-ksz8_fdb_dump.patch \
  file://patches/1604-net-dsa-microchip-ksz8-Refactor-ksz8_r_dyn_mac_table.patch \
  file://patches/1605-net-dsa-microchip-ksz8-Unify-variable-naming-in-ksz8.patch \
  file://patches/1606-net-dsa-microchip-ksz8_r_dyn_mac_table-ksz-do-not-re.patch \
  file://patches/1607-net-dsa-microchip-ksz8_r_dyn_mac_table-return-read-w.patch \
  file://patches/1608-net-dsa-microchip-ksz8_r_dyn_mac_table-use-entries-v.patch \
  "
# umpf-release: 6.9/customers/skov/imx6/20240502-3
# umpf-topic-range: fa0285dcb86cc993fda5cfd32dc2f2d49d7242a2..5efacf82bb046679ea737574be4d8668d81b9631
SRC_URI += "\
  file://patches/1701-Release-6.9-customers-skov-imx6-20240502-3.patch \
  "
UMPF_BASE = "6.9-rc6"
UMPF_VERSION = "20240502-3"
PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION = "${UMPF_BASE}"
# umpf-end
