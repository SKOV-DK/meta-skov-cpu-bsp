# umpf-base: v4.19.20
# umpf-name: 4.19/customers/skov/imx6
# umpf-version: 4.19/customers/skov/imx6/20190326-1
# umpf-topic: v4.19/customers/skov/imx6_project_specific
# umpf-hashinfo: d003c9efdea4dbfb0254a38112ee4a6e4a63f7e8
# umpf-topic-range: 323e0195e63ff967a4fbdab7b17120f544ddc88f..30a585b6e3d578d95263d73df5b9b93df599fd68
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  "
# umpf-topic: v4.19/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: d9940c21073bc07816ab532cda39237a49d260a4
# umpf-topic-range: 30a585b6e3d578d95263d73df5b9b93df599fd68..e9882e900bdb575bced0f788a910c175d006519f
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
# umpf-hashinfo: f3a03093edf8fe8ca01ee44956feaeb5a03032f2
# umpf-topic-range: e9882e900bdb575bced0f788a910c175d006519f..70ffe48e1567b1751b99e6a5121fbd5c87cb3d6b
SRC_URI += "\
  file://patches/0201-drm-etnaviv-kill-active-fence-tracking.patch \
  file://patches/0202-drm-etnaviv-consolidate-hardware-fence-handling-in-e.patch \
  file://patches/0203-drm-etnaviv-remove-unnecessary-local-irq-state-save-.patch \
  file://patches/0204-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0205-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0206-drm-etnaviv-add-GC7000-sensitive-states.patch \
  file://patches/0207-drm-etnaviv-support-relocations-to-BOs.patch \
  file://patches/0208-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0209-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0210-drm-etnaviv-replace-header-include-with-forward-decl.patch \
  file://patches/0211-drm-etnaviv-remove-lastctx-member-from-gpu-struct.patch \
  file://patches/0212-drm-etnaviv-move-job-context-pointer-to-etnaviv_gem_.patch \
  file://patches/0213-drm-etnaviv-mmuv2-don-t-map-zero-page.patch \
  file://patches/0214-drm-etnaviv-split-out-cmdbuf-mapping-into-address-sp.patch \
  file://patches/0215-drm-etnaviv-share-a-single-cmdbuf-suballoc-region-ac.patch \
  file://patches/0216-drm-etnaviv-replace-MMU-flush-marker-with-flush-sequ.patch \
  file://patches/0217-drm-etnaviv-rework-MMU-handling.patch \
  file://patches/0218-drm-etnaviv-split-out-starting-of-FE-idle-loop.patch \
  file://patches/0219-drm-etnaviv-provide-MMU-context-to-etnaviv_gem_mappi.patch \
  file://patches/0220-drm-etnaviv-implement-per-process-address-spaces-on-.patch \
  file://patches/0221-drm-etnaviv-dump-only-failing-submit.patch \
  "
# umpf-topic: v4.19/topic/coda
# umpf-hashinfo: 73b6f27ceb1608ac3b1037c9f0bc39339047b9ac
# umpf-topic-range: 70ffe48e1567b1751b99e6a5121fbd5c87cb3d6b..e356e4136b608f8cc815ad6e7655bb63742dbe44
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
  file://patches/0335-media-coda-debut-output-when-setting-visible-size-vi.patch \
  file://patches/0336-media-coda-store-unmasked-fifo-position-in-meta.patch \
  file://patches/0337-media-coda-improve-bitstream-payload-ready-check.patch \
  file://patches/0338-media-coda-limit-queueing-into-internal-bitstream-bu.patch \
  file://patches/0339-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0340-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0341-media-coda-don-t-disable-IRQs-across-buffer-meta-han.patch \
  file://patches/0342-media-coda-fix-memory-corruption-in-case-more-than-3.patch \
  file://patches/0343-media-coda-set-V4L2_CAP_TIMEPERFRAME-flag-in-coda_s_.patch \
  file://patches/0344-media-coda-implement-ENUM_FRAMEINTERVALS.patch \
  file://patches/0345-media-coda-never-set-infinite-timeperframe.patch \
  file://patches/0346-media-coda-fail-S_SELECTION-for-read-only-targets.patch \
  file://patches/0347-media-coda-remove-unused-instances-list.patch \
  file://patches/0348-media-v4l2-clarify-H.264-loop-filter-offset-controls.patch \
  file://patches/0349-media-coda-fix-H.264-deblocking-filter-controls.patch \
  file://patches/0350-media-v4l2-ctrl-Add-control-to-enable-h.264-constrai.patch \
  file://patches/0351-media-v4l2-ctrl-Add-control-for-h.264-chroma-qp-offs.patch \
  file://patches/0352-media-coda-Add-control-for-h.264-constrained-intra-p.patch \
  file://patches/0353-media-coda-Add-control-for-h.264-chroma-qp-index-off.patch \
  file://patches/0354-media-coda-use-macroblock-tiling-on-CODA960-only.patch \
  file://patches/0355-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0356-media-coda-fix-decoder-capture-buffer-payload.patch \
  file://patches/0357-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  "
# umpf-topic: v4.19/topic/drm-sched-accounting
# umpf-hashinfo: 02230e2fa9afbad0bede6a712e5a51523d968202
# umpf-topic-range: e356e4136b608f8cc815ad6e7655bb63742dbe44..ba1e81eaa77322c88ee366462d45c7f9c5327339
SRC_URI += "\
  file://patches/0401-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0402-drm-sched-track-execution-time-per-scheduler.patch \
  file://patches/0403-drm-sched-make-fence-ops-static.patch \
  "
# umpf-topic: v4.19/topic/ksz8873
# umpf-hashinfo: 1cf261b13c8f4a18d96f7c0a20741ddb677df574
# umpf-topic-range: ba1e81eaa77322c88ee366462d45c7f9c5327339..8c74a7afb65de8e007b6f8dc8f760bcaf28bd181
SRC_URI += "\
  file://patches/0501-mdio-bitbang-add-SMI0-mode-support.patch \
  file://patches/0502-micrel-fix-config_aneg-for-ksz886x.patch \
  file://patches/0503-micrel-support-write-to-registers-via-regmap.patch \
  file://patches/0504-dsa-add-ksz8873-tail-tagging.patch \
  file://patches/0505-dsa-add-self_test-ethtool-function-handling.patch \
  file://patches/0506-Replace-license-with-GPL.patch \
  file://patches/0507-Clean-up-code-according-to-patch-check-suggestions.patch \
  file://patches/0508-Rename-some-functions-with-ksz9477-prefix-to-separat.patch \
  file://patches/0509-Rename-ksz_spi.c-to-ksz9477_spi.c-and-update-Kconfig.patch \
  file://patches/0510-Break-KSZ9477-DSA-driver-into-two-files-in-preparati.patch \
  file://patches/0511-Add-MIB-counter-reading-support.patch \
  file://patches/0512-dsa-ksz-Use-timer_init-for-mib-counter-handling.patch \
  file://patches/0513-dsa-ksz-add-test_cnt-option-for-ethtool-test-options.patch \
  file://patches/0514-dsa-ksz-dont-complain-about-not-being-able-to-remove.patch \
  file://patches/0515-ksz-Add-Microchip-KSZ8873-SMI-DSA-driver.patch \
  "
# umpf-release: 4.19/customers/skov/imx6/20190326-1
# umpf-topic-range: 8c74a7afb65de8e007b6f8dc8f760bcaf28bd181..0c3d31609bfe8fa5536437fb61728bc58d9334de
SRC_URI += "\
  file://patches/0601-Release-4.19-customers-skov-imx6-20190326-1.patch \
  "
# umpf-end
