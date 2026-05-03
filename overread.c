#include <stdio.h>
#include <string.h>

int main() {
	char secret[] = "TOP SECRET DATA";
	char buffer[8] = "HELLO";

	printf("Buffer contents: %s\n", buffer);

	printf("Reading beyond buffer:\n");

	for(int i = 0; i < 25; i++){
		printf("%c", buffer[i]);
	}

	printf("\n");

	return 0;
}
