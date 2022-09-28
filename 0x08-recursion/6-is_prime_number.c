#include "main.h"
int prime(int n, int i);
int prime(int n, int i);
int Sqrt(int n, int i);
/**
*is_prime_number - check if prime number.
*@n: the integer.
*Return: 1 for prime & 0 for non prime.
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}
/**
*prime - prime number assistant.
*@n: number to be checked.
*@i: incrementing value
*Return: result.
*/
int prime(int n, int i)
{
	if (i > 2 && n % i == 0)
	{
		return (0);
	}
	else if (Sqrt(n, 1) < i)
	{
		return (1);
	}
	else
	{
		return (prime(n, ++i));
	}
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
}
