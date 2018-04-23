# umpf-base: v4.16.4
# umpf-name: 4.16/customers/skov/imx6
# umpf-version: 4.16/customers/skov/imx6/20180425-1
# umpf-topic: v4.16/customers/skov/imx6
# umpf-hashinfo: 0857aa47ab7df177da66776da01e66c780a20cfb
# umpf-topic-range: b42b71cd28f213cf4688b9891e66b57bdb6eefe8..25526574fe55b53df656e3b3a9cc3a4fc9e937f8
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov_version-add-support-for-board-21-22.patch \
  file://patches/0003-devicetree-restructure-skov-files-and-add-support-fo.patch \
  file://patches/0004-panel-simple-add-support-for-Logic-Technologies-lttd.patch \
  "
# umpf-topic: v4.16/topic/etnaviv
# umpf-hashinfo: 7db6f497642401212a92f11b99707b7af53c3c96
# umpf-topic-range: 25526574fe55b53df656e3b3a9cc3a4fc9e937f8..b4e4c999a941b8fe13725a6307672410bba1bdaa
SRC_URI += "\
  file://patches/0101-drm-etnaviv-track-fences-by-IDR-instead-of-seqno.patch \
  file://patches/0102-drm-etnaviv-don-t-fail-to-build-on-arches-without-PH.patch \
  file://patches/0103-drm-etnaviv-add-missing-major-features-field-to-debu.patch \
  file://patches/0104-drm-etnaviv-hook-up-DRM-GPU-scheduler.patch \
  file://patches/0105-drm-etnaviv-move-dependency-handling-to-scheduler.patch \
  file://patches/0106-drm-etnaviv-lock-BOs-after-all-other-submit-work-is-.patch \
  file://patches/0107-drm-etnaviv-replace-hangcheck-with-scheduler-timeout.patch \
  file://patches/0108-drm-etnaviv-remove-the-need-for-a-gpu-subsystem-DT-n.patch \
  file://patches/0109-ARM-dts-imx6-remove-GPU-subsystem-nodes.patch \
  file://patches/0110-dt-bindings-etnaviv-add-slave-interface-clock.patch \
  file://patches/0111-drm-etnaviv-use-correct-format-specifier-for-size_t.patch \
  file://patches/0112-drm-etnaviv-split-out-and-optimize-MMU-fault-dumping.patch \
  file://patches/0113-drm-etnaviv-add-support-for-slave-interface-clock.patch \
  file://patches/0114-drm-etnaviv-update-hardware-headers-from-rnndb.patch \
  file://patches/0115-drm-etnaviv-add-more-minor-features-fields.patch \
  file://patches/0116-drm-etnaviv-add-hardware-database.patch \
  file://patches/0117-drm-etnaviv-add-security-handling-mode-enum.patch \
  file://patches/0118-drm-etnaviv-handle-security-states.patch \
  file://patches/0119-drm-etnaviv-add-function-to-load-the-initial-PTA-sta.patch \
  file://patches/0120-drm-etnaviv-add-PTA-handling-to-MMUv2.patch \
  file://patches/0121-drm-etnaviv-correct-timeout-calculation.patch \
  file://patches/0122-drm-etnaviv-init-DMA-ops-for-virtual-master-device.patch \
  file://patches/0123-drm-etnaviv-add-GC7000-sensitive-states.patch \
  file://patches/0124-drm-etnaviv-support-relocations-to-BOs.patch \
  file://patches/0125-drm-etnaviv-remove-cycling-through-MMU-address-space.patch \
  file://patches/0126-drm-etnaviv-bump-HW-job-limit-to-4.patch \
  "
# umpf-topic: v4.16/topic/coda
# umpf-hashinfo: b5e90368e63f6cb4007cee4faa55ed0bf5a0b6c6
# umpf-topic-range: b4e4c999a941b8fe13725a6307672410bba1bdaa..9406f0e002cad7f4dee9b69a467606e6644e1858
SRC_URI += "\
  file://patches/0201-media-coda-move-framebuffer-size-calculation-out-of-.patch \
  file://patches/0202-media-coda-streamline-framebuffer-size-calculation-a.patch \
  file://patches/0203-media-coda-add-SPS-fixup-code-for-frame-sizes-that-a.patch \
  file://patches/0204-media-coda-jpeg-allow-non-JPEG-colorspace.patch \
  file://patches/0205-media-coda-jpeg-only-queue-two-buffers-into-the-bits.patch \
  file://patches/0206-media-coda-jpeg-Explicitly-disable-thumbnails-in-SEQ.patch \
  file://patches/0207-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0208-media-coda-mark-CODA960-firmware-version-2.1.9-as-su.patch \
  file://patches/0209-media-dt-bindings-coda-fsl-imx6dl-vpu.patch \
  file://patches/0210-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0211-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0212-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0213-media-coda-hold-back-decoder-jobs-until-we-have-at-l.patch \
  file://patches/0214-media-coda-display-fourcc-character-values-instead-o.patch \
  file://patches/0215-media-coda-add-start-decoding-debug-info.patch \
  file://patches/0216-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0217-media-coda-reuse-bitstream-payload-in-coda_job_ready.patch \
  file://patches/0218-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0219-media-coda-allow-S_PARM-on-the-CAPTURE-side-for-back.patch \
  file://patches/0220-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0221-media-coda-jpeg-add-JPEG-register-definitions-for-CO.patch \
  file://patches/0222-media-coda-jpeg-add-CODA960-JPEG-support.patch \
  file://patches/0223-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0224-media-coda-jpeg-decode-JPEG-header-in-buf_queue-to-d.patch \
  file://patches/0225-media-coda-jpeg-limit-enum_formats-to-same-chroma-su.patch \
  file://patches/0226-media-coda-jpeg-parse-first-JPEG-header-on-output-st.patch \
  file://patches/0227-media-coda-make-timeout-configurable.patch \
  file://patches/0228-media-coda-add-regmap-support.patch \
  file://patches/0229-media-coda-debug-output-when-resuming-after-hold.patch \
  file://patches/0230-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0231-media-coda-improve-no-output-buffers-debug-message.patch \
  file://patches/0232-media-coda-warn-about-too-small-payload-in-start_str.patch \
  file://patches/0233-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0234-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0235-media-coda-dump-metas-to-the-log-and-bitstream-into-.patch \
  file://patches/0236-media-coda-clear-hold-flag-on-streamoff.patch \
  file://patches/0237-media-coda-bump-maximum-number-of-internal-framebuff.patch \
  file://patches/0238-media-coda-Add-i.MX51-CodaHx4-support.patch \
  file://patches/0239-media-coda-reduce-minimum-frame-size-to-single-macro.patch \
  file://patches/0240-media-coda-do-not-try-to-propagate-format-if-capture.patch \
  file://patches/0241-media-coda-improve-queue-busy-error-message.patch \
  "
# umpf-release: 4.16/customers/skov/imx6/20180425-1
# umpf-topic-range: 9406f0e002cad7f4dee9b69a467606e6644e1858..b8211e79b912d6d065c4b28689e56ef652796619
SRC_URI += "\
  file://patches/0301-Release-4.16-customers-skov-imx6-20180425-1.patch \
  "
# umpf-end
