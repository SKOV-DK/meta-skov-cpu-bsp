# umpf-base: v5.0.5
# umpf-name: 5.0/customers/skov/imx6
# umpf-version: 5.0/customers/skov/imx6/20190329-2
# umpf-topic: v5.0/customers/skov/imx6_project_specific
# umpf-hashinfo: 2e8efca947414ab187c3a950d517c1d11b03038f
# umpf-topic-range: 1f6f316a537d4310747b08f89fb32565317b288b..6c8903bdba214df6f329a79e02d7832bed3239bc
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-ARM-dts-imx6qdl-skov-fix-touchscreen-orientation.patch \
  file://patches/0004-ARM-dts-imx6qdl-skov-make-us-of-upstream-pcf85063-bi.patch \
  file://patches/0005-ARM-dts-imx6qdl-skov-revc-fix-backlight-enable-gpio-.patch \
  "
# umpf-topic: v5.0/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: 526a45bc0629b506b65b6c5446e6b25ae931865f
# umpf-topic-range: 6c8903bdba214df6f329a79e02d7832bed3239bc..88300c9854c4e31874266d513d0f6dd479805e10
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  "
# umpf-topic: v5.0/customers/skov/imx6_backports_from_upstream
# umpf-hashinfo: d9209b2ba538809eba19f935c6d005bfee064b61
# umpf-topic-range: 88300c9854c4e31874266d513d0f6dd479805e10..39d16f78308ba3083f0a3244d9825f35b0e7a267
SRC_URI += "\
  file://patches/0201-dt-binding-pcf8523-add-xtal-load-capacitance.patch \
  file://patches/0202-dt-binding-pcf85063-add-xtal-load-capacitance.patch \
  file://patches/0203-rtc-pcf8523-set-xtal-load-capacitance-from-DT.patch \
  file://patches/0204-rtc-pcf85063-set-xtal-load-capacitance-from-DT.patch \
  "
# umpf-topic: v5.0/topic/etnaviv
# umpf-hashinfo: 40edfdea07c1e95a7c6633b3923f64824e1d7120
# umpf-topic-range: 39d16f78308ba3083f0a3244d9825f35b0e7a267..f8e557f13bc7dc27d26f2e3a1979e68986d06e81
SRC_URI += "\
  file://patches/0301-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0302-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0303-drm-etnaviv-add-GC7000-sensitive-states.patch \
  file://patches/0304-drm-etnaviv-support-relocations-to-BOs.patch \
  file://patches/0305-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0306-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0307-drm-etnaviv-move-job-context-pointer-to-etnaviv_gem_.patch \
  file://patches/0308-drm-etnaviv-mmuv2-don-t-map-zero-page.patch \
  file://patches/0309-drm-etnaviv-split-out-cmdbuf-mapping-into-address-sp.patch \
  file://patches/0310-drm-etnaviv-share-a-single-cmdbuf-suballoc-region-ac.patch \
  file://patches/0311-drm-etnaviv-replace-MMU-flush-marker-with-flush-sequ.patch \
  file://patches/0312-drm-etnaviv-rework-MMU-handling.patch \
  file://patches/0313-drm-etnaviv-split-out-starting-of-FE-idle-loop.patch \
  file://patches/0314-drm-etnaviv-provide-MMU-context-to-etnaviv_gem_mappi.patch \
  file://patches/0315-drm-etnaviv-implement-per-process-address-spaces-on-.patch \
  file://patches/0316-drm-etnaviv-dump-only-failing-submit.patch \
  file://patches/0317-drm-etnaviv-initialize-idle-mask-before-querying-the.patch \
  file://patches/0318-drm-etnaviv-clean-up-etnaviv_gem_new_handle.patch \
  file://patches/0319-drm-scheduler-put-killed-job-cleanup-to-worker.patch \
  file://patches/0320-drm-etnaviv-avoid-DMA-API-warning-when-importing-buf.patch \
  file://patches/0321-drm-etnaviv-track-previous-gpu-mmu-context.patch \
  "
# umpf-topic: v5.0/topic/coda
# umpf-hashinfo: 636415c8d50143b9eecd28c7d12ef6f893579a2c
# umpf-topic-range: f8e557f13bc7dc27d26f2e3a1979e68986d06e81..d14155124bd92a350a4173f05836cb1e104c09f6
SRC_URI += "\
  file://patches/0401-media-coda-warn-about-too-small-payload-in-start_str.patch \
  file://patches/0402-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0403-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0404-media-coda-jpeg-add-JPEG-register-definitions-for-CO.patch \
  file://patches/0405-media-coda-jpeg-add-CODA960-JPEG-support.patch \
  file://patches/0406-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0407-media-coda-jpeg-decode-JPEG-header-in-buf_queue-to-d.patch \
  file://patches/0408-media-coda-jpeg-limit-enum_formats-to-same-chroma-su.patch \
  file://patches/0409-media-coda-jpeg-parse-first-JPEG-header-on-output-st.patch \
  file://patches/0410-media-dt-bindings-coda-fsl-imx6dl-vpu.patch \
  file://patches/0411-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0412-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0413-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0414-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0415-media-coda-reuse-bitstream-payload-in-coda_job_ready.patch \
  file://patches/0416-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0417-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0418-media-coda-allow-S_PARM-on-the-CAPTURE-side-for-back.patch \
  file://patches/0419-media-coda-make-timeout-configurable.patch \
  file://patches/0420-media-coda-add-regmap-support.patch \
  file://patches/0421-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0422-media-coda-dump-metas-to-the-log-and-bitstream-into-.patch \
  file://patches/0423-media-coda-implement-CMD_START-to-restart-decoding.patch \
  file://patches/0424-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0425-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0426-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0427-media-v4l2-ctrl-Add-control-to-enable-h.264-constrai.patch \
  file://patches/0428-media-v4l2-ctrl-Add-control-for-h.264-chroma-qp-offs.patch \
  file://patches/0429-media-coda-Add-control-for-h.264-constrained-intra-p.patch \
  file://patches/0430-media-coda-Add-control-for-h.264-chroma-qp-index-off.patch \
  file://patches/0431-media-coda-use-macroblock-tiling-on-CODA960-only.patch \
  file://patches/0432-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0433-media-coda-fix-decoder-capture-buffer-payload.patch \
  file://patches/0434-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0435-media-coda-fix-mpeg2-sequence-number-handling.patch \
  file://patches/0436-media-coda-jpeg-fix-qsequence-counting.patch \
  file://patches/0437-media-coda-fix-last-buffer-handling-in-V4L2_ENC_CMD_.patch \
  file://patches/0438-media-coda-fix-V4L2_DEC_CMD_STOP-when-all-buffers-ar.patch \
  file://patches/0439-media-coda-enable-all-interrupts-for-debugging.patch \
  file://patches/0440-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0441-media-coda-dump-metas-to-the-log-and-bitstream-into-.patch \
  file://patches/0442-media-coda-set-codec-earlier.patch \
  file://patches/0443-media-coda-pad-first-MPEG-2-buffer-to-512-bytes.patch \
  file://patches/0444-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0445-media-coda-pad-by-repeating-headers-on-CodaHx4.patch \
  "
# umpf-topic: v5.0/topic/drm-sched-accounting
# umpf-hashinfo: 61d32aff72edbfce114f534a8463ba39abcf352a
# umpf-topic-range: d14155124bd92a350a4173f05836cb1e104c09f6..baf76ab814e6eff773bf1d46d50720da1533c92e
SRC_URI += "\
  file://patches/0501-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0502-drm-sched-track-execution-time-per-scheduler.patch \
  file://patches/0503-drm-sched-make-fence-ops-static.patch \
  "
# umpf-topic: v5.0/topic/ksz8873
# umpf-hashinfo: c58125b0705aa97ef98acdbf0273c81025fa6daf
# umpf-topic-range: baf76ab814e6eff773bf1d46d50720da1533c92e..17bf2ee3724491afcc52e5bb98c6d0647ed8861c
SRC_URI += "\
  file://patches/0601-net-dsa-microchip-prepare-PHY-for-proper-advertiseme.patch \
  file://patches/0602-net-dsa-microchip-add-MIB-counter-reading-support.patch \
  file://patches/0603-net-dsa-microchip-get-port-link-status.patch \
  file://patches/0604-mdio-bitbang-add-SMI0-mode-support.patch \
  file://patches/0605-micrel-fix-config_aneg-for-ksz886x.patch \
  file://patches/0606-micrel-support-write-to-registers-via-regmap.patch \
  file://patches/0607-dsa-add-ksz8873-tail-tagging.patch \
  file://patches/0608-dsa-add-self_test-ethtool-function-handling.patch \
  file://patches/0609-dsa-ksz-add-test_cnt-option-for-ethtool-test-options.patch \
  file://patches/0610-ksz-Add-Microchip-KSZ8873-SMI-DSA-driver.patch \
  "
# umpf-topic: v5.0/topic/touchscreen-ads7846
# umpf-hashinfo: fae0522ac384a5a8e8c3d95d0f96bfa2c35f6ea5
# umpf-topic-range: 17bf2ee3724491afcc52e5bb98c6d0647ed8861c..16d435b6e3949c2da84b1130b01ee34f066deee9
SRC_URI += "\
  file://patches/0701-Input-ads7846-convert-to-devm_-alloc-functions.patch \
  file://patches/0702-dt-bindings-input-ads7846-fix-property-description.patch \
  file://patches/0703-dt-bindings-input-ads7846-replace-vendor-bindings-by.patch \
  file://patches/0704-Input-ads7846-add-support-for-general-touchscreen-bi.patch \
  "
# umpf-release: 5.0/customers/skov/imx6/20190329-2
# umpf-topic-range: 16d435b6e3949c2da84b1130b01ee34f066deee9..7a5288c9d60ab13c22b564cacb3f92e3adc5d7ec
SRC_URI += "\
  file://patches/0801-Release-5.0-customers-skov-imx6-20190329-2.patch \
  "
# umpf-end
