#include <stdio.h>
/**
 * main - sum of even values in fibonacci sequence upto 4000000
 * Return: 0
 */
int main(void)
{
	unsigned long int first = 1, second = 1, sum = 0;

	for ( ; second < 4000000; )
	{
		if (second % 2 == 0)
			sum += second;
		first -= second;
		second += first;
		first = second - first;

		second = first + second;
	}
	printf("%ld\n", sum);
	return (0);
}
