#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
* main - a function that prints using puts
* Return: 0
*/
int main(void)
{
	int len = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
	return (1);
}
