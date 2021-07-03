#include <stdio.h>
int main()
{
	/* Using pointer to read values. */
	
	char a,b,c; // 3 char variables.
	char *p;    // A pointer which can point at any char type variables address.
	
	a = 'A'; b = 'B'; c = 'C';
	printf("Know your ");
	
	p = &a; // Initialize. p pointer pointing at a's address.
	putchar(*p); // Use. Using *p to read the value at the address p is pointing at.
	
	p = &b; // Initialize. p pointer pointing at b's address.
	putchar(*p); // Use. Using *p to read the value at the address p is pointing at.
	
	p = &c; // Initialize. p pointer pointing at c's address.
	putchar(*p); // Use. Using *p to read the value at the address p is pointing at.
	
	printf("s\n");
	
	return(0);
}
