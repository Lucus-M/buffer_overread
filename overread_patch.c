#include <stdio.h>
#include <string.h>

int main() {
	// data that will be read after the buffer is passed
	char secret[] = "TOP SECRET DATA";

	// buffer string
	char buffer[8] = "HELLO!!!";

	int size = sizeof(buffer);

	// print buffer string
	printf("Buffer contents: %.*s", size, buffer);

	return 0;
}
