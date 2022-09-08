#include <stdio.h>
/**
* main - prints of data types
* Return: 0
*/
int main(void)
{
	printf("size of int: %i bytes\n", sizeof(int));
	printf("size of short int: %i bytes\n", sizeof(short int));
	printf("size of long int: %i bytes\n", sizeof(long int));
	printf("size of long long int: %i bytes\n", sizeof(long long int));
	printf("size of float: %i bytes\n", sizeof(float));
	printf("size of double: %i bytes\n", sizeof(double));
	printf("size of char: %i bytes\n", sizeof(char));
	printf("size of void: %i bytes\n", sizeof(void));
	return (0);
}
