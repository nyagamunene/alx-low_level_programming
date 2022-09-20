#include "main.h"
/**
 * _strcpy - function copies string from source to destination
 * @dest: The target
 * @src: The source of string
 * Return: Char type
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
