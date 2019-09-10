# umpf-base: v2019.05.0
# umpf-name: 2019.05.0/customers/skov/imx6
# umpf-version: 2019.05.0/customers/skov/imx6/20190528-1
# umpf-topic: v2019.05.0/customers/skov/imx6
# umpf-hashinfo: bbcbce63fc1c69e2d76a7c51a0b752c5b3ddb69c
# umpf-topic-range: 94420265227df2bbe221293f9e10466030387209..5273792868d3ff84b67f60425145f4a43207174b
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0005-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2019.05.0/customers/skov/arm9
# umpf-hashinfo: 6cebfa5f332812a570d8dfa4b301c7e9919c8255
# umpf-topic-range: 5273792868d3ff84b67f60425145f4a43207174b..24af1c918cf65723c9b4bf58f7b85ea8dfa338e6
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
# umpf-release: 2019.05.0/customers/skov/imx6/20190528-1
# umpf-topic-range: 24af1c918cf65723c9b4bf58f7b85ea8dfa338e6..198e07bfd10669426d06ef274b88a67a4670e17a
SRC_URI += "\
  file://patches/0201-Release-2019.05.0-customers-skov-imx6-20190528-1.patch \
  file://patches/0301-scripts-bareboximd.patch \
  "
# umpf-end
