#include "main.h"
/**
*_strcmp - compares 2 strings
*@s1: First string pointer
*@s2: Second string pointer
*Return: return non zero for inequality and 0 for equality
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
