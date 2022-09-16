#include "main.h"
/**
*print_line - draws staright line in the terminal
*@n: number of times the character is printed
*Return: 0
*/
void print_line(int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
