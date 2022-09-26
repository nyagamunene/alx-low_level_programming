#include "main.h"
/**
*_strpbrk - locate first occurence.
*@accept: Matching string pointer.
*@s: String pointer.
*Return: the occurence.
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *str;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				str = &s[i];
				return (str);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
