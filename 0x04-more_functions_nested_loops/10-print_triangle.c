#include "main.h"
/**
 * print_triangle - draws triangle
 *@size: the size of triangle
 *Return: None
 */
void print_triangle(int size)
{
	int i, j, space;

	for (i = 1; i <= size; i++)
	{
		space = size - i;
		for (j = 1; j <= size; j++)
		{
			if (space > 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			space--;
		}
		_putchar('\n');
	}
}
