#include "main.h"
#include <stdlib.h>


/**
 *array_range -  function that creates an array of integers
 *@min: min .
 *@max: max .
 *Return: ptr .
 */


int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int range;

	if (min > max)
		return (NULL);

	range = max + 1 - min;
	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < range; i++)
	{
		*(ptr + i)  = min + i;
	}

	return (ptr);

}
