#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: The string pointer
 * Return: None
 */
void puts2(char *str)
{
	int len = 0;

	for ( ; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
