#! /usr/bin/bash

sudo su <<EOF
cd /tmp/ && curl -O https://mirrors.edge.kernel.org/pub/linux/docs/man-pages/man-pages-5.13.tar.gz && tar xzvf man-pages-5.13.tar.gz && cd man-pages-5.13 && make && rm -rf man-pages-*
echo "kernel.randomize_va_space=0" >  /etc/sysctl.d/01-aslr.conf
sysctl --system
reboot
EOF
