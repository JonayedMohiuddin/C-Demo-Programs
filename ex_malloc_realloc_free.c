#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *pointer;
	int size, newSize;
	int i;
	
	// Or rather ask how many ints blocks he want in his memory.
	printf("Enter size of memory you want to allocate (type int)\n?>  ");
	scanf("%d", &size);
	
	 //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
	//      ALLOCATING MEMORY      //
   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
	
	puts("\nAllocating memory. And populating that memory with values.");
	
	// ALLOCATION
   	pointer = (int *)malloc(sizeof(int) * size);
	if(pointer == NULL)
	{
		printf("Error: Oops! Failed to allocate memory.");
		exit(1);
	}
	
	// PUTTING SOME VALUE ON THOSE MEMORY
	for(i=0; i<size; i++)
	{
		*(pointer + i) = (i+1)*100; // Just increasing the pointer address and saving as value on them
	}
	
	puts("Allocated memory addresses and values are:");
	
	// PRINTING ALLOCATED MEMORY ADDRESSES AND VALUES
	for(i=0; i<size; i++)
	{
		printf("[%02d] %p = %d\n", i+1, pointer, *(pointer+i));
	}
	
	 //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
	//      REALLOCATING MEMORY      //
   //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
	
	printf("\nEnter new size of memory for reallocation:\n?>  ");
	scanf("%d", &newSize);
	puts("\nReallocating memory.");
	
	// REALLOCATION
	pointer = realloc(pointer, sizeof(int)*newSize);
	
	if(pointer == NULL)
	{
		puts("Error: Oops! Failed to reallocate memory.");
		exit(1);
	}
	
	// PRINTING REALLOCATED MEMORY ADDRESSES AND VALUES IN THEM
	puts("Reallocated memory addresses and values are:");
	
	for(i=0; i<newSize; i++)
	{
		printf("[%02d] %p = %d\n", i+1, (pointer+i), *(pointer+i));
	}
	
	// PUTTING SOME EXPLANATION
	puts("\n## realloc expands or shrinks allocated memory according to users need.");
	puts("But compiler doesnt always expand or shrink the old memory. Sometime it reallocates ");
	puts("memory elsewhere and copies all old memory data or values there.");
	
	 //$$$$$$$$$$$$$$$$$$$$$$$$$//
	//      FREEING MEMORY     //
   //$$$$$$$$$$$$$$$$$$$$$$$$$//
	
	/* “free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own.
	Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it. */
	
	puts("\nDeallocating or Freeing memory.");
	
	// DEALLOCATION
	free(pointer);
	
	puts("Memory deallocated succesfully!");
	
	return 0;
	
	 //$$$$$$$$$$$$$$$$//
	//      NOTES     //
   //$$$$$$$$$$$$$$$$//
	
	// Note : I didn't populate reallocated memories with values...so if you expand memory allocation then there will be some garbage values on them.
	// Note : You can replace *(pointer + i) with pointer[i]. They are same.
}
