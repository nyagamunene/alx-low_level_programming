#include "main.h"
/**
*print_diagsums - calc sum of diagnols.
*@a: The matrix.
*@size: The size of matrix.
*Return: None.
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, len;

	i = 0;
	len = size * size;
	while (i < len)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		i++;
	}
	printf("%d, ", sum1);

	while (j < len)
	{
		if (j % (size - 1) == 0 && j != (len - 1) && j != 0)
			sum2 += a[j];
		j++;
	}
	printf("%d\n", sum2);
}
