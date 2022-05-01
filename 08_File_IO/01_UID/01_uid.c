#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//seteuid
//setuid
//setresuid

void privPrinter(){
	printf("RUID : %d\t", getuid());
        printf("EUID : %d\n", geteuid());
}

void main(){
	privPrinter();

	seteuid(88);
	printf("setuid(88)\n");
	privPrinter();

	seteuid(0);
        printf("setuid(0)\n");
        privPrinter();

	setuid(111);
	printf("setuid(111)\n");
        privPrinter();

	setuid(1000);
	printf("setuid(0)\n");
        privPrinter();

	seteuid(0);
        printf("setuid(0)\n");
        privPrinter();
}
