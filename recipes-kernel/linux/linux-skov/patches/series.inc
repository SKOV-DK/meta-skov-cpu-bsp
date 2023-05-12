# umpf-base: v6.3.2
# umpf-name: 6.3/customers/skov/imx6
# umpf-version: 6.3/customers/skov/imx6/20230512-1
# umpf-topic: v6.3/topic/imx-drm
# umpf-hashinfo: b7468006485a19c45162b3aecadc5d0c0fc2ddae
# umpf-topic-range: 5729a900a07b7f166b94577c543d44c4c42e5ec3..1cd0eedaeacf31fdd7c138ff241a8aca4b34b08c
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0003-gpu-ipu-v3-pre-move-state-into-struct.patch \
  file://patches/0004-gpu-ipu-v3-pre-add-dynamic-buffer-layout-reconfigura.patch \
  file://patches/0005-drm-imx-ipuv3-plane-reuse-local-variable-height-in-a.patch \
  "
# umpf-topic: v6.3/topic/etnaviv
# umpf-hashinfo: 0f81b6d0f8198b727a96bea1bc3ac6daccc6a1dd
# umpf-topic-range: 1cd0eedaeacf31fdd7c138ff241a8aca4b34b08c..0158d96dde34a78ffa48a8fcdd1b5a95e2111561
SRC_URI += "\
  file://patches/0101-drm-etnaviv-add-HWDB-entry-for-VIP8000-Nano-r8002.patch \
  file://patches/0102-drm-etnaviv-don-t-block-scheduler-when-GPU-is-still-.patch \
  file://patches/0103-drm-etnaviv-fix-dumping-of-active-MMU-context.patch \
  "
# umpf-topic: v6.3/topic/drm-sched-accounting
# umpf-hashinfo: b9bd0b20015bdd3b584de36f24cb079ea3aea8fb
# umpf-topic-range: 0158d96dde34a78ffa48a8fcdd1b5a95e2111561..24630a1e567798f4b25f014b5a514bf41f460b0b
SRC_URI += "\
  file://patches/0201-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0202-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.3/topic/imx-sdma
# umpf-hashinfo: a3773e94b985c597f9596be3c915d765313cc046
# umpf-topic-range: 24630a1e567798f4b25f014b5a514bf41f460b0b..c8535de29af677a48d0fee6462062089eb67e07f
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.3/topic/net-ksz8-switch
# umpf-hashinfo: 5f9f556c088bffd83e9201465226dc41a9fcd11d
# umpf-topic-range: c8535de29af677a48d0fee6462062089eb67e07f..a43c29810ccc1772ee50e886c0e03b2351e34a3d
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
# umpf-topic: v6.3/topic/imx8mp-dt
# umpf-hashinfo: d1d48e62df1351ea7be9ef7dfea56a04012bde86
# umpf-topic-range: a43c29810ccc1772ee50e886c0e03b2351e34a3d..851efac5bae411416416ff253fe1f0510e242891
SRC_URI += "\
  file://patches/0501-arm64-dts-imx8mp-Add-SAI-SDMA-AudioMIX.patch \
  file://patches/0502-arm64-dts-imx8mp-don-t-initialize-audio-clocks-from-.patch \
  file://patches/0503-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0504-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0505-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0506-arm64-dts-imx8mp-add-MIPI-DSI-display-output.patch \
  file://patches/0507-arm64-dts-imx8mp-add-interconnect-for-lcdif-hdmi.patch \
  file://patches/0508-arm64-dts-imx8mp-add-NPU-node.patch \
  "
# umpf-topic: v6.3/topic/boards/imx8mp-evk
# umpf-hashinfo: d371b0110e53c7603b457abe205d8ade61f5ceff
# umpf-topic-range: 851efac5bae411416416ff253fe1f0510e242891..902cabe795785a3522ebeea71895c4b50eba0078
SRC_URI += "\
  file://patches/0601-arm64-dts-imx8mp-evk-enable-HDMI.patch \
  file://patches/0602-arm64-dts-imx8mp-Add-analog-audio-output-on-i.MX8MP-.patch \
  file://patches/0603-arm64-dts-imx8mp-evk-add-dual-role-usb-port1-support.patch \
  "
# umpf-topic: v6.3/topic/imx8mp-hdmi
# umpf-hashinfo: 9f9b5a644a20a281f6eac09b29bce3d20dc5ffbe
# umpf-topic-range: 902cabe795785a3522ebeea71895c4b50eba0078..c5f61b5e35ce467fd4522dbd11b0cce01245b613
SRC_URI += "\
  file://patches/0701-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0702-drm-bridge-imx-add-bridge-wrapper-driver-for-i.MX8MP.patch \
  file://patches/0703-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0704-drm-bridge-imx-add-driver-for-HDMI-TX-Parallel-Video.patch \
  file://patches/0705-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0706-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.3/topic/dw-hdmi
# umpf-hashinfo: e6e2bfef4b956d5d722c303fa1ae3b3f1017db6b
# umpf-topic-range: c5f61b5e35ce467fd4522dbd11b0cce01245b613..ea3693150ea508572461eb6f2e591c30f5ab2071
SRC_URI += "\
  file://patches/0801-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/0802-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-topic: v6.3/topic/imx-gpcv2
# umpf-hashinfo: 7d7ac76a77242c290b5f40857eb0e2a4679b504d
# umpf-topic-range: ea3693150ea508572461eb6f2e591c30f5ab2071..ee15a0a6025e603a2664ebbc1dff473650a84072
SRC_URI += "\
  file://patches/0901-soc-imx-gpcv2-split-PGC-domain-probe-in-two-passes.patch \
  file://patches/0902-soc-imx-gpcv2-rename-keep_clocks-to-bus_clocks.patch \
  file://patches/0903-soc-imx-gpcv2-prepare-bus-clocks-early.patch \
  "
# umpf-release: 6.3/customers/skov/imx6/20230512-1
# umpf-topic-range: ee15a0a6025e603a2664ebbc1dff473650a84072..e42649a33ed95b046a4587d121ad3257be780b1f
SRC_URI += "\
  file://patches/1001-Release-6.3-customers-skov-imx6-20230512-1.patch \
  "
# umpf-end
