# umpf-base: v2023.09.0
# umpf-name: 2023.09.0/customers/skov/imx6
# umpf-version: 2023.09.0/customers/skov/imx6/20240314-1
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
# umpf-topic: v2023.09.0/topic/skov-imx8mp
# umpf-hashinfo: e27bfd4de51e371734b10d9070ce1901d1008f42
# umpf-topic-range: 29194a09ba2694a64209b23273df395610b48bfb..321336ea0900ec370f0647a0048280a075cbf4ea
SRC_URI += "\
  file://patches/0101-arm-dts-imx8mp-skov-Add-reserved-memory-for-ramoops-.patch \
  file://patches/0102-arm-dts-imx8mp-skov-Add-pins-for-hardware-variant-de.patch \
  file://patches/0103-arm-dts-imx8mp-skov-Switch-to-GPT-for-eMMC-partition.patch \
  file://patches/0104-arm-dts-imx8mp-skov-Switch-to-GPT-for-SD-partitionin.patch \
  file://patches/0105-arm-dts-imx8mp-skov-Add-barebox-state-backend-in-DTS.patch \
  file://patches/0106-ARM-i.MX8MP-skov-refactor-bootsource-and-BBU-handler.patch \
  file://patches/0107-ARM-i.MX8MP-skov-Add-hardware-variant-support.patch \
  file://patches/0108-ARM-i.MX8MP-skov-fixup-skov-imx8mp-board-version-DT-.patch \
  file://patches/0109-ARM-i.MX8MP-skov-fix-variant-detection-on-boards-wit.patch \
  file://patches/0110-ARM-i.MX8MP-skov-update-timing-parameters-for-Samsun.patch \
  file://patches/0111-ARM-i.MX8MP-skov-add-MAC-address-assignment-support.patch \
  file://patches/0112-ARM-i.MX8MP-skov-add-fallback-for-unsupported-HW.patch \
  file://patches/0113-ARM-i.MX8MP-skov-add-new-bd500-variant-support.patch \
  "
# umpf-topic: v2023.09.0/customers/skov/arm9cpu
# umpf-hashinfo: f792e18786446c0eaf2384e83c367f4f4acc2ec6
# umpf-topic-range: 321336ea0900ec370f0647a0048280a075cbf4ea..4d00fa00e1f842a305eee1b5ca1749fa5c867280
SRC_URI += "\
  file://patches/0201-ARM-at91-add-SDRAMC-driver-for-memory-detection.patch \
  file://patches/0202-ARM-at91-at91sam9_rst-add-DT-support-for-at91sam9260.patch \
  file://patches/0203-ARM-at91-sam9260-don-t-build-non-DT-device-support-w.patch \
  file://patches/0204-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0205-mci-atmel_mci-disable-power-save-mode.patch \
  file://patches/0206-mci-atmel_mci-fix-zeroing-of-block-length-on-AT91SAM.patch \
  file://patches/0207-ARM-replace-ENTRY_FUNCTION_HEAD-with-ENTRY_FUNCTION_.patch \
  file://patches/0208-ARM-at91-use-AT91-header-instead-of-generic-barebox-.patch \
  file://patches/0209-ARM-at91-implement-SAM9_ENTRY_FUNCTION.patch \
  file://patches/0210-ARM-at91-sam9263_ll-drop-PLL-charge-pump-initializat.patch \
  file://patches/0211-ARM-at91-sam9263_ll-pass-AT91_PMC_LL_AT91SAM9263-to-.patch \
  file://patches/0212-ARM-at91-sam9263_ll-refactor-MCK-switch-to-PLLA-for-.patch \
  file://patches/0213-ARM-at91-sam9263_ll-support-configuration-of-PLLB.patch \
  file://patches/0214-ARM-dts-AT91-skov-arm9cpu-remove-barebox-environment.patch \
  file://patches/0215-ARM-at91-skov-arm9cpu-Add-SD-Card-xload-support.patch \
  file://patches/0216-ARM-at91-skov-arm9cpu-configure-SMC-for-NOR-flash-us.patch \
  file://patches/0217-ARM-at91-skov-arm9cpu-configure-more-appropriate-hos.patch \
  file://patches/0218-ARM-AT91-skov-arm9cpu-support-environment-on-SD-Card.patch \
  file://patches/0219-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-release: 2023.09.0/customers/skov/imx6/20240314-1
# umpf-topic-range: 4d00fa00e1f842a305eee1b5ca1749fa5c867280..1e9f097ec427e38ea78d8bdef167e4c68afa1d3f
SRC_URI += "\
  file://patches/0301-Release-2023.09.0-customers-skov-imx6-20240314-1.patch \
  "
# umpf-end
