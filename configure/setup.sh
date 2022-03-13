#! /usr/bin/bash

manVERSION="man-pages-5.13"
manURL="https://mirrors.edge.kernel.org/pub/linux/docs/man-pages/$manVERSION.tar.gz"

sudo su <<EOF
echo "[+] Downloading $manVERSION"
cd /tmp/ && curl -O $manURL && tar xzvf "$manVERSION.tar.gz" && cd $manVERSION && make && cd ../ && rm -rf $manVERSION*
echo "kernel.randomize_va_space=0" >  /etc/sysctl.d/01-aslr.conf
sysctl --system
reboot
EOF
