#include "main.h"
/**
*print_diagsums - calc sum of diagnols.
*@a: The matrix.
*@size: The size of matrix.
*Return: None.
*/
void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0;
	i = 0;
	j = (size - 1);

	for ( ; i < (size * size), j < (size * size) - (size - 1); )
	{
		diag1 += a[i];
		diag2 += a[j];
		i += (size+1);
		j += (size-1);
	}
	printf("%d, %d\n", diag1, diag2);

}
