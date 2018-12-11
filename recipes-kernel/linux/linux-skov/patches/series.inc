# umpf-base: v4.19-rc1
# umpf-name: 4.19/customers/skov/imx6
# umpf-version: 4.19/customers/skov/imx6/20181211-1
# umpf-topic: v4.19/customers/skov/imx6_project_specific
# umpf-hashinfo: a0caf01a592773548f6fde3a1b8b4b8a24aabb3a
# umpf-topic-range: 5b394b2ddf0347bef56e50c69a58773c94343ff3..a0caf01a592773548f6fde3a1b8b4b8a24aabb3a
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  "
# umpf-topic: v4.19/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: 7adc4b31464d517d12bd7f3d405cb83f5983fce8
# umpf-topic-range: a0caf01a592773548f6fde3a1b8b4b8a24aabb3a..fc641fc74dccc755d466daa754075dafa8c39869
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-rtc-pcf8523-add-binding-with-quartz_load-.patch \
  file://patches/0104-dt-binding-rtc-pcf85063-add-binding-with-quartz-load.patch \
  file://patches/0105-dts-add-nxp-quartz_load_12.5pf-to-all-pcf8523-nodes.patch \
  file://patches/0106-rtc-pcf8523-add-quartz-load-configuration-from-DT.patch \
  file://patches/0107-rtc-pcf85063-add-quartz-load-configuration-from-DT.patch \
  file://patches/0108-atmel_lcdfb-support-native-mode-display-timings.patch \
  file://patches/0109-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0110-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0111-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  "
# umpf-topic: v4.19/topic/etnaviv
# umpf-hashinfo: eb6c4f4b7457e5717f8fca233507292f63ad1e67
# umpf-topic-range: fc641fc74dccc755d466daa754075dafa8c39869..add565e6b418f374db9c4ecad648908a4bad0a57
SRC_URI += "\
  file://patches/0201-drm-etnaviv-init-DMA-ops-for-virtual-master-device.patch \
  file://patches/0202-drm-etnaviv-add-GC7000-sensitive-states.patch \
  file://patches/0203-drm-etnaviv-support-relocations-to-BOs.patch \
  file://patches/0204-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0205-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  "
# umpf-topic: v4.19/topic/coda
# umpf-hashinfo: 708edcdb3752aa8424574ef56b4d6eb2f3b461ae
# umpf-topic-range: add565e6b418f374db9c4ecad648908a4bad0a57..3f502cd0d995713dab97e5ce05966cbc0b1cd396
SRC_URI += "\
  file://patches/0301-media-coda-reduce-minimum-frame-size-to-48x16-pixels.patch \
  file://patches/0302-media-coda-hold-back-decoder-jobs-until-we-have-at-l.patch \
  file://patches/0303-media-coda-improve-queue-busy-error-message.patch \
  file://patches/0304-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0305-media-dt-bindings-coda-fsl-imx6dl-vpu.patch \
  file://patches/0306-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0307-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0308-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0309-media-coda-display-fourcc-character-values-instead-o.patch \
  file://patches/0310-media-coda-add-start-decoding-debug-info.patch \
  file://patches/0311-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0312-media-coda-reuse-bitstream-payload-in-coda_job_ready.patch \
  file://patches/0313-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0314-media-coda-allow-S_PARM-on-the-CAPTURE-side-for-back.patch \
  file://patches/0315-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0316-media-coda-jpeg-add-JPEG-register-definitions-for-CO.patch \
  file://patches/0317-media-coda-jpeg-add-CODA960-JPEG-support.patch \
  file://patches/0318-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0319-media-coda-jpeg-decode-JPEG-header-in-buf_queue-to-d.patch \
  file://patches/0320-media-coda-jpeg-limit-enum_formats-to-same-chroma-su.patch \
  file://patches/0321-media-coda-jpeg-parse-first-JPEG-header-on-output-st.patch \
  file://patches/0322-media-coda-make-timeout-configurable.patch \
  file://patches/0323-media-coda-add-regmap-support.patch \
  file://patches/0324-media-coda-debug-output-when-resuming-after-hold.patch \
  file://patches/0325-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0326-media-coda-improve-no-output-buffers-debug-message.patch \
  file://patches/0327-media-coda-warn-about-too-small-payload-in-start_str.patch \
  file://patches/0328-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0329-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0330-media-coda-dump-metas-to-the-log-and-bitstream-into-.patch \
  file://patches/0331-media-coda-print-SEQ_INIT-error-code-as-hex-value.patch \
  file://patches/0332-media-coda-implement-CMD_START-to-restart-decoding.patch \
  file://patches/0333-media-coda-normalise-debug-output.patch \
  file://patches/0334-media-coda-jpeg-normalise-JPEG-debug-output.patch \
  file://patches/0335-media-coda-don-t-overwrite-h.264-profile_idc-on-deco.patch \
  file://patches/0336-media-coda-debut-output-when-setting-visible-size-vi.patch \
  "
# umpf-release: 4.19/customers/skov/imx6/20181211-1
# umpf-topic-range: 3f502cd0d995713dab97e5ce05966cbc0b1cd396..e474ca5606851fa37c1498bf01cd541462aea557
SRC_URI += "\
  file://patches/0401-Release-4.19-customers-skov-imx6-20181211-1.patch \
  "
# umpf-end
