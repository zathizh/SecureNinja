#include<stdio.h>
#include<string.h>

void main(int agrc, char **argv){
	

//	const char s_vuln[3] = "abc";
//	const char s_safe[] = "abc";

	char s_vuln[] = "abc";
	char s_safe[] = "abc";

	s_vuln[5] = '\0';

	printf("%s\n", s_vuln);
	printf("%s\n", s_safe);


size_t len;
char cstr[] = "char string";
signed char scstr[] = "signed char string";
unsigned char ucstr[] = "unsigned char string";

len = strlen(cstr);
len = strlen(scstr);  /* warns when char is unsigned */
len = strlen(ucstr);  /* warns when char is signed */

}
