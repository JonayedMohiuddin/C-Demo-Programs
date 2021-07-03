#include <stdio.h>

int main()
{
	/** Using pointer to fill an array with 26 Alphabets**/
	
	// Important Note:
	// *p++ first does something to the value where p is pointing and then increments the pointer itself not the value;
	// Its combination of: *p and p++
	// (*p)++ first increments the data or peek value of p is pointing at and then uses the peek valu.
	
	char alphabet[26];
	char *p;
	
	p = alphabet;
	
	/* Fill the array using pointer */
	int i;
	for(i=0; i<26; i++)
	{
		*p++ = 'A' + i; 
		
		// pointer++ doesnt increment the pointer by 1 Byte but by 1 Unit.
		// You can see it by printing the pointers addresses.
	}
	
	/* Resetting the pointer at arrays start position */
	p = alphabet;
	
	/* Print the array using pointer */
	printf("Variable    = VALUE ;  ADDRESS\n\n");
	for(i=0; i<26; i++)
	{
		printf("numbers[%2d] =  %c   ; %p \n", i, *p, p);
		p++;
	}
	
	printf("\nLook at the adresses they are 16 bytes apart bcz char takes up 16 bytes space");
	
	return 0;
}
