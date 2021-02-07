#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        int i = 0;
        char buff[128];
        char *arg1 = argv[1];
        if (argc == 1) { 
                puts("No arguments");
                return EXIT_FAILURE;
        }
        while (arg1[i] != '\0'){
                buff[i] = arg1[i];
                i++;
        }
        buff[i] = '\0';
        printf("buff = %s\n", buff);
        exit(EXIT_SUCCESS);
}
