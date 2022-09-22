#include "main.h"
/**
*reverse_array - reverses array.
*@a: The array pointer.
*@n: The number of elements in array.
*Return: None
*/
void reverse_array(int *a, int n)
{
	int p, i = 0, j = n - 1;

	while (i < (n + 1) / 2)
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
		i++;
		j--;
	}
}
