#include "main.h"
/**
 * _atoi - string to integer
 * @s: string pointer
 * Return: Integer
 */
int _atoi(char *s)
{
	int num = 0, i;
	int sign = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}

		if (s[i] > 47 && s[i] < 58)
		{
			if (num < 0)
			{
				num = (num * 10) - (s[i] - '0');
			}
			else
			{
				num = (s[i] - '0') * -1;
			}
			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				break;
			}
		}
	}
	if (sign < 0)
	{
		num =  num * -1;
	}
	return (num);
}
