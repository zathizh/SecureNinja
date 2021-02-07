void foo(void * arg, size_t len) {
	char buff[100];
	long val = ...;
	long *ptr = ...;
	memcpy(buff, arg, len);
	*ptr = val;
	return;
}


