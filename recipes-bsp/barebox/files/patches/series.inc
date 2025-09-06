# umpf-base: v2025.06.1
# umpf-name: 2025.06.0/customers/skov/imx6
# umpf-version: 2025.06.0/customers/skov/imx6/20250901-1
# umpf-topic: v2025.02.0/customers/skov/imx6
# umpf-hashinfo: a5e36061c79278440238800873474f1a72538f0e
# umpf-topic-range: 7e5ea8eb09a1ca3b13e89586411f5a60ae8fd5b3..c9f1f50e5a2bc34ea178939fa48e577dea5fd642
UMPF_SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2025.06.0/customers/skov/imx8mp
# umpf-hashinfo: d7b19c3a9a6929c3051fd6e0e5433ca305800ecf
# umpf-topic-range: c9f1f50e5a2bc34ea178939fa48e577dea5fd642..91262660ce272d2d310797402953821eb5e766ad
UMPF_SRC_URI += "\
  file://patches/0101-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0102-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0103-dts-src-add-new-skov-i.MX8MP-10inch-variant.patch \
  file://patches/0104-ARM-i.MX8MP-skov-add-new-10-jt101tm023-variant-suppo.patch \
  file://patches/0105-ARM-i.MX8MP-skov-add-new-7-jt070tm041-variant-suppor.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/arm9cpu
# umpf-hashinfo: e534542da7f998677e29802bb8b067ca99ccbbe0
# umpf-topic-range: 91262660ce272d2d310797402953821eb5e766ad..2eaebc494e08b29e3da0b11d868f2a373dfb0587
UMPF_SRC_URI += "\
  file://patches/0201-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0202-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2025.04.0/topic/imx6-clk
# umpf-hashinfo: 77c953e6806c34e7b15560e521809f3dd3a024ae
# umpf-topic-range: 2eaebc494e08b29e3da0b11d868f2a373dfb0587..6d680fa071d4adca1c4f71bdd87de783f17f9a73
UMPF_SRC_URI += "\
  file://patches/0301-video-IPUv3-LDB-fix-LVDS-serial-clock-configuration.patch \
  "
# umpf-topic: v2025.06.0/topic/arm-optee-early-helper
# umpf-hashinfo: c0b787bc8499c1aff302f5c9a76c56b60e7bb7c2
# umpf-topic-range: 6d680fa071d4adca1c4f71bdd87de783f17f9a73..757264fdbbd416db77237076d2d041315cc89e22
UMPF_SRC_URI += "\
  file://patches/0401-pbl-add-panic_no_stacktrace.patch \
  file://patches/0402-arch-Allow-data_abort_mask-in-PBL.patch \
  file://patches/0403-ARM-add-exception-handling-support-for-PBL.patch \
  file://patches/0404-ARM-i.MX6QDL-add-imxcfg-helper-to-configure-the-TZAS.patch \
  file://patches/0405-ARM-i.MX6Q-add-imx6_get_mmdc_sdram_size.patch \
  file://patches/0406-ARM-i.MX-add-config-symbol-for-TZASC.patch \
  file://patches/0407-ARM-mach-imx-tzasc-add-region-configure-helpers.patch \
  file://patches/0408-ARM-mach-imx-tzasc-add-imx6-q-ul-_tzc380_early_ns_re.patch \
  file://patches/0409-ARM-mach-imx-tzasc-add-imx6-q-ul-_tzc380_is_bypassed.patch \
  file://patches/0410-ARM-i.MX-add-imx6_can_access_tzasc.patch \
  file://patches/0411-ARM-optee-early-add-mx6_start_optee_early-helper.patch \
  file://patches/0412-ARM-i.MX-tqma6ulx-fix-barebox-chainloading-with-OP-T.patch \
  file://patches/0413-ARM-i.MX-Webasto-ccbv2-fix-barebox-chainloading-with.patch \
  file://patches/0414-ARM-i.MX-tqma6ulx-use-ENTRY_FUNCTION_WITHSTACK.patch \
  file://patches/0415-ARM-mach-imx-tzasc-keep-default-region-0-secure-sett.patch \
  "
# umpf-release: 2025.06.0/customers/skov/imx6/20250901-1
# umpf-topic-range: 757264fdbbd416db77237076d2d041315cc89e22..595f6e10be68b0d2013a1bf935dfcd67d376be2b
UMPF_SRC_URI += "\
  file://patches/0501-Release-2025.06.0-customers-skov-imx6-20250901-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2025.06.1"
UMPF_VERSION = "20250901-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
