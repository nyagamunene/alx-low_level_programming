#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - main block
*Description: a random number is generated every time function is run
*and checked if positive, negative or zero
*Return:0
*/
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RANDMAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
