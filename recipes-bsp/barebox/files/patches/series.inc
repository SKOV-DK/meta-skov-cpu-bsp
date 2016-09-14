# umpf-base: v2015.12.0
# umpf-name: 2015.12.0/customers/skov/dol63x
# umpf-version: 2015.12.0/customers/skov/dol63x/20160914-1
# umpf-topic: v2015.12.0/topic/imx6-big-cs0
# umpf-hashinfo: 62bf45a04c8f525cf115cb4606c2b7da88c23fe5
# umpf-topic-range: e6b83bd498ce7c5449a65207bdb8f45fbcaeeb54..62bf45a04c8f525cf115cb4606c2b7da88c23fe5
SRC_URI += "\
  file://patches/0001-arm-Clarify-memory-layout-calculation.patch \
  file://patches/0002-arm-start-Add-visible-sdram-region-for-barebox-board.patch \
  file://patches/0003-ARM-mmu-Add-VBAR-setup.patch \
  file://patches/0004-ARM-Fix-exception-table-setup-in-MMU-less-mode.patch \
  file://patches/0005-ARM-pbl-multi-Fix-SDRAM-at-end-of-address-space.patch \
  file://patches/0006-ARM-start-Fix-wrong-format-specifier.patch \
  file://patches/0007-ARM-Do-not-use-last-64KiB-of-address-space-for-bareb.patch \
  file://patches/0008-ARM-Rework-vector-table-setup.patch \
  file://patches/0009-ARM-asm-Add-convenience-fucntions-to-access-VBAR.patch \
  file://patches/0010-ARM-i.MX6-esdctl-Fix-memsize-calculation-for-4GiB-cs.patch \
  file://patches/0011-ARM-i.MX6-esdctl-Fix-CS0_end-for-4GiB-cs.patch \
  file://patches/0012-ARM-i.MX-xload-esdhc-Find-entry-in-image.patch \
  "
# umpf-topic: v2015.12.0/customers/skov/dol63x
# umpf-hashinfo: 4aca6897b5f9a47d153e77f139eec254f4a52d1e
# umpf-topic-range: 62bf45a04c8f525cf115cb4606c2b7da88c23fe5..43003ebdae8058ba5b70cba2432c1df39f9e0d13
SRC_URI += "\
  file://patches/0101-nfs-forward-filesystem-options-to-the-kernel-command.patch \
  file://patches/0102-Skov-add-base-platform-support.patch \
  file://patches/0103-blspec-Prepare-for-a-different-compatible-string.patch \
  file://patches/0104-Skov-create-some-information-at-run-time.patch \
  file://patches/0105-blspec-define-a-partition-name-in-order-to-use-Bareb.patch \
  file://patches/0106-Skov-Use-local-environment-variants-to-handle-the-re.patch \
  file://patches/0107-Skov-some-board-variants-needs-special-tweaks.patch \
  file://patches/0108-dol63x-set-defaults-for-bootsate-parameters.patch \
  file://patches/0109-Skov-add-support-for-board-variants-16-and-17.patch \
  file://patches/0110-Skov-Add-support-for-board-variant-18.patch \
  file://patches/0111-Skov-add-support-for-board-variant-19.patch \
  file://patches/0112-Skov-add-support-for-board-variant-20.patch \
  "
# umpf-topic: v2015.12.0/topic/state
# umpf-hashinfo: 9e26841724e0043e3da32f35cd4bb3cba05d4d21
# umpf-topic-range: 43003ebdae8058ba5b70cba2432c1df39f9e0d13..9556591f16ea528f09d0f5d314d784208c5690fd
SRC_URI += "\
  file://patches/0201-of_path-of_find_path-factor-out-device-detection-log.patch \
  file://patches/0202-of_path-add-of_find_path_by_node.patch \
  file://patches/0203-state-make-use-of-of_find_path_by_node-and-add-retur.patch \
  file://patches/0204-state-use-name-of-device-node-as-name-if-alias-is-no.patch \
  file://patches/0205-state-disable-load-command.patch \
  "
# umpf-topic: v2015.12.0/topic/bootchooser
# umpf-hashinfo: 80f2f56be3bf316da00249a807c1899c5ab70ba1
# umpf-topic-range: 9556591f16ea528f09d0f5d314d784208c5690fd..82fdf29945b71c043486cff40acfa0ddf230c9bd
SRC_URI += "\
  file://patches/0301-bootstate-add-framework-for-redundant-boot-scenarios.patch \
  "
# umpf-topic: v2015.12.0/topic/mtd
# umpf-hashinfo: c900aa462bc11b1d98ecc8db0a00db28f4318201
# umpf-topic-range: 82fdf29945b71c043486cff40acfa0ddf230c9bd..1679d84b27e165b91e7aba7e8022f487b795888c
SRC_URI += "\
  file://patches/0401-mtd-nand-bb-Fix-8k-page-size-nands.patch \
  file://patches/0402-mtd-Fix-mtdraw-for-Nand-4GiB.patch \
  file://patches/0403-mtd-Make-erase_info-structs-64bit-where-necessary.patch \
  file://patches/0404-mtd-Fix-mtd_op_read-for-devices-4GiB.patch \
  file://patches/0405-mtd-Fix-mtd_op_erase-for-devices-4GiB.patch \
  file://patches/0406-mtd-Fix-erasing-of-devices-4GiB.patch \
  file://patches/0407-mtd-mtdoob-device-change-name-to-have-the-chip-name-.patch \
  file://patches/0408-fix-erasing-protecting-flashes-with-unspecified-size.patch \
  file://patches/0409-mtd-nand-nand_mxs-Factor-out-BCH-setup-function.patch \
  file://patches/0410-mtd-nand-Pass-page-argument-to-read_subpage-hook.patch \
  file://patches/0411-mtd-nand-Enable-subpage-reads.patch \
  file://patches/0412-mtd-nand-nand_mxs-Add-subpage-read-support.patch \
  file://patches/0413-mtd-nand-gpmi-Use-subpage-reads-only-on-suitable-NAN.patch \
  file://patches/0414-mtd-nand-Set-ONFI-function-hooks-earlier.patch \
  file://patches/0415-mtd-nand_mxs-Setup-timing.patch \
  file://patches/0416-ARM-i.MX6-Enable-parent-propagation-for-clk_gate2.patch \
  "
# umpf-release: 2015.12.0/customers/skov/dol63x/20160914-1
# umpf-topic-range: 1679d84b27e165b91e7aba7e8022f487b795888c..2d6609a897736c7719f3b46c2cb4d9ddedf8188f
SRC_URI += "\
  file://patches/0501-Release-2015.12.0-customers-skov-dol63x-20160914-1.patch \
  "
# umpf-end
