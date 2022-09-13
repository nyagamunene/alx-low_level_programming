#include <stdio.h>
/**
 * main - fibonacci sequence upto 50
 * Return: 0
 */
int main(void)
{
	unsigned long int first = 1, second = 1;
	int i, count = 50;

	for (i = 0 ; i < count; i++)
	{
		printf("%ld", second);
		if (i < 49)
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
