#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - reserving memory and checking if it has been reserved .
 *@b: number of bits to be reserved .
 *Return: ptr .
 */


void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
