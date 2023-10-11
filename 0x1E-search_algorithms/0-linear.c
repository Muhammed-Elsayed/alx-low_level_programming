#include "search_algos.h"
#include "stdlib.h"

/**
 * linear_search - implementing linear search algo
 * @array: ptr to the array
 * @size: length of the array
 * @value: value to search for
 * Return: index if found and -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
