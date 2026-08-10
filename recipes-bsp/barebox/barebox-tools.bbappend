FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

# Require our own include file on top to overwrite different variables of the
# upstream include and to include the customized patchstack.
require barebox-common.inc

# We currently only need a subset of tools
BAREBOX_TOOLS = " \
    bareboxenv \
    bareboximd \
"

