# umpf-base: v5.4.28
# umpf-name: 5.4/customers/skov/imx6
# umpf-version: 5.4/customers/skov/imx6/20200331-1
# umpf-topic: v5.4/customers/skov/imx6_project_specific
# umpf-hashinfo: 9d63b23cfef192cca4ab8e137f7fe5e9fb6fb4f0
# umpf-topic-range: 462afcd6e7ea94a7027a96a3bb12d0140b0b4216..f9375a597dca59b35c1f4740e0117d6dcf3ca737
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-imx6-cpu-add-SKOV-specific-touchtoy-driver.patch \
  file://patches/0004-Revert-mmc-block-Add-CMD13-polling-for-MMC-IOCTLS-wi.patch \
  "
# umpf-topic: v5.4/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: f0d0d22b2ab2a8dd7207c4121abc7988704ef0c3
# umpf-topic-range: f9375a597dca59b35c1f4740e0117d6dcf3ca737..df53d56d6c6e6c7bf47741af9c7548d502ddfdda
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  "
# umpf-topic: v5.4/topic/etnaviv
# umpf-hashinfo: deaa7fbd4154b7da17f342518de785407ab67338
# umpf-topic-range: df53d56d6c6e6c7bf47741af9c7548d502ddfdda..03b9a6825fa60f0bad05aa051b5a16c4ce15947d
SRC_URI += "\
  file://patches/0201-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0202-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0203-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0204-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0205-drm-etnaviv-request-pages-from-DMA32-zone-when-neede.patch \
  file://patches/0206-mm-cma-export-functions-to-get-CMA-base-and-size.patch \
  file://patches/0207-drm-etnaviv-use-CMA-area-to-compute-linear-window-of.patch \
  file://patches/0208-drm-etnaviv-fix-TS-cache-flushing-on-GPUs-with-BLT-e.patch \
  file://patches/0209-drm-etnaviv-rework-perfmon-query-infrastructure.patch \
  file://patches/0210-drm-etnaviv-Fix-typo-in-comment.patch \
  file://patches/0211-drm-etnaviv-Update-idle-bits.patch \
  file://patches/0212-drm-etnaviv-Consider-all-kwnown-idle-bits-in-debugfs.patch \
  file://patches/0213-drm-etnaviv-Ignore-MC-when-checking-runtime-suspend-.patch \
  file://patches/0214-drm-etnaviv-Warn-when-GPU-doesn-t-idle-fast-enough.patch \
  "
# umpf-topic: v5.4/topic/coda
# umpf-hashinfo: a3e90d97a5ab3f8bfb190a0df3df668004cc2e16
# umpf-topic-range: 03b9a6825fa60f0bad05aa051b5a16c4ce15947d..0a17da9f9a86a082d2bd4e76fdeee1d148ce943e
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
  file://patches/0339-media-coda-assert-bitstream-mutex-is-locked-in-coda_.patch \
  file://patches/0340-media-coda-avoid-hardware-lockups-with-more-than-13-.patch \
  file://patches/0341-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0342-Revert-media-coda-Replace-the-threaded-interrupt-wit.patch \
  file://patches/0343-media-coda-drop-unused-irqlock.patch \
  file://patches/0344-media-coda-thread-all-interrupts-other-than-pic-run-.patch \
  file://patches/0345-media-coda-disable-encoder-compose-selections.patch \
  file://patches/0346-media-coda-disable-decoder-crop-selections.patch \
  file://patches/0347-media-coda-split-marking-last-meta-into-helper-funct.patch \
  file://patches/0348-media-coda-mark-last-capture-buffer.patch \
  file://patches/0349-media-coda-lock-capture-queue-wakeup-against-decoder.patch \
  "
# umpf-topic: v5.4/topic/drm-sched
# umpf-hashinfo: 766eec81f78c8800663f8b6f0b07cb1fd770ea47
# umpf-topic-range: 0a17da9f9a86a082d2bd4e76fdeee1d148ce943e..4031c8a374895b4f929b615bebea59faa7bf1147
SRC_URI += "\
  file://patches/0401-drm-sched-don-t-try-to-construct-error-code-from-NUL.patch \
  file://patches/0402-drm-sched-remove-superfluous-whitespace-in-drm_sched.patch \
  file://patches/0403-drm-sched-Use-completion-to-wait-for-sched-thread-id.patch \
  file://patches/0404-drm-sched-Avoid-job-cleanup-if-sched-thread-is-parke.patch \
  file://patches/0405-drm-scheduler-fix-inconsistent-locking-of-job_list_l.patch \
  file://patches/0406-drm-sched-remove-useless-job-NULL-checks.patch \
  file://patches/0407-drm-sched-make-fence-ops-static.patch \
  file://patches/0408-drm-sched-add-run-job-trace.patch \
  "
# umpf-topic: v5.4/topic/drm-sched-accounting
# umpf-hashinfo: 7f614500c6d169d75e3f8bcf8cf51342c90f3a50
# umpf-topic-range: 4031c8a374895b4f929b615bebea59faa7bf1147..709093e4a6510d951fa8cdbeadf5deb3b1184527
SRC_URI += "\
  file://patches/0501-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0502-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v5.4/topic/ksz8873
# umpf-hashinfo: a90546af96415d6da2e67de450d9e12d46776be4
# umpf-topic-range: 709093e4a6510d951fa8cdbeadf5deb3b1184527..67e225019c7a8996a8f32261b5bd7d94856a7e3c
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
# umpf-topic: v5.4/topic/imx6-cpuidle
# umpf-hashinfo: 92d93abd47b004b4f38ee4d49cf17090e6fd7184
# umpf-topic-range: 67e225019c7a8996a8f32261b5bd7d94856a7e3c..b0fdabcdb7b2c374db3573ef1dfbac11d02c68b3
SRC_URI += "\
  file://patches/0701-ARM-imx-provide-v7_cpu_resume-only-on-ARM_CPU_SUSPEN.patch \
  "
# umpf-release: 5.4/customers/skov/imx6/20200331-1
# umpf-topic-range: b0fdabcdb7b2c374db3573ef1dfbac11d02c68b3..2693f73629cc866180a99aa25a5b99df7123c357
SRC_URI += "\
  file://patches/0801-Release-5.4-customers-skov-imx6-20200331-1.patch \
  "
# umpf-end
