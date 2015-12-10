#@TYPE: Machine
#@NAME: DOL-63x
#@DESCRIPTION: Common machine configuration for all DOL-63x variants

include conf/machine/include/soc-family.inc

MACHINEOVERRIDES .= ":dol-63x"

MACHINE_EXTRA_RRECOMMENDS = " kernel-modules kernel-devicetree"

EXTRA_IMAGEDEPENDS += "virtual/bootloader"

DEFAULTTUNE = "cortexa9hf-neon"
include conf/machine/include/tune-cortexa9.inc

IMAGE_FSTYPES += "tar.bz2 ext4"

SERIAL_CONSOLES = "115200;ttymxc1"

PREFERRED_PROVIDER_virtual/bootloader ?= "barebox"

PREFERRED_PROVIDER_virtual/kernel ?= "linux-skov"

KERNEL_IMAGETYPE = "zImage"
KERNEL_DEVICETREE = "\
 imx6q-skov-dol63x-revA.dtb \
 imx6q-skov-dol63x-revB.dtb \
 imx6q-skov-dol63x-revC.dtb \
 imx6dl-skov-dol63x-revA.dtb \
 imx6dl-skov-dol63x-revB.dtb \
 imx6dl-skov-dol63x-revC.dtb \
 "

MACHINE_FEATURES = "usbgadget usbhost vfat touchscreen serial rtc"

SOC_FAMILY = "mx6"
MACHINE_SOCARCH = "${TUNE_PKGARCH}-mx6"
MACHINE_ARCH_FILTER = "virtual/kernel"
PACKAGE_EXTRA_ARCHS_append = " ${MACHINE_SOCARCH}"
