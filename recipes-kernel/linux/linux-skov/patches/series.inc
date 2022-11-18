# umpf-base: v6.0
# umpf-name: 6.0/customers/skov/imx6
# umpf-version: 6.0/customers/skov/imx6/20221005-1
# umpf-topic: v6.0/topic/imx-drm
# umpf-hashinfo: 6c75ded333c97f9c8ab09d275baa15df4c4fc6ca
# umpf-topic-range: 4fe89d07dcc2804c8b562f6c7896a45643d34b2f..ef401e409fd3e2b06736385ac0743c56d18c6d71
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v6.0/topic/etnaviv
# umpf-hashinfo: dce6eeb4e4af0dc5b74435fafca05838910ab805
# umpf-topic-range: ef401e409fd3e2b06736385ac0743c56d18c6d71..b699b91a55cfffa426b08b8e2caafd3bd64931bb
SRC_URI += "\
  file://patches/0101-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0102-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0103-drm-etnaviv-print-offender-task-information-on-hangc.patch \
  file://patches/0104-drm-etnaviv-move-idle-mapping-reaping-into-separate-.patch \
  file://patches/0105-drm-etnaviv-reap-idle-mapping-if-it-doesn-t-match-th.patch \
  file://patches/0106-drm-etnaviv-add-HWDB-entry-for-GC7000-r6203.patch \
  file://patches/0107-drm-etnaviv-disable-tx-clock-gating-for-GC7000-rev62.patch \
  file://patches/0108-drm-scheduler-track-GPU-active-time-per-entity.patch \
  file://patches/0109-drm-etnaviv-allocate-unique-ID-per-drm_file.patch \
  file://patches/0110-drm-etnaviv-export-client-GPU-usage-statistics-via-f.patch \
  file://patches/0111-drm-etnaviv-switch-to-PFN-mappings.patch \
  file://patches/0112-drm-etnaviv-don-t-truncate-physical-page-address.patch \
  "
# umpf-topic: v6.0/topic/coda
# umpf-hashinfo: a17a0b19de2bfd9f72c52342c9b5f62a600f80d9
# umpf-topic-range: b699b91a55cfffa426b08b8e2caafd3bd64931bb..37096ab64aeefa37be1daa84a0dec6efb3105fd4
SRC_URI += "\
  file://patches/0201-media-coda-jpeg-drop-coda9_jpeg_dec_huff_setup-retur.patch \
  file://patches/0202-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0203-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0204-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0205-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0206-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0207-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0208-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0209-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0210-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0211-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0212-media-coda-add-VDOA-tracepoints.patch \
  file://patches/0213-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0214-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0215-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0216-media-coda-make-timeout-configurable.patch \
  file://patches/0217-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0218-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0219-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0220-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0221-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0222-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0223-media-coda-enable-all-interrupts-except-BIT_INIT-for.patch \
  file://patches/0224-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0225-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0226-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0227-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0228-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0229-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0230-media-coda-advertise-baseline-support.patch \
  file://patches/0231-media-coda-low-latency-mode.patch \
  "
# umpf-topic: v6.0/topic/imx-sdma
# umpf-hashinfo: 570c90a6e86b778fa2f76a477a49bb51a351d717
# umpf-topic-range: 37096ab64aeefa37be1daa84a0dec6efb3105fd4..620a8f5a7f7d02dd4edee0eb65552758e6e467a6
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.0/topic/drm-sched-accounting
# umpf-hashinfo: 998cc29b6a124bea6f53fea2b54b4916fdfe0b08
# umpf-topic-range: 620a8f5a7f7d02dd4edee0eb65552758e6e467a6..83450dc037e8a47efe3b6b8199e8bbdc0e9ff717
SRC_URI += "\
  file://patches/0401-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0402-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.0/topic/skov-dts
# umpf-hashinfo: abe1aa48321432272521eec63512512a1c29cdce
# umpf-topic-range: 83450dc037e8a47efe3b6b8199e8bbdc0e9ff717..c65fb7ed473e031d80e08eeaa4a80c77b89e55d2
SRC_URI += "\
  file://patches/0501-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  "
# umpf-topic: v6.0/topic/imx8mp-dt
# umpf-hashinfo: 575bf52e854c1a323d0ce4d52be6f5cb4836de3f
# umpf-topic-range: c65fb7ed473e031d80e08eeaa4a80c77b89e55d2..ac9d923d78ea29e0d1354c81553cd8e74fc02182
SRC_URI += "\
  file://patches/0601-dt-bindings-usb-dwc3-imx8mp-add-power-domain-propert.patch \
  file://patches/0602-arm64-dts-imx8mp-don-t-initialize-audio-clocks-from-.patch \
  file://patches/0603-arm64-dts-imx8mp-add-HDMI-power-domains.patch \
  file://patches/0604-arm64-dts-imx8mp-add-HDMI-irqsteer.patch \
  file://patches/0605-arm64-dts-imx8mp-add-HDMI-display-pipeline.patch \
  file://patches/0606-arm64-dts-imx8mp-add-MIPI-DSI-display-output.patch \
  file://patches/0607-arm64-dts-imx8mp-Add-iMX8MP-PCIe-support.patch \
  "
# umpf-topic: v6.0/topic/boards/imx8mp-evk
# umpf-hashinfo: 9d1103061a1b820ab7390ef9c8896a722ca7ec3c
# umpf-topic-range: ac9d923d78ea29e0d1354c81553cd8e74fc02182..64bc598813f9116bfef63310749c43c806c58010
SRC_URI += "\
  file://patches/0701-arm64-dts-imx8mp-evk-enable-HDMI.patch \
  file://patches/0702-arm64-dts-imx8mp-evk-Add-PCIe-support.patch \
  "
# umpf-topic: v6.0/topic/imx8mp-hdmi
# umpf-hashinfo: 4161a93a5148d08b1783f7c5942536d4174e9d2b
# umpf-topic-range: 64bc598813f9116bfef63310749c43c806c58010..a36cc81a43ddb12a6b587611baed8393badd1a93
SRC_URI += "\
  file://patches/0801-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0802-drm-imx-add-bridge-wrapper-driver-for-i.MX8MP-DWC-HD.patch \
  file://patches/0803-dt-bindings-display-imx-add-binding-for-i.MX8MP-HDMI.patch \
  file://patches/0804-drm-imx-add-driver-for-HDMI-TX-Parallel-Video-Interf.patch \
  file://patches/0805-dt-bindings-phy-add-binding-for-the-i.MX8MP-HDMI-PHY.patch \
  file://patches/0806-phy-freescale-add-Samsung-HDMI-PHY.patch \
  "
# umpf-topic: v6.0/topic/imx8mp-lcdif
# umpf-hashinfo: a391a4c672a31d8b7f2ea988aa6942c1540a0384
# umpf-topic-range: a36cc81a43ddb12a6b587611baed8393badd1a93..13ed186aa386c1d85d1d1de41ce0b9c181eaf002
SRC_URI += "\
  file://patches/0901-drm-lcdif-change-burst-size-to-256B.patch \
  file://patches/0902-drm-lcdif-add-underflow-panic-support.patch \
  "
# umpf-topic: v6.0/topic/dw-hdmi
# umpf-hashinfo: db6346674bee229acee64b239931aa363a02c42e
# umpf-topic-range: 13ed186aa386c1d85d1d1de41ce0b9c181eaf002..da84ed833e39e095491ad642b07df67cba9f2183
SRC_URI += "\
  file://patches/1001-drm-bridge-dw_hdmi-prefer-RGB-bus-formats-over-subsa.patch \
  file://patches/1003-drm-bridge-dw_hdmi-detect-initial-connector-state.patch \
  file://patches/1004-drm-bridge-dw_hdmi-use-rx-sense-for-plug-detection-i.patch \
  "
# umpf-release: 6.0/customers/skov/imx6/20221005-1
# umpf-topic-range: da84ed833e39e095491ad642b07df67cba9f2183..5f470b1ec04c549c64317f0d4724cc9f26b4c3bf
SRC_URI += "\
  file://patches/1101-Release-6.0-customers-skov-imx6-20221117-1.patch \
  "
# umpf-end
