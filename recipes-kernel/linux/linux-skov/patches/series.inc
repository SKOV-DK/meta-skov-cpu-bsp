# umpf-base: v5.18.16
# umpf-name: 5.18/customers/skov/imx6
# umpf-version: 5.18/customers/skov/imx6/20220810-1
# umpf-topic: v5.18/topic/imx-drm
# umpf-hashinfo: 30885541cba4b94b7d07be26c70a61ee03ed9cfd
# umpf-topic-range: 8843bf1f0737ecea456d2bbd19d4263d49f2d110..bd310a2b01da71df918dec45b51e5fa93a0239f2
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v5.18/topic/etnaviv
# umpf-hashinfo: 4d09a53f8fd9be4af79e7ce7006db58494c6d6b3
# umpf-topic-range: bd310a2b01da71df918dec45b51e5fa93a0239f2..e37190e4bfd6bea133cbd47b01c641d4d4a2cd59
SRC_URI += "\
  file://patches/0101-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0102-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0103-drm-etnaviv-move-MMU-context-ref-unref-into-map-unma.patch \
  file://patches/0104-drm-etnaviv-move-flush_seq-increment-into-etnaviv_io.patch \
  file://patches/0105-drm-etnaviv-reap-idle-softpin-mappings-when-necessar.patch \
  "
# umpf-topic: v5.18/topic/coda
# umpf-hashinfo: 3a838b6e7f2b74a55aa38e0eca4f21efd1509a8f
# umpf-topic-range: e37190e4bfd6bea133cbd47b01c641d4d4a2cd59..db834d6b9627f37f646ddbbee0d7792575880d2f
SRC_URI += "\
  file://patches/0201-media-coda-disable-encoder-cmd-ioctl-on-decoder-and-.patch \
  file://patches/0202-media-coda-disable-encoder-ioctls-for-decoder-device.patch \
  file://patches/0203-media-coda-disable-stateful-encoder-ioctls-for-jpeg-.patch \
  file://patches/0204-media-coda-assert-bitstream-mutex-is-locked-in-coda_.patch \
  file://patches/0205-media-coda-consolidate-job_finish-calls-on-decoder-p.patch \
  file://patches/0206-media-coda-add-JPEG-downscale-support.patch \
  file://patches/0207-media-coda-jpeg-set-buffer-error-flag-when-header-pa.patch \
  file://patches/0208-media-coda-jpeg-improve-header-parse-error-message.patch \
  file://patches/0209-media-coda-jpeg-start-streaming-without-valid-header.patch \
  file://patches/0210-media-coda-fix-default-JPEG-colorimetry.patch \
  file://patches/0211-media-coda-jpeg-drop-coda9_jpeg_dec_huff_setup-retur.patch \
  file://patches/0212-media-v4l2-mem2mem-split-media-controller-function-o.patch \
  file://patches/0213-media-coda-add-media-controller.patch \
  file://patches/0214-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0215-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0216-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0217-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0218-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0219-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0220-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0221-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0222-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0223-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0224-media-coda-add-VDOA-tracepoints.patch \
  file://patches/0225-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0226-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0227-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0228-media-coda-make-timeout-configurable.patch \
  file://patches/0229-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0230-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0231-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0232-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0233-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0234-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0235-media-coda-enable-all-interrupts-except-BIT_INIT-for.patch \
  file://patches/0236-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0237-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0238-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0239-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0240-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0241-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0242-media-coda-advertise-baseline-support.patch \
  file://patches/0243-media-coda-low-latency-mode.patch \
  "
# umpf-topic: v5.18/topic/imx-sdma
# umpf-hashinfo: baa2fd37f647a9073a75cac4cff85a1bf9e35be5
# umpf-topic-range: db834d6b9627f37f646ddbbee0d7792575880d2f..5828012dfcdec26dda2275754a115b2d57be5567
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v5.18/topic/usb-storage-fixes
# umpf-hashinfo: bc94cdad5670edd0c4a81cbfbe3a2d60aebc0a24
# umpf-topic-range: 5828012dfcdec26dda2275754a115b2d57be5567..acbe0b5719e40206d3ac87ea2cace14cc89e1b78
SRC_URI += "\
  file://patches/0401-Revert-block-mq-deadline-Prioritize-high-priority-re.patch \
  "
# umpf-topic: v5.18/topic/skov-dts
# umpf-hashinfo: 77ac9ebe3e767403c66325f4de86d7c03e2fac4b
# umpf-topic-range: acbe0b5719e40206d3ac87ea2cace14cc89e1b78..02feb04a20cb2ecfd797ccd61452b54bbeec4d70
SRC_URI += "\
  file://patches/0501-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  file://patches/0502-ARM-dts-imx6-skov-add-pwm-regulator-to-control-the-p.patch \
  "
# umpf-topic: v5.18/topic/drm-sched-accounting
# umpf-hashinfo: e53b51c107a100c535dae15d5279de577a5ea88b
# umpf-topic-range: 02feb04a20cb2ecfd797ccd61452b54bbeec4d70..137548a257b5a359dd61ad8713c8b6cdafb25fa4
SRC_URI += "\
  file://patches/0601-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0602-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-release: 5.18/customers/skov/imx6/20220810-1
# umpf-topic-range: 137548a257b5a359dd61ad8713c8b6cdafb25fa4..91bd1e96b608b62e5a81752863e45a3de1e0cbb9
SRC_URI += "\
  file://patches/0701-Release-5.18-customers-skov-imx6-20220810-1.patch \
  "
# umpf-end
