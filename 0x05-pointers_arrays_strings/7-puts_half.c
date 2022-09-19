#include "main.h"

/**
 * puts_half - prints half the string
 * @str: The string pointer
 * Return: None
 */
void puts_half(char *str)
{
	int len = 0, center, i;

	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	center = len / 2;

	for (i = center; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
