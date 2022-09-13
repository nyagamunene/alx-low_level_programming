#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers between an integer and 98
 * @n: The integer number
 * Return: None
 */
void print_to_98(int n)
{
	int increment;

	increment = (n <= 98) ? 1 : -1;
	for (; n != 98; n += increment)
	{
		printf("%d, ", n);
	}
	printf("%d\n", 98);
}
