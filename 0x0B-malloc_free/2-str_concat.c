#include "main.h"
/**
*str_concat - concatenate 2 strings using malloc.
*@s1: First string.
*@s2: Second string.
*Return: Pointer to new combined string
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1, size2;
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		return (s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (s1);
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(sizeof(char) * (i + j) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (size1 = 0; size1 < i; size1++)
	{
		concat[size1] = s1[size1];
	}
	for (size2 = 0; size2 < j; size2++)
	{
		concat[i + size2] = s2[size2];
	}
	return (concat);
}
