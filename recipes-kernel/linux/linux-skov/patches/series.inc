# umpf-base: v6.14.11
# umpf-name: 6.14/customers/skov/imx6
# umpf-version: 6.14/customers/skov/imx6/20250911-1
# umpf-topic: v6.12/topic/drm-sched-accounting
# umpf-hashinfo: a886925c1b1aedf839db4297e1b6a8e87e01b63d
# umpf-topic-range: b9d5d463c216763cec719c04536ea9e14512cad4..a522d517242f4bf26bcfb8b64f179ffce4d108af
UMPF_SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.13/topic/dw-hdmi
# umpf-hashinfo: 09b091ba6cd0fefa5356eb4afb0cd2aff05cb345
# umpf-topic-range: a522d517242f4bf26bcfb8b64f179ffce4d108af..b35759ca5e6c87b89665d40ebac89bd70517face
UMPF_SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.13/topic/etnaviv
# umpf-hashinfo: 021830299d7ebc2b6dc3a670e6fe9535d2b7898d
# umpf-topic-range: b35759ca5e6c87b89665d40ebac89bd70517face..ea350cea4046426241f28895799fb8f777a19743
UMPF_SRC_URI += "\
  file://patches/0201-drm-etnaviv-add-flight-recorder-mode.patch \
  file://patches/0202-drm-etnaviv-reset-bit-0-when-disabling-pulse-eater-f.patch \
  file://patches/0203-drm-etnaviv-disable-pulse-eater-on-cores-with-3D-pip.patch \
  file://patches/0204-drm-etnaviv-dump-outstanding-read-write-debug-regist.patch \
  "
# umpf-topic: v6.13/topic/imx-drm
# umpf-hashinfo: e52c347d736db54c09f72e01f536bb0db025be6c
# umpf-topic-range: ea350cea4046426241f28895799fb8f777a19743..ef10ecbd252b38356a35b199e3dd7fa30526b987
UMPF_SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v6.13/topic/imx-gpc
# umpf-hashinfo: ede209c646be26a36f17647e6fd82d8fe7f85057
# umpf-topic-range: ef10ecbd252b38356a35b199e3dd7fa30526b987..0b38e65291e3ad060f6f6b32bec47707dde1badc
UMPF_SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.14/topic/imx-gpcv2
# umpf-hashinfo: fb8175864f1faaeaf2afd0059ee7cebb5a7105f8
# umpf-topic-range: 0b38e65291e3ad060f6f6b32bec47707dde1badc..52ea484b011e3eb71549689c803a4d61a54fc292
UMPF_SRC_URI += "\
  file://patches/0501-pmdomain-imx-gpcv2-split-PGC-domain-probe-in-two-pas.patch \
  file://patches/0502-pmdomain-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0503-pmdomain-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.14/topic/imx8mp-dt
# umpf-hashinfo: 957ee615df4cfc68ba7593db23b2ccdf466b1c05
# umpf-topic-range: 52ea484b011e3eb71549689c803a4d61a54fc292..7ee1ff0f8e3ff4328846fcb2bd6415a5b1987c84
UMPF_SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0602-HACK-arm64-dts-imx8mp-Hook-up-MLMIX-reset-to-power-d.patch \
  "
# umpf-topic: v6.14/topic/imx8mp-nominal
# umpf-hashinfo: 7027e3a67027dc587ddd5259ef6f6cb9fdc846e8
# umpf-topic-range: 7ee1ff0f8e3ff4328846fcb2bd6415a5b1987c84..9992121369fd8f6c6ce5fd4842042fc8dbc213eb
UMPF_SRC_URI += "\
  file://patches/0701-dt-bindings-clock-imx8m-document-nominal-overdrive-p.patch \
  file://patches/0702-arm64-dts-imx8mp-Add-optional-nominal-drive-mode-DTS.patch \
  file://patches/0703-arm64-dts-imx8mp-add-fsl-nominal-mode-property-into-.patch \
  file://patches/0704-arm64-dts-freescale-imx8mp-skov-configure-LDB-clock-.patch \
  file://patches/0705-arm64-dts-freescale-imx8mp-skov-operate-SoC-in-nomin.patch \
  "
# umpf-topic: v6.14/topic/imx8mp-skov-dts
# umpf-hashinfo: 974d9c2fed9fe7e864cc7d922694db853e9feba0
# umpf-topic-range: 9992121369fd8f6c6ce5fd4842042fc8dbc213eb..35da0ac46acd0ed0f55c75661b9f48ede8ac8276
UMPF_SRC_URI += "\
  file://patches/0801-arm64-dts-imx8mp-skov-use-I2C5-for-DDC.patch \
  file://patches/0802-arm64-dts-imx8mp-skov-describe-HDMI-display-pipeline.patch \
  file://patches/0803-dt-bindings-display-lvds-codec-add-ti-sn65lvds822.patch \
  file://patches/0804-arm64-dts-imx8mp-skov-describe-LVDS-display-pipeline.patch \
  file://patches/0805-arm64-dts-imx8mp-skov-configure-uart1-for-RS485.patch \
  file://patches/0806-arm64-dts-imx8mp-skov-describe-mains-fail-detection.patch \
  file://patches/0807-arm64-dts-imx8mp-skov-fix-phy-mode.patch \
  file://patches/0808-arm64-dts-imx8mp-skov-increase-I2C-clock-frequency-f.patch \
  file://patches/0809-arm64-dts-i.MX8MP-skov-reva-set-PMIC-restart-handler.patch \
  file://patches/0810-arm64-dts-freescale-imx8mp-skov-add-PSCR-node.patch \
  file://patches/0811-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/0812-arm64-dts-freescale-reduce-regulator-uv-less-critica.patch \
  file://patches/0813-dt-bindings-arm-fsl-add-more-compatibles-for-Skov-i..patch \
  file://patches/0814-arm64-dts-imx8mp-skov-add-basic-board-as-fallback.patch \
  file://patches/0815-arm64-dts-imx8mp-skov-move-I2C2-pin-control-group-in.patch \
  file://patches/0816-arm64-dts-imx8mp-skov-describe-I2C-bus-recovery-for-.patch \
  file://patches/0817-arm64-dts-imx8mp-skov-add-revC-BD500-board.patch \
  file://patches/0818-arm64-dts-imx8mp-skov-support-new-7-panel-board.patch \
  file://patches/0819-dt-bindings-vendor-prefixes-Add-JuTouch-Technology-C.patch \
  file://patches/0820-drm-panel-simple-add-JuTouch-JT101TM023.patch \
  file://patches/0821-arm64-dts-imx8mp-skov-support-new-10-panel-board.patch \
  file://patches/0822-drm-panel-simple-add-JuTouch-JT070TM041.patch \
  file://patches/0823-arm64-dts-imx8mp-skov-support-new-7inch-panel-board.patch \
  file://patches/0824-arm64-dts-imx8mp-skov-disable-caam-job-ring-2.patch \
  "
# umpf-topic: v6.8/topic/drm-fsl-ldb
# umpf-hashinfo: 8b41dc23a7e169047e05bd485563734d3396038f
# umpf-topic-range: 35da0ac46acd0ed0f55c75661b9f48ede8ac8276..0d2c964384ede8174ce30ddc55ce7ad162a60aa6
UMPF_SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.14/topic/hw_protection
# umpf-hashinfo: 62041d9dfc4d156556c209cd6109e75421d7bfcf
# umpf-topic-range: 0d2c964384ede8174ce30ddc55ce7ad162a60aa6..6e2837ddf26060c99025d4da0a1fe6778d4c7c8c
UMPF_SRC_URI += "\
  file://patches/1001-docs-thermal-sync-hardware-protection-doc-with-code.patch \
  file://patches/1002-reboot-describe-do_kernel_restart-s-cmd-argument-in-.patch \
  file://patches/1003-reboot-rename-now-misleading-__hw_protection_shutdow.patch \
  file://patches/1004-reboot-indicate-whether-it-is-a-HARDWARE-PROTECTION-.patch \
  file://patches/1005-reboot-add-support-for-configuring-emergency-hardwar.patch \
  file://patches/1006-regulator-allow-user-configuration-of-hardware-prote.patch \
  file://patches/1007-platform-chrome-cros_ec_lpc-prepare-for-hw_protectio.patch \
  file://patches/1008-dt-bindings-thermal-give-OS-some-leeway-in-absence-o.patch \
  file://patches/1009-thermal-core-allow-user-configuration-of-hardware-pr.patch \
  file://patches/1010-reboot-retire-hw_protection_reboot-and-hw_protection.patch \
  "
# umpf-topic: v6.14/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 87f91a081ae53360efcef3063b505a8eabbec5b2
# umpf-topic-range: 6e2837ddf26060c99025d4da0a1fe6778d4c7c8c..2d114afd5b05578cb1ea0b133d896c11381f0970
UMPF_SRC_URI += "\
  file://patches/1101-WIP-mmc-core-shut-down-storage-as-early-as-possible.patch \
  file://patches/1102-power-Extend-power_on_reason.h-for-upcoming-PSCRR-fr.patch \
  file://patches/1103-dt-bindings-power-reset-add-generic-PSCRR-binding-tr.patch \
  file://patches/1104-power-reset-Introduce-PSCR-Recording-Framework-for-N.patch \
  file://patches/1105-dt-bindings-power-reset-add-bindings-for-NVMEM-hardw.patch \
  file://patches/1106-nvmem-provide-consumer-access-to-cell-size-metrics.patch \
  file://patches/1107-power-reset-add-PSCR-NVMEM-Driver-for-Recording-Powe.patch \
  file://patches/1108-regulator-set-Power-State-Change-Reason-before-hw_pr.patch \
  file://patches/1109-thermal-core-Record-PSCR-before-hw_protection_shutdo.patch \
  "
# umpf-topic: v6.8/topic/gic-v3-its
# umpf-hashinfo: fdae192fa61f6e8b20131c838fd1b85f807ab60d
# umpf-topic-range: 2d114afd5b05578cb1ea0b133d896c11381f0970..d8c219288be2312dcb7531419fe87dccd15f4752
UMPF_SRC_URI += "\
  file://patches/1201-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.14/topic/pca9450
# umpf-hashinfo: faa472d8da2ede80fb4083c357119270a3615f22
# umpf-topic-range: d8c219288be2312dcb7531419fe87dccd15f4752..4d178b649daee0aa259ca7a29c5ec2d9e400cc19
UMPF_SRC_URI += "\
  file://patches/1301-regulator-pca9450-introduce-system-restart-handler.patch \
  file://patches/1302-regulator-dt-bindings-pca9450-add-restart-handler-pr.patch \
  file://patches/1303-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  "
# umpf-topic: v6.14/topic/rtc-pcf85063
# umpf-hashinfo: 3cc474c7cd4f3c32229f30ec39e9bbbe627e33fb
# umpf-topic-range: 4d178b649daee0aa259ca7a29c5ec2d9e400cc19..b3b3883a238bafbe9cba3f06114fe1263bf6361c
UMPF_SRC_URI += "\
  file://patches/1401-rtc-pcf85063-ensure-12-hour-mode-is-disabled.patch \
  "
# umpf-topic: v6.14/topic/imx-gpio-base-warning
# umpf-hashinfo: 773cf25f8d2da5bc69df651e76c4442a00fd4dab
# umpf-topic-range: b3b3883a238bafbe9cba3f06114fe1263bf6361c..bfe7bb9e29b7fe98cbd49910bdec6ca60a4adc0e
UMPF_SRC_URI += "\
  file://patches/1501-gpio-mxc-configure-dynamic-GPIO-base-for-CONFIG_GPIO.patch \
  "
# umpf-topic: v6.14/topic/net-phy-micrel
# umpf-hashinfo: ed0b251fdebce895ec36ed4536f3fe02a8abc0b6
# umpf-topic-range: bfe7bb9e29b7fe98cbd49910bdec6ca60a4adc0e..dc7a0a50a82ca7351dfb04f441f0f6ab414fc391
UMPF_SRC_URI += "\
  file://patches/1601-net-phy-micrel-add-MDI-MDI-X-control-support-for-KSZ.patch \
  file://patches/1602-net-phy-micrel-Add-RX-error-counter-support-for-KSZ9.patch \
  file://patches/1603-net-phy-micrel-add-cable-test-support-for-KSZ9477-cl.patch \
  file://patches/1604-phy-micrel-add-Signal-Quality-Indicator-SQI-support-.patch \
  "
# umpf-topic: v6.14/topic/net-core-selftest
# umpf-hashinfo: 1dd578317862ac36d5d1dda70d1513b643e6cd54
# umpf-topic-range: dc7a0a50a82ca7351dfb04f441f0f6ab414fc391..e39821ed274126ccbd89021f5d70d9846d8f16a9
UMPF_SRC_URI += "\
  file://patches/1701-net-selftests-fix-TCP-packet-checksum.patch \
  file://patches/1702-net-selftests-add-PHY-loopback-test-for-bad-TCP-chec.patch \
  "
# umpf-topic: v6.14/topic/net-stmmac
# umpf-hashinfo: c827895d09a77d1567d06e68210c8b514154a217
# umpf-topic-range: e39821ed274126ccbd89021f5d70d9846d8f16a9..2e0fee907101018017861c8442bb027b09287ee3
UMPF_SRC_URI += "\
  file://patches/1801-net-stmmac-Correctly-handle-Rx-checksum-offload-erro.patch \
  file://patches/1802-net-stmmac-dwmac4-report-Rx-checksum-errors-in-statu.patch \
  file://patches/1803-net-stmmac-dwmac4-stop-hardware-from-dropping-checks.patch \
  "
# umpf-topic: v6.14/topic/net-phy
# umpf-hashinfo: b7fa645ee9393cbc7e9b006e755649b333adcaa6
# umpf-topic-range: 2e0fee907101018017861c8442bb027b09287ee3..152a7da66f2d6d63fac1b3d8120729216da52d19
UMPF_SRC_URI += "\
  file://patches/1901-net-phy-clear-EEE-runtime-state-in-PHY_HALTED-PHY_ER.patch \
  file://patches/1902-net-phy-Clear-link-specific-data-on-link-down.patch \
  "
# umpf-release: 6.14/customers/skov/imx6/20250911-1
# umpf-topic-range: 152a7da66f2d6d63fac1b3d8120729216da52d19..1c534e2e3e30da30391fdbeeb76228ee8437acae
UMPF_SRC_URI += "\
  file://patches/2001-Release-6.14-customers-skov-imx6-20250911-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"
UMPF_BASE = "6.14.11"
UMPF_VERSION = "20250911-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
