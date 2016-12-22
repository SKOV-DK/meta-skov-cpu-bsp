# umpf-base: v2016.11.0
# umpf-name: 2016.11.0/customers/skov/imx6
# umpf-version: 2016.11.0/customers/skov/imx6/20161208-1
# umpf-topic: v2016.11.0/customers/skov/imx6
# umpf-hashinfo: ed2901493a28ceb869e7653a1820179b2eae0b3a
# umpf-topic-range: d39a63184c7524f7329a8316228554c123903b29..5594c1218e2d5c838352ce411a1c655430cd69fd
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-board-21-22-device-tree-rename.patch \
  file://patches/0003-ubi-Only-read-necessary-size-when-reading-the-VID-he.patch \
  file://patches/0004-environment-fix-typo.patch \
  file://patches/0005-spi-i.MX-reset-controller-on-init.patch \
  file://patches/0006-skov-add-support-for-video-output-to-the-barebox-DTS.patch \
  file://patches/0007-skov-set-backlight-brightness-from-state.patch \
  "
# umpf-topic: v2016.11.0/topic/squashfs
# umpf-hashinfo: 619d1c4b0b920291431ff6668bacdc11d898d113
# umpf-topic-range: 5594c1218e2d5c838352ce411a1c655430cd69fd..9cfd68568c05fdcd58c8bdd8798bf26686fef343
SRC_URI += "\
  file://patches/0101-fs-squashfs-port-lzo-compression-support-from-kernel.patch \
  file://patches/0102-fs-squashfs-port-lz4-compression-support-from-kernel.patch \
  file://patches/0103-fs-squashfs-port-zlib-compression-support-from-kerne.patch \
  file://patches/0104-Add-filetype-and-detection-for-squashfs-images.patch \
  file://patches/0105-fs-squashfs-append-linux-rootarg-for-ubi-volume.patch \
  file://patches/0106-fs-squashfs-Enable-squashfs-XZ-support-when-XZ-is-en.patch \
  "
# umpf-topic: v2016.11.0/topic/ipu-pd
# umpf-hashinfo: 4414f6f85cda1cf6433cd996adae77b1b2b67f1f
# umpf-topic-range: 9cfd68568c05fdcd58c8bdd8798bf26686fef343..886ef5458227342c541b6ac6b794248f2b43bb0a
SRC_URI += "\
  file://patches/0201-i.MX-IPUv3-Add-parallel-display-support.patch \
  file://patches/0202-video-IPU-framebuffer-honor-clock-and-enable-polarit.patch \
  file://patches/0203-PWM-update-enable-status-when-using-the-internal-API.patch \
  "
# SKOV patches
SRC_URI += "\
  file://patches/0302-mtd-nand_mxs-fix-NAND-error-when-change-clk-rate.patch
  file://patches/0303-Release-2016.11.0-2.patch
  "
# umpf-end
