
Content of SKOV-BSP:
- Barebox bootloader v2025.04.0 with patches
- Linux kernel v6.14.5 with patches
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
