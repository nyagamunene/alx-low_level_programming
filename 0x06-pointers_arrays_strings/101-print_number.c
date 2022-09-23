#include "main.h"
void print(int n);
/**
*print_number - see main.
*@n: the parameters.
*Return: None.
*/
void print_number(int n)
{
	if (n > 0)
	{
		print(n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
		n *= -1;
		print(n);
	}
}
/**
 * print - prints.
 * @n: the parameter.
 * Return: None
 */
void print(int n)
{
	int rev = 0;

	while (n / 10 != 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	rev = (rev * 10) + n;
	while (rev / 10 != 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
	_putchar(rev + '0');
}
