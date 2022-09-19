#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: The string pointer
 * Return: None
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for ( ; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
