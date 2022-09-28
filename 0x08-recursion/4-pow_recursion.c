#include "main.h"
/**
*_pow_recursion - power of number
*@x: base.
*@y: exponent.
*Return: the result.
*/
int _pow_recursion(int x, int y)
{
	int pow;

	if (y > 0)
	{
		pow = x * _pow_recursion(x, (y - 1));
		return (pow);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
