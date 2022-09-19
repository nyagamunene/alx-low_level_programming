#include "main.h"
/**
 * rev_string - function that reverses string
 * @s: The string pointer
 * Return: None
 */
void rev_string(char *s)
{
	int len = 0, count, i;
	char rev;

	while (s[len] != '\0')
	{
		len++;
	}
	count = len;
	len--;
	for (i = 0; i < count / 2; i++)
	{
		rev = s[len];
		s[len] = s[i];
		s[i] = rev;
		len--;
	}
}
