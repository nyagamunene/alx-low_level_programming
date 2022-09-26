#include "main.h"
/**
*_strchr - locate char in string.
*@s: the string.
*@c: the character.
*Return: The occurence of the char
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
