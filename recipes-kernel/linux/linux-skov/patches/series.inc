# umpf-base: v4.4.10
# umpf-name: 4.4/customers/skov/imx6
# umpf-version: 4.4/customers/skov/imx6/20160930-1
# umpf-topic: v4.4/topic/pwm-backlight-readback
# umpf-hashinfo: 7212da90245f37563c9ce6785bc3cf356be5fb8b
# umpf-topic-range: 4c2795dd50f98fa162cb53190eb557be44f92f58..452ace6b45aaf0c812036c8b4ede47dc19175423
SRC_URI += "\
  file://patches/0001-backlight-pwm_bl-Avoid-backlight-flicker-when-probed.patch \
  file://patches/0002-backlight-pwm_bl-Fix-broken-PWM-backlight-for-non-dt.patch \
  file://patches/0003-backlight-pwm_bl-add-debug-information-for-initial-s.patch \
  "
# umpf-topic: v4.4/topic/rtc_pcfF85063_fixes
# umpf-hashinfo: 850560e787f5494ec066dc5d20fc2192d24ce310
# umpf-topic-range: 452ace6b45aaf0c812036c8b4ede47dc19175423..797e9474efcdb6f80aa59b35908d8ab10e08ecdd
SRC_URI += "\
  file://patches/0101-RTC-PCF85063-fix-time-date-reading-part-1.patch \
  file://patches/0102-RTC-PCF85063-fix-time-date-reading-part-II.patch \
  file://patches/0103-RTC-PCF85063-fix-time-date-setting.patch \
  "
# umpf-topic: v4.4/customers/skov/imx6
# umpf-hashinfo: bb33e73b246692594a485a7792e30162c3638adf
# umpf-topic-range: 797e9474efcdb6f80aa59b35908d8ab10e08ecdd..ec6651d2d618c9d0bd9d7f1b7b10e426933521e7
SRC_URI += "\
  file://patches/0201-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0202-ubi-Only-read-necessary-size-when-reading-the-VID-he.patch \
  "
# umpf-topic: v4.4/topic/bgi
# umpf-hashinfo: 5af949995d3551a4cf56e335f5c7177ba854c4ab
# umpf-topic-range: ec6651d2d618c9d0bd9d7f1b7b10e426933521e7..f85f098c4ee95c3003d0df4622095f2835d8eb95
SRC_URI += "\
  file://patches/0301-HACK-Let-DRM_IOCTL_MODE_MAP_DUMB-also-return-the-phy.patch \
  file://patches/0302-fuse-cuse-implement-mmap.patch \
  "
# umpf-topic: v4.4/topic/micrel-smi
# umpf-hashinfo: ab76899b3f284fd32b9ac317d697590c3c265bc6
# umpf-topic-range: f85f098c4ee95c3003d0df4622095f2835d8eb95..12c9622af926aa165fd37ae56f8362e3c5d77293
SRC_URI += "\
  file://patches/0401-mdio-bitbang-add-SMI0-mode-support.patch \
  file://patches/0402-micrel-smi-add-driver-for-KSZ8873.patch \
  file://patches/0403-micrel-fix-config_aneg-for-ksz886x.patch \
  "
# umpf-topic: v4.4.10/topic/imx-drm-fixes
# umpf-hashinfo: 71addfa99cda72271ece8e144592acd9895dd0c8
# umpf-topic-range: 12c9622af926aa165fd37ae56f8362e3c5d77293..574191d0f35d80e47f6e61d978c7dffa99d3a868
SRC_URI += "\
  file://patches/0501-drm-imx-Match-imx-ipuv3-crtc-components-using-device.patch \
  "
# umpf-release: 4.4/customers/skov/imx6/20160930-1
# umpf-topic-range: 574191d0f35d80e47f6e61d978c7dffa99d3a868..25d8c8a9222f0cd136c5d53caba319ead3d4bb9e
SRC_URI += "\
  file://patches/0601-Release-4.4-customers-skov-imx6-20160930-1.patch \
  "
# umpf-end
