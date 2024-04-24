# umpf-base: v2024.04.0
# umpf-name: 2024.04.0/customers/skov/imx6
# umpf-version: 2024.04.0/customers/skov/imx6/20240502-2
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
# umpf-hashinfo: e098e553293c334f3911aade1c9674069c957a78
# umpf-topic-range: 6e2d735f30ecd0bff5ec778cb2ee65f1aff52b4e..46fb39c9b6912627d959646d2033f75d3be65bb9
SRC_URI += "\
  file://patches/0201-ARM-i.MX8MP-skov-add-fallback-for-unsupported-HW.patch \
  file://patches/0202-ARM-i.MX8MP-skov-add-new-bd500-variant-support.patch \
  file://patches/0203-ARM-i.MX8MP-skov-fix-variant-detection-on-boards-wit.patch \
  file://patches/0204-ARM-i.MX8MP-skov-update-timing-parameters-for-Samsun.patch \
  file://patches/0205-ARM-i.MX8MP-skov-decrease-VDD_SOC-to-850mV.patch \
  file://patches/0206-ARM-i.MX8MP-skov-assert-switch-reset-early.patch \
  "
# umpf-topic: v2024.04.0/customers/skov/arm9cpu
# umpf-hashinfo: 6c6bf1969a8ed25f6b48a480d73880bf6fe19986
# umpf-topic-range: 46fb39c9b6912627d959646d2033f75d3be65bb9..878590aff2dc9d7cfda7233080ef035d7af1b9ba
SRC_URI += "\
  file://patches/0301-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0302-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2024.04.0/topic/clk_dump
# umpf-hashinfo: fbe82cb4284f92ce1c5133305620898f094de2fc
# umpf-topic-range: 878590aff2dc9d7cfda7233080ef035d7af1b9ba..049e2c395196a5693cbfccfa191607a077b900d9
SRC_URI += "\
  file://patches/0401-clk-add-flags-parameter-to-clk_dump-_one.patch \
  file://patches/0402-commands-clk_dump-add-json-output-option.patch \
  "
# umpf-topic: v2024.04.0/topic/ksz9477-reset
# umpf-hashinfo: 458f5c6d7beff20b93415909f82105823e5990fb
# umpf-topic-range: 049e2c395196a5693cbfccfa191607a077b900d9..857c03b1fc77ba7a227f8c6f9b1225d403cbd9f9
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
# umpf-topic-range: 857c03b1fc77ba7a227f8c6f9b1225d403cbd9f9..3373acc1ab4f7bec78d46a3696f2d136e5d2de82
SRC_URI += "\
  file://patches/0601-ddr-imx8m-fix-broken-sharing-of-DRAM-timing-with-TF-.patch \
  "
# umpf-topic: v2024.04.0/topic/dsa
# umpf-hashinfo: f0079c1e561439b19543207db3fc0722cff42b5e
# umpf-topic-range: 3373acc1ab4f7bec78d46a3696f2d136e5d2de82..91430459c859c3951071e4adc40fbb4d5d063447
SRC_URI += "\
  file://patches/0701-net-workaround-NICs-and-MDIO-busses-sharing-same-OF-.patch \
  "
# umpf-release: 2024.04.0/customers/skov/imx6/20240502-2
# umpf-topic-range: 91430459c859c3951071e4adc40fbb4d5d063447..c15f34adfcab1caa760512bbb26527ad2270274b
SRC_URI += "\
  file://patches/0801-Release-2024.04.0-customers-skov-imx6-20240502-2.patch \
  "
UMPF_BASE = "2024.04.0"
UMPF_VERSION = "20240502-2"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
