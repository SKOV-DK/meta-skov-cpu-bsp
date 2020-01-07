# umpf-base: v5.4.8
# umpf-name: 5.4/customers/skov/imx6
# umpf-version: 5.4/customers/skov/imx6/20200109-1
# umpf-topic: v5.4/customers/skov/imx6_project_specific
# umpf-hashinfo: 6255d39ec17ae5b162946b4c3f501b8ae95336ca
# umpf-topic-range: 5825c88e96518d8793f99e8c70aa0b0396642b45..3a770ac25a5dd487503580ec33536747649687f2
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-imx6-cpu-add-SKOV-specific-touchtoy-driver.patch \
  "
# umpf-topic: v5.4/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: f0d0d22b2ab2a8dd7207c4121abc7988704ef0c3
# umpf-topic-range: 3a770ac25a5dd487503580ec33536747649687f2..80ff321cc34fea512d483ab077ce154f017054f9
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  "
# umpf-topic: v5.4/topic/etnaviv
# umpf-hashinfo: 0207496b1632dea79da61c6b7ae6428cd230acec
# umpf-topic-range: 80ff321cc34fea512d483ab077ce154f017054f9..5f9398c59062e80a3ea5865746701de23ebae12b
SRC_URI += "\
  file://patches/0201-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0202-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0203-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0204-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0205-drm-etnaviv-request-pages-from-DMA32-zone-when-neede.patch \
  file://patches/0206-mm-cma-export-functions-to-get-CMA-base-and-size.patch \
  file://patches/0207-drm-etnaviv-use-CMA-area-to-compute-linear-window-of.patch \
  "
# umpf-topic: v5.4/topic/coda
# umpf-hashinfo: 619518f7dcbe6f3dcc9b54590191ded9ccc620a5
# umpf-topic-range: 5f9398c59062e80a3ea5865746701de23ebae12b..fea555e4720ccd5cbe7d77740405f97a698e32d6
SRC_URI += "\
  file://patches/0301-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0302-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0303-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0304-media-coda-improve-decoder-sequence-init-failure-mes.patch \
  file://patches/0305-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0306-media-coda-limit-frame-interval-enumeration-to-suppo.patch \
  file://patches/0307-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0308-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0309-media-coda-jpeg-add-JPEG-register-definitions-for-CO.patch \
  file://patches/0310-media-coda-jpeg-add-CODA960-JPEG-support.patch \
  file://patches/0311-media-coda-jpeg-decode-JPEG-header-in-buf_queue-to-d.patch \
  file://patches/0312-media-coda-jpeg-limit-enum_formats-to-same-chroma-su.patch \
  file://patches/0313-media-coda-jpeg-parse-first-JPEG-header-on-output-st.patch \
  file://patches/0314-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0315-media-dt-bindings-coda-fsl-imx6dl-vpu.patch \
  file://patches/0316-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0317-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0318-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0319-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0320-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0321-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0322-media-coda-make-timeout-configurable.patch \
  file://patches/0323-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0324-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0325-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0326-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0327-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0328-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0329-media-coda-add-regmap-support.patch \
  file://patches/0330-media-coda-enable-all-interrupts-for-debugging.patch \
  file://patches/0331-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0332-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0333-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0334-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0335-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0336-media-coda-request-to-skip-kernel-mapping-for-decode.patch \
  file://patches/0337-media-coda-set-output-buffer-bytesused-to-appease-v4.patch \
  file://patches/0338-media-coda-jpeg-set-empty-output-buffer-bytesused-to.patch \
  file://patches/0339-media-coda-fix-deadlock-between-decoder-picture-run-.patch \
  file://patches/0340-media-coda-assert-bitstream-mutex-is-locked-in-coda_.patch \
  file://patches/0341-media-coda-avoid-hardware-lockups-with-more-than-13-.patch \
  file://patches/0342-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0343-Revert-media-coda-Replace-the-threaded-interrupt-wit.patch \
  file://patches/0344-media-coda-drop-unused-irqlock.patch \
  file://patches/0345-media-coda-thread-all-interrupts-other-than-pic-run-.patch \
  file://patches/0346-media-coda-disable-encoder-compose-selections.patch \
  file://patches/0347-media-coda-disable-decoder-crop-selections.patch \
  file://patches/0348-media-coda-split-marking-last-meta-into-helper-funct.patch \
  file://patches/0349-media-coda-mark-last-capture-buffer.patch \
  file://patches/0350-media-coda-lock-capture-queue-wakeup-against-decoder.patch \
  "
# umpf-topic: v5.4/topic/drm-sched
# umpf-hashinfo: 1fc014ba4f792eb78d86a917e77b0f67b4c260d6
# umpf-topic-range: fea555e4720ccd5cbe7d77740405f97a698e32d6..51778704bca825ad076a2e9c9a514379366d4f5e
SRC_URI += "\
  file://patches/0401-drm-sched-don-t-try-to-construct-error-code-from-NUL.patch \
  file://patches/0402-drm-sched-remove-superfluous-whitespace-in-drm_sched.patch \
  file://patches/0403-drm-scheduler-Avoid-accessing-freed-bad-job.patch \
  file://patches/0404-drm-sched-Use-completion-to-wait-for-sched-thread-id.patch \
  file://patches/0405-drm-sched-Avoid-job-cleanup-if-sched-thread-is-parke.patch \
  "
# umpf-topic: v5.4/topic/drm-sched-accounting
# umpf-hashinfo: e8b01f71fd7dbb7c114b35b0851f68f16663d71a
# umpf-topic-range: 51778704bca825ad076a2e9c9a514379366d4f5e..50c6230878e592cdfaa835d7cee79d4f5c3c9a77
SRC_URI += "\
  file://patches/0501-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0502-drm-sched-track-execution-time-per-scheduler.patch \
  file://patches/0503-drm-sched-make-fence-ops-static.patch \
  "
# umpf-topic: v5.4/topic/ksz8873
# umpf-hashinfo: a90546af96415d6da2e67de450d9e12d46776be4
# umpf-topic-range: 50c6230878e592cdfaa835d7cee79d4f5c3c9a77..bfa85c2316b21d4255b1535ab0d82fb874685e6c
SRC_URI += "\
  file://patches/0601-dsa-ksz-add-test_cnt-option-for-ethtool-test-options.patch \
  file://patches/0602-net-dsa-tag-fix-tag-handling.patch \
  file://patches/0603-dsa-add-self_test-ethtool-function-handling.patch \
  file://patches/0604-net-dsa-ksz-use-common-define-for-tag-len.patch \
  file://patches/0605-mdio-bitbang-add-support-for-lowlevel-mdio-read-writ.patch \
  file://patches/0606-micrel-fix-config_aneg-for-ksz886x.patch \
  file://patches/0607-net-tag-ksz-Add-KSZ8863-tag-code.patch \
  file://patches/0608-ksz9875-add-mutex-locking-to-vlan-handling.patch \
  file://patches/0609-ksz-Add-Microchip-KSZ8863-SMI-based-driver-support.patch \
  file://patches/0610-dt-bindings-net-dsa-document-additional-Microchip-KS.patch \
  file://patches/0611-ksz-add-self_test-support-for-Link-MD-detection-on-K.patch \
  "
# umpf-release: 5.4/customers/skov/imx6/20200109-1
# umpf-topic-range: bfa85c2316b21d4255b1535ab0d82fb874685e6c..80ce24e01c2cd128e51b7cdeb2178aab235dca5a
SRC_URI += "\
  file://patches/0701-Release-5.4-customers-skov-imx6-20200109-1.patch \
  "
# umpf-end
