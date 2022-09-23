#include "main.h"
/**
*rot13 - encoding string.
*@str: String pointer.
*Return: the string.
*/
char *rot13(char *str)
{
	int i = 0;
	int done = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 110) || (str[i] > 65 && str[i]  < 77))
		{
			str[i] += 13;
			done = 1;
		}
		while ((str[i] > 77 && str[i] < 91 && done == 0) || (str[i] > 109 && str[i] < 123 && done == 0))
		{
			str[i] -= 13;
		}
		i++;
		done = 0;
	}
	return (str);
}
