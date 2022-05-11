# umpf-base: v5.17.6
# umpf-name: 5.17/customers/skov/imx6
# umpf-version: 5.17/customers/skov/imx6/20220511-1
# umpf-topic: v5.17/topic/imx-drm
# umpf-hashinfo: 773b56ea7f5cf59be1e90c0fe476e423c962c9f7
# umpf-topic-range: 431b2c01a1103b63d026c3d8c7c286e4f4d9c918..98fbff016e5a48c59235bacfdaf102c425bea6b5
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-drm-imx-Add-support-for-non-RGB-output-colorspace.patch \
  file://patches/0003-gpu-ipu-v3-ipu-dc-add-YUYV-output-format-support.patch \
  file://patches/0004-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  file://patches/0005-gpu-ipu-v3-Add-per-channel-threshold-crossing-interr.patch \
  file://patches/0006-gpu-ipu-v3-Add-error-interrupts.patch \
  file://patches/0007-gpu-ipu-v3-remove-legacy-V4L2_PIX_FMT_RGB32-and-_BGR.patch \
  "
# umpf-topic: v5.17/topic/etnaviv
# umpf-hashinfo: eb4612f3e8ba19585a5cca72d2b47f94b83bf3b6
# umpf-topic-range: 98fbff016e5a48c59235bacfdaf102c425bea6b5..4ed264b233067f28421e66104b4af2e805f7709a
SRC_URI += "\
  file://patches/0101-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0102-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0103-drm-etnaviv-check-for-reaped-mapping-in-etnaviv_iomm.patch \
  file://patches/0104-drm-etnaviv-move-MMU-context-ref-unref-into-map-unma.patch \
  file://patches/0105-drm-etnaviv-move-flush_seq-increment-into-etnaviv_io.patch \
  file://patches/0106-drm-etnaviv-reap-idle-softpin-mappings-when-necessar.patch \
  "
# umpf-topic: v5.17/topic/coda
# umpf-hashinfo: 0adc06acdfc5900077b643dc73cf45222e7c3bf4
# umpf-topic-range: 4ed264b233067f28421e66104b4af2e805f7709a..c1e9c8b5ac2a80671df3e86077b0d375316e8598
SRC_URI += "\
  file://patches/0201-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0202-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0203-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0204-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0205-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0206-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0207-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0208-media-coda-limit-frame-interval-enumeration-to-suppo.patch \
  file://patches/0209-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0210-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0211-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0212-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0213-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0214-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0215-media-coda-make-timeout-configurable.patch \
  file://patches/0216-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0217-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0218-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0219-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0220-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0221-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0222-media-coda-enable-all-interrupts-except-BIT_INIT-for.patch \
  file://patches/0223-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0224-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0225-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0226-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0227-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0228-media-coda-set-output-buffer-bytesused-to-appease-v4.patch \
  file://patches/0229-media-coda-assert-bitstream-mutex-is-locked-in-coda_.patch \
  file://patches/0230-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0231-media-coda-thread-all-interrupts-other-than-pic-run-.patch \
  file://patches/0232-media-coda-enable-h.264-encoder-levels-1-and-4.2.patch \
  file://patches/0233-media-coda-Fix-reported-H264-profile.patch \
  file://patches/0234-media-coda-disable-encoder-cmd-ioctl-on-decoder-and-.patch \
  file://patches/0235-media-coda-add-JPEG-downscale-support.patch \
  file://patches/0236-media-coda-advertise-baseline-support.patch \
  file://patches/0237-media-coda-add-VDOA-tracepoints.patch \
  file://patches/0238-media-coda-low-latency-mode.patch \
  file://patches/0239-media-coda-disable-encoder-ioctls-for-decoder-device.patch \
  file://patches/0240-media-coda-disable-stateful-encoder-ioctls-for-jpeg-.patch \
  file://patches/0241-media-coda-fix-default-JPEG-colorimetry.patch \
  file://patches/0242-media-coda-enable-capture-G_PARM-for-stateful-encode.patch \
  file://patches/0243-media-coda-enable-capture-S_PARM-for-stateful-encode.patch \
  file://patches/0244-media-coda-Use-platform_get_irq-to-get-the-interrupt.patch \
  file://patches/0245-media-v4l2-mem2mem-split-media-controller-function-o.patch \
  file://patches/0246-media-coda-add-media-controller.patch \
  file://patches/0247-media-coda-jpeg-set-buffer-error-flag-when-header-pa.patch \
  file://patches/0248-media-coda-jpeg-improve-header-parse-error-message.patch \
  file://patches/0249-media-coda-consolidate-job_finish-calls-on-decoder-p.patch \
  file://patches/0250-media-coda-jpeg-start-streaming-without-valid-header.patch \
  file://patches/0251-media-coda-jpeg-drop-coda9_jpeg_dec_huff_setup-retur.patch \
  "
# umpf-topic: v5.17/topic/imx-sdma
# umpf-hashinfo: 92076facd93b8143145b969f1068a58fd8230e56
# umpf-topic-range: c1e9c8b5ac2a80671df3e86077b0d375316e8598..d88e1858859ba657f4a6323ec775c401cc0576e1
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v5.17/topic/iio-adc-touchscreen
# umpf-hashinfo: a8ba581091cba06e692344682739c6ececb8a3ae
# umpf-topic-range: d88e1858859ba657f4a6323ec775c401cc0576e1..db439b025ec96baa6fb811d97354f40e46c46eaf
SRC_URI += "\
  file://patches/0401-iio-adc-tsc2046-rework-the-trigger-state-machine.patch \
  file://patches/0402-iio-adc-tsc2046-add-.read_raw-support.patch \
  file://patches/0403-iio-adc-tsc2046-add-sanity-check-to-avoid-to-big-all.patch \
  "
# umpf-topic: v5.17/topic/usb-storage-fixes
# umpf-hashinfo: 8b1b5b3311d0bac43a07a0642d36273d650b2320
# umpf-topic-range: db439b025ec96baa6fb811d97354f40e46c46eaf..6b744c1dbf9fc65451c05a6fb2bd9c67c76fb73d
SRC_URI += "\
  file://patches/0501-Revert-block-mq-deadline-Prioritize-high-priority-re.patch \
  "
# umpf-topic: v5.17/topic/skov-dts
# umpf-hashinfo: d804278d18feb69b4acc17c9d9237f8f313a62b5
# umpf-topic-range: 6b744c1dbf9fc65451c05a6fb2bd9c67c76fb73d..d0c763cb0e8460e683549c3b57e052b9967fa9c8
SRC_URI += "\
  file://patches/0601-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  "
# umpf-topic: v5.17/topic/drm-sched-accounting
# umpf-hashinfo: 68940949940b47afd4c596d574ea01596be1d529
# umpf-topic-range: d0c763cb0e8460e683549c3b57e052b9967fa9c8..8388a17befb1f7bf7831b730b52e13b775385c03
SRC_URI += "\
  file://patches/0701-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0702-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-release: 5.17/customers/skov/imx6/20220511-1
# umpf-topic-range: 8388a17befb1f7bf7831b730b52e13b775385c03..033eb8b79b1ac8a87d920e643463c02f40135c4e
SRC_URI += "\
  file://patches/0801-Release-5.17-customers-skov-imx6-20220511-1.patch \
  "
# umpf-end
