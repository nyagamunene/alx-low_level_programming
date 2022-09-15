#include "main.h"
/**
*print_numbers - prints the numbers from 0 to 9
*Return: None
*/
void print_numbers(void)
{
	char a = 'a';

	for ( ; a <= 9; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
