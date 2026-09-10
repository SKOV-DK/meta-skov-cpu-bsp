# umpf-base: v6.18.52
# umpf-flags: upstreamstatus=insert
# umpf-name: 6.18/customers/skov/imx6
# umpf-version: 6.18/customers/skov/imx6/20260918-1
# umpf-topic: v6.18/topic/drm-sched-accounting
# umpf-hashinfo: 2e68f3236d87d009b72b187955d7444139dab7b4
# umpf-topic-range: 8f3741e6feb045da5b406df0a80b42a1adfb289b..a9134af3caaaacd9799d5b2e7ec89144ea50e71b
UMPF_SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.18/topic/dw-hdmi
# umpf-hashinfo: f1c7864296b205087773c0c7c035f65672428e09
# umpf-topic-range: a9134af3caaaacd9799d5b2e7ec89144ea50e71b..7a454b41c6e0206a4a8a65902b08153c5c86bb6d
UMPF_SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.18/topic/etnaviv
# umpf-hashinfo: cf1c23c7f83fe9040dd7153c08ecbb6d96d89947
# umpf-topic-range: 7a454b41c6e0206a4a8a65902b08153c5c86bb6d..d6b24d97ce5eb3e0a0cc133d5031b1a59d23e185
UMPF_SRC_URI += "\
  file://patches/0201-drm-etnaviv-force-flush-on-power-register-ops.patch \
  file://patches/0202-drm-etnaviv-reset-bit-0-when-disabling-pulse-eater-f.patch \
  file://patches/0203-drm-etnaviv-disable-pulse-eater-on-cores-with-3D-pip.patch \
  file://patches/0204-drm-etnaviv-dump-outstanding-read-write-debug-regist.patch \
  file://patches/0205-drm-etnaviv-remove-unnecessary-cache-flushes-on-pipe.patch \
  file://patches/0206-drm-etnaviv-use-fine-grained-MLCG-to-disable-clock-g.patch \
  file://patches/0207-drm-etnaviv-check-all-modules-for-idle-after-reset.patch \
  file://patches/0208-drm-etnaviv-check-MMUv2-status-after-reset.patch \
  "
# umpf-topic: v6.18/topic/imx-drm
# umpf-hashinfo: d48565f3620d9a73b586e831f24fa0a3c13c86c6
# umpf-topic-range: d6b24d97ce5eb3e0a0cc133d5031b1a59d23e185..4eda7ecbda7af2c07fc83c50fd90c0d44c78a656
UMPF_SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v6.18/topic/imx-gpc
# umpf-hashinfo: 9525a4e22fee843352224cdf62809d9ba819aee5
# umpf-topic-range: 4eda7ecbda7af2c07fc83c50fd90c0d44c78a656..deb1f936104fbbaa11e85fd099b65f969d7e8177
UMPF_SRC_URI += "\
  file://patches/0401-soc-imx-gpc-set-DMA-mask-for-PD-platform-devices.patch \
  "
# umpf-topic: v6.18/topic/imx-gpcv2
# umpf-hashinfo: 9d00adca6775e7a13bff5386ed3e5016c2480d0b
# umpf-topic-range: deb1f936104fbbaa11e85fd099b65f969d7e8177..d77291d066687a80187e5560da0b5b1a481aeafc
UMPF_SRC_URI += "\
  file://patches/0501-pmdomain-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0502-pmdomain-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.18/topic/drm-fsl-ldb
# umpf-hashinfo: 2b87a8d08f59907ed70103522a1333f4319c2a81
# umpf-topic-range: d77291d066687a80187e5560da0b5b1a481aeafc..3ff79d3b6afc1a2245efbe231506db02d3201e42
UMPF_SRC_URI += "\
  file://patches/0601-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.18/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 80eb5baacd83ebe38a6f39964d6a1890a031bd0c
# umpf-topic-range: 3ff79d3b6afc1a2245efbe231506db02d3201e42..d0c3119ad61de14b13156b6f44c2d9650135d1da
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
# umpf-hashinfo: 67229a08118cf6e830d30c0627e37b2ebbeb9d22
# umpf-topic-range: d0c3119ad61de14b13156b6f44c2d9650135d1da..98a9406308d4cc2f37ef00a755c0b1e01a91cafa
UMPF_SRC_URI += "\
  file://patches/0801-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.18/topic/rtc-pcf85063
# umpf-hashinfo: 11cee7e29b653f9fc103b245f5688ddc2f6ed1c4
# umpf-topic-range: 98a9406308d4cc2f37ef00a755c0b1e01a91cafa..d3209b05f0c81d59e2f6d78e5a6060f75681272f
UMPF_SRC_URI += "\
  file://patches/0901-rtc-pcf85063-ensure-12-hour-mode-is-disabled.patch \
  "
# umpf-topic: v6.18/topic/imx8mp-skov-dts
# umpf-hashinfo: 96097843d67097ebd2128440cb0b97c9c59200aa
# umpf-topic-range: d3209b05f0c81d59e2f6d78e5a6060f75681272f..85cc5f1ddc47e45bdfc5a37a3c7b9896b0be6290
UMPF_SRC_URI += "\
  file://patches/1001-arm64-dts-i.MX8MP-skov-reva-set-PMIC-restart-handler.patch \
  file://patches/1002-arm64-dts-freescale-imx8mp-skov-add-PSCR-node.patch \
  file://patches/1003-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/1004-arm64-dts-freescale-reduce-regulator-uv-less-critica.patch \
  file://patches/1005-fixup-arm64-dts-imx8mp-skov-add-revC-BD500-board.patch \
  file://patches/1006-dt-bindings-vendor-prefixes-Add-JuTouch-Technology-C.patch \
  file://patches/1007-drm-panel-simple-add-JuTouch-JT101TM023.patch \
  file://patches/1008-arm64-dts-imx8mp-skov-support-new-10-panel-board.patch \
  file://patches/1009-drm-panel-simple-add-JuTouch-JT070TM041.patch \
  file://patches/1010-arm64-dts-imx8mp-skov-support-new-7inch-panel-board.patch \
  file://patches/1011-arm64-dts-imx8mp-skov-disable-caam-job-ring-2.patch \
  file://patches/1012-dt-bindings-arm-fsl-add-Skov-Rev.C-HDMI-support.patch \
  file://patches/1013-arm64-dts-imx8mp-skov-add-Rev.C-HDMI-support.patch \
  "
# umpf-topic: v6.18/topic/reproducibility
# umpf-hashinfo: e36e32280a8f69e051e5cbc804ad1d9b2dd9395c
# umpf-topic-range: 85cc5f1ddc47e45bdfc5a37a3c7b9896b0be6290..b27e216990a19004a2791a68a4c2d54b584fa037
UMPF_SRC_URI += "\
  file://patches/1101-arm-gen-mach-types-don-t-include-absolute-filename.patch \
  "
# umpf-release: 6.18/customers/skov/imx6/20260918-1
# umpf-topic-range: b27e216990a19004a2791a68a4c2d54b584fa037..dae4af97a07284f0421a8403d23f268455c967f2
UMPF_SRC_URI += "\
  file://patches/1201-Release-6.18-customers-skov-imx6-20260918-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "6.18.52"
UMPF_VERSION = "20260918-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
