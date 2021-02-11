#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void usage(char *pname) { 
	char usageStr[512]; 
	snprintf(usageStr, 1024, "Usage: %.400s <target>\n", pname); 
	printf(usageStr); 
} 
 
int main(int argc, char * argv[]) { 
	if (argc > 0 && argc < 2) { 
		usage(argv[0]); 
		exit(-1); 
	} 
}
