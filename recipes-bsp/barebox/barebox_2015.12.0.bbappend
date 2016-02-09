FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://defconfig"

SRC_URI += "\
  file://patches/0001-nfs-forward-filesystem-options-to-the-kernel-command.patch \
  file://patches/0002-of_path-of_find_path-factor-out-device-detection-log.patch \
  file://patches/0003-of_path-add-of_find_path_by_node.patch \
  file://patches/0004-state-make-use-of-of_find_path_by_node-and-add-retur.patch \
  file://patches/0005-state-use-name-of-device-node-as-name-if-alias-is-no.patch \
  file://patches/0006-state-disable-load-command.patch \
  file://patches/0007-bootstate-add-framework-for-redundant-boot-scenarios.patch \
  file://patches/0008-Skov-add-base-platform-support.patch \
  file://patches/0009-blspec-Prepare-for-a-different-compatible-string.patch \
  file://patches/0010-Skov-create-some-information-at-run-time.patch \
  file://patches/0011-blspec-define-a-partition-name-in-order-to-use-Bareb.patch \
  file://patches/0012-Skov-Use-local-environment-variants-to-handle-the-re.patch \
  file://patches/0013-Skov-some-board-variants-needs-special-tweaks.patch \
  file://patches/0101-mtd-nand-bb-Fix-8k-page-size-nands.patch \
  file://patches/0102-mtd-Fix-mtdraw-for-Nand-4GiB.patch \
  file://patches/0103-mtd-Make-erase_info-structs-64bit-where-necessary.patch \
  file://patches/0104-mtd-Fix-mtd_op_read-for-devices-4GiB.patch \
  file://patches/0105-mtd-Fix-mtd_op_erase-for-devices-4GiB.patch \
  file://patches/0106-mtd-Fix-erasing-of-devices-4GiB.patch \
  file://patches/0107-mtd-mtdoob-device-change-name-to-have-the-chip-name-.patch \
  file://patches/0201-Release-2015.12.0-customers-skov-dol63x-20160209-1.patch \
  "

SRC_URI += "file://env"

COMPATIBLE_MACHINE = "dol-63x"

#do_deploy_append() {
#        install -d ${DEPLOY_DIR_TOOLS}
#        install -m 0755 scripts/imx/imx-usb-loader ${DEPLOY_DIR_TOOLS}/imx-usb-loader-${PV}
#        rm -f ${DEPLOY_DIR_TOOLS}/imx-usb-loader
#        ln -sf ./imx-usb-loader-${PV} ${DEPLOY_DIR_TOOLS}/imx-usb-loader
#}
