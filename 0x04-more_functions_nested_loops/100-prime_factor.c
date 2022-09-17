#include <stdio.h>
#include <math.h>
/**
 * main - prime factors
 * Return: 0
 */
int main(void)
{
	unsigned long num, i;

	num = 1231952;

	for (i = (int)sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%lu, ", i);
			break;
		}
	}
	printf("\n");
	return (0);
}
