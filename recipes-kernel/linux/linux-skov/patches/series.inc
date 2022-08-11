# umpf-base: v5.19.1
# umpf-name: 5.19/customers/skov/imx6
# umpf-version: 5.19/customers/skov/imx6/20220811-1
# umpf-topic: v5.19/topic/imx-drm
# umpf-hashinfo: 922e8158bf3bf1134d31aa261c51b902f8b39330
# umpf-topic-range: d654f7e29909ce602942a1cd927d56d5aa397ed8..6fa0f020a49c0d85b87bbcec1566d9ee421b8732
SRC_URI += "\
  file://patches/0001-drm-imx-ipuv3-plane-add-debug-output.patch \
  file://patches/0002-gpu-ipu-v3-ipu-dc-setup-microcode-from-u64-array.patch \
  "
# umpf-topic: v5.19/topic/etnaviv
# umpf-hashinfo: ef1be2f5dfec85593968f43b1261930b8c3a1016
# umpf-topic-range: 6fa0f020a49c0d85b87bbcec1566d9ee421b8732..bdd1d0baa75e749f052b8e99d824540368433d1a
SRC_URI += "\
  file://patches/0101-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0102-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0103-drm-etnaviv-print-offender-task-information-on-hangc.patch \
  file://patches/0104-drm-etnaviv-move-idle-mapping-reaping-into-separate-.patch \
  file://patches/0105-drm-etnaviv-reap-idle-mapping-if-it-doesn-t-match-th.patch \
  file://patches/0106-drm-etnaviv-add-HWDB-entry-for-GC7000-r6203.patch \
  file://patches/0107-drm-etnaviv-disable-tx-clock-gating-for-GC7000-rev62.patch \
  "
# umpf-topic: v5.19/topic/coda
# umpf-hashinfo: 8e46946e58611751660bdb5bfcf449a917a71fe3
# umpf-topic-range: bdd1d0baa75e749f052b8e99d824540368433d1a..bd76ba94a1c720649f0aa86bbcc6e541fbba09e3
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
# umpf-topic: v5.19/topic/imx-sdma
# umpf-hashinfo: ec598e043c646a4f19df74684ff4ee3db071fa69
# umpf-topic-range: bd76ba94a1c720649f0aa86bbcc6e541fbba09e3..20878d70f10c10bc564aa09b109fbe5acb9b41ed
SRC_URI += "\
  file://patches/0301-firmware-add-nowarn-variant-of-request_firmware_nowa.patch \
  file://patches/0302-dmaengine-imx-sdma-don-t-print-warning-when-firmware.patch \
  "
# umpf-topic: v5.19/topic/skov-dts
# umpf-hashinfo: b41f354bdcf3852af225e975831055c522b8f0a3
# umpf-topic-range: 20878d70f10c10bc564aa09b109fbe5acb9b41ed..2db8d9c3916ac1c4d86c0597a5196a7490459c15
SRC_URI += "\
  file://patches/0401-ARM-dts-imx6-skov-migrate-to-resistive-adc-touch.patch \
  file://patches/0402-ARM-dts-imx6-skov-add-pwm-regulator-to-control-the-p.patch \
  "
# umpf-topic: v5.19/topic/drm-sched-accounting
# umpf-hashinfo: 00b75af9ec508f36a60b3b8d1708efbe1e9a882b
# umpf-topic-range: 2db8d9c3916ac1c4d86c0597a5196a7490459c15..320cea9ba3e161612c486c1d3152f49accf35a01
SRC_URI += "\
  file://patches/0501-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0502-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-release: 5.19/customers/skov/imx6/20220811-1
# umpf-topic-range: 320cea9ba3e161612c486c1d3152f49accf35a01..928e19615109eff3044eaf99a395de9b6ca67713
SRC_URI += "\
  file://patches/0601-Release-5.19-customers-skov-imx6-20220811-1.patch \
  "
# umpf-end
