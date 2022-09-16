#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: Numers of time to be printed
*Return: None
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				_putchar(92);
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
				if (j == (i - 1))
				{
					_putchar(92);
				}
			}
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
