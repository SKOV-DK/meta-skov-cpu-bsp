# umpf-base: v2016.08.0
# umpf-name: 2016.08.0/customers/skov/imx6
# umpf-version: 2016.08.0/customers/skov/imx6/20160921-1
# umpf-topic: v2016.08.0/customers/skov/imx6
# umpf-hashinfo: 556701a75539fa47ae245c2a577f165c93bcc592
# umpf-topic-range: 7defdbf78f4c4c412632500c51909f08f99baacf..556701a75539fa47ae245c2a577f165c93bcc592
SRC_URI += "\
  file://patches/0001-Skov-add-base-platform-support.patch \
  file://patches/0002-blspec-Prepare-for-a-different-compatible-string.patch \
  file://patches/0003-Skov-create-some-information-at-run-time.patch \
  file://patches/0004-blspec-define-a-partition-name-in-order-to-use-Bareb.patch \
  file://patches/0005-Skov-Use-local-environment-variants-to-handle-the-re.patch \
  file://patches/0006-Skov-some-board-variants-needs-special-tweaks.patch \
  file://patches/0007-dol63x-set-defaults-for-bootsate-parameters.patch \
  file://patches/0008-Skov-add-support-for-board-variants-16-and-17.patch \
  file://patches/0009-Skov-Add-support-for-board-variant-18.patch \
  file://patches/0010-Skov-add-support-for-board-variant-19.patch \
  file://patches/0011-skov-version-fix-usage-of-asprintf.patch \
  file://patches/0012-imx6qdl-skov-dol63x-fix-usage-of-phy-reset-duration-.patch \
  file://patches/0013-Skov-add-support-for-board-variant-20.patch \
  file://patches/0014-dol63x-dtsi-prepare-dtb-for-new-state-implementation.patch \
  file://patches/0015-dol63x-board-set-update-handler-to-specific-spiflash.patch \
  file://patches/0016-ARM-i.MX6-Enable-parent-propagation-for-clk_gate2.patch \
  file://patches/0017-xstrdup-don-t-panic-on-xstrdup-NULL.patch \
  "
# umpf-topic: v2016.08.0/topic/imx-fix
# umpf-hashinfo: 232d18b6aae72af48225cd14170a818957355279
# umpf-topic-range: 556701a75539fa47ae245c2a577f165c93bcc592..cff28db6be3956e8e2616d2d1a54b078bc39232d
SRC_URI += "\
  file://patches/0101-fix-ARMv8-interference-with-ARMv7.patch \
  "
# umpf-topic: v2016.08.0/topic/bootchooser
# umpf-hashinfo: 1c956e58346118892faf149c7d56baf68571ffcc
# umpf-topic-range: cff28db6be3956e8e2616d2d1a54b078bc39232d..8bb07809c83a15036ea609ba2aa5d1b2605e9d81
SRC_URI += "\
  file://patches/0201-blspec-remove-unused-blspec_boot_devicename.patch \
  file://patches/0202-blspec-Remove-once-default-handling.patch \
  file://patches/0203-blspec-remove-unused-function-prototype.patch \
  file://patches/0204-boot-Call-blspec_scan_directory-only-on-strings-cont.patch \
  file://patches/0205-include-Move-bulk-of-boot.h-to-bootm.h.patch \
  file://patches/0206-blpec-rename-struct-lspec-bootentries.patch \
  file://patches/0207-blspec-factor-out-a-struct-bootentry.patch \
  file://patches/0208-bootentries-Add-title-description.patch \
  file://patches/0209-blspec-separate-bootentries-from-blspec-entries.patch \
  file://patches/0210-blspec-Make-blspec_boot-static.patch \
  file://patches/0211-bootentries-Move-menu-display-string-allocation-to-b.patch \
  file://patches/0212-bootentries-Move-struct-bootentries-to-include-boot..patch \
  file://patches/0213-boot-Use-struct-bootentries-to-pass-around-data.patch \
  file://patches/0214-boot-Move-code-to-common.patch \
  file://patches/0215-boot-add-single-quotes-when-printing-boot-target-nam.patch \
  file://patches/0216-boot-command-Explicitly-complain-when-boot-target-li.patch \
  file://patches/0217-blspec-Turn-message-back-to-debug-level.patch \
  file://patches/0218-boot-Print-a-message-when-a-boot-target-string-does-.patch \
  file://patches/0219-state-Save-on-shutdown.patch \
  file://patches/0220-nv-Do-not-save-nv-variables-while-loading.patch \
  file://patches/0221-nv-Save-nv-variables-on-shutdown.patch \
  file://patches/0222-nv-Add-option-to-explicitly-save-nv-variables.patch \
  file://patches/0223-nv-Allow-to-set-remove-multiple-variables-with-one-c.patch \
  file://patches/0224-nv-Use-dev_remove_param-to-delete-nv-variable.patch \
  file://patches/0225-lib-Add-Kconfig-symbol-for-FNMATCH.patch \
  file://patches/0226-nv-Allow-wildcards-when-removing-NV-vars.patch \
  file://patches/0227-i.MX53-loco-Add-state.patch \
  file://patches/0228-boot-misc-print-fixes.patch \
  file://patches/0229-boot-add-framework-for-redundant-boot-scenarios.patch \
  file://patches/0230-blspec-Handle-nfs-pathes-from-boot.patch \
  file://patches/0231-bootchooser-fix-help-message.patch \
  "
# umpf-topic: v2016.08.0/topic/squashfs
# umpf-hashinfo: e843248dffc4b7870a06b3f734b4d311161e1e87
# umpf-topic-range: 8bb07809c83a15036ea609ba2aa5d1b2605e9d81..c1a38ce5961f2073bdc664630fe6a333b00cc85a
SRC_URI += "\
  file://patches/0301-squashfs-add-lzo-compression-support.patch \
  file://patches/0302-fs-squashfs-add-lz4-compression.patch \
  file://patches/0303-fs-squashfs-add-zlib-compression-support.patch \
  file://patches/0304-Add-filetype-and-detection-for-squashfs-images.patch \
  file://patches/0305-fs-squashfs-append-linux-rootarg-for-ubi-volume.patch \
  "
# umpf-release: 2016.08.0/customers/skov/imx6/20160921-1
# umpf-topic-range: c1a38ce5961f2073bdc664630fe6a333b00cc85a..bcd58358fcd16f453b79455c21ff726f0eac2fcb
SRC_URI += "\
  file://patches/0401-Release-2016.08.0-customers-skov-imx6-20160921-1.patch \
  "
# umpf-end
