# umpf-base: v6.5-rc7
# umpf-name: 6.5/customers/skov/imx6
# umpf-version: 6.5/customers/skov/imx6/20230822-1
# umpf-topic: v6.5/topic/boards/imx8mp-evk
# umpf-hashinfo: 2eaf7e480113fb2e2edc695d6f2c992b9bcaa7c0
# umpf-topic-range: 706a741595047797872e669b3101429ab8d378ef..2e247b6df3f1b7e3aa65aae26dde4bff216013ab
SRC_URI += "\
  file://patches/0001-arm64-dts-imx8mp-evk-enable-HDMI.patch \
  file://patches/0002-arm64-dts-imx8mp-evk-add-dual-role-usb-port1-support.patch \
  "
# umpf-topic: v6.5/topic/clk-imx-pll14xx
# umpf-hashinfo: 4959a26df82ddb08659d3f49d1b425c68125b5eb
# umpf-topic-range: 2e247b6df3f1b7e3aa65aae26dde4bff216013ab..1aa77a63e30b69772d79afbff31e1aac02d8540f
SRC_URI += "\
  file://patches/0101-clk-imx-pll14xx-align-pdiv-with-reference-manual.patch \
  file://patches/0102-clk-imx-pll14xx-dynamically-configure-PLL-for-393216.patch \
  "
# umpf-topic: v6.5/topic/drm-sched-accounting
# umpf-hashinfo: cbc8f6be5998243b1015ba1a081d58567c68cdc1
# umpf-topic-range: 1aa77a63e30b69772d79afbff31e1aac02d8540f..e72aff5cfe23e574ec9a260d6e0a56c3c483e100
SRC_URI += "\
  file://patches/0201-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0202-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.5/topic/dw-hdmi
# umpf-hashinfo: 77ff9085c5a9274f8967e463088e451abd2cf460
# umpf-topic-range: e72aff5cfe23e574ec9a260d6e0a56c3c483e100..913fa13c2c8e118830edd978399b11eb9d1f829a
SRC_URI += "\
  file://patches/0301-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0302-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.5/topic/etnaviv
# umpf-hashinfo: dceffc2a9bb2f28e28dea0390238995fe421e382
# umpf-topic-range: 913fa13c2c8e118830edd978399b11eb9d1f829a..4de239bbbd786c1655ce4227c993d7b788b788cf
SRC_URI += "\
  file://patches/0401-drm-etnaviv-add-HWDB-entry-for-VIP8000-Nano-r8002.patch \
  file://patches/0402-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0403-drm-etnaviv-fix-dumping-of-active-MMU-context.patch \
  file://patches/0404-drm-etnaviv-move-down-etnaviv_gpu_recover_hang-in-fi.patch \
  file://patches/0405-drm-etnaviv-free-events-the-usual-way-in-recover-wor.patch \
  file://patches/0406-drm-etnaviv-move-runtime-PM-handling-to-events.patch \
  file://patches/0407-drm-etnaviv-make-clock-handling-symetric-between-run.patch \
  file://patches/0408-drm-etnaviv-avoid-runtime-PM-usage-in-etnaviv_gpu_bi.patch \
  file://patches/0409-drm-etnaviv-better-track-GPU-state.patch \
  file://patches/0410-drm-etnaviv-drop-GPU-initialized-property.patch \
  file://patches/0411-drm-etnaviv-expedited-MMU-fault-handling.patch \
  file://patches/0412-drm-etnaviv-add-HWDB-entry-for-GC520-r5341-c204.patch \
  file://patches/0413-drm-etnaviv-disable-MLCG-and-pulse-eater-on-GPU-rese.patch \
  file://patches/0414-drm-etnaviv-slow-down-FE-idle-polling.patch \
  "
# umpf-topic: v6.5/topic/imx-drm
# umpf-hashinfo: 4aa8a739d5eacf7e5887705b237f0b9e0a689517
# umpf-topic-range: 4de239bbbd786c1655ce4227c993d7b788b788cf..341a23c119b475446d1d7fc74e1c43e22c44d9ce
SRC_URI += "\
  file://patches/0501-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0502-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0503-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0504-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  file://patches/0505-drm-imx-ipuv3-plane-reuse-local-variable-height-in-a.patch \
  "
# umpf-topic: v6.5/topic/imx-gpcv2
# umpf-hashinfo: 88d224715d7426e769a3c16ead410d7dce8b227d
# umpf-topic-range: 341a23c119b475446d1d7fc74e1c43e22c44d9ce..277724c6419466b434f35f6ff53b8b38fb8fe934
SRC_URI += "\
  file://patches/0601-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0602-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0603-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-topic: v6.5/topic/imx-sdma
# umpf-hashinfo: 5c3ec96e6865af0ec56cbdcd53e7e01b8d787b03
# umpf-topic-range: 277724c6419466b434f35f6ff53b8b38fb8fe934..3d07ca81b9d457795dcb3ec8fe3274e447334202
SRC_URI += "\
  file://patches/0701-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0702-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.5/topic/imx8mp-dt
# umpf-hashinfo: 9a9449543242df0975d3d77fbcf41a001686a039
# umpf-topic-range: 3d07ca81b9d457795dcb3ec8fe3274e447334202..ecc24f128cf249923e2fe6bd175796f4e01ad00e
SRC_URI += "\
  file://patches/0801-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0802-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0803-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0804-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0805-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.5/topic/imx8mp-hdmi
# umpf-hashinfo: 75815ad38775f3fcbb4bcf2b4f0b158d50e5fc8e
# umpf-topic-range: ecc24f128cf249923e2fe6bd175796f4e01ad00e..c629447a362a442aa957b8d9ff8a743af94bb9e9
SRC_URI += "\
  file://patches/0901-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0902-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0903-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0904-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0905-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0906-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.5/topic/imx8mp-skov-dts
# umpf-hashinfo: f6d3ccd2b2e74797fe1c7211a8e8edfbb100037c
# umpf-topic-range: c629447a362a442aa957b8d9ff8a743af94bb9e9..1b4d022bf245390e1d6b002913f4e61a916874bb
SRC_URI += "\
  file://patches/1001-dt-bindings-arm-Add-compatible-for-SKOV-i.MX8MP-RevA.patch \
  file://patches/1002-arm64-dts-freescale-Add-SKOV-IMX8MP-CPU-revA-board.patch \
  file://patches/1003-HACK-arm64-dts-imx8mp-skov-remove-voltage-configurat.patch \
  "
# umpf-release: 6.5/customers/skov/imx6/20230822-1
# umpf-topic-range: 1b4d022bf245390e1d6b002913f4e61a916874bb..c6b2cbeb6d13fbd7093d69d9b15759f1efb25592
SRC_URI += "\
  file://patches/1101-Release-6.5-customers-skov-imx6-20230822-1.patch \
  "
# umpf-end
