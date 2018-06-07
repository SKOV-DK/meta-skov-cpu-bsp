# umpf-base: v4.17
# umpf-name: 4.17/customers/skov/imx6
# umpf-version: 4.17/customers/skov/imx6/20180607-1
# umpf-topic: v4.17/customers/skov/imx6
# umpf-hashinfo: 8a4581944cd2043ab224c8ce87829d17cbc34a55
# umpf-topic-range: 29dcea88779c856c7dc92040a0c01233263101d4..5ee11634d624e9ac43d9e68adb7d13f5054cc19b
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov_version-add-support-for-board-21-22.patch \
  file://patches/0003-devicetree-restructure-skov-files-and-add-support-fo.patch \
  file://patches/0004-panel-simple-add-support-for-Logic-Technologies-lttd.patch \
  file://patches/0005-rtc-pcf85063-fix-so-ctrl1-setup-is-kept.patch \
  "
# umpf-topic: v4.17/topic/etnaviv
# umpf-hashinfo: 18ab289c64a101dc14ad5f9d908a384f88a859dd
# umpf-topic-range: 5ee11634d624e9ac43d9e68adb7d13f5054cc19b..bba8d9022d89405194aa53657a7f71a0ccfadf41
SRC_URI += "\
  file://patches/0101-drm-etnaviv-correct-timeout-calculation.patch \
  file://patches/0102-drm-etnaviv-remove-cycling-through-MMU-address-space.patch \
  file://patches/0103-drm-etnaviv-init-DMA-ops-for-virtual-master-device.patch \
  file://patches/0104-drm-etnaviv-add-GC7000-sensitive-states.patch \
  file://patches/0105-drm-etnaviv-support-relocations-to-BOs.patch \
  file://patches/0106-drm-etnaviv-switch-MMU-page-tables-to-writecombine-m.patch \
  file://patches/0107-drm-etnaviv-mmuv2-allocate-2nd-level-page-tables-on-.patch \
  file://patches/0108-drm-etnaviv-remove-register-logging.patch \
  file://patches/0109-drm-etnaviv-mmuv2-support-40-bit-phys-address.patch \
  file://patches/0110-drm-etnaviv-replace-license-text-with-SPDX-tags.patch \
  file://patches/0111-drm-etnaviv-mmuv2-use-memset32-to-init-scratch-page.patch \
  file://patches/0112-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0113-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0114-drm-etnaviv-protect-sched-job-submission-with-fence-.patch \
  file://patches/0115-drm-etnaviv-change-return-type-to-vm_fault_t.patch \
  "
# umpf-topic: v4.17/topic/coda
# umpf-hashinfo: ebb963adc3dbc37f86362fcefcba2c1cb73b30d1
# umpf-topic-range: bba8d9022d89405194aa53657a7f71a0ccfadf41..4ed211fc9dfee3a03b2b4352e771989a33c30d6f
SRC_URI += "\
  file://patches/0201-media-coda-move-framebuffer-size-calculation-out-of-.patch \
  file://patches/0202-media-coda-streamline-framebuffer-size-calculation-a.patch \
  file://patches/0203-media-coda-add-SPS-fixup-code-for-frame-sizes-that-a.patch \
  file://patches/0204-media-coda-jpeg-allow-non-JPEG-colorspace.patch \
  file://patches/0205-media-coda-jpeg-only-queue-two-buffers-into-the-bits.patch \
  file://patches/0206-media-coda-jpeg-explicitly-disable-thumbnails-in-SEQ.patch \
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
  file://patches/0237-media-coda-reduce-minimum-frame-size-to-single-macro.patch \
  file://patches/0238-media-coda-reuse-coda_s_fmt_vid_cap-to-propagate-for.patch \
  file://patches/0239-media-coda-do-not-try-to-propagate-format-if-capture.patch \
  file://patches/0240-media-coda-improve-queue-busy-error-message.patch \
  file://patches/0241-media-coda-set-colorimetry-on-coded-queue.patch \
  file://patches/0242-media-coda-add-h.264-level-4.2.patch \
  "
# umpf-release: 4.17/customers/skov/imx6/20180607-1
# umpf-topic-range: 4ed211fc9dfee3a03b2b4352e771989a33c30d6f..4c7c4f8304fb0483df264e5b33a7285fd52657db
SRC_URI += "\
  file://patches/0301-Release-4.17-customers-skov-imx6-20180607-1.patch \
  "
# umpf-end
