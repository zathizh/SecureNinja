#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const char * const name = argv[0] ? argv[0] :"";
    char *prog_name = (char *)malloc(strlen(name)+1);
    if (prog_name != NULL) {
        strcpy(prog_name, name);
    }
    else {
        /* Couldn't get the memory - recover */
    }
    return 0;
}
