#include <stdio.h>
#include <string.h>

int main(){
	char arr1[] = "AAAAAA\0BBBBBB";
	char arr2[20];

	printf("arr1 : %s\t%d\n", arr1, sizeof(arr1));
	printf("arr1[8:] : %s\n", &arr1[8]);

	strncpy(arr2, arr1, sizeof(arr1));
	printf("arr2 : %s\t%d\n", arr2, sizeof(arr2));
	printf("arr2[3:] : %s\n", &arr2[3]);
	printf("arr2[8:] : %s\n", &arr2[8]);

	return 0;
}
