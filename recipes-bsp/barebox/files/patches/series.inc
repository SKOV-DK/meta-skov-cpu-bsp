# umpf-base: v2023.09.0
# umpf-name: 2023.09.0/customers/skov/imx6
# umpf-version: 2023.09.0/customers/skov/imx6/20240422-2
# umpf-topic: v2023.09.0/customers/skov/imx6
# umpf-hashinfo: d8e4faeec3b9abcebe8fe9dfada65e7d0faf6c8b
# umpf-topic-range: ce40a01f804a50433ace02c43cbc6c24dfe4d458..29194a09ba2694a64209b23273df395610b48bfb
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-ARM-i.MX6-MMDC-Add-register-offset-comments-to-struc.patch \
  file://patches/0003-ARM-skov-imx6-Remove-unused-board-variants.patch \
  file://patches/0004-video-edid-print-debug-message-on-EDID-read-out-erro.patch \
  file://patches/0005-ARM-dts-skov-imx6-switch-barebox-environment-from-MB.patch \
  "
# umpf-topic: v2023.09.0/topic/imx8mp-nominal
# umpf-hashinfo: e335b82e387b151a63a8b267a8a4b364499b3444
# umpf-topic-range: 29194a09ba2694a64209b23273df395610b48bfb..5967ec0ad43503cda23798e40c2a42a8e5694c84
SRC_URI += "\
  file://patches/0101-clk-imx-add-IMX_COMPOSITE_CLK_FLAGS_DEFAULT-macro.patch \
  file://patches/0102-clk-imx-composite-8m-fix-muxing-of-core-and-bus-cloc.patch \
  file://patches/0103-clk-imx-imx8mp-sync-with-Linux-v6.9-rc3.patch \
  file://patches/0104-ARM-i.MX8M-pass-cpu_type-parameter-to-__imx8m_early_.patch \
  file://patches/0105-ARM-i.MX8MP-configure-PLL3-as-600MHz.patch \
  file://patches/0106-ARM-i.MX8MP-configure-PLL3-as-noc_io-parent.patch \
  file://patches/0107-ARM-i.MX8MP-don-t-reparent-GIC-from-BootROM-default.patch \
  file://patches/0108-ARM-dts-i.MX8MP-Add-optional-nominal-drive-mode-DTSI.patch \
  "
# umpf-topic: v2023.09.0/topic/skov-imx8mp
# umpf-hashinfo: d0feffd2d2a29ea53c4c6341f5f3a730ba627cba
# umpf-topic-range: 5967ec0ad43503cda23798e40c2a42a8e5694c84..3d97bcef3dac0d8d8f296dac6cf0486f36cf6dc3
SRC_URI += "\
  file://patches/0201-arm-dts-imx8mp-skov-Add-reserved-memory-for-ramoops-.patch \
  file://patches/0202-arm-dts-imx8mp-skov-Add-pins-for-hardware-variant-de.patch \
  file://patches/0203-arm-dts-imx8mp-skov-Switch-to-GPT-for-eMMC-partition.patch \
  file://patches/0204-arm-dts-imx8mp-skov-Switch-to-GPT-for-SD-partitionin.patch \
  file://patches/0205-arm-dts-imx8mp-skov-Add-barebox-state-backend-in-DTS.patch \
  file://patches/0206-ARM-i.MX8MP-skov-refactor-bootsource-and-BBU-handler.patch \
  file://patches/0207-ARM-i.MX8MP-skov-Add-hardware-variant-support.patch \
  file://patches/0208-ARM-i.MX8MP-skov-fixup-skov-imx8mp-board-version-DT-.patch \
  file://patches/0209-ARM-i.MX8MP-skov-fix-variant-detection-on-boards-wit.patch \
  file://patches/0210-ARM-i.MX8MP-skov-update-timing-parameters-for-Samsun.patch \
  file://patches/0211-ARM-i.MX8MP-skov-add-MAC-address-assignment-support.patch \
  file://patches/0212-ARM-i.MX8MP-skov-add-fallback-for-unsupported-HW.patch \
  file://patches/0213-ARM-i.MX8MP-skov-add-new-bd500-variant-support.patch \
  file://patches/0214-ARM-i.MX8MP-skov-decrease-VDD_SOC-to-850mV.patch \
  "
# umpf-topic: v2023.09.0/topic/clk_dump
# umpf-hashinfo: 539db3a54e03f61fcaf845384d848a7cff5930b3
# umpf-topic-range: 3d97bcef3dac0d8d8f296dac6cf0486f36cf6dc3..323cba59b33e44d364653e231b8bbec981134454
SRC_URI += "\
  file://patches/0301-clk-add-flags-parameter-to-clk_dump-_one.patch \
  file://patches/0302-commands-clk_dump-add-json-output-option.patch \
  "
# umpf-topic: v2023.09.0/customers/skov/arm9cpu
# umpf-hashinfo: f792e18786446c0eaf2384e83c367f4f4acc2ec6
# umpf-topic-range: 323cba59b33e44d364653e231b8bbec981134454..e8bec4b0dc29a706560121653c97c2f80632e126
SRC_URI += "\
  file://patches/0401-ARM-at91-add-SDRAMC-driver-for-memory-detection.patch \
  file://patches/0402-ARM-at91-at91sam9_rst-add-DT-support-for-at91sam9260.patch \
  file://patches/0403-ARM-at91-sam9260-don-t-build-non-DT-device-support-w.patch \
  file://patches/0404-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0405-mci-atmel_mci-disable-power-save-mode.patch \
  file://patches/0406-mci-atmel_mci-fix-zeroing-of-block-length-on-AT91SAM.patch \
  file://patches/0407-ARM-replace-ENTRY_FUNCTION_HEAD-with-ENTRY_FUNCTION_.patch \
  file://patches/0408-ARM-at91-use-AT91-header-instead-of-generic-barebox-.patch \
  file://patches/0409-ARM-at91-implement-SAM9_ENTRY_FUNCTION.patch \
  file://patches/0410-ARM-at91-sam9263_ll-drop-PLL-charge-pump-initializat.patch \
  file://patches/0411-ARM-at91-sam9263_ll-pass-AT91_PMC_LL_AT91SAM9263-to-.patch \
  file://patches/0412-ARM-at91-sam9263_ll-refactor-MCK-switch-to-PLLA-for-.patch \
  file://patches/0413-ARM-at91-sam9263_ll-support-configuration-of-PLLB.patch \
  file://patches/0414-ARM-dts-AT91-skov-arm9cpu-remove-barebox-environment.patch \
  file://patches/0415-ARM-at91-skov-arm9cpu-Add-SD-Card-xload-support.patch \
  file://patches/0416-ARM-at91-skov-arm9cpu-configure-SMC-for-NOR-flash-us.patch \
  file://patches/0417-ARM-at91-skov-arm9cpu-configure-more-appropriate-hos.patch \
  file://patches/0418-ARM-AT91-skov-arm9cpu-support-environment-on-SD-Card.patch \
  file://patches/0419-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-release: 2023.09.0/customers/skov/imx6/20240422-2
# umpf-topic-range: e8bec4b0dc29a706560121653c97c2f80632e126..c107b2ec2330c38a987f19ba7841107cc67b08d0
SRC_URI += "\
  file://patches/0501-Release-2023.09.0-customers-skov-imx6-20240422-2.patch \
  "
# umpf-end
