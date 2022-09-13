#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 * Return: None
 */

void print_alphabet_x10(void)
{
	int loops = 10;
	char i;

	while (loops <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		loops++;
	}
}
