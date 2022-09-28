#include "main.h"
/**
*factorial - calculates the factorial of a number.
*@n: the number.
*Return: the factorial
*/
int factorial(int n)
{
	if (n > 2)
	{
		return (n * factorial(n - 1));
	}
	else if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1);
	}
}
