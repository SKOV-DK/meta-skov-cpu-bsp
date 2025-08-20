# umpf-base: 4.6.0
# umpf-name: v4.6/customers/skov/imx6
# umpf-version: v4.6/customers/skov/imx6/20250820-1
# umpf-topic: 4.6.0/topic/imx-generic-boards
# umpf-hashinfo: d079c76f4b39a6e2bddefa9af7cdafabcfff4147
# umpf-topic-range: 71785645fa6ce42db40dbf5a54e0eaedc4f61591..0c68f36213819672583a07826d2874d101ff7343
UMPF_SRC_URI += "\
  file://patches/0001-core-imx-add-generic-boards.patch \
  "
# umpf-topic: 4.6.0/topic/caam
# umpf-hashinfo: 291b3b3a384d5caa18d3750124bb86208ae27e37
# umpf-topic-range: 0c68f36213819672583a07826d2874d101ff7343..7f83979ad798d3748c4546d6f6796c14676a9332
UMPF_SRC_URI += "\
  file://patches/0101-drivers-caam-fix-AES-GCM-conditional-compile.patch \
  file://patches/0102-drivers-caam-split-nsjobring-release-into-boot_final.patch \
  "
# umpf-topic: 4.6.0/topic/tzasc
# umpf-hashinfo: 398b0a58d61fd23766354caff6cb5199b19af5f0
# umpf-topic-range: 7f83979ad798d3748c4546d6f6796c14676a9332..399c5fd63752b3433ec2e1e8862ef0e76ff33319
UMPF_SRC_URI += "\
  file://patches/0201-drivers-imx-tzc380-add-CFG_MX6QP-TZASC2-configuratio.patch \
  file://patches/0202-drivers-tzc380-add-support-to-dump-region0.patch \
  file://patches/0203-drivers-tzc380-add-tzc_verify_region0_secure-helper.patch \
  file://patches/0204-drivers-imx-tzc380-add-support-to-verify-region0.patch \
  file://patches/0205-drivers-imx-tzc380-add-support-to-check-TZASC-enable.patch \
  "
# umpf-topic: 4.6.0/topic/ocotp
# umpf-hashinfo: cee807aa693f91f8312a4b6da58590a733642869
# umpf-topic-range: 399c5fd63752b3433ec2e1e8862ef0e76ff33319..1f4df58368ce6a310d9c2f6c5adab8c00495286a
UMPF_SRC_URI += "\
  file://patches/0301-drivers-imx_ocotp-fix-error-busy-defines-for-i.MX8MP.patch \
  file://patches/0302-drivers-imx_ocotp-fix-clearing-the-error-bit.patch \
  file://patches/0303-drivers-imx_ocotp-make-use-of-hw-timers-during-ocotp.patch \
  file://patches/0304-drivers-imx_ocotp-add-support-to-burn-fuses.patch \
  file://patches/0305-drivers-imx_ocotp-write-support-i.MX6Q-D-S-DL-UL.patch \
  "
# umpf-topic: 4.6.0/topic/rpmb
# umpf-hashinfo: 597184294b83d10e2866eed1293a14f2a37414e3
# umpf-topic-range: 1f4df58368ce6a310d9c2f6c5adab8c00495286a..2060281d4064218c63fd198b791927e5d329c6ac
UMPF_SRC_URI += "\
  file://patches/0401-core-rpmb-add-platform-specific-hook-to-avoid-rpmb-k.patch \
  file://patches/0402-core-rpmb-add-plat_notify_tee_rpmb_key_write_key_pos.patch \
  file://patches/0403-drivers-plat-imx-implement-plat_rpmb_key_was_written.patch \
  "
# umpf-release: v4.6/customers/skov/imx6/20250820-1
# umpf-topic-range: 2060281d4064218c63fd198b791927e5d329c6ac..473d2afd35dd8a6b41ec99fd927b794658176417
UMPF_SRC_URI += "\
  file://patches/0501-Release-v4.6-customers-skov-imx6-20250820-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "4.6.0"
UMPF_VERSION = "20250820-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
