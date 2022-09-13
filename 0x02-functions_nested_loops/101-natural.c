#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 between 0 and 1024
 * Return: 0
 */
int main(void)
{
	int count, sum = 0, num = 1024;

	for (count = 0; count < num; count++)
	{
		sum += (count % 3 == 0 || count % 5 == 0) ? count : 0;
	}
	printf("%d\n", sum);
	return (0);
}
