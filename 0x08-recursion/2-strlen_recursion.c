#include "main.h"


/**
 *_strlen_recursion - getting the length of a string .
 *@s: ptr to a string .
 *Return: int (the length of the str) .
 */


int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	else
		return (1 + _strlen_recursion(++s));
}
