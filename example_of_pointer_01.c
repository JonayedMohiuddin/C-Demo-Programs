#include <stdio.h>

int main()
{
	// lead is a variable and sidekick is a pointer poiting at lead's address.
	// So basically sidekick's content or value is the address of lead whick is &lead.
	// We can also manipulate(view/edit/something else) the value of lead variable by using *sidekick.
	// The pointer of a variable has to be the same type as the variable itself!
	
	char lead;
	// Pointer declaration : type *name
	char *sidekick;
	
	lead = 'A'; /* initialize char variable */
	sidekick = &lead; /* initialize pointer IMPORTANT! */
	
	printf("About variable 'lead':\n");
	printf("Size:       %d\n", sizeof(lead));
	printf("Contents*:  %c\n", lead);
	printf("Location*:  %p\n", &lead);
	printf("\n");
	
	printf("And variable 'sidekick':\n");
	printf("Size:        %d\n", sizeof(sidekick));
	printf("Contents*:   %p\n", sidekick);
	printf("Location:    %p\n", &sidekick);
	printf("Peek value*: %c\n", *sidekick);
	
	return(0);
}
