gcc SimpleLogin.c -o SimpleLogin
gcc -fno-stack-protector SimpleLogin.c -o SimpleLogin
gcc -fno-stack-protector -z execstack SimpleLogin.c -o SimpleLogin

for i in $(seq 1 13); do python -c "print('A'*$i)" | ./SimpleLogin ; done
