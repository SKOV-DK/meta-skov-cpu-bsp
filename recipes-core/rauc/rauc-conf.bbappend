FILESEXTRAPATHS:prepend := "${THISDIR}/rauc:"
SRC_URI:append = " file://${MACHINE}/system.conf.in"

RAUC_BUNDLE_COMPATIBLE ??= "default"
RAUC_DATA_DIR ??= "/home/etc/rauc"
# Handlers
RAUC_HANDLER_PRE_INSTALL ??= ""
RAUC_HANDLER_POST_INSTALL ??= ""
RAUC_HANDLER_SYSTEM_INFO ??= ""

def get_basename(d, file):
   return os.path.basename(file)

# RAUC_KEYRING_FILE
KEYRING_FILE = "${@get_basename(d, "${RAUC_KEYRING_FILE}")}"
SRC_URI:append := " file://${KEYRING_FILE} "

do_configure:append() {
   if [ "${RAUC_BUNDLE_COMPATIBLE}" = "default" ]; then
      bbwarn "Please overwrite RAUC_BUNDLE_COMPATIBLE with a project specific one!"
   fi

   sed --expression=s,@RAUC_BUNDLE_COMPATIBLE@,"${RAUC_BUNDLE_COMPATIBLE}", \
       --expression=s,@RAUC_DATA_DIR@,"${RAUC_DATA_DIR}", \
       --expression=s,@RAUC_KEYRING_FILE@,"${KEYRING_FILE}", \
       --expression=s,@RAUC_HANDLER_PRE_INSTALL@,"${RAUC_HANDLER_PRE_INSTALL}", \
       --expression=s,@RAUC_HANDLER_POST_INSTALL@,"${RAUC_HANDLER_POST_INSTALL}", \
       --expression=s,@RAUC_HANDLER_SYSTEM_INFO@,"${RAUC_HANDLER_SYSTEM_INFO}", \
      ${WORKDIR}/${MACHINE}/system.conf.in > ${WORKDIR}/system.conf
}