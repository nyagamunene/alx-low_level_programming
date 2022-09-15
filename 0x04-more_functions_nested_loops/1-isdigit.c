#include "main.h"
/**
*_isdigit - check if its a digit
*@c: the character
*Return: 1 / 0
*/
int _isdigit(int c)
{
	return ((c > 47 && c < 58) ? 1 : 0);
}
