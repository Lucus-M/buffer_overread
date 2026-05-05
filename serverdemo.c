#include <stdio.h>
#include <string.h>

int main(){
	char secret[] = "API_KEY=asdfjasdfasdf"; //secret data
	char buffer[10]; //allocate 8 bytes of data

	int claimedLength; //user supplied data
	//common in networking protocols

	//trust user supplied length (vulnerability)
	printf("Enter claimed length: ");
	scanf("%d", &claimedLength);

	//user supplied data
	printf("Enter message: ");
	scanf("%9s", buffer); // limit input to avoid overflow

	printf("\n[Server Response]:\n");

	//print number of chars starting from first char of buffer
	//vulnerability: trusts claimedLength
	for (int i = 0; i < claimedLength; i++){
		printf("%c", buffer[i]);
	}

	printf("\n");

	return 0;
}
