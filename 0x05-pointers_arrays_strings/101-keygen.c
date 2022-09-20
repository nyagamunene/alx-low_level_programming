#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generate random valid password
*Return: 0
*/
int main(void)
{
	srand(time(NULL));
	int random;
	int i;
	int range = 126 + 1;

	for (i = 0; i < range; i++)
	{
		random = rand() % range + 1;
		printf("%c", random);
	}
	return (0);
}
