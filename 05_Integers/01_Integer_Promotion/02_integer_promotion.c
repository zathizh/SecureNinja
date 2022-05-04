#include <stdio.h>

int main(){
	signed char cresult, c1, c2;
	c1 = 100;
	c2 = 3; 
	cresult = c1 * c2;
	
	printf("c1: %d\tc2: %d\n", c1, c2);
	printf("%d * %d\n", c1, c2);
	printf("%d\n", cresult);
	
	return 0;
}
