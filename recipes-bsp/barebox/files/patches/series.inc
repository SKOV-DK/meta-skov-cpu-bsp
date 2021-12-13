# umpf-base: v2021.11.0
# umpf-name: 2021.11.0/customers/skov/imx6
# umpf-version: 2021.11.0/customers/skov/imx6/20211208-1
# umpf-topic: v2021.11.0/customers/skov/imx6
# umpf-hashinfo: 25d3f6e36e5646a6166c7a8d86da9d9ea47e4751
# umpf-topic-range: e2c198488f5aa6dadebec88af1db8ae06127b98b..2546a389c928ed2fac24b3f747790d30c9c3a93c
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-topic: v2021.11.0/topic/skov-net
# umpf-hashinfo: 7b03fb7edf5c0abdbb5fae927e529b6b4f83745a
# umpf-topic-range: 2546a389c928ed2fac24b3f747790d30c9c3a93c..903c147add7d6b917fea6f643cdfa5f49761253d
SRC_URI += "\
  file://patches/0101-ARM-dts-skov-imx6-add-USB-nodes.patch \
  file://patches/0102-ARM-boards-skov-imx6-fixup_machine_compatible-add-op.patch \
  file://patches/0103-ARM-boards-skov-imx6-add-switch-detection.patch \
  file://patches/0104-ARM-boards-skov-imx6-disable-eth0-for-barebox-if-no-.patch \
  file://patches/0105-ARM-boards-skov-imx6-fixup-different-DTS-variants.patch \
  file://patches/0106-ARM-boards-skov-imx6-start-using-deep-probe.patch \
  file://patches/0107-ARM-boards-skov-imx6-add-defaultenv-with-eth1-discov.patch \
  file://patches/0109-ARM-boards-skov-imx6-use-separate-DTS-for-the-iMX6-S.patch \
  file://patches/0110-usb-net-Add-support-for-the-Realtek-RTL8152B-RTL8153.patch \
  "
# umpf-release: 2021.11.0/customers/skov/imx6/20211208-1
# umpf-topic-range: 903c147add7d6b917fea6f643cdfa5f49761253d..6bfba7c1eaf8fd79c19de3679f224bd21c8f140e
SRC_URI += "\
  file://patches/0201-Release-2021.11.0-customers-skov-imx6-20211208-1.patch \
  "
# umpf-end
