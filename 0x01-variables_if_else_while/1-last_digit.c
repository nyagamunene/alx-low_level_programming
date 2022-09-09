#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - main block
*Description: Checks last digit
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last = n % 10;

	if (last > 5)
	{
		printf("%i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("%i is 0 and is 0\n", n);
	}
	else
	{
		printf("%i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
