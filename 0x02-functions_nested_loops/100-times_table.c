#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: The variable
 * Return: 0
 */
void print_times_table(int n)
{
	int count = 0, status = 0, result = 0;

	if (n >= 0 && n < 16)
	{
		while (count <= n)
		{
			if (result > 99)
			{
				_putchar(result / 100 + '0');
				_putchar(result / 10 % 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				if (status != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			status++;
			if (status % (n + 1) != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			result += count;
			if (status % (n + 1) == 0)
			{
				count++;
				result = 0;
				status = 0;
				_putchar('\n'); }}}}
