#include <stdio.h>
#include <limits.h>

int main(){

	int i;
	unsigned int j;

	// 2,147,483,647
	i = INT_MAX;  
	i++;
	printf("i = %d\n", i); 

	// 4,294,967,295;
	j = UINT_MAX; 
	j++;
	printf("j = %u\n", j); 

	// -2,147,483,648;
	i = INT_MIN; 
	i--;
	printf("i = %d\n", i); 

	j = 0;
	j--;
	printf("j = %u\n", j); 

	return 0;
}
