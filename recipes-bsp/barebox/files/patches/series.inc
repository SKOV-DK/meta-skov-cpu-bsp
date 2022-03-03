# umpf-base: v2021.11.0
# umpf-name: 2021.11.0/customers/skov/imx6
# umpf-version: 2021.11.0/customers/skov/imx6/20211208-1
# umpf-topic: v2021.11.0/customers/skov/imx6
# umpf-hashinfo: 25d3f6e36e5646a6166c7a8d86da9d9ea47e4751
# umpf-topic-range: e2c198488f5aa6dadebec88af1db8ae06127b98b..2546a389c928ed2fac24b3f747790d30c9c3a93c
SRC_URI += "\
  file://patches/0001-video-edid-increase-number-of-retries-to-request-EDI.patch \
  "
# umpf-release: 2021.11.0/customers/skov/imx6/20211208-1
# umpf-topic-range: 903c147add7d6b917fea6f643cdfa5f49761253d..6bfba7c1eaf8fd79c19de3679f224bd21c8f140e
SRC_URI += "\
  file://patches/0201-Release-2021.12.0-customers-skov-imx6-20220111-1.patch \
  "
# umpf-end
SRC_URI += "\
  file://patches/0002-remove-deep-probe.patch \
"
