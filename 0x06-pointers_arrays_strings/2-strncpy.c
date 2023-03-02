#include "main.h"


/**
 *_strncpy - a function that copies a string. .
 *@dest: ptr .
 *@src: ptr .
 *@n: int
 *Return: pointer to a string.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0, i;

	while (dest[len_dest] != '\0')
		len_dest++;

	while (src[len_src] != '\0')
		len_src++;


	if (n > len_src)
		n = len_src;


	for (i = 0; i < n; i++)
		dest[i] = src[i];

	dest[len_src] = '\0';
	return (dest);
}
