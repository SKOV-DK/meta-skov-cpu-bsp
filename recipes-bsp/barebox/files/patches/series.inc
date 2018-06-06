# umpf-base: v2018.04.0
# umpf-name: 2018.04.0/customers/skov/imx6
# umpf-version: 2018.04.0/customers/skov/imx6/20180418-1
# umpf-topic: v2018.04.0/customers/skov/imx6
# umpf-hashinfo: 53932e2bb74f1ef19ebb39ac9cf75ca8542cb4ca
# umpf-topic-range: bd9ad3a602295fb9aa8882fbf27c54288b150d5f..53932e2bb74f1ef19ebb39ac9cf75ca8542cb4ca
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-mtd-nand_mxs-fix-NAND-error-when-change-clk-rate.patch \
  file://patches/0005-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0006-fs-fix-error-path-in-__canonicalize_path.patch \
  file://patches/0007-fs-remove-shortcut-in-canonicalizing-filenames.patch \
  "
# umpf-release: 2018.04.0/customers/skov/imx6/20180418-1
# umpf-topic-range: 53932e2bb74f1ef19ebb39ac9cf75ca8542cb4ca..d4ccd9e9582c69f6140abc2fc576688fe9170b9d
SRC_URI += "\
  file://patches/0101-Release-2018.04.0-customers-skov-imx6-20180418-1.patch \
  "
# umpf-end

# ARM9-CPU patches
SRC_URI += "file://patches/0600-atmel_lcdfb-fix-atmel-lcd-wiring-mode-BGR-BRG.patch"
SRC_URI += "file://patches/0601-pwm-add-pwm-atmel-from-Linux-kernel-4.14.patch"
SRC_URI += "file://patches/0602-skovarm9cpu-initial-support.patch"
