#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	char a[16];
	char b[16];
	char c[16];

	strncpy(a, "0123456789abcdef", sizeof(a));
	strncpy(b, "0123456789abcdef", sizeof(b));
	strncpy(c, a, sizeof(c));
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
}
