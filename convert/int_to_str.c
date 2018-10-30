#ifndef INT_TO_STR_EXISTS
char* int_to_str(int number) {
	static char buffer[1024];
	
	snprintf(buffer, 10, "%d", number);
	
	return buffer;
}
#define INT_TO_STR_EXISTS
#endif