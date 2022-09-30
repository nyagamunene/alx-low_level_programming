#include <stdio.h>
/**
*main - prints name of program.
*@argc: size of array argv.
*@argv: the array.
*Return: 0 if successful.
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
