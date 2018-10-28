char* int_to_str(int number) {
	static char buffer[1024];
	
	snprintf(buffer, 10, "%d", number);
	
	return buffer;
}