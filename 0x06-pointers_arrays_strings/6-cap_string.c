#include "main.h"
int isPresent(int n);
/**
*cap_string - Capitalizes every word.
*@str: The string pointer.
*Return: The capitalized String.
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (isPresent(str[i]))
		{
			if (str[i + 1] > 96 && str[i + 1] < 122)
			{
				str[i + 1] -= 32;
				i += 2;
				continue;
			}
		}
		i++;
	}
	return (str);
}
/**
*isPresent - check presence of element.
*@n: The parameter.
*Return: 1 / 0
*/
int isPresent(int n)
{
	int arr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int arrLen = sizeof(arr) / sizeof(int);
	int i;

	for (i = 0; i < arrLen; i++)
	{
		if (arr[i] == n)
		{
			return (1);
		}
	}
	return (0);
}
