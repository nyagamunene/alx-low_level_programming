#include "main.h"
/**
*_strspn - gets length of a prefix substring.
*@s: source.
*@accept: to be checked.
*Return: count of bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (count);
}
