#
# Copyright 2025 Ahmad Fatoum, Pengutronix
#
# SPDX-License-Identifier: MIT
#

BAREBOX_POLICY_DIR = "security"

inherit terminal

# returns all the elements from the src uri that are .sconfig files
def find_sconfigs(d):
    sources=src_patches(d, True)
    sources_list=[]
    for s in sources:
        if s.endswith('.sconfig'):
            sources_list.append(s)

    return sources_list

do_configure:append () {
    for sconfig in ${@' '.join(find_sconfigs(d))}; do
        cp "$sconfig" "${S}/security/"
    done
}

def do_security_config(d, target):
    import shutil

    destdir = os.path.join(d.getVar("S"), "security")
    if not os.path.isdir(destdir):
        bb.fatal("security/ directory missing. barebox too old?\n")
        return

    # setup native pkg-config variables (kconfig scripts call pkg-config directly, cannot generically be overriden to pkg-config-native)
    d.setVar("PKG_CONFIG_DIR", "${STAGING_DIR_NATIVE}${libdir_native}/pkgconfig")
    d.setVar("PKG_CONFIG_PATH", "${PKG_CONFIG_DIR}:${STAGING_DATADIR_NATIVE}/pkgconfig")
    d.setVar("PKG_CONFIG_LIBDIR", "${PKG_CONFIG_DIR}")
    d.setVarFlag("PKG_CONFIG_SYSROOT_DIR", "unexport", "1")
    # ensure that environment variables are overwritten with this tasks 'd' values
    d.appendVar("OE_TERMINAL_EXPORTS", " PKG_CONFIG_DIR PKG_CONFIG_PATH PKG_CONFIG_LIBDIR PKG_CONFIG_SYSROOT_DIR")

    origmtimes = {}
    origsconfigs = {}

    for sconfig in find_sconfigs(d):
        try:
            newconfig = shutil.copy(sconfig, destdir)
            origmtimes[newconfig] = os.path.getmtime(sconfig)
            origsconfigs[newconfig] = sconfig
        except OSError:
            pass

    if not origsconfigs:
        bb.fatal("no *.sconfig files in SRC_URI. Nothing to do.\n")
        return

    old_cwd = os.getcwd()

    try:
        os.chdir(d.getVar("B"))
        oe_terminal("sh -c 'make %s %s; if [ \\$? -ne 0 ]; then echo \"Command failed.\"; printf \"Press any key to continue... \"; read r; fi'" %
                    (d.getVar("EXTRA_OEMAKE"), target),
                    d.getVar('PN') + ' Security Configuration', d)
    finally:
        os.chdir(old_cwd)

    for sconfig in origsconfigs.keys():
        try:
            newmtime = os.path.getmtime(sconfig)
        except OSError:
            continue

        if newmtime > origmtimes[sconfig]:
            newconfig = shutil.copy(sconfig, origsconfigs[sconfig])
            bb.build.write_taint('do_compile', d)

python do_security_checkconfigs() {
    do_security_config(d, "security_checkconfigs")
}
do_security_checkconfigs[depends] += "ncurses-native:do_populate_sysroot"
do_security_checkconfigs[nostamp] = "1"
addtask do_security_checkconfigs after do_configure

python do_security_olddefconfig() {
    do_security_config(d, "security_olddefconfig")
}
do_security_olddefconfig[depends] += "ncurses-native:do_populate_sysroot"
do_security_olddefconfig[nostamp] = "1"
addtask do_security_olddefconfig after do_configure

python do_security_oldconfig() {
    do_security_config(d, "security_oldconfig")
}
do_security_oldconfig[depends] += "ncurses-native:do_populate_sysroot"
do_security_oldconfig[nostamp] = "1"
addtask do_security_oldconfig after do_configure

python do_security_menuconfig() {
    do_security_config(d, f"security_{d.getVar('KCONFIG_CONFIG_COMMAND')}")
}
do_security_menuconfig[depends] += "ncurses-native:do_populate_sysroot"
do_security_menuconfig[nostamp] = "1"
addtask do_security_menuconfig after do_configure
