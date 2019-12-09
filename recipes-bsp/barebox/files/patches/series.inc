# umpf-base: v2019.05.0
# umpf-name: 2019.05.0/customers/skov/imx6
# umpf-version: 2019.05.0/customers/skov/imx6/20191209-1
# umpf-topic: v2019.05.0/customers/skov/imx6
# umpf-hashinfo: 964f63a6d49eaca40b245b68b9be299adb9ca5a4
# umpf-topic-range: 94420265227df2bbe221293f9e10466030387209..2e74b8da7ee759a3759054aeb79a6c3fdd9e0a32
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0005-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0006-bareboximd-workaround-for-page-allocation-fault.patch \
  file://patches/0007-mtd-spi-nor-Add-support-for-en25qh64.patch \
  "
# umpf-topic: v2019.05.0/customers/skov/arm9
# umpf-hashinfo: 6cebfa5f332812a570d8dfa4b301c7e9919c8255
# umpf-topic-range: 2e74b8da7ee759a3759054aeb79a6c3fdd9e0a32..13bf837b44bed89c809f94205b639d5e580427d1
SRC_URI += "\
  file://patches/0101-atmel_lcdfb-fix-atmel-lcd-wiring-mode-BGR-BRG.patch \
  file://patches/0102-pwm-add-pwm-atmel-from-Linux-kernel-4.14.patch \
  file://patches/0103-skovarm9cpu-initial-support.patch \
  file://patches/0104-skovarm9cpu-fix-DT-tree.patch \
  file://patches/0105-skovarm9cpu-updated-display-timing-parameters.patch \
  file://patches/0106-skovarm9cpu-fix-logic-display-detection.patch \
  file://patches/0107-skovarm9cpu-add-reset-gpios-to-macb-to-fix-network.patch \
  file://patches/0108-skovarm9cpu-include-davicom-PHY-and-miitools-in-conf.patch \
  file://patches/0109-skovarm9cpu-Default-128MiB-in-lowlevel-init.patch \
  file://patches/0110-skovarm9cpu-add-board.mem-global-variable.patch \
  file://patches/0111-skovarm9cpu-fix-SPI-frequency-in-DT.patch \
  file://patches/0112-skovarmcpu-fix-partition-layout.patch \
  file://patches/0113-skovarmcpu-add-support-for-rotary-encoder-in-DT.patch \
  file://patches/0114-skovarm9cpu-add-matrix-keyboard-and-folio-leds.patch \
  file://patches/0115-skovarm9cpu-add-pwm0.patch \
  "
# umpf-release: 2019.05.0/customers/skov/imx6/20191209-1
# umpf-topic-range: 13bf837b44bed89c809f94205b639d5e580427d1..5f028e4803db41075aa79a240540517dc16250bc
SRC_URI += "\
  file://patches/0201-Release-2019.05.0-customers-skov-imx6-20191209-1.patch \
  "
# umpf-end
