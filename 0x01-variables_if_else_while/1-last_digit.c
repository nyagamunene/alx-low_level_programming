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
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
