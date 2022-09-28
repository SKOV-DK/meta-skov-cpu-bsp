# umpf-base: v6.0-rc7
# umpf-name: 6.0/customers/skov/imx6
# umpf-version: 6.0/customers/skov/imx6/20220927-1
# umpf-topic: v6.0/topic/imx-drm
# umpf-hashinfo: 6c75ded333c97f9c8ab09d275baa15df4c4fc6ca
# umpf-topic-range: f76349cf41451c5c42a99f18a9163377e4b364ff..0b4a93507b67e4d62b30ee7c0401e437b8d04f13
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v6.0/topic/etnaviv
# umpf-hashinfo: dce6eeb4e4af0dc5b74435fafca05838910ab805
# umpf-topic-range: 0b4a93507b67e4d62b30ee7c0401e437b8d04f13..97eebd8e2a0bc39d2a01d2295e60a83d8f0e2128
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
# umpf-topic-range: 97eebd8e2a0bc39d2a01d2295e60a83d8f0e2128..b28f4a79589ac38f3804c09ba6d09662076c72a4
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
# umpf-topic-range: b28f4a79589ac38f3804c09ba6d09662076c72a4..63b07757cc5914f58a8573a76e45dae23d532b80
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v6.0/topic/drm-sched-accounting
# umpf-hashinfo: 998cc29b6a124bea6f53fea2b54b4916fdfe0b08
# umpf-topic-range: 63b07757cc5914f58a8573a76e45dae23d532b80..143c40c8ad6f1cd9cce6e1ebdd43b775ce1af71f
SRC_URI += "\
  file://patches/0401-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0402-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v6.0/topic/skov-dts
# umpf-hashinfo: abe1aa48321432272521eec63512512a1c29cdce
# umpf-topic-range: 143c40c8ad6f1cd9cce6e1ebdd43b775ce1af71f..25a0491c9735e7d8f03c9af7e5d52298c6bbd582
SRC_URI += "\
  file://patches/0501-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  "
# umpf-release: 6.0/customers/skov/imx6/20220927-1
# umpf-topic-range: 25a0491c9735e7d8f03c9af7e5d52298c6bbd582..9e09d5efdee247f020775c64fca848a7a1bc82d7
SRC_URI += "\
  file://patches/0601-Release-6.0-customers-skov-imx6-20220927-1.patch \
  "
# umpf-end
