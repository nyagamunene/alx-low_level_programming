#include <stdio.h>
/**
*main - main block
*Description: Hexa decimal in small
*Return: 0
*/
int main(void)
{
	int hexN = 0;
	char hexL = 'a';

	while (hexN <= 9)
	{
		putchar(hexN + '0');
		hexN++;
	}
	while (hexL <= 'f')
	{
		putchar(hexL);
		hexL++;
	}
	putchar('\n');
	return (0);
}
