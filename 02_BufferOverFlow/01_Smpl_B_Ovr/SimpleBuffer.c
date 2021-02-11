#include <stdio.h>
#include <string.h>

void main(){
        char target [5] = "TTTT";
        char attacker [11] = "AAAAAAAAAA";
        strcpy(attacker, "DDDDDDDDDDDDDDDDD");
        printf("%s\n", target);
}
