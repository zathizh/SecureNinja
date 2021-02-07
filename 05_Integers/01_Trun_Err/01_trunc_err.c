#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
        unsigned short int total;
        total = strlen(argv[1]) + strlen(argv[2]) + 1;
        char *buff = (char *)malloc(total);
        strcpy(buff, argv[1]);
	printf("buff : %s\n", buff);
        strcat(buff, argv[2]);
	printf("buff : %s\n", buff);
        /* ... */
	free(buff);
}
