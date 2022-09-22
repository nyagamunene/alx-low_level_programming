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
		while (str[i] == 'a' || str[i] == 'A')
		str[i] = '4';
		while (str[i] == 'e' || str[i] == 'E')
		str[i] = '3';
		while (str[i] == 'o' || str[i] == 'O')
		str[i] = '0';
		while (str[i] == 't' || str[i] == 'T')
		str[i] = '7';
		while (str[i] == 'l' || str[i] == 'L')
		str[i] = '1';
		i++;
	}
	return (str);
}
