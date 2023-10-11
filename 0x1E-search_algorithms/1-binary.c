#include "search_algos.h"
#include "stdlib.h"

/**
 * binary_search - implementing binary search algo
 * @array: ptr to the array
 * @size: length of the array
 * @value: value of the array
 * Return: index if found and -1 if not
 */


int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;
	int i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		middle = ((left + right) / 2);

		if (array[middle] > value)
			right = (middle - 1);

		else if (array[middle] < value)
			left = (middle + 1);

		else if (array[middle] == value)
			return (middle);
	}
	return (-1);
}
