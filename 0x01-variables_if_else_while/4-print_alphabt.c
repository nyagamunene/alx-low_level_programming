#include <stdio.h>
/**
*main - main block
*Description: Print lowecase except for q and e
*Return: 0
*/
int main(void)
{
	char lower = 'a';

	do {
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	lower++;
	} while (lower <= 'z');
	putchar('\n');
	return (0);
}
