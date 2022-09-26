#include "main.h"
/**
*_memset - set memory.
*@s: string pointer.
*@b: the character to be filled.
*@n: the size.
*Return: the string character.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
