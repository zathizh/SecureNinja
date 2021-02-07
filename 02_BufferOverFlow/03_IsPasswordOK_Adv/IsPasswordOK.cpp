#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <stdbool.h>

char buffer[128]; 

_Bool IsPasswordOK(void) { 
	char Password[12]; 
   
	fgets(buffer, sizeof(buffer), stdin); 
	if (buffer[ strlen(buffer) - 1] == '\n') 
		buffer[ strlen(buffer) - 1] = 0; 
	strcpy(Password, buffer); 
	return 0 == strcmp(Password, "goodpass"); 
} 

int main(void) { 
	_Bool PwStatus; 

	printf("%s","Enter password: "); 
	PwStatus = IsPasswordOK(); 
	if (!PwStatus) { 
		puts("Access denied"); 
		exit(-1); 
	} 
	else 
		puts("Access granted"); 
	return 0; 
}
