#include <stdio.h>
#include <string.h>

int main(){
	char secret[] = "API_KEY=asdfjasdfasdf"; //secret data
	char buffer[8]; //allocate 8 bytes of data

	int claimedLength; //user supplied data
	//common in networking protocols

	//trust user supplied length (vulnerability)
	printf("Enter claimed length: ");
	scanf("%d", &claimedLength);

	//user supplied data
	printf("Enter message: ");
	scanf("%7s", buffer); // limit input to avoid overflow

	printf("\n[Server Response]:\n");

	//PATCH: clamp length to size of buffer.
	if (claimedLength > sizeof(buffer)){
		claimedLength = sizeof(buffer);
	}

	//print claimed number of chars starting from address of buffer
	for (int i = 0; i < claimedLength; i++){
		printf("%c", buffer[i]);
	}

	printf("\n%s\n", buffer);

	printf("\n");
	return 0;
}
