#include <stdio.h>
/**
*main - main block
*Description: Lowercase reverse
*Return: 0
*/
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}

