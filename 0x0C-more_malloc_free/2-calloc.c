#include "main.h"
/**
*_calloc - allocate memory for array.
*@nmemb: number of arrays.
*@size: the size of bytes.
*Return: the pointer to memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
