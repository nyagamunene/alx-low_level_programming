#include <stdio.h>
/**
*main - main block
*Description:Single digits using putchar
*Return: 0
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i+'0');
		i++;
	}
	putchar('\n');
	return (0);
}
