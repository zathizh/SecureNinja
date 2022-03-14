#include <string.h>
#include <stdio.h>

int main() {
	char a[16];
	char b[16];
	char c[32];

	strncpy(a, "0123456789abcdef", sizeof(a)-1);
	a[sizeof(a)-1] = '\0';
	strncpy(b, "0123456789abcdef", sizeof(b)-1);
	b[sizeof(b)-1] = '\0';
	strncpy(c, a, sizeof(c)-1);
	c[sizeof(c)-1] = '\0';
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
}
