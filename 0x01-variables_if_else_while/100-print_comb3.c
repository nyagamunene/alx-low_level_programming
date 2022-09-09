#include <stdio.h>
/**
*main -main block
*Description: Combination of 2 digits
*Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		int i = num / 10;
		int j = num % 10;

		if (i < j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
