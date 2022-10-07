#include "main.h"
/**
*array_range - creates array.
*@min: smallest number in array.
*@max: largest number in array.
*Return: pointer to array.
*/
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max || min == max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[i] = i;
	}
	return (array);
}
