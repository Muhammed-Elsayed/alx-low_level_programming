#include "main.h"


/**
 *_strlen - a function that returns the length of a string
 *@s: pointer.
 *Return: the length.
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

/**
 *print_rev - a function that prints a string, in reverse .
 *@s: pointer to a string.
 *Return: void .
 */

void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	s += length;

	for (i = 0; i < length; i++)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
