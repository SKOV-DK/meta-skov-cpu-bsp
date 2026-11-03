# umpf-base: v6.18.63
# umpf-flags: upstreamstatus=insert
# umpf-name: 6.18/customers/skov/imx6
# umpf-version: 6.18/customers/skov/imx6/20261116-1
# umpf-topic: v6.18/topic/drm-sched-accounting
# umpf-hashinfo: 2e68f3236d87d009b72b187955d7444139dab7b4
# umpf-topic-range: 1cdda838e8475edf89b73ff0cc952005dd0b1fa7..ae048e7450952dc27f62e4bb2ad4df49f9f51950
UMPF_SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.18/topic/dw-hdmi
# umpf-hashinfo: f1c7864296b205087773c0c7c035f65672428e09
# umpf-topic-range: ae048e7450952dc27f62e4bb2ad4df49f9f51950..9d8d803ec0ce39d47dc493dcb1abefec86d2d3bf
UMPF_SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.18/topic/etnaviv
# umpf-hashinfo: cf1c23c7f83fe9040dd7153c08ecbb6d96d89947
# umpf-topic-range: 9d8d803ec0ce39d47dc493dcb1abefec86d2d3bf..7409054e189d840d164c333fcccbe638c4a659c2
UMPF_SRC_URI += "\
  file://patches/0201-drm-etnaviv-reset-bit-0-when-disabling-pulse-eater-f.patch \
  file://patches/0202-drm-etnaviv-disable-pulse-eater-on-cores-with-3D-pip.patch \
  file://patches/0203-drm-etnaviv-dump-outstanding-read-write-debug-regist.patch \
  file://patches/0204-drm-etnaviv-remove-unnecessary-cache-flushes-on-pipe.patch \
  file://patches/0205-drm-etnaviv-use-fine-grained-MLCG-to-disable-clock-g.patch \
  "
# umpf-topic: v6.18/topic/imx-drm
# umpf-hashinfo: d48565f3620d9a73b586e831f24fa0a3c13c86c6
# umpf-topic-range: 7409054e189d840d164c333fcccbe638c4a659c2..192dd37dd94a541188628cad52881b84c3cfaf99
UMPF_SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v6.18/topic/imx-gpc
# umpf-hashinfo: 9525a4e22fee843352224cdf62809d9ba819aee5
# umpf-topic-range: 192dd37dd94a541188628cad52881b84c3cfaf99..e50361fc5711616e8128b5a69b12abe041ae7b0e
UMPF_SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.18/topic/imx-gpcv2
# umpf-hashinfo: 9d00adca6775e7a13bff5386ed3e5016c2480d0b
# umpf-topic-range: e50361fc5711616e8128b5a69b12abe041ae7b0e..66690234b29e16c1beb17587b26a4b23b21d50b6
UMPF_SRC_URI += "\
  file://patches/0501-pmdomain-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0502-pmdomain-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.18/topic/drm-fsl-ldb
# umpf-hashinfo: 2b87a8d08f59907ed70103522a1333f4319c2a81
# umpf-topic-range: 66690234b29e16c1beb17587b26a4b23b21d50b6..5b8f6c0247cedd337884f502fa2b2fd574fa6ff2
UMPF_SRC_URI += "\
  file://patches/0601-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.18/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 80eb5baacd83ebe38a6f39964d6a1890a031bd0c
# umpf-topic-range: 5b8f6c0247cedd337884f502fa2b2fd574fa6ff2..12fa2e1fba2516d2843127393d1d8df28923f57d
UMPF_SRC_URI += "\
  file://patches/0701-WIP-mmc-core-shut-down-storage-as-early-as-possible.patch \
  file://patches/0702-power-Extend-power_on_reason.h-for-upcoming-PSCRR-fr.patch \
  file://patches/0703-dt-bindings-power-reset-add-generic-PSCRR-binding-tr.patch \
  file://patches/0704-power-reset-Introduce-PSCR-Recording-Framework-for-N.patch \
  file://patches/0705-dt-bindings-power-reset-add-bindings-for-NVMEM-hardw.patch \
  file://patches/0706-nvmem-provide-consumer-access-to-cell-size-metrics.patch \
  file://patches/0707-power-reset-add-PSCR-NVMEM-Driver-for-Recording-Powe.patch \
  file://patches/0708-regulator-set-Power-State-Change-Reason-before-hw_pr.patch \
  file://patches/0709-thermal-core-Record-PSCR-before-hw_protection_shutdo.patch \
  "
# umpf-topic: v6.18/topic/gic-v3-its
# umpf-hashinfo: 77a6c5ec6eb4a8c26bb014b6185802190cc08afe
# umpf-topic-range: 12fa2e1fba2516d2843127393d1d8df28923f57d..16deae7d094c75e1ba6087c93259de5b96b5f196
UMPF_SRC_URI += "\
  file://patches/0801-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.18/topic/pca9450
# umpf-hashinfo: 4c33cef58965eb655a0ac8e243aa323581ec025f
# umpf-topic-range: 16deae7d094c75e1ba6087c93259de5b96b5f196..f192f5eb8b9f50d765b5bfae3bbc7b53e1f2ac66
UMPF_SRC_URI += "\
  file://patches/0901-regulator-dt-bindings-nxp-pca9450-document-input-sup.patch \
  file://patches/0902-regulator-pca9450-link-regulator-inputs-to-supply-gr.patch \
  "
# umpf-topic: v6.18/topic/rtc-pcf85063
# umpf-hashinfo: 11cee7e29b653f9fc103b245f5688ddc2f6ed1c4
# umpf-topic-range: f192f5eb8b9f50d765b5bfae3bbc7b53e1f2ac66..6e16dbf25e92ab90c4098c130aa67c880285e484
UMPF_SRC_URI += "\
  file://patches/1001-rtc-pcf85063-ensure-12-hour-mode-is-disabled.patch \
  "
# umpf-topic: v6.18/topic/imx8mp-skov-dts
# umpf-hashinfo: fb290cfbae139b1aee692aa6c280d6bf9172abb8
# umpf-topic-range: 6e16dbf25e92ab90c4098c130aa67c880285e484..40e986493d90515f142e7585a4de79144e0efc80
UMPF_SRC_URI += "\
  file://patches/1101-arm64-dts-i.MX8MP-skov-reva-set-PMIC-restart-handler.patch \
  file://patches/1102-arm64-dts-freescale-imx8mp-skov-add-PSCR-node.patch \
  file://patches/1103-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/1104-arm64-dts-freescale-reduce-regulator-uv-less-critica.patch \
  file://patches/1105-fixup-arm64-dts-imx8mp-skov-add-revC-BD500-board.patch \
  file://patches/1106-dt-bindings-vendor-prefixes-Add-JuTouch-Technology-C.patch \
  file://patches/1107-drm-panel-simple-add-JuTouch-JT101TM023.patch \
  file://patches/1108-arm64-dts-imx8mp-skov-support-new-10-panel-board.patch \
  file://patches/1109-drm-panel-simple-add-JuTouch-JT070TM041.patch \
  file://patches/1110-arm64-dts-imx8mp-skov-support-new-7inch-panel-board.patch \
  file://patches/1111-arm64-dts-imx8mp-skov-disable-caam-job-ring-2.patch \
  file://patches/1112-dt-bindings-arm-fsl-add-Skov-Rev.C-HDMI-support.patch \
  file://patches/1113-arm64-dts-imx8mp-skov-add-Rev.C-HDMI-support.patch \
  file://patches/1114-arm64-dts-imx8mp-skov-fix-input-supply-properties.patch \
  "
# umpf-topic: v6.18/topic/reproducibility
# umpf-hashinfo: e36e32280a8f69e051e5cbc804ad1d9b2dd9395c
# umpf-topic-range: 40e986493d90515f142e7585a4de79144e0efc80..8ebc4d52ab64d74fe86bfb41deaf8998d5f1aef2
UMPF_SRC_URI += "\
  file://patches/1201-arm-gen-mach-types-don-t-include-absolute-filename.patch \
  "
# umpf-release: 6.18/customers/skov/imx6/20261116-1
# umpf-topic-range: 8ebc4d52ab64d74fe86bfb41deaf8998d5f1aef2..e780e3f237fee07c805d0a4908e3e57ec3840e7a
UMPF_SRC_URI += "\
  file://patches/1301-Release-6.18-customers-skov-imx6-20261116-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "6.18.63"
UMPF_VERSION = "20261116-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
