## Compile IsPasswordOK.cp with default GCC configurations

```
g++ IsPasswordOK.cpp -o IsPasswordOK
```

## Compile the IsPasswordOK.cpp without stack protection

```
g++ -fno-stack-protector IsPasswordOK.cpp -o IsPasswordOK
```

## Compile the IsPasswordOK.cpp with executable stack and no stack protection

```
g++ -fno-stack-protector -z execstack IsPasswordOK.cpp -o IsPasswordOK
```

## Overflowing the buffer automatically
```
for i in $(seq 1 13); do python -c "print('A'*$i)" | ./IsPasswordOK ; done
```
