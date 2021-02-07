#include <stdio.h> 

int main(void) { 
	char *buf; 
	size_t size; 
	FILE *stream; 

	stream = open_memstream(&buf, &size); 
	
	if (stream == NULL) { 
		/* handle error */ 
	}; 
	
	fprintf(stream, "hello"); 
	fflush(stream); 
	printf("buf = '%s', size = %zu\n", buf, size); 
	fprintf(stream, ", world"); 
	fclose(stream); 
	printf("buf = '%s', size = %zu\n", buf, size); 
	free(buf); 

	return 0; 
}
