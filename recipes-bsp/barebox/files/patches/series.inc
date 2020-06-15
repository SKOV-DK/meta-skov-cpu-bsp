# umpf-base: v2020.06.0
# umpf-name: 2020.06.0/customers/skov/imx6
# umpf-version: 2020.06.0/customers/skov/imx6/20200615-1
# umpf-topic: v2020.06.0/customers/skov/imx6
# umpf-hashinfo: 9c9abb89e165b725cdb09fc38c147ac1378207c2
# umpf-topic-range: ff087598f4cdc426ba883a8720367a4ff3d6b9fe..72584f586ad1aa3f65c493d69fa48c420fefdc4e
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0005-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0006-Revert-imd-fix-memory-leak.patch \
  file://patches/0007-bareboximd-workaround-for-page-allocation-fault.patch \
  "
# umpf-topic: v2020.06.0/customers/skov/arm9
# umpf-hashinfo: 1b60b968973f7156317548c278547b205b1fe598
# umpf-topic-range: 72584f586ad1aa3f65c493d69fa48c420fefdc4e..253b3003bb20f8d6dbab26e724905413802ff8be
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
# umpf-release: 2020.06.0/customers/skov/imx6/20200615-1
# umpf-topic-range: 253b3003bb20f8d6dbab26e724905413802ff8be..cceb758e11e219f211f50f362dcfb459cc4218a2
SRC_URI += "\
  file://patches/0201-Release-2020.06.0-customers-skov-imx6-20200615-1.patch \
  "
# umpf-end
