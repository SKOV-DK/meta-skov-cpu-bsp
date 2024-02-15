# umpf-base: v2023.09.0
# umpf-name: 2023.09.0/customers/skov/imx6
# umpf-version: 2023.09.0/customers/skov/imx6/20240215-4
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
# umpf-hashinfo: bba4acf5c9be49d4f143739c78a4ef99b3ec529e
# umpf-topic-range: 29194a09ba2694a64209b23273df395610b48bfb..42547e0bb6c7ab50c7728ee4349220f7eec5d5d6
SRC_URI += "\
  file://patches/0101-arm-dts-imx8mp-skov-Add-reserved-memory-for-ramoops-.patch \
  file://patches/0102-arm-dts-imx8mp-skov-Add-pins-for-hardware-variant-de.patch \
  file://patches/0103-arm-dts-imx8mp-skov-Switch-to-GPT-for-eMMC-partition.patch \
  file://patches/0104-arm-dts-imx8mp-skov-Switch-to-GPT-for-SD-partitionin.patch \
  file://patches/0105-arm-dts-imx8mp-skov-Add-barebox-state-backend-in-DTS.patch \
  file://patches/0106-ARM-i.MX8MP-skov-refactor-bootsource-and-BBU-handler.patch \
  file://patches/0107-ARM-i.MX8MP-skov-Add-hardware-variant-support.patch \
  file://patches/0108-ARM-i.MX8MP-skov-fixup-skov-imx8mp-board-version-DT-.patch \
  file://patches/0109-WIP-net-lib-add-ether_addr_inc-helper.patch \
  file://patches/0110-WIP-ARM-i.MX8MP-skov-assign-Ethernet-addresses-to-al.patch \
  file://patches/0111-ARM-i.MX8MP-skov-fix-variant-detection-on-boards-wit.patch \
  file://patches/0112-ARM-i.MX8MP-skov-update-timing-parameters-for-Samsun.patch \
  "
# umpf-topic: v2023.09.0/customers/skov/arm9cpu
# umpf-hashinfo: 65e30c2f124bdd688deeae99a46e424a2b97508d
# umpf-topic-range: 42547e0bb6c7ab50c7728ee4349220f7eec5d5d6..f757c98ad5e3633e79a86a522a583eb55618fa23
SRC_URI += "\
  file://patches/0201-ARM-at91-add-SDRAMC-driver-for-memory-detection.patch \
  file://patches/0202-ARM-at91-at91sam9_rst-add-DT-support-for-at91sam9260.patch \
  file://patches/0203-ARM-at91-sam9260-don-t-build-non-DT-device-support-w.patch \
  file://patches/0204-mci-atmel_mci-disable-power-save-mode.patch \
  file://patches/0205-mci-atmel_mci-fix-zeroing-of-block-length-on-AT91SAM.patch \
  file://patches/0206-ARM-replace-ENTRY_FUNCTION_HEAD-with-ENTRY_FUNCTION_.patch \
  file://patches/0207-ARM-at91-use-AT91-header-instead-of-generic-barebox-.patch \
  file://patches/0208-ARM-at91-implement-SAM9_ENTRY_FUNCTION.patch \
  file://patches/0209-ARM-at91-sam9263_ll-drop-PLL-charge-pump-initializat.patch \
  file://patches/0210-ARM-at91-sam9263_ll-pass-AT91_PMC_LL_AT91SAM9263-to-.patch \
  file://patches/0211-ARM-at91-sam9263_ll-refactor-MCK-switch-to-PLLA-for-.patch \
  file://patches/0212-ARM-at91-sam9263_ll-support-configuration-of-PLLB.patch \
  file://patches/0213-ARM-dts-AT91-skov-arm9cpu-remove-barebox-environment.patch \
  file://patches/0214-ARM-at91-skov-arm9cpu-Add-SD-Card-xload-support.patch \
  file://patches/0215-ARM-at91-skov-arm9cpu-configure-SMC-for-NOR-flash-us.patch \
  file://patches/0216-ARM-at91-skov-arm9cpu-configure-more-appropriate-hos.patch \
  file://patches/0217-ARM-AT91-skov-arm9cpu-support-environment-on-SD-Card.patch \
  file://patches/0218-usb-ohci-at91-fix-possible-hang-chainloading-barebox.patch \
  file://patches/0219-HACK-ARM-at91-import-AT91Bootstrap-patch-pmc-fix-PLL.patch \
  "
# umpf-release: 2023.09.0/customers/skov/imx6/20240215-4
# umpf-topic-range: f757c98ad5e3633e79a86a522a583eb55618fa23..5a74f8df05c463fcb20a293f0c019e5bf58f585e
SRC_URI += "\
  file://patches/0301-Release-2023.09.0-customers-skov-imx6-20240215-4.patch \
  "
# umpf-end
