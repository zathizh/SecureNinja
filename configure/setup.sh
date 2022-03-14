#! /usr/bin/bash

# https://www.kernel.org/doc/man-pages/download.html
manVERSION="man-pages-5.13"
manURL="https://mirrors.edge.kernel.org/pub/linux/docs/man-pages/$manVERSION.tar.gz"
pedaURL="https://github.com/longld/peda"

# Execute as super user.
# ; install man-pages
# ; disable aslr
# ; reboot the system
sudo su <<EOF
apt-get update -y
apt-get install gdb -y
echo "[+] Downloading peda"
cd /opt && git clone $pedaURL
echo "[+] Configuring peda"
echo "source /opt/peda/peda.py" >> /home/kali/.gdbinit
echo "[+] Downloading $manVERSION"
cd /tmp/ && curl -O $manURL && tar xzvf "$manVERSION.tar.gz" && cd $manVERSION && make && cd ../ && rm -rf $manVERSION*
echo "kernel.randomize_va_space=0" >  /etc/sysctl.d/01-aslr.conf
sysctl --system
reboot
EOF
