#include "main.h"
/**
*_strncat - concatenates 2 strings
*@dest: the string to be appended to.
*@src: the string to be attached.
*@n: The number of characters to be appended.
*Return: The appended string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
