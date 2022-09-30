#include <stdio.h>
/**
*main - print arguments
*@argc: argument counts
*@argv: the arguments
*Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
