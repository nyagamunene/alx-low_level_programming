#include "main.h"
/**
 * print_square - draws a square
 * @size: The size of square
 * Return: None
 */
void print_square(int size)
{
	int i = 1;

	if (size > 0)
	{
		while (i <= (size * size))
		{
			_putchar('#');
			if (i % size == 0)
			{
				_putchar('\n');
			}
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
