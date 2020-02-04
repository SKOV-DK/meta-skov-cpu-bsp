# umpf-base: v5.2.8
# umpf-name: 5.2/customers/skov/imx6
# umpf-version: 5.2/customers/skov/imx6/20190815-1
# umpf-topic: v5.2/customers/skov/imx6_project_specific
# umpf-hashinfo: 8f860fd30c6143fc247a9d35b983f001eb3d7124
# umpf-topic-range: d36a8d2fb62c7c9415213bea9cf576d8b1f9071f..d0a29653e9e2123df46c1a861b9a17270179bd04
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-imx6-cpu-add-SKOV-specific-touchtoy.patch \
  "
# umpf-topic: v5.2/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: 613d9d45c3f035f44f534e1d977c04a809fc7889
# umpf-topic-range: d0a29653e9e2123df46c1a861b9a17270179bd04..8515998f89964792bfcf75470dd29221c69d9fa6
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  "
# umpf-topic: v5.2/topic/etnaviv
# umpf-hashinfo: c4d3bd2d30f5d0fc3aaad9ca0ad5ce74d601e8b4
# umpf-topic-range: 8515998f89964792bfcf75470dd29221c69d9fa6..ec3b38dd2a784b0f8c1aee6ae0246b59fdf2116a
SRC_URI += "\
  file://patches/0201-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0202-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0203-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0204-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0205-drm-etnaviv-split-out-cmdbuf-mapping-into-address-sp.patch \
  file://patches/0206-drm-etnaviv-share-a-single-cmdbuf-suballoc-region-ac.patch \
  file://patches/0207-drm-etnaviv-replace-MMU-flush-marker-with-flush-sequ.patch \
  file://patches/0208-drm-etnaviv-rework-MMU-handling.patch \
  file://patches/0209-drm-etnaviv-split-out-starting-of-FE-idle-loop.patch \
  file://patches/0210-drm-etnaviv-provide-MMU-context-to-etnaviv_gem_mappi.patch \
  file://patches/0211-drm-etnaviv-implement-per-process-address-spaces-on-.patch \
  file://patches/0212-drm-etnaviv-dump-only-failing-submit.patch \
  file://patches/0213-drm-scheduler-put-killed-job-cleanup-to-worker.patch \
  file://patches/0214-drm-etnaviv-avoid-DMA-API-warning-when-importing-buf.patch \
  file://patches/0215-drm-etnaviv-track-previous-gpu-mmu-context.patch \
  file://patches/0216-drm-etnaviv-request-pages-from-DMA32-zone-when-neede.patch \
  file://patches/0217-mm-cma-export-functions-to-get-CMA-base-and-size.patch \
  file://patches/0218-drm-etnaviv-use-CMA-area-to-compute-linear-window-of.patch \
  file://patches/0219-drm-etnaviv-allow-to-request-specific-virtual-addres.patch \
  file://patches/0220-drm-etnaviv-skip-command-stream-validation-on-PPAS-c.patch \
  file://patches/0221-drm-etnaviv-implement-softpin.patch \
  "
# umpf-topic: v5.2/topic/coda
# umpf-hashinfo: ab6b6a642684863fece442e242e4617d118c80cf
# umpf-topic-range: ec3b38dd2a784b0f8c1aee6ae0246b59fdf2116a..17e59e34313893a5169732f21962a14b27af75a8
SRC_URI += "\
  file://patches/0301-media-coda-move-register-debugging-to-coda_debug-lev.patch \
  file://patches/0302-media-coda-move-job-ready-message-to-coda_debug-leve.patch \
  file://patches/0303-media-coda-add-coda_frame_type_char-helper.patch \
  file://patches/0304-media-coda-improve-decoder-job-finished-debug-messag.patch \
  file://patches/0305-media-coda-demote-s_ctrl-debug-messages-to-level-2.patch \
  file://patches/0306-media-coda-add-menu-strings-to-s_ctrl-debug-output.patch \
  file://patches/0307-media-coda-update-profile-and-level-controls-after-s.patch \
  file://patches/0308-media-coda-remove-I-src-header-search-path.patch \
  file://patches/0309-media-coda-venus-s5p_mfc-fix-control-typo.patch \
  file://patches/0310-media-coda-Print-a-nicer-device-registered-message.patch \
  file://patches/0311-media-coda-Replace-the-threaded-interrupt-with-a-har.patch \
  file://patches/0312-media-coda-Clear-the-interrupt-reason.patch \
  file://patches/0313-media-coda-add-decoder-MPEG-4-profile-and-level-cont.patch \
  file://patches/0314-media-v4l2-ctrl-add-MPEG-2-profile-and-level-control.patch \
  file://patches/0315-media-coda-add-decoder-MPEG-2-profile-and-level-cont.patch \
  file://patches/0316-media-coda-add-lockdep-asserts.patch \
  file://patches/0317-media-coda-use-v4l2_m2m_buf_copy_metadata.patch \
  file://patches/0318-media-v4l2-mem2mem-add-try_en-decoder_cmd-ioctl-help.patch \
  file://patches/0319-media-coda-implement-CMD_START-to-restart-decoding.patch \
  file://patches/0320-media-coda-use-mem2mem-try_en-decoder_cmd-helpers.patch \
  file://patches/0321-media-coda-add-coda_wake_up_capture_queue.patch \
  file://patches/0322-media-coda-fix-V4L2_DEC_CMD_STOP-when-all-buffers-ar.patch \
  file://patches/0323-media-coda-split-decoder-sequence-initialization-out.patch \
  file://patches/0324-media-coda-add-sequence-initialization-work.patch \
  file://patches/0325-media-coda-implement-decoder-source-change-event.patch \
  file://patches/0326-media-coda-integrate-internal-frame-metadata-into-a-.patch \
  file://patches/0327-media-coda-make-coda_bitstream_queue-more-versatile.patch \
  file://patches/0328-media-coda-pad-first-buffer-with-repeated-MPEG-heade.patch \
  file://patches/0329-media-coda-do-not-enforce-512-byte-initial-bitstream.patch \
  file://patches/0330-media-coda-flush-bitstream-ring-buffer-on-decoder-re.patch \
  file://patches/0331-media-coda-allow-flagging-last-output-buffer-interna.patch \
  file://patches/0332-media-coda-mark-the-last-output-buffer-on-decoder-st.patch \
  file://patches/0333-media-coda-only-set-the-stream-end-flags-if-there-ar.patch \
  file://patches/0334-media-coda-mark-the-last-output-buffer-on-encoder-st.patch \
  file://patches/0335-media-coda-retire-coda_buf_is_end_of_stream.patch \
  file://patches/0336-media-coda-only-wake-up-capture-queue-if-no-pending-.patch \
  file://patches/0337-media-coda-flag-the-last-encoded-buffer.patch \
  file://patches/0338-media-coda-lock-capture-queue-wakeup-against-encoder.patch \
  file://patches/0339-media-coda-mark-last-pending-buffer-or-last-meta-on-.patch \
  file://patches/0340-media-coda-mark-last-returned-frame.patch \
  file://patches/0341-media-coda-store-device-pointer-in-driver-structure-.patch \
  file://patches/0342-media-coda-add-coda_slice_mode-function.patch \
  file://patches/0343-media-coda-encoder-parameter-change-support.patch \
  file://patches/0344-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0345-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0346-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0347-media-coda-improve-decoder-sequence-init-failure-mes.patch \
  file://patches/0348-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0349-media-coda-limit-frame-interval-enumeration-to-suppo.patch \
  file://patches/0350-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0351-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0352-media-coda-jpeg-add-JPEG-register-definitions-for-CO.patch \
  file://patches/0353-media-coda-jpeg-add-CODA960-JPEG-support.patch \
  file://patches/0354-media-coda-jpeg-decode-JPEG-header-in-buf_queue-to-d.patch \
  file://patches/0355-media-coda-jpeg-limit-enum_formats-to-same-chroma-su.patch \
  file://patches/0356-media-coda-jpeg-parse-first-JPEG-header-on-output-st.patch \
  file://patches/0357-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0358-media-dt-bindings-coda-fsl-imx6dl-vpu.patch \
  file://patches/0359-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0360-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0361-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0362-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0363-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0364-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0365-media-coda-make-timeout-configurable.patch \
  file://patches/0366-media-coda-add-regmap-support.patch \
  file://patches/0367-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0368-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0369-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0370-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0371-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0372-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0373-media-coda-enable-all-interrupts-for-debugging.patch \
  file://patches/0374-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0375-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0376-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0377-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0378-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0379-media-coda-request-to-skip-kernel-mapping-for-decode.patch \
  "
# umpf-topic: v5.2/topic/drm-sched-accounting
# umpf-hashinfo: d68b898541860d7ade26422fe5946260e14bc4d0
# umpf-topic-range: 17e59e34313893a5169732f21962a14b27af75a8..8f58657496c565064a0e4a01c6557abd995249c7
SRC_URI += "\
  file://patches/0401-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0402-drm-sched-track-execution-time-per-scheduler.patch \
  file://patches/0403-drm-sched-make-fence-ops-static.patch \
  "
# umpf-topic: v5.2/topic/ksz8873
# umpf-hashinfo: ce0c2f93db6cda991c6e0f1c52675278ca352173
# umpf-topic-range: 8f58657496c565064a0e4a01c6557abd995249c7..c3987c8e538140eb99a103e6daf05644e794cfbc
SRC_URI += "\
  file://patches/0501-mdio-bitbang-add-SMI0-mode-support.patch \
  file://patches/0502-micrel-fix-config_aneg-for-ksz886x.patch \
  file://patches/0503-micrel-support-write-to-registers-via-regmap.patch \
  file://patches/0504-dsa-add-ksz8873-tail-tagging.patch \
  file://patches/0505-dsa-add-self_test-ethtool-function-handling.patch \
  file://patches/0506-dsa-ksz-add-test_cnt-option-for-ethtool-test-options.patch \
  file://patches/0507-ksz-Add-Microchip-KSZ8873-SMI-DSA-driver.patch \
  "
# umpf-topic: v5.2/topic/touchscreen-ads7846
# umpf-hashinfo: dade53ab6bb7fc8c9c379f6ae79d54a5fc4e534a
# umpf-topic-range: c3987c8e538140eb99a103e6daf05644e794cfbc..923af3ca7a1feb9fec55bdf1bc9889d5b6b2e380
SRC_URI += "\
  file://patches/0601-Input-ads7846-convert-to-devm_-alloc-functions.patch \
  file://patches/0602-dt-bindings-input-ads7846-fix-property-description.patch \
  file://patches/0603-dt-bindings-input-ads7846-replace-vendor-bindings-by.patch \
  file://patches/0604-Input-ads7846-add-support-for-general-touchscreen-bi.patch \
  "
# umpf-release: 5.2/customers/skov/imx6/20190815-1
# umpf-topic-range: 923af3ca7a1feb9fec55bdf1bc9889d5b6b2e380..7fc71cd7816d147e88bacdf597d3c874d197b5b4
SRC_URI += "\
  file://patches/0701-Release-5.2-customers-skov-imx6-20190815-1.patch \
  "
# umpf-end
