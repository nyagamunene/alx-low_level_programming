#include "main.h"
/**
*argstostr - concat all arguments of program
*@ac: len of argument
*@av: Arguments.
*Return: the pointer to concatenated arguments
*/
char *argstostr(int ac, char **av)
{

	char *a, *concat;
	int i, j, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, len++)
			;
		len++;
	}
	len++;

	a = malloc(len * sizeof(char));
	if (a == NULL)
		return (NULL);

	concat = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (concat);

}
