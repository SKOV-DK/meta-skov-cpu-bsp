# umpf-base: v6.6-rc4
# umpf-name: 6.6/customers/skov/imx6
# umpf-version: 6.6/customers/skov/imx6/20231005-1
# umpf-topic: v6.6/topic/drm-sched-accounting
# umpf-hashinfo: f38bb0440877afd76984c287c6628b76480dfa6a
# umpf-topic-range: 8a749fd1a8720d4619c91c8b6e7528c0a355c0aa..33459b59e18beb22ac8ed11d08b55bae37cd9c64
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.6/topic/dw-hdmi
# umpf-hashinfo: 4ed51779c142dd4241ba4d8de41c68896a1c5f1f
# umpf-topic-range: 33459b59e18beb22ac8ed11d08b55bae37cd9c64..e0555ec9608bb54e6bfffdb7b593f120cfecf48c
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.6/topic/etnaviv
# umpf-hashinfo: 6d7e642c6e7add59247d07235c68bf6a3552237b
# umpf-topic-range: e0555ec9608bb54e6bfffdb7b593f120cfecf48c..6b0c2f67d590800a3332b53435e9914665574dec
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-disable-MLCG-and-pulse-eater-on-GPU-rese.patch \
  "
# umpf-topic: v6.6/topic/imx-drm
# umpf-hashinfo: 633f97e7d63c7ab10416a9c2edb183fd6d813105
# umpf-topic-range: 6b0c2f67d590800a3332b53435e9914665574dec..da48451a68176ada61df621311e3d9d867492535
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.6/topic/imx-gpcv2
# umpf-hashinfo: e6c37c8492298fb7fc3c59fbbbc0fc5d337860c6
# umpf-topic-range: da48451a68176ada61df621311e3d9d867492535..c093ee086c5624913b7182820072733b82275a29
SRC_URI += "\
  file://patches/0401-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0402-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0403-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.6/topic/imx-sdma
# umpf-hashinfo: 9bd4d51d5acd810c56a56aa6f5e8896dafc980e5
# umpf-topic-range: c093ee086c5624913b7182820072733b82275a29..18e2e6df6200f62b6ccc25d2a2683ab24c61612e
SRC_URI += "\
  file://patches/0501-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0502-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-dt
# umpf-hashinfo: 7ab95dddf7159b180cb4d3b2171b7e33e66766e9
# umpf-topic-range: 18e2e6df6200f62b6ccc25d2a2683ab24c61612e..42cbf8919e78319912df1e463c4b278b9f41a242
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0602-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0603-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0604-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0605-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-hdmi
# umpf-hashinfo: ae3e70ec73fb247fff2955c0eedf9e16ca3b5322
# umpf-topic-range: 42cbf8919e78319912df1e463c4b278b9f41a242..039db5d19b5a706683bffc6c3de083adf95ad41b
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-skov-dts
# umpf-hashinfo: 8b4bc32162977ac0ad87899ebfc61eaf35eebcb2
# umpf-topic-range: 039db5d19b5a706683bffc6c3de083adf95ad41b..ff79b7ea630167174c306d238962415f1081940f
SRC_URI += "\
  file://patches/0801-dt-bindings-arm-Add-compatible-for-SKOV-i.MX8MP-RevB.patch \
  file://patches/0802-arm64-dts-freescale-Add-SKOV-IMX8MP-CPU-revB-board.patch \
  file://patches/0803-ARM-dts-imx6-skov-add-aliases-for-all-ethernet-nodes.patch \
  file://patches/0804-WIP-arm64-dts-imx8mp-skov-reva-add-under-voltage-sup.patch \
  "
# umpf-topic: v6.6/topic/drm-fsl-ldb
# umpf-hashinfo: 65650998c53b4520ec48f31fd30c65f31cd8c8e0
# umpf-topic-range: ff79b7ea630167174c306d238962415f1081940f..6f4b24a092d19a0f807538d2bd8158b9810b4fc1
SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-topic: v6.6/topic/regulator-mmc-under-voltage
# umpf-hashinfo: 57ae8c03515da4dba4d751d4dbaad0455e05f9c1
# umpf-topic-range: 6f4b24a092d19a0f807538d2bd8158b9810b4fc1..0b10c3e4e40881659b0ccd015e7ee799ee6f5ca9
SRC_URI += "\
  file://patches/1001-WIP-mmc-implement-emergency-shutdown.patch \
  file://patches/1002-regulator-fixed-implement-under-voltage-irq.patch \
  file://patches/1003-regulator-fixed-forward-under-voltage-events-upstrea.patch \
  file://patches/1004-WIP-regulator-pca9450-add-vin-supply-DT-support.patch \
  file://patches/1005-WIP-regulator-pca9450-add-support-for-under-voltage-.patch \
  "
# umpf-release: 6.6/customers/skov/imx6/20231005-1
# umpf-topic-range: 0b10c3e4e40881659b0ccd015e7ee799ee6f5ca9..ff5a5da9c2c805b11695a6a19e810a788b740122
SRC_URI += "\
  file://patches/1101-Release-6.6-customers-skov-imx6-20231005-1.patch \
  "
# umpf-end
