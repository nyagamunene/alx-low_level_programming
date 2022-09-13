#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: The Number
 * Return: 0
 */
int print_last_digit(int n)
{
	int last;

	last =  (n >= 0) ? n % 10 : -n % 10;
	_putchar(last + '0');
	return (last);
}
