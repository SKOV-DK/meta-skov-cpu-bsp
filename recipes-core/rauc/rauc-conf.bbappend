FILESEXTRAPATHS:prepend := "${THISDIR}/rauc:"

RAUC_BUNDLE_COMPATIBLE ??= "default"

def get_basename(d, file):
   return os.path.basename(file)

# RAUC_KEYRING_FILE
KEYRING_FILE = "${@get_basename(d, "${RAUC_KEYRING_FILE}")}"
SRC_URI:append := " file://${KEYRING_FILE} "

do_install:append() {
   if [ "${RAUC_BUNDLE_COMPATIBLE}" == "default" ] ; then
      bbwarn "Please overwrite RAUC_BUNDLE_COMPATIBLE with a project specific one!"
   fi
   sed --expression=s,@RAUC_BUNDLE_COMPATIBLE@,'${RAUC_BUNDLE_COMPATIBLE}', \
       --expression=s,@RAUC_KEYRING_FILE@,'${KEYRING_FILE}', \
       --in-place ${D}${sysconfdir}/rauc/system.conf
}