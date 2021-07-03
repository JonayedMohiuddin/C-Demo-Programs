#include <stdio.h>

int main()
{
	/** Using pointer to fill an array **/
	
	int numbers[10];
	int *pointer;
	
	pointer = numbers;
	
	/* Fill the array using pointer */
	int i;
	for(i=0; i<10; i++)
	{
		*pointer = i + 1;
		pointer++;
		// pointer++ doesnt increment the pointer by 1 Byte but by 1 Unit.
		// You can see it by printing the pointers addresses.
	}
	
	/* Resetting the pointer at arrays start position */
	pointer = numbers;
	
	/* Print the array using pointer */
	printf("Variable   = VALUE ;  ADDRESS\n\n");
	for(i=0; i<10; i++)
	{
		printf("numbers[%d] =  %2d   ; %p \n", i, *pointer, pointer);
		pointer++;
	}
	
	printf("\nLook at the adresses they are 4 bytes apart bcz int takes up 4 bytes space");
	
	return 0;
}
