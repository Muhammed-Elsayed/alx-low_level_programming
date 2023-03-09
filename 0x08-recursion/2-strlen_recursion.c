#include "main.h"


/**
 *
 *
 *
 */


int _strlen_recursion(char *s)
{
	int counting = 0;

	if (*s == '\0')
	{
		return ;
	}
	else
	{
		counting++;
		_strlen_recursion(s + 1);
	}

	return (counting);
}
