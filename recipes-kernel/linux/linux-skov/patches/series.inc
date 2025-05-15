# umpf-base: v6.14.5
# umpf-name: 6.14/customers/skov/imx6
# umpf-version: 6.14/customers/skov/imx6/20250506-1
# umpf-topic: v6.12/topic/drm-sched-accounting
# umpf-hashinfo: a886925c1b1aedf839db4297e1b6a8e87e01b63d
# umpf-topic-range: aeaee199900ee618e676698d21e4ac788f54572f..796fe23421f013544973c249058037529401e50d
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.13/topic/dw-hdmi
# umpf-hashinfo: 09b091ba6cd0fefa5356eb4afb0cd2aff05cb345
# umpf-topic-range: 796fe23421f013544973c249058037529401e50d..2be16c09b4398852c77b8a3661d87d4d4576b512
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.13/topic/etnaviv
# umpf-hashinfo: 021830299d7ebc2b6dc3a670e6fe9535d2b7898d
# umpf-topic-range: 2be16c09b4398852c77b8a3661d87d4d4576b512..fff0f57aea32ded70a7216002f42687c2b6cabe5
SRC_URI += "\
  file://patches/0201-drm-etnaviv-add-flight-recorder-mode.patch \
  file://patches/0202-drm-etnaviv-reset-bit-0-when-disabling-pulse-eater-f.patch \
  file://patches/0203-drm-etnaviv-disable-pulse-eater-on-cores-with-3D-pip.patch \
  file://patches/0204-drm-etnaviv-dump-outstanding-read-write-debug-regist.patch \
  "
# umpf-topic: v6.13/topic/imx-drm
# umpf-hashinfo: e52c347d736db54c09f72e01f536bb0db025be6c
# umpf-topic-range: fff0f57aea32ded70a7216002f42687c2b6cabe5..9989a820bf7b5b535041148ff47efa87dc7faaea
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v6.13/topic/imx-gpc
# umpf-hashinfo: ede209c646be26a36f17647e6fd82d8fe7f85057
# umpf-topic-range: 9989a820bf7b5b535041148ff47efa87dc7faaea..15c01839286deb66a36a61b8334e2350183ac52a
SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.14/topic/imx-gpcv2
# umpf-hashinfo: fb8175864f1faaeaf2afd0059ee7cebb5a7105f8
# umpf-topic-range: 15c01839286deb66a36a61b8334e2350183ac52a..ac092ac9a8bd42cbb1a1a84a51907340424a7577
SRC_URI += "\
  file://patches/0501-pmdomain-imx-gpcv2-use-proper-helper-for-property-de.patch \
  file://patches/0502-pmdomain-imx-gpcv2-split-PGC-domain-probe-in-two-pas.patch \
  file://patches/0503-pmdomain-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0504-pmdomain-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.14/topic/imx8mp-dt
# umpf-hashinfo: 957ee615df4cfc68ba7593db23b2ccdf466b1c05
# umpf-topic-range: ac092ac9a8bd42cbb1a1a84a51907340424a7577..28e45664f3518c8e86ee1dc581c5e09f528649af
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0602-HACK-arm64-dts-imx8mp-Hook-up-MLMIX-reset-to-power-d.patch \
  "
# umpf-topic: v6.14/topic/imx8mp-nominal
# umpf-hashinfo: 7027e3a67027dc587ddd5259ef6f6cb9fdc846e8
# umpf-topic-range: 28e45664f3518c8e86ee1dc581c5e09f528649af..cd7af1574e4a7fb8d6ce5b74d864d2e853e1cd4b
SRC_URI += "\
  file://patches/0701-dt-bindings-clock-imx8m-document-nominal-overdrive-p.patch \
  file://patches/0702-arm64-dts-imx8mp-Add-optional-nominal-drive-mode-DTS.patch \
  file://patches/0703-arm64-dts-imx8mp-add-fsl-nominal-mode-property-into-.patch \
  file://patches/0704-arm64-dts-freescale-imx8mp-skov-configure-LDB-clock-.patch \
  file://patches/0705-arm64-dts-freescale-imx8mp-skov-operate-SoC-in-nomin.patch \
  file://patches/0706-clk-imx8mp-inform-CCF-of-maximum-frequency-of-clocks.patch \
  "
# umpf-topic: v6.14/topic/imx8mp-skov-dts
# umpf-hashinfo: 47267c69ee4a1e951f6955ee6c1ffb72193eb07c
# umpf-topic-range: cd7af1574e4a7fb8d6ce5b74d864d2e853e1cd4b..13ebbeb3e779f2db8a52aa59e4b0d1dcbe0557cc
SRC_URI += "\
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
  "
# umpf-topic: v6.8/topic/drm-fsl-ldb
# umpf-hashinfo: 8b41dc23a7e169047e05bd485563734d3396038f
# umpf-topic-range: 13ebbeb3e779f2db8a52aa59e4b0d1dcbe0557cc..a36d2182583a01834a60aa4c26b5cb2fef1d0fbe
SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.14/topic/hw_protection
# umpf-hashinfo: 62041d9dfc4d156556c209cd6109e75421d7bfcf
# umpf-topic-range: a36d2182583a01834a60aa4c26b5cb2fef1d0fbe..e4eeafa52441286916a5eb44710cbd59c2e3973b
SRC_URI += "\
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
# umpf-hashinfo: a51e621810ea549acb9066a1edc6abea16403d79
# umpf-topic-range: e4eeafa52441286916a5eb44710cbd59c2e3973b..884a7776908f6b34ff70a8ae10a3e784e315f813
SRC_URI += "\
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
# umpf-topic-range: 884a7776908f6b34ff70a8ae10a3e784e315f813..d6019a0c4795db2010b188b0a1486f966f979038
SRC_URI += "\
  file://patches/1201-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.14/topic/pca9450
# umpf-hashinfo: faa472d8da2ede80fb4083c357119270a3615f22
# umpf-topic-range: d6019a0c4795db2010b188b0a1486f966f979038..42bc0b7ecade50970b3f84d370be8e45211a934b
SRC_URI += "\
  file://patches/1301-regulator-pca9450-introduce-system-restart-handler.patch \
  file://patches/1302-regulator-dt-bindings-pca9450-add-restart-handler-pr.patch \
  file://patches/1303-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  "
# umpf-topic: v6.14/topic/rtc-pcf85063
# umpf-hashinfo: 3cc474c7cd4f3c32229f30ec39e9bbbe627e33fb
# umpf-topic-range: 42bc0b7ecade50970b3f84d370be8e45211a934b..457ca4366c8a7cb9d34373bab3090aaf854f4668
SRC_URI += "\
  file://patches/1401-rtc-pcf85063-ensure-12-hour-mode-is-disabled.patch \
  "
# umpf-release: 6.14/customers/skov/imx6/20250506-1
# umpf-topic-range: 457ca4366c8a7cb9d34373bab3090aaf854f4668..0746093be88c3c63e6ffc63e7c8227356ebf14bb
SRC_URI += "\
  file://patches/1501-Release-6.14-customers-skov-imx6-20250506-1.patch \
  "
UMPF_BASE = "6.14.5"
UMPF_VERSION = "20250506-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION = "${UMPF_BASE}"
# umpf-end
