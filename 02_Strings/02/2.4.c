//#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s1[] = "012345678";
	char s2[] = "0123456789";
	char *dest;
	int i;

	strcpy_s(s1, sizeof(s2), s2);
	dest = (char *)malloc(strlen(s1));
	for (i=1; i <= 11; i++) {
		dest[i] = s1[i];
	}
	dest[i] = '\0';
	printf("dest = %s", dest);
	/* ... */;
}
