# umpf-base: v2016.08.0
# umpf-name: 2016.08.0/customers/skov/imx6
# umpf-version: 2016.08.0/customers/skov/imx6/20161001-1
# umpf-topic: v2016.08.0/customers/skov/imx6
# umpf-hashinfo: 8c7fcb47989bb878a2657be570965b2405855885
# umpf-topic-range: 7defdbf78f4c4c412632500c51909f08f99baacf..88a9245616446f11fb7b8d8258fbf19c65bd7168
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-ARM-i.MX6-Enable-parent-propagation-for-clk_gate2.patch \
  file://patches/0003-xstrdup-don-t-panic-on-xstrdup-NULL.patch \
  file://patches/0004-environment-wrong-magic-gives-the-impression-of-an-e.patch \
  file://patches/0005-blspec-fix-erroneus-free-in-entry_is_of_compatible.patch \
  file://patches/0006-blspec-fix-return-value-of-entry_is_of_compatible.patch \
  file://patches/0007-ubi-Only-read-necessary-size-when-reading-the-VID-he.patch \
  "
# umpf-topic: v2016.08.0/topic/imx-fix
# umpf-hashinfo: 232d18b6aae72af48225cd14170a818957355279
# umpf-topic-range: 88a9245616446f11fb7b8d8258fbf19c65bd7168..fe9be47bbe348237d8c8e2f09534d0670d9da732
SRC_URI += "\
  file://patches/0101-fix-ARMv8-interference-with-ARMv7.patch \
  "
# umpf-topic: v2016.08.0/topic/bootchooser
# umpf-hashinfo: 1c956e58346118892faf149c7d56baf68571ffcc
# umpf-topic-range: fe9be47bbe348237d8c8e2f09534d0670d9da732..4fc7c27e6624048e9b3ecacdabf2614b11559ad6
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
# umpf-topic-range: 4fc7c27e6624048e9b3ecacdabf2614b11559ad6..a123943bfe022233d67eaf2b9588df810e5e3210
SRC_URI += "\
  file://patches/0301-squashfs-add-lzo-compression-support.patch \
  file://patches/0302-fs-squashfs-add-lz4-compression.patch \
  file://patches/0303-fs-squashfs-add-zlib-compression-support.patch \
  file://patches/0304-Add-filetype-and-detection-for-squashfs-images.patch \
  file://patches/0305-fs-squashfs-append-linux-rootarg-for-ubi-volume.patch \
  "
# umpf-release: 2016.08.0/customers/skov/imx6/20161001-1
# umpf-topic-range: a123943bfe022233d67eaf2b9588df810e5e3210..79f86e3cf6f5fa4b37fd9b8b17bbda1fc1bea6f7
SRC_URI += "\
  file://patches/0401-Release-2016.08.0-customers-skov-imx6-20161001-1.patch \
  "
# umpf-end
