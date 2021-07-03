#include <stdio.h>
#include <stdlib.h>
//	stdlib.h header file is required to use the malloc() function.

/** Definition : The malloc() function reserves a block of memory of the specified number
 of bytes. And, it returns a pointer of void which can be casted into pointers of any form.
*/

int main()
{
	/**
	malloc() stands for memory allocation. It allocates a block memory to the given pointer.
	And returns the initial address of allocated memory to the pointer.
	It's syntax is:
	pointer = (type *)malloc(size);
	Both pointer type and malloc type has to be same.
	Size is the quantity of storage measured in bytes. 
	Size is genrelly calculated by sizeof(type) operator.
	*/
	
	int *number; 
	number = (int*)malloc(sizeof(int) * 1);
	
	// When malloc() cant allocate memory it returns a variable NULL.
	// So it is always best to check if malloc() successfully allocated memory. Otherwise the program can crash.	
	if(number == NULL)
	{
		printf("Error: Unable to allocate memory");
		exit(1);
	}
	
	printf("Input a number: ");
	scanf("%d", number);
	printf("\nYou entered: %d", *number);
	
	printf("\n\n Lets allocate 100 memory:\n");
	
	int i;
	for(i=0; i<10; i++)
	{
		printf("* %p\n", (int*)malloc(sizeof(int)*1));
	}
	
	printf("Look every time allocated memory block's address is different.");
	
	return 0;
}
