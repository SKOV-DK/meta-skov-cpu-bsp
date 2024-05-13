# umpf-base: v6.9
# umpf-name: 6.9/customers/skov/imx6
# umpf-version: 6.9/customers/skov/imx6/20240515-2
# umpf-topic: v6.9/topic/drm-sched-accounting
# umpf-hashinfo: 9c0e9670990e51859d6c4ece16c12d779229baa2
# umpf-topic-range: a38297e3fb012ddfa7ce0321a7e5a8daeb1872b6..4bb0aa8d5334e166a009b002d6f44689f95c1363
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.9/topic/dw-hdmi
# umpf-hashinfo: c5693bec87a364e73cf3c1d47d8004c6606527cb
# umpf-topic-range: 4bb0aa8d5334e166a009b002d6f44689f95c1363..45907736ce14ed31d79ec108cb55119bbc46a848
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.9/topic/etnaviv
# umpf-hashinfo: c334bc83d9db613d6e78eaa706aa5f9b5da7700d
# umpf-topic-range: 45907736ce14ed31d79ec108cb55119bbc46a848..3ac73658287080c155a0bd461175e8a5fb929f30
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-reduce-number-of-ktime_get-calls-in-IRQ-.patch \
  file://patches/0203-drm-etnaviv-add-flight-recorder-mode.patch \
  "
# umpf-topic: v6.9/topic/imx-drm
# umpf-hashinfo: 5fa77275ccefdefbc9eddbd760a4ac9c97d21b22
# umpf-topic-range: 3ac73658287080c155a0bd461175e8a5fb929f30..65f9e3b330196c9e4ffd739cd7131b4ab20e1c33
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.9/topic/imx-gpc
# umpf-hashinfo: 6a25dc09f6b51ef9495c9d32de39ba667d329038
# umpf-topic-range: 65f9e3b330196c9e4ffd739cd7131b4ab20e1c33..da9c0de2b74f8d607a35d31eb8ebc768ef60b46c
SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.9/topic/imx-gpcv2
# umpf-hashinfo: 493a47f15f8ccdc3e198ed3208e3ed1b340d253e
# umpf-topic-range: da9c0de2b74f8d607a35d31eb8ebc768ef60b46c..b0df63ed3e9a5e84601706b99de099c0439b6808
SRC_URI += "\
  file://patches/0501-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0502-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0503-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.9/topic/imx-sdma
# umpf-hashinfo: d4a7cc12d989ddd7e1279edc08292187cc4ecc29
# umpf-topic-range: b0df63ed3e9a5e84601706b99de099c0439b6808..6361768a1be863304d2482f8f4dd52549d126995
SRC_URI += "\
  file://patches/0601-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0602-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-dt
# umpf-hashinfo: 051c5eaa658c2a61d7a80c5b4682436b8a99d915
# umpf-topic-range: 6361768a1be863304d2482f8f4dd52549d126995..3f6a08e73eb9d6dc21df468c5106bc00d8098607
SRC_URI += "\
  file://patches/0701-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0702-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0703-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0704-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0705-WIP-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-hdmi
# umpf-hashinfo: 19ef13dd340c75e40a86dd23a3dd896c40b5a6ae
# umpf-topic-range: 3f6a08e73eb9d6dc21df468c5106bc00d8098607..31f2d90af2b243be58b21a2f94635fe4deaf8431
SRC_URI += "\
  file://patches/0801-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0802-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-nominal
# umpf-hashinfo: 4e36ce8ae8d0283b1de2f164f6ed890f6446c1a8
# umpf-topic-range: 31f2d90af2b243be58b21a2f94635fe4deaf8431..44fb8871746f75e09ae817732f6e966b1cc7bbfd
SRC_URI += "\
  file://patches/0901-arm64-dts-imx8mp-Align-both-CSI2-pixel-clock.patch \
  file://patches/0902-clk-imx8mp-inform-CCF-of-maximum-frequency-of-clocks.patch \
  file://patches/0903-arm64-dts-imx8mp-Add-optional-nominal-drive-mode-DTS.patch \
  file://patches/0904-arm64-dts-imx8mp-add-fsl-nominal-mode-property-into-.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-skov-dts
# umpf-hashinfo: f58676507e14c6e7740ccb67dd44c0d2ba7e56f5
# umpf-topic-range: 44fb8871746f75e09ae817732f6e966b1cc7bbfd..f5284bbbf94a6fd6a75d8259d5439479070139f2
SRC_URI += "\
  file://patches/1001-arm64-dts-freescale-imx8mp-skov-nodes-which-are-curr.patch \
  file://patches/1002-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/1003-arm64-dts-freescale-fixes.patch \
  file://patches/1004-arm64-dts-freescale-imx8mp-skov-increase-I2C-clock-f.patch \
  file://patches/1005-arm64-dts-freescale-imx8mp-skov-add-PSCR-node.patch \
  file://patches/1006-arm64-dts-freescale-imx8mp-skov-add-basic-and-revC-B.patch \
  file://patches/1007-arm64-dts-freescale-imx8mp-skov-reva-correct-PMIC-bo.patch \
  file://patches/1008-arm64-dts-freescale-imx8mp-skov-operate-CPU-at-850-m.patch \
  file://patches/1009-arm64-dts-freescale-imx8mp-skov-operate-SoC-in-nomin.patch \
  file://patches/1010-arm64-dts-i.MX8MP-skov-reva-set-PMIC-restart-handler.patch \
  file://patches/1011-arm64-dts-freescale-imx8mp-skov-revb-hdmi-use-i.MX-I.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-dt-npu
# umpf-hashinfo: 93b80787d5aaabfa5a51e74681afce1536561405
# umpf-topic-range: f5284bbbf94a6fd6a75d8259d5439479070139f2..308b3b536deeb9cdf8cfc9ad43f8469771a6d969
SRC_URI += "\
  file://patches/1101-HACK-arm64-dts-imx8mp-Hook-up-MLMIX-reset-to-power-d.patch \
  "
# umpf-topic: v6.8/topic/drm-fsl-ldb
# umpf-hashinfo: 8b41dc23a7e169047e05bd485563734d3396038f
# umpf-topic-range: 308b3b536deeb9cdf8cfc9ad43f8469771a6d969..b9b7eade811b1cf545f8fa2aa1df1a52701c998d
SRC_URI += "\
  file://patches/1201-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.9/topic/hw_protection
# umpf-hashinfo: 04ecd640f94a81054d1b1564fa658cd1855b6a5d
# umpf-topic-range: b9b7eade811b1cf545f8fa2aa1df1a52701c998d..09f28c6a358c1bf64a8ba834816beed373ca7adb
SRC_URI += "\
  file://patches/1301-reboot-replace-__hw_protection_shutdown-bool-action-.patch \
  file://patches/1302-reboot-reboot-not-shutdown-on-hw_protection_reboot-t.patch \
  file://patches/1303-reboot-add-support-for-configuring-emergency-hardwar.patch \
  file://patches/1304-regulator-allow-user-configuration-of-hardware-prote.patch \
  file://patches/1305-platform-chrome-cros_ec_lpc-prepare-for-hw_protectio.patch \
  file://patches/1306-dt-bindings-thermal-give-OS-some-leeway-in-absence-o.patch \
  file://patches/1307-thermal-core-allow-user-configuration-of-hardware-pr.patch \
  file://patches/1308-reboot-retire-hw_protection_reboot-and-hw_protection.patch \
  "
# umpf-topic: v6.9/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 3d2dd221e8852b440596272e9e146231a426db8b
# umpf-topic-range: 09f28c6a358c1bf64a8ba834816beed373ca7adb..5abcda6a620c7618d7439b9653a18363dcea88b7
SRC_URI += "\
  file://patches/1401-WIP-mmc-core-shut-down-storage-as-early-as-possible.patch \
  file://patches/1402-rtc-pcf85063-fix-stack-corruption-in-PCF85063-NVMEM-.patch \
  file://patches/1403-power-Extend-power_on_reason.h-for-upcoming-PSCRR-fr.patch \
  file://patches/1404-dt-bindings-power-reset-add-generic-PSCRR-binding-tr.patch \
  file://patches/1405-power-reset-Introduce-PSCR-Recording-Framework-for-N.patch \
  file://patches/1406-dt-bindings-power-reset-add-bindings-for-NVMEM-hardw.patch \
  file://patches/1407-nvmem-provide-consumer-access-to-cell-size-metrics.patch \
  file://patches/1408-power-reset-add-PSCR-NVMEM-Driver-for-Recording-Powe.patch \
  file://patches/1409-regulator-set-Power-State-Change-Reason-before-hw_pr.patch \
  file://patches/1410-thermal-core-Record-PSCR-before-hw_protection_shutdo.patch \
  "
# umpf-topic: v6.8/topic/gic-v3-its
# umpf-hashinfo: fdae192fa61f6e8b20131c838fd1b85f807ab60d
# umpf-topic-range: 5abcda6a620c7618d7439b9653a18363dcea88b7..8d7b00b5e091053d9260f53874c01c26d830f350
SRC_URI += "\
  file://patches/1501-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.9/topic/pca9450
# umpf-hashinfo: bf9c33a9b8d6482f49b0b3c1c46da32b6bf41c68
# umpf-topic-range: 8d7b00b5e091053d9260f53874c01c26d830f350..470dddab6243752044870d257f9e013616b0ebe6
SRC_URI += "\
  file://patches/1601-regulator-pca9450-use-dev_err_probe-on-errors-claimi.patch \
  file://patches/1602-regulator-pca9450-enable-restart-handler-for-I2C-ope.patch \
  file://patches/1603-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  "
# umpf-topic: v6.9/topic/net-ksz8-fdb-dump
# umpf-hashinfo: da5dfccc1f7b38c77c8fa784728d730fe36e9d5a
# umpf-topic-range: 470dddab6243752044870d257f9e013616b0ebe6..2fa5d1723e6e9d2cd6df8a656e6cd9746e1b6ae7
SRC_URI += "\
  file://patches/1701-net-dsa-microchip-Remove-unused-FDB-timestamp-suppor.patch \
  file://patches/1702-net-dsa-microchip-Make-ksz8_r_dyn_mac_table-static.patch \
  file://patches/1703-net-dsa-microchip-ksz8-Refactor-ksz8_fdb_dump.patch \
  file://patches/1704-net-dsa-microchip-ksz8-Refactor-ksz8_r_dyn_mac_table.patch \
  file://patches/1705-net-dsa-microchip-ksz8-Unify-variable-naming-in-ksz8.patch \
  file://patches/1706-net-dsa-microchip-ksz8_r_dyn_mac_table-ksz-do-not-re.patch \
  file://patches/1707-net-dsa-microchip-ksz8_r_dyn_mac_table-return-read-w.patch \
  file://patches/1708-net-dsa-microchip-ksz8_r_dyn_mac_table-use-entries-v.patch \
  "
# umpf-release: 6.9/customers/skov/imx6/20240515-2
# umpf-topic-range: 2fa5d1723e6e9d2cd6df8a656e6cd9746e1b6ae7..172cf33c9fe71a331de3da0b66445fecd11f682a
SRC_URI += "\
  file://patches/1801-Release-6.9-customers-skov-imx6-20240515-2.patch \
  "
UMPF_BASE = "6.9"
UMPF_VERSION = "20240515-2"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION = "${UMPF_BASE}"
# umpf-end
