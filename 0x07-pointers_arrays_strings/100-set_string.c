#include "main.h"
/**
*set_string - Set value of a pointer to a char.
*@s: The pointer.
*@to: The char.
*Return: None.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
