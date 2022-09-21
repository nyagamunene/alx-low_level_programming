#include "main.h"
/**
*_strncpy - copies string characters.
*@dest: the final string.
*@src: the string to be copied.
*@n: the number of characters.
*Return: the final string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
