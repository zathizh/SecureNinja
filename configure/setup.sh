#! /usr/bin/bash

# https://www.kernel.org/doc/man-pages/download.html
manVERSION="man-pages-5.13"
manURL="https://mirrors.edge.kernel.org/pub/linux/docs/man-pages/$manVERSION.tar.gz"
pedaURL="https://github.com/longld/peda"
userpath=$(getent passwd 1000 | cut -d":" -f 6)


# Execute as super user.
# ; install man-pages
# ; disable aslr
# ; reboot the system
sudo su <<EOF
echo "[+] Updating repodatabase and install necessary packages"
apt-get update -y
apt-get install gdb -y
echo "[+] Downloading peda"
cd /opt && git clone $pedaURL
echo "[+] Configuring peda"
echo "source /opt/peda/peda.py" > $userpath/.gdbinit
echo "[+] Configure g++ standard to c++11 with suppress warnings"
echo >> $userpath/.bashrc
echo "alias g++='g++ -std=c++11 -w'" >> $userpath/.bashrc
echo >> $userpath/.zshrc
echo "alias g++='g++ -std=c++11 -w'" >> $userpath/.zshrc
echo "[+] Downloading $manVERSION"
cd /tmp/ && curl -O $manURL && tar xzvf "$manVERSION.tar.gz" && cd $manVERSION && make && cd ../ && rm -rf $manVERSION*
echo "[+] Clonning labs"
cd $userpath && git clone https://github.com/zathizh/SecureNinja-SecureCoding && mv SecureNinja-SecureCoding labs
echo "[+] Disabling ASLR"
echo "kernel.randomize_va_space=0" >  /etc/sysctl.d/01-aslr.conf
sysctl --system
reboot
EOF
