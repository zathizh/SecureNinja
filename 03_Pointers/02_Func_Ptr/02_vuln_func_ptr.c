#include <stdio.h>

#define SHOW_INFO( var ) printf( "%10p - %10p  %11d %4uB  "#var"\n", &var, (char*)&var + sizeof(var) - 1 , var, sizeof(var) )

#define BUFFSIZE 32

extern char __bss_start, _end;

void good_function(const char *);
 
int main(void) { 
	static char buff[BUFFSIZE];
	static void (*funcPtr)(const char *str); 
	funcPtr = &good_function; 

	printf("BSS Segment : %p  - %p\n", &__bss_start, &_end);
	SHOW_INFO ( buff );
	SHOW_INFO ( funcPtr );

	(void)(*funcPtr)("Hello "); 
	good_function("World!\n"); 

	return 0; 
}

void good_function(const char *str) {
        printf("%s", str);
}
