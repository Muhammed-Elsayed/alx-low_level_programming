#include "main.h"


/**
 *puts_half -  function that prints half of a string, followed by a new line.
 *@str: pointer to a string
 *
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		for (; n <= (len - 1); n++)
		{
			_putchar(str[n]);
		}
	}

	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (; n < (len - 1); n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
