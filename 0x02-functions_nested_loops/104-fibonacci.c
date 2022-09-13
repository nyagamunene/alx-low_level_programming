#include <stdio.h>
/**
 * main - first 98 values in fibonacci sequence
 * Return: 0
 */
int main(void)
{
	unsigned long int first = 1, second = 1;
	int i, count = 98;

	for (i = 0 ; i < count; i++)
	{
		printf("%lu", second);
		if (i < count - 1)
		{
			printf(", ");
		}
		first -= second;
		second += first;
		first = second - first;

		second = first + second;
	}
	printf("\n");
	return (0);
}
