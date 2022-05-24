# umpf-base: v5.18
# umpf-name: 5.18/customers/skov/imx6
# umpf-version: 5.18/customers/skov/imx6/20220524-1
# umpf-topic: v5.18/topic/imx-drm
# umpf-hashinfo: 30885541cba4b94b7d07be26c70a61ee03ed9cfd
# umpf-topic-range: 4b0986a3613c92f4ec1bdc7f60ec66fea135991f..ad23432c45f725168cbb97c01ed4184554972b9a
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v5.18/topic/etnaviv
# umpf-hashinfo: 4d09a53f8fd9be4af79e7ce7006db58494c6d6b3
# umpf-topic-range: ad23432c45f725168cbb97c01ed4184554972b9a..89bec31876e8c52108b8891f06f0238074d32a16
SRC_URI += "\
  file://patches/0101-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0102-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0103-drm-etnaviv-check-for-reaped-mapping-in-etnaviv_iomm.patch \
  file://patches/0104-drm-etnaviv-move-MMU-context-ref-unref-into-map-unma.patch \
  file://patches/0105-drm-etnaviv-move-flush_seq-increment-into-etnaviv_io.patch \
  file://patches/0106-drm-etnaviv-reap-idle-softpin-mappings-when-necessar.patch \
  "
# umpf-topic: v5.18/topic/coda
# umpf-hashinfo: 051a7127072ea369267a240ca13a52c45cb3aa50
# umpf-topic-range: 89bec31876e8c52108b8891f06f0238074d32a16..8b848e01307a157e1e54a4481fd9064007594409
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
  file://patches/0210-media-coda-Fix-reported-H264-profile.patch \
  file://patches/0211-media-coda-Add-more-H264-levels-for-CODA960.patch \
  file://patches/0212-media-coda-fix-default-JPEG-colorimetry.patch \
  file://patches/0213-media-coda-limit-frame-interval-enumeration-to-suppo.patch \
  file://patches/0214-media-coda-jpeg-drop-coda9_jpeg_dec_huff_setup-retur.patch \
  file://patches/0215-media-v4l2-mem2mem-split-media-controller-function-o.patch \
  file://patches/0216-media-coda-add-media-controller.patch \
  file://patches/0217-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0218-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0219-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0220-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0221-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0222-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0223-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0224-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0225-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0226-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0227-media-coda-add-VDOA-tracepoints.patch \
  file://patches/0228-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0229-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0230-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0231-media-coda-make-timeout-configurable.patch \
  file://patches/0232-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0233-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0234-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0235-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0236-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0237-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0238-media-coda-enable-all-interrupts-except-BIT_INIT-for.patch \
  file://patches/0239-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0240-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0241-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0242-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0243-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0244-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0245-media-coda-advertise-baseline-support.patch \
  file://patches/0246-media-coda-low-latency-mode.patch \
  "
# umpf-topic: v5.18/topic/imx-sdma
# umpf-hashinfo: baa2fd37f647a9073a75cac4cff85a1bf9e35be5
# umpf-topic-range: 8b848e01307a157e1e54a4481fd9064007594409..f69248b91d3e6092e10a01dd01206ed5d654a94b
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v5.18/topic/usb-storage-fixes
# umpf-hashinfo: bc94cdad5670edd0c4a81cbfbe3a2d60aebc0a24
# umpf-topic-range: f69248b91d3e6092e10a01dd01206ed5d654a94b..4570b09760f78e10d6eab127e994364a7fe20c09
SRC_URI += "\
  file://patches/0401-Revert-block-mq-deadline-Prioritize-high-priority-re.patch \
  "
# umpf-topic: v5.18/topic/skov-dts
# umpf-hashinfo: 77ac9ebe3e767403c66325f4de86d7c03e2fac4b
# umpf-topic-range: 4570b09760f78e10d6eab127e994364a7fe20c09..f241b520994d35009c04e91cc2cd9cfb280ec79f
SRC_URI += "\
  file://patches/0501-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  file://patches/0502-ARM-dts-imx6-skov-add-pwm-regulator-to-control-the-p.patch \
  "
# umpf-topic: v5.18/topic/drm-sched-accounting
# umpf-hashinfo: b08f90b9fdd2725499e6e18593747ea48d666989
# umpf-topic-range: f241b520994d35009c04e91cc2cd9cfb280ec79f..709bdb0755d1d0132ec0dc44857b9d72e10a3f8b
SRC_URI += "\
  file://patches/0601-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0602-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-release: 5.18/customers/skov/imx6/20220524-1
# umpf-topic-range: 709bdb0755d1d0132ec0dc44857b9d72e10a3f8b..1185da20af6e8aecb396d15c352e2aedbf8beb43
SRC_URI += "\
  file://patches/0701-Release-5.18-customers-skov-imx6-20220524-1.patch \
  "
# umpf-end
