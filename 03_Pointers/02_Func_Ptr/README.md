## Compiling 02_info_ptr.c without runtime bufferoverflow detection enabled

```
gcc -O2 -D_FORTIFY_SOURCE=0 -fno-stack-protector -z execstack 02_info_ptr.c -o 02_info_ptr.c
```

## View Symbol Table
```
readelf -s 02_vuln_func_ptr
nm 02_vuln_func_ptr
objdump -S 02_vuln_func_ptr
```

## Loading SHELLCODE into environment variable
```
export SHELLCODE=$(perl gen-payload.pl)
echo $SHELLCODE
```

## Get Environment Variable location compared to executable name
```
./getenvaddr  SHELLCODE ./prog
```
