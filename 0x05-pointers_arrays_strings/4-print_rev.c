#include "main.h"


/**
 *print_rev - a function that prints a string, in reverse .
 *@s: pointer to a string.
 *Return: void .
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}

void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	s += length;

	for (i = 0; i <= length; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
