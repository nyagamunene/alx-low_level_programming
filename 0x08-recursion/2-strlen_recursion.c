#include "main.h"
/**
*_strlen_recursion - length of string.
*@s: the string pointer.
*Return: None.
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i = _strlen_recursion(++s) + 1;
	return (i);
}
