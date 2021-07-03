#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *inputBuffer; // Fancy name huh :)
	inputBuffer = (char*)malloc(sizeof(char)*1024); // Allocates 1KB storage for getting input of 1024 charecter.
	
	if(inputBuffer == NULL)
	{
		printf("Unable to allocate memory!");
		exit(1);
	}
	
	printf("Type something long and boring:");
	fgets(inputBuffer, 1023, stdin); // Takes 1023 Byte input and keeps 1 Byte for '\O' Null char.
	
	printf("You typed: %s", inputBuffer);
	
	return 0;
}
