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
	long int n;

	srand(time(NULL));
	n = rand() - (RAND_MAX / 2);

	if (n > 0)
	{
		printf("%l is positive", n);
	}
	else if (n == 0)
	{
		printf("%l is zero", n);
	}
	else
	{
		printf("%l is negative", n);
	}
	return (0);
}
