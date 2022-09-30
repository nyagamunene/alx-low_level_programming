#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies numbers.
*@argc: the count of arguments.
*@argv: the arguments array.
*Return: 0 if successful.
*/
int main(int argc, char *argv[])
{
	int i = 1, prod = 1;
	int Int;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}

	while (i < argc)
	{
		Int = atoi(argv[i]);
		prod *= Int;
		i++;
	}
	printf("%d\n", prod);
	return (0);
}
