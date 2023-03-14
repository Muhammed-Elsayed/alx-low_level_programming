#include "main.h"
#include <stdlib.h>


/**
 *create_array - function that creates an array of chars.
 *@size: size of the allocated memory
 *@c: char .
 *Return: the pointer of the allocated memory
 */



char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;


	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*ptr = c;
		ptr++;
	}
	return (ptr -= size);
}
