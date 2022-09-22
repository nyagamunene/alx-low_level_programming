#include "main.h"
/**
*string_toupper - change lowercase letter with uppercase.
*@str: The string pointer.
*Return: the uppercase string.
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
