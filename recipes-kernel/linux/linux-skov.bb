inherit kernel
require recipes-kernel/linux/linux-dtb.inc

SECTION = "kernel"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

PR = "r0"
PV = "${LINUX_VERSION}"

LINUX_VERSION = "4.3"

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v4.x/linux-${LINUX_VERSION}.tar.xz"
SRC_URI += "file://defconfig"

SRC_URI[md5sum] = "58b35794eee3b6d52ce7be39357801e7"
SRC_URI[sha256sum] = "4a622cc84b8a3c38d39bc17195b0c064d2b46945dfde0dae18f77b120bc9f3ae"

SRC_URI += "\
  file://patches/0001-pwm-backlight-Avoid-backlight-flicker-when-probed-fr.patch \
  file://patches/0002-backlight-pwm-add-debug-information-for-initial-stat.patch \
  file://patches/0101-drm-panel-add-kernel-doc-for-size-attributes-in-pane.patch \
  file://patches/0102-drm-imx-parallel-display-allow-to-determine-bus-form.patch \
  file://patches/0103-of-Add-vendor-prefix-for-Logic-Technologies-Ltd.patch \
  file://patches/0104-drm-panel-Add-support-for-Logic-Technologies-LTTD800.patch \
  file://patches/0105-ARM-dts-Import-Skov-AS-DOL63x-device-trees.patch \
  file://patches/0106-ARM-dts-dol63x-Switch-to-modern-way-of-wiring-a-pane.patch \
  file://patches/0107-ARM-dts-dol63x-Let-the-backlight-initially-be-off-af.patch \
  file://patches/0108-HACK-ipuv3-set-clock-polarity-to-1.patch \
  file://patches/0109-DTS-use-a-more-descriptive-name.patch \
  file://patches/0110-Skov-DO63x-use-a-more-descriptive-file-name.patch \
  file://patches/0111-Skov-DO63x-add-device-trees-for-the-C-revisions-of-t.patch \
  file://patches/0112-Skov-DO63x-provide-the-most-specific-compatible-stri.patch \
  file://patches/0113-DTS-enrich-the-power-supply-information.patch \
  file://patches/0114-DTS-the-SD-card-s-power-supply-is-a-switched-one.patch \
  file://patches/0115-DTS-fully-describe-the-SD-card-s-power-supply.patch \
  file://patches/0116-DTS-fully-describe-the-SD-card-s-IO-supply.patch \
  file://patches/0117-DTS-collect-pin-multiplexing-to-the-unit-where-they-.patch \
  file://patches/0118-DTS-fill-the-remaining-SD-socket-capabilities.patch \
  file://patches/0119-DTS-move-the-variant-detection-into-the-generic-DTS-.patch \
  file://patches/0120-DTS-the-backlight-is-supplied-by-the-input-voltage.patch \
  file://patches/0121-DTS-move-CAN-pinmux-where-it-belongs-to.patch \
  file://patches/0122-DTS-move-SPI-NOR-CS-signal-where-it-belongs-to.patch \
  file://patches/0123-DTS-move-MCP2003-CS-signal-where-it-belongs-to.patch \
  file://patches/0124-DTS-touchcontroller-move-its-shared-part-to-the-comm.patch \
  file://patches/0125-DTS-move-touchcontroller-define-around-to-reflect-bo.patch \
  file://patches/0126-DTS-since-revision-B-the-backlight-has-an-additional.patch \
  file://patches/0127-DTS-add-some-info.patch \
  file://patches/0128-DTS-add-more-power-supply-entries.patch \
  file://patches/0129-drm-imx-provide-send_vblank-with-correct-pipe.patch \
  file://patches/0130-DTS-disable-HDMI.patch \
  file://patches/0201-HACK-Let-DRM_IOCTL_MODE_MAP_DUMB-also-return-the-phy.patch \
  file://patches/0202-fuse-cuse-implement-mmap.patch \
  file://patches/0301-Release-4.3-customers-skov-dol63x-20151127-1.patch \
  "

S = "${WORKDIR}/linux-${LINUX_VERSION}"

# Override COMPATIBLE_MACHINE to include your machine in a bbappend
# file. Leaving it empty here ensures an early explicit build failure.
COMPATIBLE_MACHINE = "dol-63x-*"

# do not install kernel images to the rootfs
RDEPENDS_kernel-base = ""

