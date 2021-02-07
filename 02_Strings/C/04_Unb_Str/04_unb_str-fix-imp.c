#define __STDC_WANT_LIB_EXT1__ 1 
#include <stdio.h> 
#include <stdlib.h> 

void get_y_or_n(void) { 
	char response[8]; 
	size_t len = sizeof(response); 

	puts("Continue? [y] n: "); 
	if ((gets_s(response, len) == NULL) || (response[0] == 'n')) { 
		exit(0); 
	} 
} 

int main(void) { 
	constraint_handler_t oconstraint = set_constraint_handler_s(ignore_handler_s); 
	get_y_or_n(); 
}
