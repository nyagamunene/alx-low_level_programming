#include "main.h"
/**
 * Function prints if number is positive or negative
 * @param i
 * The number being checked.
 * Return: None
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		printf("%i id negative\n", i);
	}
}
