# umpf-base: v2021.07.0
# umpf-name: 2021.07.0/customers/skov/imx6
# umpf-version: 2021.07.0/customers/skov/imx6/20210720-1
# umpf-topic: v2021.07.0/customers/skov/imx6
# umpf-hashinfo: d08fcb918108cad6d011ff62eefc82f7586a5642
# umpf-topic-range: 72424fd057d135ec0e41139fe4cb5740471d33a5..ede3b78f63eda144cc2f5880823593985c0d898f
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-release: 2021.07.0/customers/skov/imx6/20210720-1
# umpf-topic-range: ede3b78f63eda144cc2f5880823593985c0d898f..afa7e53a70564204a0620a7341427264a3837c56
SRC_URI += "\
  file://patches/0201-Release-2021.08.0-customers-skov-imx6-20210929-1.patch \
  "
# umpf-end
SRC_URI += "\
  file://patches/0101-ARM-dts-skov-imx6-add-USB-nodes.patch \
  file://patches/0102-ARM-boards-skov-imx6-fixup_machine_compatible-add.patch \
  file://patches/0103-ARM-boards-skov-imx6-add-switch-detection.patch \
  file://patches/0104-ARM-boards-skov-imx6-disable-eth0-for-barebox-if-.patch \
  file://patches/0105-ARM-boards-skov-imx6-fixup-different-DTS-variants.patch \
  file://patches/0106-ARM-boards-skov-imx6-start-using-deep-probe.patch \
  file://patches/0107-ARM-boards-skov-imx6-add-defaultenv-with-eth1-dis.patch \
  file://patches/0108-ARM-boards-skov-imx6-use-separate-DTS-for-the-iMX6-S.patch \
"
