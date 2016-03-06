#!/bin/bash
#
# Copyright (c) 2016 CliveLiu.
# All rights reserved.
#

function error ()
{
    echo -e "\033[31mERROR: \033[0m"$1
    exit 1
}

# Make sure that current directory is u-boot's path.
CUR_PATH=`pwd`
CUR_DIR=${CUR_PATH##*/}
[ "${CUR_DIR}" != "u-boot-xlnx" ] && error "Current directory isn't u-boot's path."

# Check environment variables
[ -z ${ARCH} ] && error "Please perform \"$ source setup_env.sh\"."
[ -z ${CROSS_COMPILE} ] && error "Please perform \"$ source setup_env.sh\"."

# Clean files
make ARCH=arm distclean
# Build project
make ARCH=arm zynq_motion_config
make

[ ! -e u-boot ] && error "Fail to build project."
cp -af u-boot u-boot.elf

exit 0
