# umpf-base: v2018.08.1
# umpf-name: 2018.08.1/customers/skov/imx6
# umpf-version: 2018.08.1/customers/skov/imx6/20180903-1
# umpf-topic: v2018.08.0/customers/skov/imx6
# umpf-hashinfo: d1e5e9cd7e071f6bf369c5357ffb50306c7412f1
# umpf-topic-range: 64b5120759f01f93dc478d2bc19608accfab18f3..672667b8ccc35f82bcc79d49cd3eb143c24fade1
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0005-fs-fix-error-path-in-__canonicalize_path.patch \
  file://patches/0006-fs-remove-shortcut-in-canonicalizing-filenames.patch \
  file://patches/0007-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2018.08.0/customers/skov/arm9
# umpf-hashinfo: 99d5cf177ab8463b66f5ba017a9792554a39c406
# umpf-topic-range: 672667b8ccc35f82bcc79d49cd3eb143c24fade1..f686b468b08d1c6972e68c3429b0e7acc1b0b027
SRC_URI += "\
  file://patches/0101-atmel_lcdfb-fix-atmel-lcd-wiring-mode-BGR-BRG.patch \
  file://patches/0102-pwm-add-pwm-atmel-from-Linux-kernel-4.14.patch \
  file://patches/0103-skovarm9cpu-initial-support.patch \
  file://patches/0104-skovarm9cpu-fix-DT-tree.patch \
  file://patches/0105-skovarm9cpu-updated-display-timing-parameters.patch \
  file://patches/0106-skovarm9cpu-fix-logic-display-detection.patch \
  file://patches/0107-phylib-add-Davicom-PHY-support.patch \
  file://patches/0108-phylib-add-support-for-reset-gpios.patch \
  file://patches/0109-at91sam9263ek-add-PHY-miitool-etc.-to-config.patch \
  file://patches/0110-skovarm9cpu-add-reset-gpios-to-macb-to-fix-network.patch \
  file://patches/0111-skovarm9cpu-include-davicom-PHY-and-miitools-in-conf.patch \
  file://patches/0112-skovarm9cpu-Default-128MiB-in-lowlevel-init.patch \
  file://patches/0113-arm-at91-fix-init-in-board_init.patch \
  file://patches/0114-skovarm9cpu-add-board.mem-global-variable.patch \
  file://patches/0115-skovarm9cpu-fix-SPI-frequency-in-DT.patch \
  file://patches/0116-skovarmcpu-fix-partition-layout.patch \
  file://patches/0117-skovarmcpu-add-support-for-rotary-encoder-in-DT.patch \
  "
# umpf-release: 2018.08.1/customers/skov/imx6/20180903-1
# umpf-topic-range: f686b468b08d1c6972e68c3429b0e7acc1b0b027..a39d10d9d60fef282eb67f386ef7d86012e29ff8
SRC_URI += "\
  file://patches/0201-Release-2018.08.1-customers-skov-imx6-20180903-1.patch \
  "
# umpf-end
