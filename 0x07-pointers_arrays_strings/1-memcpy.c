#include "main.h"
/**
*_memcpy - copy from memory.
*@dest: Destination to be copied to.
*@src: Source to be copied from.
*@n: Size of mem.
*Return: Destination pointer.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
