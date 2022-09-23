#include "main.h"
/**
 * print_array - prints elements in array
 * @a: The array pointer
 * @n: The number of elements
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}