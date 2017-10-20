# umpf-base: v2017.03.0
# umpf-name: 2017.03.0/customers/skov/imx6
# umpf-version: 2017.03.0/customers/skov/imx6/20171020-1
# umpf-topic: v2017.03.0/customers/skov/imx6
# umpf-hashinfo: aad37fe3de597dd849ff493bf5b48ee3222d3ab6
# umpf-topic-range: a614f64d72812a4c569ae06d6ee81dfdfeea812c..245c894cd8ce0f96094c5f5f303b5ff442d4f60f
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0003-skov-set-backlight-brightness-from-state.patch \
  file://patches/0004-mtd-nand_mxs-fix-NAND-error-when-change-clk-rate.patch \
  file://patches/0005-skov-choose-environment-depending-on-bootsource.patch \
  file://patches/0006-commands-i2c-do-not-restrict-i2c_write-s-data-to-be-.patch \
  file://patches/0007-graphic_utils-Fix-freeing-uninitialzed-pointer-in-fb.patch \
  "
# umpf-release: 2017.03.0/customers/skov/imx6/20171020-1
# umpf-topic-range: 245c894cd8ce0f96094c5f5f303b5ff442d4f60f..b704de45b51807f069ce075b43501b3d5267347d
SRC_URI += "\
  file://patches/0101-Release-2017.03.0-customers-skov-imx6-20171020-1.patch \
  "
# umpf-end
