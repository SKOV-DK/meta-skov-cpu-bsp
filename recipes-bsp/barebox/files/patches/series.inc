# umpf-base: v2024.04.0
# umpf-name: 2024.04.0/customers/skov/imx6
# umpf-version: 2024.04.0/customers/skov/imx6/20241127-1
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
# umpf-hashinfo: 4b2a97bf3564c6e9ebc9c0b73141e3f2144124dc
# umpf-topic-range: 6e2d735f30ecd0bff5ec778cb2ee65f1aff52b4e..7c52e472c18d2c802ed88a74463e038f80433dfe
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
  file://patches/0210-ARM-i.MX8MP-skov-add-new-7-g07017-variant-support.patch \
  "
# umpf-topic: v2024.04.0/customers/skov/arm9cpu
# umpf-hashinfo: 6c6bf1969a8ed25f6b48a480d73880bf6fe19986
# umpf-topic-range: 7c52e472c18d2c802ed88a74463e038f80433dfe..d9cc5be765a4fc98f22b0021eb3861aba411d388
SRC_URI += "\
  file://patches/0301-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0302-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2024.04.0/topic/clk_dump
# umpf-hashinfo: fbe82cb4284f92ce1c5133305620898f094de2fc
# umpf-topic-range: d9cc5be765a4fc98f22b0021eb3861aba411d388..faac9f4101d24b2de67a79075050a636f3e3f74b
SRC_URI += "\
  file://patches/0401-clk-add-flags-parameter-to-clk_dump-_one.patch \
  file://patches/0402-commands-clk_dump-add-json-output-option.patch \
  "
# umpf-topic: v2024.04.0/topic/ksz9477-reset
# umpf-hashinfo: 458f5c6d7beff20b93415909f82105823e5990fb
# umpf-topic-range: faac9f4101d24b2de67a79075050a636f3e3f74b..f20faaefe002b083f5fd52d7877d4a94b82641b5
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
# umpf-topic-range: f20faaefe002b083f5fd52d7877d4a94b82641b5..b9d97031b7793a03148c8592ea6b20efae220941
SRC_URI += "\
  file://patches/0601-ddr-imx8m-fix-broken-sharing-of-DRAM-timing-with-TF-.patch \
  "
# umpf-topic: v2024.04.0/topic/dsa
# umpf-hashinfo: f0079c1e561439b19543207db3fc0722cff42b5e
# umpf-topic-range: b9d97031b7793a03148c8592ea6b20efae220941..0302674165ca8da313de56fa9f8faf71bebe1b46
SRC_URI += "\
  file://patches/0701-net-workaround-NICs-and-MDIO-busses-sharing-same-OF-.patch \
  "
# umpf-topic: v2024.04.0/topic/uimage-optional
# umpf-hashinfo: 015c7d080a0b3c4fc1f0f8a483312bd194af6b21
# umpf-topic-range: 0302674165ca8da313de56fa9f8faf71bebe1b46..41e014c19e7b1ba64c5b7daba3b38b43d9a1dbe3
SRC_URI += "\
  file://patches/0801-uimage-move-file_to_sdram-implementation-to-libfile.patch \
  file://patches/0802-bootm-allow-disabling-uImage-support.patch \
  file://patches/0803-uimage-have-TIMESTMAP-depend-on-UIMAGE.patch \
  "
# umpf-topic: v2024.04.0/topic/pstore
# umpf-hashinfo: 1daa2f9165695799d89f4b3f531baa68efe78b27
# umpf-topic-range: 41e014c19e7b1ba64c5b7daba3b38b43d9a1dbe3..34e3c1ca163a718414c8f71013ff81ab4ef77441
SRC_URI += "\
  file://patches/0901-pstore-ramoops-fix-use-of-wrong-types-on-64-bit.patch \
  file://patches/0902-pstore-fix-size-of-OF-fixup-memory-region.patch \
  file://patches/0903-pstore-return-ENOENT-when-file-is-missing.patch \
  file://patches/0904-pstore-move-slash-handling-into-common-function.patch \
  file://patches/0905-pstore-add-unlink-implementation-for-deleting-pstore.patch \
  "
# umpf-topic: v2024.04.0/topic/pca9450
# umpf-hashinfo: 65999e661002a6eb66cd5033bae94a479adf019d
# umpf-topic-range: 34e3c1ca163a718414c8f71013ff81ab4ef77441..63b29522a6045a454e118488f64e93f43511d1b1
SRC_URI += "\
  file://patches/1001-mfd-pca9450-print-reset-reason-as-hex-if-unknown.patch \
  file://patches/1002-mfd-pca9450-don-t-warn-if-PCA9450_PWRON_STAT-is-0.patch \
  "
# umpf-release: 2024.04.0/customers/skov/imx6/20241127-1
# umpf-topic-range: 63b29522a6045a454e118488f64e93f43511d1b1..12701b832f2ddf15f6820ebd7f5ba50d61aa0538
SRC_URI += "\
  file://patches/1101-Release-2024.04.0-customers-skov-imx6-20241127-1.patch \
  "
UMPF_BASE = "2024.04.0"
UMPF_VERSION = "20241127-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
