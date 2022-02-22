# umpf-base: v2022.02.0
# umpf-name: 2022.02.0/customers/skov/imx6
# umpf-version: 2022.02.0/customers/skov/imx6/20220222-1
# umpf-topic: v2022.02.0/customers/skov/imx6
# umpf-hashinfo: 3d6dd53f7afff4f38ee7391e3564b3d5bcb287ab
# umpf-topic-range: 179eeaeb5ed73d2b49b1494b5e058009b5fb9a0d..d347a7ef00872b88bc0356c34d94b046202dd4ca
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  file://patches/0002-Revert-ARM-boards-skov-imx6-start-using-deep-probe.patch \
  "
# umpf-topic: v2022.02.0/customers/skov/imx8eval
# umpf-hashinfo: 2c0e6d0b9b4adf11edbfe575289c7c022701e3df
# umpf-topic-range: d347a7ef00872b88bc0356c34d94b046202dd4ca..ca69983ffea51e79ad378ab7b93ce5bec2ac4450
SRC_URI += "\
  file://patches/0101-ARM-imx-add-state-backend-for-i.MX8MP.patch \
  "
# umpf-release: 2022.02.0/customers/skov/imx6/20220222-1
# umpf-topic-range: ca69983ffea51e79ad378ab7b93ce5bec2ac4450..c22d054555eca99229f9ee935888543dd7c0d2da
SRC_URI += "\
  file://patches/0201-Release-2022.02.0-customers-skov-imx6-20220222-1.patch \
  "
# umpf-end
