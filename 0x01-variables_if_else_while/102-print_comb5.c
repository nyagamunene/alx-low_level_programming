#include <stdio.h>
/**
*main - main block
*Description: combinations of 2 2-digit numbers
*Return: 0
*/
int main(void)
{
	int num1, num2;
	int a, b, c, d;
	for (num1 = 0; num1 <= 99; num1++)
	{
		a = num1 / 10;
		b = num1 % 10;

		for (num2 = 0; num2 <= 99; num2++)
		{
			c = num2 / 10;
			d = num2 % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if(a != 9 || b != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
