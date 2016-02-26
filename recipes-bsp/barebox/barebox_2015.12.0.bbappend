FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://defconfig"

SRC_URI += "\
  file://patches/0001-nfs-forward-filesystem-options-to-the-kernel-command.patch \
  file://patches/0002-Skov-add-base-platform-support.patch \
  file://patches/0003-blspec-Prepare-for-a-different-compatible-string.patch \
  file://patches/0004-Skov-create-some-information-at-run-time.patch \
  file://patches/0005-blspec-define-a-partition-name-in-order-to-use-Bareb.patch \
  file://patches/0006-Skov-Use-local-environment-variants-to-handle-the-re.patch \
  file://patches/0007-Skov-some-board-variants-needs-special-tweaks.patch \
  file://patches/0008-dol63x-set-defaults-for-bootsate-parameters.patch \
  file://patches/0009-Skov-add-support-for-board-variants-16-and-17.patch \
  file://patches/0101-of_path-of_find_path-factor-out-device-detection-log.patch \
  file://patches/0102-of_path-add-of_find_path_by_node.patch \
  file://patches/0103-state-make-use-of-of_find_path_by_node-and-add-retur.patch \
  file://patches/0104-state-use-name-of-device-node-as-name-if-alias-is-no.patch \
  file://patches/0105-state-disable-load-command.patch \
  file://patches/0201-bootstate-add-framework-for-redundant-boot-scenarios.patch \
  file://patches/0301-mtd-nand-bb-Fix-8k-page-size-nands.patch \
  file://patches/0302-mtd-Fix-mtdraw-for-Nand-4GiB.patch \
  file://patches/0303-mtd-Make-erase_info-structs-64bit-where-necessary.patch \
  file://patches/0304-mtd-Fix-mtd_op_read-for-devices-4GiB.patch \
  file://patches/0305-mtd-Fix-mtd_op_erase-for-devices-4GiB.patch \
  file://patches/0306-mtd-Fix-erasing-of-devices-4GiB.patch \
  file://patches/0307-mtd-mtdoob-device-change-name-to-have-the-chip-name-.patch \
  file://patches/0401-Release-2015.12.0-customers-skov-dol63x-20160226-2.patch \
  "

SRC_URI += "file://env"

COMPATIBLE_MACHINE = "dol-63x"

#do_deploy_append() {
#        install -d ${DEPLOY_DIR_TOOLS}
#        install -m 0755 scripts/imx/imx-usb-loader ${DEPLOY_DIR_TOOLS}/imx-usb-loader-${PV}
#        rm -f ${DEPLOY_DIR_TOOLS}/imx-usb-loader
#        ln -sf ./imx-usb-loader-${PV} ${DEPLOY_DIR_TOOLS}/imx-usb-loader
#}
