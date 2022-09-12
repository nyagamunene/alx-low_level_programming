#include "main.h"
/**
 * print_alphabet - print lowercase then new line
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	for ( ; a <= 'z'; a++)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
