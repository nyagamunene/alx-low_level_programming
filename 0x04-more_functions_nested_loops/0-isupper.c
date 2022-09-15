#include "main.h"
/**
*_isupper - checks for upper
*@c: The characters
*Return: 1 / 0
*/
int _isupper(int c)
{
	if (c > 64 && c <  91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
