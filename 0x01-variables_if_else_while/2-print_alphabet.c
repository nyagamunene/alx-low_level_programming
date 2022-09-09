#include <stdio.h>
#include <string.h>

/**
*main - main block
*Description: Prints alphabets in lowercase using putchar
*Return: 0
*/
int main(void)
{
	size_t i = 0;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (; i < strlen(alphabets); )
	{
		putchar(alphabets[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
