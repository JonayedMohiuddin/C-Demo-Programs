#include <stdio.h>
int main()
{
	/* Using pointer to assign values. */
	
	char a,b,c;
	char *p;
	
	p  = &a;  // p pointing at a's address. p -> a
	*p = 'A'; // using *p to assign the value at the address p is pointing at.
	
	p  = &b;  // p pointing at b's address. p -> b
	*p = 'B'; // using *p to assign the value at the address p is pointing at.
	
	p  = &c;  // p pointing at c's address. p -> c
	*p = 'C'; // using *p to assign the value at the address p is pointing at.
	
	printf("Know your %c%c%cs\n",a,b,c);
	
	return(0);
}
