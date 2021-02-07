#include <stdio.h>
#include <stdlib.h>

int mem_func(void) {
	char *text_buffer = (char *)malloc(BUFSIZ);
	if (text_buffer == NULL){
		return -1;
	}
}

int main(){
	mem_func();
	return 0;
}

