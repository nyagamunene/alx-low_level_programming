#include <stdio.h>
/**
 * main - fibonacci sequence upto 50
 * Return: 0
 */
int main(void)
{
	int first = 1, second = 1, third = 0, count = 50;

	printf("%d, ", first);
	for ( ; second < count; )
	{
		printf("%d, ", second);
		first -= second;
		second += first;
		first = second - first;

		second = first + second;
	}
	printf("\n");
	return (0);
}
