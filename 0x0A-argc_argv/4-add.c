#include <stdio.h>
#include <stdlib.h>
/**
*main - addition.
*@argc: count of arguments.
*@argv: arguments.
*Return: 1 if error and 0 if success
*/
int main(int argc, char *argv[])
{
	int i = 1, add = 0;

	if(argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if(atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
