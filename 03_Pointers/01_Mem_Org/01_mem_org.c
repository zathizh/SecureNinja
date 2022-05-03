#include <stdio.h>
#include <stdlib.h>

#define SHOW_INFO( var ) printf( "    %10p - %10p  %11d %4uB  "#var"\n", &var, (char*)&var + sizeof(var) - 1 , var, sizeof(var) )

/* These are in no header file, and on some systems they have a _ prepended 
These symbols have to be typed to keep the compiler happy.
Also check out brk() and sbrk() for information about heap */

extern char _start, __data_start, _edata, __bss_start, _end;

/* data segment, global */
static int GLOBAL_INIT = 1; 

/* BSS segment, global */
static int global_uninit; 

void func(int);

int main(int argc, char **argv) { /* stack, local */
	/* stack, local */
	int local_init = 1
	/* stack, local */; 
	int local_uninit; 

	/* data segment, local */
	static int local_static_init = 1; 
	/* BSS segment, local */
	static int local_static_uninit; 

	/* storage for buff_ptr is stack, local */
	/* allocated memory is heap, local */
	int *buff_ptr = (int *)malloc(32);

	void(*func_ptr)(int) = &func;

	printf("TEXT SEGMENT %p\n", &_start);
	printf("\n");

	printf("DATA SEGMENT");
	printf(" : %p - %p\n", &__data_start, &_edata);
	printf("  static int GLOBAL_INIT = 1; static int local_static_init = 1;\n");
	SHOW_INFO ( GLOBAL_INIT );
	SHOW_INFO ( local_static_init );

	printf("\n");

	printf("BSS SEGMENT");
	printf(" : %p - %p\n", &__bss_start, &_end);
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
	SHOW_INFO ( func_ptr );
	SHOW_INFO ( buff_ptr );
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

void func(int val){
        printf("val=%d\n", val);
}
