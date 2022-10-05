#include "main.h"
/**
*argstostr - concat all arguments of program
*@ac: len of argument
*@av: Arguments.
*Return: the pointer to concatenated arguments
*/
char *argstostr(int ac, char **av)
{

	char *concat, *pointer;
	int i, j, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0, len = 0; i < ac; i++)
	{
		j = 0;
		while (*(*(av + i) + j) != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	len++;
	pointer = malloc(len * sizeof(char));
	if (pointer == NULL)
	{
		return (NULL);
	}
	concat = pointer;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*pointer = av[i][j];
			pointer++;
		}
		*pointer = '\n';
		pointer++;
	}

	return (concat);

}
