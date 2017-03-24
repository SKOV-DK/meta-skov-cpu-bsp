# umpf-base: v2017.03.0
# umpf-name: 2017.03.0/customers/skov/imx6
# umpf-version: 2017.03.0/customers/skov/imx6/20170324-1
# umpf-topic: v2017.03.0/customers/skov/imx6
# umpf-hashinfo: af6579c3ff1ff94728790f0b2c900d0ec891ed07
# umpf-topic-range: a614f64d72812a4c569ae06d6ee81dfdfeea812c..af6579c3ff1ff94728790f0b2c900d0ec891ed07
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-mtd-nand_mxs-fix-NAND-error-when-change-clk-rate.patch \
  file://patches/0005-skov-choose-environment-depending-on-bootsource.patch \
  "
# umpf-release: 2017.03.0/customers/skov/imx6/20170324-1
# umpf-topic-range: af6579c3ff1ff94728790f0b2c900d0ec891ed07..f7b28e15b29b0a663f10742856708fd50a4721c0
SRC_URI += "\
  file://patches/0101-Release-2017.03.0-customers-skov-imx6-20170324-1.patch \
  "
# umpf-end
