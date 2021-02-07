#include <signal.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#define MAX_MSG_SIZE 24

char *err_msg;

void handler(int signum) {
	strcpy(err_msg, "SIGINT encountered.");
}

int main(void) {
	signal(SIGINT, handler);
	err_msg = (char *)malloc(MAX_MSG_SIZE);
	if (err_msg == NULL) {
		/* handle error condition */
	}
	strcpy(err_msg, "No errors yet.");
	/* main code loop */
	return 0;
}
