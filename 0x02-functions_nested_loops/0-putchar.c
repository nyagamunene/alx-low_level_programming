#include "main.h"

int main(void)
{
	char message[] = "_putchar";
	int i = 0;

	do
	{
		_putchar(message[i]);
		i++;
	} while (message[i] != '\0');
	_putchar('\n');
	return (0);

}
