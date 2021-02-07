g++ IsPasswordOK.cpp -o IsPasswordOK
g++ -fno-stack-protector IsPasswordOK.cpp -o IsPasswordOK
g++ -fno-stack-protector -z execstack IsPasswordOK.cpp -o IsPasswordOK

for i in $(seq 1 13); do python -c "print('A'*$i)" | ./IsPasswordOK ; done
