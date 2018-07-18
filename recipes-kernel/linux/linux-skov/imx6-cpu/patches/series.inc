# umpf-base: v4.17.6
# umpf-name: 4.17/customers/skov/imx6
# umpf-version: 4.17/customers/skov/imx6/20180713-1
# umpf-topic: v4.17/customers/skov/imx6
# umpf-hashinfo: d2954e580f79aac210eec4a8e3131bf249739cbb
# umpf-topic-range: b36cc73101fa785ba47f3092fb7517dde0c27da3..c7e35605c93f1ea3d3a80b1b3f54fd23dfdd772a
SRC_URI += "\
  file://patches/0001-Skov-add-support-for-base-platform-and-board-variant.patch \
  file://patches/0002-skov_version-add-support-for-board-21-22.patch \
  file://patches/0003-devicetree-restructure-skov-files-and-add-support-fo.patch \
  file://patches/0004-panel-simple-add-support-for-Logic-Technologies-lttd.patch \
  file://patches/0005-rtc-pcf85063-fix-so-ctrl1-setup-is-kept.patch \
  file://patches/0006-devicetree-fix-name-of-display-node.patch \
  file://patches/0007-devicetree-switch-OCOTP-to-be-read-only.patch \
  "
# umpf-topic: v4.17/topic/etnaviv
# umpf-hashinfo: 18ab289c64a101dc14ad5f9d908a384f88a859dd
# umpf-topic-range: c7e35605c93f1ea3d3a80b1b3f54fd23dfdd772a..682e852524e05952505aeb0bc8dc39c7f7929c95
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
# umpf-hashinfo: 3e0303f8f0fd3669bcf9ff92f4d243e018c34810
# umpf-topic-range: 682e852524e05952505aeb0bc8dc39c7f7929c95..4c388fee2450bc8839db5f5d410e9e8cbc9d9029
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
  file://patches/0243-media-coda-use-encoder-crop-rectangle-to-set-visible.patch \
  file://patches/0244-media-coda-add-h.264-levels-5.0-and-5.1.patch \
  "
# umpf-release: 4.17/customers/skov/imx6/20180713-1
# umpf-topic-range: 4c388fee2450bc8839db5f5d410e9e8cbc9d9029..d11d261be7763f05b67f7bf58e4e9c54f1ac8e17
SRC_URI += "\
  file://patches/0301-Release-4.17-customers-skov-imx6-20180713-1.patch \
  "
# umpf-end
