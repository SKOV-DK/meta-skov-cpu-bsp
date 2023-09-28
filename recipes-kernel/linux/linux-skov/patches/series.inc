# umpf-base: v6.6-rc3
# umpf-name: 6.6/customers/skov/imx6
# umpf-version: 6.6/customers/skov/imx6/20230928-1
# umpf-topic: v6.6/topic/drm-sched-accounting
# umpf-hashinfo: f38bb0440877afd76984c287c6628b76480dfa6a
# umpf-topic-range: 6465e260f48790807eef06b583b38ca9789b6072..37b9f0675faf5885283b7b2da2f062fea5f9036c
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.6/topic/dw-hdmi
# umpf-hashinfo: 4ed51779c142dd4241ba4d8de41c68896a1c5f1f
# umpf-topic-range: 37b9f0675faf5885283b7b2da2f062fea5f9036c..0b7071b67daf1e725fa4396c040aa3dfb454c97d
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.6/topic/etnaviv
# umpf-hashinfo: 6d7e642c6e7add59247d07235c68bf6a3552237b
# umpf-topic-range: 0b7071b67daf1e725fa4396c040aa3dfb454c97d..fab5aabbf071f4616fcf4824a41bf8cc8d8ce7cc
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-disable-MLCG-and-pulse-eater-on-GPU-rese.patch \
  "
# umpf-topic: v6.6/topic/imx-drm
# umpf-hashinfo: 633f97e7d63c7ab10416a9c2edb183fd6d813105
# umpf-topic-range: fab5aabbf071f4616fcf4824a41bf8cc8d8ce7cc..3d0887d1b81dad6b79cf479a95da99c431d39fdc
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.6/topic/imx-gpcv2
# umpf-hashinfo: e6c37c8492298fb7fc3c59fbbbc0fc5d337860c6
# umpf-topic-range: 3d0887d1b81dad6b79cf479a95da99c431d39fdc..55de2b69949297385fa28732dab586a88a634ef9
SRC_URI += "\
  file://patches/0401-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0402-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0403-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.6/topic/imx-sdma
# umpf-hashinfo: 9bd4d51d5acd810c56a56aa6f5e8896dafc980e5
# umpf-topic-range: 55de2b69949297385fa28732dab586a88a634ef9..c2db09d655a3666f3da72c60763bb6be1b054c29
SRC_URI += "\
  file://patches/0501-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0502-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-dt
# umpf-hashinfo: 7ab95dddf7159b180cb4d3b2171b7e33e66766e9
# umpf-topic-range: c2db09d655a3666f3da72c60763bb6be1b054c29..c3b896bedef49aa63a62d1a28e1da60fc73c0ab7
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0602-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0603-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0604-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0605-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-hdmi
# umpf-hashinfo: ae3e70ec73fb247fff2955c0eedf9e16ca3b5322
# umpf-topic-range: c3b896bedef49aa63a62d1a28e1da60fc73c0ab7..a0e85580b9c998f13f5c2107cddc8a18d32b491e
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-skov-dts
# umpf-hashinfo: 690e2457d0698b1aec839d66fe588a42d112d575
# umpf-topic-range: a0e85580b9c998f13f5c2107cddc8a18d32b491e..8a1284d4851624135ddd83e6abb3c8fda33cad1c
SRC_URI += "\
  file://patches/0801-dt-bindings-arm-Add-compatible-for-SKOV-i.MX8MP-RevB.patch \
  file://patches/0802-arm64-dts-freescale-Add-SKOV-IMX8MP-CPU-revB-board.patch \
  file://patches/0803-ARM-dts-imx6-skov-add-aliases-for-all-ethernet-nodes.patch \
  file://patches/0804-WIP-ARM-dts-imx6-skov-fix-clock-configuration-for-rt.patch \
  "
# umpf-topic: v6.6/topic/drm-fsl-ldb
# umpf-hashinfo: 65650998c53b4520ec48f31fd30c65f31cd8c8e0
# umpf-topic-range: 8a1284d4851624135ddd83e6abb3c8fda33cad1c..4a5557f34a3c4b658d8f224273d7a59f0d5e79e5
SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-release: 6.6/customers/skov/imx6/20230928-1
# umpf-topic-range: 4a5557f34a3c4b658d8f224273d7a59f0d5e79e5..416395a3a180eb93dff14e500f5891477e59f553
SRC_URI += "\
  file://patches/1001-Release-6.6-customers-skov-imx6-20230928-1.patch \
  "
# umpf-end
