gcc -o 01_argv_0 01_argv_0.c
(exec -a $(python -c 'print("A"*130)') ./01_argv_0)


# Aditional check the difference of below commands
exec env > env.txt
exec -c env > env.txt
