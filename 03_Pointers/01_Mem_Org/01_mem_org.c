#include <stdio.h>
#include <stdlib.h>

#define SHOW_INFO( var ) printf( "    %10p - %10p  %11d %4uB  "#var"\n", &var, (char*)&var + sizeof(var) - 1 , var, sizeof(var) )

extern char  etext, edata, end; 
static int GLOBAL_INIT = 1; /* data segment, global */
static int global_uninit; /* BSS segment, global */

int main(int argc, char **argv) { /* stack, local */
	int local_init = 1; /* stack, local */
	int local_uninit; /* stack, local */
	static int local_static_init = 1; /* data segment, local */
	static int local_static_uninit; /* BSS segment, local */

	/* storage for buff_ptr is stack, local */
	/* allocated memory is heap, local */
	int *buff_ptr = (int *)malloc(32);

	printf("TEXT SEGMENT %p\n", &etext);
	printf("\n");

	printf("DATA SEGMENT\n");
	printf("  static int GLOBAL_INIT = 1; static int local_static_init = 1;\n");
	SHOW_INFO ( GLOBAL_INIT );
	SHOW_INFO ( local_static_init );

	printf("\n");

	printf("BSS SEGMENT");
	printf(" : %p - %p\n", &edata, &end);
	printf("  static int global_uninit; static int local_static_uninit;\n");
	SHOW_INFO ( global_uninit );
	SHOW_INFO ( local_static_uninit );

	printf("\n");

	printf("HEAP\n");
	printf("  int *buff_ptr = (int *)malloc(32);\n");
	SHOW_INFO ( *buff_ptr );

	printf("\n");

        printf("STACK\n");
        printf("  char **argv; int argc; int local_uninit; int local_init=1;\n");
        SHOW_INFO ( *argv );
        SHOW_INFO ( argc );
        SHOW_INFO ( local_uninit );
        SHOW_INFO ( local_init );

	printf("\n");

	printf("**  Initializing uninitialized variables  **\n");
	global_uninit = 44;
	local_uninit = 44;
	local_static_uninit = 44;

	printf("\n");

	printf("global_uninit = 44; local_uninit = 44; local_static_uninit = 44;\n");
	SHOW_INFO ( local_uninit );
	SHOW_INFO ( global_uninit );
	SHOW_INFO ( local_static_uninit );

	return 0;
}
