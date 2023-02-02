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
TGT_DEV=@TGT_DEV@
WIC=@WIC@
DATADIR=@DATADIR@
PART_NO=@PART_NO@
BUNDLE=@BUNDLE@
BAREBOX="${DATADIR}"@BAREBOX_IMAGE@


show_splash () {
    local BASENAME="splash-factory-install-${1}"

    systemd-run --quiet --unit="${BASENAME}" \
        /usr/sbin/platsch --directory /usr/share/platsch \
                          --basename "${BASENAME}"

    # Now the initial instance of platsch is not needed anymore
    if [ -n "${PLATSCH_PID}" ]; then
        while ! systemctl --quiet is-active "${BASENAME}"; do
            sleep 1
        done

        sleep 1
        kill "${PLATSCH_PID}"
    fi
}

success () {
    echo "Installation succeeded."
    show_splash success
    exit 0;
}

failure () {
    echo "Installation failed: ${1}"
    show_splash failure
    exit 1;
}


# Find the PID of the initial platsch's forked instance
PLATSCH_PID=$(pgrep platsch)

echo "Discard the whole ${MEDIUM} initially using blkdiscard."
if ! blkdiscard -v "${TGT_DEV}"; then
    failure "Failed to discard the whole ${MEDIUM} initially using blkdiscard."
fi

echo "Flashing ${WIC} into ${MEDIUM} using bmaptool."
if ! bmaptool copy --bmap "${DATADIR}${WIC}.bmap" "${DATADIR}${WIC}.bz2" "${TGT_DEV}"; then
    failure "Failed to flash ${WIC} into ${MEDIUM} using bmaptool."
fi

echo "Fixing alternate GPT header at the end of ${MEDIUM}."
if ! parted ---pretend-input-tty "${TGT_DEV}" -- print <<< fix; then
    failure "Failed to fix alternate GPT header at the end of ${MEDIUM}."
fi

echo "Expanding ${PART_NO}th partition of ${MEDIUM} to the end of the device."
if ! parted --script "${TGT_DEV}" -- resizepart "${PART_NO}" -64s; then
    failure "Failed to expand ${PART_NO}th partition of ${MEDIUM} to the end of the device."
fi

echo "Resizing filesystem on ${PART_NO}th partition of ${MEDIUM}."
if ! resize2fs "${TGT_DEV}"p"${PART_NO}"; then
    failure "Failed to resize filesystem on ${PART_NO}th partition of ${MEDIUM}."
fi

echo "Prepare fake-overlay-FS for /home/etc to let rauc create its data-directory."
if ! mkdir -p /tmp/fake_home/etc/rauc; then
    failure "Failed to \"mkdir /tmp/fake_home/etc/rauc\"."
fi
if ! mount --bind /tmp/fake_home /home; then
    failure "Failed to \"mount --bind /tmp/fake_home /home\"."
fi

echo "Ask RAUC to install ${BUNDLE}."
if ! rauc install ${DATADIR}${BUNDLE}; then
    failure "Failed to \"rauc install ${DATADIR}${BUNDLE}\"."
fi

success
