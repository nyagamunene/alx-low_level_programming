#include <stdio.h>
/**
*main - main block
*Description: Single digit numbers
*Return: 0
*/
int main(void)
{
	int num = 0;

	for (; num <= 9; )
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	return (0);
}
