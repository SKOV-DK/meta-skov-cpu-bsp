# umpf-base: v2019.12.0
# umpf-name: 2019.12.0/customers/skov/imx6
# umpf-version: 2019.12.0/customers/skov/imx6/20200107-1
# umpf-topic: v2019.12.0/customers/skov/imx6
# umpf-hashinfo: aead1650757c2418b661b793758d582db8833ba4
# umpf-topic-range: 48b57af0ab888bf88607d0e55ad3e79d13cc0a31..a54e7d978bbc23eb190bb90cb6f47620e4c0f1ff
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0005-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0006-Revert-imd-fix-memory-leak.patch \
  file://patches/0007-bareboximd-workaround-for-page-allocation-fault.patch \
  file://patches/0008-mtd-spi-nor-Add-support-for-en25qh64.patch \
  "
# umpf-topic: v2019.12.0/customers/skov/arm9
# umpf-hashinfo: 9c8f3f7b2f6f9f769b4844115056bc25a62ac10b
# umpf-topic-range: a54e7d978bbc23eb190bb90cb6f47620e4c0f1ff..31d71ec77e7d611d54f6a2a67265ad59761af460
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
  file://patches/0116-lds-align-RO_DATA_SECTION-members.patch \
  "
# umpf-release: 2019.12.0/customers/skov/imx6/20200107-1
# umpf-topic-range: 31d71ec77e7d611d54f6a2a67265ad59761af460..cf86ce2018179b0febca4a1c04086481ca43b918
SRC_URI += "\
  file://patches/0201-Release-2019.12.0-customers-skov-imx6-20200107-1.patch \
  "
# umpf-end
