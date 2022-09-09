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
	float n;

	srand((unsigned int)time(NULL));
	n = (double)rand() - ((double)RAND_MAX / 2);

	if (n > 0)
	{
		printf("%f is positive", n);
	}
	else if (n == 0)
	{
		printf("%f is zero", n);
	}
	else
	{
		printf("%f is negative", n);
	}
	return (0);
}
