#include "main.h"
/**
*print_diagsums - calc sum of diagnols.
*@a: The matrix.
*@size: The size of matrix.
*Return: None.
*/
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0, len;

	len = size * size;
	while (i < len)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		i++;
	}
	while (j < len)
	{
		if (j % (size - 1) == 0 && j != (len - 1) && j != 0)
			sum2 += a[j];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
