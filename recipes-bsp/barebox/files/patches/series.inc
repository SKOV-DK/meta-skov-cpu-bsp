# umpf-base: v2024.04.0
# umpf-name: 2024.04.0/customers/skov/imx6
# umpf-version: 2024.04.0/customers/skov/imx6/20241119-1
# umpf-topic: v2024.04.0/customers/skov/imx6
# umpf-hashinfo: f6a580a8cd520285387600d580a1fe3d1bf44daf
# umpf-topic-range: cceb4ee7619a2601eeb0e2f976ec65e0247bc8c3..063576c6c216a2b665d45734f1bcee2f35a006a7
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-dts-skov-imx6-switch-barebox-environment-from-MB.patch \
  "
# umpf-topic: v2024.04.0/topic/imx8mp-nominal
# umpf-hashinfo: 4feedf01aa1023f70b13fce13463934d15542eb3
# umpf-topic-range: 063576c6c216a2b665d45734f1bcee2f35a006a7..6e2d735f30ecd0bff5ec778cb2ee65f1aff52b4e
SRC_URI += "\
  file://patches/0101-ARM-i.MX8M-pass-cpu_type-parameter-to-__imx8m_early_.patch \
  file://patches/0102-ARM-i.MX8MP-configure-PLL3-as-600MHz.patch \
  file://patches/0103-ARM-i.MX8MP-configure-PLL3-as-noc_io-parent.patch \
  file://patches/0104-ARM-i.MX8MP-don-t-reparent-GIC-from-BootROM-default.patch \
  file://patches/0105-ARM-dts-i.MX8MP-Add-optional-nominal-drive-mode-DTSI.patch \
  "
# umpf-topic: v2024.04.0/topic/skov-imx8mp
# umpf-hashinfo: 65c1a080c9b1ed11de4db4af333f75ad0dab6559
# umpf-topic-range: 6e2d735f30ecd0bff5ec778cb2ee65f1aff52b4e..73bce1b02d801703418101d8ceb4f2624939a3f6
SRC_URI += "\
  file://patches/0201-ARM-i.MX8MP-skov-add-fallback-for-unsupported-HW.patch \
  file://patches/0202-ARM-i.MX8MP-skov-add-new-bd500-variant-support.patch \
  file://patches/0203-ARM-i.MX8MP-skov-fix-variant-detection-on-boards-wit.patch \
  file://patches/0204-ARM-i.MX8MP-skov-update-timing-parameters-for-Samsun.patch \
  file://patches/0205-ARM-i.MX8MP-skov-decrease-VDD_SOC-to-850mV.patch \
  file://patches/0206-ARM-i.MX8MP-skov-assert-switch-reset-early.patch \
  file://patches/0207-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0208-ARM-skov-imx8mp-print-initial-on-every-boot.patch \
  file://patches/0209-ARM-dts-i.MX8MP-imx8mp-skov-skip-sd-sdio-detection-o.patch \
  "
# umpf-topic: v2024.04.0/customers/skov/arm9cpu
# umpf-hashinfo: 6c6bf1969a8ed25f6b48a480d73880bf6fe19986
# umpf-topic-range: 73bce1b02d801703418101d8ceb4f2624939a3f6..497035aa2f177f2c27875c0b21bc30def86cfde0
SRC_URI += "\
  file://patches/0301-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0302-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2024.04.0/topic/clk_dump
# umpf-hashinfo: fbe82cb4284f92ce1c5133305620898f094de2fc
# umpf-topic-range: 497035aa2f177f2c27875c0b21bc30def86cfde0..c92744adf51dd95cfbebb0971fea6f6ff818e124
SRC_URI += "\
  file://patches/0401-clk-add-flags-parameter-to-clk_dump-_one.patch \
  file://patches/0402-commands-clk_dump-add-json-output-option.patch \
  "
# umpf-topic: v2024.04.0/topic/ksz9477-reset
# umpf-hashinfo: 458f5c6d7beff20b93415909f82105823e5990fb
# umpf-topic-range: c92744adf51dd95cfbebb0971fea6f6ff818e124..e091918db239a93efe9e42736c5352519d73c6a3
SRC_URI += "\
  file://patches/0501-include-ktime-implement-__ktime_divns-for-32-bit-sys.patch \
  file://patches/0502-poller-report-pollers-taking-more-than-20-millisecon.patch \
  file://patches/0503-mdio_bus-return-0xFFFF-when-read-fails-with-error-co.patch \
  file://patches/0504-net-dsa-ksz9477-always-toggle-reset-gpio-if-availabl.patch \
  file://patches/0505-net-dsa-ksz9477-report-0-as-value-when-returning-err.patch \
  file://patches/0506-net-dsa-ksz9477-return-negative-error-codes-on-PHY-a.patch \
  "
# umpf-topic: v2024.04.0/topic/imx8m-ddr
# umpf-hashinfo: 40b570d717cca9445bfa69e19faa1ec1792c518d
# umpf-topic-range: e091918db239a93efe9e42736c5352519d73c6a3..c6bd9c27cec8ebc81c7f1105f9347378273c1c12
SRC_URI += "\
  file://patches/0601-ddr-imx8m-fix-broken-sharing-of-DRAM-timing-with-TF-.patch \
  "
# umpf-topic: v2024.04.0/topic/dsa
# umpf-hashinfo: f0079c1e561439b19543207db3fc0722cff42b5e
# umpf-topic-range: c6bd9c27cec8ebc81c7f1105f9347378273c1c12..552c944a1cd4ff5d81a5262d8bea3b29ab221dc7
SRC_URI += "\
  file://patches/0701-net-workaround-NICs-and-MDIO-busses-sharing-same-OF-.patch \
  "
# umpf-topic: v2024.04.0/topic/uimage-optional
# umpf-hashinfo: 015c7d080a0b3c4fc1f0f8a483312bd194af6b21
# umpf-topic-range: 552c944a1cd4ff5d81a5262d8bea3b29ab221dc7..bf541011e26b9e74e566ad119f9bafbc107c7fdc
SRC_URI += "\
  file://patches/0801-uimage-move-file_to_sdram-implementation-to-libfile.patch \
  file://patches/0802-bootm-allow-disabling-uImage-support.patch \
  file://patches/0803-uimage-have-TIMESTMAP-depend-on-UIMAGE.patch \
  "
# umpf-topic: v2024.04.0/topic/pstore
# umpf-hashinfo: 1daa2f9165695799d89f4b3f531baa68efe78b27
# umpf-topic-range: bf541011e26b9e74e566ad119f9bafbc107c7fdc..255cbbb41157cc78988c781874078fa25bc4e129
SRC_URI += "\
  file://patches/0901-pstore-ramoops-fix-use-of-wrong-types-on-64-bit.patch \
  file://patches/0902-pstore-fix-size-of-OF-fixup-memory-region.patch \
  file://patches/0903-pstore-return-ENOENT-when-file-is-missing.patch \
  file://patches/0904-pstore-move-slash-handling-into-common-function.patch \
  file://patches/0905-pstore-add-unlink-implementation-for-deleting-pstore.patch \
  "
# umpf-topic: v2024.04.0/topic/pca9450
# umpf-hashinfo: 65999e661002a6eb66cd5033bae94a479adf019d
# umpf-topic-range: 255cbbb41157cc78988c781874078fa25bc4e129..2ee22e30139b5d655b7df672b2a436457118c559
SRC_URI += "\
  file://patches/1001-mfd-pca9450-print-reset-reason-as-hex-if-unknown.patch \
  file://patches/1002-mfd-pca9450-don-t-warn-if-PCA9450_PWRON_STAT-is-0.patch \
  "
# umpf-release: 2024.04.0/customers/skov/imx6/20241119-1
# umpf-topic-range: 2ee22e30139b5d655b7df672b2a436457118c559..6742d03a638052613b2476954733c8c156fdfb02
SRC_URI += "\
  file://patches/1101-Release-2024.04.0-customers-skov-imx6-20241119-1.patch \
  "
UMPF_BASE = "2024.04.0"
UMPF_VERSION = "20241119-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
