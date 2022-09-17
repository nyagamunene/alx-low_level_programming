#include "main.h"
/**
 * print_number - prints numbers
 * @n: the number
 * Return: None
 */
void print_number(int n)
{
	long rev = 0, rem = 0, neg = 0;

	if (n > 0)
	{
		while (n != 0)
		{
			rem = n % 10;
			rev = rev * 10 + rem;
			n = n / 10;
		}
		while (rev != 0)
		{
			_putchar(rev % 10 + '0');
			rev = rev / 10;
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		neg = -1 * n;
		_putchar('-');
		while (neg > 0)
		{
			rem = neg % 10;
			rev = rev * 10 + rem;
			neg = neg / 10;
		}
		while (rev > 0)
		{
			_putchar(rev % 10 + '0');
			rev = rev / 10;
		}
	}
}
