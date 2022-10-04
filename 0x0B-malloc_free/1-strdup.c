#include "main.h"
/**
*_strdup - Copies string using malloc
*@str: string to be copied.
*Return: Pointer to new string.
*/
char *_strdup(char *str)
{
	char* New;
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	New = malloc(sizeof(char) * size + 1);
	if (New == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		New[i] = str[i];
	}
	
	return (New);
}
