#include "main.h"


/**
 *_strchr - function that locates a character in a string.
 *@s: string to serch in .
 *@c: char to search for .
 *Return: pointer to str .
 */




char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;

		if (*s == c)
			return (s);
	}

	return (0);
}
