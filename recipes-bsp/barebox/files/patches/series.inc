# umpf-base: v2016.11.0
# umpf-name: 2016.11.0/customers/skov/imx6
# umpf-version: 2016.11.0/customers/skov/imx6/20161123-1
# umpf-topic: v2016.11.0/customers/skov/imx6
# umpf-hashinfo: 4a58a01bba45f0132ea2f65ed3838f1f8dcb9ad5
# umpf-topic-range: d39a63184c7524f7329a8316228554c123903b29..e6a35b1bea0dbc13890a07019a2d8cab66adc739
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov-add-support-for-board-21-22-device-tree-rename.patch \
  file://patches/0003-ubi-Only-read-necessary-size-when-reading-the-VID-he.patch \
  file://patches/0004-environment-fix-typo.patch \
  file://patches/0005-spi-i.MX-reset-controller-on-init.patch \
  "
# umpf-topic: v2016.11.0/topic/squashfs
# umpf-hashinfo: 619d1c4b0b920291431ff6668bacdc11d898d113
# umpf-topic-range: e6a35b1bea0dbc13890a07019a2d8cab66adc739..1900efd8a2e5702655e25c170f26e3e7a46f1ff6
SRC_URI += "\
  file://patches/0101-fs-squashfs-port-lzo-compression-support-from-kernel.patch \
  file://patches/0102-fs-squashfs-port-lz4-compression-support-from-kernel.patch \
  file://patches/0103-fs-squashfs-port-zlib-compression-support-from-kerne.patch \
  file://patches/0104-Add-filetype-and-detection-for-squashfs-images.patch \
  file://patches/0105-fs-squashfs-append-linux-rootarg-for-ubi-volume.patch \
  file://patches/0106-fs-squashfs-Enable-squashfs-XZ-support-when-XZ-is-en.patch \
  "
# umpf-release: 2016.11.0/customers/skov/imx6/20161123-1
# umpf-topic-range: 1900efd8a2e5702655e25c170f26e3e7a46f1ff6..c0139d43fd550be7442c07d6e952cf861001f22e
SRC_URI += "\
  file://patches/0201-Release-2016.11.0-customers-skov-imx6-20161123-1.patch \
  "
# umpf-end
