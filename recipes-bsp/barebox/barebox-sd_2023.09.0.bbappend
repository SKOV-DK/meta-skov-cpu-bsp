#
# Create a barebox-environment to embed into images meant for automatic testing:
# to let labgrid enter barebox' shell the autoboot timeout needs to be increased
#
do_compile:append() {
        # prepare barebox' environment
        rm -rf ${B}/bareboxenv
        mkdir -p ${B}/bareboxenv/nv

        # populate the environment
        printf "10" > ${B}/bareboxenv/nv/autoboot_timeout

        # create the binary representation
        ${B}/scripts/bareboxenv -s ${B}/bareboxenv ${B}/bareboxenv.img
}

do_deploy:append() {
        install -m 644 -T ${B}/bareboxenv.img ${DEPLOYDIR}/${PN}-env-${MACHINE}-${DATETIME}.img
        ln -sf ${PN}-env-${MACHINE}-${DATETIME}.img ${DEPLOYDIR}/${PN}-env-${MACHINE}.img
}
