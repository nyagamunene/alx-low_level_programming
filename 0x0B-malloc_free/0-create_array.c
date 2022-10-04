#include "main.h"
/**
*create_array - creates an array.
*@size: the length of the array
*@c: Specific character.
*Return: char pointer
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(*array));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <  size; i++)
	{
		array[i] = c;
	}
	return (array);
}
