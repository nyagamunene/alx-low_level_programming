#include <stdio.h>
#include <stdlib.h>
/**
*main - change of coins.
*@argc: count arguments.
*@argv: arguments array.
*Return: 0 if success and 1 is error.
*/
int main(int argc, char *argv[])
{
	int change[] = {25, 10, 5, 2};
	int i, count = 0, cents = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 4; i++)
	{
		if (cents / change[i] > 0)
		{
			count += cents / change[i];
			cents = cents % change[i];
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", count + cents);
	return (0);
}
