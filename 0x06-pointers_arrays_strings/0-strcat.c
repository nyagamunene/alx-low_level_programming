#include "main.h"

/**
*_strcat - concatenated two strings
*@dest: The string to be appended to.
*@src: The string to be joined.
*Return: string that has been concatenated
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, p;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	for (k = j, p = 0; k < (i + j); k++, p++)
	{
		dest[k] = src[p];
	}
	dest[k] = '\0';
	return (dest);
}
