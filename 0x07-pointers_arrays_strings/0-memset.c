#include "main.h"


/**
 *_memset -  function that fills memory with a constant byte .
 *@s: array
 *@b: the string or char to be put
 *@n: int
 *Return: string .
 */



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
