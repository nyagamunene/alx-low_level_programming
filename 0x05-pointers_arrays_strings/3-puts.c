#include "main.h"

/**
*_puts - prints string followed by line
*@str: The string pointer
*Return: None
*/
void _puts(char *str)
{
	int len = 0;

	for ( ; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
