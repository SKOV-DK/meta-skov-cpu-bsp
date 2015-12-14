FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://defconfig"

SRC_URI += "\
  file://patches/0001-of_path-of_find_path-factor-out-device-detection-log.patch \
  file://patches/0002-of_path-add-of_find_path_by_node.patch \
  file://patches/0003-state-make-use-of-of_find_path_by_node-and-add-retur.patch \
  file://patches/0004-state-use-name-of-device-node-as-name-if-alias-is-no.patch \
  file://patches/0005-state-disable-load-command.patch \
  file://patches/0006-bootstate-add-framework-for-redundant-boot-scenarios.patch \
  file://patches/0007-pbl-console-something-to-fix.patch \
  file://patches/0008-Skov-add-base-platform-support.patch \
  file://patches/0009-blspec-Prepare-for-a-different-compatible-string.patch \
  file://patches/0010-Skov-create-some-information-at-run-time.patch \
  file://patches/0011-blspec-define-a-partition-name-in-order-to-use-Bareb.patch \
  file://patches/0012-Skov-Use-local-environment-variants-to-handle-the-re.patch \
  file://patches/0013-Skov-some-board-variants-needs-special-tweaks.patch \
  file://patches/0014-Release-2015.12.0-customers-skov-dol63x-20151209-2.patch \
  "

SRC_URI += "file://env"

COMPATIBLE_MACHINE = "dol-63x"

#do_deploy_append() {
#        install -d ${DEPLOY_DIR_TOOLS}
#        install -m 0755 scripts/imx/imx-usb-loader ${DEPLOY_DIR_TOOLS}/imx-usb-loader-${PV}
#        rm -f ${DEPLOY_DIR_TOOLS}/imx-usb-loader
#        ln -sf ./imx-usb-loader-${PV} ${DEPLOY_DIR_TOOLS}/imx-usb-loader
#}
