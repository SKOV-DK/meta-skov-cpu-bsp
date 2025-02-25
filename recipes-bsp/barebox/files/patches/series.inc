# umpf-base: v2025.02.0
# umpf-flags: upstreamstatus=insert
# umpf-name: 2025.02.0/customers/skov/imx6
# umpf-version: 2025.02.0/customers/skov/imx6/20250228-1
# umpf-topic: v2025.02.0/customers/skov/imx6
# umpf-hashinfo: a5e36061c79278440238800873474f1a72538f0e
# umpf-topic-range: 2afd1a809f1a41f1dd42b95c2bc0ae74853b475b..beef03032bfc1e045436acedcc17f4f194406503
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/imx8mp
# umpf-hashinfo: ca574782e9edb164e7da573c3a5602cf728100b9
# umpf-topic-range: beef03032bfc1e045436acedcc17f4f194406503..813375dadb1e9a5916f14a77d977bcf419e1d0ef
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
# umpf-topic-range: 813375dadb1e9a5916f14a77d977bcf419e1d0ef..f1f156c7f1925325048c9925fa2034767b0be69e
SRC_URI += "\
  file://patches/0201-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0202-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2025.02.0/topic/hab
# umpf-hashinfo: 51018c2a15c8f6ce0b218b71ac632d5a5bff91fe
# umpf-topic-range: f1f156c7f1925325048c9925fa2034767b0be69e..7ded5034b773817f4a90e0d8d84c816e28504f75
SRC_URI += "\
  file://patches/0301-nvmem-ocotp-add-support-to-get-set-srk_revoke-sticky.patch \
  file://patches/0302-nvmem-ocotp-add-support-to-query-the-field-return-st.patch \
  file://patches/0303-hab-convert-flags-to-use-BIT-macro.patch \
  file://patches/0304-i.MX-HAB-add-imx_hab_revoke_key-support.patch \
  file://patches/0305-i.MX-HABv4-add-more-i.MX8M-fuse-defines.patch \
  file://patches/0306-i.MX8M-HABv4-add-an-option-to-allow-key-revocation.patch \
  file://patches/0307-i.MX8M-HABv4-add-option-to-allow-burning-the-field-r.patch \
  file://patches/0308-i.MX-HAB-add-imx_hab_field_return-support.patch \
  file://patches/0309-i.mx8-ocotp-add-GPx_LOCK-defines.patch \
  file://patches/0310-hab-lock-GP5-on-i.MX8MP-socs.patch \
  "
# umpf-release: 2025.02.0/customers/skov/imx6/20250228-1
# umpf-topic-range: 7ded5034b773817f4a90e0d8d84c816e28504f75..92a2d937a3249512f0bdff9b351b34844339c5dd
SRC_URI += "\
  file://patches/0401-Release-2025.02.0-customers-skov-imx6-20250228-1.patch \
  "
UMPF_BASE = "2025.02.0"
UMPF_VERSION = "20250228-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
