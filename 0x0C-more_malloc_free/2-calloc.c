#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array, using malloc.
 *@nmemb: length of the array
 *@size: size of the given data
 *Return: ptr .
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}

	return (ptr);




}
