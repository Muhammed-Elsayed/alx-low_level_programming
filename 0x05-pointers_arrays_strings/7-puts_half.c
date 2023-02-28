#include "main.h"


/**
 *puts_half -  function that prints half of a string, followed by a new line.
 *@str: pointer to a string
 *
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 1; str[len] != '\0'; len++)
	{
	}

	n = len / 2;

	for (; n <= (len - 1); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
