# umpf-base: v6.6-rc2
# umpf-name: 6.6/customers/skov/imx6
# umpf-version: 6.6/customers/skov/imx6/20230919-1
# umpf-topic: v6.6/topic/drm-sched-accounting
# umpf-hashinfo: f38bb0440877afd76984c287c6628b76480dfa6a
# umpf-topic-range: ce9ecca0238b140b88f43859b211c9fdfd8e5b70..5f86b6b46386299911809be26a3643ef193f147a
SRC_URI += "\
  file://patches/0001-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0002-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.6/topic/dw-hdmi
# umpf-hashinfo: 4ed51779c142dd4241ba4d8de41c68896a1c5f1f
# umpf-topic-range: 5f86b6b46386299911809be26a3643ef193f147a..e67394aca7c2ba82fb05db995d0733b4b8754017
SRC_URI += "\
  file://patches/0101-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0102-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.6/topic/etnaviv
# umpf-hashinfo: 6d7e642c6e7add59247d07235c68bf6a3552237b
# umpf-topic-range: e67394aca7c2ba82fb05db995d0733b4b8754017..fa7e90f1d40778fd8211d5dac4014f9eb17a4d71
SRC_URI += "\
  file://patches/0201-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0202-drm-etnaviv-disable-MLCG-and-pulse-eater-on-GPU-rese.patch \
  "
# umpf-topic: v6.6/topic/imx-drm
# umpf-hashinfo: 633f97e7d63c7ab10416a9c2edb183fd6d813105
# umpf-topic-range: fa7e90f1d40778fd8211d5dac4014f9eb17a4d71..d391c5731f2cfe867436e7f2a89aaddbb99d943c
SRC_URI += "\
  file://patches/0301-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0302-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0303-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0304-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  "
# umpf-topic: v6.6/topic/imx-gpcv2
# umpf-hashinfo: e6c37c8492298fb7fc3c59fbbbc0fc5d337860c6
# umpf-topic-range: d391c5731f2cfe867436e7f2a89aaddbb99d943c..1127a469e2e5d7a454b013475a76aaf7872e83a6
SRC_URI += "\
  file://patches/0401-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0402-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0403-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.6/topic/imx-sdma
# umpf-hashinfo: 9bd4d51d5acd810c56a56aa6f5e8896dafc980e5
# umpf-topic-range: 1127a469e2e5d7a454b013475a76aaf7872e83a6..5d18b26e00c3c2891706509bc95f5d916f139b16
SRC_URI += "\
  file://patches/0501-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0502-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-dt
# umpf-hashinfo: a6d1a64f2f8d43c9f883e4801e538cffaeea4fa9
# umpf-topic-range: 5d18b26e00c3c2891706509bc95f5d916f139b16..0982876d143c9f5ebdece0630b55086754d02ce9
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0602-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0603-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0604-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0605-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-hdmi
# umpf-hashinfo: 0d2946ad330b6a875f04477a3fed84369b2937f8
# umpf-topic-range: 0982876d143c9f5ebdece0630b55086754d02ce9..0b50448140edc97fe2711692e36362e6e884b14a
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.6/topic/imx8mp-skov-dts
# umpf-hashinfo: 611292a6020262389a921123745568f0c294ec22
# umpf-topic-range: 0b50448140edc97fe2711692e36362e6e884b14a..ab025e246ffa10a93a8fbe5a0b551ef8282f9354
SRC_URI += "\
  file://patches/0801-dt-bindings-arm-Add-compatible-for-SKOV-i.MX8MP-RevB.patch \
  file://patches/0802-arm64-dts-freescale-Add-SKOV-IMX8MP-CPU-revB-board.patch \
  "
# umpf-topic: v6.6/topic/drm-fsl-ldb
# umpf-hashinfo: 65650998c53b4520ec48f31fd30c65f31cd8c8e0
# umpf-topic-range: ab025e246ffa10a93a8fbe5a0b551ef8282f9354..e7ee458717ab541fb679ccb777300f5d1b3abe20
SRC_URI += "\
  file://patches/0901-drm-bridge-fsl-ldb-Fix-EPROBE_DEFER-error-on-bridge-.patch \
  "
# umpf-release: 6.6/customers/skov/imx6/20230919-1
# umpf-topic-range: e7ee458717ab541fb679ccb777300f5d1b3abe20..523b95f96ee13499373c872c727579c0af301bcb
SRC_URI += "\
  file://patches/1001-Release-6.6-customers-skov-imx6-20230919-1.patch \
  "
# umpf-end
