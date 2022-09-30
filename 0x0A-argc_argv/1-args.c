#include <stdio.h>
/**
*main - prints count of argument.
*@argc: arguments count.
*@argv: the array of arguments.
*Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
