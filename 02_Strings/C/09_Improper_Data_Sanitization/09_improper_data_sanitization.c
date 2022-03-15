#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char addr[64];
	char buffer[128];
	printf("Enter ip : ");
	fgets(addr, sizeof(addr), stdin);
	sprintf(buffer, "/usr/bin/ping -c2 %s", addr);

	system(buffer);

	return 0;
}
