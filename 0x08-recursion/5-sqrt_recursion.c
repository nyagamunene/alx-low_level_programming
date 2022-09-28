#include "main.h"
int Sqrt(int n, int i);
/**
*_sqrt_recursion - calculate square root.
*@n: the number.
*Return: result.
*/
int _sqrt_recursion(int n)
{
	return (Sqrt(n, 1));
}
/**
*Sqrt - square root assistant.
*@n: the number being checked.
*@i: the increamenting value.
*Return: results
*/
int Sqrt(int n, int i)
{
	int square = i * i;

	if (square == n)
	{
		return (i);
	}
	else if (square < n)
	{
		return (Sqrt(n, ++i));
	}
	else
	{
		return (-1);
	}

