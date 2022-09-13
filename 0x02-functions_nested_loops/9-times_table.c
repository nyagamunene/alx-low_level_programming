#include "main.h"
/**
 * times_table - 9 times table
 * Returns: 0
 */
void times_table(void)
{
	int increment = 0;
	int i, j, result;

	for (j = 0; j <= 9; j++)
	{
		result = 0;
		for (i = 0; i <= 9; i++)
		{
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			result += increment;
			if (i < 9)
			{
				_putchar(',');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		increment++;
		_putchar('\n');
	}
}
