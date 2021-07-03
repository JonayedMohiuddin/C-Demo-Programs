#include <stdio.h>

int main()
{
	// Structures are just packets of variables of different or same types. :)
	// Just google if you dont understand this. It is a easy topic to grasp I think. :)
	// struct ~ keyword is used to create a structure.
	// You can struct a structure even using other structs also.
	
	struct date
	{
		int day;
		int month;
		int year;
	};
	
	struct player
	{
		char name[32];
		int experience;
		struct date birthday;
	};
	
	// Declaring and Initializing a struct variable named user.
	// Just like declaring and initializing any variable of any type(int or float or...)
	struct player user;
	user.experience = 0;
	user.birthday.day = 0;
	user.birthday.month = 0;
	user.birthday.year = 0;
	
	printf(" GAME USER DATA FORM \n");
	printf("=====================\n");
	printf("> Name: ");
	//Reads full string input where scanf() reads until space( ) is encountered so gets() is better.
	gets(user.name); 
	printf("> Your Experience: ");
	scanf("%d", &user.experience);
	printf("> Your birthday (DD MM YY): ");
	scanf("%d %d %d", &user.birthday.day, &user.birthday.month, &user.birthday.year);
	
	printf("\n\n YOUR USER DATA\n");
	printf("================\n");
	printf("> Name: %s\n", user.name);
	printf("> Experience: %d level\n", user.experience);
	printf("> Birthday: %d/%d/%d\n", user.birthday.day, user.birthday.month, user.birthday.year);
	
	return 0;
}
