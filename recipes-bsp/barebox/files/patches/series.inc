# umpf-base: v2018.04.0
# umpf-name: 2018.04.0/customers/skov/imx6
# umpf-version: 2018.04.0/customers/skov/imx6/20180717-1
# umpf-topic: v2018.04.0/customers/skov/imx6
# umpf-hashinfo: 6ba46e299c8b01fd19b51a0b15613b1a00fe293f
# umpf-topic-range: bd9ad3a602295fb9aa8882fbf27c54288b150d5f..0bd56a681fb8a99c230310e41c76c5ad87ad1ff4
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-mtd-gpmi-nand-Make-sure-clock-is-disabled-during-rat.patch \
  file://patches/0005-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0006-fs-fix-error-path-in-__canonicalize_path.patch \
  file://patches/0007-fs-remove-shortcut-in-canonicalizing-filenames.patch \
  file://patches/0008-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0009-commands-of_property-add-option-to-apply-changes-as-.patch \
  "
# umpf-topic: v2018.04.0/customers/skov/arm9
# umpf-hashinfo: 1c9c2f1796d84bacf1b2560ea8c6b9c7f7acd4c0
# umpf-topic-range: 0bd56a681fb8a99c230310e41c76c5ad87ad1ff4..4d9e406e3f5f6231de8d1bf65cb85a23d922be82
SRC_URI += "\
  file://patches/0101-atmel_lcdfb-fix-atmel-lcd-wiring-mode-BGR-BRG.patch \
  file://patches/0102-pwm-add-pwm-atmel-from-Linux-kernel-4.14.patch \
  file://patches/0103-skovarm9cpu-initial-support.patch \
  file://patches/0104-skovarm9cpu-fix-DT-tree.patch \
  "
# umpf-release: 2018.04.0/customers/skov/imx6/20180717-1
# umpf-topic-range: 4d9e406e3f5f6231de8d1bf65cb85a23d922be82..e69d667ad18341e441f92182d58241f676a8b4ed
SRC_URI += "\
  file://patches/0201-Release-2018.04.0-customers-skov-imx6-20180717-1.patch \
  "
# umpf-end

# ARM9-CPU patches
SRC_URI += "file://patches/0604-skovarm9cpu-updated-display-timing-parameters.patch"
SRC_URI += "file://patches/0605-skovarm9cpu-fix-logic-display-detection.patch"
SRC_URI += "file://patches/0606-phylib-add-Davicom-PHY-support.patch"
SRC_URI += "file://patches/0607-phylib-add-support-for-reset-gpios.patch"
SRC_URI += "file://patches/0608-at91sam9263ek-add-PHY-miitool-etc.-to-config.patch"
SRC_URI += "file://patches/0609-skovarm9cpu-add-reset-gpios-to-macb-to-fix-network.patch"
SRC_URI += "file://patches/0610-skovarm9cpu-include-davicom-PHY-and-miitools-in-conf.patch"

# SRC_URI += "file://patches/diff.patch"
