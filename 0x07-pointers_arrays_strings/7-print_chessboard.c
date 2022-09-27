#include "main.h"
/**
*print_chessboard - Prints the elements in 8 by 8 matrix.
*@a: the matrix.
*Return: None
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		j = 0;
	}
}
