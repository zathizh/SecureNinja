gcc -fno-stack-protector -z execstack -o 01_argv_0 01_argv_0.c
(exec -a $(python -c 'print("A"*130)') 01_argv_0)
