# umpf-base: v5.17.7
# umpf-name: 5.17/customers/skov/imx6
# umpf-version: 5.17/customers/skov/imx6/20220513-1
# umpf-topic: v5.17/topic/imx-drm
# umpf-hashinfo: 773b56ea7f5cf59be1e90c0fe476e423c962c9f7
# umpf-topic-range: 7651bb70fe5d2bc9b1b45890d990cb670b23a51c..8b6ce4309718e725369dc0b260e6b556f03a127a
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
# umpf-topic-range: 8b6ce4309718e725369dc0b260e6b556f03a127a..ad7db7a2ccdd474131e3e623ae999842e3ce8048
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
# umpf-topic-range: ad7db7a2ccdd474131e3e623ae999842e3ce8048..9ea891a50dc049c38a3e504efa66ec71b91ed01a
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
# umpf-topic-range: 9ea891a50dc049c38a3e504efa66ec71b91ed01a..e93c642e6a068a4cc3d315b147a828790d8bb50b
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v5.17/topic/iio-adc-touchscreen
# umpf-hashinfo: a8ba581091cba06e692344682739c6ececb8a3ae
# umpf-topic-range: e93c642e6a068a4cc3d315b147a828790d8bb50b..842b7525bb9695ea981991cb6a0b827a7e7e0459
SRC_URI += "\
  file://patches/0401-iio-adc-tsc2046-rework-the-trigger-state-machine.patch \
  file://patches/0402-iio-adc-tsc2046-add-.read_raw-support.patch \
  file://patches/0403-iio-adc-tsc2046-add-sanity-check-to-avoid-to-big-all.patch \
  "
# umpf-topic: v5.17/topic/usb-storage-fixes
# umpf-hashinfo: 8b1b5b3311d0bac43a07a0642d36273d650b2320
# umpf-topic-range: 842b7525bb9695ea981991cb6a0b827a7e7e0459..02153e3ee20989023546cfdc42a4cf8e3c41c041
SRC_URI += "\
  file://patches/0501-Revert-block-mq-deadline-Prioritize-high-priority-re.patch \
  "
# umpf-topic: v5.17/topic/skov-dts
# umpf-hashinfo: e5306c27c5df1bbed940df8c84981e26182a82ce
# umpf-topic-range: 02153e3ee20989023546cfdc42a4cf8e3c41c041..6493a121021764e73f284926e9d0246efdeb578d
SRC_URI += "\
  file://patches/0601-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  file://patches/0602-ARM-dts-imx6-skov-add-pwm-regulator-to-control-the-p.patch \
  "
# umpf-topic: v5.17/topic/drm-sched-accounting
# umpf-hashinfo: 68940949940b47afd4c596d574ea01596be1d529
# umpf-topic-range: 6493a121021764e73f284926e9d0246efdeb578d..1211477bfddb7592adf65cd59e8bd147010da25c
SRC_URI += "\
  file://patches/0701-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0702-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-release: 5.17/customers/skov/imx6/20220513-1
# umpf-topic-range: 1211477bfddb7592adf65cd59e8bd147010da25c..93b92c26a0ae40f7a047d7375f21663343545f97
SRC_URI += "\
  file://patches/0801-Release-5.17-customers-skov-imx6-20220513-1.patch \
  "
# umpf-end
