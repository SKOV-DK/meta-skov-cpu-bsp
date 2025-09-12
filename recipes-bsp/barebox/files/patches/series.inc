# umpf-base: v2025.06.1
# umpf-name: 2025.06.0/customers/skov/imx6
# umpf-version: 2025.06.0/customers/skov/imx6/20250627-2
# umpf-topic: v2025.02.0/customers/skov/imx6
# umpf-hashinfo: a5e36061c79278440238800873474f1a72538f0e
# umpf-topic-range: 7e5ea8eb09a1ca3b13e89586411f5a60ae8fd5b3..c9f1f50e5a2bc34ea178939fa48e577dea5fd642
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2025.06.0/customers/skov/imx8mp
# umpf-hashinfo: d7b19c3a9a6929c3051fd6e0e5433ca305800ecf
# umpf-topic-range: c9f1f50e5a2bc34ea178939fa48e577dea5fd642..91262660ce272d2d310797402953821eb5e766ad
SRC_URI += "\
  file://patches/0101-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0102-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0103-dts-src-add-new-skov-i.MX8MP-10inch-variant.patch \
  file://patches/0104-ARM-i.MX8MP-skov-add-new-10-jt101tm023-variant-suppo.patch \
  file://patches/0105-ARM-i.MX8MP-skov-add-new-7-jt070tm041-variant-suppor.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/arm9cpu
# umpf-hashinfo: e534542da7f998677e29802bb8b067ca99ccbbe0
# umpf-topic-range: 91262660ce272d2d310797402953821eb5e766ad..2eaebc494e08b29e3da0b11d868f2a373dfb0587
SRC_URI += "\
  file://patches/0201-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0202-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2025.04.0/topic/imx6-clk
# umpf-hashinfo: 77c953e6806c34e7b15560e521809f3dd3a024ae
# umpf-topic-range: 2eaebc494e08b29e3da0b11d868f2a373dfb0587..6d680fa071d4adca1c4f71bdd87de783f17f9a73
SRC_URI += "\
  file://patches/0301-video-IPUv3-LDB-fix-LVDS-serial-clock-configuration.patch \
  "
# umpf-release: 2025.06.0/customers/skov/imx6/20250627-2
# umpf-topic-range: 6d680fa071d4adca1c4f71bdd87de783f17f9a73..fd4d645398ce897c795bc1b43fabaabd80691226
SRC_URI += "\
  file://patches/0401-Release-2025.06.0-customers-skov-imx6-20250627-2.patch \
  "
# umpf-topic-range: e44d8628b58279e87fbaa01cbb12dc726b6b1e95..848a56aa155937a9826ee3b58df60e53328f98bf
SRC_URI += "\
  file://patches/0501-mci-imx-esdhc-restore-longer-timeouts-for-idle.patch \
  file://patches/0502-mci-sdhci-fix-too-short-timeout-in-sdhci_wait_idle_data.patch \
  "
UMPF_BASE = "2025.06.1"
UMPF_VERSION = "20250627-2"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
