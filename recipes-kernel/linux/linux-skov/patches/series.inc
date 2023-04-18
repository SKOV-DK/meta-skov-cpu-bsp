# umpf-base: v6.2.11
# umpf-name: 6.2/customers/skov/imx6
# umpf-version: 6.2/customers/skov/imx6/20230417-1
# umpf-topic: v6.2/topic/imx-drm
# umpf-hashinfo: 51d2cae50fd85f72e5f4bac2e35e8eb008ea04d5
# umpf-topic-range: cdc7aff9ed012801e62eedd99e4a5573eccac4db..360594c54e054ae605644ff480eaaa9a7e81ebc3
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0003-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0004-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  file://patches/0005-drm-imx-ipuv3-plane-reuse-local-variable-height-in-a.patch \
  "
# umpf-topic: v6.2/topic/etnaviv
# umpf-hashinfo: c97307ca1c5f018503e7ac8a278b021a2ebcf28b
# umpf-topic-range: 360594c54e054ae605644ff480eaaa9a7e81ebc3..c4e84a347345c45992ee4545db6397de2ba1f331
SRC_URI += "\
  file://patches/0101-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0102-drm-etnaviv-update-hardware-headers-from-rnndb.patch \
  file://patches/0103-drm-etnaviv-print-MMU-exception-cause.patch \
  file://patches/0104-drm-etnaviv-split-fence-lock.patch \
  file://patches/0105-drm-etnaviv-convert-user-fence-tracking-to-XArray.patch \
  file://patches/0106-drm-etnaviv-Add-nn_core_count-to-chip-feature-struct.patch \
  file://patches/0107-drm-etnaviv-Warn-when-probing-on-NPUs.patch \
  file://patches/0108-drm-etnaviv-add-HWDB-entry-for-VIPNano-QI.7120.0055.patch \
  file://patches/0109-drm-etnaviv-allocate-unique-ID-per-drm_file.patch \
  file://patches/0110-drm-etnaviv-show-number-of-NN-cores-in-GPU-debugfs-i.patch \
  file://patches/0111-drm-etnaviv-add-HWDB-entry-for-VIP8000-Nano-r8002.patch \
  file://patches/0112-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  "
# umpf-topic: v6.2/topic/drm-sched-accounting
# umpf-hashinfo: 7964c2ec9d302e9921d46de579bc18345d1ca4b8
# umpf-topic-range: c4e84a347345c45992ee4545db6397de2ba1f331..40681fdb47ecf6a97d6bb9345caf6d11f09979d9
SRC_URI += "\
  file://patches/0201-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0202-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.2/topic/imx-sdma
# umpf-hashinfo: 378983f284ddd3e834bda2e061ecbf7f18e9ec5c
# umpf-topic-range: 40681fdb47ecf6a97d6bb9345caf6d11f09979d9..fa5e30dbbbe0d942ce38f46b0659637b225e6dde
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.2/topic/net-ksz8-switch-stable-v6.2.10
# umpf-hashinfo: 8a155ee07158d46ca775b8c536a8cf1e26879e75
# umpf-topic-range: fa5e30dbbbe0d942ce38f46b0659637b225e6dde..e8afe9f653dac071452e02a148311c6bff065359
SRC_URI += "\
  file://patches/0401-net-dsa-microchip-KSZ88x3-fix-loopback-support.patch \
  file://patches/0402-net-dsa-microchip-ksz8-Make-flow-control-speed-and-d.patch \
  file://patches/0403-net-dsa-microchip-ksz8-Separate-static-MAC-table-ope.patch \
  file://patches/0404-net-dsa-microchip-ksz8-Implement-add-del_fdb-and-use.patch \
  file://patches/0405-net-dsa-microchip-ksz8-Make-ksz8_r_sta_mac_table-sta.patch \
  file://patches/0406-net-dsa-microchip-ksz8_r_sta_mac_table-Avoid-using-e.patch \
  file://patches/0407-net-dsa-microchip-ksz8_r_sta_mac_table-Utilize-error.patch \
  file://patches/0408-net-dsa-microchip-Make-ksz8_w_sta_mac_table-static.patch \
  file://patches/0409-net-dsa-microchip-Utilize-error-values-in-ksz8_w_sta.patch \
  file://patches/0410-net-dsa-microchip-Remove-unused-FDB-timestamp-suppor.patch \
  file://patches/0411-net-dsa-microchip-Make-ksz8_r_dyn_mac_table-static.patch \
  file://patches/0412-net-dsa-microchip-ksz8-Refactor-ksz8_fdb_dump.patch \
  file://patches/0413-net-dsa-microchip-ksz8-Refactor-ksz8_r_dyn_mac_table.patch \
  file://patches/0414-net-dsa-microchip-ksz8-Unify-variable-naming-in-ksz8.patch \
  file://patches/0415-net-dsa-microchip-ksz8_r_dyn_mac_table-ksz-do-not-re.patch \
  file://patches/0416-net-dsa-microchip-ksz8_r_dyn_mac_table-return-read-w.patch \
  file://patches/0417-net-dsa-microchip-ksz8_r_dyn_mac_table-use-entries-v.patch \
  file://patches/0418-net-dsa-microchip-remove-ksz_port-on-variable.patch \
  "
# umpf-topic: v6.2/topic/imx8mp-dt
# umpf-hashinfo: 33e3c0cc1983320e387f49e21e099dce15585afa
# umpf-topic-range: e8afe9f653dac071452e02a148311c6bff065359..069ec89881b7e4529b11ed86096932990435826b
SRC_URI += "\
  file://patches/0501-dt-bindings-usb-dwc3-imx8mp-add-power-domain-propert.patch \
  file://patches/0502-arm64-dts-imx8mp-don-t-initialize-audio-clocks-from-.patch \
  file://patches/0503-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0504-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0505-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0506-arm64-dts-imx8mp-add-MIPI-DSI-display-output.patch \
  file://patches/0507-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0508-arm64-dts-imx8mp-move-PCIe-controller-clock-config-t.patch \
  file://patches/0509-dt-bindings-clock-imx8mp-Add-audiomix-block-control.patch \
  file://patches/0510-arm64-dts-imx8mp-Add-SAI-SDMA-AudioMIX.patch \
  file://patches/0511-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.2/topic/boards/imx8mp-evk
# umpf-hashinfo: e0a45311e9dd97c0516519199810ee3b0a1520db
# umpf-topic-range: 069ec89881b7e4529b11ed86096932990435826b..8f7ea702c84295a22faf8cb39700e1633b6121d5
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-evk-enable-HDMI.patch \
  file://patches/0602-arm64-dts-imx8mp-Add-analog-audio-output-on-i.MX8MP-.patch \
  file://patches/0603-arm64-dts-imx8mp-evk-add-dual-role-usb-port1-support.patch \
  "
# umpf-topic: v6.2/topic/imx8mp-hdmi
# umpf-hashinfo: fa5e832dbc07f20842a5e8ebe4a16f96e49377ac
# umpf-topic-range: 8f7ea702c84295a22faf8cb39700e1633b6121d5..bdf59e14b5b54baa3bc70e5334d2ed8b6fe1c8da
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.2/topic/imx8mp-lcdif
# umpf-hashinfo: 02b6e39f9f4a497cee3421da2a771e2a9600231d
# umpf-topic-range: bdf59e14b5b54baa3bc70e5334d2ed8b6fe1c8da..d3d9d99dbb93955e7b8eaaf2b35c671891ec4b0e
SRC_URI += "\
  file://patches/0801-drm-lcdif-add-underflow-panic-support.patch \
  "
# umpf-topic: v6.2/topic/dw-hdmi
# umpf-hashinfo: 9caba2ec973939465c44495d17c2bcb6cad68083
# umpf-topic-range: d3d9d99dbb93955e7b8eaaf2b35c671891ec4b0e..623ce0a2c51bffc9a9f233f7fbef35fb84915200
SRC_URI += "\
  file://patches/0901-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0902-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.2/topic/imx-gpcv2
# umpf-hashinfo: 9f20763566b1bcf705a1bf67991b7ffb91d02006
# umpf-topic-range: 623ce0a2c51bffc9a9f233f7fbef35fb84915200..587945508fa67fc786794e65115b1b7033d22b1e
SRC_URI += "\
  file://patches/1001-soc-imx-imx8mp-blk-ctrl-set-the-LCDIF-hurry-priority.patch \
  file://patches/1002-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/1003-dt-bindings-soc-imx8mp-hsio-blk-ctrl-add-clock-cells.patch \
  file://patches/1004-soc-imx-add-Kconfig-symbols-for-blk-ctrl-drivers.patch \
  file://patches/1005-soc-imx-imx8mp-blk-ctrl-add-instance-specific-probe-.patch \
  file://patches/1006-soc-imx-imx8mp-blk-ctrl-expose-high-performance-PLL-.patch \
  file://patches/1007-arm64-dts-imx8mp-add-clock-cells-to-hsio-blk-ctrl.patch \
  file://patches/1008-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/1009-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  file://patches/1010-soc-imx-imx8m-blk-ctrl-set-LCDIF-panic-read-hurry-le.patch \
  "
# umpf-release: 6.2/customers/skov/imx6/20230417-1
# umpf-topic-range: 587945508fa67fc786794e65115b1b7033d22b1e..45d1e41d1aa699f3547c08d56495012ba938df49
SRC_URI += "\
  file://patches/1101-Release-6.2-customers-skov-imx6-20230417-1.patch \
  "
# umpf-end
