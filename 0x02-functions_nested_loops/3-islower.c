#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: Character to be checked is lowercase
 * Return: 1 / 0
 */
int _islower(int c)
{
	return ((c > 96 && c < 123) ? 1 : 0);
}
