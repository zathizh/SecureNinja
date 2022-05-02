#include <stdio.h>
#include <limits.h>

int main(){
	unsigned int ui = ULONG_MAX;
	signed char c = -1;
	if (c == ui) { 
	        puts("Why is -1 = 4,294,967,295???");
	}
	return 0;
}
