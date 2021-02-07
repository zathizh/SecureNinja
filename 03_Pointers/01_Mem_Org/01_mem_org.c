#include <stdio.h>
#include <stdlib.h>

static int GLOBAL_INIT = 1; /* data segment, global */ 
static int global_uninit; /* BSS segment, global */ 

int main(int argc, char **argv) { /* stack, local */ 
	int local_init = 1; /* stack, local */ 
	int local_uninit; /* stack, local */ 
	static int local_static_init = 1; /* data seg, local */ 
	static int local_static_uninit; /* BSS segment, local */ 
	/* storage for buff_ptr is stack, local */ 
	/* allocated memory is heap, local */ 
	int *buff_ptr = (int *)malloc(32); 

	int *ptr_local_init = &local_init;;
	int *ptr_local_uninit = &local_uninit;
	int *ptr_local_static_init = &local_static_init;
	int *ptr_local_static_uninit = &local_static_uninit;

	printf("local_init : %p\n", ptr_local_init);
	printf("local_uninit : %p\n", ptr_local_uninit);
	printf("local_static_init : %p\n", ptr_local_static_init);
	printf("local_static_uninit : %p\n", ptr_local_static_uninit);
	printf("buff_ptr [stack] : %p\n", &buff_ptr);
	printf("buff_ptr memory [heap] : %p\n", buff_ptr);
	getchar();
}
