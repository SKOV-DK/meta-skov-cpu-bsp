SRC_URI += "file://patches/0001-backlight-pwm_bl-add-debug-information-for-initial-s.patch"

SRC_URI += "file://patches/0201-skov-add-support-for-base-platform.patch"

SRC_URI += "file://patches/0301-HACK-Let-DRM_IOCTL_MODE_MAP_DUMB-also-return-the-phy.patch"
SRC_URI += "file://patches/0302-fuse-cuse-implement-mmap.patch"

SRC_URI += "file://patches/0401-mdio-bitbang-add-SMI0-mode-support.patch"
SRC_URI += "file://patches/0402-micrel-smi-add-driver-for-KSZ8873.patch"
SRC_URI += "file://patches/0403-micrel-fix-config_aneg-for-ksz886x.patch"
SRC_URI += "file://patches/0404-micrel-support-write-to-registers-via-regmap.patch"
SRC_URI += "file://patches/0501-rtc-pcf85063-stop-validating.patch"
SRC_URI += "file://patches/0502-rtd-pcf85063-remove-useless.patch"
SRC_URI += "file://patches/0503-rtc-pcf85063-fix-clearing-bits.patch"
SRC_URI += "file://patches/0510-rtc-pcf85063-fix-so-ctrl1-setup-is-kept.patch"
# Version tag
SRC_URI += "file://patches/Release-4.9-customers-skov-imx6-version.patch"
