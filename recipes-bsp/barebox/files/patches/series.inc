# umpf-base: v2026.09.0
# umpf-flags: upstreamstatus=insert
# umpf-name: 2026.09.0/customers/skov/imx6
# umpf-version: 2026.09.0/customers/skov/imx6/20260921-1
# umpf-topic: v2026.09.0/customers/skov/imx6
# umpf-hashinfo: ec31f743deec4f419952cf6e1a76d4fe4f6f11e9
# umpf-topic-range: 4aa5dcd400d5b9cecfd24e68c6f05cd128c75c43..d90843b781380c622bce7e2dd5d1c6f4a66ad17f
UMPF_SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2025.02.0/customers/skov/arm9cpu
# umpf-hashinfo: e534542da7f998677e29802bb8b067ca99ccbbe0
# umpf-topic-range: d90843b781380c622bce7e2dd5d1c6f4a66ad17f..97718df7e48ee8616173f38ae60904a6da0ad290
UMPF_SRC_URI += "\
  file://patches/0101-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0102-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-topic: v2026.06.0/topic/imx6-clk
# umpf-hashinfo: 09dfe9cd98f93e2fa6d6c09d51bb443300ed831e
# umpf-topic-range: 97718df7e48ee8616173f38ae60904a6da0ad290..cdc289f7cfa17b3b09cbeecbf82fd63763ed1a60
UMPF_SRC_URI += "\
  file://patches/0201-video-IPUv3-LDB-fix-LVDS-serial-clock-configuration.patch \
  "
# umpf-topic: v2026.09.0/topic/system-data-ta
# umpf-hashinfo: 118fa1e6d9c6eddfb977abc7d31bc627368247aa
# umpf-topic-range: cdc289f7cfa17b3b09cbeecbf82fd63763ed1a60..578123dffa0ce60a57975d10337359aeba45538b
UMPF_SRC_URI += "\
  file://patches/0301-tee-optee-add-system_data-driver.patch \
  file://patches/0302-tee-optee-system_data-add-command.patch \
  file://patches/0303-security-Add-rollback-protection-support.patch \
  file://patches/0304-common-oftree-add-rollback-index-to-bootargs-fixup.patch \
  "
# umpf-topic: v2026.09.0/customers/skov/imx8mp
# umpf-hashinfo: 7f927897def4ab14476dbe67a66186f251764965
# umpf-topic-range: 578123dffa0ce60a57975d10337359aeba45538b..45be9465426213f4fa2799773f33e8e7952919f1
UMPF_SRC_URI += "\
  file://patches/0401-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0402-ARM-i.MX8MP-skov-halt-startup-until-power-is-good.patch \
  file://patches/0403-include-ocotp.h-add-missing-include.patch \
  file://patches/0404-common-skov_select_secpolicy-implement-choice-of-sec.patch \
  file://patches/0405-include-ocotp.h-add-missing-include.patch \
  file://patches/0406-security-rollback-no-rollback-protection-during-prov.patch \
  "
# umpf-release: 2026.09.0/customers/skov/imx6/20260921-1
# umpf-topic-range: 45be9465426213f4fa2799773f33e8e7952919f1..65dfbda4ec5e35bdbd1ae4c08ae1ebe45f705988
UMPF_SRC_URI += "\
  file://patches/0501-Release-2026.09.0-customers-skov-imx6-20260921-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2026.09.0"
UMPF_VERSION = "20260921-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
