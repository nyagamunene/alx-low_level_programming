#include <stdio.h>
/**
*main -main block
*Description: Combination of 2 digits
*Return: 0
*/
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			if (digit1 != digit2)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				if (digit2 < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	if (digit1 < 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	return (0);
}
