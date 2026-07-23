require barebox-skov.inc

BAREBOX_IMG_BASENAME:imx6-cpu = "${PN}-skov-imx6"
BAREBOX_IMG_BASENAME:imx8-cpu = "${PN}-skov-imx8mp"
BAREBOX_IMG_BASENAME:imx8s-cpu = "${PN}-skov-imx8mp-s"

require barebox-skov-deploy.inc
