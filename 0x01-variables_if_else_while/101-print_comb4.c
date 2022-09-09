#include <stdio.h>
/**
*main -main block
*Description: Combinstion of 3 digits
*Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 1000; num++)
	{
		int i = num / 100;
		int j = (num / 10) % 10;
		int k = num % 10;

		if (i < j && j < k)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');

			if (num < 750)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

