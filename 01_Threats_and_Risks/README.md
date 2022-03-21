## sample.py
python ./sample.py

## sample.cpp
g++ sample.cpp -o sample_cpp
./sample_cpp

## sample.c
gcc sample.c -o sample_c
./sample_c

## sample.asm
nasm -f elf sample.asm
ld -o sample sample.o 
./sample

## sample.php
php -f sample.php
