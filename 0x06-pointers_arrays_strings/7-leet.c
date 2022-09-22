#include "main.h"
/**
 * leet - Encodes string into 1337.
 * @str: The string pointer.
 * Return: The encoded string.
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = (str[i] == 'a' || str[i] == 'A') ? '4' : str[i];
		str[i] = (str[i] == 'e' || str[i] == 'E') ? '3' : str[i];
		str[i] = (str[i] == 'o' || str[i] == 'O') ? '0' : str[i];
		str[i] = (str[i] == 't' || str[i] == 'T') ? '7' : str[i];
		str[i] = (str[i] == 'l' || str[i] == 'L') ? '1' : str[i];
		i++;
	}
	return (str);
}
