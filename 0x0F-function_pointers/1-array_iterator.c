#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator -  function .
 *@array: ptr to array .
 *@size: size of the array .
 *@action: ptr to function .
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL)
			action(array[i]);

	}
}
