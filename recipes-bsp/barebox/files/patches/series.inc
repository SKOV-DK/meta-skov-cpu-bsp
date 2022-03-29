# umpf-base: v2022.02.0
# umpf-name: 2022.02.0/customers/skov/imx6
# umpf-version: 2022.02.0/customers/skov/imx6/20220329-1
# umpf-topic: v2022.02.0/topic/of-deep-probe
# umpf-hashinfo: 92d6c3941d0deb49bf026b105e5b21166a192333
# umpf-topic-range: 179eeaeb5ed73d2b49b1494b5e058009b5fb9a0d..4802ddad754b4f00a35d35263c5dcde2e133db0f
SRC_URI += "\
  file://patches/0001-of-platform-return-early-when-deep-probe-is-not-supp.patch \
  file://patches/0002-of-rename-of_find_node_by_name-to-of_find_node_by_na.patch \
  file://patches/0003-of-Add-of_find_node_by_name-with-Linux-semantics.patch \
  file://patches/0004-of-platform-Change-of_devices_ensure_probed_by_prope.patch \
  file://patches/0005-of-platform-Ensure-timers-are-probed-early.patch \
  "
# umpf-topic: v2022.02.0/topic/imx6-clk
# umpf-hashinfo: 0597a7e962fc5a636f6b593e890a59ebd7383977
# umpf-topic-range: 4802ddad754b4f00a35d35263c5dcde2e133db0f..5f8998e068a07bfaed6016ff73fc2fa8e16c2353
SRC_URI += "\
  file://patches/0101-clk-imx6-Add-hdmi_isfr-clk.patch \
  file://patches/0102-clk-imx6-fix-axi_sels.patch \
  file://patches/0103-clk-imx6-Fix-periph_clk2_sel-and-periph2_clk2_sel-cl.patch \
  file://patches/0104-clk-imx6-emi_sel-clock-muxing.patch \
  file://patches/0105-clk-imx6-fix-cko1_sels.patch \
  file://patches/0106-clk-imx6-do-pfd-workaround-unconditionally.patch \
  file://patches/0107-ARM-i.MX-Remove-duplicate-PFD-workaround.patch \
  "
# umpf-topic: v2022.02.0/customers/skov/imx6
# umpf-hashinfo: 3d6dd53f7afff4f38ee7391e3564b3d5bcb287ab
# umpf-topic-range: 5f8998e068a07bfaed6016ff73fc2fa8e16c2353..ea0d0d0a9069f4ab16f930dccd3704b14abc1e29
SRC_URI += "\
  file://patches/0201-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0202-Revert-ARM-boards-skov-imx6-start-using-deep-probe.patch \
  "
# umpf-topic: v2022.02.0/customers/skov/imx8eval
# umpf-hashinfo: 2c0e6d0b9b4adf11edbfe575289c7c022701e3df
# umpf-topic-range: ea0d0d0a9069f4ab16f930dccd3704b14abc1e29..957524584f52ffea3241e1442fb9a09b7355693e
SRC_URI += "\
  file://patches/0301-ARM-imx-add-state-backend-for-i.MX8MP.patch \
  "
# umpf-topic: v2022.02.0/topic/reboot-mode
# umpf-hashinfo: 34c9c1c048cdb2c537713ea045d8169c09a276f0
# umpf-topic-range: 957524584f52ffea3241e1442fb9a09b7355693e..3afed5262d453be9f35fd00fe72cf569b640d9c9
SRC_URI += "\
  file://patches/0401-power-reset-reboot-mode-Fix-resetting-to-normal-mode.patch \
  "
# umpf-release: 2022.02.0/customers/skov/imx6/20220329-1
# umpf-topic-range: 3afed5262d453be9f35fd00fe72cf569b640d9c9..f9b4efc8346a21299212468baa368d332e8faf0e
SRC_URI += "\
  file://patches/0501-Release-2022.02.0-customers-skov-imx6-20220329-1.patch \
  "
# umpf-end
