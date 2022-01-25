# umpf-base: v5.10.83
# umpf-name: 5.10/customers/skov/imx6
# umpf-version: 5.10/customers/skov/imx6/20211206-1
# umpf-topic: v5.10/customers/skov/imx6_project_specific
# umpf-hashinfo: df5e77a99f99373b83eea661ef5e4857de7d0e65
# umpf-topic-range: a324ad794566ae2ad2d5aa7f7e3c1825fb5cd5b7..7f096c009652f24695a4e79c3447726637be89c0
SRC_URI += "\
  file://patches/0001-imx6-cpu-add-device-tree-files.patch \
  file://patches/0002-imx6-cpu-add-SKOV-specific-skov_version-driver.patch \
  file://patches/0003-imx6-cpu-add-SKOV-specific-touchtoy-driver.patch \
  "
# umpf-topic: v5.10/customers/skov/imx6_suitable_for_upstream
# umpf-hashinfo: b29b9c7ab43c0570eede2457a77a5e8a67ee6b79
# umpf-topic-range: 7f096c009652f24695a4e79c3447726637be89c0..6f8f944562418e90c33760d1bf1a0f44c7a5b13e
SRC_URI += "\
  file://patches/0101-dt-bindings-panel-add-bindings-for-Logic-Technologie.patch \
  file://patches/0102-drm-panel-add-Logic-Technologies-panels.patch \
  file://patches/0103-dt-binding-panel-add-Seiko-70WVW2T-7-panel.patch \
  file://patches/0104-dt-bindings-panel-rename-seiko-43wvf1g-to-match-comp.patch \
  file://patches/0105-drm-panel-add-Seiko-70WVW2T-7-simple-panel.patch \
  file://patches/0106-drm-panel-add-Multi-Innotechnology-MI1010AIT-1CP1.patch \
  file://patches/0107-mtd-nand-fix-error-handling-in-nand_prog_page_op-1.patch \
  file://patches/0108-mtd-nand-fix-error-handling-in-nand_prog_page_op-2.patch \
  "
# umpf-topic: v5.10/topic/etnaviv
# umpf-hashinfo: e5198246f6333894dc30a01f09a9aa6bcc98bf7e
# umpf-topic-range: 6f8f944562418e90c33760d1bf1a0f44c7a5b13e..f7fddfdc5bca48b5b66e4d56eb3114a7a2d22410
SRC_URI += "\
  file://patches/0201-drm-split-out-buffer-lookup-from-fake-VMA-offset.patch \
  file://patches/0202-drm-etnaviv-properly-implement-mmaping-of-imported-b.patch \
  file://patches/0203-drm-etnaviv-avoid-false-sharing-of-fence-spinlock.patch \
  file://patches/0204-drm-etnaviv-avoid-false-sharing-on-fence-lock.patch \
  file://patches/0205-drm-etnaviv-rework-linear-window-offset-calculation.patch \
  "
# umpf-topic: v5.10/topic/coda
# umpf-hashinfo: 031b55f6159ebafe99b221bbc3fbcfdccb2a82f6
# umpf-topic-range: f7fddfdc5bca48b5b66e4d56eb3114a7a2d22410..a4526c6778230db32e9e473b8ba3d5f5cdfce542
SRC_URI += "\
  file://patches/0301-media-coda-use-semicolons-rather-than-commas-to-sepa.patch \
  file://patches/0302-media-coda-Remove-redundant-ctx-initialized-setting.patch \
  file://patches/0303-media-coda-Simplify-H.264-small-buffer-padding-logic.patch \
  file://patches/0304-media-coda-Clarify-device-registered-log.patch \
  file://patches/0305-media-coda-Clarify-interrupt-registered-name.patch \
  file://patches/0306-media-coda-coda_buffer_meta-housekeeping-fix.patch \
  file://patches/0307-media-coda-Add-a-V4L2-user-for-control-error-macrobl.patch \
  file://patches/0308-media-coda-jpeg-add-debug-information-in-case-of-COD.patch \
  file://patches/0309-media-coda-jpeg-read-back-thumbnail-indication-and-J.patch \
  file://patches/0310-media-coda-jpeg-check-for-SOI-EOI-again-in-prepare_d.patch \
  file://patches/0311-media-coda-increase-prefetch-limit-to-768-bytes-on-C.patch \
  file://patches/0312-media-coda-create-bitstream-debugfs-entry.patch \
  file://patches/0313-media-coda-improve-DEC_PIC_SUCCESS-reporting.patch \
  file://patches/0314-media-coda-print-number-of-queued-buffers-in-start-s.patch \
  file://patches/0315-media-coda-limit-frame-interval-enumeration-to-suppo.patch \
  file://patches/0316-media-dt-bindings-coda-fsl-imx6dl-vpu.patch \
  file://patches/0317-media-coda-add-timestamp-to-coda_bit_queue-trace-eve.patch \
  file://patches/0318-media-coda-add-coda_not_ready-trace-event.patch \
  file://patches/0319-media-coda-add-physical-address-to-coda-buffer-trace.patch \
  file://patches/0320-media-coda-modify-cache-configuration-to-fix-chroma-.patch \
  file://patches/0321-media-coda-add-cache-bypass-module-parameters.patch \
  file://patches/0322-media-coda-make-cache-pagemerge-configuration-config.patch \
  file://patches/0323-media-coda-make-timeout-configurable.patch \
  file://patches/0324-media-HACK-coda-use-writecombine-instead-of-noncache.patch \
  file://patches/0325-media-add-v4l2-stats-to-collect-simple-time-based-ac.patch \
  file://patches/0326-media-coda-track-activity-using-v4l2-stats.patch \
  file://patches/0327-media-coda-add-BIT-register-dump-after-PIC_RUN-timeo.patch \
  file://patches/0328-HACK-media-coda-page-align-decoded-buffers-on-CodaHx.patch \
  file://patches/0329-media-coda-allow-to-dump-metas-to-the-log-and-bitstr.patch \
  file://patches/0330-media-coda-add-regmap-support.patch \
  file://patches/0331-media-coda-enable-all-interrupts-for-debugging.patch \
  file://patches/0332-media-coda-MPEG-2-end-of-stream-handling.patch \
  file://patches/0333-media-coda-explicit-decoder-state-transitions.patch \
  file://patches/0334-media-coda-fill-up-bitstream-ring-buffer-on-decoder-.patch \
  file://patches/0335-media-coda-pad-bitstream-to-release-coda-from-ring-b.patch \
  file://patches/0336-media-coda-let-decoder-command-return-busy-error-dur.patch \
  file://patches/0337-media-coda-set-output-buffer-bytesused-to-appease-v4.patch \
  file://patches/0338-media-coda-assert-bitstream-mutex-is-locked-in-coda_.patch \
  file://patches/0339-media-coda-parse-and-replay-H.264-headers.patch \
  file://patches/0340-media-coda-thread-all-interrupts-other-than-pic-run-.patch \
  file://patches/0341-media-coda-enable-h.264-encoder-levels-1-and-4.2.patch \
  file://patches/0342-media-coda-Fix-reported-H264-profile.patch \
  "
# umpf-topic: v5.10/topic/drm-sched-accounting
# umpf-hashinfo: ee32d16fde4648bc0374b2797998228438493229
# umpf-topic-range: a4526c6778230db32e9e473b8ba3d5f5cdfce542..4260940e61e31cd143af82ae6bb8c7df5adf61db
SRC_URI += "\
  file://patches/0401-drm-sched-add-sysfs-stats-output.patch \
  file://patches/0402-drm-sched-track-execution-time-per-scheduler.patch \
  "
# umpf-topic: v5.10/topic/ksz8873
# umpf-hashinfo: 9f6d83418fd0db14e338a16acbc8feea16bcee6a
# umpf-topic-range: 4260940e61e31cd143af82ae6bb8c7df5adf61db..0acf247c0e652b687b58879f4028171fd7d1055b
SRC_URI += "\
  file://patches/0501-net-dsa-microchip-ksz8795-remove-unused-last_port-va.patch \
  file://patches/0502-net-dsa-microchip-ksz8795-remove-superfluous-port_cn.patch \
  file://patches/0503-net-dsa-microchip-ksz8795-move-variable-assignments-.patch \
  file://patches/0504-net-dsa-microchip-ksz8795-use-reg_mib_cnt-where-poss.patch \
  file://patches/0505-net-dsa-microchip-ksz8795-use-mib_cnt-where-possible.patch \
  file://patches/0506-net-dsa-microchip-ksz8795-use-phy_port_cnt-where-pos.patch \
  file://patches/0507-net-dsa-microchip-remove-superfluous-num_ports-assig.patch \
  file://patches/0508-net-dsa-microchip-ksz8795-align-port_cnt-usage-with-.patch \
  file://patches/0509-net-dsa-microchip-remove-usage-of-mib_port_count.patch \
  file://patches/0510-net-dsa-microchip-ksz8795-use-port_cnt-instead-of-TO.patch \
  file://patches/0511-net-dsa-microchip-ksz8795-use-num_vlans-where-possib.patch \
  file://patches/0512-net-dsa-microchip-ksz8795-change-drivers-prefix-to-b.patch \
  file://patches/0513-net-dsa-microchip-ksz8795-move-cpu_select_interface-.patch \
  file://patches/0514-net-dsa-microchip-ksz8795-move-register-offsets-and-.patch \
  file://patches/0515-net-dsa-microchip-ksz8795-add-support-for-ksz88xx-ch.patch \
  file://patches/0516-net-phy-micrel-move-phy-reg-offsets-to-common-header.patch \
  file://patches/0517-net-dsa-microchip-ksz8795-add-phylink-support.patch \
  file://patches/0518-net-dsa-microchip-ksz8795-return-values-of-regmap_up.patch \
  file://patches/0519-net-dsa-microchip-ksz8795-add-interrupt-support.patch \
  file://patches/0520-dt-bindings-net-dsa-convert-ksz-bindings-document-to.patch \
  file://patches/0521-dt-bindings-net-dsa-document-additional-Microchip-KS.patch \
  file://patches/0522-net-phy-Add-support-for-microchip-SMI0-MDIO-bus.patch \
  file://patches/0523-net-dsa-microchip-Add-Microchip-KSZ8863-SPI-based-dr.patch \
  file://patches/0524-net-dsa-microchip-Add-Microchip-KSZ8863-SMI-based-dr.patch \
  file://patches/0525-dt-bindings-net-mdio-gpio-add-compatible-for-microch.patch \
  file://patches/0526-net-dsa-register-dsa-mdio-via-of-if-compatible-is-se.patch \
  file://patches/0527-net-phy-micrel-add-dummy-interrupt-functions-which-a.patch \
  file://patches/0528-net-phy-micrel-use-consistent-indention-after-define.patch \
  file://patches/0529-net-phy-micrel-apply-resume-errata-workaround-for-ks.patch \
  file://patches/0530-net-phy-micrel-ksz886x-add-MDI-X-support.patch \
  file://patches/0531-net-phy-micrel-implement-generic-.handle_interrupt-c.patch \
  file://patches/0532-net-phy-micrel-remove-the-use-of-.ack_interrupt.patch \
  file://patches/0533-net-phy-micrel-fix-interrupt-handling.patch \
  file://patches/0534-net-phy-micrel-ksz8081-add-MDI-X-support.patch \
  file://patches/0535-net-phy-micrel-ksz886x-ksz8081-add-cabletest-support.patch \
  file://patches/0536-m-drivers-net-dsa-microchip-ksz8795.c.patch \
  file://patches/0537-m-drivers-net-dsa-microchip-ksz8795_reg.h.patch \
  file://patches/0538-net-phy-micrel-add-patch-for-erratas-on-port1.patch \
  file://patches/0539-net-phylink-make-calling-functions-more-robust.patch \
  file://patches/0540-net-dsa-microchip-add-mutex-locking-to-vlan-handling.patch \
  file://patches/0541-net-dsa-microchip-ksz_common-fix-slave-usage-if-port.patch \
  file://patches/0542-net-phy-export-phy_error-and-phy_trigger_machine.patch \
  file://patches/0543-net-dsa-microchip-implement-multi-bridge-support.patch \
  "
# umpf-topic: v5.10/topic/fec-selftest
# umpf-hashinfo: 0cea5c78d5adf067e63dd8d9529cd0a80f71a4f6
# umpf-topic-range: 0acf247c0e652b687b58879f4028171fd7d1055b..d288f3bf4e00fc86a6fc537ff3e546e178e9dc6e
SRC_URI += "\
  file://patches/0601-net-phy-micrel-KSZ8081-add-loopback-support.patch \
  file://patches/0602-net-phy-at803x-AR8085-add-loopback-support.patch \
  file://patches/0603-net-fec-add-basic-selftest-support.patch \
  "
# umpf-release: 5.10/customers/skov/imx6/20211206-1
# umpf-topic-range: d288f3bf4e00fc86a6fc537ff3e546e178e9dc6e..a95e427d65b9dbab8afc4b8ef95e36dcd3730a00
SRC_URI += "\
  file://patches/0701-Release-5.10-customers-skov-imx6-20211206-1.patch \
  "
# umpf-end
#Marc Kleine-Budde Patch for watchdog BUG soft lockup, mailing subject
SRC_URI += "\
  file://patches/9900-HACK-watchdog-trigger-sysrq-in-case-of-soft-lockup.patch \
"
