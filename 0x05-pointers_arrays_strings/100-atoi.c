#include "main.h"
/**
 * @brief 
 * 
 */
int _atoi(char *s)
{
    int len = 0, i, num;

	while (s[len] != '\0')
	{
		len++;
	}

    for (i = 0; i < len; i++)
    {
        if (s[i] > 47 && s[i] < 58)
        {
            num = (s[i] + '0') * 10;
        }
    }

    return (num);
}