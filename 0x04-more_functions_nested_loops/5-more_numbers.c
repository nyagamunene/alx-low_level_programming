#include "main.h"
/**
*more_numbers - print number from 1 to 14, 10 times
*Return: None
*/
void more_numbers(void)
{
	int loop = 10;
	int a = 0;

	while (loop > 0)
	{
		for ( ; a <= 14; a++)
		{
			if (a < 10)
			{
				_putchar(a + '0');
			}
			else
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar('\n');
		a = 0;
		loop--;
	}
}
