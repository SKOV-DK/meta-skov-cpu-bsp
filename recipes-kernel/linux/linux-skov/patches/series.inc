# umpf-base: v5.4.96
# umpf-name: 5.4/customers/skov/imx6
# umpf-version: 5.4/customers/skov/imx6/20210210-1
# umpf-topic: v5.4/customers/skov/imx6_project_specific
# umpf-hashinfo: a1acb8fbf724f2d5b3cc247fc96448322c0b2b44
# umpf-topic-range: d4716ee8751bf8dabf5872ba008124a0979a5f94..a859d764c7b301f1029476fe4f7bca1ea93aa6f1
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-imx6-cpu-add-SKOV-specific-touchtoy-driver.patch \
  file://patches/0004-Revert-net-dsa-microchip-set-the-correct-number-of-p.patch \
  "
# umpf-topic: v5.4/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: b74bfc30846ca3aafe345fea9f7d5c315a810d22
# umpf-topic-range: a859d764c7b301f1029476fe4f7bca1ea93aa6f1..16d79f709e3de26cfb15aba1867f4d4080504a09
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-LOGIC-Technologies-panels.patch \
  file://patches/0102-panel-simple-add-LOGIC-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  file://patches/0106-drm-panel-add-Multi-Innotechnology-MI1010AIT-1CP1.patch \
  file://patches/0107-mtd-nand-fix-error-handling-in-nand_prog_page_op-1.patch \
  file://patches/0108-mtd-nand-fix-error-handling-in-nand_prog_page_op-2.patch \
  "
# umpf-topic: v5.4/topic/etnaviv
# umpf-hashinfo: 157879fb595cce466035e47f2f51e7da0a2f974b
# umpf-topic-range: 16d79f709e3de26cfb15aba1867f4d4080504a09..6ad2db4bea46e94544826e6581638ce9da51edac
SRC_URI += "\
  file://patches/0201-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0202-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0203-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0204-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0205-drm-etnaviv-request-pages-from-DMA32-zone-when-neede.patch \
  file://patches/0206-mm-cma-export-functions-to-get-CMA-base-and-size.patch \
  file://patches/0207-drm-etnaviv-use-CMA-area-to-compute-linear-window-of.patch \
  file://patches/0208-drm-etnaviv-Fix-typo-in-comment.patch \
  file://patches/0209-drm-etnaviv-Update-idle-bits.patch \
  file://patches/0210-drm-etnaviv-Consider-all-kwnown-idle-bits-in-debugfs.patch \
  file://patches/0211-drm-etnaviv-Ignore-MC-when-checking-runtime-suspend-.patch \
  file://patches/0212-drm-etnaviv-Warn-when-GPU-doesn-t-idle-fast-enough.patch \
  file://patches/0213-drm-etnaviv-rename-pipe_reg_read.patch \
  file://patches/0214-drm-etnaviv-call-perf_reg_read.patch \
  file://patches/0215-drm-etnaviv-add-total-hi-bandwidth-perfcounter.patch \
  file://patches/0216-drm-etnaviv-add-pipe_select-.-helper.patch \
  "
# umpf-topic: v5.4/topic/coda
# umpf-hashinfo: bf7a254d8b776db87aa4b5d796ebecb0fb9febe7
# umpf-topic-range: 6ad2db4bea46e94544826e6581638ce9da51edac..5fd0e7b158b537f7f89f5593583d9b8a5a16d5b5
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
  file://patches/0350-coda-Remove-redundant-ctx-initialized-setting.patch \
  file://patches/0351-coda-Simplify-H.264-small-buffer-padding-logic.patch \
  file://patches/0352-coda-Clarify-device-registered-log.patch \
  file://patches/0353-coda-Clarify-interrupt-registered-name.patch \
  file://patches/0354-coda-coda_buffer_meta-housekeeping-fix.patch \
  file://patches/0355-coda-Add-a-V4L2-user-for-control-error-macroblocks-c.patch \
  "
# umpf-topic: v5.4/topic/drm-sched
# umpf-hashinfo: 9cf1df9cbe345b71c085862075ae39a18723a6ca
# umpf-topic-range: 5fd0e7b158b537f7f89f5593583d9b8a5a16d5b5..b78c58b710b4ec214fab525868c8ceb4f8b8b4c4
SRC_URI += "\
  file://patches/0401-drm-sched-remove-superfluous-whitespace-in-drm_sched.patch \
  file://patches/0402-drm-sched-Use-completion-to-wait-for-sched-thread-id.patch \
  file://patches/0403-drm-sched-Avoid-job-cleanup-if-sched-thread-is-parke.patch \
  file://patches/0404-drm-scheduler-fix-inconsistent-locking-of-job_list_l.patch \
  file://patches/0405-drm-sched-remove-useless-job-NULL-checks.patch \
  file://patches/0406-drm-sched-make-fence-ops-static.patch \
  file://patches/0407-drm-sched-add-run-job-trace.patch \
  "
# umpf-topic: v5.4/topic/drm-sched-accounting
# umpf-hashinfo: 92957a8bfbbd7e2eb830fce8f6cb55d4738a2dd4
# umpf-topic-range: b78c58b710b4ec214fab525868c8ceb4f8b8b4c4..3e27c39be481c87c67a6b0782c69db96a8338fe8
SRC_URI += "\
  file://patches/0501-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0502-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v5.4/topic/ksz8873
# umpf-hashinfo: 1ad98b216b70a1bd40121c479726bea8b2a3fb64
# umpf-topic-range: 3e27c39be481c87c67a6b0782c69db96a8338fe8..ba2e7f377901cb3d0452809e08514be7e1f73e29
SRC_URI += "\
  file://patches/0601-net-phy-micrel-move-phy-reg-offsets-to-common-header.patch \
  file://patches/0602-net-dsa-microchip-ksz8795-remove-unused-last_port-va.patch \
  file://patches/0603-net-dsa-microchip-ksz8795-remove-superfluous-port_cn.patch \
  file://patches/0604-net-dsa-microchip-ksz8795-move-variable-assignments-.patch \
  file://patches/0605-net-dsa-microchip-ksz8795-use-reg_mib_cnt-where-poss.patch \
  file://patches/0606-net-dsa-microchip-ksz8795-use-mib_cnt-where-possible.patch \
  file://patches/0607-net-dsa-microchip-ksz8795-use-phy_port_cnt-where-pos.patch \
  file://patches/0608-net-dsa-microchip-remove-superfluous-num_ports-assig.patch \
  file://patches/0609-net-dsa-microchip-ksz8795-align-port_cnt-usage-with-.patch \
  file://patches/0610-net-dsa-microchip-remove-usage-of-mib_port_count.patch \
  file://patches/0611-net-dsa-microchip-ksz8795-use-port_cnt-instead-of-TO.patch \
  file://patches/0612-net-dsa-microchip-ksz8795-use-num_vlans-where-possib.patch \
  file://patches/0613-net-dsa-microchip-ksz8795-change-drivers-prefix-to-b.patch \
  file://patches/0614-net-dsa-microchip-ksz8795-move-cpu_select_interface-.patch \
  file://patches/0615-net-dsa-microchip-ksz8795-move-register-offsets-and-.patch \
  file://patches/0616-net-tag-ksz-Add-KSZ8863-tag-code.patch \
  file://patches/0617-net-dsa-microchip-ksz8795-add-support-for-ksz88xx-ch.patch \
  file://patches/0618-net-dsa-microchip-Add-Microchip-KSZ8863-SPI-based-dr.patch \
  file://patches/0619-dt-bindings-net-dsa-document-additional-Microchip-KS.patch \
  file://patches/0620-net-phy-Add-support-for-microchip-SMI0-MDIO-bus.patch \
  file://patches/0621-dt-bindings-net-mdio-gpio-add-compatible-for-microch.patch \
  file://patches/0622-net-dsa-microchip-Add-Microchip-KSZ8863-SMI-based-dr.patch \
  file://patches/0623-net-dsa-microchip-ksz8795-add-phylink-support.patch \
  file://patches/0624-net-dsa-register-dsa-mdio-via-of-if-compatible-is-se.patch \
  file://patches/0625-net-dsa-microchip-ksz8795-return-values-of-regmap_up.patch \
  file://patches/0626-net-dsa-microchip-ksz8795-add-interrupt-support.patch \
  file://patches/0627-net-phy-micrel-add-dummy-interrupt-functions-which-a.patch \
  file://patches/0628-net-dsa-microchip-add-mutex-locking-to-vlan-handling.patch \
  file://patches/0629-net-dsa-microchip-ksz_common-fix-slave-usage-if-port.patch \
  "
# umpf-topic: v5.4/topic/ksz8873_cabletest
# umpf-hashinfo: 07cb38fd562b59ae5680fb8a5476ad3079012633
# umpf-topic-range: ba2e7f377901cb3d0452809e08514be7e1f73e29..61d75ee812c716fbab0e729a7f43678db2c040be
SRC_URI += "\
  file://patches/0701-dsa-ksz-add-test_cnt-option-for-ethtool-test-options.patch \
  file://patches/0702-dsa-add-self_test-ethtool-function-handling.patch \
  file://patches/0703-ksz-add-self_test-support-for-Link-MD-detection-on-K.patch \
  "
# umpf-release: 5.4/customers/skov/imx6/20210210-1
# umpf-topic-range: 61d75ee812c716fbab0e729a7f43678db2c040be..a8799f9a3614993fe30d886408f33bdcde2bb453
SRC_URI += "\
  file://patches/0801-Release-5.4-customers-skov-imx6-20210210-1.patch \
  "
# umpf-end
