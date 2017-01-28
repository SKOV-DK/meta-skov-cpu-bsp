# umpf-base: v4.4.34
# umpf-name: 4.4/customers/skov/imx6
# umpf-version: 4.4/customers/skov/imx6/20161124-1
# umpf-topic: v4.4/topic/pwm-backlight-readback
# umpf-hashinfo: 7212da90245f37563c9ce6785bc3cf356be5fb8b
# umpf-topic-range: 4eb9a81002485a7abfa53a334dde5bc10328079f..591d1667ff6a7c2f6b9dfdec0011192cd238bd62
SRC_URI += "\
  file://patches/0001-backlight-pwm_bl-Avoid-backlight-flicker-when-probed.patch \
  file://patches/0002-backlight-pwm_bl-Fix-broken-PWM-backlight-for-non-dt.patch \
  file://patches/0003-backlight-pwm_bl-add-debug-information-for-initial-s.patch \
  "
# umpf-topic: v4.4/topic/rtc_pcfF85063_fixes
# umpf-hashinfo: 850560e787f5494ec066dc5d20fc2192d24ce310
# umpf-topic-range: 591d1667ff6a7c2f6b9dfdec0011192cd238bd62..ce90b820c9033f50a2db8861a3674c0b9e83efed
SRC_URI += "\
  file://patches/0101-RTC-PCF85063-fix-time-date-reading-part-1.patch \
  file://patches/0102-RTC-PCF85063-fix-time-date-reading-part-II.patch \
  file://patches/0103-RTC-PCF85063-fix-time-date-setting.patch \
  "
# umpf-topic: v4.4/customers/skov/imx6
# umpf-hashinfo: 66fdd321f3704c7e638c80858ffc490f853c9b45
# umpf-topic-range: ce90b820c9033f50a2db8861a3674c0b9e83efed..eafd44842869f35e041738175e838345ae4273ca
SRC_URI += "\
  file://patches/0201-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0202-skov_version-add-support-for-board-21-22.patch \
  file://patches/0203-devicetree-restructure-skov-files-and-add-support-fo.patch \
  file://patches/0204-panel-simple-add-support-for-Logic-Technologies-lttd.patch \
  file://patches/0205-ubi-Only-read-necessary-size-when-reading-the-VID-he.patch \
  "
# umpf-topic: v4.4/topic/bgi
# umpf-hashinfo: 5af949995d3551a4cf56e335f5c7177ba854c4ab
# umpf-topic-range: eafd44842869f35e041738175e838345ae4273ca..ec0423e5120bd05373990d15190f898e567316b4
SRC_URI += "\
  file://patches/0301-HACK-Let-DRM_IOCTL_MODE_MAP_DUMB-also-return-the-phy.patch \
  file://patches/0302-fuse-cuse-implement-mmap.patch \
  "
# umpf-topic: v4.4/topic/micrel-smi
# umpf-hashinfo: ab76899b3f284fd32b9ac317d697590c3c265bc6
# umpf-topic-range: ec0423e5120bd05373990d15190f898e567316b4..0a864e944276cf169b28cf2d9f85d70f9147da73
SRC_URI += "\
  file://patches/0401-mdio-bitbang-add-SMI0-mode-support.patch \
  file://patches/0402-micrel-smi-add-driver-for-KSZ8873.patch \
  file://patches/0403-micrel-fix-config_aneg-for-ksz886x.patch \
  "
#San Ubifs error FIX
SRC_URI += "\
  file://patches/0404-mtd-gpmi-Deal-with-bitflips-in-erased-regions.patch \
  "
# umpf-release: 4.4/customers/skov/imx6/20161124-1
# umpf-topic-range: 0a864e944276cf169b28cf2d9f85d70f9147da73..b2b55f922dd9f7ec4ee71422d6dacc78f7c9abec
SRC_URI += "\
  file://patches/0501-Release-4.4-customers-skov-imx6-2.patch \
  "
# umpf-end
SRC_URI += "file://patches/0601-micrel-support-write-to-registers-via-regmap.patch"
