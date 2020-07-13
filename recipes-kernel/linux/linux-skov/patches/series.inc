# umpf-base: v5.4.43
# umpf-name: 5.4/customers/skov/imx6
# umpf-version: 5.4/customers/skov/imx6/20200710-1
# umpf-topic: v5.4/customers/skov/imx6_project_specific
# umpf-hashinfo: fcf111f3dfbdfa0d31f184c966d37ce122f617ba
# umpf-topic-range: e0d81ce760044efd3f26004aa32821c34968512a..c6e9ce2e4b8607b7d7e906afaaacd0688d300084
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-imx6-cpu-add-SKOV-specific-touchtoy-driver.patch \
  file://patches/0004-Revert-mmc-block-Add-CMD13-polling-for-MMC-IOCTLS-wi.patch \
  "
# umpf-topic: v5.4/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: 4ee3fbe7035ccddd51524f1c94950a6d1f6b3bb8
# umpf-topic-range: c6e9ce2e4b8607b7d7e906afaaacd0688d300084..d5b35dcd283dd49f09513946ba44278d79701fdb
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  file://patches/0106-drm-panel-add-Multi-Innotechnology-MI1010AIT-1CP1.patch \
  "
# umpf-topic: v5.4/topic/etnaviv
# umpf-hashinfo: deaa7fbd4154b7da17f342518de785407ab67338
# umpf-topic-range: d5b35dcd283dd49f09513946ba44278d79701fdb..b0cbc159cc0abd9e93234338fbf95006b7319261
SRC_URI += "\
  file://patches/0201-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0202-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0203-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0204-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0205-drm-etnaviv-request-pages-from-DMA32-zone-when-neede.patch \
  file://patches/0206-mm-cma-export-functions-to-get-CMA-base-and-size.patch \
  file://patches/0207-drm-etnaviv-use-CMA-area-to-compute-linear-window-of.patch \
  file://patches/0208-drm-etnaviv-fix-TS-cache-flushing-on-GPUs-with-BLT-e.patch \
  file://patches/0209-drm-etnaviv-Fix-typo-in-comment.patch \
  file://patches/0210-drm-etnaviv-Update-idle-bits.patch \
  file://patches/0211-drm-etnaviv-Consider-all-kwnown-idle-bits-in-debugfs.patch \
  file://patches/0212-drm-etnaviv-Ignore-MC-when-checking-runtime-suspend-.patch \
  file://patches/0213-drm-etnaviv-Warn-when-GPU-doesn-t-idle-fast-enough.patch \
  "
# umpf-topic: v5.4/topic/coda
# umpf-hashinfo: a3e90d97a5ab3f8bfb190a0df3df668004cc2e16
# umpf-topic-range: b0cbc159cc0abd9e93234338fbf95006b7319261..458897e4fa2834a4397377ca83557600c0a75922
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
# umpf-topic-range: 458897e4fa2834a4397377ca83557600c0a75922..aee9bc658867427adccfcaed407ab2c8a751f9be
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
# umpf-topic-range: aee9bc658867427adccfcaed407ab2c8a751f9be..c319c33662d6a74804de0e59ea802016c057b4a3
SRC_URI += "\
  file://patches/0501-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0502-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v5.4/topic/ksz8873
# umpf-hashinfo: 91bc3d307f15edf467d3ef538352b656b345309f
# umpf-topic-range: c319c33662d6a74804de0e59ea802016c057b4a3..48b2921a704f47746fc94fd879288331977a5c89
SRC_URI += "\
  file://patches/0601-net-phy-Add-support-for-microchip-SMI0-MDIO-bus.patch \
  file://patches/0602-dt-bindings-net-mdio-gpio-add-compatible-for-microch.patch \
  file://patches/0603-net-tag-ksz-Add-KSZ8863-tag-code.patch \
  file://patches/0604-net-dsa-microchip-refactor-to-use-ksz8863-register-o.patch \
  file://patches/0605-net-dsa-microchip-Add-Microchip-KSZ8863-SMI-based-dr.patch \
  file://patches/0606-net-dsa-microchip-Add-Microchip-KSZ8863-SPI-based-dr.patch \
  file://patches/0607-dt-bindings-net-dsa-document-additional-Microchip-KS.patch \
  file://patches/0608-ksz9875-add-mutex-locking-to-vlan-handling.patch \
  file://patches/0609-net-dsa-tag-fix-tag-handling.patch \
  "
# umpf-topic: v5.4/topic/ksz8873_cabletest
# umpf-hashinfo: c5c608b49d4e3db0627cf5ef15529ebf6a604dd2
# umpf-topic-range: 48b2921a704f47746fc94fd879288331977a5c89..e09019cbc05d39699488f9360bbf0a75641202b3
SRC_URI += "\
  file://patches/0701-dsa-ksz-add-test_cnt-option-for-ethtool-test-options.patch \
  file://patches/0702-dsa-add-self_test-ethtool-function-handling.patch \
  file://patches/0703-ksz-add-self_test-support-for-Link-MD-detection-on-K.patch \
  "
# umpf-release: 5.4/customers/skov/imx6/20200710-1
# umpf-topic-range: e09019cbc05d39699488f9360bbf0a75641202b3..8881ee70d5440f737e0fe7f9f528e0037df4d30c
SRC_URI += "\
  file://patches/0801-Release-5.4-customers-skov-imx6-20200710-1.patch \
  "
# umpf-end
