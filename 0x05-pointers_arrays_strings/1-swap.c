#include "main.h"
/**
*swap_int - function tha swaps integers
*@a: The first integer
*@b: The second integer
*Return: None
*/
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
