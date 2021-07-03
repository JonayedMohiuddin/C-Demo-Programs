#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* If the dynamically allocated memory is insufficient or more than required, you can
   change the size of previously allocated memory using the realloc() function.
SYNTAX: realloc(pointer, size);
pointer is reallocated with a new size.
So you can expand buffer if needed or free memory if insufficent by using reallocate() function.
*/

int main()
{
	//####### ALLOCATING MEMORY FOR INPUT BUFFER #######//
	
	char *inputBuffer; // Fancy name for a pointer huh :)
	inputBuffer = (char*)malloc(sizeof(char)*1024); // Allocates 1KB storage for getting input of 1024 charecter.
	
	// Checks if the memory allocation operation was possible.
	if(inputBuffer == NULL)
	{
		printf("Unable to allocate MEMORY!");
		exit(1);
	}
	
	printf("Type something long and boring:");
	fgets(inputBuffer, 1023, stdin); // Takes 1023 Byte input and keeps 1 Byte for '\O' Null char.
	
	//####### REALLOCATING BUFFER #######//
	
	int length = strlen(inputBuffer); // This variable keeps the input strings length
	
	// Checks if the meomory reallocation was possible.
	if(realloc(inputBuffer, sizeof(int)*(length-1)) == NULL)
	{
		printf("Unable to reallocate BUFFER!");
		exit(1);
	}
		
	printf("You typed: %s", inputBuffer);
	
	return 0;
}

