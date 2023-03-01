#include "main.h"


/**
 *_strncat - function that concatenates two strings .
 *@dest: ptr .
 *@src: ptr .
 *@n: int
 *Return: pointer to a string.
 */


char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0, i;

	while (dest[len_dest] != '\0')
		len_dest++;

	while (src[len_src] != '\0')
		len_src++;


	dest[len_dest] = ' ';
	dest += len_dest;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	dest -= len_dest;
	return (dest);
}
