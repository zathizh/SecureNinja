#include <stdio.h>
#include <stdlib.h>

void get_y_n(){
	char response[8];
	fputs("Continue ? [y]/n : ", stdout);
	gets(response);

	if (response[0] == 'N' || response[0] == 'n'){
		exit(0);
	}
}

int main(){
	get_y_n();
	puts("Continuing ...");
	return 0;
}
