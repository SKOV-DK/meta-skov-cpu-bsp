# umpf-base: v6.9
# umpf-name: 6.9/customers/skov/imx6
# umpf-version: 6.9/customers/skov/imx6/20241127-5
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
# umpf-hashinfo: 9b7b278a8480c5fd38885f388711cc45a747439f
# umpf-topic-range: 45907736ce14ed31d79ec108cb55119bbc46a848..ef9798faaf7ecc0f3b27b8093fae063b52fe996c
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-reduce-number-of-ktime_get-calls-in-IRQ-.patch \
  file://patches/0203-drm-etnaviv-add-flight-recorder-mode.patch \
  file://patches/0204-drm-etnaviv-don-t-disable-TS-on-MMUv2-core-when-movi.patch \
  "
# umpf-topic: v6.9/topic/imx-drm
# umpf-hashinfo: c999a606bca357f348bd64c633977028be77ae2f
# umpf-topic-range: ef9798faaf7ecc0f3b27b8093fae063b52fe996c..b29f12e8133ab058293aa8a2441af64f36eb73f3
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  file://patches/0305-gpu-ipu-v3-pre-don-t-use-fixed-timeout-when-waiting-.patch \
  "
# umpf-topic: v6.9/topic/imx-gpc
# umpf-hashinfo: 6a25dc09f6b51ef9495c9d32de39ba667d329038
# umpf-topic-range: b29f12e8133ab058293aa8a2441af64f36eb73f3..89f43896b6b7db160a9ad6afb2d5cb22102f37e5
SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.9/topic/imx-gpcv2
# umpf-hashinfo: 493a47f15f8ccdc3e198ed3208e3ed1b340d253e
# umpf-topic-range: 89f43896b6b7db160a9ad6afb2d5cb22102f37e5..fef492ad6b4ea005e621bf55fc1ad62ab7afc6af
SRC_URI += "\
  file://patches/0501-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0502-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0503-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.9/topic/imx-sdma
# umpf-hashinfo: 3291c2c19e9c496c0bf40bb72cf672979e308d7b
# umpf-topic-range: fef492ad6b4ea005e621bf55fc1ad62ab7afc6af..2afeae89e1ef237689d3dce64481945465914378
SRC_URI += "\
  file://patches/0601-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0602-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-dt
# umpf-hashinfo: 051c5eaa658c2a61d7a80c5b4682436b8a99d915
# umpf-topic-range: 2afeae89e1ef237689d3dce64481945465914378..99196659d9bdd6355a81b7959330218ec5341b89
SRC_URI += "\
  file://patches/0701-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0702-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0703-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0704-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0705-WIP-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-hdmi
# umpf-hashinfo: 19ef13dd340c75e40a86dd23a3dd896c40b5a6ae
# umpf-topic-range: 99196659d9bdd6355a81b7959330218ec5341b89..0d16b28c69b115cfef74b17f922dee67aa5d0606
SRC_URI += "\
  file://patches/0801-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0802-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-nominal
# umpf-hashinfo: 4e36ce8ae8d0283b1de2f164f6ed890f6446c1a8
# umpf-topic-range: 0d16b28c69b115cfef74b17f922dee67aa5d0606..de872dcb27cbcc7730bd4c44702c9aee05391e28
SRC_URI += "\
  file://patches/0901-arm64-dts-imx8mp-Align-both-CSI2-pixel-clock.patch \
  file://patches/0902-clk-imx8mp-inform-CCF-of-maximum-frequency-of-clocks.patch \
  file://patches/0903-arm64-dts-imx8mp-Add-optional-nominal-drive-mode-DTS.patch \
  file://patches/0904-arm64-dts-imx8mp-add-fsl-nominal-mode-property-into-.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-skov-dts
# umpf-hashinfo: 8e3446fdf3312aefc0e0bfa1d703a48cde0bc375
# umpf-topic-range: de872dcb27cbcc7730bd4c44702c9aee05391e28..f91c5503c7241a7d3b9da6ed7181962d9f4067be
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
  file://patches/1012-arm64-dts-freescale-support-new-i.MX8MP-based-Skov-b.patch \
  "
# umpf-topic: v6.9/topic/imx8mp-dt-npu
# umpf-hashinfo: 93b80787d5aaabfa5a51e74681afce1536561405
# umpf-topic-range: f91c5503c7241a7d3b9da6ed7181962d9f4067be..830000c9f83456ecd882f256016f74aba8acad1f
SRC_URI += "\
  file://patches/1101-HACK-arm64-dts-imx8mp-Hook-up-MLMIX-reset-to-power-d.patch \
  "
# umpf-topic: v6.8/topic/drm-fsl-ldb
# umpf-hashinfo: 8b41dc23a7e169047e05bd485563734d3396038f
# umpf-topic-range: 830000c9f83456ecd882f256016f74aba8acad1f..02ff90c0d8b776c41843bcceb1ae2516a0c76fce
SRC_URI += "\
  file://patches/1201-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.9/topic/hw_protection
# umpf-hashinfo: 66e3fb82c4b2b424d2ba55d9e0012de41925b41d
# umpf-topic-range: 02ff90c0d8b776c41843bcceb1ae2516a0c76fce..53114038edf58da7f73b7e6c5d55f900998e9332
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
# umpf-topic-range: 53114038edf58da7f73b7e6c5d55f900998e9332..ebc0f926e56dc88c0cb69731029664ff2f871ce6
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
# umpf-topic-range: ebc0f926e56dc88c0cb69731029664ff2f871ce6..5a68589531dcf89c467b603cb17f9c50545029ac
SRC_URI += "\
  file://patches/1501-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.9/topic/pca9450
# umpf-hashinfo: bf9c33a9b8d6482f49b0b3c1c46da32b6bf41c68
# umpf-topic-range: 5a68589531dcf89c467b603cb17f9c50545029ac..49db0200d26fbaaf1bb479866204362d9f46e669
SRC_URI += "\
  file://patches/1601-regulator-pca9450-use-dev_err_probe-on-errors-claimi.patch \
  file://patches/1602-regulator-pca9450-enable-restart-handler-for-I2C-ope.patch \
  file://patches/1603-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  "
# umpf-topic: v6.9/topic/net-ksz8-fdb-dump
# umpf-hashinfo: da5dfccc1f7b38c77c8fa784728d730fe36e9d5a
# umpf-topic-range: 49db0200d26fbaaf1bb479866204362d9f46e669..9ffc7f8091388d05bb0bd22ac09ab77ad7a8ef6a
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
# umpf-topic: v6.9/topic/dsa-ksz-dcb-dscp
# umpf-hashinfo: 82a72a0dceba8c4d9d08f8608707c4232ac579b2
# umpf-topic-range: 9ffc7f8091388d05bb0bd22ac09ab77ad7a8ef6a..0ce2dd9d5ba145558f09b8db48da17de0a4705b6
SRC_URI += "\
  file://patches/1801-net-dsa-add-support-for-DCB-get-set-apptrust-configu.patch \
  file://patches/1802-net-dsa-microchip-add-IPM-information-support.patch \
  file://patches/1803-net-add-IEEE-802.1q-specific-helpers.patch \
  file://patches/1804-net-dsa-microchip-add-multi-queue-support-for-KSZ88X.patch \
  file://patches/1805-net-dsa-microchip-add-support-for-different-DCB-app-.patch \
  file://patches/1806-net-dsa-microchip-dcb-add-special-handling-for-KSZ88.patch \
  file://patches/1807-net-dsa-microchip-enable-ETS-support-for-KSZ989X-var.patch \
  file://patches/1808-net-dsa-microchip-init-predictable-IPM-to-queue-mapp.patch \
  file://patches/1809-net-dsa-microchip-let-DCB-code-do-PCP-and-DSCP-polic.patch \
  file://patches/1810-net-dsa-add-support-switches-global-DSCP-priority-ma.patch \
  file://patches/1811-net-dsa-microchip-add-support-DSCP-priority-mapping.patch \
  file://patches/1812-selftests-microchip-add-test-for-QoS-support-on-KSZ9.patch \
  file://patches/1813-net-dsa-microchip-Correct-initialization-order-for-K.patch \
  "
# umpf-topic: v6.9/topic/panel-tian-g07017
# umpf-hashinfo: 4bed4ad9e1d17dbb51316d73314296ee83d4388e
# umpf-topic-range: 0ce2dd9d5ba145558f09b8db48da17de0a4705b6..adfa940a7520cc821554a5a30d0eeb9932379fff
SRC_URI += "\
  file://patches/1901-drm-panel-simple-support-TOPLAND-TIAN-G07017-LCD-pan.patch \
  "
# umpf-release: 6.9/customers/skov/imx6/20241127-5
# umpf-topic-range: adfa940a7520cc821554a5a30d0eeb9932379fff..5b57b328907b952b82a7bab58d270653a2dbd266
SRC_URI += "\
  file://patches/2001-Release-6.9-customers-skov-imx6-20241127-5.patch \
  "
UMPF_BASE = "6.9"
UMPF_VERSION = "20241127-5"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION = "${UMPF_BASE}"
# umpf-end
