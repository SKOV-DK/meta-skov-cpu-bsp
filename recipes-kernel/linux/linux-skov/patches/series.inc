# umpf-base: v6.6
# umpf-name: 6.6/customers/skov/imx6
# umpf-version: 6.6/customers/skov/imx6/20231115-2
# umpf-topic: v6.6/topic/drm-sched-accounting
# umpf-hashinfo: f38bb0440877afd76984c287c6628b76480dfa6a
# umpf-topic-range: ffc253263a1375a65fa6c9f62a893e9767fbebfa..5d101b01f708613a97550649dd83bab2aa261965
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.6/topic/dw-hdmi
# umpf-hashinfo: 4ed51779c142dd4241ba4d8de41c68896a1c5f1f
# umpf-topic-range: 5d101b01f708613a97550649dd83bab2aa261965..a7fe2e35395d23a3b777790e2d3b00b88b462a30
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.6/topic/etnaviv
# umpf-hashinfo: 6d7e642c6e7add59247d07235c68bf6a3552237b
# umpf-topic-range: a7fe2e35395d23a3b777790e2d3b00b88b462a30..6c0e124bbece06294f4c91ee29e8734f6d22fea4
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-disable-MLCG-and-pulse-eater-on-GPU-rese.patch \
  "
# umpf-topic: v6.6/topic/imx-drm
# umpf-hashinfo: 633f97e7d63c7ab10416a9c2edb183fd6d813105
# umpf-topic-range: 6c0e124bbece06294f4c91ee29e8734f6d22fea4..84a25ea5a67110b7026e5201032b7b1083c73709
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.6/topic/imx-gpcv2
# umpf-hashinfo: e6c37c8492298fb7fc3c59fbbbc0fc5d337860c6
# umpf-topic-range: 84a25ea5a67110b7026e5201032b7b1083c73709..3755e587f074b9ea6087e02f80bbc02e3da04f64
SRC_URI += "\
  file://patches/0401-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0402-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0403-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.6/topic/imx-sdma
# umpf-hashinfo: 9bd4d51d5acd810c56a56aa6f5e8896dafc980e5
# umpf-topic-range: 3755e587f074b9ea6087e02f80bbc02e3da04f64..8e6f36c86bcdf051911a867c62c0b4ac0e7abff7
SRC_URI += "\
  file://patches/0501-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0502-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-dt
# umpf-hashinfo: 7ab95dddf7159b180cb4d3b2171b7e33e66766e9
# umpf-topic-range: 8e6f36c86bcdf051911a867c62c0b4ac0e7abff7..7bdf773c7807a56c0139c1f0691067f57805c1b1
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0602-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0603-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0604-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0605-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-hdmi
# umpf-hashinfo: ae3e70ec73fb247fff2955c0eedf9e16ca3b5322
# umpf-topic-range: 7bdf773c7807a56c0139c1f0691067f57805c1b1..1a4b3634e1d58c7e5fcd5bc0a1bbacf881f8376b
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-skov-dts
# umpf-hashinfo: 3e19baf8f76a61a4379b770fc5a4f416a5e73ec6
# umpf-topic-range: 1a4b3634e1d58c7e5fcd5bc0a1bbacf881f8376b..188e47fbd0dc8536fb3e4e1a1ad5c3bcc8ffdea6
SRC_URI += "\
  file://patches/0801-dt-bindings-arm-Add-compatible-for-SKOV-i.MX8MP-RevB.patch \
  file://patches/0802-arm64-dts-freescale-Add-SKOV-IMX8MP-CPU-revB-board.patch \
  file://patches/0803-arm64-dts-freescale-imx8mp-skov-nodes-which-are-curr.patch \
  file://patches/0804-arm64-dts-freescale-imx8mp-skov-add-different-commen.patch \
  file://patches/0805-arm64-dts-freescale-imx8mp-skov-add-pstore-support.patch \
  file://patches/0806-arm64-dts-freescale-fixes.patch \
  "
# umpf-topic: v6.6/topic/drm-fsl-ldb
# umpf-hashinfo: 65650998c53b4520ec48f31fd30c65f31cd8c8e0
# umpf-topic-range: 188e47fbd0dc8536fb3e4e1a1ad5c3bcc8ffdea6..09dad42d636caee197f5c4c8c1f12a946c0ecf92
SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.6/topic/regulator-mmc-under-voltage
# umpf-hashinfo: c6a610fb1dbcaf075810e7c34c82efa910195b53
# umpf-topic-range: 09dad42d636caee197f5c4c8c1f12a946c0ecf92..e860c0f0d91e1fd0972f593bd32ce9f8deb146d9
SRC_URI += "\
  file://patches/1001-regulator-dt-bindings-Add-system-critical-regulator-.patch \
  file://patches/1002-regulator-Introduce-handling-for-system-critical-und.patch \
  file://patches/1003-regulator-dt-bindings-fixed-regulator-Add-under-volt.patch \
  file://patches/1004-regulator-dt-bindings-Allow-system-critical-marking-.patch \
  file://patches/1005-regulator-fixed-add-support-for-under-voltage-IRQ.patch \
  file://patches/1006-regulator-dt-bindings-Add-regulator-uv-less-critical.patch \
  file://patches/1007-regulator-Implement-uv_survival_time-for-handling-un.patch \
  file://patches/1008-WIP-mmc-core-shut-down-storage-as-early-as-possible.patch \
  file://patches/1009-WIP-kernel-reboot-introduce-a-reset-reason-storage.patch \
  file://patches/1010-WIP-regulator-store-reset-reason-on-under-voltage.patch \
  file://patches/1011-WIP-thermal-core-set-reset-reason-on-over-temperatur.patch \
  file://patches/1012-WIP-rtc-pcf85063-add-reboot-handler-to-store-reboot-.patch \
  "
# umpf-topic: v6.6/topic/gic-v3-its
# umpf-hashinfo: 4a30eb3a5a229b8426400cb138b0f442bda0bda8
# umpf-topic-range: e860c0f0d91e1fd0972f593bd32ce9f8deb146d9..fa9e8357af4332a60c604ba551fb902ca57bb076
SRC_URI += "\
  file://patches/1101-irqchip-gic-v3-its-Degrade-warning-when-no-ITS-avail.patch \
  "
# umpf-topic: v6.6/topic/pca9450
# umpf-hashinfo: e9532a1a7d3550efaa04a15d19e9b2ab37275e68
# umpf-topic-range: fa9e8357af4332a60c604ba551fb902ca57bb076..04c72ee1215c9633534a2afdce8cd30ee6352cf6
SRC_URI += "\
  file://patches/1201-WIP-regulator-pca9450-add-support-for-software-trigg.patch \
  file://patches/1202-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  "
# umpf-topic: v6.6/topic/imx6q-dt
# umpf-hashinfo: 2edb44276ad1ccd527d3fa863e974ea7e028cfaa
# umpf-topic-range: 04c72ee1215c9633534a2afdce8cd30ee6352cf6..398289b5f8628265816f397523dba5cf4db98dbb
SRC_URI += "\
  file://patches/1301-ARM-dts-imx6q-skov-fix-ethernet-clock-regression.patch \
  file://patches/1302-ARM-dts-imx6-skov-add-aliases-for-all-ethernet-nodes.patch \
  "
# umpf-release: 6.6/customers/skov/imx6/20231115-2
# umpf-topic-range: 398289b5f8628265816f397523dba5cf4db98dbb..4fdc8a9dba3b5a67765660f504fdebe22d875f26
SRC_URI += "\
  file://patches/1401-Release-6.6-customers-skov-imx6-20231115-2.patch \
  "
# umpf-end
