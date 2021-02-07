#include <signal.h>

sig_atomic_t interrupted; /* bug: not declared volatile */

void sigint_handler(int signum) {
	interrupted = 1; /* assignment may not be visible in main() */
}

int main(void) {
	signal(SIGINT, sigint_handler);
	while (!interrupted) {   /* loop may never terminate */
		/* do something */
	}
	return 0;
}
