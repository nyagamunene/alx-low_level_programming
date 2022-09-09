#include <stdio.h>
/**
*main - main block
*Description: print single digit number
*Return: 0
*/
int main(void)
{
	int num = 0;

	for (; num <= 9; )
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
