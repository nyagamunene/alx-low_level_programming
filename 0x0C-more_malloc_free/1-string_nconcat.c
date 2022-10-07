#include "main.h"
/**
*string_nconcat - concatenates two strings.
*@s1: string 1.
*@s2: string 2.
*@n: size of s2 to be added to s1.
*Return: pointer to string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat = malloc(sizeof(s1) + n);
	unsigned int i, k;

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (k = 0; k < n; k++, i++)
	{
		concat[i] = s2[k];
	}
	concat[i] = '\0';
	return (concat);
}
