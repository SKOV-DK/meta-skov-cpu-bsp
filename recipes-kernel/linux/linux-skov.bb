inherit kernel
require recipes-kernel/linux/linux-dtb.inc

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.4.9"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

SRC_URI[md5sum] = "ec1e5011cc2ab3f441e39716dcf4730e"
SRC_URI[sha256sum] = "7605ca7685209bb64c0047e630ba714ca457fe7d84f1c890264bd2d70265f3b9"

SRC_URI += "\
  file://patches/0001-backlight-pwm_bl-Avoid-backlight-flicker-when-probed.patch \
  file://patches/0002-backlight-pwm_bl-Fix-broken-PWM-backlight-for-non-dt.patch \
  file://patches/0003-backlight-pwm_bl-add-debug-information-for-initial-s.patch \
  file://patches/0101-RTC-PCF85063-fix-time-date-reading-part-1.patch \
  file://patches/0102-RTC-PCF85063-fix-time-date-reading-part-II.patch \
  file://patches/0103-RTC-PCF85063-fix-time-date-setting.patch \
  file://patches/0201-drm-panel-add-kernel-doc-for-size-attributes-in-pane.patch \
  file://patches/0202-of-Add-vendor-prefix-for-Logic-Technologies-Ltd.patch \
  file://patches/0203-drm-panel-Add-support-for-Logic-Technologies-LTTD800.patch \
  file://patches/0204-ARM-dts-Import-Skov-AS-DOL63x-device-trees.patch \
  file://patches/0205-ARM-dts-dol63x-Switch-to-modern-way-of-wiring-a-pane.patch \
  file://patches/0206-ARM-dts-dol63x-Let-the-backlight-initially-be-off-af.patch \
  file://patches/0207-HACK-ipuv3-set-clock-polarity-to-1.patch \
  file://patches/0208-DTS-use-a-more-descriptive-name.patch \
  file://patches/0209-Skov-DO63x-use-a-more-descriptive-file-name.patch \
  file://patches/0210-Skov-DO63x-add-device-trees-for-the-C-revisions-of-t.patch \
  file://patches/0211-Skov-DO63x-provide-the-most-specific-compatible-stri.patch \
  file://patches/0212-DTS-enrich-the-power-supply-information.patch \
  file://patches/0213-DTS-the-SD-card-s-power-supply-is-a-switched-one.patch \
  file://patches/0214-DTS-fully-describe-the-SD-card-s-power-supply.patch \
  file://patches/0215-DTS-fully-describe-the-SD-card-s-IO-supply.patch \
  file://patches/0216-DTS-collect-pin-multiplexing-to-the-unit-where-they-.patch \
  file://patches/0217-DTS-fill-the-remaining-SD-socket-capabilities.patch \
  file://patches/0218-DTS-move-the-variant-detection-into-the-generic-DTS-.patch \
  file://patches/0219-DTS-the-backlight-is-supplied-by-the-input-voltage.patch \
  file://patches/0220-DTS-move-CAN-pinmux-where-it-belongs-to.patch \
  file://patches/0221-DTS-move-SPI-NOR-CS-signal-where-it-belongs-to.patch \
  file://patches/0222-DTS-move-MCP2003-CS-signal-where-it-belongs-to.patch \
  file://patches/0223-DTS-touchcontroller-move-its-shared-part-to-the-comm.patch \
  file://patches/0224-DTS-move-touchcontroller-define-around-to-reflect-bo.patch \
  file://patches/0225-DTS-since-revision-B-the-backlight-has-an-additional.patch \
  file://patches/0226-DTS-add-some-info.patch \
  file://patches/0227-DTS-HDMI-only-the-i.MX6Q-based-variants-support-HDMI.patch \
  file://patches/0228-DTS-Skov-add-a-revision-C-devicetree-include.patch \
  file://patches/0229-DTS-fix-layout.patch \
  file://patches/0230-DTS-Skov-GPIO-Re-factor-the-pin-setup-for-the-board-.patch \
  file://patches/0231-DTS-network-Network-setup-pins-for-a-high-speed-conn.patch \
  file://patches/0232-DTS-two-RTCs-are-available-but-one-should-be-used-as.patch \
  file://patches/0233-DTS-configure-output-GPIOs-correctly.patch \
  file://patches/0234-DTS-PWM-pads-do-not-need-the-input-path-and-deliver-.patch \
  file://patches/0235-DTS-SPI-output-signals-doe-not-need-the-input-path.patch \
  file://patches/0236-DTS-handle-GPIO-lines-for-all-pin-controles.patch \
  file://patches/0237-DTS-handle-input-GPIOs-correctly.patch \
  file://patches/0238-DTS-prevent-the-kernel-from-switching-off-the-SD-car.patch \
  file://patches/0239-DTS-network-describe-the-network-switch-setup.patch \
  file://patches/0240-DTS-I-C-trim-the-I-C-bus-3-pads.patch \
  file://patches/0241-DTS-I-C-trim-the-I-C-bus-2-pads.patch \
  file://patches/0242-RTC-PCF85063-setup-the-clock-in-a-customer-specific-.patch \
  file://patches/0243-Skov-keep-customer-s-specific-drivers.patch \
  file://patches/0244-DTS-added-skov-dtbs-to-Makefile.patch \
  file://patches/0245-DTS-Skov-setup-phy-to-use-gpio-mdio.patch \
  file://patches/0246-DTS-Skov-use-micrel_smi-driver.patch \
  file://patches/0301-HACK-Let-DRM_IOCTL_MODE_MAP_DUMB-also-return-the-phy.patch \
  file://patches/0302-fuse-cuse-implement-mmap.patch \
  file://patches/0401-mdio-bitbang-add-SMI0-mode-support.patch \
  file://patches/0402-micrel-smi-add-driver-for-KSZ8873.patch \
  file://patches/0403-micrel-fix-config_aneg-for-ksz886x.patch \
  file://patches/0501-Release-4.4-customers-skov-imx6-20160513-1.patch \
  "

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "imx6-cpu"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""

