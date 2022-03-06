#! /usr/bin/bash

sudo su <<EOF
echo "kernel.randomize_va_space=0" >  /etc/sysctl.d/01-aslr.conf
sysctl --system
reboot
EOF
