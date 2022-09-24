#include "main.h"
#include <string.h>
/**
*infinite_add - addition.
*@n1: string pointer 1.
*@n2: string pointer 2.
*@r: result of addtion.
*@size_r: length of r
*@Return: string of addition or 0.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long num1 = stoi(n1);
	unsigned long num2 = stoi(n2);
	unsigned long result = num1 + num2;

	if (result / size_r > 0)
	{
		return (0);
	}
	sprintf(r, "%lu", result);
	return (r);
}
