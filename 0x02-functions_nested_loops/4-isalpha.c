#include "main.h"
/**
 * _isalpha - lowercase / uppercase
 * @c: The character been checked
 * Return: 1 / 0
 */
int _isalpha(int c)
{
	return (((c > 65 && c < 91) || (c > 96 && c < 123)) ? 1 : 0);
}
