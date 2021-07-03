#include <stdio.h>

int main()
{
	char board[3][3] = {
		{'A', 'B', 'C'},
		{'D', 'E', 'F'},
		{'G', 'H', 'I'}};
		
	char *pBoard = &board[0][0];
	
	int i;
	for(i=0; i<9; i++)
	{
		printf("%c \n", *(pBoard+i));
	}
		
	return 0;
}
