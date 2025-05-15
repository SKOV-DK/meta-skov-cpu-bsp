# umpf-base: v2025.04.0
# umpf-flags: upstreamstatus=insert
# umpf-name: 2025.02.0/customers/skov/imx6
# umpf-version: 2025.02.0/customers/skov/imx6/20250505-1
# umpf-topic: v2025.02.0/customers/skov/imx6
# umpf-hashinfo: a5e36061c79278440238800873474f1a72538f0e
# umpf-topic-range: 1da6a7acff7c10c1d2eef35b2a6062faefa7818c..6c4e050a8133d11cf7c0505236a0608493cbbeca
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/imx8mp
# umpf-hashinfo: ca574782e9edb164e7da573c3a5602cf728100b9
# umpf-topic-range: 6c4e050a8133d11cf7c0505236a0608493cbbeca..859ccc7aca17cd64cdffe32768473c1149fca0d6
SRC_URI += "\
  file://patches/0101-ARM-i.MX8MP-skov-decrease-VDD_SOC-to-850mV.patch \
  file://patches/0102-ARM-i.MX8MP-skov-assert-switch-reset-early.patch \
  file://patches/0103-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0104-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0105-ARM-skov-imx8mp-print-initial-on-every-boot.patch \
  file://patches/0106-ARM-i.MX8MP-skov-add-new-7-g07017-variant-support.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/arm9cpu
# umpf-hashinfo: e534542da7f998677e29802bb8b067ca99ccbbe0
# umpf-topic-range: 859ccc7aca17cd64cdffe32768473c1149fca0d6..1b86510a86fc3efedbd4da0dba042c5845443372
SRC_URI += "\
  file://patches/0201-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0202-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2025.04.0/topic/imx6-clk
# umpf-hashinfo: 77c953e6806c34e7b15560e521809f3dd3a024ae
# umpf-topic-range: 1b86510a86fc3efedbd4da0dba042c5845443372..e79e97fe29abdd6ed3b97e6efdbaece07aae3c43
SRC_URI += "\
  file://patches/0301-video-IPUv3-LDB-fix-LVDS-serial-clock-configuration.patch \
  file://patches/0302-clk-Fix-incorrect-rate-comparison-in-clk_set_rate.patch \
  "
# umpf-topic: v2025.04.0/topic/esdhc-imx-hs200
# umpf-hashinfo: 5621efb788c3e91c8cac45d0be9c9cb21aa12ec2
# umpf-topic-range: e79e97fe29abdd6ed3b97e6efdbaece07aae3c43..4542dd4307ec2400a7c2630d4758ba354601b497
SRC_URI += "\
  file://patches/0401-printk-make-dev_printf-a-PBL-stub.patch \
  file://patches/0402-include-linux-iopoll.h-add-optional-PBL-support.patch \
  file://patches/0403-linux-iopoll-fix-inverted-condition-in-read_poll_tim.patch \
  file://patches/0404-mci-move-mci_setup_cmd-definition-into-header.patch \
  file://patches/0405-mci-sdhci-fix-SDHCI_TRNS_AUTO_CMD12-definition.patch \
  file://patches/0406-mci-move-most-recent-I-O-settings-into-mci_host-ios.patch \
  file://patches/0407-mci-use-struct-mci_host-ios-inside-mci_set_ios.patch \
  file://patches/0408-mci-tuning-fix-fallback-to-DDR52.patch \
  file://patches/0409-mci-sdhci-unmap-DMA-buffers-on-timeout.patch \
  file://patches/0410-mci-add-MMC_CAP_UHS-constants.patch \
  file://patches/0411-mci-rename-MMC_CAP_MMC_x_yV_DDR-to-MMC_CAP_x_yV_DDR-.patch \
  file://patches/0412-mci-compare-host-and-card-caps-for-supported-speeds.patch \
  file://patches/0413-mci-print-HS200-capabilities-in-devinfo.patch \
  file://patches/0414-mci-respect-no-1-8-v-OF-property.patch \
  file://patches/0415-mci-sdhci-add-support-for-struct-mci_data-timeout_ns.patch \
  file://patches/0416-mci-imx-esdhc-use-unsigned-types-where-appropriate.patch \
  file://patches/0417-mci-imx-esdhc-implement-esdhc_poll-using-sdhci_read3.patch \
  file://patches/0418-mci-imx-esdhc-drop-one-extra-read-of-SDHCI_INT_STATU.patch \
  file://patches/0419-mci-sdhci-add-cmd-parameter-to-sdhci_transfer_.patch \
  file://patches/0420-mci-arasan-introduce-mmc_op_tuning-helper.patch \
  file://patches/0421-mci-imx-esdhc-flesh-out-register-description.patch \
  file://patches/0422-mci-imx-esdhc-add-support-for-delay-tuning-propertie.patch \
  file://patches/0423-mci-add-mci_set_timing-helper.patch \
  file://patches/0424-mci-imx-esdhc-add-support-for-setting-drive-strength.patch \
  file://patches/0425-mci-sdhci-move-SDHCI_MAKE_BLKSZ-definition-to-header.patch \
  file://patches/0426-mci-imx-esdhc-select-different-pinctrl-state-dependi.patch \
  file://patches/0427-mci-core-retry-MMC_CMD_SET_BLOCKLEN-up-to-4-times.patch \
  file://patches/0428-mci-imx-esdhc-don-t-reconfigure-clock-unless-require.patch \
  file://patches/0429-mci-sdhci-fix-sdhci_transfer_data-MMC_SEND_TUNING-co.patch \
  file://patches/0430-mci-core-implement-mmc_send_tuning.patch \
  file://patches/0431-mci-imx-esdhc-set-burst_length_enable.patch \
  file://patches/0432-mci-imx-esdhc-fixup-quirks-in-standard-SDHCI-registe.patch \
  file://patches/0433-mci-sdhci-support-Linux-SDHCI_QUIRK2_BROKEN_HS200-fl.patch \
  file://patches/0434-mci-imx-esdhc-implement-HS200-support.patch \
  "
# umpf-release: 2025.02.0/customers/skov/imx6/20250505-1
# umpf-topic-range: 4542dd4307ec2400a7c2630d4758ba354601b497..4f8bcbb6c1b37b560eecc1003bd6e599a8bd69ad
SRC_URI += "\
  file://patches/0501-Release-2025.02.0-customers-skov-imx6-20250505-1.patch \
  "
UMPF_BASE = "2025.04.0"
UMPF_VERSION = "20250505-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
