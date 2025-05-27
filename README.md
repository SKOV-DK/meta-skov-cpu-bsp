
Content of SKOV-BSP:
- Barebox bootloader with patches
- Linux kernel with patches
- Kernel and bootloader configuration 
- SKOV flash layout skeletons

Supported CPU boards by the SKOV-BSP:
- SKOV iMX6 7” RGB CPU board (only quad core)
- SKOV iMX6 10” LVDS CPU board 
- SKOV iMX8 7” RGB CPU board 
- SKOV iMX8 7” LVDS CPU board 
- SKOV iMX8 10” LVDS CPU board 
- SKOV iMX8 no display CPU board 

Machine descriptions:
- imx6-cpu: Machine for all SKOV iMX6 CPU board variants
- imx8-cpu: Machine for all SKOV iMX8 CPU board variants without secure boot
- imx8s-cpu: Machine for all SKOV iMX8 CPU board variants with secure boot

Release and branching strategy:
All development of meta-skov-cpu-bsp is done on Main via pull requests.
meta-skov-cpu-bsp is branched into release-branches based on the supported Yocto name, e.g. Scarthgap. The release-branches is the branches to use when including the meta-skov-cpu-bsp in e.g. a SDK, and it is recomended to use a specific commit / hash of the release- branch to ensure that it is the same BSP that is used whenever the SDK is build.
By default there will be no tags on the release-branches, as we recommend to use the commit hashes instead.  
