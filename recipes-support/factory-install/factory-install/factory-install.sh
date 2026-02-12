#!/bin/bash
#
# Copyright (C) 2023 Pengutronix, Ulrich Ölmann <u.oelmann@pengutronix.de>
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose with or without fee is hereby granted.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
# WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
# AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
# CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
# OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
# NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
# CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#

MEDIUM=@MEDIUM@
TGT_DEV=/dev/@TGT_MMC@
TGT_DEV_BOOT0=/dev/@TGT_MMC@boot0
TGT_DEV_BOOT1=/dev/@TGT_MMC@boot1
BOOT0_FORCE_RO=/sys/class/block/@TGT_MMC@boot0/force_ro
BOOT1_FORCE_RO=/sys/class/block/@TGT_MMC@boot1/force_ro
WIC=@WIC@
BAREBOX_RENAME=@BAREBOX_RENAME@
DATADIR=@DATADIR@
PART_NO=@PART_NO@
RESIZE=@RESIZE@


show_splash () {
    local BASENAME

    if [ $# -eq "0" ]; then
        BASENAME="splash"
    else
        BASENAME="splash-factory-install-${1}"
    fi

    systemd-run --quiet --unit="${BASENAME}" \
        /usr/sbin/platsch --directory /usr/share/platsch \
                          --basename "${BASENAME}"
}

success () {
    echo "Installation succeeded."
    echo none > /sys/class/leds/D1/trigger
    echo none > /sys/class/leds/D2/trigger
    echo heartbeat > /sys/class/leds/D1/trigger
    echo heartbeat > /sys/class/leds/D2/trigger
    show_splash success
    exit 0;
}

failure () {
    echo "Installation failed: ${1}"
    echo timer > /sys/class/leds/D2/trigger
    echo 1000 > /sys/class/leds/D2/delay_on
    echo 1000 > /sys/class/leds/D2/delay_off
    show_splash failure
    exit 1;
}


echo timer > /sys/class/leds/D2/trigger
echo 50 > /sys/class/leds/D2/delay_on
echo 50 > /sys/class/leds/D2/delay_off

# Display initial factory-install splashscreen
show_splash

echo "Discarding the whole ${MEDIUM} initially using blkdiscard."
if ! blkdiscard -f -v "${TGT_DEV}"; then
    failure "Failed to discard the whole ${MEDIUM} initially using blkdiscard."
fi

echo "Flashing ${WIC} into ${MEDIUM} using bmaptool."
if ! bmaptool copy --bmap "${DATADIR}${WIC}.bmap" "${DATADIR}${WIC}.zst" "${TGT_DEV}"; then
    failure "Failed to flash ${WIC} into ${MEDIUM} using bmaptool."
fi

if [ -n "${PART_NO}" ] ; then
   echo "Fixing alternate GPT header at the end of ${MEDIUM}."
   if ! parted ---pretend-input-tty "${TGT_DEV}" -- print <<< fix; then
      failure "Failed to fix alternate GPT header at the end of ${MEDIUM}."
   fi

   echo "Expanding ${PART_NO}th partition of ${MEDIUM} to the end of the device."
   if ! parted --script "${TGT_DEV}" -- resizepart "${PART_NO}" 100%; then
      failure "Failed to expand ${PART_NO}th partition of ${MEDIUM} to the end of the device."
   fi

   if [ "${RESIZE}" = "true" ] ; then
      echo "Resizing ext4 on ${PART_NO}th partition of ${MEDIUM} accordingly."
      if ! resize2fs -p "${TGT_DEV}"p"${PART_NO}"; then
         failure "Failed to resize ext4 on ${PART_NO}th partition of ${MEDIUM} accordingly."
      fi
   fi
fi

echo "Disabling the ${MEDIUM}'s first boot partition's read-only mode."
if ! echo 0 > "${BOOT0_FORCE_RO}"; then
    failure "Failed to disable the ${MEDIUM}'s first boot partition's read-only mode."
fi

echo "Discarding the ${MEDIUM}'s first boot partition initially using blkdiscard."
if ! blkdiscard -v "${TGT_DEV_BOOT0}"; then
    failure "Failed to discard the ${MEDIUM}'s first boot partition initially using blkdiscard."
fi

echo "Flashing ${BAREBOX_RENAME} into the ${MEDIUM}'s first boot partition using dd."
if ! dd if="${DATADIR}${BAREBOX_RENAME}" of="${TGT_DEV_BOOT0}" bs=1M; then
    failure "Failed to flash ${BAREBOX_RENAME} into the ${MEDIUM}'s first boot partition using dd."
fi

echo "Enabling the ${MEDIUM}'s first boot partition's read-only mode."
if ! echo 1 > "${BOOT0_FORCE_RO}"; then
    failure "Failed to enable the ${MEDIUM}'s first boot partition's read-only mode."
fi

echo "Disabling the ${MEDIUM}'s second boot partition's read-only mode."
if ! echo 0 > "${BOOT1_FORCE_RO}"; then
    failure "Failed to disable the ${MEDIUM}'s second boot partition's read-only mode."
fi

echo "Discarding the ${MEDIUM}'s second boot partition initially using blkdiscard."
if ! blkdiscard -v "${TGT_DEV_BOOT1}"; then
    failure "Failed to discard the ${MEDIUM}'s second boot partition initially using blkdiscard."
fi

echo "Enabling the ${MEDIUM}'s second boot partition's read-only mode."
if ! echo 1 > "${BOOT1_FORCE_RO}"; then
    failure "Failed to enable the ${MEDIUM}'s second boot partition's read-only mode."
fi

echo "Enabling the ${MEDIUM}'s first boot partition."
if ! mmc bootpart enable 1 0 "${TGT_DEV}"; then
    failure "Failed to enable the ${MEDIUM}'s first boot partition."
fi

success
