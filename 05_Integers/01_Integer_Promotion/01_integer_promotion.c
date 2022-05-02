#include <stdio.h>

int main(){
	signed char cresult, c1, c2, c3;
	c1 = 100;
	c2 = 3; 
	c3 = 4; 
	cresult = c1 * c2 / c3;
	
	printf("c1: %d\tc2: %d\tc3: %d\n", c1, c2, c3);
	printf("%d * %d / %d\n", c1, c2, c3);
	printf("%d\n", cresult);
	
	return 0;
}
